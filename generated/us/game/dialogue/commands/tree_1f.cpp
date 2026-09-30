// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/tree_1F.asm
bool resume_text_ccs_tree_1f(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1F.asm:3 BEGIN_C_FUNCTION
    case 0xC181BB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181BD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181BE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181BF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC181C0.
    case 0xC181C2: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181C3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1F.asm:10 END_STACK_VARS
    case 0xC181C4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:11 TXA
    case 0xC181C5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:12 BEQL @UNKNOWN74
    case 0xC181C6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:12 BEQL @UNKNOWN74
    case 0xC181C8: {
        Instruction step(cpu, 0x4C, 0x008416u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:13 CMP #$01
    case 0xC181CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:13 CMP #$01
    // Overlapping static entry reached from 0xC181CB.
    case 0xC181CD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:14 BEQL @UNKNOWN75
    case 0xC181CE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:14 BEQL @UNKNOWN75
    case 0xC181D0: {
        Instruction step(cpu, 0x4C, 0x00841Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:15 CMP #$02
    case 0xC181D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:15 CMP #$02
    // Overlapping static entry reached from 0xC181D3.
    case 0xC181D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:16 BEQL @UNKNOWN76
    case 0xC181D6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:16 BEQL @UNKNOWN76
    case 0xC181D8: {
        Instruction step(cpu, 0x4C, 0x008422u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:17 CMP #$03
    case 0xC181DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:17 CMP #$03
    // Overlapping static entry reached from 0xC181DB.
    case 0xC181DD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:18 BEQL @UNKNOWN77
    case 0xC181DE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:18 BEQL @UNKNOWN77
    case 0xC181E0: {
        Instruction step(cpu, 0x4C, 0x008428u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:19 CMP #$04
    case 0xC181E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:19 CMP #$04
    // Overlapping static entry reached from 0xC181E3.
    case 0xC181E5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:20 BEQL @UNKNOWN78
    case 0xC181E6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:20 BEQL @UNKNOWN78
    case 0xC181E8: {
        Instruction step(cpu, 0x4C, 0x008436u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:21 CMP #$05
    case 0xC181EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:21 CMP #$05
    // Overlapping static entry reached from 0xC181EB.
    case 0xC181ED: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:22 BEQL @UNKNOWN79
    case 0xC181EE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:22 BEQL @UNKNOWN79
    case 0xC181F0: {
        Instruction step(cpu, 0x4C, 0x00843Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:23 CMP #$06
    case 0xC181F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:23 CMP #$06
    // Overlapping static entry reached from 0xC181F3.
    case 0xC181F5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:24 BEQL @UNKNOWN80
    case 0xC181F6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:24 BEQL @UNKNOWN80
    case 0xC181F8: {
        Instruction step(cpu, 0x4C, 0x008446u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:25 CMP #$07
    case 0xC181FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:25 CMP #$07
    // Overlapping static entry reached from 0xC181FB.
    case 0xC181FD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:26 BEQL @UNKNOWN81
    case 0xC181FE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:26 BEQL @UNKNOWN81
    case 0xC18200: {
        Instruction step(cpu, 0x4C, 0x008450u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:27 CMP #$11
    case 0xC18203: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:27 CMP #$11
    // Overlapping static entry reached from 0xC18203.
    case 0xC18205: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:28 BEQL @UNKNOWN82
    case 0xC18206: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:28 BEQL @UNKNOWN82
    case 0xC18208: {
        Instruction step(cpu, 0x4C, 0x008456u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:29 CMP #$12
    case 0xC1820B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:29 CMP #$12
    // Overlapping static entry reached from 0xC1820B.
    case 0xC1820D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:30 BEQL @UNKNOWN83
    case 0xC1820E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:30 BEQL @UNKNOWN83
    case 0xC18210: {
        Instruction step(cpu, 0x4C, 0x00845Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:31 CMP #$13
    case 0xC18213: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:31 CMP #$13
    // Overlapping static entry reached from 0xC18213.
    case 0xC18215: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:32 BEQL @UNKNOWN84
    case 0xC18216: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:32 BEQL @UNKNOWN84
    case 0xC18218: {
        Instruction step(cpu, 0x4C, 0x008462u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:33 CMP #$14
    case 0xC1821B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:33 CMP #$14
    // Overlapping static entry reached from 0xC1821B.
    case 0xC1821D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:34 BEQL @UNKNOWN85
    case 0xC1821E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:34 BEQL @UNKNOWN85
    case 0xC18220: {
        Instruction step(cpu, 0x4C, 0x008468u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:35 CMP #$15
    case 0xC18223: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:35 CMP #$15
    // Overlapping static entry reached from 0xC18223.
    case 0xC18225: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:36 BEQL @UNKNOWN86
    case 0xC18226: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:36 BEQL @UNKNOWN86
    case 0xC18228: {
        Instruction step(cpu, 0x4C, 0x00846Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:37 CMP #$16
    case 0xC1822B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:37 CMP #$16
    // Overlapping static entry reached from 0xC1822B.
    case 0xC1822D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:38 BEQL @UNKNOWN87
    case 0xC1822E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:38 BEQL @UNKNOWN87
    case 0xC18230: {
        Instruction step(cpu, 0x4C, 0x008474u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:39 CMP #$17
    case 0xC18233: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:39 CMP #$17
    // Overlapping static entry reached from 0xC18233.
    case 0xC18235: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:40 BEQL @UNKNOWN88
    case 0xC18236: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:40 BEQL @UNKNOWN88
    case 0xC18238: {
        Instruction step(cpu, 0x4C, 0x00847Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:41 CMP #$18
    case 0xC1823B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:41 CMP #$18
    // Overlapping static entry reached from 0xC1823B.
    case 0xC1823D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:42 BEQL @UNKNOWN89
    case 0xC1823E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:42 BEQL @UNKNOWN89
    case 0xC18240: {
        Instruction step(cpu, 0x4C, 0x008480u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:43 CMP #$19
    case 0xC18243: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:43 CMP #$19
    // Overlapping static entry reached from 0xC18243.
    case 0xC18245: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:44 BEQL @UNKNOWN90
    case 0xC18246: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:44 BEQL @UNKNOWN90
    case 0xC18248: {
        Instruction step(cpu, 0x4C, 0x008486u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:45 CMP #$1A
    case 0xC1824B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:45 CMP #$1A
    // Overlapping static entry reached from 0xC1824B.
    case 0xC1824D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:46 BEQL @UNKNOWN91
    case 0xC1824E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:46 BEQL @UNKNOWN91
    case 0xC18250: {
        Instruction step(cpu, 0x4C, 0x00848Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:47 CMP #$1B
    case 0xC18253: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:47 CMP #$1B
    // Overlapping static entry reached from 0xC18253.
    case 0xC18255: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:48 BEQL @UNKNOWN92
    case 0xC18256: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:48 BEQL @UNKNOWN92
    case 0xC18258: {
        Instruction step(cpu, 0x4C, 0x008492u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:49 CMP #$1C
    case 0xC1825B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:49 CMP #$1C
    // Overlapping static entry reached from 0xC1825B.
    case 0xC1825D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:50 BEQL @UNKNOWN93
    case 0xC1825E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:50 BEQL @UNKNOWN93
    case 0xC18260: {
        Instruction step(cpu, 0x4C, 0x008498u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:51 CMP #$1D
    case 0xC18263: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:51 CMP #$1D
    // Overlapping static entry reached from 0xC18263.
    case 0xC18265: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:52 BEQL @UNKNOWN94
    case 0xC18266: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:52 BEQL @UNKNOWN94
    case 0xC18268: {
        Instruction step(cpu, 0x4C, 0x00849Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:53 CMP #$1E
    case 0xC1826B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:53 CMP #$1E
    // Overlapping static entry reached from 0xC1826B.
    case 0xC1826D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:54 BEQL @UNKNOWN95
    case 0xC1826E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:54 BEQL @UNKNOWN95
    case 0xC18270: {
        Instruction step(cpu, 0x4C, 0x0084A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:55 CMP #$1F
    case 0xC18273: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:55 CMP #$1F
    // Overlapping static entry reached from 0xC18273.
    case 0xC18275: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:56 BEQL @UNKNOWN96
    case 0xC18276: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:56 BEQL @UNKNOWN96
    case 0xC18278: {
        Instruction step(cpu, 0x4C, 0x0084AAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:57 CMP #$20
    case 0xC1827B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:57 CMP #$20
    // Overlapping static entry reached from 0xC1827B.
    case 0xC1827D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:58 BEQL @UNKNOWN97
    case 0xC1827E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:58 BEQL @UNKNOWN97
    case 0xC18280: {
        Instruction step(cpu, 0x4C, 0x0084B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:59 CMP #$21
    case 0xC18283: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:59 CMP #$21
    // Overlapping static entry reached from 0xC18283.
    case 0xC18285: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:60 BEQL @UNKNOWN98
    case 0xC18286: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:60 BEQL @UNKNOWN98
    case 0xC18288: {
        Instruction step(cpu, 0x4C, 0x0084B6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:61 CMP #$23
    case 0xC1828B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:61 CMP #$23
    // Overlapping static entry reached from 0xC1828B.
    case 0xC1828D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:62 BEQL @UNKNOWN99
    case 0xC1828E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:62 BEQL @UNKNOWN99
    case 0xC18290: {
        Instruction step(cpu, 0x4C, 0x0084BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:63 CMP #$30
    case 0xC18293: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:63 CMP #$30
    // Overlapping static entry reached from 0xC18293.
    case 0xC18295: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:64 BEQL @UNKNOWN100
    case 0xC18296: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:64 BEQL @UNKNOWN100
    case 0xC18298: {
        Instruction step(cpu, 0x4C, 0x0084C2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:65 CMP #$31
    case 0xC1829B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:65 CMP #$31
    // Overlapping static entry reached from 0xC1829B.
    case 0xC1829D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:66 BEQL @UNKNOWN100
    case 0xC1829E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:66 BEQL @UNKNOWN100
    case 0xC182A0: {
        Instruction step(cpu, 0x4C, 0x0084C2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:67 CMP #$40
    case 0xC182A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:67 CMP #$40
    // Overlapping static entry reached from 0xC182A3.
    case 0xC182A5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:68 BEQL @UNKNOWN101
    case 0xC182A6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:68 BEQL @UNKNOWN101
    case 0xC182A8: {
        Instruction step(cpu, 0x4C, 0x0084C8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:69 CMP #$41
    case 0xC182AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000041u : 0x000041u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:69 CMP #$41
    // Overlapping static entry reached from 0xC182AB.
    case 0xC182AD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:70 BEQL @UNKNOWN102
    case 0xC182AE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:70 BEQL @UNKNOWN102
    case 0xC182B0: {
        Instruction step(cpu, 0x4C, 0x0084CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:71 CMP #$50
    case 0xC182B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:71 CMP #$50
    // Overlapping static entry reached from 0xC182B3.
    case 0xC182B5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:72 BEQL @UNKNOWN103
    case 0xC182B6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:72 BEQL @UNKNOWN103
    case 0xC182B8: {
        Instruction step(cpu, 0x4C, 0x0084D4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:73 CMP #$51
    case 0xC182BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000051u : 0x000051u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:73 CMP #$51
    // Overlapping static entry reached from 0xC182BB.
    case 0xC182BD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:74 BEQL @UNKNOWN104
    case 0xC182BE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:74 BEQL @UNKNOWN104
    case 0xC182C0: {
        Instruction step(cpu, 0x4C, 0x0084DAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:75 CMP #$52
    case 0xC182C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:75 CMP #$52
    // Overlapping static entry reached from 0xC182C3.
    case 0xC182C5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:76 BEQL @UNKNOWN105
    case 0xC182C6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:76 BEQL @UNKNOWN105
    case 0xC182C8: {
        Instruction step(cpu, 0x4C, 0x0084E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:77 CMP #$60
    case 0xC182CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:77 CMP #$60
    // Overlapping static entry reached from 0xC182CB.
    case 0xC182CD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:78 BEQL @UNKNOWN106
    case 0xC182CE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:78 BEQL @UNKNOWN106
    case 0xC182D0: {
        Instruction step(cpu, 0x4C, 0x0084E6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:79 CMP #$61
    case 0xC182D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000061u : 0x000061u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:79 CMP #$61
    // Overlapping static entry reached from 0xC182D3.
    case 0xC182D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:80 BEQL @UNKNOWN107
    case 0xC182D6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:80 BEQL @UNKNOWN107
    case 0xC182D8: {
        Instruction step(cpu, 0x4C, 0x0084ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:81 CMP #$62
    case 0xC182DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000062u : 0x000062u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:81 CMP #$62
    // Overlapping static entry reached from 0xC182DB.
    case 0xC182DD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:82 BEQL @UNKNOWN108
    case 0xC182DE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:82 BEQL @UNKNOWN108
    case 0xC182E0: {
        Instruction step(cpu, 0x4C, 0x0084F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:83 CMP #$63
    case 0xC182E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000063u : 0x000063u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:83 CMP #$63
    // Overlapping static entry reached from 0xC182E3.
    case 0xC182E5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:84 BEQL @UNKNOWN109
    case 0xC182E6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:84 BEQL @UNKNOWN109
    case 0xC182E8: {
        Instruction step(cpu, 0x4C, 0x0084F8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:85 CMP #$64
    case 0xC182EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:85 CMP #$64
    // Overlapping static entry reached from 0xC182EB.
    case 0xC182ED: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:86 BEQL @UNKNOWN110
    case 0xC182EE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:86 BEQL @UNKNOWN110
    case 0xC182F0: {
        Instruction step(cpu, 0x4C, 0x0084FEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:87 CMP #$65
    case 0xC182F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000065u : 0x000065u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:87 CMP #$65
    // Overlapping static entry reached from 0xC182F3.
    case 0xC182F5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:88 BEQL @UNKNOWN111
    case 0xC182F6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:88 BEQL @UNKNOWN111
    case 0xC182F8: {
        Instruction step(cpu, 0x4C, 0x008505u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:89 CMP #$66
    case 0xC182FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000066u : 0x000066u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:89 CMP #$66
    // Overlapping static entry reached from 0xC182FB.
    case 0xC182FD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:90 BEQL @UNKNOWN112
    case 0xC182FE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:90 BEQL @UNKNOWN112
    case 0xC18300: {
        Instruction step(cpu, 0x4C, 0x00850Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:91 CMP #$67
    case 0xC18303: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000067u : 0x000067u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:91 CMP #$67
    // Overlapping static entry reached from 0xC18303.
    case 0xC18305: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:92 BEQL @UNKNOWN113
    case 0xC18306: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:92 BEQL @UNKNOWN113
    case 0xC18308: {
        Instruction step(cpu, 0x4C, 0x008512u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:93 CMP #$68
    case 0xC1830B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000068u : 0x000068u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:93 CMP #$68
    // Overlapping static entry reached from 0xC1830B.
    case 0xC1830D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:94 BEQL @UNKNOWN114
    case 0xC1830E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:94 BEQL @UNKNOWN114
    case 0xC18310: {
        Instruction step(cpu, 0x4C, 0x008518u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:95 CMP #$69
    case 0xC18313: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000069u : 0x000069u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:95 CMP #$69
    // Overlapping static entry reached from 0xC18313.
    case 0xC18315: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:96 BEQL @UNKNOWN115
    case 0xC18316: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:96 BEQL @UNKNOWN115
    case 0xC18318: {
        Instruction step(cpu, 0x4C, 0x008527u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:97 CMP #$71
    case 0xC1831B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000071u : 0x000071u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:97 CMP #$71
    // Overlapping static entry reached from 0xC1831B.
    case 0xC1831D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:98 BEQL @UNKNOWN118
    case 0xC1831E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:98 BEQL @UNKNOWN118
    case 0xC18320: {
        Instruction step(cpu, 0x4C, 0x008582u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:99 CMP #$81
    case 0xC18323: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000081u : 0x000081u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:99 CMP #$81
    // Overlapping static entry reached from 0xC18323.
    case 0xC18325: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:100 BEQL @UNKNOWN119
    case 0xC18326: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:100 BEQL @UNKNOWN119
    case 0xC18328: {
        Instruction step(cpu, 0x4C, 0x008588u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:101 CMP #$83
    case 0xC1832B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000083u : 0x000083u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:101 CMP #$83
    // Overlapping static entry reached from 0xC1832B.
    case 0xC1832D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:102 BEQL @UNKNOWN120
    case 0xC1832E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:102 BEQL @UNKNOWN120
    case 0xC18330: {
        Instruction step(cpu, 0x4C, 0x00858Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:103 CMP #$90
    case 0xC18333: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000090u : 0x000090u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:103 CMP #$90
    // Overlapping static entry reached from 0xC18333.
    case 0xC18335: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:104 BEQL @UNKNOWN121
    case 0xC18336: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:104 BEQL @UNKNOWN121
    case 0xC18338: {
        Instruction step(cpu, 0x4C, 0x008594u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:105 CMP #$A0
    case 0xC1833B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:105 CMP #$A0
    // Overlapping static entry reached from 0xC1833B.
    case 0xC1833D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:106 BEQL @UNKNOWN122
    case 0xC1833E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:106 BEQL @UNKNOWN122
    case 0xC18340: {
        Instruction step(cpu, 0x4C, 0x0085A9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:107 CMP #$A1
    case 0xC18343: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A1u : 0x0000A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:107 CMP #$A1
    // Overlapping static entry reached from 0xC18343.
    case 0xC18345: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:108 BEQL @UNKNOWN123
    case 0xC18346: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:108 BEQL @UNKNOWN123
    case 0xC18348: {
        Instruction step(cpu, 0x4C, 0x0085B3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:109 CMP #$A2
    case 0xC1834B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:109 CMP #$A2
    // Overlapping static entry reached from 0xC1834B.
    case 0xC1834D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:110 BEQL @UNKNOWN124
    case 0xC1834E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:110 BEQL @UNKNOWN124
    case 0xC18350: {
        Instruction step(cpu, 0x4C, 0x0085BDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:111 CMP #$B0
    case 0xC18353: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:111 CMP #$B0
    // Overlapping static entry reached from 0xC18353.
    case 0xC18355: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:112 BEQL @UNKNOWN126
    case 0xC18356: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:112 BEQL @UNKNOWN126
    case 0xC18358: {
        Instruction step(cpu, 0x4C, 0x0085DAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:113 CMP #$C0
    case 0xC1835B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:113 CMP #$C0
    // Overlapping static entry reached from 0xC1835B.
    case 0xC1835D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:114 BEQL @UNKNOWN127
    case 0xC1835E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:114 BEQL @UNKNOWN127
    case 0xC18360: {
        Instruction step(cpu, 0x4C, 0x0085E1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:115 CMP #$D0
    case 0xC18363: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:115 CMP #$D0
    // Overlapping static entry reached from 0xC18363.
    case 0xC18365: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:116 BEQL @UNKNOWN128
    case 0xC18366: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:116 BEQL @UNKNOWN128
    case 0xC18368: {
        Instruction step(cpu, 0x4C, 0x0085E7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:117 CMP #$D1
    case 0xC1836B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D1u : 0x0000D1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:117 CMP #$D1
    // Overlapping static entry reached from 0xC1836B.
    case 0xC1836D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:118 BEQL @UNKNOWN129
    case 0xC1836E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:118 BEQL @UNKNOWN129
    case 0xC18370: {
        Instruction step(cpu, 0x4C, 0x0085EDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:119 CMP #$D2
    case 0xC18373: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D2u : 0x0000D2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:119 CMP #$D2
    // Overlapping static entry reached from 0xC18373.
    case 0xC18375: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:120 BEQL @UNKNOWN130
    case 0xC18376: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:120 BEQL @UNKNOWN130
    case 0xC18378: {
        Instruction step(cpu, 0x4C, 0x008602u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:121 CMP #$D3
    case 0xC1837B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D3u : 0x0000D3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:121 CMP #$D3
    // Overlapping static entry reached from 0xC1837B.
    case 0xC1837D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:122 BEQL @UNKNOWN131
    case 0xC1837E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:122 BEQL @UNKNOWN131
    case 0xC18380: {
        Instruction step(cpu, 0x4C, 0x008607u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:123 CMP #$E1
    case 0xC18383: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:123 CMP #$E1
    // Overlapping static entry reached from 0xC18383.
    case 0xC18385: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:124 BEQL @UNKNOWN132
    case 0xC18386: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:124 BEQL @UNKNOWN132
    case 0xC18388: {
        Instruction step(cpu, 0x4C, 0x00860Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:125 CMP #$E4
    case 0xC1838B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E4u : 0x0000E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:125 CMP #$E4
    // Overlapping static entry reached from 0xC1838B.
    case 0xC1838D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:126 BEQL @UNKNOWN133
    case 0xC1838E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:126 BEQL @UNKNOWN133
    case 0xC18390: {
        Instruction step(cpu, 0x4C, 0x008611u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:127 CMP #$E5
    case 0xC18393: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:127 CMP #$E5
    // Overlapping static entry reached from 0xC18393.
    case 0xC18395: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:128 BEQL @UNKNOWN134
    case 0xC18396: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:128 BEQL @UNKNOWN134
    case 0xC18398: {
        Instruction step(cpu, 0x4C, 0x008616u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:129 CMP #$E6
    case 0xC1839B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E6u : 0x0000E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:129 CMP #$E6
    // Overlapping static entry reached from 0xC1839B.
    case 0xC1839D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:130 BEQL @UNKNOWN135
    case 0xC1839E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:130 BEQL @UNKNOWN135
    case 0xC183A0: {
        Instruction step(cpu, 0x4C, 0x00861Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:131 CMP #$E7
    case 0xC183A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E7u : 0x0000E7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:131 CMP #$E7
    // Overlapping static entry reached from 0xC183A3.
    case 0xC183A5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:132 BEQL @UNKNOWN136
    case 0xC183A6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:132 BEQL @UNKNOWN136
    case 0xC183A8: {
        Instruction step(cpu, 0x4C, 0x008620u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:133 CMP #$E8
    case 0xC183AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E8u : 0x0000E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:133 CMP #$E8
    // Overlapping static entry reached from 0xC183AB.
    case 0xC183AD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:134 BEQL @UNKNOWN137
    case 0xC183AE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:134 BEQL @UNKNOWN137
    case 0xC183B0: {
        Instruction step(cpu, 0x4C, 0x008625u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:135 CMP #$E9
    case 0xC183B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E9u : 0x0000E9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:135 CMP #$E9
    // Overlapping static entry reached from 0xC183B3.
    case 0xC183B5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:136 BEQL @UNKNOWN138
    case 0xC183B6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:136 BEQL @UNKNOWN138
    case 0xC183B8: {
        Instruction step(cpu, 0x4C, 0x00862Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:137 CMP #$EA
    case 0xC183BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EAu : 0x0000EAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:137 CMP #$EA
    // Overlapping static entry reached from 0xC183BB.
    case 0xC183BD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:138 BEQL @UNKNOWN139
    case 0xC183BE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:138 BEQL @UNKNOWN139
    case 0xC183C0: {
        Instruction step(cpu, 0x4C, 0x00862Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:139 CMP #$EB
    case 0xC183C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EBu : 0x0000EBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:139 CMP #$EB
    // Overlapping static entry reached from 0xC183C3.
    case 0xC183C5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:140 BEQL @UNKNOWN140
    case 0xC183C6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:140 BEQL @UNKNOWN140
    case 0xC183C8: {
        Instruction step(cpu, 0x4C, 0x008634u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:141 CMP #$EC
    case 0xC183CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000ECu : 0x0000ECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:141 CMP #$EC
    // Overlapping static entry reached from 0xC183CB.
    case 0xC183CD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:142 BEQL @UNKNOWN141
    case 0xC183CE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:142 BEQL @UNKNOWN141
    case 0xC183D0: {
        Instruction step(cpu, 0x4C, 0x008639u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:143 CMP #$ED
    case 0xC183D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EDu : 0x0000EDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:143 CMP #$ED
    // Overlapping static entry reached from 0xC183D3.
    case 0xC183D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:144 BEQL @UNKNOWN142
    case 0xC183D6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:144 BEQL @UNKNOWN142
    case 0xC183D8: {
        Instruction step(cpu, 0x4C, 0x00863Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:145 CMP #$EE
    case 0xC183DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EEu : 0x0000EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:145 CMP #$EE
    // Overlapping static entry reached from 0xC183DB.
    case 0xC183DD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:146 BEQL @UNKNOWN143
    case 0xC183DE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:146 BEQL @UNKNOWN143
    case 0xC183E0: {
        Instruction step(cpu, 0x4C, 0x008644u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:147 CMP #$EF
    case 0xC183E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:147 CMP #$EF
    // Overlapping static entry reached from 0xC183E3.
    case 0xC183E5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:148 BEQL @UNKNOWN144
    case 0xC183E6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:148 BEQL @UNKNOWN144
    case 0xC183E8: {
        Instruction step(cpu, 0x4C, 0x008649u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:149 CMP #$F0
    case 0xC183EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F0u : 0x0000F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:149 CMP #$F0
    // Overlapping static entry reached from 0xC183EB.
    case 0xC183ED: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:150 BEQL @UNKNOWN145
    case 0xC183EE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:150 BEQL @UNKNOWN145
    case 0xC183F0: {
        Instruction step(cpu, 0x4C, 0x00864Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:151 CMP #$F1
    case 0xC183F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F1u : 0x0000F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:151 CMP #$F1
    // Overlapping static entry reached from 0xC183F3.
    case 0xC183F5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:152 BEQL @UNKNOWN146
    case 0xC183F6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:152 BEQL @UNKNOWN146
    case 0xC183F8: {
        Instruction step(cpu, 0x4C, 0x008654u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:153 CMP #$F2
    case 0xC183FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F2u : 0x0000F2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:153 CMP #$F2
    // Overlapping static entry reached from 0xC183FB.
    case 0xC183FD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:154 BEQL @UNKNOWN147
    case 0xC183FE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:154 BEQL @UNKNOWN147
    case 0xC18400: {
        Instruction step(cpu, 0x4C, 0x008659u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:155 CMP #$F3
    case 0xC18403: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F3u : 0x0000F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:155 CMP #$F3
    // Overlapping static entry reached from 0xC18403.
    case 0xC18405: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:156 BEQL @UNKNOWN148
    case 0xC18406: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:156 BEQL @UNKNOWN148
    case 0xC18408: {
        Instruction step(cpu, 0x4C, 0x00865Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:157 CMP #$F4
    case 0xC1840B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F4u : 0x0000F4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:157 CMP #$F4
    // Overlapping static entry reached from 0xC1840B.
    case 0xC1840D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1F.asm:158 BEQL @UNKNOWN149
    case 0xC1840E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1F.asm:158 BEQL @UNKNOWN149
    case 0xC18410: {
        Instruction step(cpu, 0x4C, 0x008663u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:159 JMP @UNKNOWN150
    case 0xC18413: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:161 LDA #.LOWORD(CC_1F_00)
    case 0xC18416: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000051u : 0x004751u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:161 LDA #.LOWORD(CC_1F_00)
    // Overlapping static entry reached from 0xC18416.
    case 0xC18418: {
        Instruction step(cpu, 0x47, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:162 JMP @UNKNOWN151
    case 0xC18419: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:162 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18418.
    case 0xC1841A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:164 LDA #.LOWORD(CC_1F_01)
    case 0xC1841C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A0u : 0x0047A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:164 LDA #.LOWORD(CC_1F_01)
    // Overlapping static entry reached from 0xC1841C.
    case 0xC1841E: {
        Instruction step(cpu, 0x47, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:165 JMP @UNKNOWN151
    case 0xC1841F: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:165 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1841E.
    case 0xC18420: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:167 LDA #.LOWORD(CC_1F_02)
    case 0xC18422: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ABu : 0x0047ABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:167 LDA #.LOWORD(CC_1F_02)
    // Overlapping static entry reached from 0xC18422.
    case 0xC18424: {
        Instruction step(cpu, 0x47, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:168 JMP @UNKNOWN151
    case 0xC18425: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:168 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18424.
    case 0xC18426: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:170 JSL UNKNOWN_C069F7
    case 0xC18428: {
        Instruction step(cpu, 0x22, 0xC069F7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:171 LDX #0
    case 0xC1842C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:171 LDX #0
    // Overlapping static entry reached from 0xC1842C.
    case 0xC1842E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:172 JSL UNKNOWN_C216AD
    case 0xC1842F: {
        Instruction step(cpu, 0x22, 0xC216ADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:173 JMP @UNKNOWN150
    case 0xC18433: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:175 LDA #.LOWORD(CC_1F_04)
    case 0xC18436: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000054u : 0x007254u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:175 LDA #.LOWORD(CC_1F_04)
    // Overlapping static entry reached from 0xC18436.
    case 0xC18438: {
        Instruction step(cpu, 0x72, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:176 JMP @UNKNOWN151
    case 0xC18439: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:176 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18438.
    case 0xC1843A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:178 LDA #0
    case 0xC1843C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:178 LDA #0
    // Overlapping static entry reached from 0xC1843C.
    case 0xC1843E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:179 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC1843F: {
        Instruction step(cpu, 0x22, 0xC4FD45u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:180 JMP @UNKNOWN150
    case 0xC18443: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:182 LDA #1
    case 0xC18446: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:182 LDA #1
    // Overlapping static entry reached from 0xC18446.
    case 0xC18448: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:183 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC18449: {
        Instruction step(cpu, 0x22, 0xC4FD45u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:184 JMP @UNKNOWN150
    case 0xC1844D: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:186 LDA #.LOWORD(CC_1F_07)
    case 0xC18450: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00741Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:186 LDA #.LOWORD(CC_1F_07)
    // Overlapping static entry reached from 0xC18450.
    case 0xC18452: {
        Instruction step(cpu, 0x74, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:187 JMP @UNKNOWN151
    case 0xC18453: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:187 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18452.
    case 0xC18454: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    case 0xC18456: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000071u : 0x005F71u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:189 LDA #.LOWORD(CC_1F_11)
    // Overlapping static entry reached from 0xC18456.
    case 0xC18458: {
        Instruction step(cpu, 0x5F, 0x866B4Cu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:190 JMP @UNKNOWN151
    case 0xC18459: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    case 0xC1845C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x005F91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:192 LDA #.LOWORD(CC_1F_12)
    // Overlapping static entry reached from 0xC1845C.
    case 0xC1845E: {
        Instruction step(cpu, 0x5F, 0x866B4Cu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:193 JMP @UNKNOWN151
    case 0xC1845F: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:195 LDA #.LOWORD(CC_1F_13)
    case 0xC18462: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0063FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:195 LDA #.LOWORD(CC_1F_13)
    // Overlapping static entry reached from 0xC18462.
    case 0xC18464: {
        Instruction step(cpu, 0x63, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:196 JMP @UNKNOWN151
    case 0xC18465: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:196 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18464.
    case 0xC18466: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    case 0xC18468: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00646Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:198 LDA #.LOWORD(CC_1F_14)
    // Overlapping static entry reached from 0xC18468.
    case 0xC1846A: {
        Instruction step(cpu, 0x64, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:199 JMP @UNKNOWN151
    case 0xC1846B: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:199 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1846A.
    case 0xC1846C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    case 0xC1846E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000044u : 0x006744u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:201 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC1846E.
    case 0xC18470: {
        Instruction step(cpu, 0x67, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    case 0xC18471: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:202 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18470.
    case 0xC18472: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    case 0xC18474: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x006490u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:204 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC18474.
    case 0xC18476: {
        Instruction step(cpu, 0x64, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    case 0xC18477: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:205 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18476.
    case 0xC18478: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    case 0xC1847A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x006509u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:207 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC1847A.
    case 0xC1847C: {
        Instruction step(cpu, 0x65, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:208 JMP @UNKNOWN151
    case 0xC1847D: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:208 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1847C.
    case 0xC1847E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    case 0xC18480: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000082u : 0x006582u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:210 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC18480.
    case 0xC18482: {
        Instruction step(cpu, 0x65, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:211 JMP @UNKNOWN151
    case 0xC18483: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:211 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18482.
    case 0xC18484: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:213 LDA #.LOWORD(CC_1F_19)
    case 0xC18486: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AAu : 0x0065AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:213 LDA #.LOWORD(CC_1F_19)
    // Overlapping static entry reached from 0xC18486.
    case 0xC18488: {
        Instruction step(cpu, 0x65, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:214 JMP @UNKNOWN151
    case 0xC18489: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:214 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18488.
    case 0xC1848A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:216 LDA #.LOWORD(CC_1F_1A)
    case 0xC1848C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D2u : 0x0065D2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:216 LDA #.LOWORD(CC_1F_1A)
    // Overlapping static entry reached from 0xC1848C.
    case 0xC1848E: {
        Instruction step(cpu, 0x65, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:217 JMP @UNKNOWN151
    case 0xC1848F: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:217 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1848E.
    case 0xC18490: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:219 LDA #.LOWORD(CC_1F_1B)
    case 0xC18492: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Au : 0x00662Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:219 LDA #.LOWORD(CC_1F_1B)
    // Overlapping static entry reached from 0xC18492.
    case 0xC18494: {
        Instruction step(cpu, 0x66, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:220 JMP @UNKNOWN151
    case 0xC18495: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:220 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18494.
    case 0xC18496: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:222 LDA #.LOWORD(CC_1F_1C)
    case 0xC18498: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Du : 0x00666Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:222 LDA #.LOWORD(CC_1F_1C)
    // Overlapping static entry reached from 0xC18498.
    case 0xC1849A: {
        Instruction step(cpu, 0x66, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:223 JMP @UNKNOWN151
    case 0xC1849B: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:223 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1849A.
    case 0xC1849C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:225 LDA #.LOWORD(CC_1F_1D)
    case 0xC1849E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DDu : 0x0066DDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:225 LDA #.LOWORD(CC_1F_1D)
    // Overlapping static entry reached from 0xC1849E.
    case 0xC184A0: {
        Instruction step(cpu, 0x66, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    case 0xC184A1: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:226 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184A0.
    case 0xC184A2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    case 0xC184A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D6u : 0x0067D6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:228 LDA #.LOWORD(CC_1F_1E)
    // Overlapping static entry reached from 0xC184A4.
    case 0xC184A6: {
        Instruction step(cpu, 0x67, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:229 JMP @UNKNOWN151
    case 0xC184A7: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:229 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184A6.
    case 0xC184A8: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:231 LDA #.LOWORD(CC_1F_1F)
    case 0xC184AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x00683Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:231 LDA #.LOWORD(CC_1F_1F)
    // Overlapping static entry reached from 0xC184AA.
    case 0xC184AC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:232 JMP @UNKNOWN151
    case 0xC184AD: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:234 LDA #.LOWORD(CC_1F_20)
    case 0xC184B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FBu : 0x004DFBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:234 LDA #.LOWORD(CC_1F_20)
    // Overlapping static entry reached from 0xC184B0.
    case 0xC184B2: {
        Instruction step(cpu, 0x4D, 0x006B4Cu, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:235 JMP @UNKNOWN151
    case 0xC184B3: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:235 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184B2.
    case 0xC184B5: {
        Instruction step(cpu, 0x86, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    case 0xC184B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Cu : 0x004E8Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    // Overlapping static entry reached from 0xC184B5.
    case 0xC184B7: {
        Instruction step(cpu, 0x8C, 0x004C4Eu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:237 LDA #.LOWORD(CC_1F_21)
    // Overlapping static entry reached from 0xC184B6.
    case 0xC184B8: {
        Instruction step(cpu, 0x4E, 0x006B4Cu, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    case 0xC184B9: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184B7.
    case 0xC184BA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:238 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184B8.
    case 0xC184BB: {
        Instruction step(cpu, 0x86, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    case 0xC184BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x006FD1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC184BB.
    case 0xC184BD: {
        Instruction step(cpu, 0xD1, 0x00006Fu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:240 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC184BC.
    case 0xC184BE: {
        Instruction step(cpu, 0x6F, 0x866B4Cu, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:241 JMP @UNKNOWN151
    case 0xC184BF: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:243 JSR CHANGE_CURRENT_WINDOW_FONT
    case 0xC184C2: {
        Instruction step(cpu, 0x20, 0x000FACu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:243 JSR CHANGE_CURRENT_WINDOW_FONT
    // Overlapping static entry reached from 0xC18500.
    case 0xC184C4: {
        Instruction step(cpu, 0x0F, 0x86684Cu, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:244 JMP @UNKNOWN150
    case 0xC184C5: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:246 LDA #.LOWORD(CC_1F_40)
    case 0xC184C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BCu : 0x0072BCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:246 LDA #.LOWORD(CC_1F_40)
    // Overlapping static entry reached from 0xC184C8.
    case 0xC184CA: {
        Instruction step(cpu, 0x72, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:247 JMP @UNKNOWN151
    case 0xC184CB: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:247 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184CA.
    case 0xC184CC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    case 0xC184CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DAu : 0x0072DAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:249 LDA #.LOWORD(CC_1F_41)
    // Overlapping static entry reached from 0xC184CE.
    case 0xC184D0: {
        Instruction step(cpu, 0x72, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:250 JMP @UNKNOWN151
    case 0xC184D1: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:250 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184D0.
    case 0xC184D2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:252 JSR LOCK_INPUT
    case 0xC184D4: {
        Instruction step(cpu, 0x20, 0x0000C7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:253 JMP @UNKNOWN150
    case 0xC184D7: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:255 JSR UNLOCK_INPUT
    case 0xC184DA: {
        Instruction step(cpu, 0x20, 0x0000D0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:256 JMP @UNKNOWN150
    case 0xC184DD: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:258 LDA #.LOWORD(CC_1F_52)
    case 0xC184E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A3u : 0x0044A3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:258 LDA #.LOWORD(CC_1F_52)
    // Overlapping static entry reached from 0xC184E0.
    case 0xC184E2: {
        Instruction step(cpu, 0x44, 0x006B4Cu, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:259 JMP @UNKNOWN151
    case 0xC184E3: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:259 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184E2.
    case 0xC184E5: {
        Instruction step(cpu, 0x86, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    case 0xC184E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000094u : 0x005494u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    // Overlapping static entry reached from 0xC184E5.
    case 0xC184E7: {
        Instruction step(cpu, 0x94, 0x000054u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:261 LDA #.LOWORD(CC_1F_60)
    // Overlapping static entry reached from 0xC184E6.
    case 0xC184E8: {
        Instruction step(cpu, 0x54, 0x006B4Cu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:262 JMP @UNKNOWN151
    case 0xC184E9: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:262 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184E8.
    case 0xC184EB: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:264 JSR UNKNOWN_C102D0
    case 0xC184EC: {
        Instruction step(cpu, 0x20, 0x0002D0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:264 JSR UNKNOWN_C102D0
    // Overlapping static entry reached from 0xC184EB.
    case 0xC184ED: {
        Instruction step(cpu, 0xD0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:265 JMP @UNKNOWN150
    case 0xC184EF: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:265 JMP @UNKNOWN150
    // Overlapping static entry reached from 0xC184ED.
    case 0xC184F1: {
        Instruction step(cpu, 0x86, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    case 0xC184F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F7u : 0x0069F7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    // Overlapping static entry reached from 0xC184F1.
    case 0xC184F3: {
        Instruction step(cpu, 0xF7, 0x000069u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:267 LDA #.LOWORD(CC_1F_62)
    // Overlapping static entry reached from 0xC184F2.
    case 0xC184F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Cu : 0x006B4Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:268 JMP @UNKNOWN151
    case 0xC184F5: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:268 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184F4.
    case 0xC184F6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:268 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184F4.
    case 0xC184F7: {
        Instruction step(cpu, 0x86, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    case 0xC184F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E8u : 0x006DE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC184F7.
    case 0xC184F9: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:270 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC184F8.
    case 0xC184FA: {
        Instruction step(cpu, 0x6D, 0x006B4Cu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:271 JMP @UNKNOWN151
    case 0xC184FB: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:271 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC184FA.
    case 0xC184FD: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    case 0xC184FE: {
        Instruction step(cpu, 0x22, 0xC23008u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    // Overlapping static entry reached from 0xC184FD.
    case 0xC184FF: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:273 JSL UNKNOWN_C23008
    // Overlapping static entry reached from 0xC184FF.
    case 0xC18500: {
        Instruction step(cpu, 0x30, 0x0000C2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:274 JMP @UNKNOWN150
    case 0xC18502: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:276 JSL UNKNOWN_C2307B
    case 0xC18505: {
        Instruction step(cpu, 0x22, 0xC2307Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:277 JMP @UNKNOWN150
    case 0xC18509: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:279 LDA #.LOWORD(CC_1F_66)
    case 0xC1850C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00711Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:279 LDA #.LOWORD(CC_1F_66)
    // Overlapping static entry reached from 0xC1850C.
    case 0xC1850E: {
        Instruction step(cpu, 0x71, 0x00004Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:280 JMP @UNKNOWN151
    case 0xC1850F: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:280 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC1850E.
    case 0xC18510: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    case 0xC18512: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x007233u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:282 LDA #.LOWORD(CC_1F_67)
    // Overlapping static entry reached from 0xC18512.
    case 0xC18514: {
        Instruction step(cpu, 0x72, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:283 JMP @UNKNOWN151
    case 0xC18515: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:283 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC18514.
    case 0xC18516: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:285 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC18518: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:286 STA GAME_STATE+game_state::exit_mouse_x_coord
    case 0xC1851B: {
        Instruction step(cpu, 0x8D, 0x0098B2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:287 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1851E: {
        Instruction step(cpu, 0xAD, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:288 STA GAME_STATE+game_state::exit_mouse_y_coord
    case 0xC18521: {
        Instruction step(cpu, 0x8D, 0x0098B4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:289 JMP @UNKNOWN150
    case 0xC18524: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:291 LDY #1
    case 0xC18527: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:291 LDY #1
    // Overlapping static entry reached from 0xC18527.
    case 0xC18529: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:292 STY @LOCAL01
    case 0xC1852A: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:293 BRA @UNKNOWN117
    case 0xC1852C: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:295 LDX #0
    case 0xC1852E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:295 LDX #0
    // Overlapping static entry reached from 0xC1852E.
    case 0xC18530: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:296 TYA
    case 0xC18531: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:297 JSL SET_EVENT_FLAG
    case 0xC18532: {
        Instruction step(cpu, 0x22, 0xC2165Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:298 LDY @LOCAL01
    case 0xC18536: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:299 INY
    case 0xC18538: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:300 STY @LOCAL01
    case 0xC18539: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:302 CPY #10
    case 0xC1853B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:302 CPY #10
    // Overlapping static entry reached from 0xC1853B.
    case 0xC1853D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/tree_1F.asm:303 BLTEQ @UNKNOWN116
    case 0xC1853E: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/tree_1F.asm:303 BLTEQ @UNKNOWN116
    case 0xC18540: {
        Instruction step(cpu, 0xF0, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:304 LDX #1
    case 0xC18542: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:304 LDX #1
    // Overlapping static entry reached from 0xC18542.
    case 0xC18544: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:305 TXA
    case 0xC18545: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:306 JSL FADE_OUT
    case 0xC18546: {
        Instruction step(cpu, 0x22, 0xC0887Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    case 0xC1854A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000073u : 0x000073u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:307 LDA #SFX::EQUIPPED_ITEM
    // Overlapping static entry reached from 0xC1854A.
    case 0xC1854C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:308 JSL PLAY_SOUND
    case 0xC1854D: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:309 LDA GAME_STATE+game_state::exit_mouse_x_coord
    case 0xC18551: {
        Instruction step(cpu, 0xAD, 0x0098B2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:310 STA @VIRTUAL04
    case 0xC18554: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:311 LDA GAME_STATE+game_state::exit_mouse_y_coord
    case 0xC18556: {
        Instruction step(cpu, 0xAD, 0x0098B4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:312 STA @VIRTUAL02
    case 0xC18559: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:313 LDX @VIRTUAL02
    case 0xC1855B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:314 LDA @VIRTUAL04
    case 0xC1855D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:315 JSL LOAD_MAP_AT_POSITION
    case 0xC1855F: {
        Instruction step(cpu, 0x22, 0xC013F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:316 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC18563: {
        Instruction step(cpu, 0x9C, 0x002890u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:317 LDY #4
    case 0xC18566: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:317 LDY #4
    // Overlapping static entry reached from 0xC18566.
    case 0xC18568: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:318 LDX @VIRTUAL02
    case 0xC18569: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:319 LDA @VIRTUAL04
    case 0xC1856B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:320 JSL UNKNOWN_C03FA9
    case 0xC1856D: {
        Instruction step(cpu, 0x22, 0xC03FA9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:321 LDX #1
    case 0xC18571: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:321 LDX #1
    // Overlapping static entry reached from 0xC18571.
    case 0xC18573: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:322 TXA
    case 0xC18574: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:323 JSL FADE_IN
    case 0xC18575: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:324 LDA #.LOWORD(-1)
    case 0xC18579: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:324 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC18579.
    case 0xC1857B: {
        Instruction step(cpu, 0xFF, 0x5DC48Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:325 STA STAIRS_DIRECTION
    case 0xC1857C: {
        Instruction step(cpu, 0x8D, 0x005DC4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:326 JMP @UNKNOWN150
    case 0xC1857F: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:328 LDA #.LOWORD(CC_1F_71)
    case 0xC18582: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000058u : 0x005C58u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:328 LDA #.LOWORD(CC_1F_71)
    // Overlapping static entry reached from 0xC18582.
    case 0xC18584: {
        Instruction step(cpu, 0x5C, 0x866B4Cu, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:329 JMP @UNKNOWN151
    case 0xC18585: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:331 LDA #.LOWORD(CC_1F_81)
    case 0xC18588: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Fu : 0x004F6Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:331 LDA #.LOWORD(CC_1F_81)
    // Overlapping static entry reached from 0xC18588.
    case 0xC1858A: {
        Instruction step(cpu, 0x4F, 0x866B4Cu, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:332 JMP @UNKNOWN151
    case 0xC1858B: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    case 0xC1858E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00583Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:334 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC1858E.
    case 0xC18590: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:335 JMP @UNKNOWN151
    case 0xC18591: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:337 JSR UNKNOWN_C19441
    case 0xC18594: {
        Instruction step(cpu, 0x20, 0x009441u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:338 STORE_INT1632 @VIRTUAL06
    case 0xC18597: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:338 STORE_INT1632 @VIRTUAL06
    case 0xC18599: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1859B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1859D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1859F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:339 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185A1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:340 JSR SET_WORKING_MEMORY
    case 0xC185A3: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:341 JMP @UNKNOWN150
    case 0xC185A6: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:343 LDA #1
    case 0xC185A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:343 LDA #1
    // Overlapping static entry reached from 0xC185A9.
    case 0xC185AB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:344 JSL UNKNOWN_C226C5
    case 0xC185AC: {
        Instruction step(cpu, 0x22, 0xC226C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:345 JMP @UNKNOWN150
    case 0xC185B0: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:347 LDA #0
    case 0xC185B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:347 LDA #0
    // Overlapping static entry reached from 0xC185B3.
    case 0xC185B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:348 JSL UNKNOWN_C226C5
    case 0xC185B6: {
        Instruction step(cpu, 0x22, 0xC226C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:349 JMP @UNKNOWN150
    case 0xC185BA: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:351 JSL UNKNOWN_C226E6
    case 0xC185BD: {
        Instruction step(cpu, 0x22, 0xC226E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC185C1.
    case 0xC185C3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185C4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185C6: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185C8: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:352 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC185CA: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185CC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185CE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185D0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185D2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:354 JSR SET_WORKING_MEMORY
    case 0xC185D4: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:355 JMP @UNKNOWN150
    case 0xC185D7: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:357 JSL SAVE_CURRENT_GAME
    case 0xC185DA: {
        Instruction step(cpu, 0x22, 0xC22A2Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:358 JMP @UNKNOWN150
    case 0xC185DE: {
        Instruction step(cpu, 0x4C, 0x008668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:360 LDA #.LOWORD(CC_1F_C0)
    case 0xC185E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x006308u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:360 LDA #.LOWORD(CC_1F_C0)
    // Overlapping static entry reached from 0xC185E1.
    case 0xC185E3: {
        Instruction step(cpu, 0x63, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:361 JMP @UNKNOWN151
    case 0xC185E4: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:361 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC185E3.
    case 0xC185E5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    case 0xC185E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A7u : 0x0063A7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:363 LDA #.LOWORD(CC_1F_D0)
    // Overlapping static entry reached from 0xC185E7.
    case 0xC185E9: {
        Instruction step(cpu, 0x63, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:364 JMP @UNKNOWN151
    case 0xC185EA: {
        Instruction step(cpu, 0x4C, 0x00866Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:364 JMP @UNKNOWN151
    // Overlapping static entry reached from 0xC185E9.
    case 0xC185EB: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:366 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    case 0xC185ED: {
        Instruction step(cpu, 0x22, 0xC490EEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:367 STORE_INT1632 @VIRTUAL06
    case 0xC185F1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:367 STORE_INT1632 @VIRTUAL06
    case 0xC185F3: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185F5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185F7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185F9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1F.asm:368 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC185FB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:369 JSR SET_WORKING_MEMORY
    case 0xC185FD: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:370 BRA @UNKNOWN150
    case 0xC18600: {
        Instruction step(cpu, 0x80, 0x000066u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:372 LDA #.LOWORD(CC_1F_D2)
    case 0xC18602: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x007304u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:372 LDA #.LOWORD(CC_1F_D2)
    // Overlapping static entry reached from 0xC18602.
    case 0xC18604: {
        Instruction step(cpu, 0x73, 0x000080u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:373 BRA @UNKNOWN151
    case 0xC18605: {
        Instruction step(cpu, 0x80, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:373 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18604.
    case 0xC18606: {
        Instruction step(cpu, 0x64, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    case 0xC18607: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x007440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    // Overlapping static entry reached from 0xC18606.
    case 0xC18608: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:375 LDA #.LOWORD(CC_1F_D3)
    // Overlapping static entry reached from 0xC18607.
    case 0xC18609: {
        Instruction step(cpu, 0x74, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:376 BRA @UNKNOWN151
    case 0xC1860A: {
        Instruction step(cpu, 0x80, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:376 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18609.
    case 0xC1860B: {
        Instruction step(cpu, 0x5F, 0x66FEA9u, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:378 LDA #.LOWORD(CC_1F_E1)
    case 0xC1860C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x0066FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:378 LDA #.LOWORD(CC_1F_E1)
    // Overlapping static entry reached from 0xC1860C.
    case 0xC1860E: {
        Instruction step(cpu, 0x66, 0x000080u, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:379 BRA @UNKNOWN151
    case 0xC1860F: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:379 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC1860E.
    case 0xC18610: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:381 LDA #.LOWORD(CC_1F_E4)
    case 0xC18611: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:381 LDA #.LOWORD(CC_1F_E4)
    // Overlapping static entry reached from 0xC18611.
    case 0xC18613: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:382 BRA @UNKNOWN151
    case 0xC18614: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:384 LDA #.LOWORD(CC_1F_E5)
    case 0xC18616: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A4u : 0x006BA4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:384 LDA #.LOWORD(CC_1F_E5)
    // Overlapping static entry reached from 0xC18616.
    case 0xC18618: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:385 BRA @UNKNOWN151
    case 0xC18619: {
        Instruction step(cpu, 0x80, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:387 LDA #.LOWORD(CC_1F_E6)
    case 0xC1861B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x006BAFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:387 LDA #.LOWORD(CC_1F_E6)
    // Overlapping static entry reached from 0xC1861B.
    case 0xC1861D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:388 BRA @UNKNOWN151
    case 0xC1861E: {
        Instruction step(cpu, 0x80, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:390 LDA #.LOWORD(CC_1F_E7)
    case 0xC18620: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F2u : 0x006BF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:390 LDA #.LOWORD(CC_1F_E7)
    // Overlapping static entry reached from 0xC18620.
    case 0xC18622: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:391 BRA @UNKNOWN151
    case 0xC18623: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:393 LDA #.LOWORD(CC_1F_E8)
    case 0xC18625: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000035u : 0x006C35u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:393 LDA #.LOWORD(CC_1F_E8)
    // Overlapping static entry reached from 0xC18625.
    case 0xC18627: {
        Instruction step(cpu, 0x6C, 0x004180u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:394 BRA @UNKNOWN151
    case 0xC18628: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:396 LDA #.LOWORD(CC_1F_E9)
    case 0xC1862A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x006C40u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:396 LDA #.LOWORD(CC_1F_E9)
    // Overlapping static entry reached from 0xC1862A.
    case 0xC1862C: {
        Instruction step(cpu, 0x6C, 0x003C80u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:397 BRA @UNKNOWN151
    case 0xC1862D: {
        Instruction step(cpu, 0x80, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:399 LDA #.LOWORD(CC_1F_EA)
    case 0xC1862F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x006C83u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:399 LDA #.LOWORD(CC_1F_EA)
    // Overlapping static entry reached from 0xC1862F.
    case 0xC18631: {
        Instruction step(cpu, 0x6C, 0x003780u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:400 BRA @UNKNOWN151
    case 0xC18632: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    case 0xC18634: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C6u : 0x006CC6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:402 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC18634.
    case 0xC18636: {
        Instruction step(cpu, 0x6C, 0x003280u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:403 BRA @UNKNOWN151
    case 0xC18637: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    case 0xC18639: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x006D14u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:405 LDA #.LOWORD(CC_1F_EC)
    // Overlapping static entry reached from 0xC18639.
    case 0xC1863B: {
        Instruction step(cpu, 0x6D, 0x002D80u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:406 BRA @UNKNOWN151
    case 0xC1863C: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:408 JSL UNKNOWN_C466B8
    case 0xC1863E: {
        Instruction step(cpu, 0x22, 0xC466B8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:409 BRA @UNKNOWN150
    case 0xC18642: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:411 LDA #.LOWORD(CC_1F_EE)
    case 0xC18644: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000062u : 0x006D62u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:411 LDA #.LOWORD(CC_1F_EE)
    // Overlapping static entry reached from 0xC18644.
    case 0xC18646: {
        Instruction step(cpu, 0x6D, 0x002280u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:412 BRA @UNKNOWN151
    case 0xC18647: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    case 0xC18649: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A5u : 0x006DA5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:414 LDA #.LOWORD(CC_1F_EF)
    // Overlapping static entry reached from 0xC18649.
    case 0xC1864B: {
        Instruction step(cpu, 0x6D, 0x001D80u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:415 BRA @UNKNOWN151
    case 0xC1864C: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:417 JSL GET_ON_BICYCLE
    case 0xC1864E: {
        Instruction step(cpu, 0x22, 0xC03C5Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:418 BRA @UNKNOWN150
    case 0xC18652: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    case 0xC18654: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BFu : 0x006EBFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:420 LDA #.LOWORD(CC_1F_F1)
    // Overlapping static entry reached from 0xC18654.
    case 0xC18656: {
        Instruction step(cpu, 0x6E, 0x001280u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:421 BRA @UNKNOWN151
    case 0xC18657: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    case 0xC18659: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x006F2Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:423 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC18659.
    case 0xC1865B: {
        Instruction step(cpu, 0x6F, 0xA90D80u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:424 BRA @UNKNOWN151
    case 0xC1865C: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    case 0xC1865E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x007325u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    // Overlapping static entry reached from 0xC1865B.
    case 0xC1865F: {
        Instruction step(cpu, 0x25, 0x000073u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:426 LDA #.LOWORD(CC_1F_F3)
    // Overlapping static entry reached from 0xC1865E.
    case 0xC18660: {
        Instruction step(cpu, 0x73, 0x000080u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:427 BRA @UNKNOWN151
    case 0xC18661: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:427 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18660.
    case 0xC18662: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:429 LDA #.LOWORD(CC_1F_F4)
    case 0xC18663: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00737Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:429 LDA #.LOWORD(CC_1F_F4)
    // Overlapping static entry reached from 0xC18663.
    case 0xC18665: {
        Instruction step(cpu, 0x73, 0x000080u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:430 BRA @UNKNOWN151
    case 0xC18666: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:430 BRA @UNKNOWN151
    // Overlapping static entry reached from 0xC18665.
    case 0xC18667: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    case 0xC18668: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    // Overlapping static entry reached from 0xC18667.
    case 0xC18669: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1F.asm:432 LDA #NULL
    // Overlapping static entry reached from 0xC18668.
    case 0xC1866A: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1F.asm:434 END_C_FUNCTION
    case 0xC1866B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1F.asm:434 END_C_FUNCTION
    case 0xC1866C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
