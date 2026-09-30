// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/tree_1F.asm
bool resume_text_ccs_tree_1f(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1F.asm:3 BEGIN_C_FUNCTION
    case 0xC1841D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC1841F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18420: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18421: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18422: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC18422.
    case 0xC18424: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18425: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC18426: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:11 TXA
    case 0xC18427: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:12 BEQL @UNKNOWN74
    case 0xC18428: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:12 BEQL @UNKNOWN74
    case 0xC1842A: {
        Instruction step(cpu, 0x4C, 0x008678u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:13 CMP #$01
    case 0xC1842D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:13 CMP #$01
    // Overlapping static entry reached from 0xC1842D.
    case 0xC1842F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:14 BEQL @UNKNOWN75
    case 0xC18430: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:14 BEQL @UNKNOWN75
    case 0xC18432: {
        Instruction step(cpu, 0x4C, 0x00867Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:15 CMP #$02
    case 0xC18435: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:15 CMP #$02
    // Overlapping static entry reached from 0xC18435.
    case 0xC18437: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:16 BEQL @UNKNOWN76
    case 0xC18438: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:16 BEQL @UNKNOWN76
    case 0xC1843A: {
        Instruction step(cpu, 0x4C, 0x008684u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:17 CMP #$03
    case 0xC1843D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:17 CMP #$03
    // Overlapping static entry reached from 0xC1843D.
    case 0xC1843F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:18 BEQL @UNKNOWN77
    case 0xC18440: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:18 BEQL @UNKNOWN77
    case 0xC18442: {
        Instruction step(cpu, 0x4C, 0x00868Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:19 CMP #$04
    case 0xC18445: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:19 CMP #$04
    // Overlapping static entry reached from 0xC18445.
    case 0xC18447: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:20 BEQL @UNKNOWN78
    case 0xC18448: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:20 BEQL @UNKNOWN78
    case 0xC1844A: {
        Instruction step(cpu, 0x4C, 0x008698u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:21 CMP #$05
    case 0xC1844D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:21 CMP #$05
    // Overlapping static entry reached from 0xC1844D.
    case 0xC1844F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:22 BEQL @UNKNOWN79
    case 0xC18450: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:22 BEQL @UNKNOWN79
    case 0xC18452: {
        Instruction step(cpu, 0x4C, 0x00869Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:23 CMP #$06
    case 0xC18455: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:23 CMP #$06
    // Overlapping static entry reached from 0xC18455.
    case 0xC18457: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:24 BEQL @UNKNOWN80
    case 0xC18458: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:24 BEQL @UNKNOWN80
    case 0xC1845A: {
        Instruction step(cpu, 0x4C, 0x0086A8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:25 CMP #$07
    case 0xC1845D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:25 CMP #$07
    // Overlapping static entry reached from 0xC1845D.
    case 0xC1845F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:26 BEQL @UNKNOWN81
    case 0xC18460: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:26 BEQL @UNKNOWN81
    case 0xC18462: {
        Instruction step(cpu, 0x4C, 0x0086B2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:27 CMP #$11
    case 0xC18465: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:27 CMP #$11
    // Overlapping static entry reached from 0xC18465.
    case 0xC18467: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:28 BEQL @UNKNOWN82
    case 0xC18468: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:28 BEQL @UNKNOWN82
    case 0xC1846A: {
        Instruction step(cpu, 0x4C, 0x0086B8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:29 CMP #$12
    case 0xC1846D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:29 CMP #$12
    // Overlapping static entry reached from 0xC1846D.
    case 0xC1846F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:30 BEQL @UNKNOWN83
    case 0xC18470: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:30 BEQL @UNKNOWN83
    case 0xC18472: {
        Instruction step(cpu, 0x4C, 0x0086BEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:31 CMP #$13
    case 0xC18475: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:31 CMP #$13
    // Overlapping static entry reached from 0xC18475.
    case 0xC18477: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:32 BEQL @UNKNOWN84
    case 0xC18478: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:32 BEQL @UNKNOWN84
    case 0xC1847A: {
        Instruction step(cpu, 0x4C, 0x0086C4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:33 CMP #$14
    case 0xC1847D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:33 CMP #$14
    // Overlapping static entry reached from 0xC1847D.
    case 0xC1847F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:34 BEQL @UNKNOWN85
    case 0xC18480: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:34 BEQL @UNKNOWN85
    case 0xC18482: {
        Instruction step(cpu, 0x4C, 0x0086CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:35 CMP #$15
    case 0xC18485: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:35 CMP #$15
    // Overlapping static entry reached from 0xC18485.
    case 0xC18487: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:36 BEQL @UNKNOWN86
    case 0xC18488: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:36 BEQL @UNKNOWN86
    case 0xC1848A: {
        Instruction step(cpu, 0x4C, 0x0086D0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:37 CMP #$16
    case 0xC1848D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:37 CMP #$16
    // Overlapping static entry reached from 0xC1848D.
    case 0xC1848F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:38 BEQL @UNKNOWN87
    case 0xC18490: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:38 BEQL @UNKNOWN87
    case 0xC18492: {
        Instruction step(cpu, 0x4C, 0x0086D6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:39 CMP #$17
    case 0xC18495: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:39 CMP #$17
    // Overlapping static entry reached from 0xC18495.
    case 0xC18497: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:40 BEQL @UNKNOWN88
    case 0xC18498: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:40 BEQL @UNKNOWN88
    case 0xC1849A: {
        Instruction step(cpu, 0x4C, 0x0086DCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:41 CMP #$18
    case 0xC1849D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:41 CMP #$18
    // Overlapping static entry reached from 0xC1849D.
    case 0xC1849F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:42 BEQL @UNKNOWN89
    case 0xC184A0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:42 BEQL @UNKNOWN89
    case 0xC184A2: {
        Instruction step(cpu, 0x4C, 0x0086E2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:43 CMP #$19
    case 0xC184A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:43 CMP #$19
    // Overlapping static entry reached from 0xC184A5.
    case 0xC184A7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:44 BEQL @UNKNOWN90
    case 0xC184A8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:44 BEQL @UNKNOWN90
    case 0xC184AA: {
        Instruction step(cpu, 0x4C, 0x0086E8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:45 CMP #$1A
    case 0xC184AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:45 CMP #$1A
    // Overlapping static entry reached from 0xC184AD.
    case 0xC184AF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:46 BEQL @UNKNOWN91
    case 0xC184B0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:46 BEQL @UNKNOWN91
    case 0xC184B2: {
        Instruction step(cpu, 0x4C, 0x0086EEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:47 CMP #$1B
    case 0xC184B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:47 CMP #$1B
    // Overlapping static entry reached from 0xC184B5.
    case 0xC184B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:48 BEQL @UNKNOWN92
    case 0xC184B8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:48 BEQL @UNKNOWN92
    case 0xC184BA: {
        Instruction step(cpu, 0x4C, 0x0086F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:49 CMP #$1C
    case 0xC184BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:49 CMP #$1C
    // Overlapping static entry reached from 0xC184BD.
    case 0xC184BF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:50 BEQL @UNKNOWN93
    case 0xC184C0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:50 BEQL @UNKNOWN93
    case 0xC184C2: {
        Instruction step(cpu, 0x4C, 0x0086FAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:51 CMP #$1D
    case 0xC184C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:51 CMP #$1D
    // Overlapping static entry reached from 0xC184C5.
    case 0xC184C7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:52 BEQL @UNKNOWN94
    case 0xC184C8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:52 BEQL @UNKNOWN94
    case 0xC184CA: {
        Instruction step(cpu, 0x4C, 0x008700u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:53 CMP #$1E
    case 0xC184CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:53 CMP #$1E
    // Overlapping static entry reached from 0xC184CD.
    case 0xC184CF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:54 BEQL @UNKNOWN95
    case 0xC184D0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:54 BEQL @UNKNOWN95
    case 0xC184D2: {
        Instruction step(cpu, 0x4C, 0x008706u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:55 CMP #$1F
    case 0xC184D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:55 CMP #$1F
    // Overlapping static entry reached from 0xC184D5.
    case 0xC184D7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:56 BEQL @UNKNOWN96
    case 0xC184D8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:56 BEQL @UNKNOWN96
    case 0xC184DA: {
        Instruction step(cpu, 0x4C, 0x00870Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:57 CMP #$20
    case 0xC184DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:57 CMP #$20
    // Overlapping static entry reached from 0xC184DD.
    case 0xC184DF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:58 BEQL @UNKNOWN97
    case 0xC184E0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:58 BEQL @UNKNOWN97
    case 0xC184E2: {
        Instruction step(cpu, 0x4C, 0x008712u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:59 CMP #$21
    case 0xC184E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:59 CMP #$21
    // Overlapping static entry reached from 0xC184E5.
    case 0xC184E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:60 BEQL @UNKNOWN98
    case 0xC184E8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:60 BEQL @UNKNOWN98
    case 0xC184EA: {
        Instruction step(cpu, 0x4C, 0x008718u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:61 CMP #$23
    case 0xC184ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:61 CMP #$23
    // Overlapping static entry reached from 0xC184ED.
    case 0xC184EF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:62 BEQL @UNKNOWN99
    case 0xC184F0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:62 BEQL @UNKNOWN99
    case 0xC184F2: {
        Instruction step(cpu, 0x4C, 0x00871Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:63 CMP #$30
    case 0xC184F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:63 CMP #$30
    // Overlapping static entry reached from 0xC184F5.
    case 0xC184F7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:64 BEQL @UNKNOWN100
    case 0xC184F8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:64 BEQL @UNKNOWN100
    case 0xC184FA: {
        Instruction step(cpu, 0x4C, 0x008724u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:65 CMP #$31
    case 0xC184FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:65 CMP #$31
    // Overlapping static entry reached from 0xC184FD.
    case 0xC184FF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:66 BEQL @UNKNOWN100
    case 0xC18500: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:66 BEQL @UNKNOWN100
    case 0xC18502: {
        Instruction step(cpu, 0x4C, 0x008724u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:67 CMP #$40
    case 0xC18505: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:67 CMP #$40
    // Overlapping static entry reached from 0xC18505.
    case 0xC18507: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:68 BEQL @UNKNOWN101
    case 0xC18508: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:68 BEQL @UNKNOWN101
    case 0xC1850A: {
        Instruction step(cpu, 0x4C, 0x00872Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:69 CMP #$41
    case 0xC1850D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000041u : 0x000041u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:69 CMP #$41
    // Overlapping static entry reached from 0xC1850D.
    case 0xC1850F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:70 BEQL @UNKNOWN102
    case 0xC18510: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:70 BEQL @UNKNOWN102
    case 0xC18512: {
        Instruction step(cpu, 0x4C, 0x008730u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:71 CMP #$50
    case 0xC18515: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:71 CMP #$50
    // Overlapping static entry reached from 0xC18515.
    case 0xC18517: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:72 BEQL @UNKNOWN103
    case 0xC18518: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:72 BEQL @UNKNOWN103
    case 0xC1851A: {
        Instruction step(cpu, 0x4C, 0x008736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:73 CMP #$51
    case 0xC1851D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000051u : 0x000051u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:73 CMP #$51
    // Overlapping static entry reached from 0xC1851D.
    case 0xC1851F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:74 BEQL @UNKNOWN104
    case 0xC18520: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:74 BEQL @UNKNOWN104
    case 0xC18522: {
        Instruction step(cpu, 0x4C, 0x00873Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:75 CMP #$52
    case 0xC18525: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:75 CMP #$52
    // Overlapping static entry reached from 0xC18525.
    case 0xC18527: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:76 BEQL @UNKNOWN105
    case 0xC18528: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:76 BEQL @UNKNOWN105
    case 0xC1852A: {
        Instruction step(cpu, 0x4C, 0x008742u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:77 CMP #$60
    case 0xC1852D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:77 CMP #$60
    // Overlapping static entry reached from 0xC1852D.
    case 0xC1852F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:78 BEQL @UNKNOWN106
    case 0xC18530: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:78 BEQL @UNKNOWN106
    case 0xC18532: {
        Instruction step(cpu, 0x4C, 0x008748u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:79 CMP #$61
    case 0xC18535: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000061u : 0x000061u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:79 CMP #$61
    // Overlapping static entry reached from 0xC18535.
    case 0xC18537: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:80 BEQL @UNKNOWN107
    case 0xC18538: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:80 BEQL @UNKNOWN107
    case 0xC1853A: {
        Instruction step(cpu, 0x4C, 0x00874Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:81 CMP #$62
    case 0xC1853D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000062u : 0x000062u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:81 CMP #$62
    // Overlapping static entry reached from 0xC1853D.
    case 0xC1853F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:82 BEQL @UNKNOWN108
    case 0xC18540: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:82 BEQL @UNKNOWN108
    case 0xC18542: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:83 CMP #$63
    case 0xC18545: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000063u : 0x000063u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:83 CMP #$63
    // Overlapping static entry reached from 0xC18545.
    case 0xC18547: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:84 BEQL @UNKNOWN109
    case 0xC18548: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:84 BEQL @UNKNOWN109
    case 0xC1854A: {
        Instruction step(cpu, 0x4C, 0x00875Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:85 CMP #$64
    case 0xC1854D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:85 CMP #$64
    // Overlapping static entry reached from 0xC1854D.
    case 0xC1854F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:86 BEQL @UNKNOWN110
    case 0xC18550: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:86 BEQL @UNKNOWN110
    case 0xC18552: {
        Instruction step(cpu, 0x4C, 0x008760u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:87 CMP #$65
    case 0xC18555: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000065u : 0x000065u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:87 CMP #$65
    // Overlapping static entry reached from 0xC18555.
    case 0xC18557: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:88 BEQL @UNKNOWN111
    case 0xC18558: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:88 BEQL @UNKNOWN111
    case 0xC1855A: {
        Instruction step(cpu, 0x4C, 0x008767u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:89 CMP #$66
    case 0xC1855D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000066u : 0x000066u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:89 CMP #$66
    // Overlapping static entry reached from 0xC1855D.
    case 0xC1855F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:90 BEQL @UNKNOWN112
    case 0xC18560: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:90 BEQL @UNKNOWN112
    case 0xC18562: {
        Instruction step(cpu, 0x4C, 0x00876Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:91 CMP #$67
    case 0xC18565: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000067u : 0x000067u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:91 CMP #$67
    // Overlapping static entry reached from 0xC18565.
    case 0xC18567: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:92 BEQL @UNKNOWN113
    case 0xC18568: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:92 BEQL @UNKNOWN113
    case 0xC1856A: {
        Instruction step(cpu, 0x4C, 0x008774u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:93 CMP #$68
    case 0xC1856D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000068u : 0x000068u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:93 CMP #$68
    // Overlapping static entry reached from 0xC1856D.
    case 0xC1856F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:94 BEQL @UNKNOWN114
    case 0xC18570: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:94 BEQL @UNKNOWN114
    case 0xC18572: {
        Instruction step(cpu, 0x4C, 0x00877Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:95 CMP #$69
    case 0xC18575: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000069u : 0x000069u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:95 CMP #$69
    // Overlapping static entry reached from 0xC18575.
    case 0xC18577: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:96 BEQL @UNKNOWN115
    case 0xC18578: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:96 BEQL @UNKNOWN115
    case 0xC1857A: {
        Instruction step(cpu, 0x4C, 0x008789u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:97 CMP #$71
    case 0xC1857D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000071u : 0x000071u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:97 CMP #$71
    // Overlapping static entry reached from 0xC1857D.
    case 0xC1857F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:98 BEQL @UNKNOWN118
    case 0xC18580: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:98 BEQL @UNKNOWN118
    case 0xC18582: {
        Instruction step(cpu, 0x4C, 0x0087E4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:99 CMP #$81
    case 0xC18585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000081u : 0x000081u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:99 CMP #$81
    // Overlapping static entry reached from 0xC18585.
    case 0xC18587: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:100 BEQL @UNKNOWN119
    case 0xC18588: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:100 BEQL @UNKNOWN119
    case 0xC1858A: {
        Instruction step(cpu, 0x4C, 0x0087EAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:101 CMP #$83
    case 0xC1858D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000083u : 0x000083u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:101 CMP #$83
    // Overlapping static entry reached from 0xC1858D.
    case 0xC1858F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:102 BEQL @UNKNOWN120
    case 0xC18590: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:102 BEQL @UNKNOWN120
    case 0xC18592: {
        Instruction step(cpu, 0x4C, 0x0087F0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:103 CMP #$90
    case 0xC18595: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000090u : 0x000090u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:103 CMP #$90
    // Overlapping static entry reached from 0xC18595.
    case 0xC18597: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:104 BEQL @UNKNOWN121
    case 0xC18598: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:104 BEQL @UNKNOWN121
    case 0xC1859A: {
        Instruction step(cpu, 0x4C, 0x0087F6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:105 CMP #$A0
    case 0xC1859D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:105 CMP #$A0
    // Overlapping static entry reached from 0xC1859D.
    case 0xC1859F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:106 BEQL @UNKNOWN122
    case 0xC185A0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:106 BEQL @UNKNOWN122
    case 0xC185A2: {
        Instruction step(cpu, 0x4C, 0x00880Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:107 CMP #$A1
    case 0xC185A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A1u : 0x0000A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:107 CMP #$A1
    // Overlapping static entry reached from 0xC185A5.
    case 0xC185A7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:108 BEQL @UNKNOWN123
    case 0xC185A8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:108 BEQL @UNKNOWN123
    case 0xC185AA: {
        Instruction step(cpu, 0x4C, 0x008815u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:109 CMP #$A2
    case 0xC185AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:109 CMP #$A2
    // Overlapping static entry reached from 0xC185AD.
    case 0xC185AF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:110 BEQL @UNKNOWN124
    case 0xC185B0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:110 BEQL @UNKNOWN124
    case 0xC185B2: {
        Instruction step(cpu, 0x4C, 0x00881Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:111 CMP #$B0
    case 0xC185B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:111 CMP #$B0
    // Overlapping static entry reached from 0xC185B5.
    case 0xC185B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:112 BEQL @UNKNOWN126
    case 0xC185B8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:112 BEQL @UNKNOWN126
    case 0xC185BA: {
        Instruction step(cpu, 0x4C, 0x00883Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:113 CMP #$C0
    case 0xC185BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:113 CMP #$C0
    // Overlapping static entry reached from 0xC185BD.
    case 0xC185BF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:114 BEQL @UNKNOWN127
    case 0xC185C0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:114 BEQL @UNKNOWN127
    case 0xC185C2: {
        Instruction step(cpu, 0x4C, 0x008843u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:115 CMP #$D0
    case 0xC185C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:115 CMP #$D0
    // Overlapping static entry reached from 0xC185C5.
    case 0xC185C7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:116 BEQL @UNKNOWN128
    case 0xC185C8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:116 BEQL @UNKNOWN128
    case 0xC185CA: {
        Instruction step(cpu, 0x4C, 0x008849u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:117 CMP #$D1
    case 0xC185CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D1u : 0x0000D1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:117 CMP #$D1
    // Overlapping static entry reached from 0xC185CD.
    case 0xC185CF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:118 BEQL @UNKNOWN129
    case 0xC185D0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:118 BEQL @UNKNOWN129
    case 0xC185D2: {
        Instruction step(cpu, 0x4C, 0x00884Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:119 CMP #$D2
    case 0xC185D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D2u : 0x0000D2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:119 CMP #$D2
    // Overlapping static entry reached from 0xC185D5.
    case 0xC185D7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:120 BEQL @UNKNOWN130
    case 0xC185D8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:120 BEQL @UNKNOWN130
    case 0xC185DA: {
        Instruction step(cpu, 0x4C, 0x008864u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:121 CMP #$D3
    case 0xC185DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D3u : 0x0000D3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:121 CMP #$D3
    // Overlapping static entry reached from 0xC185DD.
    case 0xC185DF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:122 BEQL @UNKNOWN131
    case 0xC185E0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:122 BEQL @UNKNOWN131
    case 0xC185E2: {
        Instruction step(cpu, 0x4C, 0x008869u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:123 CMP #$E1
    case 0xC185E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:123 CMP #$E1
    // Overlapping static entry reached from 0xC185E5.
    case 0xC185E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:124 BEQL @UNKNOWN132
    case 0xC185E8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:124 BEQL @UNKNOWN132
    case 0xC185EA: {
        Instruction step(cpu, 0x4C, 0x00886Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:125 CMP #$E4
    case 0xC185ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E4u : 0x0000E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:125 CMP #$E4
    // Overlapping static entry reached from 0xC185ED.
    case 0xC185EF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:126 BEQL @UNKNOWN133
    case 0xC185F0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:126 BEQL @UNKNOWN133
    case 0xC185F2: {
        Instruction step(cpu, 0x4C, 0x008873u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:127 CMP #$E5
    case 0xC185F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:127 CMP #$E5
    // Overlapping static entry reached from 0xC185F5.
    case 0xC185F7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:128 BEQL @UNKNOWN134
    case 0xC185F8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:128 BEQL @UNKNOWN134
    case 0xC185FA: {
        Instruction step(cpu, 0x4C, 0x008878u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:129 CMP #$E6
    case 0xC185FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E6u : 0x0000E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:129 CMP #$E6
    // Overlapping static entry reached from 0xC185FD.
    case 0xC185FF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:130 BEQL @UNKNOWN135
    case 0xC18600: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:130 BEQL @UNKNOWN135
    case 0xC18602: {
        Instruction step(cpu, 0x4C, 0x00887Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:131 CMP #$E7
    case 0xC18605: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E7u : 0x0000E7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:131 CMP #$E7
    // Overlapping static entry reached from 0xC18605.
    case 0xC18607: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:132 BEQL @UNKNOWN136
    case 0xC18608: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:132 BEQL @UNKNOWN136
    case 0xC1860A: {
        Instruction step(cpu, 0x4C, 0x008882u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:133 CMP #$E8
    case 0xC1860D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E8u : 0x0000E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:133 CMP #$E8
    // Overlapping static entry reached from 0xC1860D.
    case 0xC1860F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:134 BEQL @UNKNOWN137
    case 0xC18610: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:134 BEQL @UNKNOWN137
    case 0xC18612: {
        Instruction step(cpu, 0x4C, 0x008887u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:135 CMP #$E9
    case 0xC18615: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E9u : 0x0000E9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:135 CMP #$E9
    // Overlapping static entry reached from 0xC18615.
    case 0xC18617: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:136 BEQL @UNKNOWN138
    case 0xC18618: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:136 BEQL @UNKNOWN138
    case 0xC1861A: {
        Instruction step(cpu, 0x4C, 0x00888Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:137 CMP #$EA
    case 0xC1861D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EAu : 0x0000EAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:137 CMP #$EA
    // Overlapping static entry reached from 0xC1861D.
    case 0xC1861F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:138 BEQL @UNKNOWN139
    case 0xC18620: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:138 BEQL @UNKNOWN139
    case 0xC18622: {
        Instruction step(cpu, 0x4C, 0x008891u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:139 CMP #$EB
    case 0xC18625: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EBu : 0x0000EBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:139 CMP #$EB
    // Overlapping static entry reached from 0xC18625.
    case 0xC18627: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:140 BEQL @UNKNOWN140
    case 0xC18628: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:140 BEQL @UNKNOWN140
    case 0xC1862A: {
        Instruction step(cpu, 0x4C, 0x008896u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:141 CMP #$EC
    case 0xC1862D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000ECu : 0x0000ECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:141 CMP #$EC
    // Overlapping static entry reached from 0xC1862D.
    case 0xC1862F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:142 BEQL @UNKNOWN141
    case 0xC18630: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:142 BEQL @UNKNOWN141
    case 0xC18632: {
        Instruction step(cpu, 0x4C, 0x00889Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:143 CMP #$ED
    case 0xC18635: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EDu : 0x0000EDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:143 CMP #$ED
    // Overlapping static entry reached from 0xC18635.
    case 0xC18637: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:144 BEQL @UNKNOWN142
    case 0xC18638: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:144 BEQL @UNKNOWN142
    case 0xC1863A: {
        Instruction step(cpu, 0x4C, 0x0088A0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:145 CMP #$EE
    case 0xC1863D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EEu : 0x0000EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:145 CMP #$EE
    // Overlapping static entry reached from 0xC1863D.
    case 0xC1863F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:146 BEQL @UNKNOWN143
    case 0xC18640: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:146 BEQL @UNKNOWN143
    case 0xC18642: {
        Instruction step(cpu, 0x4C, 0x0088A6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:147 CMP #$EF
    case 0xC18645: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:147 CMP #$EF
    // Overlapping static entry reached from 0xC18645.
    case 0xC18647: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:148 BEQL @UNKNOWN144
    case 0xC18648: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:148 BEQL @UNKNOWN144
    case 0xC1864A: {
        Instruction step(cpu, 0x4C, 0x0088ABu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:149 CMP #$F0
    case 0xC1864D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F0u : 0x0000F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:149 CMP #$F0
    // Overlapping static entry reached from 0xC1864D.
    case 0xC1864F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:150 BEQL @UNKNOWN145
    case 0xC18650: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:150 BEQL @UNKNOWN145
    case 0xC18652: {
        Instruction step(cpu, 0x4C, 0x0088B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:151 CMP #$F1
    case 0xC18655: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F1u : 0x0000F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:151 CMP #$F1
    // Overlapping static entry reached from 0xC18655.
    case 0xC18657: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:152 BEQL @UNKNOWN146
    case 0xC18658: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:152 BEQL @UNKNOWN146
    case 0xC1865A: {
        Instruction step(cpu, 0x4C, 0x0088B6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:153 CMP #$F2
    case 0xC1865D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F2u : 0x0000F2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:153 CMP #$F2
    // Overlapping static entry reached from 0xC1865D.
    case 0xC1865F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:154 BEQL @UNKNOWN147
    case 0xC18660: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:154 BEQL @UNKNOWN147
    case 0xC18662: {
        Instruction step(cpu, 0x4C, 0x0088BBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:155 CMP #$F3
    case 0xC18665: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F3u : 0x0000F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:155 CMP #$F3
    // Overlapping static entry reached from 0xC18665.
    case 0xC18667: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:156 BEQL @UNKNOWN148
    case 0xC18668: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:156 BEQL @UNKNOWN148
    case 0xC1866A: {
        Instruction step(cpu, 0x4C, 0x0088C0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:157 CMP #$F4
    case 0xC1866D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F4u : 0x0000F4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:157 CMP #$F4
    // Overlapping static entry reached from 0xC1866D.
    case 0xC1866F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:158 BEQL @UNKNOWN149
    case 0xC18670: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:158 BEQL @UNKNOWN149
    case 0xC18672: {
        Instruction step(cpu, 0x4C, 0x0088C5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:159 JMP @UNKNOWN150
    case 0xC18675: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:161 LDA #.LOWORD(CC_1F_00)
    case 0xC18678: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000051u : 0x004B51u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:161 LDA #.LOWORD(CC_1F_00)
    // Overlapping static entry reached from 0xC18678.
    case 0xC1867A: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:162 JMP @UNKNOWN151
    case 0xC1867B: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:164 LDA #.LOWORD(CC_1F_01)
    case 0xC1867E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A0u : 0x004BA0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:164 LDA #.LOWORD(CC_1F_01)
    // Overlapping static entry reached from 0xC1867E.
    case 0xC18680: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:165 JMP @UNKNOWN151
    case 0xC18681: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:167 LDA #.LOWORD(CC_1F_02)
    case 0xC18684: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ABu : 0x004BABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:167 LDA #.LOWORD(CC_1F_02)
    // Overlapping static entry reached from 0xC18684.
    case 0xC18686: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:168 JMP @UNKNOWN151
    case 0xC18687: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:170 JSL UNKNOWN_C069F7
    case 0xC1868A: {
        Instruction step(cpu, 0x22, 0xC06C25u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:171 LDX #0
    case 0xC1868E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:171 LDX #0
    // Overlapping static entry reached from 0xC1868E.
    case 0xC18690: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:172 JSL UNKNOWN_C216AD
    case 0xC18691: {
        Instruction step(cpu, 0x22, 0xC21555u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:173 JMP @UNKNOWN150
    case 0xC18695: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:175 LDA #.LOWORD(CC_1F_04)
    case 0xC18698: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D4u : 0x0074D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:175 LDA #.LOWORD(CC_1F_04)
    // Overlapping static entry reached from 0xC18698.
    case 0xC1869A: {
        Instruction step(cpu, 0x74, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:176 JMP @UNKNOWN151
    case 0xC1869B: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:176 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1869A.
    case 0xC1869C: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:178 LDA #0
    case 0xC1869E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:178 LDA #0
    // Overlapping static entry reached from 0xC1869C.
    case 0xC1869F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:178 LDA #0
    // Overlapping static entry reached from 0xC1869E.
    case 0xC186A0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:179 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC186A1: {
        Instruction step(cpu, 0x22, 0xC4D0E4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:180 JMP @UNKNOWN150
    case 0xC186A5: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:182 LDA #1
    case 0xC186A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:182 LDA #1
    // Overlapping static entry reached from 0xC186A8.
    case 0xC186AA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:183 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC186AB: {
        Instruction step(cpu, 0x22, 0xC4D0E4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:184 JMP @UNKNOWN150
    case 0xC186AF: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:186 LDA #.LOWORD(CC_1F_07)
    case 0xC186B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x00769Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:186 LDA #.LOWORD(CC_1F_07)
    // Overlapping static entry reached from 0xC186B2.
    case 0xC186B4: {
        Instruction step(cpu, 0x76, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:187 JMP @UNKNOWN151
    case 0xC186B5: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:187 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186B4.
    case 0xC186B6: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    case 0xC186B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F0u : 0x0061F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    // Overlapping static entry reached from 0xC186B6.
    case 0xC186B9: {
        Instruction step(cpu, 0xF0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    // Overlapping static entry reached from 0xC186B8.
    case 0xC186BA: {
        Instruction step(cpu, 0x61, 0x00004Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:190 JMP @UNKNOWN151
    case 0xC186BB: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:190 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186BA.
    case 0xC186BC: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    case 0xC186BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x006210u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    // Overlapping static entry reached from 0xC186BC.
    case 0xC186BF: {
        Instruction step(cpu, 0x10, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    // Overlapping static entry reached from 0xC186BE.
    case 0xC186C0: {
        Instruction step(cpu, 0x62, 0x00CD4Cu, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:193 JMP @UNKNOWN151
    case 0xC186C1: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:193 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186C0.
    case 0xC186C3: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:195 LDA #.LOWORD(CC_1F_13)
    case 0xC186C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00667Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:195 LDA #.LOWORD(CC_1F_13)
    // Overlapping static entry reached from 0xC186C4.
    case 0xC186C6: {
        Instruction step(cpu, 0x66, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:196 JMP @UNKNOWN151
    case 0xC186C7: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:196 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186C6.
    case 0xC186C8: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    case 0xC186CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EDu : 0x0066EDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    // Overlapping static entry reached from 0xC186C8.
    case 0xC186CB: {
        Instruction step(cpu, 0xED, 0x004C66u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    // Overlapping static entry reached from 0xC186CA.
    case 0xC186CC: {
        Instruction step(cpu, 0x66, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:199 JMP @UNKNOWN151
    case 0xC186CD: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:199 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186CC.
    case 0xC186CE: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    case 0xC186D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0069C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC186CE.
    case 0xC186D1: {
        Instruction step(cpu, 0xC3, 0x000069u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC186D0.
    case 0xC186D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Cu : 0x00CD4Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    case 0xC186D3: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186D2.
    case 0xC186D4: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186D2.
    case 0xC186D5: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    case 0xC186D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00670Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC186D4.
    case 0xC186D7: {
        Instruction step(cpu, 0x0F, 0xCD4C67u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC186D6.
    case 0xC186D8: {
        Instruction step(cpu, 0x67, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    case 0xC186D9: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186D8.
    case 0xC186DA: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186D7.
    case 0xC186DB: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    case 0xC186DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000088u : 0x006788u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC186DA.
    case 0xC186DD: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC186DC.
    case 0xC186DE: {
        Instruction step(cpu, 0x67, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:208 JMP @UNKNOWN151
    case 0xC186DF: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:208 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186DE.
    case 0xC186E0: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    case 0xC186E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x006801u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC186E0.
    case 0xC186E3: {
        Instruction step(cpu, 0x01, 0x000068u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC186E2.
    case 0xC186E4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:211 JMP @UNKNOWN151
    case 0xC186E5: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:213 LDA #.LOWORD(CC_1F_19)
    case 0xC186E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000029u : 0x006829u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:213 LDA #.LOWORD(CC_1F_19)
    // Overlapping static entry reached from 0xC186E8.
    case 0xC186EA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:214 JMP @UNKNOWN151
    case 0xC186EB: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:216 LDA #.LOWORD(CC_1F_1A)
    case 0xC186EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000051u : 0x006851u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:216 LDA #.LOWORD(CC_1F_1A)
    // Overlapping static entry reached from 0xC186EE.
    case 0xC186F0: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:217 JMP @UNKNOWN151
    case 0xC186F1: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:219 LDA #.LOWORD(CC_1F_1B)
    case 0xC186F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x0068A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:219 LDA #.LOWORD(CC_1F_1B)
    // Overlapping static entry reached from 0xC186F4.
    case 0xC186F6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:220 JMP @UNKNOWN151
    case 0xC186F7: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:222 LDA #.LOWORD(CC_1F_1C)
    case 0xC186FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ECu : 0x0068ECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:222 LDA #.LOWORD(CC_1F_1C)
    // Overlapping static entry reached from 0xC186FA.
    case 0xC186FC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:223 JMP @UNKNOWN151
    case 0xC186FD: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:225 LDA #.LOWORD(CC_1F_1D)
    case 0xC18700: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Cu : 0x00695Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:225 LDA #.LOWORD(CC_1F_1D)
    // Overlapping static entry reached from 0xC18700.
    case 0xC18702: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Cu : 0x00CD4Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    case 0xC18703: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18702.
    case 0xC18704: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18702.
    case 0xC18705: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    case 0xC18706: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x006A55u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    // Overlapping static entry reached from 0xC18704.
    case 0xC18707: {
        Instruction step(cpu, 0x55, 0x00006Au, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    // Overlapping static entry reached from 0xC18706.
    case 0xC18708: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:229 JMP @UNKNOWN151
    case 0xC18709: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:231 LDA #.LOWORD(CC_1F_1F)
    case 0xC1870C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BAu : 0x006ABAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:231 LDA #.LOWORD(CC_1F_1F)
    // Overlapping static entry reached from 0xC1870C.
    case 0xC1870E: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:232 JMP @UNKNOWN151
    case 0xC1870F: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:234 LDA #.LOWORD(CC_1F_20)
    case 0xC18712: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FBu : 0x0051FBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:234 LDA #.LOWORD(CC_1F_20)
    // Overlapping static entry reached from 0xC18712.
    case 0xC18714: {
        Instruction step(cpu, 0x51, 0x00004Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:235 JMP @UNKNOWN151
    case 0xC18715: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:235 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18714.
    case 0xC18716: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    case 0xC18718: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Cu : 0x00528Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    // Overlapping static entry reached from 0xC18716.
    case 0xC18719: {
        Instruction step(cpu, 0x8C, 0x004C52u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    // Overlapping static entry reached from 0xC18718.
    case 0xC1871A: {
        Instruction step(cpu, 0x52, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    case 0xC1871B: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1871A.
    case 0xC1871C: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    case 0xC1871E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x007250u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC1871C.
    case 0xC1871F: {
        Instruction step(cpu, 0x50, 0x000072u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC1871E.
    case 0xC18720: {
        Instruction step(cpu, 0x72, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:241 JMP @UNKNOWN151
    case 0xC18721: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:241 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18720.
    case 0xC18722: {
        Instruction step(cpu, 0xCD, 0x002088u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:241 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC186BF.
    case 0xC18723: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:243 JSR CHANGE_CURRENT_WINDOW_FONT
    case 0xC18724: {
        Instruction step(cpu, 0x20, 0x001566u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:243 JSR CHANGE_CURRENT_WINDOW_FONT
    // Overlapping static entry reached from 0xC18722.
    case 0xC18725: {
        Instruction step(cpu, 0x66, 0x000015u, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:244 JMP @UNKNOWN150
    case 0xC18727: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:246 LDA #.LOWORD(CC_1F_40)
    case 0xC1872A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00753Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:246 LDA #.LOWORD(CC_1F_40)
    // Overlapping static entry reached from 0xC1872A.
    case 0xC1872C: {
        Instruction step(cpu, 0x75, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:247 JMP @UNKNOWN151
    case 0xC1872D: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:247 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1872C.
    case 0xC1872E: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    case 0xC18730: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Au : 0x00755Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    // Overlapping static entry reached from 0xC1872E.
    case 0xC18731: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    // Overlapping static entry reached from 0xC18730.
    case 0xC18732: {
        Instruction step(cpu, 0x75, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:250 JMP @UNKNOWN151
    case 0xC18733: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:250 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18732.
    case 0xC18734: {
        Instruction step(cpu, 0xCD, 0x002088u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:252 JSR LOCK_INPUT
    case 0xC18736: {
        Instruction step(cpu, 0x20, 0x0002CDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:252 JSR LOCK_INPUT
    // Overlapping static entry reached from 0xC18734.
    case 0xC18737: {
        Instruction step(cpu, 0xCD, 0x004C02u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:253 JMP @UNKNOWN150
    case 0xC18739: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:253 JMP @UNKNOWN150
    // Overlapping static entry reached from 0xC18737.
    case 0xC1873A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:253 JMP @UNKNOWN150
    // Overlapping static entry reached from 0xC1873A.
    case 0xC1873B: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:255 JSR UNLOCK_INPUT
    case 0xC1873C: {
        Instruction step(cpu, 0x20, 0x0002D6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:256 JMP @UNKNOWN150
    case 0xC1873F: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:258 LDA #.LOWORD(CC_1F_52)
    case 0xC18742: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C5u : 0x0048C5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:258 LDA #.LOWORD(CC_1F_52)
    // Overlapping static entry reached from 0xC18742.
    case 0xC18744: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:259 JMP @UNKNOWN151
    case 0xC18745: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    case 0xC18748: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Eu : 0x00574Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    // Overlapping static entry reached from 0xC18748.
    case 0xC1874A: {
        Instruction step(cpu, 0x57, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:262 JMP @UNKNOWN151
    case 0xC1874B: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:262 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1874A.
    case 0xC1874C: {
        Instruction step(cpu, 0xCD, 0x002088u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:264 JSR UNKNOWN_C102D0
    case 0xC1874E: {
        Instruction step(cpu, 0x20, 0x0004D4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:264 JSR UNKNOWN_C102D0
    // Overlapping static entry reached from 0xC1874C.
    case 0xC1874F: {
        Instruction step(cpu, 0xD4, 0x000004u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:265 JMP @UNKNOWN150
    case 0xC18751: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    case 0xC18754: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000076u : 0x006C76u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    // Overlapping static entry reached from 0xC18754.
    case 0xC18756: {
        Instruction step(cpu, 0x6C, 0x00CD4Cu, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:268 JMP @UNKNOWN151
    case 0xC18757: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    case 0xC1875A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000067u : 0x007067u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC1875A.
    case 0xC1875C: {
        Instruction step(cpu, 0x70, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:271 JMP @UNKNOWN151
    case 0xC1875D: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:271 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1875C.
    case 0xC1875E: {
        Instruction step(cpu, 0xCD, 0x002288u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    case 0xC18760: {
        Instruction step(cpu, 0x22, 0xC22F2Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    // Overlapping static entry reached from 0xC1875E.
    case 0xC18761: {
        Instruction step(cpu, 0x2D, 0x00C22Fu, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:274 JMP @UNKNOWN150
    case 0xC18764: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:276 JSL UNKNOWN_C2307B
    case 0xC18767: {
        Instruction step(cpu, 0x22, 0xC22FA0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:277 JMP @UNKNOWN150
    case 0xC1876B: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:279 LDA #.LOWORD(CC_1F_66)
    case 0xC1876E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Cu : 0x00739Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:279 LDA #.LOWORD(CC_1F_66)
    // Overlapping static entry reached from 0xC1876E.
    case 0xC18770: {
        Instruction step(cpu, 0x73, 0x00004Cu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:280 JMP @UNKNOWN151
    case 0xC18771: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:280 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18770.
    case 0xC18772: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    case 0xC18774: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B3u : 0x0074B3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    // Overlapping static entry reached from 0xC18772.
    case 0xC18775: {
        Instruction step(cpu, 0xB3, 0x000074u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    // Overlapping static entry reached from 0xC18774.
    case 0xC18776: {
        Instruction step(cpu, 0x74, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:283 JMP @UNKNOWN151
    case 0xC18777: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:283 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18776.
    case 0xC18778: {
        Instruction step(cpu, 0xCD, 0x00AD88u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:285 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1877A: {
        Instruction step(cpu, 0xAD, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:285 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC18778.
    case 0xC1877B: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:285 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC1877B.
    case 0xC1877C: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:286 STA GAME_STATE+game_state::exit_mouse_x_coord
    case 0xC1877D: {
        Instruction step(cpu, 0x8D, 0x009B63u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:287 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC18780: {
        Instruction step(cpu, 0xAD, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:288 STA GAME_STATE+game_state::exit_mouse_y_coord
    case 0xC18783: {
        Instruction step(cpu, 0x8D, 0x009B65u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:289 JMP @UNKNOWN150
    case 0xC18786: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:291 LDY #1
    case 0xC18789: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:291 LDY #1
    // Overlapping static entry reached from 0xC18789.
    case 0xC1878B: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:292 STY @LOCAL01
    case 0xC1878C: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:293 BRA @UNKNOWN117
    case 0xC1878E: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:295 LDX #0
    case 0xC18790: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:295 LDX #0
    // Overlapping static entry reached from 0xC18790.
    case 0xC18792: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:296 TYA
    case 0xC18793: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:297 JSL SET_EVENT_FLAG
    case 0xC18794: {
        Instruction step(cpu, 0x22, 0xC21506u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:298 LDY @LOCAL01
    case 0xC18798: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:299 INY
    case 0xC1879A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:300 STY @LOCAL01
    case 0xC1879B: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:302 CPY #10
    case 0xC1879D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:302 CPY #10
    // Overlapping static entry reached from 0xC1879D.
    case 0xC1879F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/tree_1F.asm:303 BLTEQ @UNKNOWN116
    case 0xC187A0: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/tree_1F.asm:303 BLTEQ @UNKNOWN116
    case 0xC187A2: {
        Instruction step(cpu, 0xF0, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:304 LDX #1
    case 0xC187A4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:304 LDX #1
    // Overlapping static entry reached from 0xC187A4.
    case 0xC187A6: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:305 TXA
    case 0xC187A7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:306 JSL FADE_OUT
    case 0xC187A8: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:306 JSL FADE_OUT
    // Overlapping static entry reached from 0xC1875C.
    case 0xC187AA: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:306 JSL FADE_OUT
    // Overlapping static entry reached from 0xC187AA.
    case 0xC187AB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0073A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    case 0xC187AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000073u : 0x000073u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    // Overlapping static entry reached from 0xC187AB.
    case 0xC187AD: {
        Instruction step(cpu, 0x73, 0x000000u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    // Overlapping static entry reached from 0xC187AC.
    case 0xC187AE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:308 JSL PLAY_SOUND
    case 0xC187AF: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:309 LDA GAME_STATE+game_state::exit_mouse_x_coord
    case 0xC187B3: {
        Instruction step(cpu, 0xAD, 0x009B63u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:310 STA @VIRTUAL04
    case 0xC187B6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:311 LDA GAME_STATE+game_state::exit_mouse_y_coord
    case 0xC187B8: {
        Instruction step(cpu, 0xAD, 0x009B65u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:312 STA @VIRTUAL02
    case 0xC187BB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:313 LDX @VIRTUAL02
    case 0xC187BD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:314 LDA @VIRTUAL04
    case 0xC187BF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:315 JSL LOAD_MAP_AT_POSITION
    case 0xC187C1: {
        Instruction step(cpu, 0x22, 0xC0140Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:316 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC187C5: {
        Instruction step(cpu, 0x9C, 0x002C8Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:317 LDY #4
    case 0xC187C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:317 LDY #4
    // Overlapping static entry reached from 0xC187C8.
    case 0xC187CA: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:318 LDX @VIRTUAL02
    case 0xC187CB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:319 LDA @VIRTUAL04
    case 0xC187CD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:320 JSL UNKNOWN_C03FA9
    case 0xC187CF: {
        Instruction step(cpu, 0x22, 0xC04230u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:321 LDX #1
    case 0xC187D3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:321 LDX #1
    // Overlapping static entry reached from 0xC187D3.
    case 0xC187D5: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:322 TXA
    case 0xC187D6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:323 JSL FADE_IN
    case 0xC187D7: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:324 LDA #.LOWORD(-1)
    case 0xC187DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:324 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC187DB.
    case 0xC187DD: {
        Instruction step(cpu, 0xFF, 0x614A8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:325 STA STAIRS_DIRECTION
    case 0xC187DE: {
        Instruction step(cpu, 0x8D, 0x00614Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:326 JMP @UNKNOWN150
    case 0xC187E1: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:328 LDA #.LOWORD(CC_1F_71)
    case 0xC187E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x005ED7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:328 LDA #.LOWORD(CC_1F_71)
    // Overlapping static entry reached from 0xC187E4.
    case 0xC187E6: {
        Instruction step(cpu, 0x5E, 0x00CD4Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:329 JMP @UNKNOWN151
    case 0xC187E7: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:329 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC187E6.
    case 0xC187E9: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:331 LDA #.LOWORD(CC_1F_81)
    case 0xC187EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Cu : 0x00535Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:331 LDA #.LOWORD(CC_1F_81)
    // Overlapping static entry reached from 0xC187EA.
    case 0xC187EC: {
        Instruction step(cpu, 0x53, 0x00004Cu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:332 JMP @UNKNOWN151
    case 0xC187ED: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:332 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC187EC.
    case 0xC187EE: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    case 0xC187F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x005AB8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC187EE.
    case 0xC187F1: {
        Instruction step(cpu, 0xB8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_overflow();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC187F0.
    case 0xC187F2: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:335 JMP @UNKNOWN151
    case 0xC187F3: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:337 JSR UNKNOWN_C19441
    case 0xC187F6: {
        Instruction step(cpu, 0x20, 0x0094EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:338 STORE_INT1632 @VIRTUAL06
    case 0xC187F9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:338 STORE_INT1632 @VIRTUAL06
    case 0xC187FB: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC187FD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC187FF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18801: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18803: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:340 JSR SET_WORKING_MEMORY
    case 0xC18805: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:341 JMP @UNKNOWN150
    case 0xC18808: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:343 LDA #1
    case 0xC1880B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:343 LDA #1
    // Overlapping static entry reached from 0xC1880B.
    case 0xC1880D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:344 JSL UNKNOWN_C226C5
    case 0xC1880E: {
        Instruction step(cpu, 0x22, 0xC22580u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:345 JMP @UNKNOWN150
    case 0xC18812: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:347 LDA #0
    case 0xC18815: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:347 LDA #0
    // Overlapping static entry reached from 0xC18815.
    case 0xC18817: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:348 JSL UNKNOWN_C226C5
    case 0xC18818: {
        Instruction step(cpu, 0x22, 0xC22580u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:349 JMP @UNKNOWN150
    case 0xC1881C: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:351 JSL UNKNOWN_C226E6
    case 0xC1881F: {
        Instruction step(cpu, 0x22, 0xC225A1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC18823: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC18823.
    case 0xC18825: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC18826: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC18828: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1882A: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1882C: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1882E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC188AD.
    case 0xC1882F: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18830: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1882F.
    case 0xC18831: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18832: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18834: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:354 JSR SET_WORKING_MEMORY
    case 0xC18836: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:355 JMP @UNKNOWN150
    case 0xC18839: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:357 JSL SAVE_CURRENT_GAME
    case 0xC1883C: {
        Instruction step(cpu, 0x22, 0xC22951u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:358 JMP @UNKNOWN150
    case 0xC18840: {
        Instruction step(cpu, 0x4C, 0x0088CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:360 LDA #.LOWORD(CC_1F_C0)
    case 0xC18843: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000087u : 0x006587u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:360 LDA #.LOWORD(CC_1F_C0)
    // Overlapping static entry reached from 0xC18843.
    case 0xC18845: {
        Instruction step(cpu, 0x65, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:361 JMP @UNKNOWN151
    case 0xC18846: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:361 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18845.
    case 0xC18847: {
        Instruction step(cpu, 0xCD, 0x00A988u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    case 0xC18849: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x006626u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    // Overlapping static entry reached from 0xC18847.
    case 0xC1884A: {
        Instruction step(cpu, 0x26, 0x000066u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    // Overlapping static entry reached from 0xC18849.
    case 0xC1884B: {
        Instruction step(cpu, 0x66, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:364 JMP @UNKNOWN151
    case 0xC1884C: {
        Instruction step(cpu, 0x4C, 0x0088CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:364 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1884B.
    case 0xC1884D: {
        Instruction step(cpu, 0xCD, 0x002288u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:366 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    case 0xC1884F: {
        Instruction step(cpu, 0x22, 0xC46738u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:366 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    // Overlapping static entry reached from 0xC1884D.
    case 0xC18850: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:366 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    // Overlapping static entry reached from 0xC18850.
    case 0xC18851: {
        Instruction step(cpu, 0x67, 0x0000C4u, 2u, AddressMode::DirectPageIndirectLong);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:367 STORE_INT1632 @VIRTUAL06
    case 0xC18853: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:367 STORE_INT1632 @VIRTUAL06
    case 0xC18855: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18857: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18859: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1885B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1885D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:369 JSR SET_WORKING_MEMORY
    case 0xC1885F: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:370 BRA @UNKNOWN150
    case 0xC18862: {
        Instruction step(cpu, 0x80, 0x000066u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:372 LDA #.LOWORD(CC_1F_D2)
    case 0xC18864: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x007584u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:372 LDA #.LOWORD(CC_1F_D2)
    // Overlapping static entry reached from 0xC18864.
    case 0xC18866: {
        Instruction step(cpu, 0x75, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:373 BRA @UNKNOWN151
    case 0xC18867: {
        Instruction step(cpu, 0x80, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:373 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18866.
    case 0xC18868: {
        Instruction step(cpu, 0x64, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    case 0xC18869: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0076C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    // Overlapping static entry reached from 0xC18868.
    case 0xC1886A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000076u : 0x008076u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    // Overlapping static entry reached from 0xC18869.
    case 0xC1886B: {
        Instruction step(cpu, 0x76, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:376 BRA @UNKNOWN151
    case 0xC1886C: {
        Instruction step(cpu, 0x80, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:376 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC1886B.
    case 0xC1886D: {
        Instruction step(cpu, 0x5F, 0x697DA9u, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:378 LDA #.LOWORD(CC_1F_E1)
    case 0xC1886E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00697Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:378 LDA #.LOWORD(CC_1F_E1)
    // Overlapping static entry reached from 0xC1886E.
    case 0xC18870: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x005A80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:379 BRA @UNKNOWN151
    case 0xC18871: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:379 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18870.
    case 0xC18872: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:381 LDA #.LOWORD(CC_1F_E4)
    case 0xC18873: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AAu : 0x006DAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:381 LDA #.LOWORD(CC_1F_E4)
    // Overlapping static entry reached from 0xC18873.
    case 0xC18875: {
        Instruction step(cpu, 0x6D, 0x005580u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:382 BRA @UNKNOWN151
    case 0xC18876: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:384 LDA #.LOWORD(CC_1F_E5)
    case 0xC18878: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x006E23u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:384 LDA #.LOWORD(CC_1F_E5)
    // Overlapping static entry reached from 0xC18878.
    case 0xC1887A: {
        Instruction step(cpu, 0x6E, 0x005080u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:385 BRA @UNKNOWN151
    case 0xC1887B: {
        Instruction step(cpu, 0x80, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:387 LDA #.LOWORD(CC_1F_E6)
    case 0xC1887D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Eu : 0x006E2Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:387 LDA #.LOWORD(CC_1F_E6)
    // Overlapping static entry reached from 0xC1887D.
    case 0xC1887F: {
        Instruction step(cpu, 0x6E, 0x004B80u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:388 BRA @UNKNOWN151
    case 0xC18880: {
        Instruction step(cpu, 0x80, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:390 LDA #.LOWORD(CC_1F_E7)
    case 0xC18882: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000071u : 0x006E71u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:390 LDA #.LOWORD(CC_1F_E7)
    // Overlapping static entry reached from 0xC18882.
    case 0xC18884: {
        Instruction step(cpu, 0x6E, 0x004680u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:391 BRA @UNKNOWN151
    case 0xC18885: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:393 LDA #.LOWORD(CC_1F_E8)
    case 0xC18887: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B4u : 0x006EB4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:393 LDA #.LOWORD(CC_1F_E8)
    // Overlapping static entry reached from 0xC18887.
    case 0xC18889: {
        Instruction step(cpu, 0x6E, 0x004180u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:394 BRA @UNKNOWN151
    case 0xC1888A: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:396 LDA #.LOWORD(CC_1F_E9)
    case 0xC1888C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BFu : 0x006EBFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:396 LDA #.LOWORD(CC_1F_E9)
    // Overlapping static entry reached from 0xC1888C.
    case 0xC1888E: {
        Instruction step(cpu, 0x6E, 0x003C80u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:397 BRA @UNKNOWN151
    case 0xC1888F: {
        Instruction step(cpu, 0x80, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:399 LDA #.LOWORD(CC_1F_EA)
    case 0xC18891: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x006F02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:399 LDA #.LOWORD(CC_1F_EA)
    // Overlapping static entry reached from 0xC18891.
    case 0xC18893: {
        Instruction step(cpu, 0x6F, 0xA93780u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:400 BRA @UNKNOWN151
    case 0xC18894: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    case 0xC18896: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000045u : 0x006F45u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC18893.
    case 0xC18897: {
        Instruction step(cpu, 0x45, 0x00006Fu, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC18896.
    case 0xC18898: {
        Instruction step(cpu, 0x6F, 0xA93280u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:403 BRA @UNKNOWN151
    case 0xC18899: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    case 0xC1889B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000093u : 0x006F93u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    // Overlapping static entry reached from 0xC18898.
    case 0xC1889C: {
        Instruction step(cpu, 0x93, 0x00006Fu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    // Overlapping static entry reached from 0xC1889B.
    case 0xC1889D: {
        Instruction step(cpu, 0x6F, 0x222D80u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:406 BRA @UNKNOWN151
    case 0xC1889E: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:408 JSL UNKNOWN_C466B8
    case 0xC188A0: {
        Instruction step(cpu, 0x22, 0xC4442Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:408 JSL UNKNOWN_C466B8
    // Overlapping static entry reached from 0xC1889D.
    case 0xC188A1: {
        Instruction step(cpu, 0x2E, 0x00C444u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:409 BRA @UNKNOWN150
    case 0xC188A4: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:411 LDA #.LOWORD(CC_1F_EE)
    case 0xC188A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x006FE1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:411 LDA #.LOWORD(CC_1F_EE)
    // Overlapping static entry reached from 0xC188A6.
    case 0xC188A8: {
        Instruction step(cpu, 0x6F, 0xA92280u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:412 BRA @UNKNOWN151
    case 0xC188A9: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    case 0xC188AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x007024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    // Overlapping static entry reached from 0xC188A8.
    case 0xC188AC: {
        Instruction step(cpu, 0x24, 0x000070u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    // Overlapping static entry reached from 0xC188AB.
    case 0xC188AD: {
        Instruction step(cpu, 0x70, 0x000080u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:415 BRA @UNKNOWN151
    case 0xC188AE: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:415 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188AD.
    case 0xC188AF: {
        Instruction step(cpu, 0x1D, 0x00C522u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:417 JSL GET_ON_BICYCLE
    case 0xC188B0: {
        Instruction step(cpu, 0x22, 0xC03EC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:417 JSL GET_ON_BICYCLE
    // Overlapping static entry reached from 0xC188AF.
    case 0xC188B2: {
        Instruction step(cpu, 0x3E, 0x0080C0u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:418 BRA @UNKNOWN150
    case 0xC188B4: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:418 BRA @UNKNOWN150
    // Overlapping static entry reached from 0xC188B2.
    case 0xC188B5: {
        Instruction step(cpu, 0x14, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    case 0xC188B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Eu : 0x00713Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    // Overlapping static entry reached from 0xC188B5.
    case 0xC188B7: {
        Instruction step(cpu, 0x3E, 0x008071u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    // Overlapping static entry reached from 0xC188B6.
    case 0xC188B8: {
        Instruction step(cpu, 0x71, 0x000080u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:421 BRA @UNKNOWN151
    case 0xC188B9: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:421 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188B8.
    case 0xC188BA: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    case 0xC188BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x0071AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC188BA.
    case 0xC188BC: {
        Instruction step(cpu, 0xAE, 0x008071u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC188BB.
    case 0xC188BD: {
        Instruction step(cpu, 0x71, 0x000080u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:424 BRA @UNKNOWN151
    case 0xC188BE: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:424 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188BD.
    case 0xC188BF: {
        Instruction step(cpu, 0x0D, 0x00A5A9u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    case 0xC188C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A5u : 0x0075A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    // Overlapping static entry reached from 0xC188C0.
    case 0xC188C2: {
        Instruction step(cpu, 0x75, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:427 BRA @UNKNOWN151
    case 0xC188C3: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:427 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188C2.
    case 0xC188C4: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:429 LDA #.LOWORD(CC_1F_F4)
    case 0xC188C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0075FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:429 LDA #.LOWORD(CC_1F_F4)
    // Overlapping static entry reached from 0xC188C5.
    case 0xC188C7: {
        Instruction step(cpu, 0x75, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:430 BRA @UNKNOWN151
    case 0xC188C8: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:430 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC188C7.
    case 0xC188C9: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    case 0xC188CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    // Overlapping static entry reached from 0xC188C9.
    case 0xC188CB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    // Overlapping static entry reached from 0xC188CA.
    case 0xC188CC: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1F.asm:434 END_C_FUNCTION
    case 0xC188CD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1F.asm:434 END_C_FUNCTION
    case 0xC188CE: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
