// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C0222B.asm
bool resume_unresolved_c0_c0222b(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0222B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0222B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC0222D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC0222E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC0222F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC02230: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00FFD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC02230.
    case 0xC02232: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC02233: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC02234: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:21 STX @LOCAL0C
    case 0xC02235: {
        Instruction step(cpu, 0x86, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:21 STX @LOCAL0C
    // Overlapping static entry reached from 0xC02232.
    case 0xC02236: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:22 STA @VIRTUAL04
    case 0xC02237: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:23 STA @LOCAL0B
    case 0xC02239: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:24 LDA @VIRTUAL04
    case 0xC0223B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:25 CMP #32
    case 0xC0223D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:25 CMP #32
    // Overlapping static entry reached from 0xC0223D.
    case 0xC0223F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:26 BCC @UNKNOWN0
    case 0xC02240: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:27 JMP @UNKNOWN29
    case 0xC02242: {
        Instruction step(cpu, 0x4C, 0x00255Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:29 LDA @LOCAL0C
    case 0xC02245: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:30 CMP #40
    case 0xC02247: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:30 CMP #40
    // Overlapping static entry reached from 0xC02247.
    case 0xC02249: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:31 BCC @UNKNOWN1
    case 0xC0224A: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:32 JMP @UNKNOWN29
    case 0xC0224C: {
        Instruction step(cpu, 0x4C, 0x00255Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:34 LDA @VIRTUAL04
    case 0xC0224F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:35 ASL
    case 0xC02251: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:36 STA @VIRTUAL02
    case 0xC02252: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:37 LDA @LOCAL0C
    case 0xC02254: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02256: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02257: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02258: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02259: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0225A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0225B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:39 CLC
    case 0xC0225C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:40 ADC @VIRTUAL02
    case 0xC0225D: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:41 TAX
    case 0xC0225F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:42 LDA f:SPRITE_PLACEMENT_PTR_TABLE,X
    case 0xC02260: {
        Instruction step(cpu, 0xBF, 0xCF61E7u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B.asm:43 BEQL @UNKNOWN29
    case 0xC02264: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:43 BEQL @UNKNOWN29
    case 0xC02266: {
        Instruction step(cpu, 0x4C, 0x00255Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:44 STORE_INT1632 @VIRTUAL06
    case 0xC02269: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:44 STORE_INT1632 @VIRTUAL06
    case 0xC0226B: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:45 CLC
    case 0xC0226D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC0226E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02270: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC02270.
    case 0xC02272: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02273: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02275: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02277: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC02277.
    case 0xC02279: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC0227A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:47 LDA [@VIRTUAL06]
    case 0xC0227C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:48 STA @LOCAL0A
    case 0xC0227E: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:49 INC @VIRTUAL06
    case 0xC02280: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:50 INC @VIRTUAL06
    case 0xC02282: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02284: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02286: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02288: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0228A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:52 STZ @LOCAL09
    case 0xC0228C: {
        Instruction step(cpu, 0x64, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:53 JMP @UNKNOWN28
    case 0xC0228E: {
        Instruction step(cpu, 0x4C, 0x002551u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02291: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02293: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02295: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02297: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC009CF.
    case 0xC02298: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:56 LDA [@VIRTUAL06] ;sprite_placement::id
    case 0xC02299: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:57 STA @LOCAL08
    case 0xC0229B: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC0229D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:59 LDY #sprite_placement::y_coord
    case 0xC0229F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:59 LDY #sprite_placement::y_coord
    // Overlapping static entry reached from 0xC0229F.
    case 0xC022A1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:60 LDA [@VIRTUAL0A],Y
    case 0xC022A2: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC022A4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:62 AND #$00FF
    case 0xC022A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:62 AND #$00FF
    // Overlapping static entry reached from 0xC022A6.
    case 0xC022A8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:63 TAX
    case 0xC022A9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:64 STX @LOCAL07
    case 0xC022AA: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC022AC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:66 LDY #sprite_placement::x_coord
    case 0xC022AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:66 LDY #sprite_placement::x_coord
    // Overlapping static entry reached from 0xC022AE.
    case 0xC022B0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:67 LDA [@VIRTUAL0A],Y
    case 0xC022B1: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC022B3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:69 AND #$00FF
    case 0xC022B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC022B5.
    case 0xC022B7: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:70 TAY
    case 0xC022B8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:71 STY @LOCAL06
    case 0xC022B9: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:72 LDA #.SIZEOF(sprite_placement)
    case 0xC022BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:72 LDA #.SIZEOF(sprite_placement)
    // Overlapping static entry reached from 0xC022BB.
    case 0xC022BD: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:73 CLC
    case 0xC022BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:74 ADC @VIRTUAL0A
    case 0xC022BF: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:75 STA @VIRTUAL0A
    case 0xC022C1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:76 TXA
    case 0xC022C3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:77 LSR
    case 0xC022C4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:78 LSR
    case 0xC022C5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:79 LSR
    case 0xC022C6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:80 STA @VIRTUAL02
    case 0xC022C7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:81 LDA @LOCAL0B
    case 0xC022C9: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:82 STA @VIRTUAL04
    case 0xC022CB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022CE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022D0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:84 CLC
    case 0xC022D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:85 ADC @VIRTUAL02
    case 0xC022D3: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:86 STA @LOCAL05
    case 0xC022D5: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:87 TYA
    case 0xC022D7: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:88 LSR
    case 0xC022D8: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:89 LSR
    case 0xC022D9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:90 LSR
    case 0xC022DA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:91 STA @VIRTUAL02
    case 0xC022DB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:92 LDA @LOCAL0C
    case 0xC022DD: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:94 CLC
    case 0xC022E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:95 ADC @VIRTUAL02
    case 0xC022E5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:96 STA @VIRTUAL02
    case 0xC022E7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:97 LDA @LOCAL05
    case 0xC022E9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:98 LSR
    case 0xC022EB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:99 LSR
    case 0xC022EC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:100 LSR
    case 0xC022ED: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:101 LSR
    case 0xC022EE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:102 LSR
    case 0xC022EF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:103 PHA
    case 0xC022F0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:104 LDA @VIRTUAL02
    case 0xC022F1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:105 LSR
    case 0xC022F3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:106 LSR
    case 0xC022F4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:107 LSR
    case 0xC022F5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:108 LSR
    case 0xC022F6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022FA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022FB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:110 PLY
    case 0xC022FC: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:111 STY @VIRTUAL02
    case 0xC022FD: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:112 CLC
    case 0xC022FF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:113 ADC @VIRTUAL02
    case 0xC02300: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:114 TAX
    case 0xC02302: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:115 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC02303: {
        Instruction step(cpu, 0xBF, 0xD7A800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:116 AND #$00FF
    case 0xC02307: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:116 AND #$00FF
    // Overlapping static entry reached from 0xC02307.
    case 0xC02309: {
        Instruction step(cpu, 0x00, 0x00004Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:117 LSR
    case 0xC0230A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:118 LSR
    case 0xC0230B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:119 LSR
    case 0xC0230C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:120 CMP LOADED_MAP_TILE_COMBO
    case 0xC0230D: {
        Instruction step(cpu, 0xCD, 0x00436Eu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:121 BNEL @UNKNOWN27
    case 0xC02310: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:121 BNEL @UNKNOWN27
    case 0xC02312: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:122 LDA @LOCAL08
    case 0xC02315: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:123 JSL UNKNOWN_C0A21C
    case 0xC02317: {
        Instruction step(cpu, 0x22, 0xC0A21Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:124 CMP #0
    case 0xC0231B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:124 CMP #0
    // Overlapping static entry reached from 0xC0231B.
    case 0xC0231D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:125 BNEL @UNKNOWN27
    case 0xC0231E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:125 BNEL @UNKNOWN27
    case 0xC02320: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:126 LDX @LOCAL07
    case 0xC02323: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:127 STX @VIRTUAL02
    case 0xC02325: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:128 LDA @VIRTUAL04
    case 0xC02327: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:129 XBA
    case 0xC02329: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:130 AND #$FF00
    case 0xC0232A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:130 AND #$FF00
    // Overlapping static entry reached from 0xC0232A.
    case 0xC0232C: {
        Instruction step(cpu, 0xFF, 0x026518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:131 CLC
    case 0xC0232D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:132 ADC @VIRTUAL02
    case 0xC0232E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:133 STA @VIRTUAL02
    case 0xC02330: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:134 STA @LOCAL04
    case 0xC02332: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:135 LDY @LOCAL06
    case 0xC02334: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:136 STY @VIRTUAL02
    case 0xC02336: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:137 LDA @LOCAL0C
    case 0xC02338: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:138 XBA
    case 0xC0233A: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:139 AND #$FF00
    case 0xC0233B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:139 AND #$FF00
    // Overlapping static entry reached from 0xC0233B.
    case 0xC0233D: {
        Instruction step(cpu, 0xFF, 0x026518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:140 CLC
    case 0xC0233E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:141 ADC @VIRTUAL02
    case 0xC0233F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:142 TAY
    case 0xC02341: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:143 STY @LOCAL03
    case 0xC02342: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:144 LDA @LOCAL04
    case 0xC02344: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:145 STA @VIRTUAL02
    case 0xC02346: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:146 SEC
    case 0xC02348: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:147 SBC BG1_X_POS
    case 0xC02349: {
        Instruction step(cpu, 0xED, 0x000031u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:148 STA @LOCAL05
    case 0xC0234C: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:149 TYA
    case 0xC0234E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:150 SEC
    case 0xC0234F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:151 SBC BG1_Y_POS
    case 0xC02350: {
        Instruction step(cpu, 0xED, 0x000033u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:152 TAX
    case 0xC02353: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:153 LDA DEBUG
    case 0xC02354: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:154 BEQ @UNKNOWN8
    case 0xC02357: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:155 LDA PAD_STATE
    case 0xC02359: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:156 AND #PAD::L_BUTTON | PAD::R_BUTTON
    case 0xC0235C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:156 AND #PAD::L_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC0235C.
    case 0xC0235E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:157 BNE @UNKNOWN6
    case 0xC0235F: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:158 LDA NPC_SPAWNS_ENABLED
    case 0xC02361: {
        Instruction step(cpu, 0xAD, 0x004A58u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:159 DEC
    case 0xC02364: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:160 BEQ @UNKNOWN9
    case 0xC02365: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:162 LDA @LOCAL05
    case 0xC02367: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:163 CMP #256
    case 0xC02369: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:163 CMP #256
    // Overlapping static entry reached from 0xC02369.
    case 0xC0236B: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:164 BCS @UNKNOWN9
    case 0xC0236C: {
        Instruction step(cpu, 0xB0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:164 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC0236B.
    case 0xC0236D: {
        Instruction step(cpu, 0x23, 0x0000E0u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:165 CPX #224
    case 0xC0236E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:165 CPX #224
    // Overlapping static entry reached from 0xC0236D.
    case 0xC0236F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x00B000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:165 CPX #224
    // Overlapping static entry reached from 0xC0236E.
    case 0xC02370: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    case 0xC02371: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC0236F.
    case 0xC02372: {
        Instruction step(cpu, 0x05, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    case 0xC02373: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC02372.
    case 0xC02374: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    case 0xC02375: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC02374.
    case 0xC02376: {
        Instruction step(cpu, 0x4F, 0x178025u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:167 BRA @UNKNOWN9
    case 0xC02378: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:169 LDA NPC_SPAWNS_ENABLED
    case 0xC0237A: {
        Instruction step(cpu, 0xAD, 0x004A58u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:170 DEC
    case 0xC0237D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:171 BEQ @UNKNOWN9
    case 0xC0237E: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:172 LDA @LOCAL05
    case 0xC02380: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:173 CMP #256
    case 0xC02382: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:173 CMP #256
    // Overlapping static entry reached from 0xC02382.
    case 0xC02384: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:174 BCS @UNKNOWN9
    case 0xC02385: {
        Instruction step(cpu, 0xB0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:174 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC02384.
    case 0xC02386: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:175 CPX #224
    case 0xC02387: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:175 CPX #224
    // Overlapping static entry reached from 0xC02387.
    case 0xC02389: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B.asm:176 BCCL @UNKNOWN27
    case 0xC0238A: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:176 BCCL @UNKNOWN27
    case 0xC0238C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:176 BCCL @UNKNOWN27
    case 0xC0238E: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:178 LDA @LOCAL05
    case 0xC02391: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:179 STA @VIRTUAL02
    case 0xC02393: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:180 LDA #.LOWORD(-64)
    case 0xC02395: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x00FFC0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:180 LDA #.LOWORD(-64)
    // Overlapping static entry reached from 0xC02395.
    case 0xC02397: {
        Instruction step(cpu, 0xFF, 0x02E518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:181 CLC
    case 0xC02398: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:182 SBC @VIRTUAL02
    case 0xC02399: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC0239B: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC0239D: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC0239F: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023A2: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023A4: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:184 LDA @LOCAL05
    case 0xC023A7: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:185 STA @VIRTUAL02
    case 0xC023A9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:186 LDA #320
    case 0xC023AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000140u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:186 LDA #320
    // Overlapping static entry reached from 0xC023AB.
    case 0xC023AD: {
        Instruction step(cpu, 0x01, 0x000018u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:187 CLC
    case 0xC023AE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:188 SBC @VIRTUAL02
    case 0xC023AF: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023B1: {
        Instruction step(cpu, 0x50, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023B3: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023B5: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023B8: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023BA: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:190 STX @VIRTUAL02
    case 0xC023BD: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:191 LDA #.LOWORD(-64)
    case 0xC023BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x00FFC0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:191 LDA #.LOWORD(-64)
    // Overlapping static entry reached from 0xC023BF.
    case 0xC023C1: {
        Instruction step(cpu, 0xFF, 0x02E518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:192 CLC
    case 0xC023C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:193 SBC @VIRTUAL02
    case 0xC023C3: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023C5: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023C7: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023C9: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023CC: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023CE: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:195 STX @VIRTUAL02
    case 0xC023D1: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:196 LDA #320
    case 0xC023D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000140u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:196 LDA #320
    // Overlapping static entry reached from 0xC023D3.
    case 0xC023D5: {
        Instruction step(cpu, 0x01, 0x000018u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:197 CLC
    case 0xC023D6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:198 SBC @VIRTUAL02
    case 0xC023D7: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023D9: {
        Instruction step(cpu, 0x50, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023DB: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023DD: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023E0: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023E2: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x008985u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023E5.
    case 0xC023E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023E8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023E7.
    case 0xC023E9: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023E9.
    case 0xC023EB: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023EA.
    case 0xC023EC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023ED: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:201 LDA @LOCAL08
    case 0xC023EF: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:203 CLC
    case 0xC023F9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:204 ADC @VIRTUAL06
    case 0xC023FA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:205 STA @VIRTUAL06
    case 0xC023FC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:206 STA @LOCAL02
    case 0xC023FE: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:207 LDA @VIRTUAL06+2
    case 0xC02400: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:208 STA @LOCAL02+2
    case 0xC02402: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:209 LDX #.LOWORD(-1)
    case 0xC02404: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:209 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02404.
    case 0xC02406: {
        Instruction step(cpu, 0xFF, 0xAD1A86u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:210 STX @LOCAL05
    case 0xC02407: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC02409: {
        Instruction step(cpu, 0xAD, 0x00B4EFu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC02406.
    case 0xC0240A: {
        Instruction step(cpu, 0xEF, 0x03F0B4u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:212 BNEL @UNKNOWN25
    case 0xC0240C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:212 BNEL @UNKNOWN25
    case 0xC0240E: {
        Instruction step(cpu, 0x4C, 0x0024FBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:213 LDA DEBUG
    case 0xC02411: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:214 BEQ @UNKNOWN20
    case 0xC02414: {
        Instruction step(cpu, 0xF0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC02416: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:216 LDY #npc_config::appearance_style
    case 0xC02418: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:216 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC02418.
    case 0xC0241A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:217 LDA [@VIRTUAL06],Y
    case 0xC0241B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:218 REP #PROC_FLAGS::ACCUM8
    case 0xC0241D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:219 AND #$00FF
    case 0xC0241F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC0241F.
    case 0xC02421: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:220 STA @LOCAL06
    case 0xC02422: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:221 BEQ @UNKNOWN21
    case 0xC02424: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:222 JSL UNKNOWN_EFE6CF
    case 0xC02426: {
        Instruction step(cpu, 0x22, 0xEFE6CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:223 CMP #0
    case 0xC0242A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:223 CMP #0
    // Overlapping static entry reached from 0xC0242A.
    case 0xC0242C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:224 BEQ @UNKNOWN21
    case 0xC0242D: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:225 LDY #npc_config::event_flag
    case 0xC0242F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:225 LDY #npc_config::event_flag
    // Overlapping static entry reached from 0xC0242F.
    case 0xC02431: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:226 LDA [@VIRTUAL06],Y
    case 0xC02432: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:227 JSL GET_EVENT_FLAG
    case 0xC02434: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:228 STA @VIRTUAL02
    case 0xC02438: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:229 LDA @LOCAL06
    case 0xC0243A: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:230 DEC
    case 0xC0243C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:231 DEC
    case 0xC0243D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:232 EOR @VIRTUAL02
    case 0xC0243E: {
        Instruction step(cpu, 0x45, 0x000002u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:233 AND #$0001
    case 0xC02440: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:233 AND #$0001
    // Overlapping static entry reached from 0xC02440.
    case 0xC02442: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B.asm:234 BEQL @UNKNOWN27
    case 0xC02443: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:234 BEQL @UNKNOWN27
    case 0xC02445: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:235 BRA @UNKNOWN21
    case 0xC02448: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC0244A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:238 LDY #npc_config::appearance_style
    case 0xC0244C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:238 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC0244C.
    case 0xC0244E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:239 LDA [@VIRTUAL06],Y
    case 0xC0244F: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:240 REP #PROC_FLAGS::ACCUM8
    case 0xC02451: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:241 AND #$00FF
    case 0xC02453: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:241 AND #$00FF
    // Overlapping static entry reached from 0xC02453.
    case 0xC02455: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:242 STA @LOCAL07
    case 0xC02456: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:243 BEQ @UNKNOWN21
    case 0xC02458: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:244 LDY #npc_config::event_flag
    case 0xC0245A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:244 LDY #npc_config::event_flag
    // Overlapping static entry reached from 0xC0245A.
    case 0xC0245C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:245 LDA [@VIRTUAL06],Y
    case 0xC0245D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:246 JSL GET_EVENT_FLAG
    case 0xC0245F: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:247 STA @VIRTUAL02
    case 0xC02463: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:248 LDA @LOCAL07
    case 0xC02465: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:249 DEC
    case 0xC02467: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:250 DEC
    case 0xC02468: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:251 EOR @VIRTUAL02
    case 0xC02469: {
        Instruction step(cpu, 0x45, 0x000002u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:252 AND #$0001
    case 0xC0246B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:252 AND #$0001
    // Overlapping static entry reached from 0xC0246B.
    case 0xC0246D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B.asm:253 BEQL @UNKNOWN27
    case 0xC0246E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:253 BEQL @UNKNOWN27
    case 0xC02470: {
        Instruction step(cpu, 0x4C, 0x00254Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:255 LDA DEBUG
    case 0xC02473: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:256 BEQ @UNKNOWN23
    case 0xC02476: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:257 LDA SHOW_NPC_FLAG
    case 0xC02478: {
        Instruction step(cpu, 0xAD, 0x004A66u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:258 BEQ @UNKNOWN22
    case 0xC0247B: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:259 LDA [@VIRTUAL06]
    case 0xC0247D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:260 AND #$00FF
    case 0xC0247F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:260 AND #$00FF
    // Overlapping static entry reached from 0xC0247F.
    case 0xC02481: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:261 CMP #3
    case 0xC02482: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:261 CMP #3
    // Overlapping static entry reached from 0xC02482.
    case 0xC02484: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:262 BNEL @UNKNOWN26
    case 0xC02485: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:262 BNEL @UNKNOWN26
    case 0xC02487: {
        Instruction step(cpu, 0x4C, 0x002529u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0248A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0248C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0248E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02490: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:265 LDY #npc_config::event_script
    case 0xC02492: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:265 LDY #npc_config::event_script
    // Overlapping static entry reached from 0xC02492.
    case 0xC02494: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:266 LDA [@VIRTUAL06],Y
    case 0xC02495: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:267 JSL UNKNOWN_EFE6E2
    case 0xC02497: {
        Instruction step(cpu, 0x22, 0xEFE6E2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:268 STA @LOCAL07
    case 0xC0249B: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:269 LDA @LOCAL04
    case 0xC0249D: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:270 STA @VIRTUAL02
    case 0xC0249F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:271 STA @LOCAL00
    case 0xC024A1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:272 LDY @LOCAL03
    case 0xC024A3: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:273 STY @LOCAL01
    case 0xC024A5: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:274 LDY #.LOWORD(-1)
    case 0xC024A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:274 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC024A7.
    case 0xC024A9: {
        Instruction step(cpu, 0xFF, 0xA51A84u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:275 STY @LOCAL05
    case 0xC024AA: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:276 LDA @LOCAL07
    case 0xC024AC: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:276 LDA @LOCAL07
    // Overlapping static entry reached from 0xC024A9.
    case 0xC024AD: {
        Instruction step(cpu, 0x1E, 0x00A0AAu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:277 TAX
    case 0xC024AE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:278 LDY #npc_config::sprite
    case 0xC024AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:278 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024AD.
    case 0xC024B0: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:278 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024AF.
    case 0xC024B1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:279 LDA [@VIRTUAL06],Y
    case 0xC024B2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:280 LDY @LOCAL05
    case 0xC024B4: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:281 JSL CREATE_ENTITY
    case 0xC024B6: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:282 TAX
    case 0xC024BA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:283 STX @LOCAL05
    case 0xC024BB: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:284 BRA @UNKNOWN26
    case 0xC024BD: {
        Instruction step(cpu, 0x80, 0x00006Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:286 LDA SHOW_NPC_FLAG
    case 0xC024BF: {
        Instruction step(cpu, 0xAD, 0x004A66u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:287 BEQ @UNKNOWN24
    case 0xC024C2: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:288 LDA [@VIRTUAL06]
    case 0xC024C4: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:289 AND #$00FF
    case 0xC024C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:289 AND #$00FF
    // Overlapping static entry reached from 0xC024C6.
    case 0xC024C8: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:290 CMP #3
    case 0xC024C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:290 CMP #3
    // Overlapping static entry reached from 0xC024C9.
    case 0xC024CB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:291 BNE @UNKNOWN26
    case 0xC024CC: {
        Instruction step(cpu, 0xD0, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:293 LDA @LOCAL04
    case 0xC024CE: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:294 STA @VIRTUAL02
    case 0xC024D0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:295 STA @LOCAL00
    case 0xC024D2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:296 LDY @LOCAL03
    case 0xC024D4: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:297 STY @LOCAL01
    case 0xC024D6: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:298 LDY #.LOWORD(-1)
    case 0xC024D8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:298 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC024D8.
    case 0xC024DA: {
        Instruction step(cpu, 0xFF, 0xA51C84u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:299 STY @LOCAL06
    case 0xC024DB: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024DD: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024DA.
    case 0xC024DE: {
        Instruction step(cpu, 0x12, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024DF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024DE.
    case 0xC024E0: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024E1: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024E0.
    case 0xC024E2: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024E3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024E2.
    case 0xC024E4: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:301 LDY #npc_config::event_script
    case 0xC024E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:301 LDY #npc_config::event_script
    // Overlapping static entry reached from 0xC024E5.
    case 0xC024E7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:302 LDA [@VIRTUAL06],Y
    case 0xC024E8: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:303 TAX
    case 0xC024EA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:304 LDY #npc_config::sprite
    case 0xC024EB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:304 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024EB.
    case 0xC024ED: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:305 LDA [@VIRTUAL06],Y
    case 0xC024EE: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:306 LDY @LOCAL06
    case 0xC024F0: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:306 LDY @LOCAL06
    // Overlapping static entry reached from 0xC0256A.
    case 0xC024F1: {
        Instruction step(cpu, 0x1C, 0x004922u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:307 JSL CREATE_ENTITY
    case 0xC024F2: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:307 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC024F1.
    case 0xC024F4: {
        Instruction step(cpu, 0x1E, 0x00AAC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:308 TAX
    case 0xC024F6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:309 STX @LOCAL05
    case 0xC024F7: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:310 BRA @UNKNOWN26
    case 0xC024F9: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:312 SEP #PROC_FLAGS::ACCUM8
    case 0xC024FB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:313 LDY #npc_config::appearance_style
    case 0xC024FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:313 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC024FD.
    case 0xC024FF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:314 LDA [@VIRTUAL06],Y
    case 0xC02500: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:315 REP #PROC_FLAGS::ACCUM8
    case 0xC02502: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:316 AND #$00FF
    case 0xC02504: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:316 AND #$00FF
    // Overlapping static entry reached from 0xC02504.
    case 0xC02506: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:317 BNE @UNKNOWN26
    case 0xC02507: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:318 LDA @LOCAL04
    case 0xC02509: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:319 STA @VIRTUAL02
    case 0xC0250B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:320 STA @LOCAL00
    case 0xC0250D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:321 LDY @LOCAL03
    case 0xC0250F: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:322 STY @LOCAL01
    case 0xC02511: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:323 LDY #.LOWORD(-1)
    case 0xC02513: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:323 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02513.
    case 0xC02515: {
        Instruction step(cpu, 0xFF, 0xA21A84u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:324 STY @LOCAL05
    case 0xC02516: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    case 0xC02518: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Fu : 0x00031Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC02515.
    case 0xC02519: {
        Instruction step(cpu, 0x1F, 0x01A003u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC02518.
    case 0xC0251A: {
        Instruction step(cpu, 0x03, 0x0000A0u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:326 LDY #npc_config::sprite
    case 0xC0251B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:326 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC0251A.
    case 0xC0251C: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:326 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC0251B.
    case 0xC0251D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:327 LDA [@VIRTUAL06],Y
    case 0xC0251E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:328 LDY @LOCAL05
    case 0xC02520: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:329 JSL CREATE_ENTITY
    case 0xC02522: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:330 TAX
    case 0xC02526: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:331 STX @LOCAL05
    case 0xC02527: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:331 STX @LOCAL05
    // Overlapping static entry reached from 0xC02576.
    case 0xC02528: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:333 LDX @LOCAL05
    case 0xC02529: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:334 CPX #.LOWORD(-1)
    case 0xC0252B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:334 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0252B.
    case 0xC0252D: {
        Instruction step(cpu, 0xFF, 0x8A1FF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:335 BEQ @UNKNOWN27
    case 0xC0252E: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:336 TXA
    case 0xC02530: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:337 ASL
    case 0xC02531: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:338 TAX
    case 0xC02532: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02533: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02535: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02537: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02539: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:340 SEP #PROC_FLAGS::ACCUM8
    case 0xC0253B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:341 LDY #npc_config::direction
    case 0xC0253D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:341 LDY #npc_config::direction
    // Overlapping static entry reached from 0xC0253D.
    case 0xC0253F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:342 LDA [@VIRTUAL06],Y
    case 0xC02540: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:343 REP #PROC_FLAGS::ACCUM8
    case 0xC02542: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:343 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC02591.
    case 0xC02543: {
        Instruction step(cpu, 0x20, 0x00FF29u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:344 AND #$00FF
    case 0xC02544: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:344 AND #$00FF
    // Overlapping static entry reached from 0xC02544.
    case 0xC02546: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:345 STA ENTITY_DIRECTIONS,X
    case 0xC02547: {
        Instruction step(cpu, 0x9D, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:346 LDA @LOCAL08
    case 0xC0254A: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:347 STA ENTITY_NPC_IDS,X
    case 0xC0254C: {
        Instruction step(cpu, 0x9D, 0x002C9Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:349 INC @LOCAL09
    case 0xC0254F: {
        Instruction step(cpu, 0xE6, 0x000022u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:351 LDA @LOCAL09
    case 0xC02551: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B.asm:352 CMP @LOCAL0A
    case 0xC02553: {
        Instruction step(cpu, 0xC5, 0x000024u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:353 BNEL @UNKNOWN3
    case 0xC02555: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:353 BNEL @UNKNOWN3
    case 0xC02557: {
        Instruction step(cpu, 0x4C, 0x002291u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0222B.asm:355 END_C_FUNCTION
    case 0xC0255A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0222B.asm:355 END_C_FUNCTION
    case 0xC0255B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
