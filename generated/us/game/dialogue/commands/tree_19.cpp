// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/tree_19.asm
bool resume_text_ccs_tree_19(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_19.asm:3 BEGIN_C_FUNCTION
    case 0xC179AA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179AC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179AD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179AE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC179AF.
    case 0xC179B1: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179B2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC179B3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:10 TXA
    case 0xC179B4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:11 CMP #$02
    case 0xC179B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:11 CMP #$02
    // Overlapping static entry reached from 0xC179B5.
    case 0xC179B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:12 BEQL @UNKNOWN24
    case 0xC179B8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:12 BEQL @UNKNOWN24
    case 0xC179BA: {
        Instruction step(cpu, 0x4C, 0x007A78u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:13 CMP #$04
    case 0xC179BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:13 CMP #$04
    // Overlapping static entry reached from 0xC179BD.
    case 0xC179BF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:14 BEQL @UNKNOWN25
    case 0xC179C0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:14 BEQL @UNKNOWN25
    case 0xC179C2: {
        Instruction step(cpu, 0x4C, 0x007A7Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:15 CMP #$05
    case 0xC179C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:15 CMP #$05
    // Overlapping static entry reached from 0xC179C5.
    case 0xC179C7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:16 BEQL @UNKNOWN26
    case 0xC179C8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:16 BEQL @UNKNOWN26
    case 0xC179CA: {
        Instruction step(cpu, 0x4C, 0x007A84u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:17 CMP #$10
    case 0xC179CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:17 CMP #$10
    // Overlapping static entry reached from 0xC179CD.
    case 0xC179CF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:18 BEQL @UNKNOWN27
    case 0xC179D0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:18 BEQL @UNKNOWN27
    case 0xC179D2: {
        Instruction step(cpu, 0x4C, 0x007A8Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:19 CMP #$11
    case 0xC179D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:19 CMP #$11
    // Overlapping static entry reached from 0xC179D5.
    case 0xC179D7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:20 BEQL @UNKNOWN28
    case 0xC179D8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:20 BEQL @UNKNOWN28
    case 0xC179DA: {
        Instruction step(cpu, 0x4C, 0x007A90u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:21 CMP #$14
    case 0xC179DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:21 CMP #$14
    // Overlapping static entry reached from 0xC179DD.
    case 0xC179DF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:22 BEQL @UNKNOWN29
    case 0xC179E0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:22 BEQL @UNKNOWN29
    case 0xC179E2: {
        Instruction step(cpu, 0x4C, 0x007A96u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:23 CMP #$16
    case 0xC179E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:23 CMP #$16
    // Overlapping static entry reached from 0xC179E5.
    case 0xC179E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:24 BEQL @UNKNOWN30
    case 0xC179E8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:24 BEQL @UNKNOWN30
    case 0xC179EA: {
        Instruction step(cpu, 0x4C, 0x007ABBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:25 CMP #$18
    case 0xC179ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:25 CMP #$18
    // Overlapping static entry reached from 0xC179ED.
    case 0xC179EF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:26 BEQL @UNKNOWN31
    case 0xC179F0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:26 BEQL @UNKNOWN31
    case 0xC179F2: {
        Instruction step(cpu, 0x4C, 0x007AC1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:27 CMP #$19
    case 0xC179F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:27 CMP #$19
    // Overlapping static entry reached from 0xC179F5.
    case 0xC179F7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:28 BEQL @UNKNOWN32
    case 0xC179F8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:28 BEQL @UNKNOWN32
    case 0xC179FA: {
        Instruction step(cpu, 0x4C, 0x007AC7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:29 CMP #$1A
    case 0xC179FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:29 CMP #$1A
    // Overlapping static entry reached from 0xC179FD.
    case 0xC179FF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:30 BEQL @UNKNOWN33
    case 0xC17A00: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:30 BEQL @UNKNOWN33
    case 0xC17A02: {
        Instruction step(cpu, 0x4C, 0x007ACDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:31 CMP #$1B
    case 0xC17A05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:31 CMP #$1B
    // Overlapping static entry reached from 0xC17A05.
    case 0xC17A07: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:32 BEQL @UNKNOWN34
    case 0xC17A08: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:32 BEQL @UNKNOWN34
    case 0xC17A0A: {
        Instruction step(cpu, 0x4C, 0x007AD3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:33 CMP #$1C
    case 0xC17A0D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:33 CMP #$1C
    // Overlapping static entry reached from 0xC17A0D.
    case 0xC17A0F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:34 BEQL @UNKNOWN35
    case 0xC17A10: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:34 BEQL @UNKNOWN35
    case 0xC17A12: {
        Instruction step(cpu, 0x4C, 0x007AD9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:35 CMP #$1D
    case 0xC17A15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:35 CMP #$1D
    // Overlapping static entry reached from 0xC17A15.
    case 0xC17A17: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:36 BEQL @UNKNOWN36
    case 0xC17A18: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:36 BEQL @UNKNOWN36
    case 0xC17A1A: {
        Instruction step(cpu, 0x4C, 0x007ADEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:37 CMP #$1E
    case 0xC17A1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:37 CMP #$1E
    // Overlapping static entry reached from 0xC17A1D.
    case 0xC17A1F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:38 BEQL @UNKNOWN37
    case 0xC17A20: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:38 BEQL @UNKNOWN37
    case 0xC17A22: {
        Instruction step(cpu, 0x4C, 0x007AE3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:39 CMP #$1F
    case 0xC17A25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:39 CMP #$1F
    // Overlapping static entry reached from 0xC17A25.
    case 0xC17A27: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:40 BEQL @UNKNOWN38
    case 0xC17A28: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:40 BEQL @UNKNOWN38
    case 0xC17A2A: {
        Instruction step(cpu, 0x4C, 0x007AF3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:41 CMP #$20
    case 0xC17A2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:41 CMP #$20
    // Overlapping static entry reached from 0xC17A2D.
    case 0xC17A2F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:42 BEQL @UNKNOWN39
    case 0xC17A30: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:42 BEQL @UNKNOWN39
    case 0xC17A32: {
        Instruction step(cpu, 0x4C, 0x007B0Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:43 CMP #$21
    case 0xC17A35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:43 CMP #$21
    // Overlapping static entry reached from 0xC17A35.
    case 0xC17A37: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:44 BEQL @UNKNOWN40
    case 0xC17A38: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:44 BEQL @UNKNOWN40
    case 0xC17A3A: {
        Instruction step(cpu, 0x4C, 0x007B29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:45 CMP #$22
    case 0xC17A3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:45 CMP #$22
    // Overlapping static entry reached from 0xC17A3D.
    case 0xC17A3F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:46 BEQL @UNKNOWN41
    case 0xC17A40: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:46 BEQL @UNKNOWN41
    case 0xC17A42: {
        Instruction step(cpu, 0x4C, 0x007B2Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:47 CMP #$23
    case 0xC17A45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:47 CMP #$23
    // Overlapping static entry reached from 0xC17A45.
    case 0xC17A47: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:48 BEQL @UNKNOWN42
    case 0xC17A48: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:48 BEQL @UNKNOWN42
    case 0xC17A4A: {
        Instruction step(cpu, 0x4C, 0x007B33u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:49 CMP #$24
    case 0xC17A4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:49 CMP #$24
    // Overlapping static entry reached from 0xC17A4D.
    case 0xC17A4F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:50 BEQL @UNKNOWN43
    case 0xC17A50: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:50 BEQL @UNKNOWN43
    case 0xC17A52: {
        Instruction step(cpu, 0x4C, 0x007B38u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:51 CMP #$25
    case 0xC17A55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:51 CMP #$25
    // Overlapping static entry reached from 0xC17A55.
    case 0xC17A57: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:52 BEQL @UNKNOWN44
    case 0xC17A58: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:52 BEQL @UNKNOWN44
    case 0xC17A5A: {
        Instruction step(cpu, 0x4C, 0x007B3Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:53 CMP #$26
    case 0xC17A5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:53 CMP #$26
    // Overlapping static entry reached from 0xC17A5D.
    case 0xC17A5F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:54 BEQL @UNKNOWN45
    case 0xC17A60: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:54 BEQL @UNKNOWN45
    case 0xC17A62: {
        Instruction step(cpu, 0x4C, 0x007B42u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:55 CMP #$27
    case 0xC17A65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:55 CMP #$27
    // Overlapping static entry reached from 0xC17A65.
    case 0xC17A67: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:56 BEQL @UNKNOWN46
    case 0xC17A68: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:56 BEQL @UNKNOWN46
    case 0xC17A6A: {
        Instruction step(cpu, 0x4C, 0x007B47u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:57 CMP #$28
    case 0xC17A6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:57 CMP #$28
    // Overlapping static entry reached from 0xC17A6D.
    case 0xC17A6F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:58 BEQL @UNKNOWN47
    case 0xC17A70: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:58 BEQL @UNKNOWN47
    case 0xC17A72: {
        Instruction step(cpu, 0x4C, 0x007B4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:59 JMP @UNKNOWN48
    case 0xC17A75: {
        Instruction step(cpu, 0x4C, 0x007B51u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:61 LDA #.LOWORD(CC_19_02)
    case 0xC17A78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F7u : 0x0078F7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:61 LDA #.LOWORD(CC_19_02)
    // Overlapping static entry reached from 0xC17A78.
    case 0xC17A7A: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:62 JMP @UNKNOWN49
    case 0xC17A7B: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:64 JSR UNKNOWN_C11383
    case 0xC17A7E: {
        Instruction step(cpu, 0x20, 0x001383u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:65 JMP @UNKNOWN48
    case 0xC17A81: {
        Instruction step(cpu, 0x4C, 0x007B51u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:67 LDA #.LOWORD(CC_19_05)
    case 0xC17A84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Fu : 0x00506Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:67 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC17A84.
    case 0xC17A86: {
        Instruction step(cpu, 0x50, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:68 JMP @UNKNOWN49
    case 0xC17A87: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:68 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17A86.
    case 0xC17A88: {
        Instruction step(cpu, 0x54, 0x00A97Bu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    case 0xC17A8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x004723u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    // Overlapping static entry reached from 0xC17A88.
    case 0xC17A8B: {
        Instruction step(cpu, 0x23, 0x000047u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    // Overlapping static entry reached from 0xC17A8A.
    case 0xC17A8C: {
        Instruction step(cpu, 0x47, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:71 JMP @UNKNOWN49
    case 0xC17A8D: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:71 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17A8C.
    case 0xC17A8E: {
        Instruction step(cpu, 0x54, 0x00A97Bu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    case 0xC17A90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0047CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    // Overlapping static entry reached from 0xC17A8E.
    case 0xC17A91: {
        Instruction step(cpu, 0xCC, 0x004C47u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    // Overlapping static entry reached from 0xC17A90.
    case 0xC17A92: {
        Instruction step(cpu, 0x47, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:74 JMP @UNKNOWN49
    case 0xC17A93: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:74 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17A92.
    case 0xC17A94: {
        Instruction step(cpu, 0x54, 0x00207Bu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:76 JSR GET_SECONDARY_MEMORY
    case 0xC17A96: {
        Instruction step(cpu, 0x20, 0x000400u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:76 JSR GET_SECONDARY_MEMORY
    // Overlapping static entry reached from 0xC17A94.
    case 0xC17A97: {
        Instruction step(cpu, 0x00, 0x000004u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:85 TAX
    case 0xC17A99: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:86 DEX
    case 0xC17A9A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC17A9B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:88 LDA GAME_STATE+game_state::escargo_express_items,X
    case 0xC17A9D: {
        Instruction step(cpu, 0xBD, 0x00984Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17AA0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17AA2: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17AA4: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17AA6: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC17AA8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AAA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AAC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AAE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AB0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:93 JSR SET_WORKING_MEMORY
    case 0xC17AB2: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:94 JSR INCREMENT_SECONDARY_MEMORY
    case 0xC17AB5: {
        Instruction step(cpu, 0x20, 0x00042Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:95 JMP @UNKNOWN48
    case 0xC17AB8: {
        Instruction step(cpu, 0x4C, 0x007B51u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:97 LDA #.LOWORD(CC_19_16)
    case 0xC17ABB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x005007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:97 LDA #.LOWORD(CC_19_16)
    // Overlapping static entry reached from 0xC17ABB.
    case 0xC17ABD: {
        Instruction step(cpu, 0x50, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:98 JMP @UNKNOWN49
    case 0xC17ABE: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:98 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17ABD.
    case 0xC17ABF: {
        Instruction step(cpu, 0x54, 0x00A97Bu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    case 0xC17AC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x005384u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    // Overlapping static entry reached from 0xC17ABF.
    case 0xC17AC2: {
        Instruction step(cpu, 0x84, 0x000053u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    // Overlapping static entry reached from 0xC17AC1.
    case 0xC17AC3: {
        Instruction step(cpu, 0x53, 0x00004Cu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    case 0xC17AC4: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17AC3.
    case 0xC17AC5: {
        Instruction step(cpu, 0x54, 0x00A97Bu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17B44.
    case 0xC17AC6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    case 0xC17AC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00597Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC17AC5.
    case 0xC17AC8: {
        Instruction step(cpu, 0x7F, 0x544C59u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC17AC7.
    case 0xC17AC9: {
        Instruction step(cpu, 0x59, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:104 JMP @UNKNOWN49
    case 0xC17ACA: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:104 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17AC9.
    case 0xC17ACC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:106 LDA #.LOWORD(CC_19_1A)
    case 0xC17ACD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x005B0Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:106 LDA #.LOWORD(CC_19_1A)
    // Overlapping static entry reached from 0xC17ACD.
    case 0xC17ACF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:107 JMP @UNKNOWN49
    case 0xC17AD0: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    case 0xC17AD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000036u : 0x005C36u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    // Overlapping static entry reached from 0xC17A86.
    case 0xC17AD4: {
        Instruction step(cpu, 0x36, 0x00005Cu, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    // Overlapping static entry reached from 0xC17AD3.
    case 0xC17AD5: {
        Instruction step(cpu, 0x5C, 0x7B544Cu, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:110 JMP @UNKNOWN49
    case 0xC17AD6: {
        Instruction step(cpu, 0x4C, 0x007B54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:112 LDA #.LOWORD(CC_19_1C)
    case 0xC17AD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F7u : 0x005FF7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:112 LDA #.LOWORD(CC_19_1C)
    // Overlapping static entry reached from 0xC17AD9.
    case 0xC17ADB: {
        Instruction step(cpu, 0x5F, 0xA97680u, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:113 BRA @UNKNOWN49
    case 0xC17ADC: {
        Instruction step(cpu, 0x80, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    case 0xC17ADE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x006080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC17ADB.
    case 0xC17ADF: {
        Instruction step(cpu, 0x80, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC17ADE.
    case 0xC17AE0: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:116 BRA @UNKNOWN49
    case 0xC17AE1: {
        Instruction step(cpu, 0x80, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:118 JSR UNKNOWN_C1AD26
    case 0xC17AE3: {
        Instruction step(cpu, 0x20, 0x00AD26u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AE6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AE8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AEA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17AEC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:120 JSR SET_WORKING_MEMORY
    case 0xC17AEE: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:121 BRA @UNKNOWN48
    case 0xC17AF1: {
        Instruction step(cpu, 0x80, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:123 JSR UNKNOWN_C1AD02
    case 0xC17AF3: {
        Instruction step(cpu, 0x20, 0x00AD02u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17AF6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17AF8: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17AFA: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17AFC: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC17AFE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B00: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B02: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B04: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B06: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:127 JSR SET_WORKING_MEMORY
    case 0xC17B08: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:128 BRA @UNKNOWN48
    case 0xC17B0B: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC17B0D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B0F: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B12: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B14: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B16: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17B18: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC17B1A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B1C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B1E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B20: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B22: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:134 JSR SET_WORKING_MEMORY
    case 0xC17B24: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:135 BRA @UNKNOWN48
    case 0xC17B27: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:137 LDA #.LOWORD(CC_19_21)
    case 0xC17B29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000043u : 0x006143u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:137 LDA #.LOWORD(CC_19_21)
    // Overlapping static entry reached from 0xC17B29.
    case 0xC17B2B: {
        Instruction step(cpu, 0x61, 0x000080u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:138 BRA @UNKNOWN49
    case 0xC17B2C: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:138 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B2B.
    case 0xC17B2D: {
        Instruction step(cpu, 0x26, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    case 0xC17B2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A0u : 0x0068A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC17B2D.
    case 0xC17B2F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000068u : 0x008068u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC17B2E.
    case 0xC17B30: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:141 BRA @UNKNOWN49
    case 0xC17B31: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:141 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B2F.
    case 0xC17B32: {
        Instruction step(cpu, 0x21, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    case 0xC17B33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000047u : 0x006947u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC17B32.
    case 0xC17B34: {
        Instruction step(cpu, 0x47, 0x000069u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC17B33.
    case 0xC17B35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x001C80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:144 BRA @UNKNOWN49
    case 0xC17B36: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:144 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B35.
    case 0xC17B37: {
        Instruction step(cpu, 0x1C, 0x007BA9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:146 LDA #.LOWORD(CC_19_24)
    case 0xC17B38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x006A7Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:146 LDA #.LOWORD(CC_19_24)
    // Overlapping static entry reached from 0xC17B38.
    case 0xC17B3A: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:147 BRA @UNKNOWN49
    case 0xC17B3B: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:149 LDA #.LOWORD(CC_19_25)
    case 0xC17B3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x006F9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:149 LDA #.LOWORD(CC_19_25)
    // Overlapping static entry reached from 0xC17B3D.
    case 0xC17B3F: {
        Instruction step(cpu, 0x6F, 0xA91280u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:150 BRA @UNKNOWN49
    case 0xC17B40: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:150 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17ADF.
    case 0xC17B41: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    case 0xC17B42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000037u : 0x007037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    // Overlapping static entry reached from 0xC17B3F.
    case 0xC17B43: {
        Instruction step(cpu, 0x37, 0x000070u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    // Overlapping static entry reached from 0xC17B42.
    case 0xC17B44: {
        Instruction step(cpu, 0x70, 0x000080u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:153 BRA @UNKNOWN49
    case 0xC17B45: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:153 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B44.
    case 0xC17B46: {
        Instruction step(cpu, 0x0D, 0x006AA9u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:155 LDA #.LOWORD(CC_19_27)
    case 0xC17B47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Au : 0x00776Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:155 LDA #.LOWORD(CC_19_27)
    // Overlapping static entry reached from 0xC17B47.
    case 0xC17B49: {
        Instruction step(cpu, 0x77, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:156 BRA @UNKNOWN49
    case 0xC17B4A: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:156 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17B49.
    case 0xC17B4B: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:158 LDA #.LOWORD(CC_19_28)
    case 0xC17B4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x004819u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:158 LDA #.LOWORD(CC_19_28)
    // Overlapping static entry reached from 0xC17B4C.
    case 0xC17B4E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:159 BRA @UNKNOWN49
    case 0xC17B4F: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:161 LDA #0
    case 0xC17B51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:161 LDA #0
    // Overlapping static entry reached from 0xC17B51.
    case 0xC17B53: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_19.asm:163 END_C_FUNCTION
    case 0xC17B54: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_19.asm:163 END_C_FUNCTION
    case 0xC17B55: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
