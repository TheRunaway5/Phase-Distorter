// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/tree_1C.asm
bool resume_text_ccs_tree_1c(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1C.asm:3 BEGIN_C_FUNCTION
    case 0xC18001: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18003: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18004: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18005: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18006: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC18006.
    case 0xC18008: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC18009: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:9 END_STACK_VARS
    case 0xC1800A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:10 TXA
    case 0xC1800B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:11 BEQL @UNKNOWN21
    case 0xC1800C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:11 BEQL @UNKNOWN21
    case 0xC1800E: {
        Instruction step(cpu, 0x4C, 0x0080A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:12 CMP #$01
    case 0xC18011: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:12 CMP #$01
    // Overlapping static entry reached from 0xC18011.
    case 0xC18013: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:13 BEQL @UNKNOWN22
    case 0xC18014: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:13 BEQL @UNKNOWN22
    case 0xC18016: {
        Instruction step(cpu, 0x4C, 0x0080AAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:14 CMP #$02
    case 0xC18019: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:14 CMP #$02
    // Overlapping static entry reached from 0xC18019.
    case 0xC1801B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:15 BEQL @UNKNOWN23
    case 0xC1801C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:15 BEQL @UNKNOWN23
    case 0xC1801E: {
        Instruction step(cpu, 0x4C, 0x0080B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:16 CMP #$03
    case 0xC18021: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:16 CMP #$03
    // Overlapping static entry reached from 0xC18021.
    case 0xC18023: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:17 BEQL @UNKNOWN24
    case 0xC18024: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:17 BEQL @UNKNOWN24
    case 0xC18026: {
        Instruction step(cpu, 0x4C, 0x0080B6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:18 CMP #$04
    case 0xC18029: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:18 CMP #$04
    // Overlapping static entry reached from 0xC18029.
    case 0xC1802B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:19 BEQL @UNKNOWN25
    case 0xC1802C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:19 BEQL @UNKNOWN25
    case 0xC1802E: {
        Instruction step(cpu, 0x4C, 0x0080BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:20 CMP #$05
    case 0xC18031: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:20 CMP #$05
    // Overlapping static entry reached from 0xC18031.
    case 0xC18033: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:21 BEQL @UNKNOWN26
    case 0xC18034: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:21 BEQL @UNKNOWN26
    case 0xC18036: {
        Instruction step(cpu, 0x4C, 0x0080C2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:22 CMP #@VIRTUAL06
    case 0xC18039: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:22 CMP #@VIRTUAL06
    // Overlapping static entry reached from 0xC18039.
    case 0xC1803B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:23 BEQL @UNKNOWN27
    case 0xC1803C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:23 BEQL @UNKNOWN27
    case 0xC1803E: {
        Instruction step(cpu, 0x4C, 0x0080C8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:24 CMP #$07
    case 0xC18041: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:24 CMP #$07
    // Overlapping static entry reached from 0xC18041.
    case 0xC18043: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:25 BEQL @UNKNOWN28
    case 0xC18044: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:25 BEQL @UNKNOWN28
    case 0xC18046: {
        Instruction step(cpu, 0x4C, 0x0080CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:26 CMP #$08
    case 0xC18049: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:26 CMP #$08
    // Overlapping static entry reached from 0xC18049.
    case 0xC1804B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:27 BEQL @UNKNOWN29
    case 0xC1804C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:27 BEQL @UNKNOWN29
    case 0xC1804E: {
        Instruction step(cpu, 0x4C, 0x0080D4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:28 CMP #$09
    case 0xC18051: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:28 CMP #$09
    // Overlapping static entry reached from 0xC18051.
    case 0xC18053: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:29 BEQL @UNKNOWN30
    case 0xC18054: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:29 BEQL @UNKNOWN30
    case 0xC18056: {
        Instruction step(cpu, 0x4C, 0x0080DAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:30 CMP #$0A
    case 0xC18059: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:30 CMP #$0A
    // Overlapping static entry reached from 0xC18059.
    case 0xC1805B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:31 BEQL @UNKNOWN31
    case 0xC1805C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:31 BEQL @UNKNOWN31
    case 0xC1805E: {
        Instruction step(cpu, 0x4C, 0x0080E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:32 CMP #$0B
    case 0xC18061: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:32 CMP #$0B
    // Overlapping static entry reached from 0xC18061.
    case 0xC18063: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:33 BEQL @UNKNOWN32
    case 0xC18064: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:33 BEQL @UNKNOWN32
    case 0xC18066: {
        Instruction step(cpu, 0x4C, 0x0080E6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:34 CMP #$0C
    case 0xC18069: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:34 CMP #$0C
    // Overlapping static entry reached from 0xC18069.
    case 0xC1806B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:35 BEQL @UNKNOWN33
    case 0xC1806C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:35 BEQL @UNKNOWN33
    case 0xC1806E: {
        Instruction step(cpu, 0x4C, 0x0080ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:42 CMP #$0D
    case 0xC18071: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:42 CMP #$0D
    // Overlapping static entry reached from 0xC18071.
    case 0xC18073: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:43 BEQL @UNKNOWN36
    case 0xC18074: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:43 BEQL @UNKNOWN36
    case 0xC18076: {
        Instruction step(cpu, 0x4C, 0x0080F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:44 CMP #$0E
    case 0xC18079: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:44 CMP #$0E
    // Overlapping static entry reached from 0xC18079.
    case 0xC1807B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:45 BEQL @UNKNOWN37
    case 0xC1807C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:45 BEQL @UNKNOWN37
    case 0xC1807E: {
        Instruction step(cpu, 0x4C, 0x008111u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:46 CMP #$0F
    case 0xC18081: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:46 CMP #$0F
    // Overlapping static entry reached from 0xC18081.
    case 0xC18083: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:47 BEQL @UNKNOWN38
    case 0xC18084: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:47 BEQL @UNKNOWN38
    case 0xC18086: {
        Instruction step(cpu, 0x4C, 0x008130u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:48 CMP #$11
    case 0xC18089: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:48 CMP #$11
    // Overlapping static entry reached from 0xC18089.
    case 0xC1808B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:49 BEQL @UNKNOWN39
    case 0xC1808C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:49 BEQL @UNKNOWN39
    case 0xC1808E: {
        Instruction step(cpu, 0x4C, 0x008140u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:50 CMP #$12
    case 0xC18091: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:50 CMP #$12
    // Overlapping static entry reached from 0xC18091.
    case 0xC18093: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:51 BEQL @UNKNOWN40
    case 0xC18094: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:51 BEQL @UNKNOWN40
    case 0xC18096: {
        Instruction step(cpu, 0x4C, 0x008164u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:52 CMP #$13
    case 0xC18099: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:52 CMP #$13
    // Overlapping static entry reached from 0xC18099.
    case 0xC1809B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1C.asm:53 BEQL @UNKNOWN41
    case 0xC1809C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1C.asm:53 BEQL @UNKNOWN41
    case 0xC1809E: {
        Instruction step(cpu, 0x4C, 0x008169u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:54 JMP @UNKNOWN42
    case 0xC180A1: {
        Instruction step(cpu, 0x4C, 0x00816Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:56 LDA #.LOWORD(CC_1C_00)
    case 0xC180A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00451Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:56 LDA #.LOWORD(CC_1C_00)
    // Overlapping static entry reached from 0xC180A4.
    case 0xC180A6: {
        Instruction step(cpu, 0x45, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:57 JMP @UNKNOWN43
    case 0xC180A7: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:57 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180A6.
    case 0xC180A8: {
        Instruction step(cpu, 0x71, 0x000081u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:59 LDA #.LOWORD(CC_1C_01)
    case 0xC180AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F2u : 0x0044F2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:59 LDA #.LOWORD(CC_1C_01)
    // Overlapping static entry reached from 0xC180AA.
    case 0xC180AC: {
        Instruction step(cpu, 0x44, 0x00714Cu, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:60 JMP @UNKNOWN43
    case 0xC180AD: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:60 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180AC.
    case 0xC180AF: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    case 0xC180B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0053C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    // Overlapping static entry reached from 0xC180AF.
    case 0xC180B1: {
        Instruction step(cpu, 0xC4, 0x000053u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:62 LDA #.LOWORD(CC_1C_02)
    // Overlapping static entry reached from 0xC180B0.
    case 0xC180B2: {
        Instruction step(cpu, 0x53, 0x00004Cu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:63 JMP @UNKNOWN43
    case 0xC180B3: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:63 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180B2.
    case 0xC180B4: {
        Instruction step(cpu, 0x71, 0x000081u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:65 LDA #.LOWORD(CC_1C_03)
    case 0xC180B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Du : 0x004C8Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:65 LDA #.LOWORD(CC_1C_03)
    // Overlapping static entry reached from 0xC180B6.
    case 0xC180B8: {
        Instruction step(cpu, 0x4C, 0x00714Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:66 JMP @UNKNOWN43
    case 0xC180B9: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:68 JSR SHOW_HPPP_WINDOWS
    case 0xC180BC: {
        Instruction step(cpu, 0x20, 0x000E5Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:69 JMP @UNKNOWN42
    case 0xC180BF: {
        Instruction step(cpu, 0x4C, 0x00816Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:71 LDA #.LOWORD(CC_1C_05)
    case 0xC180C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x004AC3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:71 LDA #.LOWORD(CC_1C_05)
    // Overlapping static entry reached from 0xC180C2.
    case 0xC180C4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:72 JMP @UNKNOWN43
    case 0xC180C5: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:74 LDA #.LOWORD(CC_1C_06)
    case 0xC180C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E2u : 0x004AE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:74 LDA #.LOWORD(CC_1C_06)
    // Overlapping static entry reached from 0xC180C8.
    case 0xC180CA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:75 JMP @UNKNOWN43
    case 0xC180CB: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:77 LDA #.LOWORD(CC_1C_07)
    case 0xC180CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CEu : 0x0049CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:77 LDA #.LOWORD(CC_1C_07)
    // Overlapping static entry reached from 0xC180CE.
    case 0xC180D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x00004Cu : 0x00714Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    case 0xC180D1: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180D0.
    case 0xC180D2: {
        Instruction step(cpu, 0x71, 0x000081u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:78 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180D0.
    case 0xC180D3: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    case 0xC180D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DAu : 0x0047DAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    // Overlapping static entry reached from 0xC180D3.
    case 0xC180D5: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:80 LDA #.LOWORD(CC_1C_08)
    // Overlapping static entry reached from 0xC180D4.
    case 0xC180D6: {
        Instruction step(cpu, 0x47, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:81 JMP @UNKNOWN43
    case 0xC180D7: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:81 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180D6.
    case 0xC180D8: {
        Instruction step(cpu, 0x71, 0x000081u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:83 LDA #.LOWORD(CC_1C_09)
    case 0xC180DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x004511u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:83 LDA #.LOWORD(CC_1C_09)
    // Overlapping static entry reached from 0xC180DA.
    case 0xC180DC: {
        Instruction step(cpu, 0x45, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:84 JMP @UNKNOWN43
    case 0xC180DD: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:84 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180DC.
    case 0xC180DE: {
        Instruction step(cpu, 0x71, 0x000081u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:86 LDA #.LOWORD(CC_1C_0A)
    case 0xC180E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000069u : 0x005669u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:86 LDA #.LOWORD(CC_1C_0A)
    // Overlapping static entry reached from 0xC180E0.
    case 0xC180E2: {
        Instruction step(cpu, 0x56, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:87 JMP @UNKNOWN43
    case 0xC180E3: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:87 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180E2.
    case 0xC180E4: {
        Instruction step(cpu, 0x71, 0x000081u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:89 LDA #.LOWORD(CC_1C_0B)
    case 0xC180E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0057EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:89 LDA #.LOWORD(CC_1C_0B)
    // Overlapping static entry reached from 0xC180E6.
    case 0xC180E8: {
        Instruction step(cpu, 0x57, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:90 JMP @UNKNOWN43
    case 0xC180E9: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:90 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180E8.
    case 0xC180EA: {
        Instruction step(cpu, 0x71, 0x000081u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:92 LDA #.LOWORD(CC_1C_0C)
    case 0xC180EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x005E26u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:92 LDA #.LOWORD(CC_1C_0C)
    // Overlapping static entry reached from 0xC180EC.
    case 0xC180EE: {
        Instruction step(cpu, 0x5E, 0x00714Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:93 JMP @UNKNOWN43
    case 0xC180EF: {
        Instruction step(cpu, 0x4C, 0x008171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:93 JMP @UNKNOWN43
    // Overlapping static entry reached from 0xC180EE.
    case 0xC180F1: {
        Instruction step(cpu, 0x81, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:115 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC180F2: {
        Instruction step(cpu, 0x20, 0x00AB5Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:115 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    // Overlapping static entry reached from 0xC180F1.
    case 0xC180F3: {
        Instruction step(cpu, 0x5D, 0x0085ABu, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180F5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC180F3.
    case 0xC180F6: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180F7: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180F8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180FA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180FB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/ccs/tree_1C.asm:116 PROMOTENEARPTRA @VIRTUAL06
    case 0xC180FD: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC180FF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18101: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18103: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18105: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18107: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:119 LDA #80
    case 0xC18109: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:119 LDA #80
    // Overlapping static entry reached from 0xC18109.
    case 0xC1810B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:121 JSR PRINT_STRING
    case 0xC1810C: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:125 BRA @UNKNOWN42
    case 0xC1810F: {
        Instruction step(cpu, 0x80, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:131 JSR RETURN_BATTLE_TARGET_ADDRESS
    case 0xC18111: {
        Instruction step(cpu, 0x20, 0x00ABAEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC18114: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC18116: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC18117: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC18119: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1811A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/ccs/tree_1C.asm:132 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1811C: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC1811E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18120: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18122: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18124: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18126: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:135 LDA #80
    case 0xC18128: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:135 LDA #80
    // Overlapping static entry reached from 0xC18128.
    case 0xC1812A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:137 JSR PRINT_STRING
    case 0xC1812B: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:141 BRA @UNKNOWN42
    case 0xC1812E: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:143 JSR UNKNOWN_C1AD26
    case 0xC18130: {
        Instruction step(cpu, 0x20, 0x00ABE2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18133: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18135: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18137: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1C.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18139: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:145 JSR PRINT_NUMBER
    case 0xC1813B: {
        Instruction step(cpu, 0x20, 0x001344u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:146 BRA @UNKNOWN42
    case 0xC1813E: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:149 JSL UPDATE_PARTY
    case 0xC18140: {
        Instruction step(cpu, 0x22, 0xC036C7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:150 JSL UNKNOWN_C2277C
    case 0xC18144: {
        Instruction step(cpu, 0x22, 0xC22642u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:151 JSR UNKNOWN_C1931B
    case 0xC18148: {
        Instruction step(cpu, 0x20, 0x00940Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:152 JSL UNKNOWN_C2272F
    case 0xC1814B: {
        Instruction step(cpu, 0x22, 0xC225EEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:154 CMP #1
    case 0xC1814F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:154 CMP #1
    // Overlapping static entry reached from 0xC1814F.
    case 0xC18151: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/tree_1C.asm:155 BLTEQ @UNKNOWN42
    case 0xC18152: {
        Instruction step(cpu, 0x90, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/tree_1C.asm:155 BLTEQ @UNKNOWN42
    case 0xC18154: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:156 LDA #$0066
    case 0xC18156: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000066u : 0x000066u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:156 LDA #$0066
    // Overlapping static entry reached from 0xC18156.
    case 0xC18158: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:157 JSR PRINT_LETTER
    case 0xC18159: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:158 LDA #$0076
    case 0xC1815C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000076u : 0x000076u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:158 LDA #$0076
    // Overlapping static entry reached from 0xC1815C.
    case 0xC1815E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:159 JSR PRINT_LETTER
    case 0xC1815F: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:161 BRA @UNKNOWN42
    case 0xC18162: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:167 LDA #.LOWORD(CC_1C_12)
    case 0xC18164: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x006450u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:167 LDA #.LOWORD(CC_1C_12)
    // Overlapping static entry reached from 0xC18164.
    case 0xC18166: {
        Instruction step(cpu, 0x64, 0x000080u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:168 BRA @UNKNOWN43
    case 0xC18167: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:168 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC18166.
    case 0xC18168: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:170 LDA #.LOWORD(CC_1C_13)
    case 0xC18169: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x007640u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:170 LDA #.LOWORD(CC_1C_13)
    // Overlapping static entry reached from 0xC18169.
    case 0xC1816B: {
        Instruction step(cpu, 0x76, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:171 BRA @UNKNOWN43
    case 0xC1816C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:171 BRA @UNKNOWN43
    // Overlapping static entry reached from 0xC1816B.
    case 0xC1816D: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    case 0xC1816E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    // Overlapping static entry reached from 0xC1816D.
    case 0xC1816F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1C.asm:173 LDA #NULL
    // Overlapping static entry reached from 0xC1816E.
    case 0xC18170: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1C.asm:175 END_C_FUNCTION
    case 0xC18171: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1C.asm:175 END_C_FUNCTION
    case 0xC18172: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
