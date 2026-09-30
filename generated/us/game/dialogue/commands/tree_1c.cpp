// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/tree_1C.asm
bool resume_text_ccs_tree_1c(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1C.asm:3 BEGIN_C_FUNCTION
    case 0xC17D94: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D96: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D97: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D98: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17D99.
    case 0xC17D9B: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D9C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC17D9D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:10 TXA
    case 0xC17D9E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:11 BEQL @UNKNOWN21
    case 0xC17D9F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:11 BEQL @UNKNOWN21
    case 0xC17DA1: {
        Instruction step(cpu, 0x4C, 0x007E47u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:12 CMP #$01
    case 0xC17DA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:12 CMP #$01
    // Overlapping static entry reached from 0xC17DA4.
    case 0xC17DA6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:13 BEQL @UNKNOWN22
    case 0xC17DA7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:13 BEQL @UNKNOWN22
    case 0xC17DA9: {
        Instruction step(cpu, 0x4C, 0x007E4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:14 CMP #$02
    case 0xC17DAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:14 CMP #$02
    // Overlapping static entry reached from 0xC17DAC.
    case 0xC17DAE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:15 BEQL @UNKNOWN23
    case 0xC17DAF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:15 BEQL @UNKNOWN23
    case 0xC17DB1: {
        Instruction step(cpu, 0x4C, 0x007E53u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:16 CMP #$03
    case 0xC17DB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:16 CMP #$03
    // Overlapping static entry reached from 0xC17DB4.
    case 0xC17DB6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:17 BEQL @UNKNOWN24
    case 0xC17DB7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:17 BEQL @UNKNOWN24
    case 0xC17DB9: {
        Instruction step(cpu, 0x4C, 0x007E59u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:18 CMP #$04
    case 0xC17DBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:18 CMP #$04
    // Overlapping static entry reached from 0xC17DBC.
    case 0xC17DBE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:19 BEQL @UNKNOWN25
    case 0xC17DBF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:19 BEQL @UNKNOWN25
    case 0xC17DC1: {
        Instruction step(cpu, 0x4C, 0x007E5Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:20 CMP #$05
    case 0xC17DC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:20 CMP #$05
    // Overlapping static entry reached from 0xC17DC4.
    case 0xC17DC6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:21 BEQL @UNKNOWN26
    case 0xC17DC7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:21 BEQL @UNKNOWN26
    case 0xC17DC9: {
        Instruction step(cpu, 0x4C, 0x007E65u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:22 CMP #@VIRTUAL06
    case 0xC17DCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:22 CMP #@VIRTUAL06
    // Overlapping static entry reached from 0xC17DCC.
    case 0xC17DCE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:23 BEQL @UNKNOWN27
    case 0xC17DCF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:23 BEQL @UNKNOWN27
    case 0xC17DD1: {
        Instruction step(cpu, 0x4C, 0x007E6Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:24 CMP #$07
    case 0xC17DD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:24 CMP #$07
    // Overlapping static entry reached from 0xC17DD4.
    case 0xC17DD6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:25 BEQL @UNKNOWN28
    case 0xC17DD7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:25 BEQL @UNKNOWN28
    case 0xC17DD9: {
        Instruction step(cpu, 0x4C, 0x007E71u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:26 CMP #$08
    case 0xC17DDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:26 CMP #$08
    // Overlapping static entry reached from 0xC17DDC.
    case 0xC17DDE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:27 BEQL @UNKNOWN29
    case 0xC17DDF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:27 BEQL @UNKNOWN29
    case 0xC17DE1: {
        Instruction step(cpu, 0x4C, 0x007E77u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:28 CMP #$09
    case 0xC17DE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:28 CMP #$09
    // Overlapping static entry reached from 0xC17DE4.
    case 0xC17DE6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:29 BEQL @UNKNOWN30
    case 0xC17DE7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:29 BEQL @UNKNOWN30
    case 0xC17DE9: {
        Instruction step(cpu, 0x4C, 0x007E7Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:30 CMP #$0A
    case 0xC17DEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:30 CMP #$0A
    // Overlapping static entry reached from 0xC17DEC.
    case 0xC17DEE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:31 BEQL @UNKNOWN31
    case 0xC17DEF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:31 BEQL @UNKNOWN31
    case 0xC17DF1: {
        Instruction step(cpu, 0x4C, 0x007E83u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:32 CMP #$0B
    case 0xC17DF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:32 CMP #$0B
    // Overlapping static entry reached from 0xC17DF4.
    case 0xC17DF6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:33 BEQL @UNKNOWN32
    case 0xC17DF7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:33 BEQL @UNKNOWN32
    case 0xC17DF9: {
        Instruction step(cpu, 0x4C, 0x007E89u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:34 CMP #$0C
    case 0xC17DFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:34 CMP #$0C
    // Overlapping static entry reached from 0xC17DFC.
    case 0xC17DFE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:35 BEQL @UNKNOWN33
    case 0xC17DFF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:35 BEQL @UNKNOWN33
    case 0xC17E01: {
        Instruction step(cpu, 0x4C, 0x007E8Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:37 CMP #$14
    case 0xC17E04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:37 CMP #$14
    // Overlapping static entry reached from 0xC17E04.
    case 0xC17E06: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:38 BEQL @UNKNOWN34
    case 0xC17E07: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:38 BEQL @UNKNOWN34
    case 0xC17E09: {
        Instruction step(cpu, 0x4C, 0x007E95u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:39 CMP #$15
    case 0xC17E0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:39 CMP #$15
    // Overlapping static entry reached from 0xC17E0C.
    case 0xC17E0E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:40 BEQL @UNKNOWN35
    case 0xC17E0F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:40 BEQL @UNKNOWN35
    case 0xC17E11: {
        Instruction step(cpu, 0x4C, 0x007E9Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:42 CMP #$0D
    case 0xC17E14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:42 CMP #$0D
    // Overlapping static entry reached from 0xC17E14.
    case 0xC17E16: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:43 BEQL @UNKNOWN36
    case 0xC17E17: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:43 BEQL @UNKNOWN36
    case 0xC17E19: {
        Instruction step(cpu, 0x4C, 0x007E9Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:44 CMP #$0E
    case 0xC17E1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:44 CMP #$0E
    // Overlapping static entry reached from 0xC17E1C.
    case 0xC17E1E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:45 BEQL @UNKNOWN37
    case 0xC17E1F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:45 BEQL @UNKNOWN37
    case 0xC17E21: {
        Instruction step(cpu, 0x4C, 0x007EC6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:46 CMP #$0F
    case 0xC17E24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:46 CMP #$0F
    // Overlapping static entry reached from 0xC17E24.
    case 0xC17E26: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:47 BEQL @UNKNOWN38
    case 0xC17E27: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:47 BEQL @UNKNOWN38
    case 0xC17E29: {
        Instruction step(cpu, 0x4C, 0x007EEDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:48 CMP #$11
    case 0xC17E2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:48 CMP #$11
    // Overlapping static entry reached from 0xC17E2C.
    case 0xC17E2E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:49 BEQL @UNKNOWN39
    case 0xC17E2F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:49 BEQL @UNKNOWN39
    case 0xC17E31: {
        Instruction step(cpu, 0x4C, 0x007EFDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:50 CMP #$12
    case 0xC17E34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:50 CMP #$12
    // Overlapping static entry reached from 0xC17E34.
    case 0xC17E36: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:51 BEQL @UNKNOWN40
    case 0xC17E37: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:51 BEQL @UNKNOWN40
    case 0xC17E39: {
        Instruction step(cpu, 0x4C, 0x007F02u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:52 CMP #$13
    case 0xC17E3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:52 CMP #$13
    // Overlapping static entry reached from 0xC17E3C.
    case 0xC17E3E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:53 BEQL @UNKNOWN41
    case 0xC17E3F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:53 BEQL @UNKNOWN41
    case 0xC17E41: {
        Instruction step(cpu, 0x4C, 0x007F07u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:54 JMP @UNKNOWN42
    case 0xC17E44: {
        Instruction step(cpu, 0x4C, 0x007F0Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:56 LDA #.LOWORD(CC_1C_00)
    case 0xC17E47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F9u : 0x0040F9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:56 LDA #.LOWORD(CC_1C_00)
    // Overlapping static entry reached from 0xC17E47.
    case 0xC17E49: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:57 JMP @UNKNOWN43
    case 0xC17E4A: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:59 LDA #.LOWORD(CC_1C_01)
    case 0xC17E4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B0u : 0x0040B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:59 LDA #.LOWORD(CC_1C_01)
    // Overlapping static entry reached from 0xC17E4D.
    case 0xC17E4F: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:60 JMP @UNKNOWN43
    case 0xC17E50: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    case 0xC17E53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x004FD7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    // Overlapping static entry reached from 0xC17E53.
    case 0xC17E55: {
        Instruction step(cpu, 0x4F, 0x7F0F4Cu, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:63 JMP @UNKNOWN43
    case 0xC17E56: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:65 LDA #.LOWORD(CC_1C_03)
    case 0xC17E59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Du : 0x00488Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:65 LDA #.LOWORD(CC_1C_03)
    // Overlapping static entry reached from 0xC17E59.
    case 0xC17E5B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:66 JMP @UNKNOWN43
    case 0xC17E5C: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:68 JSR SHOW_HPPP_WINDOWS
    case 0xC17E5F: {
        Instruction step(cpu, 0x20, 0x000A04u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:69 JMP @UNKNOWN42
    case 0xC17E62: {
        Instruction step(cpu, 0x4C, 0x007F0Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:71 LDA #.LOWORD(CC_1C_05)
    case 0xC17E65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BFu : 0x0046BFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:71 LDA #.LOWORD(CC_1C_05)
    // Overlapping static entry reached from 0xC17E65.
    case 0xC17E67: {
        Instruction step(cpu, 0x46, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:72 JMP @UNKNOWN43
    case 0xC17E68: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:72 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E67.
    case 0xC17E69: {
        Instruction step(cpu, 0x0F, 0xDEA97Fu, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:74 LDA #.LOWORD(CC_1C_06)
    case 0xC17E6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DEu : 0x0046DEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:74 LDA #.LOWORD(CC_1C_06)
    // Overlapping static entry reached from 0xC17E6B.
    case 0xC17E6D: {
        Instruction step(cpu, 0x46, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:75 JMP @UNKNOWN43
    case 0xC17E6E: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:75 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E6D.
    case 0xC17E6F: {
        Instruction step(cpu, 0x0F, 0xCAA97Fu, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:77 LDA #.LOWORD(CC_1C_07)
    case 0xC17E71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0045CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:77 LDA #.LOWORD(CC_1C_07)
    // Overlapping static entry reached from 0xC17E71.
    case 0xC17E73: {
        Instruction step(cpu, 0x45, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    case 0xC17E74: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E73.
    case 0xC17E75: {
        Instruction step(cpu, 0x0F, 0xB8A97Fu, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    case 0xC17E77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x0043B8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    // Overlapping static entry reached from 0xC17E77.
    case 0xC17E79: {
        Instruction step(cpu, 0x43, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:81 JMP @UNKNOWN43
    case 0xC17E7A: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:81 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E79.
    case 0xC17E7B: {
        Instruction step(cpu, 0x0F, 0xEFA97Fu, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:83 LDA #.LOWORD(CC_1C_09)
    case 0xC17E7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0040EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:83 LDA #.LOWORD(CC_1C_09)
    // Overlapping static entry reached from 0xC17E7D.
    case 0xC17E7F: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:84 JMP @UNKNOWN43
    case 0xC17E80: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:86 LDA #.LOWORD(CC_1C_0A)
    case 0xC17E83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x0053AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:86 LDA #.LOWORD(CC_1C_0A)
    // Overlapping static entry reached from 0xC17E83.
    case 0xC17E85: {
        Instruction step(cpu, 0x53, 0x00004Cu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:87 JMP @UNKNOWN43
    case 0xC17E86: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:87 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E85.
    case 0xC17E87: {
        Instruction step(cpu, 0x0F, 0x73A97Fu, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:89 LDA #.LOWORD(CC_1C_0B)
    case 0xC17E89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000073u : 0x005573u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:89 LDA #.LOWORD(CC_1C_0B)
    // Overlapping static entry reached from 0xC17E89.
    case 0xC17E8B: {
        Instruction step(cpu, 0x55, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:90 JMP @UNKNOWN43
    case 0xC17E8C: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:90 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC17E8B.
    case 0xC17E8D: {
        Instruction step(cpu, 0x0F, 0xA7A97Fu, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:92 LDA #.LOWORD(CC_1C_0C)
    case 0xC17E8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A7u : 0x005BA7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:92 LDA #.LOWORD(CC_1C_0C)
    // Overlapping static entry reached from 0xC17E8F.
    case 0xC17E91: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:93 JMP @UNKNOWN43
    case 0xC17E92: {
        Instruction step(cpu, 0x4C, 0x007F0Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:96 LDA #.LOWORD(CC_1C_14)
    case 0xC17E95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Bu : 0x00516Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:96 LDA #.LOWORD(CC_1C_14)
    // Overlapping static entry reached from 0xC17E95.
    case 0xC17E97: {
        Instruction step(cpu, 0x51, 0x000080u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:100 BRA @UNKNOWN43
    case 0xC17E98: {
        Instruction step(cpu, 0x80, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:100 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC17E97.
    case 0xC17E99: {
        Instruction step(cpu, 0x75, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:103 LDA #.LOWORD(CC_1C_15)
    case 0xC17E9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FCu : 0x0051FCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:103 LDA #.LOWORD(CC_1C_15)
    // Overlapping static entry reached from 0xC17E99.
    case 0xC17E9B: {
        Instruction step(cpu, 0xFC, 0x008051u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:103 LDA #.LOWORD(CC_1C_15)
    // Overlapping static entry reached from 0xC17E9A.
    case 0xC17E9C: {
        Instruction step(cpu, 0x51, 0x000080u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:107 BRA @UNKNOWN43
    case 0xC17E9D: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:107 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC17E9C.
    case 0xC17E9E: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:112 LDA #0
    case 0xC17E9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:112 LDA #0
    // Overlapping static entry reached from 0xC17E9E.
    case 0xC17EA0: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:112 LDA #0
    // Overlapping static entry reached from 0xC17E9F.
    case 0xC17EA1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:113 JSL UNKNOWN_C3E75D
    case 0xC17EA2: {
        Instruction step(cpu, 0x22, 0xC3E75Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:115 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC17EA6: {
        Instruction step(cpu, 0x20, 0x00AC9Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EA9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EAB: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EAC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EAE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EAF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17EB1: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC17EB3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EB5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EB7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EB9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EBB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:119 LDA #80
    case 0xC17EBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:119 LDA #80
    // Overlapping static entry reached from 0xC17EBD.
    case 0xC17EBF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:123 JSL UNKNOWN_C447FB
    case 0xC17EC0: {
        Instruction step(cpu, 0x22, 0xC447FBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:125 BRA @UNKNOWN42
    case 0xC17EC4: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:128 LDA #1
    case 0xC17EC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:128 LDA #1
    // Overlapping static entry reached from 0xC17EC6.
    case 0xC17EC8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:129 JSL UNKNOWN_C3E75D
    case 0xC17EC9: {
        Instruction step(cpu, 0x22, 0xC3E75Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:131 JSR RETURN_BATTLE_TARGET_ADDRESS
    case 0xC17ECD: {
        Instruction step(cpu, 0x20, 0x00ACF2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED2: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC17ED8: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC17EDA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EDC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EDE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EE0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EE2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:135 LDA #80
    case 0xC17EE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:135 LDA #80
    // Overlapping static entry reached from 0xC17EE4.
    case 0xC17EE6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:139 JSL UNKNOWN_C447FB
    case 0xC17EE7: {
        Instruction step(cpu, 0x22, 0xC447FBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:141 BRA @UNKNOWN42
    case 0xC17EEB: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:143 JSR UNKNOWN_C1AD26
    case 0xC17EED: {
        Instruction step(cpu, 0x20, 0x00AD26u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EF0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EF2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EF4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EF6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:145 JSR PRINT_NUMBER
    case 0xC17EF8: {
        Instruction step(cpu, 0x20, 0x000DF6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:146 BRA @UNKNOWN42
    case 0xC17EFB: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:163 LDA #.LOWORD(CC_1C_11)
    case 0xC17EFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0040CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:163 LDA #.LOWORD(CC_1C_11)
    // Overlapping static entry reached from 0xC17EFD.
    case 0xC17EFF: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:164 BRA @UNKNOWN43
    case 0xC17F00: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:167 LDA #.LOWORD(CC_1C_12)
    case 0xC17F02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x0061D1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:167 LDA #.LOWORD(CC_1C_12)
    // Overlapping static entry reached from 0xC17F02.
    case 0xC17F04: {
        Instruction step(cpu, 0x61, 0x000080u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:168 BRA @UNKNOWN43
    case 0xC17F05: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:168 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC17F04.
    case 0xC17F06: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:170 LDA #.LOWORD(CC_1C_13)
    case 0xC17F07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0073C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:170 LDA #.LOWORD(CC_1C_13)
    // Overlapping static entry reached from 0xC17F07.
    case 0xC17F09: {
        Instruction step(cpu, 0x73, 0x000080u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:171 BRA @UNKNOWN43
    case 0xC17F0A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:171 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC17F09.
    case 0xC17F0B: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    case 0xC17F0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    // Overlapping static entry reached from 0xC17F0B.
    case 0xC17F0D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    // Overlapping static entry reached from 0xC17F0C.
    case 0xC17F0E: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1C.asm:175 END_C_FUNCTION
    case 0xC17F0F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1C.asm:175 END_C_FUNCTION
    case 0xC17F10: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
