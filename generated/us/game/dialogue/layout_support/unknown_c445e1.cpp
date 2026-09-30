// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C445E1.asm
bool resume_unresolved_c4_c445e1(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C445E1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC445E1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC445E6.
    case 0xC445E8: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445EA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:13 TAY
    case 0xC445EB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC445EC: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC445EE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC445F0: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC445F2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:15 LDX #0
    case 0xC445F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:15 LDX #0
    // Overlapping static entry reached from 0xC445F4.
    case 0xC445F6: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:16 STX @LOCAL04
    case 0xC445F7: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C445E1.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC445F9: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC445FC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C445E1.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC445FE: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC44601: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44603: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44605: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44607: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44609: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:19 LDA CURRENT_FOCUS_WINDOW
    case 0xC4460B: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:20 CMP #.LOWORD(-1)
    case 0xC4460E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4460E.
    case 0xC44610: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C445E1.asm:21 BEQL @UNKNOWN14
    case 0xC44611: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C445E1.asm:21 BEQL @UNKNOWN14
    case 0xC44613: {
        Instruction step(cpu, 0x4C, 0x0047F7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C445E1.asm:21 BEQL @UNKNOWN14
    // Overlapping static entry reached from 0xC44610.
    case 0xC44614: {
        Instruction step(cpu, 0xF7, 0x000047u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:22 LDA CURRENT_FOCUS_WINDOW
    case 0xC44616: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:23 ASL
    case 0xC44619: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:24 TAX
    case 0xC4461A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:25 LDA OPEN_WINDOW_TABLE,X
    case 0xC4461B: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC4461E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC4461E.
    case 0xC44620: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:27 JSL MULT168
    case 0xC44621: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:28 CLC
    case 0xC44625: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:29 ADC #.LOWORD(WINDOW_STATS)
    case 0xC44626: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:29 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC44626.
    case 0xC44628: {
        Instruction step(cpu, 0x86, 0x0000A8u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:30 TAY
    case 0xC44629: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:31 STY @LOCAL02
    case 0xC4462A: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:33 LDA [@VIRTUAL0A]
    case 0xC4462C: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:34 AND #$00FF
    case 0xC4462E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC4462E.
    case 0xC44630: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:35 BEQ @UNKNOWN2
    case 0xC44631: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:36 AND #$00FF
    case 0xC44633: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC44633.
    case 0xC44635: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:37 INC @VIRTUAL0A
    case 0xC44636: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:38 BRA @UNKNOWN3
    case 0xC44638: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:40 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4463A: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:40 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4463C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:40 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4463E: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:40 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44640: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:41 LDA [@VIRTUAL06]
    case 0xC44642: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:42 AND #$00FF
    case 0xC44644: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC44644.
    case 0xC44646: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:43 INC @VIRTUAL06
    case 0xC44647: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C445E1.asm:44 MOVE_INTX @VIRTUAL06, @LOCAL03
    case 0xC44649: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C445E1.asm:44 MOVE_INTX @VIRTUAL06, @LOCAL03
    case 0xC4464B: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C445E1.asm:44 MOVE_INTX @VIRTUAL06, @LOCAL03
    case 0xC4464D: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:44 MOVE_INTX @VIRTUAL06, @LOCAL03
    case 0xC4464F: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:46 CMP #$15
    case 0xC44651: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:46 CMP #$15
    // Overlapping static entry reached from 0xC44651.
    case 0xC44653: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:47 BEQ @DICT1
    case 0xC44654: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:48 CMP #$16
    case 0xC44656: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:48 CMP #$16
    // Overlapping static entry reached from 0xC44656.
    case 0xC44658: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:49 BEQ @DICT2
    case 0xC44659: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:50 CMP #$17
    case 0xC4465B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:50 CMP #$17
    // Overlapping static entry reached from 0xC4465B.
    case 0xC4465D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C445E1.asm:51 BEQL @DICT3
    case 0xC4465E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C445E1.asm:51 BEQL @DICT3
    case 0xC44660: {
        Instruction step(cpu, 0x4C, 0x0046F5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:52 JMP @UNKNOWN8
    case 0xC44663: {
        Instruction step(cpu, 0x4C, 0x00473Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:54 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44666: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:54 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44668: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:54 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4466A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:54 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4466C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:55 LDA [@VIRTUAL06]
    case 0xC4466E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:56 AND #$00FF
    case 0xC44670: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC44670.
    case 0xC44672: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:57 ASL
    case 0xC44673: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:58 ASL
    case 0xC44674: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:59 PHA
    case 0xC44675: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC44676: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EDu : 0x00CDEDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC44676.
    case 0xC44678: {
        Instruction step(cpu, 0xCD, 0x000685u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC44679: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC4467B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4467B.
    case 0xC4467D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC4467E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:61 PLA
    case 0xC44680: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:62 CLC
    case 0xC44681: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:63 ADC @VIRTUAL06
    case 0xC44682: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:64 STA @VIRTUAL06
    case 0xC44684: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44686: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44686.
    case 0xC44688: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44689: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4468B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4468C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4468E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44690: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:66 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44692: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:66 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44694: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:66 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44696: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:66 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44698: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:67 INC @VIRTUAL06
    case 0xC4469A: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:68 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4469C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:68 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4469E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:68 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446A0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:68 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446A2: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:69 LDA [@VIRTUAL0A]
    case 0xC446A4: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:70 AND #$00FF
    case 0xC446A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC446A6.
    case 0xC446A8: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:71 INC @VIRTUAL0A
    case 0xC446A9: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:72 JMP @UNKNOWN8
    case 0xC446AB: {
        Instruction step(cpu, 0x4C, 0x00473Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:74 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446AE: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:74 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446B0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:74 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446B2: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:74 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446B4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:75 LDA [@VIRTUAL06]
    case 0xC446B6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:76 AND #$00FF
    case 0xC446B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC446B8.
    case 0xC446BA: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:77 ASL
    case 0xC446BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:78 ASL
    case 0xC446BC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:79 PHA
    case 0xC446BD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC446BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EDu : 0x00D1EDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC446BE.
    case 0xC446C0: {
        Instruction step(cpu, 0xD1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC446C1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC446C0.
    case 0xC446C2: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC446C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC446C2.
    case 0xC446C4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC446C3.
    case 0xC446C5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC446C6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:81 PLA
    case 0xC446C8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:82 CLC
    case 0xC446C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:83 ADC @VIRTUAL06
    case 0xC446CA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:84 STA @VIRTUAL06
    case 0xC446CC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC446CE.
    case 0xC446D0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D1: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D3: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D4: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D8: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:86 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446DA: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:86 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446DC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:86 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446DE: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:86 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446E0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:87 INC @VIRTUAL06
    case 0xC446E2: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:88 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446E4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:88 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446E6: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:88 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446E8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:88 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446EA: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:89 LDA [@VIRTUAL0A]
    case 0xC446EC: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:90 AND #$00FF
    case 0xC446EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC446EE.
    case 0xC446F0: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:91 INC @VIRTUAL0A
    case 0xC446F1: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:92 BRA @UNKNOWN8
    case 0xC446F3: {
        Instruction step(cpu, 0x80, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:94 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446F5: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:94 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446F7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:94 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446F9: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:94 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446FB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:95 LDA [@VIRTUAL06]
    case 0xC446FD: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:96 AND #$00FF
    case 0xC446FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC446FF.
    case 0xC44701: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:97 ASL
    case 0xC44702: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:98 ASL
    case 0xC44703: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:99 PHA
    case 0xC44704: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC44705: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EDu : 0x00D5EDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC44705.
    case 0xC44707: {
        Instruction step(cpu, 0xD5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC44708: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC44707.
    case 0xC44709: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC4470A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC44709.
    case 0xC4470B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC4470A.
    case 0xC4470C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC4470D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:101 PLA
    case 0xC4470F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:102 CLC
    case 0xC44710: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:103 ADC @VIRTUAL06
    case 0xC44711: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:104 STA @VIRTUAL06
    case 0xC44713: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44715: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44715.
    case 0xC44717: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44718: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4471A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4471B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4471D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4471F: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:106 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44721: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:106 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44723: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:106 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44725: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:106 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44727: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:107 INC @VIRTUAL06
    case 0xC44729: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:108 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4472B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:108 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4472D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:108 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4472F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:108 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44731: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:109 LDA [@VIRTUAL0A]
    case 0xC44733: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:110 AND #$00FF
    case 0xC44735: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC44735.
    case 0xC44737: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:111 INC @VIRTUAL0A
    case 0xC44738: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:113 CMP #$50
    case 0xC4473A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:113 CMP #$50
    // Overlapping static entry reached from 0xC4473A.
    case 0xC4473C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:114 BEQ @UNKNOWN11
    case 0xC4473D: {
        Instruction step(cpu, 0xF0, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:115 CMP #$20
    case 0xC4473F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:115 CMP #$20
    // Overlapping static entry reached from 0xC4473F.
    case 0xC44741: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:116 BCC @UNKNOWN11
    case 0xC44742: {
        Instruction step(cpu, 0x90, 0x00006Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:117 INC UPCOMING_WORD_LENGTH
    case 0xC44744: {
        Instruction step(cpu, 0xEE, 0x009660u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:118 CMP #$2F
    case 0xC44747: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:118 CMP #$2F
    // Overlapping static entry reached from 0xC44747.
    case 0xC44749: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:119 BNE @UNKNOWN9
    case 0xC4474A: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:120 LDA #8
    case 0xC4474C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:120 LDA #8
    // Overlapping static entry reached from 0xC4474C.
    case 0xC4474E: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:121 BRA @UNKNOWN10
    case 0xC4474F: {
        Instruction step(cpu, 0x80, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:123 SEC
    case 0xC44751: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:124 SBC #$50
    case 0xC44752: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:124 SBC #$50
    // Overlapping static entry reached from 0xC44752.
    case 0xC44754: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:125 AND #$007F
    case 0xC44755: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:125 AND #$007F
    // Overlapping static entry reached from 0xC44755.
    case 0xC44757: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:126 STA @VIRTUAL02
    case 0xC44758: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:127 LDY @LOCAL02
    case 0xC4475A: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:128 LDA a:window_stats::font,Y
    case 0xC4475C: {
        Instruction step(cpu, 0xB9, 0x000015u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:129 STA @LOCAL01
    case 0xC4475F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44761: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000054u : 0x00F054u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44761.
    case 0xC44763: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44764: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44763.
    case 0xC44765: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44766: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44765.
    case 0xC44767: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44766.
    case 0xC44768: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44769: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:131 LDA @LOCAL01
    case 0xC4476B: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC4476D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC4476F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC44770: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC44772: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC44773: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:133 CLC
    case 0xC44774: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:134 ADC @VIRTUAL06
    case 0xC44775: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:135 STA @VIRTUAL06
    case 0xC44777: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44779: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC44779.
    case 0xC4477B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4477C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4477E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4477F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44781: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44783: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:137 LDA @VIRTUAL02
    case 0xC44785: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:138 CLC
    case 0xC44787: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:139 ADC @VIRTUAL06
    case 0xC44788: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:140 STA @VIRTUAL06
    case 0xC4478A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:141 LDA [@VIRTUAL06]
    case 0xC4478C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:142 AND #$00FF
    case 0xC4478E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC4478E.
    case 0xC44790: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:143 STA @LOCAL01
    case 0xC44791: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:144 LDA CHARACTER_PADDING
    case 0xC44793: {
        Instruction step(cpu, 0xAD, 0x005E6Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:145 AND #$00FF
    case 0xC44796: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC44796.
    case 0xC44798: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:146 STA @VIRTUAL02
    case 0xC44799: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:147 LDA @LOCAL01
    case 0xC4479B: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:148 CLC
    case 0xC4479D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:149 ADC @VIRTUAL02
    case 0xC4479E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:151 STA @VIRTUAL02
    case 0xC447A0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:152 LDX @LOCAL04
    case 0xC447A2: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:153 TXA
    case 0xC447A4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:154 CLC
    case 0xC447A5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:155 ADC @VIRTUAL02
    case 0xC447A6: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:156 TAX
    case 0xC447A8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:157 STX @LOCAL04
    case 0xC447A9: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:158 JMP @UNKNOWN1
    case 0xC447AB: {
        Instruction step(cpu, 0x4C, 0x00462Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:160 LDY @LOCAL02
    case 0xC447AE: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:161 LDA a:window_stats::text_x,Y
    case 0xC447B0: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:162 STA @LOCAL00
    case 0xC447B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:163 BEQ @UNKNOWN12
    case 0xC447B5: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:164 LDA VWF_X
    case 0xC447B7: {
        Instruction step(cpu, 0xAD, 0x009E23u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:165 AND #$0007
    case 0xC447BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:165 AND #$0007
    // Overlapping static entry reached from 0xC447BA.
    case 0xC447BC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:166 STA @VIRTUAL04
    case 0xC447BD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:167 LDA @LOCAL00
    case 0xC447BF: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:168 DEC
    case 0xC447C1: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:169 ASL
    case 0xC447C2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:170 ASL
    case 0xC447C3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:171 ASL
    case 0xC447C4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:172 CLC
    case 0xC447C5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:173 ADC @VIRTUAL04
    case 0xC447C6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:174 STA @VIRTUAL02
    case 0xC447C8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:175 LDX @LOCAL04
    case 0xC447CA: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:176 TXA
    case 0xC447CC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:177 CLC
    case 0xC447CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:178 ADC @VIRTUAL02
    case 0xC447CE: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:179 BRA @UNKNOWN13
    case 0xC447D0: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:181 LDA VWF_X
    case 0xC447D2: {
        Instruction step(cpu, 0xAD, 0x009E23u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:182 AND #$0007
    case 0xC447D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:182 AND #$0007
    // Overlapping static entry reached from 0xC447D5.
    case 0xC447D7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:183 STA @VIRTUAL02
    case 0xC447D8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:184 LDX @LOCAL04
    case 0xC447DA: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:185 TXA
    case 0xC447DC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:186 CLC
    case 0xC447DD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:187 ADC @VIRTUAL02
    case 0xC447DE: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:189 STA @VIRTUAL02
    case 0xC447E0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:190 LDA a:window_stats::width,Y
    case 0xC447E2: {
        Instruction step(cpu, 0xB9, 0x00000Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:191 ASL
    case 0xC447E5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:192 ASL
    case 0xC447E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:193 ASL
    case 0xC447E7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:194 CMP @VIRTUAL02
    case 0xC447E8: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:195 BCS @UNKNOWN14
    case 0xC447EA: {
        Instruction step(cpu, 0xB0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:196 JSL REDIRECT_PRINT_NEWLINE
    case 0xC447EC: {
        Instruction step(cpu, 0x22, 0xC10C79u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:197 SEP #PROC_FLAGS::ACCUM8
    case 0xC447F0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:198 LDA #1
    case 0xC447F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:199 STA VWF_INDENT_NEW_LINE
    case 0xC447F4: {
        Instruction step(cpu, 0x8D, 0x005E75u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:199 STA VWF_INDENT_NEW_LINE
    // Overlapping static entry reached from 0xC447F2.
    case 0xC447F5: {
        Instruction step(cpu, 0x75, 0x00005Eu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C445E1.asm:201 REP #PROC_FLAGS::ACCUM8
    case 0xC447F7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C445E1.asm:202 END_C_FUNCTION
    case 0xC447F9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C445E1.asm:202 END_C_FUNCTION
    case 0xC447FA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
