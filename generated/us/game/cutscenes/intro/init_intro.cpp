// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/init_intro.asm
bool resume_introduction_init_intro(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/init_intro.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4DAD2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4DAD4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4DAD5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4DAD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DAD6.
    case 0xC4DAD8: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4DAD9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/init_intro.asm:16 LDA #0
    case 0xC4DADA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:16 LDA #0
    // Overlapping static entry reached from 0xC4DADA.
    case 0xC4DADC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:17 STA @VIRTUAL02
    case 0xC4DADD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:19 LDA #1
    case 0xC4DADF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:19 LDA #1
    // Overlapping static entry reached from 0xC4DADF.
    case 0xC4DAE1: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:20 STA DISABLED_TRANSITIONS
    case 0xC4DAE2: {
        Instruction step(cpu, 0x8D, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:21 LDA #2
    case 0xC4DAE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:21 LDA #2
    // Overlapping static entry reached from 0xC4DAE5.
    case 0xC4DAE7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:22 JSL UNKNOWN_C0AC0C
    case 0xC4DAE8: {
        Instruction step(cpu, 0x22, 0xC0AC0Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:23 JSL UNKNOWN_C0927C
    case 0xC4DAEC: {
        Instruction step(cpu, 0x22, 0xC0927Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:24 JSL UNKNOWN_C200D9
    case 0xC4DAF0: {
        Instruction step(cpu, 0x22, 0xC200D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:25 JSL UNKNOWN_C432B1
    case 0xC4DAF4: {
        Instruction step(cpu, 0x22, 0xC432B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:26 LDA #1
    case 0xC4DAF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:26 LDA #1
    // Overlapping static entry reached from 0xC4DAF8.
    case 0xC4DAFA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:27 STA DISABLE_MUSIC_CHANGES
    case 0xC4DAFB: {
        Instruction step(cpu, 0x8D, 0x005DD8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:29 STZ BG3_X_POS
    case 0xC4DAFE: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:30 STZ BG3_Y_POS
    case 0xC4DB01: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:31 STZ BG2_Y_POS
    case 0xC4DB04: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:32 STZ BG2_X_POS
    case 0xC4DB07: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:33 STZ BG1_Y_POS
    case 0xC4DB0A: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:34 STZ BG1_X_POS
    case 0xC4DB0D: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:35 JSL UPDATE_SCREEN
    case 0xC4DB10: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:36 STZ BG3_X_POS
    case 0xC4DB14: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:37 STZ BG3_Y_POS
    case 0xC4DB17: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:38 STZ BG2_Y_POS
    case 0xC4DB1A: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:39 STZ BG2_X_POS
    case 0xC4DB1D: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:40 STZ BG1_Y_POS
    case 0xC4DB20: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:41 STZ BG1_X_POS
    case 0xC4DB23: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:42 JSL UPDATE_SCREEN
    case 0xC4DB26: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:49 LDA @VIRTUAL02
    case 0xC4DB2A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:51 BEQ @UNKNOWN11
    case 0xC4DB2C: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:52 CMP #1
    case 0xC4DB2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:52 CMP #1
    // Overlapping static entry reached from 0xC4DB2E.
    case 0xC4DB30: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:53 _BEQL @UNKNOWN14
    case 0xC4DB31: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:53 _BEQL @UNKNOWN14
    case 0xC4DB33: {
        Instruction step(cpu, 0x4C, 0x00DBCAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:54 CMP #2
    case 0xC4DB36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:54 CMP #2
    // Overlapping static entry reached from 0xC4DB36.
    case 0xC4DB38: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:55 _BEQL @UNKNOWN17
    case 0xC4DB39: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:55 _BEQL @UNKNOWN17
    case 0xC4DB3B: {
        Instruction step(cpu, 0x4C, 0x00DC2Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:56 CMP #3
    case 0xC4DB3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:56 CMP #3
    // Overlapping static entry reached from 0xC4DB3E.
    case 0xC4DB40: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:57 _BEQL @UNKNOWN18
    case 0xC4DB41: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:57 _BEQL @UNKNOWN18
    case 0xC4DB43: {
        Instruction step(cpu, 0x4C, 0x00DC40u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:58 CMP #4
    case 0xC4DB46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:58 CMP #4
    // Overlapping static entry reached from 0xC4DB46.
    case 0xC4DB48: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:59 _BEQL @UNKNOWN19
    case 0xC4DB49: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:59 _BEQL @UNKNOWN19
    case 0xC4DB4B: {
        Instruction step(cpu, 0x4C, 0x00DC53u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:60 CMP #5
    case 0xC4DB4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:60 CMP #5
    // Overlapping static entry reached from 0xC4DB4E.
    case 0xC4DB50: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:61 _BEQL @UNKNOWN20
    case 0xC4DB51: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:61 _BEQL @UNKNOWN20
    case 0xC4DB53: {
        Instruction step(cpu, 0x4C, 0x00DC5Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:62 CMP #6
    case 0xC4DB56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:62 CMP #6
    // Overlapping static entry reached from 0xC4DB56.
    case 0xC4DB58: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:63 BEQL @UNKNOWN21
    case 0xC4DB59: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:63 BEQL @UNKNOWN21
    case 0xC4DB5B: {
        Instruction step(cpu, 0x4C, 0x00DC6Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:64 CMP #7
    case 0xC4DB5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:64 CMP #7
    // Overlapping static entry reached from 0xC4DB5E.
    case 0xC4DB60: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:65 BEQL @UNKNOWN22
    case 0xC4DB61: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:65 BEQL @UNKNOWN22
    case 0xC4DB63: {
        Instruction step(cpu, 0x4C, 0x00DC77u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:66 CMP #8
    case 0xC4DB66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:66 CMP #8
    // Overlapping static entry reached from 0xC4DB66.
    case 0xC4DB68: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:67 BEQL @UNKNOWN23
    case 0xC4DB69: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:67 BEQL @UNKNOWN23
    case 0xC4DB6B: {
        Instruction step(cpu, 0x4C, 0x00DC83u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:68 CMP #9
    case 0xC4DB6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:68 CMP #9
    // Overlapping static entry reached from 0xC4DB6E.
    case 0xC4DB70: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:69 BEQL @UNKNOWN24
    case 0xC4DB71: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:69 BEQL @UNKNOWN24
    case 0xC4DB73: {
        Instruction step(cpu, 0x4C, 0x00DC8Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:70 CMP #10
    case 0xC4DB76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:70 CMP #10
    // Overlapping static entry reached from 0xC4DB76.
    case 0xC4DB78: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:71 BEQL @UNKNOWN25
    case 0xC4DB79: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:71 BEQL @UNKNOWN25
    case 0xC4DB7B: {
        Instruction step(cpu, 0x4C, 0x00DC9Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:72 JMP @UNKNOWN26
    case 0xC4DB7E: {
        Instruction step(cpu, 0x4C, 0x00DCA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:74 JSL LOGO_SCREEN
    case 0xC4DB81: {
        Instruction step(cpu, 0x22, 0xC0F009u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:76 CMP #0
    case 0xC4DB85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:76 CMP #0
    // Overlapping static entry reached from 0xC4DB85.
    case 0xC4DB87: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:77 BEQ @UNKNOWN13
    case 0xC4DB88: {
        Instruction step(cpu, 0xF0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:78 LDA #2
    case 0xC4DB8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:78 LDA #2
    // Overlapping static entry reached from 0xC4DB8A.
    case 0xC4DB8C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:79 JSL UNKNOWN_C0AC0C
    case 0xC4DB8D: {
        Instruction step(cpu, 0x22, 0xC0AC0Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:80 LDA INIDISP_MIRROR
    case 0xC4DB91: {
        Instruction step(cpu, 0xAD, 0x00000Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:81 AND #$00FF
    case 0xC4DB94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC4DB94.
    case 0xC4DB96: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:82 CMP #$80
    case 0xC4DB97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:82 CMP #$80
    // Overlapping static entry reached from 0xC4DB97.
    case 0xC4DB99: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:83 BEQ @UNKNOWN12
    case 0xC4DB9A: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:84 LDY #0
    case 0xC4DB9C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:84 LDY #0
    // Overlapping static entry reached from 0xC4DB9C.
    case 0xC4DB9E: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:85 LDX #1
    case 0xC4DB9F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:85 LDX #1
    // Overlapping static entry reached from 0xC4DB9F.
    case 0xC4DBA1: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:86 LDA #4
    case 0xC4DBA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:86 LDA #4
    // Overlapping static entry reached from 0xC4DBA2.
    case 0xC4DBA4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:87 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4DBA5: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:89 LDA #MUSIC::TITLE_SCREEN
    case 0xC4DBA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x0000AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:89 LDA #MUSIC::TITLE_SCREEN
    // Overlapping static entry reached from 0xC4DBA9.
    case 0xC4DBAB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:90 JSL CHANGE_MUSIC
    case 0xC4DBAC: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:91 LDA #1
    case 0xC4DBB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:91 LDA #1
    // Overlapping static entry reached from 0xC4DBB0.
    case 0xC4DBB2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:92 JSL SHOW_TITLE_SCREEN
    case 0xC4DBB3: {
        Instruction step(cpu, 0x22, 0xC3F3C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:93 TAX
    case 0xC4DBB7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:94 STX @LOCAL00
    case 0xC4DBB8: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:95 LDA #2
    case 0xC4DBBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:95 LDA #2
    // Overlapping static entry reached from 0xC4DBBA.
    case 0xC4DBBC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:96 STA @VIRTUAL02
    case 0xC4DBBD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:97 JMP @UNKNOWN27
    case 0xC4DBBF: {
        Instruction step(cpu, 0x4C, 0x00DCACu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:99 LDX #0
    case 0xC4DBC2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:99 LDX #0
    // Overlapping static entry reached from 0xC4DBC2.
    case 0xC4DBC4: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:103 STX @LOCAL00
    case 0xC4DBC5: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:104 JMP @UNKNOWN27
    case 0xC4DBC7: {
        Instruction step(cpu, 0x4C, 0x00DCACu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:106 LDA #MUSIC::GAS_STATION
    case 0xC4DBCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:106 LDA #MUSIC::GAS_STATION
    // Overlapping static entry reached from 0xC4DBCA.
    case 0xC4DBCC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:107 JSL CHANGE_MUSIC
    case 0xC4DBCD: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:108 JSL GAS_STATION
    case 0xC4DBD1: {
        Instruction step(cpu, 0x22, 0xC0F33Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:110 CMP #0
    case 0xC4DBD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:110 CMP #0
    // Overlapping static entry reached from 0xC4DBD5.
    case 0xC4DBD7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:111 BEQ @UNKNOWN16
    case 0xC4DBD8: {
        Instruction step(cpu, 0xF0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:112 LDA #2
    case 0xC4DBDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:112 LDA #2
    // Overlapping static entry reached from 0xC4DBDA.
    case 0xC4DBDC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:113 JSL UNKNOWN_C0AC0C
    case 0xC4DBDD: {
        Instruction step(cpu, 0x22, 0xC0AC0Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:114 LDA INIDISP_MIRROR
    case 0xC4DBE1: {
        Instruction step(cpu, 0xAD, 0x00000Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:115 AND #$00FF
    case 0xC4DBE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC4DBE4.
    case 0xC4DBE6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:116 CMP #$80
    case 0xC4DBE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:116 CMP #$80
    // Overlapping static entry reached from 0xC4DBE7.
    case 0xC4DBE9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:117 BEQ @UNKNOWN15
    case 0xC4DBEA: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:118 LDY #0
    case 0xC4DBEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:118 LDY #0
    // Overlapping static entry reached from 0xC4DBEC.
    case 0xC4DBEE: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:119 LDX #1
    case 0xC4DBEF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:119 LDX #1
    // Overlapping static entry reached from 0xC4DBEF.
    case 0xC4DBF1: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:120 LDA #4
    case 0xC4DBF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:120 LDA #4
    // Overlapping static entry reached from 0xC4DBF2.
    case 0xC4DBF4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:121 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4DBF5: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:123 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DBF9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/init_intro.asm:124 LDA #0
    case 0xC4DBFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008F00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:125 STA f:CGADSUB
    case 0xC4DBFD: {
        Instruction step(cpu, 0x8F, 0x002131u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:125 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4DBFB.
    case 0xC4DBFE: {
        Instruction step(cpu, 0x31, 0x000021u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:125 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4DBFE.
    case 0xC4DC00: {
        Instruction step(cpu, 0x00, 0x00008Fu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:126 STA f:CGWSEL
    case 0xC4DC01: {
        Instruction step(cpu, 0x8F, 0x002130u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:127 LDA #1
    case 0xC4DC05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:128 STA TM_MIRROR
    case 0xC4DC07: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:128 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DC05.
    case 0xC4DC08: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/init_intro.asm:128 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DC08.
    case 0xC4DC09: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:129 STZ TD_MIRROR
    case 0xC4DC0A: {
        Instruction step(cpu, 0x9C, 0x00001Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:130 REP #PROC_FLAGS::ACCUM8
    case 0xC4DC0D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/init_intro.asm:131 LDA #MUSIC::TITLE_SCREEN
    case 0xC4DC0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x0000AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:131 LDA #MUSIC::TITLE_SCREEN
    // Overlapping static entry reached from 0xC4DC0F.
    case 0xC4DC11: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:132 JSL CHANGE_MUSIC
    case 0xC4DC12: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:133 LDA #1
    case 0xC4DC16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:133 LDA #1
    // Overlapping static entry reached from 0xC4DC16.
    case 0xC4DC18: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:134 JSL SHOW_TITLE_SCREEN
    case 0xC4DC19: {
        Instruction step(cpu, 0x22, 0xC3F3C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:135 TAX
    case 0xC4DC1D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:136 STX @LOCAL00
    case 0xC4DC1E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:137 INC @VIRTUAL02
    case 0xC4DC20: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/intro/init_intro.asm:138 JMP @UNKNOWN27
    case 0xC4DC22: {
        Instruction step(cpu, 0x4C, 0x00DCACu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:140 LDX #0
    case 0xC4DC25: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:140 LDX #0
    // Overlapping static entry reached from 0xC4DC25.
    case 0xC4DC27: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:144 STX @LOCAL00
    case 0xC4DC28: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:145 JMP @UNKNOWN27
    case 0xC4DC2A: {
        Instruction step(cpu, 0x4C, 0x00DCACu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:147 LDA #MUSIC::TITLE_SCREEN
    case 0xC4DC2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x0000AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:147 LDA #MUSIC::TITLE_SCREEN
    // Overlapping static entry reached from 0xC4DC2D.
    case 0xC4DC2F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:148 JSL CHANGE_MUSIC
    case 0xC4DC30: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:149 LDA #0
    case 0xC4DC34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:149 LDA #0
    // Overlapping static entry reached from 0xC4DC34.
    case 0xC4DC36: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:150 JSL SHOW_TITLE_SCREEN
    case 0xC4DC37: {
        Instruction step(cpu, 0x22, 0xC3F3C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:151 TAX
    case 0xC4DC3B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:152 STX @LOCAL00
    case 0xC4DC3C: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:153 BRA @UNKNOWN27
    case 0xC4DC3E: {
        Instruction step(cpu, 0x80, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:155 LDA #MUSIC::ATTRACT_MODE
    case 0xC4DC40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Du : 0x00009Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:155 LDA #MUSIC::ATTRACT_MODE
    // Overlapping static entry reached from 0xC4DC40.
    case 0xC4DC42: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:156 JSL CHANGE_MUSIC
    case 0xC4DC43: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:157 LDA #0
    case 0xC4DC47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:157 LDA #0
    // Overlapping static entry reached from 0xC4DC47.
    case 0xC4DC49: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:158 JSL UNKNOWN_C4D989
    case 0xC4DC4A: {
        Instruction step(cpu, 0x22, 0xC4D989u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:159 TAX
    case 0xC4DC4E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:160 STX @LOCAL00
    case 0xC4DC4F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:161 BRA @UNKNOWN27
    case 0xC4DC51: {
        Instruction step(cpu, 0x80, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:163 LDA #2
    case 0xC4DC53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:163 LDA #2
    // Overlapping static entry reached from 0xC4DC53.
    case 0xC4DC55: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:164 JSL UNKNOWN_C4D989
    case 0xC4DC56: {
        Instruction step(cpu, 0x22, 0xC4D989u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:165 TAX
    case 0xC4DC5A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:166 STX @LOCAL00
    case 0xC4DC5B: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:167 BRA @UNKNOWN27
    case 0xC4DC5D: {
        Instruction step(cpu, 0x80, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:169 LDA #3
    case 0xC4DC5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:169 LDA #3
    // Overlapping static entry reached from 0xC4DC5F.
    case 0xC4DC61: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:170 JSL UNKNOWN_C4D989
    case 0xC4DC62: {
        Instruction step(cpu, 0x22, 0xC4D989u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:171 TAX
    case 0xC4DC66: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:172 STX @LOCAL00
    case 0xC4DC67: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:173 BRA @UNKNOWN27
    case 0xC4DC69: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:175 LDA #4
    case 0xC4DC6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:175 LDA #4
    // Overlapping static entry reached from 0xC4DC6B.
    case 0xC4DC6D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:176 JSL UNKNOWN_C4D989
    case 0xC4DC6E: {
        Instruction step(cpu, 0x22, 0xC4D989u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:177 TAX
    case 0xC4DC72: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:178 STX @LOCAL00
    case 0xC4DC73: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:179 BRA @UNKNOWN27
    case 0xC4DC75: {
        Instruction step(cpu, 0x80, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:181 LDA #5
    case 0xC4DC77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:181 LDA #5
    // Overlapping static entry reached from 0xC4DC77.
    case 0xC4DC79: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:182 JSL UNKNOWN_C4D989
    case 0xC4DC7A: {
        Instruction step(cpu, 0x22, 0xC4D989u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:183 TAX
    case 0xC4DC7E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:184 STX @LOCAL00
    case 0xC4DC7F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:185 BRA @UNKNOWN27
    case 0xC4DC81: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:187 LDA #6
    case 0xC4DC83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:187 LDA #6
    // Overlapping static entry reached from 0xC4DC83.
    case 0xC4DC85: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:188 JSL UNKNOWN_C4D989
    case 0xC4DC86: {
        Instruction step(cpu, 0x22, 0xC4D989u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:189 TAX
    case 0xC4DC8A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:190 STX @LOCAL00
    case 0xC4DC8B: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:191 BRA @UNKNOWN27
    case 0xC4DC8D: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:193 LDA #7
    case 0xC4DC8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:193 LDA #7
    // Overlapping static entry reached from 0xC4DC8F.
    case 0xC4DC91: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:194 JSL UNKNOWN_C4D989
    case 0xC4DC92: {
        Instruction step(cpu, 0x22, 0xC4D989u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:195 TAX
    case 0xC4DC96: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:196 STX @LOCAL00
    case 0xC4DC97: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:197 BRA @UNKNOWN27
    case 0xC4DC99: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:199 LDA #9
    case 0xC4DC9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:199 LDA #9
    // Overlapping static entry reached from 0xC4DC9B.
    case 0xC4DC9D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:200 JSL UNKNOWN_C4D989
    case 0xC4DC9E: {
        Instruction step(cpu, 0x22, 0xC4D989u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:201 TAX
    case 0xC4DCA2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:202 STX @LOCAL00
    case 0xC4DCA3: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:203 BRA @UNKNOWN27
    case 0xC4DCA5: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:209 LDA #1
    case 0xC4DCA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:209 LDA #1
    // Overlapping static entry reached from 0xC4DCA7.
    case 0xC4DCA9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:210 STA @VIRTUAL02
    case 0xC4DCAA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:218 INC @VIRTUAL02
    case 0xC4DCAC: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/intro/init_intro.asm:220 LDX @LOCAL00
    case 0xC4DCAE: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:221 BEQL @UNKNOWN0
    case 0xC4DCB0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:221 BEQL @UNKNOWN0
    case 0xC4DCB2: {
        Instruction step(cpu, 0x4C, 0x00DB2Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:222 LDA #2
    case 0xC4DCB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:222 LDA #2
    // Overlapping static entry reached from 0xC4DCB5.
    case 0xC4DCB7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:223 JSL UNKNOWN_C0AC0C
    case 0xC4DCB8: {
        Instruction step(cpu, 0x22, 0xC0AC0Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DCBC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/init_intro.asm:226 STZ FADE_PARAMETERS + fade_parameters::step
    case 0xC4DCBE: {
        Instruction step(cpu, 0x9C, 0x000028u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:227 REP #PROC_FLAGS::ACCUM8
    case 0xC4DCC1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/init_intro.asm:229 LDA INIDISP_MIRROR
    case 0xC4DCC3: {
        Instruction step(cpu, 0xAD, 0x00000Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:230 AND #$00FF
    case 0xC4DCC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC4DCC6.
    case 0xC4DCC8: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:231 CMP #$80
    case 0xC4DCC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:231 CMP #$80
    // Overlapping static entry reached from 0xC4DCC9.
    case 0xC4DCCB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:232 BEQ @UNKNOWN29
    case 0xC4DCCC: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:233 LDY #0
    case 0xC4DCCE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:233 LDY #0
    // Overlapping static entry reached from 0xC4DCCE.
    case 0xC4DCD0: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:234 LDX #1
    case 0xC4DCD1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:234 LDX #1
    // Overlapping static entry reached from 0xC4DCD1.
    case 0xC4DCD3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:235 LDA #4
    case 0xC4DCD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:235 LDA #4
    // Overlapping static entry reached from 0xC4DCD4.
    case 0xC4DCD6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:236 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4DCD7: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:238 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DCDB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/init_intro.asm:239 LDA #$00
    case 0xC4DCDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008F00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    case 0xC4DCDF: {
        Instruction step(cpu, 0x8F, 0x002131u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4DCDD.
    case 0xC4DCE0: {
        Instruction step(cpu, 0x31, 0x000021u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4DCE0.
    case 0xC4DCE2: {
        Instruction step(cpu, 0x00, 0x00008Fu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:241 STA f:CGWSEL
    case 0xC4DCE3: {
        Instruction step(cpu, 0x8F, 0x002130u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:242 LDA #$01
    case 0xC4DCE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    case 0xC4DCE9: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DCE7.
    case 0xC4DCEA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DCEA.
    case 0xC4DCEB: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:244 STZ TD_MIRROR
    case 0xC4DCEC: {
        Instruction step(cpu, 0x9C, 0x00001Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC4DCEF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/init_intro.asm:246 STZ DISABLE_MUSIC_CHANGES
    case 0xC4DCF1: {
        Instruction step(cpu, 0x9C, 0x005DD8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/init_intro.asm:247 END_C_FUNCTION
    case 0xC4DCF4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/init_intro.asm:247 END_C_FUNCTION
    case 0xC4DCF5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
