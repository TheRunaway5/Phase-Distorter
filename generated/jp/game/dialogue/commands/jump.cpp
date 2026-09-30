// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/jump.asm
bool resume_text_ccs_jump(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump.asm:3 BEGIN_C_FUNCTION
    case 0xC14525: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14527: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14528: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14529: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC1452A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1452A.
    case 0xC1452C: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC1452D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC1452E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:10 TAY
    case 0xC1452F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/jump.asm:11 STY @LOCAL00
    case 0xC14530: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/jump.asm:12 LDA #3
    case 0xC14532: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:12 LDA #3
    // Overlapping static entry reached from 0xC14532.
    case 0xC14534: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/jump.asm:13 CLC
    case 0xC14535: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/jump.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14536: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14539: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1453B: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1453D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1453F: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/jump.asm:16 TXA
    case 0xC14541: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14542: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14544: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/jump.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14547: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1454A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1454C: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/jump.asm:22 LDA #.LOWORD(CC_0A)
    case 0xC1454F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x004525u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:22 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC1454F.
    case 0xC14551: {
        Instruction step(cpu, 0x45, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:23 JMP @UNKNOWN3
    case 0xC14552: {
        Instruction step(cpu, 0x4C, 0x0045F0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/jump.asm:23 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC14551.
    case 0xC14553: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/jump.asm:25 TXA
    case 0xC14555: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump.asm:26 STORE_INT1632 @VIRTUAL06
    case 0xC14556: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:26 STORE_INT1632 @VIRTUAL06
    case 0xC14558: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC1455A: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump.asm:28 LDY #24
    case 0xC1455C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x002218u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    case 0xC1455E: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC1455C.
    case 0xC1455F: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC1455F.
    case 0xC14560: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14562: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14564: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14565: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14567: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:31 LDY #16
    case 0xC14568: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x00E210u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/jump.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC1456A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14568.
    case 0xC1456B: {
        Instruction step(cpu, 0x20, 0x0070ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1456C: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC1456B.
    case 0xC1456E: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1456F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14571: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14573: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14575: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC14577: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump.asm:35 JSL ASL32_ENTRY2
    case 0xC14579: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC1457D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC1457F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC14580: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC14582: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:37 LDY #8
    case 0xC14583: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/jump.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC14585: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14583.
    case 0xC14586: {
        Instruction step(cpu, 0x20, 0x006FADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14587: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC14586.
    case 0xC14589: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1458A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1458C: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1458E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14590: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC14592: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump.asm:41 JSL ASL32_ENTRY2
    case 0xC14594: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14598: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1459A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1459C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1459E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC145A0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145A2: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145A5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145A7: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145A9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145AB: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC145AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145AF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B1: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B7: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC145BB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC145BC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC145BE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC145BF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C3: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C9: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145CB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC145CD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC145CE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC145D0: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC145D1: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145D3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145D5: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145D7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145D9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145DB: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145DD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:51 REP #PROC_FLAGS::INDEX8
    case 0xC145DF: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump.asm:52 LDY @LOCAL00
    case 0xC145E1: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC145E3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC145E5: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC145E8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC145EA: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:54 LDA #NULL
    case 0xC145ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC145ED.
    case 0xC145EF: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump.asm:56 END_C_FUNCTION
    case 0xC145F0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump.asm:56 END_C_FUNCTION
    case 0xC145F1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
