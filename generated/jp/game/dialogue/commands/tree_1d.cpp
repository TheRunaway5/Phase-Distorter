// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/tree_1D.asm
bool resume_text_ccs_tree_1d(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1D.asm:3 BEGIN_C_FUNCTION
    case 0xC18173: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC18175: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC18176: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC18177: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC18178: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC18178.
    case 0xC1817A: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC1817B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC1817C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:12 TXA
    case 0xC1817D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:13 BEQL @UNKNOWN30
    case 0xC1817E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:13 BEQL @UNKNOWN30
    case 0xC18180: {
        Instruction step(cpu, 0x4C, 0x00826Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:14 CMP #$01
    case 0xC18183: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:14 CMP #$01
    // Overlapping static entry reached from 0xC18183.
    case 0xC18185: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:15 BEQL @UNKNOWN31
    case 0xC18186: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:15 BEQL @UNKNOWN31
    case 0xC18188: {
        Instruction step(cpu, 0x4C, 0x008274u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:16 CMP #$02
    case 0xC1818B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:16 CMP #$02
    // Overlapping static entry reached from 0xC1818B.
    case 0xC1818D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:17 BEQL @UNKNOWN32
    case 0xC1818E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:17 BEQL @UNKNOWN32
    case 0xC18190: {
        Instruction step(cpu, 0x4C, 0x00827Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:18 CMP #$03
    case 0xC18193: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:18 CMP #$03
    // Overlapping static entry reached from 0xC18193.
    case 0xC18195: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:19 BEQL @UNKNOWN33
    case 0xC18196: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:19 BEQL @UNKNOWN33
    case 0xC18198: {
        Instruction step(cpu, 0x4C, 0x008280u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:20 CMP #$04
    case 0xC1819B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:20 CMP #$04
    // Overlapping static entry reached from 0xC1819B.
    case 0xC1819D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:21 BEQL @UNKNOWN34
    case 0xC1819E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:21 BEQL @UNKNOWN34
    case 0xC181A0: {
        Instruction step(cpu, 0x4C, 0x008286u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:22 CMP #$05
    case 0xC181A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:22 CMP #$05
    // Overlapping static entry reached from 0xC181A3.
    case 0xC181A5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:23 BEQL @UNKNOWN35
    case 0xC181A6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:23 BEQL @UNKNOWN35
    case 0xC181A8: {
        Instruction step(cpu, 0x4C, 0x00828Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:24 CMP #$06
    case 0xC181AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:24 CMP #$06
    // Overlapping static entry reached from 0xC181AB.
    case 0xC181AD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:25 BEQL @UNKNOWN36
    case 0xC181AE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:25 BEQL @UNKNOWN36
    case 0xC181B0: {
        Instruction step(cpu, 0x4C, 0x008292u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:26 CMP #$07
    case 0xC181B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:26 CMP #$07
    // Overlapping static entry reached from 0xC181B3.
    case 0xC181B5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:27 BEQL @UNKNOWN37
    case 0xC181B6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:27 BEQL @UNKNOWN37
    case 0xC181B8: {
        Instruction step(cpu, 0x4C, 0x008298u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:28 CMP #$08
    case 0xC181BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC181BB.
    case 0xC181BD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:29 BEQL @UNKNOWN38
    case 0xC181BE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:29 BEQL @UNKNOWN38
    case 0xC181C0: {
        Instruction step(cpu, 0x4C, 0x00829Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:30 CMP #$09
    case 0xC181C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:30 CMP #$09
    // Overlapping static entry reached from 0xC181C3.
    case 0xC181C5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:31 BEQL @UNKNOWN39
    case 0xC181C6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:31 BEQL @UNKNOWN39
    case 0xC181C8: {
        Instruction step(cpu, 0x4C, 0x0082A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:32 CMP #$0A
    case 0xC181CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:32 CMP #$0A
    // Overlapping static entry reached from 0xC181CB.
    case 0xC181CD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:33 BEQL @UNKNOWN40
    case 0xC181CE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:33 BEQL @UNKNOWN40
    case 0xC181D0: {
        Instruction step(cpu, 0x4C, 0x0082AAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:34 CMP #$0B
    case 0xC181D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:34 CMP #$0B
    // Overlapping static entry reached from 0xC181D3.
    case 0xC181D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:35 BEQL @UNKNOWN41
    case 0xC181D6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:35 BEQL @UNKNOWN41
    case 0xC181D8: {
        Instruction step(cpu, 0x4C, 0x0082B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:36 CMP #$0C
    case 0xC181DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:36 CMP #$0C
    // Overlapping static entry reached from 0xC181DB.
    case 0xC181DD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:37 BEQL @UNKNOWN42
    case 0xC181DE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:37 BEQL @UNKNOWN42
    case 0xC181E0: {
        Instruction step(cpu, 0x4C, 0x0082B6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:38 CMP #$0D
    case 0xC181E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:38 CMP #$0D
    // Overlapping static entry reached from 0xC181E3.
    case 0xC181E5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:39 BEQL @UNKNOWN43
    case 0xC181E6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:39 BEQL @UNKNOWN43
    case 0xC181E8: {
        Instruction step(cpu, 0x4C, 0x0082BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:40 CMP #$0E
    case 0xC181EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:40 CMP #$0E
    // Overlapping static entry reached from 0xC181EB.
    case 0xC181ED: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:41 BEQL @UNKNOWN44
    case 0xC181EE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:41 BEQL @UNKNOWN44
    case 0xC181F0: {
        Instruction step(cpu, 0x4C, 0x0082C2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:42 CMP #$0F
    case 0xC181F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:42 CMP #$0F
    // Overlapping static entry reached from 0xC181F3.
    case 0xC181F5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:43 BEQL @UNKNOWN45
    case 0xC181F6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:43 BEQL @UNKNOWN45
    case 0xC181F8: {
        Instruction step(cpu, 0x4C, 0x0082C8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:44 CMP #$10
    case 0xC181FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:44 CMP #$10
    // Overlapping static entry reached from 0xC181FB.
    case 0xC181FD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:45 BEQL @UNKNOWN46
    case 0xC181FE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:45 BEQL @UNKNOWN46
    case 0xC18200: {
        Instruction step(cpu, 0x4C, 0x0082CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:46 CMP #$11
    case 0xC18203: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:46 CMP #$11
    // Overlapping static entry reached from 0xC18203.
    case 0xC18205: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:47 BEQL @UNKNOWN47
    case 0xC18206: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:47 BEQL @UNKNOWN47
    case 0xC18208: {
        Instruction step(cpu, 0x4C, 0x0082D4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:48 CMP #$12
    case 0xC1820B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:48 CMP #$12
    // Overlapping static entry reached from 0xC1820B.
    case 0xC1820D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:49 BEQL @UNKNOWN48
    case 0xC1820E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:49 BEQL @UNKNOWN48
    case 0xC18210: {
        Instruction step(cpu, 0x4C, 0x0082DAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:50 CMP #$13
    case 0xC18213: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:50 CMP #$13
    // Overlapping static entry reached from 0xC18213.
    case 0xC18215: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:51 BEQL @UNKNOWN49
    case 0xC18216: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:51 BEQL @UNKNOWN49
    case 0xC18218: {
        Instruction step(cpu, 0x4C, 0x0082E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:52 CMP #$14
    case 0xC1821B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:52 CMP #$14
    // Overlapping static entry reached from 0xC1821B.
    case 0xC1821D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:53 BEQL @UNKNOWN50
    case 0xC1821E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:53 BEQL @UNKNOWN50
    case 0xC18220: {
        Instruction step(cpu, 0x4C, 0x0082E6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:54 CMP #$15
    case 0xC18223: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:54 CMP #$15
    // Overlapping static entry reached from 0xC18223.
    case 0xC18225: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:55 BEQL @UNKNOWN51
    case 0xC18226: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:55 BEQL @UNKNOWN51
    case 0xC18228: {
        Instruction step(cpu, 0x4C, 0x0082ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:56 CMP #$17
    case 0xC1822B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:56 CMP #$17
    // Overlapping static entry reached from 0xC1822B.
    case 0xC1822D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:57 BEQL @UNKNOWN52
    case 0xC1822E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:57 BEQL @UNKNOWN52
    case 0xC18230: {
        Instruction step(cpu, 0x4C, 0x0082F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:58 CMP #$18
    case 0xC18233: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:58 CMP #$18
    // Overlapping static entry reached from 0xC18233.
    case 0xC18235: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:59 BEQL @UNKNOWN53
    case 0xC18236: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:59 BEQL @UNKNOWN53
    case 0xC18238: {
        Instruction step(cpu, 0x4C, 0x0082F8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:60 CMP #$19
    case 0xC1823B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:60 CMP #$19
    // Overlapping static entry reached from 0xC1823B.
    case 0xC1823D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:61 BEQL @UNKNOWN54
    case 0xC1823E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:61 BEQL @UNKNOWN54
    case 0xC18240: {
        Instruction step(cpu, 0x4C, 0x0082FEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:62 CMP #$20
    case 0xC18243: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:62 CMP #$20
    // Overlapping static entry reached from 0xC18243.
    case 0xC18245: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:63 BEQL @UNKNOWN55
    case 0xC18246: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:63 BEQL @UNKNOWN55
    case 0xC18248: {
        Instruction step(cpu, 0x4C, 0x008304u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:64 CMP #$21
    case 0xC1824B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:64 CMP #$21
    // Overlapping static entry reached from 0xC1824B.
    case 0xC1824D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:65 BEQL @UNKNOWN58
    case 0xC1824E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:65 BEQL @UNKNOWN58
    case 0xC18250: {
        Instruction step(cpu, 0x4C, 0x008339u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:66 CMP #$22
    case 0xC18253: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:66 CMP #$22
    // Overlapping static entry reached from 0xC18253.
    case 0xC18255: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:67 BEQL @UNKNOWN59
    case 0xC18256: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:67 BEQL @UNKNOWN59
    case 0xC18258: {
        Instruction step(cpu, 0x4C, 0x00833Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:68 CMP #$23
    case 0xC1825B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:68 CMP #$23
    // Overlapping static entry reached from 0xC1825B.
    case 0xC1825D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:69 BEQL @UNKNOWN62
    case 0xC1825E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:69 BEQL @UNKNOWN62
    case 0xC18260: {
        Instruction step(cpu, 0x4C, 0x008372u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:70 CMP #$24
    case 0xC18263: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:70 CMP #$24
    // Overlapping static entry reached from 0xC18263.
    case 0xC18265: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:71 BEQL @UNKNOWN63
    case 0xC18266: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:71 BEQL @UNKNOWN63
    case 0xC18268: {
        Instruction step(cpu, 0x4C, 0x008377u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:72 JMP @UNKNOWN64
    case 0xC1826B: {
        Instruction step(cpu, 0x4C, 0x00837Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:74 LDA #.LOWORD(CC_1D_00)
    case 0xC1826E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00501Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:74 LDA #.LOWORD(CC_1D_00)
    // Overlapping static entry reached from 0xC1826E.
    case 0xC18270: {
        Instruction step(cpu, 0x50, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:75 JMP @UNKNOWN65
    case 0xC18271: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:75 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18270.
    case 0xC18272: {
        Instruction step(cpu, 0x7F, 0x86A983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:77 LDA #.LOWORD(CC_1D_01)
    case 0xC18274: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x005086u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:77 LDA #.LOWORD(CC_1D_01)
    // Overlapping static entry reached from 0xC18274.
    case 0xC18276: {
        Instruction step(cpu, 0x50, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:78 JMP @UNKNOWN65
    case 0xC18277: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:78 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18276.
    case 0xC18278: {
        Instruction step(cpu, 0x7F, 0xACA983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:80 LDA #.LOWORD(CC_1D_02)
    case 0xC1827A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x004CACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:80 LDA #.LOWORD(CC_1D_02)
    // Overlapping static entry reached from 0xC1827A.
    case 0xC1827C: {
        Instruction step(cpu, 0x4C, 0x007F4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:81 JMP @UNKNOWN65
    case 0xC1827D: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:83 LDA #.LOWORD(CC_1D_03)
    case 0xC18280: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EEu : 0x0050EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:83 LDA #.LOWORD(CC_1D_03)
    // Overlapping static entry reached from 0xC18280.
    case 0xC18282: {
        Instruction step(cpu, 0x50, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:84 JMP @UNKNOWN65
    case 0xC18283: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:84 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18282.
    case 0xC18284: {
        Instruction step(cpu, 0x7F, 0x24A983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:86 LDA #.LOWORD(CC_1D_04)
    case 0xC18286: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x005124u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:86 LDA #.LOWORD(CC_1D_04)
    // Overlapping static entry reached from 0xC18286.
    case 0xC18288: {
        Instruction step(cpu, 0x51, 0x00004Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:87 JMP @UNKNOWN65
    case 0xC18289: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:87 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18288.
    case 0xC1828A: {
        Instruction step(cpu, 0x7F, 0x93A983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    case 0xC1828C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000093u : 0x005193u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    // Overlapping static entry reached from 0xC1828C.
    case 0xC1828E: {
        Instruction step(cpu, 0x51, 0x00004Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:90 JMP @UNKNOWN65
    case 0xC1828F: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:90 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1828E.
    case 0xC18290: {
        Instruction step(cpu, 0x7F, 0x04A983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    case 0xC18292: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x005F04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC18292.
    case 0xC18294: {
        Instruction step(cpu, 0x5F, 0x837F4Cu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:93 JMP @UNKNOWN65
    case 0xC18295: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:95 LDA #.LOWORD(CC_1D_07)
    case 0xC18298: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EAu : 0x005FEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:95 LDA #.LOWORD(CC_1D_07)
    // Overlapping static entry reached from 0xC18298.
    case 0xC1829A: {
        Instruction step(cpu, 0x5F, 0x837F4Cu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:96 JMP @UNKNOWN65
    case 0xC1829B: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    case 0xC1829E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E9u : 0x004CE9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    // Overlapping static entry reached from 0xC1829E.
    case 0xC182A0: {
        Instruction step(cpu, 0x4C, 0x007F4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:99 JMP @UNKNOWN65
    case 0xC182A1: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    case 0xC182A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x004D4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC182A4.
    case 0xC182A6: {
        Instruction step(cpu, 0x4D, 0x007F4Cu, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    case 0xC182A7: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182A6.
    case 0xC182A9: {
        Instruction step(cpu, 0x83, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    case 0xC182AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E3u : 0x0052E3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    // Overlapping static entry reached from 0xC182A9.
    case 0xC182AB: {
        Instruction step(cpu, 0xE3, 0x000052u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    // Overlapping static entry reached from 0xC182AA.
    case 0xC182AC: {
        Instruction step(cpu, 0x52, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:105 JMP @UNKNOWN65
    case 0xC182AD: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:105 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182AC.
    case 0xC182AE: {
        Instruction step(cpu, 0x7F, 0x1FA983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    case 0xC182B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00531Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    // Overlapping static entry reached from 0xC182B0.
    case 0xC182B2: {
        Instruction step(cpu, 0x53, 0x00004Cu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:108 JMP @UNKNOWN65
    case 0xC182B3: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:108 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182B2.
    case 0xC182B4: {
        Instruction step(cpu, 0x7F, 0xD7A983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:110 LDA #.LOWORD(CC_1D_0C)
    case 0xC182B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x0072D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:110 LDA #.LOWORD(CC_1D_0C)
    // Overlapping static entry reached from 0xC182B6.
    case 0xC182B8: {
        Instruction step(cpu, 0x72, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:111 JMP @UNKNOWN65
    case 0xC182B9: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:111 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182B8.
    case 0xC182BA: {
        Instruction step(cpu, 0x7F, 0xC0A983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    case 0xC182BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0054C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    // Overlapping static entry reached from 0xC182BC.
    case 0xC182BE: {
        Instruction step(cpu, 0x54, 0x007F4Cu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:114 JMP @UNKNOWN65
    case 0xC182BF: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:114 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182BE.
    case 0xC182C1: {
        Instruction step(cpu, 0x83, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    case 0xC182C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D4u : 0x0058D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC182C1.
    case 0xC182C3: {
        Instruction step(cpu, 0xD4, 0x000058u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC182C2.
    case 0xC182C4: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:117 JMP @UNKNOWN65
    case 0xC182C5: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    case 0xC182C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000056u : 0x005956u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC182C8.
    case 0xC182CA: {
        Instruction step(cpu, 0x59, 0x007F4Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:120 JMP @UNKNOWN65
    case 0xC182CB: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:120 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182CA.
    case 0xC182CD: {
        Instruction step(cpu, 0x83, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    case 0xC182CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D8u : 0x0059D8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC182CD.
    case 0xC182CF: {
        Instruction step(cpu, 0xD8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_decimal();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC182CE.
    case 0xC182D0: {
        Instruction step(cpu, 0x59, 0x007F4Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:123 JMP @UNKNOWN65
    case 0xC182D1: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:123 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182D0.
    case 0xC182D3: {
        Instruction step(cpu, 0x83, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    case 0xC182D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000048u : 0x005A48u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC182D3.
    case 0xC182D5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC182D4.
    case 0xC182D6: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:126 JMP @UNKNOWN65
    case 0xC182D7: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    case 0xC182DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x005B20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    // Overlapping static entry reached from 0xC182DA.
    case 0xC182DC: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:129 JMP @UNKNOWN65
    case 0xC182DD: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:131 LDA #.LOWORD(CC_1D_13)
    case 0xC182E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000079u : 0x005B79u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:131 LDA #.LOWORD(CC_1D_13)
    // Overlapping static entry reached from 0xC182E0.
    case 0xC182E2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:132 JMP @UNKNOWN65
    case 0xC182E3: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:134 LDA #.LOWORD(CC_1D_14)
    case 0xC182E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000074u : 0x005C74u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:134 LDA #.LOWORD(CC_1D_14)
    // Overlapping static entry reached from 0xC182E6.
    case 0xC182E8: {
        Instruction step(cpu, 0x5C, 0x837F4Cu, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:135 JMP @UNKNOWN65
    case 0xC182E9: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    case 0xC182EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000049u : 0x005E49u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC182EC.
    case 0xC182EE: {
        Instruction step(cpu, 0x5E, 0x007F4Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:138 JMP @UNKNOWN65
    case 0xC182EF: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:138 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182EE.
    case 0xC182F1: {
        Instruction step(cpu, 0x83, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    case 0xC182F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DBu : 0x0060DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    // Overlapping static entry reached from 0xC182F1.
    case 0xC182F3: {
        Instruction step(cpu, 0xDB, 0x000000u, 1u, AddressMode::Implied);
        step.stop();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    // Overlapping static entry reached from 0xC182F2.
    case 0xC182F4: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:141 JMP @UNKNOWN65
    case 0xC182F5: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    case 0xC182F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A3u : 0x0063A3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    // Overlapping static entry reached from 0xC182F8.
    case 0xC182FA: {
        Instruction step(cpu, 0x63, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:144 JMP @UNKNOWN65
    case 0xC182FB: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:144 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC182FA.
    case 0xC182FC: {
        Instruction step(cpu, 0x7F, 0xF1A983u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    case 0xC182FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F1u : 0x0063F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    // Overlapping static entry reached from 0xC182FE.
    case 0xC18300: {
        Instruction step(cpu, 0x63, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:147 JMP @UNKNOWN65
    case 0xC18301: {
        Instruction step(cpu, 0x4C, 0x00837Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:147 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18300.
    case 0xC18302: {
        Instruction step(cpu, 0x7F, 0x00A083u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:149 LDY #0
    case 0xC18304: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:149 LDY #0
    // Overlapping static entry reached from 0xC18304.
    case 0xC18306: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:150 STY @LOCAL02
    case 0xC18307: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:151 JSR RETURN_BATTLE_TARGET_ADDRESS
    case 0xC18309: {
        Instruction step(cpu, 0x20, 0x00ABAEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:152 STA @LOCAL01
    case 0xC1830C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:153 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC1830E: {
        Instruction step(cpu, 0x20, 0x00AB5Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:154 TAX
    case 0xC18311: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:155 LDA @LOCAL01
    case 0xC18312: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:156 JSR UNKNOWN_C14070
    case 0xC18314: {
        Instruction step(cpu, 0x20, 0x0044B2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:157 CMP #0
    case 0xC18317: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:157 CMP #0
    // Overlapping static entry reached from 0xC18317.
    case 0xC18319: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:158 BNE @UNKNOWN56
    case 0xC1831A: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:159 LDY #1
    case 0xC1831C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:159 LDY #1
    // Overlapping static entry reached from 0xC1831C.
    case 0xC1831E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:160 STY @LOCAL02
    case 0xC1831F: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:162 LDY @LOCAL02
    case 0xC18321: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:163 TYA
    case 0xC18323: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC18324: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC18326: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC18328: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC1832A: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1832C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1832E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18330: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18332: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:166 JSR SET_WORKING_MEMORY
    case 0xC18334: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:167 BRA @UNKNOWN64
    case 0xC18337: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:169 LDA #.LOWORD(CC_1D_21)
    case 0xC18339: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Fu : 0x00646Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:169 LDA #.LOWORD(CC_1D_21)
    // Overlapping static entry reached from 0xC18339.
    case 0xC1833B: {
        Instruction step(cpu, 0x64, 0x000080u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:170 BRA @UNKNOWN65
    case 0xC1833C: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:170 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC1833B.
    case 0xC1833D: {
        Instruction step(cpu, 0x41, 0x0000A0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:172 LDY #0
    case 0xC1833E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:172 LDY #0
    // Overlapping static entry reached from 0xC1833D.
    case 0xC1833F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:172 LDY #0
    // Overlapping static entry reached from 0xC1833E.
    case 0xC18340: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:173 STY @LOCAL02
    case 0xC18341: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:174 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC18343: {
        Instruction step(cpu, 0xAE, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:175 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC18346: {
        Instruction step(cpu, 0xAD, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:176 JSL LOAD_SECTOR_ATTRS
    case 0xC18349: {
        Instruction step(cpu, 0x22, 0xC00AB3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:177 AND #$0007
    case 0xC1834D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:177 AND #$0007
    // Overlapping static entry reached from 0xC1834D.
    case 0xC1834F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:178 CMP #2
    case 0xC18350: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:178 CMP #2
    // Overlapping static entry reached from 0xC18350.
    case 0xC18352: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:179 BNE @UNKNOWN60
    case 0xC18353: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:180 LDY #1
    case 0xC18355: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:180 LDY #1
    // Overlapping static entry reached from 0xC18355.
    case 0xC18357: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:181 STY @LOCAL02
    case 0xC18358: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:183 LDY @LOCAL02
    case 0xC1835A: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:184 TYA
    case 0xC1835C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC1835D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC1835F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC18361: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC18363: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18365: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18367: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18369: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1836B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:187 JSR SET_WORKING_MEMORY
    case 0xC1836D: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:188 BRA @UNKNOWN64
    case 0xC18370: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:190 LDA #.LOWORD(CC_1D_23)
    case 0xC18372: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000088u : 0x007988u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:190 LDA #.LOWORD(CC_1D_23)
    // Overlapping static entry reached from 0xC18372.
    case 0xC18374: {
        Instruction step(cpu, 0x79, 0x000880u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:191 BRA @UNKNOWN65
    case 0xC18375: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:193 LDA #.LOWORD(CC_1D_24)
    case 0xC18377: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F4u : 0x0074F4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:193 LDA #.LOWORD(CC_1D_24)
    // Overlapping static entry reached from 0xC18377.
    case 0xC18379: {
        Instruction step(cpu, 0x74, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:194 BRA @UNKNOWN65
    case 0xC1837A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:194 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC18379.
    case 0xC1837B: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    case 0xC1837C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    // Overlapping static entry reached from 0xC1837B.
    case 0xC1837D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    // Overlapping static entry reached from 0xC1837C.
    case 0xC1837E: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1D.asm:198 END_C_FUNCTION
    case 0xC1837F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1D.asm:198 END_C_FUNCTION
    case 0xC18380: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
