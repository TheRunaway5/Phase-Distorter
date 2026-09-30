// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/freeze_time.asm
bool resume_battle_actions_freeze_time(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/freeze_time.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC288EB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/freeze_time.asm:9 END_STACK_VARS
    case 0xC288ED: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/freeze_time.asm:9 END_STACK_VARS
    case 0xC288EE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/freeze_time.asm:9 END_STACK_VARS
    case 0xC288EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/freeze_time.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC288EF.
    case 0xC288F1: {
        Instruction step(cpu, 0xFF, 0x56225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/freeze_time.asm:9 END_STACK_VARS
    case 0xC288F2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:17 JSL PAUSE_MUSIC
    case 0xC288F3: {
        Instruction step(cpu, 0x22, 0xEF0256u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:17 JSL PAUSE_MUSIC
    // Overlapping static entry reached from 0xC288F1.
    case 0xC288F5: {
        Instruction step(cpu, 0x02, 0x0000EFu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:18 LDA #4
    case 0xC288F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:18 LDA #4
    // Overlapping static entry reached from 0xC288F7.
    case 0xC288F9: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:19 JSR RAND_LIMIT
    case 0xC288FA: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:20 STA @VIRTUAL02
    case 0xC288FD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:21 INC @VIRTUAL02
    case 0xC288FF: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/freeze_time.asm:22 MOVE_INT BATTLER_TARGET_FLAGS, @TMPREGISTER
    case 0xC28901: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:22 MOVE_INT BATTLER_TARGET_FLAGS, @TMPREGISTER
    case 0xC28904: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/freeze_time.asm:22 MOVE_INT BATTLER_TARGET_FLAGS, @TMPREGISTER
    case 0xC28906: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:22 MOVE_INT BATTLER_TARGET_FLAGS, @TMPREGISTER
    case 0xC28909: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/freeze_time.asm:23 MOVE_INT @TMPREGISTER, @LOCAL03
    case 0xC2890B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:23 MOVE_INT @TMPREGISTER, @LOCAL03
    case 0xC2890D: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/freeze_time.asm:23 MOVE_INT @TMPREGISTER, @LOCAL03
    case 0xC2890F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:23 MOVE_INT @TMPREGISTER, @LOCAL03
    case 0xC28911: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:24 LDY #0
    case 0xC28913: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:24 LDY #0
    // Overlapping static entry reached from 0xC28913.
    case 0xC28915: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:25 STY @LOCAL02
    case 0xC28916: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:26 JMP @UNKNOWN5
    case 0xC28918: {
        Instruction step(cpu, 0x4C, 0x0089A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:28 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC2891B: {
        Instruction step(cpu, 0x22, 0xC2416Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/freeze_time.asm:29 MOVE_INT_CONSTANT NULL, @TMPREGISTER
    case 0xC2891F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/freeze_time.asm:29 MOVE_INT_CONSTANT NULL, @TMPREGISTER
    // Overlapping static entry reached from 0xC2891F.
    case 0xC28921: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:29 MOVE_INT_CONSTANT NULL, @TMPREGISTER
    case 0xC28922: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/freeze_time.asm:29 MOVE_INT_CONSTANT NULL, @TMPREGISTER
    case 0xC28924: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/freeze_time.asm:29 MOVE_INT_CONSTANT NULL, @TMPREGISTER
    // Overlapping static entry reached from 0xC28924.
    case 0xC28926: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:29 MOVE_INT_CONSTANT NULL, @TMPREGISTER
    case 0xC28927: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/freeze_time.asm:30 MOVE_INT BATTLER_TARGET_FLAGS, @FLAGSREGISTER
    case 0xC28929: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:30 MOVE_INT BATTLER_TARGET_FLAGS, @FLAGSREGISTER
    case 0xC2892C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/freeze_time.asm:30 MOVE_INT BATTLER_TARGET_FLAGS, @FLAGSREGISTER
    case 0xC2892E: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:30 MOVE_INT BATTLER_TARGET_FLAGS, @FLAGSREGISTER
    case 0xC28931: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:31 CMP @TMPREGISTER+2
    case 0xC28933: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:32 BNE @UNKNOWN1
    case 0xC28935: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:33 LDA @FLAGSREGISTER
    case 0xC28937: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:34 CMP @TMPREGISTER
    case 0xC28939: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:36 BEQ @UNKNOWN6
    case 0xC2893B: {
        Instruction step(cpu, 0xF0, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/freeze_time.asm:37 MOVE_INT @LOCAL03, @TMPREGISTER
    case 0xC2893D: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:37 MOVE_INT @LOCAL03, @TMPREGISTER
    case 0xC2893F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/freeze_time.asm:37 MOVE_INT @LOCAL03, @TMPREGISTER
    case 0xC28941: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:37 MOVE_INT @LOCAL03, @TMPREGISTER
    case 0xC28943: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/freeze_time.asm:38 MOVE_INT @TMPREGISTER, @LOCAL00
    case 0xC28945: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:38 MOVE_INT @TMPREGISTER, @LOCAL00
    case 0xC28947: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/freeze_time.asm:38 MOVE_INT @TMPREGISTER, @LOCAL00
    case 0xC28949: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:38 MOVE_INT @TMPREGISTER, @LOCAL00
    case 0xC2894B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:39 JSL RANDOM_TARGETTING
    case 0xC2894D: {
        Instruction step(cpu, 0x22, 0xC26EF8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/freeze_time.asm:41 MOVE_INT @VIRTUAL06, @FLAGSREGISTER
    case 0xC28951: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:41 MOVE_INT @VIRTUAL06, @FLAGSREGISTER
    case 0xC28953: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/freeze_time.asm:41 MOVE_INT @VIRTUAL06, @FLAGSREGISTER
    case 0xC28955: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:41 MOVE_INT @VIRTUAL06, @FLAGSREGISTER
    case 0xC28957: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/freeze_time.asm:42 MOVE_INT @FLAGSREGISTER, @VIRTUAL06
    case 0xC28959: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:42 MOVE_INT @FLAGSREGISTER, @VIRTUAL06
    case 0xC2895B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/freeze_time.asm:42 MOVE_INT @FLAGSREGISTER, @VIRTUAL06
    case 0xC2895D: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:42 MOVE_INT @FLAGSREGISTER, @VIRTUAL06
    case 0xC2895F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/freeze_time.asm:44 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC28961: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:44 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC28963: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/freeze_time.asm:44 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC28966: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:44 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC28968: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:45 LDX #0
    case 0xC2896B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:45 LDX #0
    // Overlapping static entry reached from 0xC2896B.
    case 0xC2896D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:46 STX @LOCAL01
    case 0xC2896E: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:47 BRA @UNKNOWN3
    case 0xC28970: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:49 TXA
    case 0xC28972: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:50 JSL IS_CHAR_TARGETTED
    case 0xC28973: {
        Instruction step(cpu, 0x22, 0xC27029u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:51 CMP #0
    case 0xC28977: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:51 CMP #0
    // Overlapping static entry reached from 0xC28977.
    case 0xC28979: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:52 BNE @UNKNOWN4
    case 0xC2897A: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:53 LDX @LOCAL01
    case 0xC2897C: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:54 INX
    case 0xC2897E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:55 STX @LOCAL01
    case 0xC2897F: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:57 CPX #BATTLER_COUNT
    case 0xC28981: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:57 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC28981.
    case 0xC28983: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:58 BCC @UNKNOWN2
    case 0xC28984: {
        Instruction step(cpu, 0x90, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:60 LDX @LOCAL01
    case 0xC28986: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:61 TXA
    case 0xC28988: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:62 LDY #.SIZEOF(battler)
    case 0xC28989: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:62 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC28989.
    case 0xC2898B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:63 JSL MULT168
    case 0xC2898C: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:64 CLC
    case 0xC28990: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:65 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC28991: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:65 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC28991.
    case 0xC28993: {
        Instruction step(cpu, 0x9F, 0xA9728Du, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:66 STA CURRENT_TARGET
    case 0xC28994: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:67 JSL FIX_TARGET_NAME
    case 0xC28997: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:68 JSL BTLACT_BASH
    case 0xC2899B: {
        Instruction step(cpu, 0x22, 0xC2859Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:68 JSL BTLACT_BASH
    // Overlapping static entry reached from 0xC23CBC.
    case 0xC2899C: {
        Instruction step(cpu, 0x9F, 0xA4C285u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:69 LDY @LOCAL02
    case 0xC2899F: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:69 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2899C.
    case 0xC289A0: {
        Instruction step(cpu, 0x14, 0x0000C8u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:70 INY
    case 0xC289A1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:71 STY @LOCAL02
    case 0xC289A2: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:73 TYA
    case 0xC289A4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:74 CMP @VIRTUAL02
    case 0xC289A5: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/actions/freeze_time.asm:75 BCCL @UNKNOWN0
    case 0xC289A7: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/actions/freeze_time.asm:75 BCCL @UNKNOWN0
    case 0xC289A9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/actions/freeze_time.asm:75 BCCL @UNKNOWN0
    case 0xC289AB: {
        Instruction step(cpu, 0x4C, 0x00891Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/freeze_time.asm:77 JSL RESUME_MUSIC
    case 0xC289AE: {
        Instruction step(cpu, 0x22, 0xEF026Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/freeze_time.asm:78 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TIMESTOP_RET
    case 0xC289B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000043u : 0x007843u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/freeze_time.asm:78 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TIMESTOP_RET
    // Overlapping static entry reached from 0xC289B2.
    case 0xC289B4: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/freeze_time.asm:78 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TIMESTOP_RET
    case 0xC289B5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/freeze_time.asm:78 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TIMESTOP_RET
    case 0xC289B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/freeze_time.asm:78 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TIMESTOP_RET
    // Overlapping static entry reached from 0xC289B7.
    case 0xC289B9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/freeze_time.asm:78 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TIMESTOP_RET
    case 0xC289BA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/freeze_time.asm:78 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TIMESTOP_RET
    case 0xC289BC: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/freeze_time.asm:79 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC289C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/freeze_time.asm:79 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC289C0.
    case 0xC289C2: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/actions/freeze_time.asm:79 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC289C3: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/freeze_time.asm:79 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC289C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/freeze_time.asm:79 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC289C6.
    case 0xC289C8: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/actions/freeze_time.asm:79 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC289C9: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/freeze_time.asm:80 END_C_FUNCTION
    case 0xC289CC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/freeze_time.asm:80 END_C_FUNCTION
    case 0xC289CD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
