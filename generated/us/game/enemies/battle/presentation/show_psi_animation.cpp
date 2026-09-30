// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/show_psi_animation.asm
bool resume_battle_show_psi_animation(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/show_psi_animation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E116: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E118: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E119: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E11A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E11B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D8u : 0x00FFD8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E11B.
    case 0xC2E11D: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E11E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E11F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:15 STA @VIRTUAL02
    case 0xC2E120: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E11D.
    case 0xC2E121: {
        Instruction step(cpu, 0x02, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:16 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E122: {
        Instruction step(cpu, 0xAD, 0x00ADD5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:17 AND #$00FF
    case 0xC2E125: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC2E125.
    case 0xC2E127: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:18 CMP #2
    case 0xC2E128: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:18 CMP #2
    // Overlapping static entry reached from 0xC2E128.
    case 0xC2E12A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:19 BNE @UNKNOWN1
    case 0xC2E12B: {
        Instruction step(cpu, 0xD0, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E12D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E12D.
    case 0xC2E12F: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E130: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E132: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E132.
    case 0xC2E134: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E135: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:21 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E137: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:21 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E139: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:21 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E13B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:21 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E13D: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E13F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E13F.
    case 0xC2E141: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E142: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E144: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E144.
    case 0xC2E146: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E147: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:23 LDA @VIRTUAL02
    case 0xC2E149: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E14B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E14D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E14E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E150: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E151: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:25 TAX
    case 0xC2E152: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:26 LDA f:PSI_ANIM_CFG,X
    case 0xC2E153: {
        Instruction step(cpu, 0xBF, 0xCCF04Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:27 CLC
    case 0xC2E157: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:28 ADC @VIRTUAL06
    case 0xC2E158: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:29 STA @VIRTUAL06
    case 0xC2E15A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:30 STA @LOCAL00
    case 0xC2E15C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:31 LDA @VIRTUAL06+2
    case 0xC2E15E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:32 STA @LOCAL00+2
    case 0xC2E160: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E162: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E164: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E166: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E183.
    case 0xC2E167: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E168: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E167.
    case 0xC2E169: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E16A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E16C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E16E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E170: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:35 JSL DECOMP
    case 0xC2E172: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E176: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E178: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E17A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E17C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E17E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E17E.
    case 0xC2E180: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E181: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E181.
    case 0xC2E183: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E184: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E183.
    case 0xC2E185: {
        Instruction step(cpu, 0x20, 0x002298u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1207 TYA
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E186: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E187: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E185.
    case 0xC2E188: {
        Instruction step(cpu, 0xB7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E188.
    case 0xC2E18A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0060A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    case 0xC2E18B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000060u : 0x000260u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC2E18A.
    case 0xC2E18C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC2E18B.
    case 0xC2E18D: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:39 STA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E18E: {
        Instruction step(cpu, 0x8D, 0x001BCAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:40 JMP @UNKNOWN6
    case 0xC2E191: {
        Instruction step(cpu, 0x4C, 0x00E2F0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E194: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E194.
    case 0xC2E196: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E197: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E199: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E199.
    case 0xC2E19B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E19C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:43 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E19E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:43 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E1A0: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:43 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E1A2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:43 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E1A4: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E1A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E1A6.
    case 0xC2E1A8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E1A9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E1AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E1AB.
    case 0xC2E1AD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E1AE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:45 LDA @VIRTUAL02
    case 0xC2E1B0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B5: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:47 TAX
    case 0xC2E1B9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:48 LDA f:PSI_ANIM_CFG,X
    case 0xC2E1BA: {
        Instruction step(cpu, 0xBF, 0xCCF04Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:49 CLC
    case 0xC2E1BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:50 ADC @VIRTUAL06
    case 0xC2E1BF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:51 STA @VIRTUAL06
    case 0xC2E1C1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:52 STA @LOCAL00
    case 0xC2E1C3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:53 LDA @VIRTUAL06+2
    case 0xC2E1C5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:54 STA @LOCAL00+2
    case 0xC2E1C7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:55 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E1C9: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:55 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E1CB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:55 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E1CD: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:55 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E1CF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E1D1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E1D3: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E1D5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E1D7: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:57 JSL DECOMP
    case 0xC2E1D9: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E1DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E1DD.
    case 0xC2E1DF: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E1E0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E1E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E1E2.
    case 0xC2E1E4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E1E5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:59 LDX #0
    case 0xC2E1E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:59 LDX #0
    // Overlapping static entry reached from 0xC2E1E7.
    case 0xC2E1E9: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:60 JMP @UNKNOWN4
    case 0xC2E1EA: {
        Instruction step(cpu, 0x4C, 0x00E2C9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:62 LDA [@VIRTUAL06]
    case 0xC2E1ED: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:63 STA [@VIRTUAL0A]
    case 0xC2E1EF: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:64 INC @VIRTUAL06
    case 0xC2E1F1: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:65 INC @VIRTUAL06
    case 0xC2E1F3: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:66 INC @VIRTUAL0A
    case 0xC2E1F5: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:67 INC @VIRTUAL0A
    case 0xC2E1F7: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:68 LDA [@VIRTUAL06]
    case 0xC2E1F9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:69 STA [@VIRTUAL0A]
    case 0xC2E1FB: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:70 INC @VIRTUAL06
    case 0xC2E1FD: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:71 INC @VIRTUAL06
    case 0xC2E1FF: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:72 INC @VIRTUAL0A
    case 0xC2E201: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:73 INC @VIRTUAL0A
    case 0xC2E203: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:74 LDA [@VIRTUAL06]
    case 0xC2E205: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:75 STA [@VIRTUAL0A]
    case 0xC2E207: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:76 INC @VIRTUAL06
    case 0xC2E209: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:77 INC @VIRTUAL06
    case 0xC2E20B: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:78 INC @VIRTUAL0A
    case 0xC2E20D: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:79 INC @VIRTUAL0A
    case 0xC2E20F: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:80 LDA [@VIRTUAL06]
    case 0xC2E211: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:81 STA [@VIRTUAL0A]
    case 0xC2E213: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:82 INC @VIRTUAL06
    case 0xC2E215: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:83 INC @VIRTUAL06
    case 0xC2E217: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:84 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E219: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:84 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E21B: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:84 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E21D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:84 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E21F: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:85 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E221: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:85 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E223: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:85 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E225: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:85 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E227: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:86 INC @VIRTUAL06
    case 0xC2E229: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:87 INC @VIRTUAL06
    case 0xC2E22B: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:88 LDA [@LOCAL07]
    case 0xC2E22D: {
        Instruction step(cpu, 0xA7, 0x000024u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:89 STA [@VIRTUAL06]
    case 0xC2E22F: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:90 MOVE_INT @LOCAL07, @VIRTUAL0A
    case 0xC2E231: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:90 MOVE_INT @LOCAL07, @VIRTUAL0A
    case 0xC2E233: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:90 MOVE_INT @LOCAL07, @VIRTUAL0A
    case 0xC2E235: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:90 MOVE_INT @LOCAL07, @VIRTUAL0A
    case 0xC2E237: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:91 INC @VIRTUAL0A
    case 0xC2E239: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:92 INC @VIRTUAL0A
    case 0xC2E23B: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:93 INC @VIRTUAL06
    case 0xC2E23D: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:94 INC @VIRTUAL06
    case 0xC2E23F: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:95 LDA [@VIRTUAL0A]
    case 0xC2E241: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:96 STA [@VIRTUAL06]
    case 0xC2E243: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:97 INC @VIRTUAL0A
    case 0xC2E245: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:98 INC @VIRTUAL0A
    case 0xC2E247: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:99 INC @VIRTUAL06
    case 0xC2E249: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:100 INC @VIRTUAL06
    case 0xC2E24B: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:101 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E24D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:101 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E24F: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:101 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E251: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:101 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E253: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:102 LDA [@VIRTUAL0A]
    case 0xC2E255: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:103 STA [@VIRTUAL06]
    case 0xC2E257: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E259: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E25B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E2D5.
    case 0xC2E25C: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E25D: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E25C.
    case 0xC2E25E: {
        Instruction step(cpu, 0x0C, 0x000885u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E25F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:105 INC @VIRTUAL06
    case 0xC2E261: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:106 INC @VIRTUAL06
    case 0xC2E263: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:107 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E265: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:107 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E267: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:107 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E269: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:107 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E26B: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:108 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC2E26D: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:108 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC2E26F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:108 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC2E271: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:108 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC2E273: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2E275: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2E277: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2E279: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2E27B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:110 INC @VIRTUAL0A
    case 0xC2E27D: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:111 INC @VIRTUAL0A
    case 0xC2E27F: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:112 LDA [@LOCAL05]
    case 0xC2E281: {
        Instruction step(cpu, 0xA7, 0x00001Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:113 STA [@VIRTUAL0A]
    case 0xC2E283: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC2E285: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC2E287: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC2E289: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CC0.
    case 0xC2E28A: {
        Instruction step(cpu, 0x1E, 0x000885u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC2E28B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:115 INC @VIRTUAL06
    case 0xC2E28D: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:116 INC @VIRTUAL06
    case 0xC2E28F: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:117 INC @VIRTUAL0A
    case 0xC2E291: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:118 INC @VIRTUAL0A
    case 0xC2E293: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:119 LDA #0
    case 0xC2E295: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:119 LDA #0
    // Overlapping static entry reached from 0xC2E295.
    case 0xC2E297: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:120 STA [@VIRTUAL0A]
    case 0xC2E298: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:121 INC @VIRTUAL0A
    case 0xC2E29A: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:122 INC @VIRTUAL0A
    case 0xC2E29C: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:123 STA [@VIRTUAL0A]
    case 0xC2E29E: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:124 INC @VIRTUAL0A
    case 0xC2E2A0: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:125 INC @VIRTUAL0A
    case 0xC2E2A2: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:126 STA [@VIRTUAL0A]
    case 0xC2E2A4: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:127 INC @VIRTUAL0A
    case 0xC2E2A6: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:128 INC @VIRTUAL0A
    case 0xC2E2A8: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:129 STA [@VIRTUAL0A]
    case 0xC2E2AA: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:130 INC @VIRTUAL0A
    case 0xC2E2AC: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:131 INC @VIRTUAL0A
    case 0xC2E2AE: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:132 STA [@VIRTUAL0A]
    case 0xC2E2B0: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:133 INC @VIRTUAL0A
    case 0xC2E2B2: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:134 INC @VIRTUAL0A
    case 0xC2E2B4: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:135 STA [@VIRTUAL0A]
    case 0xC2E2B6: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:136 INC @VIRTUAL0A
    case 0xC2E2B8: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:137 INC @VIRTUAL0A
    case 0xC2E2BA: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:138 STA [@VIRTUAL0A]
    case 0xC2E2BC: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:139 INC @VIRTUAL0A
    case 0xC2E2BE: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:140 INC @VIRTUAL0A
    case 0xC2E2C0: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:141 STA [@VIRTUAL0A]
    case 0xC2E2C2: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:142 INC @VIRTUAL0A
    case 0xC2E2C4: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:143 INC @VIRTUAL0A
    case 0xC2E2C6: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:144 INX
    case 0xC2E2C8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:146 CPX #256
    case 0xC2E2C9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:146 CPX #256
    // Overlapping static entry reached from 0xC2E2C9.
    case 0xC2E2CB: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    case 0xC2E2CC: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E2CB.
    case 0xC2E2CD: {
        Instruction step(cpu, 0x05, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    case 0xC2E2CE: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E2CD.
    case 0xC2E2CF: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    case 0xC2E2D0: {
        Instruction step(cpu, 0x4C, 0x00E1EDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E2CF.
    case 0xC2E2D1: {
        Instruction step(cpu, 0xED, 0x00A9E1u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2D1.
    case 0xC2E2D4: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2D3.
    case 0xC2E2D5: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2D6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2D8.
    case 0xC2E2DA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2DB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2DD.
    case 0xC2E2DF: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2E0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2E0.
    case 0xC2E2E2: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2E3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1207 TYA
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2E5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2E6: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:150 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2E2EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000280u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:150 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2E2EA.
    case 0xC2E2EC: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:151 STA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E2ED: {
        Instruction step(cpu, 0x8D, 0x001BCAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:153 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC2E2F0: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E2F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00F47Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E2F4.
    case 0xC2E2F6: {
        Instruction step(cpu, 0xF4, 0x000685u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E2F7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E2F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E2F9.
    case 0xC2E2FB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E2FC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:155 LDA @VIRTUAL02
    case 0xC2E2FE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:156 ASL
    case 0xC2E300: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:157 ASL
    case 0xC2E301: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:158 ASL
    case 0xC2E302: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:159 CLC
    case 0xC2E303: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:160 ADC @VIRTUAL06
    case 0xC2E304: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:161 STA @VIRTUAL06
    case 0xC2E306: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:162 STA @LOCAL00
    case 0xC2E308: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:163 LDA @VIRTUAL06+2
    case 0xC2E30A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:164 STA @LOCAL00+2
    case 0xC2E30C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:165 LDX #8
    case 0xC2E30E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:165 LDX #8
    // Overlapping static entry reached from 0xC2E30E.
    case 0xC2E310: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:166 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette
    case 0xC2E311: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AAu : 0x001BAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:166 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette
    // Overlapping static entry reached from 0xC2E311.
    case 0xC2E313: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:167 JSL MEMCPY16
    case 0xC2E314: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:168 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E318: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:168 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E31A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:168 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E31C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:168 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E31E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:169 LDX #8
    case 0xC2E320: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:169 LDX #8
    // Overlapping static entry reached from 0xC2E320.
    case 0xC2E322: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:170 LDA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E323: {
        Instruction step(cpu, 0xAD, 0x001BCAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:171 JSL MEMCPY16
    case 0xC2E326: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E32A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E32A.
    case 0xC2E32C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E32D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E32F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E32F.
    case 0xC2E331: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E332: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:173 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E334: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:173 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E336: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:173 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E338: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:173 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E33A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:174 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E33C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:174 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E33E: {
        Instruction step(cpu, 0x8D, 0x001BA1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:174 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E341: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:174 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E343: {
        Instruction step(cpu, 0x8D, 0x001BA3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E346: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:176 LDA #1
    case 0xC2E348: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:177 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E34A: {
        Instruction step(cpu, 0x8D, 0x001B9Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:177 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    // Overlapping static entry reached from 0xC2E348.
    case 0xC2E34B: {
        Instruction step(cpu, 0x9E, 0x00C21Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC2E34D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:178 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E34B.
    case 0xC2E34E: {
        Instruction step(cpu, 0x20, 0x004DA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E34F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Du : 0x00F04Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E34F.
    case 0xC2E351: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E352: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E351.
    case 0xC2E353: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E354: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E353.
    case 0xC2E355: {
        Instruction step(cpu, 0xCC, 0x008500u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E354.
    case 0xC2E356: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E357: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E355.
    case 0xC2E358: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:180 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E359: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:180 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E35B: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:180 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E35D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:180 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E35F: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:181 LDA @VIRTUAL02
    case 0xC2E361: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E363: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E365: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E366: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E368: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E369: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:183 STA @LOCAL04
    case 0xC2E36A: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:184 INC
    case 0xC2E36C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:185 INC
    case 0xC2E36D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:186 CLC
    case 0xC2E36E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:187 ADC @VIRTUAL06
    case 0xC2E36F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:188 STA @VIRTUAL06
    case 0xC2E371: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:189 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E373: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:190 LDA [@VIRTUAL06]
    case 0xC2E375: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:191 STA PSI_ANIMATION_STATE + psi_animation_state::frame_hold_frames
    case 0xC2E377: {
        Instruction step(cpu, 0x8D, 0x001B9Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:192 REP #PROC_FLAGS::ACCUM8
    case 0xC2E37A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:193 LDA @LOCAL04
    case 0xC2E37C: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:194 CLC
    case 0xC2E37E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:195 ADC #6
    case 0xC2E37F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:195 ADC #6
    // Overlapping static entry reached from 0xC2E37F.
    case 0xC2E381: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E382: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E384: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E386: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E388: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:197 CLC
    case 0xC2E38A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:198 ADC @VIRTUAL06
    case 0xC2E38B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:199 STA @VIRTUAL06
    case 0xC2E38D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:200 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E38F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:201 LDA [@VIRTUAL06]
    case 0xC2E391: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:202 STA PSI_ANIMATION_STATE + psi_animation_state::total_frames
    case 0xC2E393: {
        Instruction step(cpu, 0x8D, 0x001BA0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:203 REP #PROC_FLAGS::ACCUM8
    case 0xC2E396: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:204 LDA @LOCAL04
    case 0xC2E398: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:205 INC
    case 0xC2E39A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:206 INC
    case 0xC2E39B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:207 INC
    case 0xC2E39C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:208 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E39D: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:208 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E39F: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:208 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3A1: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:208 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3A3: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:209 CLC
    case 0xC2E3A5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:210 ADC @VIRTUAL06
    case 0xC2E3A6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:211 STA @VIRTUAL06
    case 0xC2E3A8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:212 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E3AA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:213 LDA [@VIRTUAL06]
    case 0xC2E3AC: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:214 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_frames
    case 0xC2E3AE: {
        Instruction step(cpu, 0x8D, 0x001BA8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:215 REP #PROC_FLAGS::ACCUM8
    case 0xC2E3B1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:216 LDA @LOCAL04
    case 0xC2E3B3: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:217 INC
    case 0xC2E3B5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:218 INC
    case 0xC2E3B6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:219 INC
    case 0xC2E3B7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:220 INC
    case 0xC2E3B8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:221 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3B9: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:221 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3BB: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:221 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3BD: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:221 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3BF: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:222 CLC
    case 0xC2E3C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:223 ADC @VIRTUAL06
    case 0xC2E3C2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:224 STA @VIRTUAL06
    case 0xC2E3C4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E3C6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:226 LDA [@VIRTUAL06]
    case 0xC2E3C8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:227 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_lower_index
    case 0xC2E3CA: {
        Instruction step(cpu, 0x8D, 0x001BA5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:228 REP #PROC_FLAGS::ACCUM8
    case 0xC2E3CD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:229 LDA @LOCAL04
    case 0xC2E3CF: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:230 CLC
    case 0xC2E3D1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:231 ADC #5
    case 0xC2E3D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:231 ADC #5
    // Overlapping static entry reached from 0xC2E3D2.
    case 0xC2E3D4: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:232 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3D5: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:232 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3D7: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:232 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3D9: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:232 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3DB: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:233 CLC
    case 0xC2E3DD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:234 ADC @VIRTUAL06
    case 0xC2E3DE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:235 STA @VIRTUAL06
    case 0xC2E3E0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:236 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E3E2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:237 LDA [@VIRTUAL06]
    case 0xC2E3E4: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:238 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_upper_index
    case 0xC2E3E6: {
        Instruction step(cpu, 0x8D, 0x001BA6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:239 STZ PSI_ANIMATION_STATE + psi_animation_state::palette_animation_current_index
    case 0xC2E3E9: {
        Instruction step(cpu, 0x9C, 0x001BA7u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:240 LDA #1
    case 0xC2E3EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:241 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_time_until_next_frame
    case 0xC2E3EE: {
        Instruction step(cpu, 0x8D, 0x001BA9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:241 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_time_until_next_frame
    // Overlapping static entry reached from 0xC2E3EC.
    case 0xC2E3EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00C21Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:242 REP #PROC_FLAGS::ACCUM8
    case 0xC2E3F1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:242 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E3EF.
    case 0xC2E3F2: {
        Instruction step(cpu, 0x20, 0x001AA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:243 LDA @LOCAL04
    case 0xC2E3F3: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:244 CLC
    case 0xC2E3F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:245 ADC #8
    case 0xC2E3F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:245 ADC #8
    // Overlapping static entry reached from 0xC2E3F6.
    case 0xC2E3F8: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:246 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3F9: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:246 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3FB: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:246 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3FD: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:246 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3FF: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:247 CLC
    case 0xC2E401: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:248 ADC @VIRTUAL06
    case 0xC2E402: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:249 STA @VIRTUAL06
    case 0xC2E404: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:250 LDA [@VIRTUAL06]
    case 0xC2E406: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:251 AND #$00FF
    case 0xC2E408: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:251 AND #$00FF
    // Overlapping static entry reached from 0xC2E408.
    case 0xC2E40A: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:252 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_start_frames_left
    case 0xC2E40B: {
        Instruction step(cpu, 0x8D, 0x001BCCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:253 LDA @LOCAL04
    case 0xC2E40E: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:254 CLC
    case 0xC2E410: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:255 ADC #9
    case 0xC2E411: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:255 ADC #9
    // Overlapping static entry reached from 0xC2E411.
    case 0xC2E413: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:256 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E414: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:256 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E416: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:256 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E418: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:256 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E41A: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:257 CLC
    case 0xC2E41C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:258 ADC @VIRTUAL06
    case 0xC2E41D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:259 STA @VIRTUAL06
    case 0xC2E41F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:260 LDA [@VIRTUAL06]
    case 0xC2E421: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:261 AND #$00FF
    case 0xC2E423: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:261 AND #$00FF
    // Overlapping static entry reached from 0xC2E423.
    case 0xC2E425: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:262 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_frames_left
    case 0xC2E426: {
        Instruction step(cpu, 0x8D, 0x001BCEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:263 LDA @LOCAL04
    case 0xC2E429: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:264 CLC
    case 0xC2E42B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:265 ADC #10
    case 0xC2E42C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:265 ADC #10
    // Overlapping static entry reached from 0xC2E42C.
    case 0xC2E42E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:266 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E42F: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:266 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E431: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:266 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E433: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:266 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E435: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:267 CLC
    case 0xC2E437: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:268 ADC @VIRTUAL06
    case 0xC2E438: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:269 STA @VIRTUAL06
    case 0xC2E43A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:270 LDA [@VIRTUAL06]
    case 0xC2E43C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:271 AND #$001F
    case 0xC2E43E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:271 AND #$001F
    // Overlapping static entry reached from 0xC2E43E.
    case 0xC2E440: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:272 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_red
    case 0xC2E441: {
        Instruction step(cpu, 0x8D, 0x001BD0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:273 LDA [@VIRTUAL06]
    case 0xC2E444: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:274 LSR
    case 0xC2E446: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:275 LSR
    case 0xC2E447: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:276 LSR
    case 0xC2E448: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:277 LSR
    case 0xC2E449: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:278 LSR
    case 0xC2E44A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:279 AND #$001F
    case 0xC2E44B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:279 AND #$001F
    // Overlapping static entry reached from 0xC2E44B.
    case 0xC2E44D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:280 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_green
    case 0xC2E44E: {
        Instruction step(cpu, 0x8D, 0x001BD2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:281 SEP #PROC_FLAGS::INDEX8
    case 0xC2E451: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:282 LDY #10
    case 0xC2E453: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00A70Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:283 LDA [@VIRTUAL06]
    case 0xC2E455: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:283 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2E453.
    case 0xC2E456: {
        Instruction step(cpu, 0x06, 0x000022u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:284 JSL ASR8_UNKNOWN1
    case 0xC2E457: {
        Instruction step(cpu, 0x22, 0xC09251u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:284 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2E456.
    case 0xC2E458: {
        Instruction step(cpu, 0x51, 0x000092u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:284 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2E458.
    case 0xC2E45A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000029u : 0x001F29u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:285 AND #$001F
    case 0xC2E45B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:285 AND #$001F
    // Overlapping static entry reached from 0xC2E45A.
    case 0xC2E45C: {
        Instruction step(cpu, 0x1F, 0xD48D00u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:285 AND #$001F
    // Overlapping static entry reached from 0xC2E45B.
    case 0xC2E45D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:286 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    case 0xC2E45E: {
        Instruction step(cpu, 0x8D, 0x001BD4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:286 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    // Overlapping static entry reached from 0xC2E45C.
    case 0xC2E460: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E461: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Fu : 0x00F58Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E461.
    case 0xC2E463: {
        Instruction step(cpu, 0xF5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E464: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E463.
    case 0xC2E465: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E466: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E465.
    case 0xC2E467: {
        Instruction step(cpu, 0xCC, 0x008500u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E466.
    case 0xC2E468: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E469: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E467.
    case 0xC2E46A: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:288 LDA @VIRTUAL02
    case 0xC2E46B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:289 ASL
    case 0xC2E46D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:290 ASL
    case 0xC2E46E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:291 CLC
    case 0xC2E46F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:292 ADC @VIRTUAL06
    case 0xC2E470: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:293 STA @VIRTUAL06
    case 0xC2E472: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:294 REP #PROC_FLAGS::INDEX8
    case 0xC2E474: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E476: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E476.
    case 0xC2E478: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E479: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E47B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E47C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E47E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E480: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E482: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E484: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E486: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E488: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:297 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E48A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:297 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E48C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:297 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E48E: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:297 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E490: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:298 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E492: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:298 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E494: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:298 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E496: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:298 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E498: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:299 JSL DECOMP
    case 0xC2E49A: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:300 JSL UNKNOWN_C2DE0F
    case 0xC2E49E: {
        Instruction step(cpu, 0x22, 0xC2DE0Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E4A2.
    case 0xC2E4A4: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4A5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E4A4.
    case 0xC2E4A6: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4A7: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4AA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4AB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4AD: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:302 REP #PROC_FLAGS::ACCUM8
    case 0xC2E4AF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:303 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E4B1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:303 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E4B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:303 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E4B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:303 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E4B7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:304 LDX #128
    case 0xC2E4B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:304 LDX #128
    // Overlapping static entry reached from 0xC2E4B9.
    case 0xC2E4BB: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:305 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC2E4BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:305 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC2E4BC.
    case 0xC2E4BE: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:306 JSL MEMCPY16
    case 0xC2E4BF: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:306 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2E4BE.
    case 0xC2E4C0: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:306 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2E4C0.
    case 0xC2E4C2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:307 LDA #0
    case 0xC2E4C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:307 LDA #0
    // Overlapping static entry reached from 0xC2E4C2.
    case 0xC2E4C4: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:307 LDA #0
    // Overlapping static entry reached from 0xC2E4C3.
    case 0xC2E4C5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:308 STA @LOCAL04
    case 0xC2E4C6: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:309 BRA @UNKNOWN8
    case 0xC2E4C8: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:311 ASL
    case 0xC2E4CA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:312 TAX
    case 0xC2E4CB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:313 STZ PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E4CC: {
        Instruction step(cpu, 0x9E, 0x00AEE7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:314 LDA @LOCAL04
    case 0xC2E4CF: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:315 INC
    case 0xC2E4D1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:316 STA @LOCAL04
    case 0xC2E4D2: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:318 CMP #4
    case 0xC2E4D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:318 CMP #4
    // Overlapping static entry reached from 0xC2E4D4.
    case 0xC2E4D6: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:319 BCC @UNKNOWN7
    case 0xC2E4D7: {
        Instruction step(cpu, 0x90, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:320 LDX CURRENT_TARGET
    case 0xC2E4D9: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:321 LDA a:battler::consciousness,X
    case 0xC2E4DC: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:322 AND #$00FF
    case 0xC2E4DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:322 AND #$00FF
    // Overlapping static entry reached from 0xC2E4DF.
    case 0xC2E4E1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/show_psi_animation.asm:323 BEQL @UNKNOWN26
    case 0xC2E4E2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:323 BEQL @UNKNOWN26
    case 0xC2E4E4: {
        Instruction step(cpu, 0x4C, 0x00E6B1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:324 LDX CURRENT_TARGET
    case 0xC2E4E7: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:325 LDA a:battler::ally_or_enemy,X
    case 0xC2E4EA: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:326 AND #$00FF
    case 0xC2E4ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:326 AND #$00FF
    // Overlapping static entry reached from 0xC2E4ED.
    case 0xC2E4EF: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:327 CMP #1
    case 0xC2E4F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:327 CMP #1
    // Overlapping static entry reached from 0xC2E4F0.
    case 0xC2E4F2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/show_psi_animation.asm:328 BNEL @UNKNOWN26
    case 0xC2E4F3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:328 BNEL @UNKNOWN26
    case 0xC2E4F5: {
        Instruction step(cpu, 0x4C, 0x00E6B1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:329 STZ PSI_ANIMATION_X_OFFSET
    case 0xC2E4F8: {
        Instruction step(cpu, 0x9C, 0x00AD9Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:330 LDA @VIRTUAL02
    case 0xC2E4FB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E4FD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E4FF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E500: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E502: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E503: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:332 CLC
    case 0xC2E504: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:333 ADC #7
    case 0xC2E505: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:333 ADC #7
    // Overlapping static entry reached from 0xC2E505.
    case 0xC2E507: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:334 TAX
    case 0xC2E508: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:335 LDA f:PSI_ANIM_CFG,X
    case 0xC2E509: {
        Instruction step(cpu, 0xBF, 0xCCF04Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:336 AND #$00FF
    case 0xC2E50D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC2E50D.
    case 0xC2E50F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:337 BEQ @UNKNOWN12
    case 0xC2E510: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:338 CMP #3
    case 0xC2E512: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:338 CMP #3
    // Overlapping static entry reached from 0xC2E512.
    case 0xC2E514: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:339 BEQ @UNKNOWN12
    case 0xC2E515: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:340 CMP #1
    case 0xC2E517: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:340 CMP #1
    // Overlapping static entry reached from 0xC2E517.
    case 0xC2E519: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:341 BEQ @UNKNOWN14
    case 0xC2E51A: {
        Instruction step(cpu, 0xF0, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:342 CMP #2
    case 0xC2E51C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:342 CMP #2
    // Overlapping static entry reached from 0xC2E51C.
    case 0xC2E51E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/show_psi_animation.asm:343 BEQL @UNKNOWN20
    case 0xC2E51F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:343 BEQL @UNKNOWN20
    case 0xC2E521: {
        Instruction step(cpu, 0x4C, 0x00E637u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:344 JMP @UNKNOWN24
    case 0xC2E524: {
        Instruction step(cpu, 0x4C, 0x00E68Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:346 LDX CURRENT_TARGET
    case 0xC2E527: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:347 LDA a:battler::sprite_x,X
    case 0xC2E52A: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:348 AND #$00FF
    case 0xC2E52D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:348 AND #$00FF
    // Overlapping static entry reached from 0xC2E52D.
    case 0xC2E52F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:349 STA @VIRTUAL02
    case 0xC2E530: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:350 LDA #128
    case 0xC2E532: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:350 LDA #128
    // Overlapping static entry reached from 0xC2E532.
    case 0xC2E534: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:351 SEC
    case 0xC2E535: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:352 SBC @VIRTUAL02
    case 0xC2E536: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:353 STA PSI_ANIMATION_X_OFFSET
    case 0xC2E538: {
        Instruction step(cpu, 0x8D, 0x00AD9Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:354 LDX CURRENT_TARGET
    case 0xC2E53B: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:355 LDA a:battler::sprite_y,X
    case 0xC2E53E: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:356 AND #$00FF
    case 0xC2E541: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:356 AND #$00FF
    // Overlapping static entry reached from 0xC2E541.
    case 0xC2E543: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:357 STA @VIRTUAL02
    case 0xC2E544: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:358 LDA #144
    case 0xC2E546: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x000090u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:358 LDA #144
    // Overlapping static entry reached from 0xC2E546.
    case 0xC2E548: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:359 SEC
    case 0xC2E549: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:360 SBC @VIRTUAL02
    case 0xC2E54A: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:361 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E54C: {
        Instruction step(cpu, 0x8D, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:362 LDX CURRENT_TARGET
    case 0xC2E54F: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:363 LDA a:battler::sprite,X
    case 0xC2E552: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:364 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2E555: {
        Instruction step(cpu, 0x20, 0x00F04Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:365 CMP #8
    case 0xC2E558: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:365 CMP #8
    // Overlapping static entry reached from 0xC2E558.
    case 0xC2E55A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:366 BNE @UNKNOWN13
    case 0xC2E55B: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:367 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E55D: {
        Instruction step(cpu, 0xAD, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:368 CLC
    case 0xC2E560: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:369 ADC #16
    case 0xC2E561: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:369 ADC #16
    // Overlapping static entry reached from 0xC2E561.
    case 0xC2E563: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:370 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E564: {
        Instruction step(cpu, 0x8D, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E567: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:373 LDA #1
    case 0xC2E569: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:374 LDX CURRENT_TARGET
    case 0xC2E56B: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:374 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2E569.
    case 0xC2E56C: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:375 STA a:battler::use_alt_spritemap,X
    case 0xC2E56E: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:376 LDX CURRENT_TARGET
    case 0xC2E571: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:377 REP #PROC_FLAGS::ACCUM8
    case 0xC2E574: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:378 LDA a:battler::vram_sprite_index,X
    case 0xC2E576: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:379 AND #$00FF
    case 0xC2E579: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:379 AND #$00FF
    // Overlapping static entry reached from 0xC2E579.
    case 0xC2E57B: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:380 ASL
    case 0xC2E57C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:381 TAX
    case 0xC2E57D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:382 LDA #1
    case 0xC2E57E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:382 LDA #1
    // Overlapping static entry reached from 0xC2E57E.
    case 0xC2E580: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:383 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E581: {
        Instruction step(cpu, 0x9D, 0x00AEE7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:384 JMP @UNKNOWN24
    case 0xC2E584: {
        Instruction step(cpu, 0x4C, 0x00E68Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:386 LDX CURRENT_TARGET
    case 0xC2E587: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:387 LDA a:battler::sprite_y,X
    case 0xC2E58A: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:388 AND #$00FF
    case 0xC2E58D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:388 AND #$00FF
    // Overlapping static entry reached from 0xC2E58D.
    case 0xC2E58F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:389 STA @VIRTUAL02
    case 0xC2E590: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:390 LDA #144
    case 0xC2E592: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x000090u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:390 LDA #144
    // Overlapping static entry reached from 0xC2E592.
    case 0xC2E594: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:391 SEC
    case 0xC2E595: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:392 SBC @VIRTUAL02
    case 0xC2E596: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:393 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E598: {
        Instruction step(cpu, 0x8D, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:394 LDY #0
    case 0xC2E59B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:394 LDY #0
    // Overlapping static entry reached from 0xC2E59B.
    case 0xC2E59D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:395 STY @LOCAL04
    case 0xC2E59E: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:396 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2E5A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:396 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2E5A0.
    case 0xC2E5A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:397 STA @VIRTUAL02
    case 0xC2E5A3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:397 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E5A2.
    case 0xC2E5A4: {
        Instruction step(cpu, 0x02, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:398 LDX #8
    case 0xC2E5A5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:398 LDX #8
    // Overlapping static entry reached from 0xC2E5A5.
    case 0xC2E5A7: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:399 STX @LOCAL03
    case 0xC2E5A8: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:400 BRA @UNKNOWN18
    case 0xC2E5AA: {
        Instruction step(cpu, 0x80, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:402 LDX @VIRTUAL02
    case 0xC2E5AC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:403 LDA a:battler::consciousness,X
    case 0xC2E5AE: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:404 AND #$00FF
    case 0xC2E5B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC2E5B1.
    case 0xC2E5B3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:405 BEQ @UNKNOWN17
    case 0xC2E5B4: {
        Instruction step(cpu, 0xF0, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:406 LDX @VIRTUAL02
    case 0xC2E5B6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:407 LDA a:battler::ally_or_enemy,X
    case 0xC2E5B8: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:408 AND #$00FF
    case 0xC2E5BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:408 AND #$00FF
    // Overlapping static entry reached from 0xC2E5BB.
    case 0xC2E5BD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:409 CMP #1
    case 0xC2E5BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:409 CMP #1
    // Overlapping static entry reached from 0xC2E5BE.
    case 0xC2E5C0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:410 BNE @UNKNOWN17
    case 0xC2E5C1: {
        Instruction step(cpu, 0xD0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:411 LDX @VIRTUAL02
    case 0xC2E5C3: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:412 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2E5C5: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:413 AND #$00FF
    case 0xC2E5C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC2E5C8.
    case 0xC2E5CA: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:414 CMP #1
    case 0xC2E5CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:414 CMP #1
    // Overlapping static entry reached from 0xC2E5CB.
    case 0xC2E5CD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:415 BEQ @UNKNOWN17
    case 0xC2E5CE: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:416 LDX @VIRTUAL02
    case 0xC2E5D0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:417 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E5D2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:418 LDA a:battler::sprite_y,X
    case 0xC2E5D4: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:419 LDX CURRENT_TARGET
    case 0xC2E5D7: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:420 CMP a:battler::sprite_y,X
    case 0xC2E5DA: {
        Instruction step(cpu, 0xDD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:421 BNE @UNKNOWN17
    case 0xC2E5DD: {
        Instruction step(cpu, 0xD0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:422 LDX @VIRTUAL02
    case 0xC2E5DF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:423 REP #PROC_FLAGS::ACCUM8
    case 0xC2E5E1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:424 LDA a:battler::sprite,X
    case 0xC2E5E3: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:425 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2E5E6: {
        Instruction step(cpu, 0x20, 0x00F04Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:426 CMP #8
    case 0xC2E5E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:426 CMP #8
    // Overlapping static entry reached from 0xC2E5E9.
    case 0xC2E5EB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:427 BNE @UNKNOWN16
    case 0xC2E5EC: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:428 LDY #1
    case 0xC2E5EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:428 LDY #1
    // Overlapping static entry reached from 0xC2E5EE.
    case 0xC2E5F0: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:429 STY @LOCAL04
    case 0xC2E5F1: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:431 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E5F3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:432 LDA #1
    case 0xC2E5F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:433 LDX @VIRTUAL02
    case 0xC2E5F7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:433 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2E5F5.
    case 0xC2E5F8: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:434 STA a:battler::use_alt_spritemap,X
    case 0xC2E5F9: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:435 LDX @VIRTUAL02
    case 0xC2E5FC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:436 REP #PROC_FLAGS::ACCUM8
    case 0xC2E5FE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:437 LDA a:battler::vram_sprite_index,X
    case 0xC2E600: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:438 AND #$00FF
    case 0xC2E603: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:438 AND #$00FF
    // Overlapping static entry reached from 0xC2E603.
    case 0xC2E605: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:439 ASL
    case 0xC2E606: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:440 TAX
    case 0xC2E607: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:441 LDA #1
    case 0xC2E608: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:441 LDA #1
    // Overlapping static entry reached from 0xC2E608.
    case 0xC2E60A: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:442 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E60B: {
        Instruction step(cpu, 0x9D, 0x00AEE7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:444 REP #PROC_FLAGS::ACCUM8
    case 0xC2E60E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:445 LDA @VIRTUAL02
    case 0xC2E610: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:446 CLC
    case 0xC2E612: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:447 ADC #.SIZEOF(battler)
    case 0xC2E613: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:447 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2E613.
    case 0xC2E615: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:448 STA @VIRTUAL02
    case 0xC2E616: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:449 LDX @LOCAL03
    case 0xC2E618: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:450 INX
    case 0xC2E61A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:451 STX @LOCAL03
    case 0xC2E61B: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:453 CPX #32
    case 0xC2E61D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:453 CPX #32
    // Overlapping static entry reached from 0xC2E61D.
    case 0xC2E61F: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation.asm:454 BCCL @UNKNOWN15
    case 0xC2E620: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation.asm:454 BCCL @UNKNOWN15
    case 0xC2E622: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:454 BCCL @UNKNOWN15
    case 0xC2E624: {
        Instruction step(cpu, 0x4C, 0x00E5ACu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:455 LDY @LOCAL04
    case 0xC2E627: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:456 BEQ @UNKNOWN24
    case 0xC2E629: {
        Instruction step(cpu, 0xF0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:457 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E62B: {
        Instruction step(cpu, 0xAD, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:458 CLC
    case 0xC2E62E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:459 ADC #16
    case 0xC2E62F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:459 ADC #16
    // Overlapping static entry reached from 0xC2E62F.
    case 0xC2E631: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:460 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E632: {
        Instruction step(cpu, 0x8D, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:461 BRA @UNKNOWN24
    case 0xC2E635: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:463 LDA #16
    case 0xC2E637: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:463 LDA #16
    // Overlapping static entry reached from 0xC2E637.
    case 0xC2E639: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:464 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E63A: {
        Instruction step(cpu, 0x8D, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:465 LDY #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2E63D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:465 LDY #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2E63D.
    case 0xC2E63F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000A2u : 0x0008A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:466 LDX #8
    case 0xC2E640: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:466 LDX #8
    // Overlapping static entry reached from 0xC2E63F.
    case 0xC2E641: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:466 LDX #8
    // Overlapping static entry reached from 0xC2E640.
    case 0xC2E642: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:467 STX @LOCAL02
    case 0xC2E643: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:468 BRA @UNKNOWN23
    case 0xC2E645: {
        Instruction step(cpu, 0x80, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:470 LDA a:battler::consciousness,Y
    case 0xC2E647: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:471 AND #$00FF
    case 0xC2E64A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:471 AND #$00FF
    // Overlapping static entry reached from 0xC2E64A.
    case 0xC2E64C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:472 BEQ @UNKNOWN22
    case 0xC2E64D: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:473 LDA a:battler::ally_or_enemy,Y
    case 0xC2E64F: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:474 AND #$00FF
    case 0xC2E652: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:474 AND #$00FF
    // Overlapping static entry reached from 0xC2E652.
    case 0xC2E654: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:475 CMP #1
    case 0xC2E655: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:475 CMP #1
    // Overlapping static entry reached from 0xC2E655.
    case 0xC2E657: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:476 BNE @UNKNOWN22
    case 0xC2E658: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:477 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC2E65A: {
        Instruction step(cpu, 0xB9, 0x00001Du, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:478 AND #$00FF
    case 0xC2E65D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:478 AND #$00FF
    // Overlapping static entry reached from 0xC2E65D.
    case 0xC2E65F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:479 CMP #1
    case 0xC2E660: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:479 CMP #1
    // Overlapping static entry reached from 0xC2E660.
    case 0xC2E662: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:480 BEQ @UNKNOWN22
    case 0xC2E663: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:481 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E665: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:482 LDA #1
    case 0xC2E667: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009901u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:483 STA a:battler::use_alt_spritemap,Y
    case 0xC2E669: {
        Instruction step(cpu, 0x99, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:483 STA a:battler::use_alt_spritemap,Y
    // Overlapping static entry reached from 0xC2E667.
    case 0xC2E66A: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:483 STA a:battler::use_alt_spritemap,Y
    // Overlapping static entry reached from 0xC2E66A.
    case 0xC2E66B: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:484 REP #PROC_FLAGS::ACCUM8
    case 0xC2E66C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:485 LDA a:battler::vram_sprite_index,Y
    case 0xC2E66E: {
        Instruction step(cpu, 0xB9, 0x000043u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:486 AND #$00FF
    case 0xC2E671: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:486 AND #$00FF
    // Overlapping static entry reached from 0xC2E671.
    case 0xC2E673: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:487 ASL
    case 0xC2E674: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:488 TAX
    case 0xC2E675: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:489 LDA #1
    case 0xC2E676: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:489 LDA #1
    // Overlapping static entry reached from 0xC2E676.
    case 0xC2E678: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:490 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E679: {
        Instruction step(cpu, 0x9D, 0x00AEE7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:492 TYA
    case 0xC2E67C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:493 CLC
    case 0xC2E67D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:494 ADC #.SIZEOF(battler)
    case 0xC2E67E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:494 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2E67E.
    case 0xC2E680: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:495 TAY
    case 0xC2E681: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:496 LDX @LOCAL02
    case 0xC2E682: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:497 INX
    case 0xC2E684: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:498 STX @LOCAL02
    case 0xC2E685: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:500 CPX #32
    case 0xC2E687: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:500 CPX #32
    // Overlapping static entry reached from 0xC2E687.
    case 0xC2E689: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:501 BCC @UNKNOWN21
    case 0xC2E68A: {
        Instruction step(cpu, 0x90, 0x0000BBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:503 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E68C: {
        Instruction step(cpu, 0xAD, 0x00ADD5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:504 AND #$00FF
    case 0xC2E68F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:504 AND #$00FF
    // Overlapping static entry reached from 0xC2E68F.
    case 0xC2E691: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:505 CMP #2
    case 0xC2E692: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:505 CMP #2
    // Overlapping static entry reached from 0xC2E692.
    case 0xC2E694: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:506 BNE @UNKNOWN25
    case 0xC2E695: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:507 LDA PSI_ANIMATION_X_OFFSET
    case 0xC2E697: {
        Instruction step(cpu, 0xAD, 0x00AD9Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:508 STA BG2_X_POS
    case 0xC2E69A: {
        Instruction step(cpu, 0x8D, 0x000035u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:509 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E69D: {
        Instruction step(cpu, 0xAD, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:510 STA BG2_Y_POS
    case 0xC2E6A0: {
        Instruction step(cpu, 0x8D, 0x000037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:511 BRA @UNKNOWN26
    case 0xC2E6A3: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:513 LDA PSI_ANIMATION_X_OFFSET
    case 0xC2E6A5: {
        Instruction step(cpu, 0xAD, 0x00AD9Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:514 STA BG1_X_POS
    case 0xC2E6A8: {
        Instruction step(cpu, 0x8D, 0x000031u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:515 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E6AB: {
        Instruction step(cpu, 0xAD, 0x00AD9Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation.asm:516 STA BG1_Y_POS
    case 0xC2E6AE: {
        Instruction step(cpu, 0x8D, 0x000033u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/show_psi_animation.asm:518 END_C_FUNCTION
    case 0xC2E6B1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/show_psi_animation.asm:518 END_C_FUNCTION
    case 0xC2E6B2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
