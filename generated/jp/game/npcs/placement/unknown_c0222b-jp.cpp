// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C0222B-jp.asm
bool resume_unresolved_c0_c0222b_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0222B-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02239: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC0223B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC0223C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC0223D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC0223E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00FFD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC0223E.
    case 0xC02240: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC02241: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC02242: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:21 STX @LOCAL0C
    case 0xC02243: {
        Instruction step(cpu, 0x86, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:21 STX @LOCAL0C
    // Overlapping static entry reached from 0xC02240.
    case 0xC02244: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:22 STA @VIRTUAL04
    case 0xC02245: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:23 STA @LOCAL0B
    case 0xC02247: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:24 LDA @VIRTUAL04
    case 0xC02249: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:25 CMP #32
    case 0xC0224B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:25 CMP #32
    // Overlapping static entry reached from 0xC0224B.
    case 0xC0224D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:26 BCC @UNKNOWN0
    case 0xC0224E: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:27 JMP @UNKNOWN29
    case 0xC02250: {
        Instruction step(cpu, 0x4C, 0x002568u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:29 LDA @LOCAL0C
    case 0xC02253: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:30 CMP #40
    case 0xC02255: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:30 CMP #40
    // Overlapping static entry reached from 0xC02255.
    case 0xC02257: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:31 BCC @UNKNOWN1
    case 0xC02258: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:32 JMP @UNKNOWN29
    case 0xC0225A: {
        Instruction step(cpu, 0x4C, 0x002568u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:34 LDA @VIRTUAL04
    case 0xC0225D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:35 ASL
    case 0xC0225F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:36 STA @VIRTUAL02
    case 0xC02260: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:37 LDA @LOCAL0C
    case 0xC02262: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02264: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02265: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02266: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02267: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02268: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02269: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:39 CLC
    case 0xC0226A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:40 ADC @VIRTUAL02
    case 0xC0226B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:41 TAX
    case 0xC0226D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:42 LDA f:SPRITE_PLACEMENT_PTR_TABLE,X
    case 0xC0226E: {
        Instruction step(cpu, 0xBF, 0xCF6223u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:43 BEQL @UNKNOWN29
    case 0xC02272: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:43 BEQL @UNKNOWN29
    case 0xC02274: {
        Instruction step(cpu, 0x4C, 0x002568u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:44 STORE_INT1632 @VIRTUAL06
    case 0xC02277: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:44 STORE_INT1632 @VIRTUAL06
    case 0xC02279: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:45 CLC
    case 0xC0227B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC0227C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC0227E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0227E.
    case 0xC02280: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02281: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02283: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02285: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC02285.
    case 0xC02287: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02288: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:47 LDA [@VIRTUAL06]
    case 0xC0228A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:48 STA @LOCAL0A
    case 0xC0228C: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:49 INC @VIRTUAL06
    case 0xC0228E: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:50 INC @VIRTUAL06
    case 0xC02290: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02292: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02294: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02296: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02298: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:52 STZ @LOCAL09
    case 0xC0229A: {
        Instruction step(cpu, 0x64, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:53 JMP @UNKNOWN28
    case 0xC0229C: {
        Instruction step(cpu, 0x4C, 0x00255Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0229F: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC022A1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC022A3: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC022A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:56 LDA [@VIRTUAL06] ;sprite_placement::id
    case 0xC022A7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:57 STA @LOCAL08
    case 0xC022A9: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC022AB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:59 LDY #sprite_placement::y_coord
    case 0xC022AD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:59 LDY #sprite_placement::y_coord
    // Overlapping static entry reached from 0xC022AD.
    case 0xC022AF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:60 LDA [@VIRTUAL0A],Y
    case 0xC022B0: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC022B2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:62 AND #$00FF
    case 0xC022B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:62 AND #$00FF
    // Overlapping static entry reached from 0xC022B4.
    case 0xC022B6: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:63 TAY
    case 0xC022B7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:64 STY @LOCAL07
    case 0xC022B8: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC022BA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:66 LDY #sprite_placement::x_coord
    case 0xC022BC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:66 LDY #sprite_placement::x_coord
    // Overlapping static entry reached from 0xC022BC.
    case 0xC022BE: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:67 LDA [@VIRTUAL0A],Y
    case 0xC022BF: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC022C1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:69 AND #$00FF
    case 0xC022C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC022C3.
    case 0xC022C5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:70 TAX
    case 0xC022C6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:71 STX @LOCAL06
    case 0xC022C7: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:72 LDA #.SIZEOF(sprite_placement)
    case 0xC022C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:72 LDA #.SIZEOF(sprite_placement)
    // Overlapping static entry reached from 0xC022C9.
    case 0xC022CB: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:73 CLC
    case 0xC022CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:74 ADC @VIRTUAL0A
    case 0xC022CD: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:75 STA @VIRTUAL0A
    case 0xC022CF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:76 LDY @LOCAL07
    case 0xC022D1: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:77 TYA
    case 0xC022D3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:78 LSR
    case 0xC022D4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:79 LSR
    case 0xC022D5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:80 LSR
    case 0xC022D6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:81 STA @VIRTUAL02
    case 0xC022D7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:82 LDA @LOCAL0B
    case 0xC022D9: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:83 STA @VIRTUAL04
    case 0xC022DB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022DD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022DE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:85 CLC
    case 0xC022E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:86 ADC @VIRTUAL02
    case 0xC022E3: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:87 STA @LOCAL05
    case 0xC022E5: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:88 TXA
    case 0xC022E7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:89 LSR
    case 0xC022E8: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:90 LSR
    case 0xC022E9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:91 LSR
    case 0xC022EA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:92 STA @VIRTUAL02
    case 0xC022EB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:93 LDA @LOCAL0C
    case 0xC022ED: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022EF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:95 CLC
    case 0xC022F4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:96 ADC @VIRTUAL02
    case 0xC022F5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:97 STA @VIRTUAL02
    case 0xC022F7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:98 LDA @LOCAL05
    case 0xC022F9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:99 LSR
    case 0xC022FB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:100 LSR
    case 0xC022FC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:101 LSR
    case 0xC022FD: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:102 LSR
    case 0xC022FE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:103 LSR
    case 0xC022FF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:104 PHA
    case 0xC02300: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:105 LDA @VIRTUAL02
    case 0xC02301: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:106 LSR
    case 0xC02303: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:107 LSR
    case 0xC02304: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:108 LSR
    case 0xC02305: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:109 LSR
    case 0xC02306: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02307: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02308: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02309: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0230A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0230B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:111 PLY
    case 0xC0230C: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:112 STY @VIRTUAL02
    case 0xC0230D: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:113 CLC
    case 0xC0230F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:114 ADC @VIRTUAL02
    case 0xC02310: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:115 TAX
    case 0xC02312: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:116 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC02313: {
        Instruction step(cpu, 0xBF, 0xD7A800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:117 AND #$00FF
    case 0xC02317: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC02317.
    case 0xC02319: {
        Instruction step(cpu, 0x00, 0x00004Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:118 LSR
    case 0xC0231A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:119 LSR
    case 0xC0231B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:120 LSR
    case 0xC0231C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:121 CMP LOADED_MAP_TILE_COMBO
    case 0xC0231D: {
        Instruction step(cpu, 0xCD, 0x0046F4u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:122 BNEL @UNKNOWN27
    case 0xC02320: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:122 BNEL @UNKNOWN27
    case 0xC02322: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:123 LDA @LOCAL08
    case 0xC02325: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:124 JSL UNKNOWN_C0A21C
    case 0xC02327: {
        Instruction step(cpu, 0x22, 0xC0A1FBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:125 CMP #0
    case 0xC0232B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:125 CMP #0
    // Overlapping static entry reached from 0xC0232B.
    case 0xC0232D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:126 BNEL @UNKNOWN27
    case 0xC0232E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:126 BNEL @UNKNOWN27
    case 0xC02330: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:127 LDY @LOCAL07
    case 0xC02333: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:128 STY @VIRTUAL02
    case 0xC02335: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:129 LDA @VIRTUAL04
    case 0xC02337: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:130 XBA
    case 0xC02339: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:131 AND #$FF00
    case 0xC0233A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:131 AND #$FF00
    // Overlapping static entry reached from 0xC0233A.
    case 0xC0233C: {
        Instruction step(cpu, 0xFF, 0x026518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:132 CLC
    case 0xC0233D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:133 ADC @VIRTUAL02
    case 0xC0233E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:134 TAY
    case 0xC02340: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:135 STY @LOCAL04
    case 0xC02341: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:136 LDX @LOCAL06
    case 0xC02343: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:137 STX @VIRTUAL02
    case 0xC02345: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:138 LDA @LOCAL0C
    case 0xC02347: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:139 XBA
    case 0xC02349: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:140 AND #$FF00
    case 0xC0234A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:140 AND #$FF00
    // Overlapping static entry reached from 0xC0234A.
    case 0xC0234C: {
        Instruction step(cpu, 0xFF, 0x026518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:141 CLC
    case 0xC0234D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:142 ADC @VIRTUAL02
    case 0xC0234E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:143 STA @VIRTUAL02
    case 0xC02350: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:144 STA @LOCAL03
    case 0xC02352: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:145 TYA
    case 0xC02354: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:146 SEC
    case 0xC02355: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:147 SBC BG1_X_POS
    case 0xC02356: {
        Instruction step(cpu, 0xED, 0x000031u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:148 STA @LOCAL06
    case 0xC02359: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:149 LDA @VIRTUAL02
    case 0xC0235B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:150 SEC
    case 0xC0235D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:151 SBC BG1_Y_POS
    case 0xC0235E: {
        Instruction step(cpu, 0xED, 0x000033u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:152 TAX
    case 0xC02361: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:153 LDA DEBUG
    case 0xC02362: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:154 BEQ @UNKNOWN8
    case 0xC02365: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:155 LDA PAD_STATE
    case 0xC02367: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:156 AND #PAD::L_BUTTON | PAD::R_BUTTON
    case 0xC0236A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:156 AND #PAD::L_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC0236A.
    case 0xC0236C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:157 BNE @UNKNOWN6
    case 0xC0236D: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:158 LDA NPC_SPAWNS_ENABLED
    case 0xC0236F: {
        Instruction step(cpu, 0xAD, 0x004DDEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:159 DEC
    case 0xC02372: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:160 BEQ @UNKNOWN9
    case 0xC02373: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:162 LDA @LOCAL06
    case 0xC02375: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:163 CMP #256
    case 0xC02377: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:163 CMP #256
    // Overlapping static entry reached from 0xC02377.
    case 0xC02379: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:164 BCS @UNKNOWN9
    case 0xC0237A: {
        Instruction step(cpu, 0xB0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:164 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC02379.
    case 0xC0237B: {
        Instruction step(cpu, 0x23, 0x0000E0u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:165 CPX #224
    case 0xC0237C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:165 CPX #224
    // Overlapping static entry reached from 0xC0237B.
    case 0xC0237D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x00B000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:165 CPX #224
    // Overlapping static entry reached from 0xC0237C.
    case 0xC0237E: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    case 0xC0237F: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC0237D.
    case 0xC02380: {
        Instruction step(cpu, 0x05, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    case 0xC02381: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC02380.
    case 0xC02382: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    case 0xC02383: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC02382.
    case 0xC02384: {
        Instruction step(cpu, 0x5D, 0x008025u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:167 BRA @UNKNOWN9
    case 0xC02386: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:167 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC02384.
    case 0xC02387: {
        Instruction step(cpu, 0x17, 0x0000ADu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:169 LDA NPC_SPAWNS_ENABLED
    case 0xC02388: {
        Instruction step(cpu, 0xAD, 0x004DDEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:169 LDA NPC_SPAWNS_ENABLED
    // Overlapping static entry reached from 0xC02387.
    case 0xC02389: {
        Instruction step(cpu, 0xDE, 0x003A4Du, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:170 DEC
    case 0xC0238B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:171 BEQ @UNKNOWN9
    case 0xC0238C: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:172 LDA @LOCAL06
    case 0xC0238E: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:173 CMP #256
    case 0xC02390: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:173 CMP #256
    // Overlapping static entry reached from 0xC02390.
    case 0xC02392: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:174 BCS @UNKNOWN9
    case 0xC02393: {
        Instruction step(cpu, 0xB0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:174 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC02392.
    case 0xC02394: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:175 CPX #224
    case 0xC02395: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:175 CPX #224
    // Overlapping static entry reached from 0xC02395.
    case 0xC02397: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:176 BCCL @UNKNOWN27
    case 0xC02398: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:176 BCCL @UNKNOWN27
    case 0xC0239A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:176 BCCL @UNKNOWN27
    case 0xC0239C: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:178 LDA @LOCAL06
    case 0xC0239F: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:179 STA @VIRTUAL02
    case 0xC023A1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:180 LDA #.LOWORD(-64)
    case 0xC023A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x00FFC0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:180 LDA #.LOWORD(-64)
    // Overlapping static entry reached from 0xC023A3.
    case 0xC023A5: {
        Instruction step(cpu, 0xFF, 0x02E518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:181 CLC
    case 0xC023A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:182 SBC @VIRTUAL02
    case 0xC023A7: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023A9: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023AB: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023AD: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023B0: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023B2: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:184 LDA @LOCAL06
    case 0xC023B5: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:185 STA @VIRTUAL02
    case 0xC023B7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:186 LDA #320
    case 0xC023B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000140u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:186 LDA #320
    // Overlapping static entry reached from 0xC023B9.
    case 0xC023BB: {
        Instruction step(cpu, 0x01, 0x000018u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:187 CLC
    case 0xC023BC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:188 SBC @VIRTUAL02
    case 0xC023BD: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023BF: {
        Instruction step(cpu, 0x50, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023C1: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023C3: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023C6: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023C8: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:190 STX @VIRTUAL02
    case 0xC023CB: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:191 LDA #.LOWORD(-64)
    case 0xC023CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x00FFC0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:191 LDA #.LOWORD(-64)
    // Overlapping static entry reached from 0xC023CD.
    case 0xC023CF: {
        Instruction step(cpu, 0xFF, 0x02E518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:192 CLC
    case 0xC023D0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:193 SBC @VIRTUAL02
    case 0xC023D1: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023D3: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023D5: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023D7: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023DA: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023DC: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:195 STX @VIRTUAL02
    case 0xC023DF: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:196 LDA #320
    case 0xC023E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000140u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:196 LDA #320
    // Overlapping static entry reached from 0xC023E1.
    case 0xC023E3: {
        Instruction step(cpu, 0x01, 0x000018u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:197 CLC
    case 0xC023E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:198 SBC @VIRTUAL02
    case 0xC023E5: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023E7: {
        Instruction step(cpu, 0x50, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023E9: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023EB: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023EE: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023F0: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0089C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023F3.
    case 0xC023F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023F6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023F5.
    case 0xC023F7: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023F7.
    case 0xC023F9: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023F8.
    case 0xC023FA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023FB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:201 LDA @LOCAL08
    case 0xC023FD: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023FF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02401: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02402: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02403: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02404: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02405: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:203 CLC
    case 0xC02407: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:204 ADC @VIRTUAL06
    case 0xC02408: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:205 STA @VIRTUAL06
    case 0xC0240A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:206 STA @LOCAL02
    case 0xC0240C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:207 LDA @VIRTUAL06+2
    case 0xC0240E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:208 STA @LOCAL02+2
    case 0xC02410: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:209 LDX #.LOWORD(-1)
    case 0xC02412: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:209 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02412.
    case 0xC02414: {
        Instruction step(cpu, 0xFF, 0xAD1A86u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:210 STX @LOCAL05
    case 0xC02415: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC02417: {
        Instruction step(cpu, 0xAD, 0x00B6B8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC02414.
    case 0xC02418: {
        Instruction step(cpu, 0xB8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_overflow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC02418.
    case 0xC02419: {
        Instruction step(cpu, 0xB6, 0x0000F0u, 2u, AddressMode::DirectPageIndexedY);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:212 BNEL @UNKNOWN25
    case 0xC0241A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:212 BNEL @UNKNOWN25
    // Overlapping static entry reached from 0xC02419.
    case 0xC0241B: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:212 BNEL @UNKNOWN25
    case 0xC0241C: {
        Instruction step(cpu, 0x4C, 0x002509u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:212 BNEL @UNKNOWN25
    // Overlapping static entry reached from 0xC0241B.
    case 0xC0241D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000025u : 0x00AD25u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:213 LDA DEBUG
    case 0xC0241F: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:213 LDA DEBUG
    // Overlapping static entry reached from 0xC0241D.
    case 0xC02420: {
        Instruction step(cpu, 0xF2, 0x000046u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:214 BEQ @UNKNOWN20
    case 0xC02422: {
        Instruction step(cpu, 0xF0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC02424: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:216 LDY #npc_config::appearance_style
    case 0xC02426: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:216 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC02426.
    case 0xC02428: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:217 LDA [@VIRTUAL06],Y
    case 0xC02429: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:218 REP #PROC_FLAGS::ACCUM8
    case 0xC0242B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:219 AND #$00FF
    case 0xC0242D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC0242D.
    case 0xC0242F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:220 STA @LOCAL07
    case 0xC02430: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:221 BEQ @UNKNOWN21
    case 0xC02432: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:222 JSL UNKNOWN_EFE6CF
    case 0xC02434: {
        Instruction step(cpu, 0x22, 0xEFCFF2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:223 CMP #0
    case 0xC02438: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:223 CMP #0
    // Overlapping static entry reached from 0xC02438.
    case 0xC0243A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:224 BEQ @UNKNOWN21
    case 0xC0243B: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:225 LDY #npc_config::event_flag
    case 0xC0243D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:225 LDY #npc_config::event_flag
    // Overlapping static entry reached from 0xC0243D.
    case 0xC0243F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:226 LDA [@VIRTUAL06],Y
    case 0xC02440: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:227 JSL GET_EVENT_FLAG
    case 0xC02442: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:228 STA @VIRTUAL02
    case 0xC02446: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:229 LDA @LOCAL07
    case 0xC02448: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:230 DEC
    case 0xC0244A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:231 DEC
    case 0xC0244B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:232 EOR @VIRTUAL02
    case 0xC0244C: {
        Instruction step(cpu, 0x45, 0x000002u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:233 AND #$0001
    case 0xC0244E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:233 AND #$0001
    // Overlapping static entry reached from 0xC0244E.
    case 0xC02450: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:234 BEQL @UNKNOWN27
    case 0xC02451: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:234 BEQL @UNKNOWN27
    case 0xC02453: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:235 BRA @UNKNOWN21
    case 0xC02456: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC02458: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:238 LDY #npc_config::appearance_style
    case 0xC0245A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:238 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC0245A.
    case 0xC0245C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:239 LDA [@VIRTUAL06],Y
    case 0xC0245D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:240 REP #PROC_FLAGS::ACCUM8
    case 0xC0245F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:241 AND #$00FF
    case 0xC02461: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:241 AND #$00FF
    // Overlapping static entry reached from 0xC02461.
    case 0xC02463: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:242 STA @LOCAL06
    case 0xC02464: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:243 BEQ @UNKNOWN21
    case 0xC02466: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:244 LDY #npc_config::event_flag
    case 0xC02468: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:244 LDY #npc_config::event_flag
    // Overlapping static entry reached from 0xC02468.
    case 0xC0246A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:245 LDA [@VIRTUAL06],Y
    case 0xC0246B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:246 JSL GET_EVENT_FLAG
    case 0xC0246D: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:247 STA @VIRTUAL02
    case 0xC02471: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:248 LDA @LOCAL06
    case 0xC02473: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:249 DEC
    case 0xC02475: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:250 DEC
    case 0xC02476: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:251 EOR @VIRTUAL02
    case 0xC02477: {
        Instruction step(cpu, 0x45, 0x000002u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:252 AND #$0001
    case 0xC02479: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:252 AND #$0001
    // Overlapping static entry reached from 0xC02479.
    case 0xC0247B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:253 BEQL @UNKNOWN27
    case 0xC0247C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:253 BEQL @UNKNOWN27
    case 0xC0247E: {
        Instruction step(cpu, 0x4C, 0x00255Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:255 LDA DEBUG
    case 0xC02481: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:256 BEQ @UNKNOWN23
    case 0xC02484: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:257 LDA SHOW_NPC_FLAG
    case 0xC02486: {
        Instruction step(cpu, 0xAD, 0x004DECu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:258 BEQ @UNKNOWN22
    case 0xC02489: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:259 LDA [@VIRTUAL06]
    case 0xC0248B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:260 AND #$00FF
    case 0xC0248D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:260 AND #$00FF
    // Overlapping static entry reached from 0xC0248D.
    case 0xC0248F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:261 CMP #3
    case 0xC02490: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:261 CMP #3
    // Overlapping static entry reached from 0xC02490.
    case 0xC02492: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:262 BNEL @UNKNOWN26
    case 0xC02493: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:262 BNEL @UNKNOWN26
    case 0xC02495: {
        Instruction step(cpu, 0x4C, 0x002537u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02498: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0249A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0249C: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0249E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:265 LDY #npc_config::event_script
    case 0xC024A0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:265 LDY #npc_config::event_script
    // Overlapping static entry reached from 0xC024A0.
    case 0xC024A2: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:266 LDA [@VIRTUAL06],Y
    case 0xC024A3: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:267 JSL UNKNOWN_EFE6E2
    case 0xC024A5: {
        Instruction step(cpu, 0x22, 0xEFD005u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:268 STA @LOCAL07
    case 0xC024A9: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:269 LDY @LOCAL04
    case 0xC024AB: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:270 STY @LOCAL00
    case 0xC024AD: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:271 LDA @LOCAL03
    case 0xC024AF: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:272 STA @VIRTUAL02
    case 0xC024B1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:273 STA @LOCAL01
    case 0xC024B3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:274 LDY #.LOWORD(-1)
    case 0xC024B5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:274 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC024B5.
    case 0xC024B7: {
        Instruction step(cpu, 0xFF, 0xA51C84u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:275 STY @LOCAL06
    case 0xC024B8: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:276 LDA @LOCAL07
    case 0xC024BA: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:276 LDA @LOCAL07
    // Overlapping static entry reached from 0xC024B7.
    case 0xC024BB: {
        Instruction step(cpu, 0x1E, 0x00A0AAu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:277 TAX
    case 0xC024BC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:278 LDY #npc_config::sprite
    case 0xC024BD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:278 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024BB.
    case 0xC024BE: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:278 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024BD.
    case 0xC024BF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:279 LDA [@VIRTUAL06],Y
    case 0xC024C0: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:280 LDY @LOCAL06
    case 0xC024C2: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:281 JSL CREATE_ENTITY
    case 0xC024C4: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:282 TAX
    case 0xC024C8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:283 STX @LOCAL05
    case 0xC024C9: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:284 BRA @UNKNOWN26
    case 0xC024CB: {
        Instruction step(cpu, 0x80, 0x00006Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:286 LDA SHOW_NPC_FLAG
    case 0xC024CD: {
        Instruction step(cpu, 0xAD, 0x004DECu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:287 BEQ @UNKNOWN24
    case 0xC024D0: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:288 LDA [@VIRTUAL06]
    case 0xC024D2: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:289 AND #$00FF
    case 0xC024D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:289 AND #$00FF
    // Overlapping static entry reached from 0xC024D4.
    case 0xC024D6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:290 CMP #3
    case 0xC024D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:290 CMP #3
    // Overlapping static entry reached from 0xC024D7.
    case 0xC024D9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:291 BNE @UNKNOWN26
    case 0xC024DA: {
        Instruction step(cpu, 0xD0, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:293 LDY @LOCAL04
    case 0xC024DC: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:294 STY @LOCAL00
    case 0xC024DE: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:295 LDA @LOCAL03
    case 0xC024E0: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:296 STA @VIRTUAL02
    case 0xC024E2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:297 STA @LOCAL01
    case 0xC024E4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:298 LDY #.LOWORD(-1)
    case 0xC024E6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:298 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC024E6.
    case 0xC024E8: {
        Instruction step(cpu, 0xFF, 0xA51E84u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:299 STY @LOCAL07
    case 0xC024E9: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024EB: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024E8.
    case 0xC024EC: {
        Instruction step(cpu, 0x12, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024ED: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024EC.
    case 0xC024EE: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024EF: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024EE.
    case 0xC024F0: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024F1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024F0.
    case 0xC024F2: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:301 LDY #npc_config::event_script
    case 0xC024F3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:301 LDY #npc_config::event_script
    // Overlapping static entry reached from 0xC024F3.
    case 0xC024F5: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:302 LDA [@VIRTUAL06],Y
    case 0xC024F6: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:303 TAX
    case 0xC024F8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:304 LDY #npc_config::sprite
    case 0xC024F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:304 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024F9.
    case 0xC024FB: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:305 LDA [@VIRTUAL06],Y
    case 0xC024FC: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:306 LDY @LOCAL07
    case 0xC024FE: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:306 LDY @LOCAL07
    // Overlapping static entry reached from 0xC02578.
    case 0xC024FF: {
        Instruction step(cpu, 0x1E, 0x005F22u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:307 JSL CREATE_ENTITY
    case 0xC02500: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:307 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC024FF.
    case 0xC02502: {
        Instruction step(cpu, 0x1E, 0x00AAC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:308 TAX
    case 0xC02504: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:309 STX @LOCAL05
    case 0xC02505: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:310 BRA @UNKNOWN26
    case 0xC02507: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:312 SEP #PROC_FLAGS::ACCUM8
    case 0xC02509: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:313 LDY #npc_config::appearance_style
    case 0xC0250B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:313 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC0250B.
    case 0xC0250D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:314 LDA [@VIRTUAL06],Y
    case 0xC0250E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:315 REP #PROC_FLAGS::ACCUM8
    case 0xC02510: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:316 AND #$00FF
    case 0xC02512: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:316 AND #$00FF
    // Overlapping static entry reached from 0xC02512.
    case 0xC02514: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:317 BNE @UNKNOWN26
    case 0xC02515: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:318 LDY @LOCAL04
    case 0xC02517: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:319 STY @LOCAL00
    case 0xC02519: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:320 LDA @LOCAL03
    case 0xC0251B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:321 STA @VIRTUAL02
    case 0xC0251D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:322 STA @LOCAL01
    case 0xC0251F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:323 LDY #.LOWORD(-1)
    case 0xC02521: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:323 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02521.
    case 0xC02523: {
        Instruction step(cpu, 0xFF, 0xA21C84u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:324 STY @LOCAL06
    case 0xC02524: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    case 0xC02526: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Bu : 0x00031Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC02523.
    case 0xC02527: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC02526.
    case 0xC02528: {
        Instruction step(cpu, 0x03, 0x0000A0u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:326 LDY #npc_config::sprite
    case 0xC02529: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:326 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC02528.
    case 0xC0252A: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:326 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC02529.
    case 0xC0252B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:327 LDA [@VIRTUAL06],Y
    case 0xC0252C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:328 LDY @LOCAL06
    case 0xC0252E: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:329 JSL CREATE_ENTITY
    case 0xC02530: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:330 TAX
    case 0xC02534: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:331 STX @LOCAL05
    case 0xC02535: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:331 STX @LOCAL05
    // Overlapping static entry reached from 0xC02584.
    case 0xC02536: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:333 LDX @LOCAL05
    case 0xC02537: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:334 CPX #.LOWORD(-1)
    case 0xC02539: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:334 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02539.
    case 0xC0253B: {
        Instruction step(cpu, 0xFF, 0x8A1FF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:335 BEQ @UNKNOWN27
    case 0xC0253C: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:336 TXA
    case 0xC0253E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:337 ASL
    case 0xC0253F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:338 TAX
    case 0xC02540: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02541: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02543: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02545: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02547: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:340 SEP #PROC_FLAGS::ACCUM8
    case 0xC02549: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:341 LDY #npc_config::direction
    case 0xC0254B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:341 LDY #npc_config::direction
    // Overlapping static entry reached from 0xC0254B.
    case 0xC0254D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:342 LDA [@VIRTUAL06],Y
    case 0xC0254E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:343 REP #PROC_FLAGS::ACCUM8
    case 0xC02550: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:343 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0259F.
    case 0xC02551: {
        Instruction step(cpu, 0x20, 0x00FF29u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:344 AND #$00FF
    case 0xC02552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:344 AND #$00FF
    // Overlapping static entry reached from 0xC02552.
    case 0xC02554: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:345 STA ENTITY_DIRECTIONS,X
    case 0xC02555: {
        Instruction step(cpu, 0x9D, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:346 LDA @LOCAL08
    case 0xC02558: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:347 STA ENTITY_NPC_IDS,X
    case 0xC0255A: {
        Instruction step(cpu, 0x9D, 0x003098u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:349 INC @LOCAL09
    case 0xC0255D: {
        Instruction step(cpu, 0xE6, 0x000022u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:351 LDA @LOCAL09
    case 0xC0255F: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0222B-jp.asm:352 CMP @LOCAL0A
    case 0xC02561: {
        Instruction step(cpu, 0xC5, 0x000024u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:353 BNEL @UNKNOWN3
    case 0xC02563: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:353 BNEL @UNKNOWN3
    case 0xC02565: {
        Instruction step(cpu, 0x4C, 0x00229Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0222B-jp.asm:355 END_C_FUNCTION
    case 0xC02568: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:355 END_C_FUNCTION
    case 0xC02569: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
