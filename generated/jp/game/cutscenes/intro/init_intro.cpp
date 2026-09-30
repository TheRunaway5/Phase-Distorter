// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/init_intro.asm
bool resume_introduction_init_intro(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/init_intro.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ADB2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4ADB4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4ADB5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4ADB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ADB6.
    case 0xC4ADB8: {
        Instruction step(cpu, 0xFF, 0x00A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4ADB9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/init_intro.asm:12 LDY #0
    case 0xC4ADBA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4ADBA.
    case 0xC4ADBC: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:13 STY @LOCAL01
    case 0xC4ADBD: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:19 LDA #1
    case 0xC4ADBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:19 LDA #1
    // Overlapping static entry reached from 0xC4ADBF.
    case 0xC4ADC1: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:20 STA DISABLED_TRANSITIONS
    case 0xC4ADC2: {
        Instruction step(cpu, 0x8D, 0x00B68Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:21 LDA #2
    case 0xC4ADC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:21 LDA #2
    // Overlapping static entry reached from 0xC4ADC5.
    case 0xC4ADC7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:22 JSL UNKNOWN_C0AC0C
    case 0xC4ADC8: {
        Instruction step(cpu, 0x22, 0xC0ABEBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:23 JSL UNKNOWN_C0927C
    case 0xC4ADCC: {
        Instruction step(cpu, 0x22, 0xC0925Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:24 JSL UNKNOWN_C200D9
    case 0xC4ADD0: {
        Instruction step(cpu, 0x22, 0xC200D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:25 JSL UNKNOWN_C432B1
    case 0xC4ADD4: {
        Instruction step(cpu, 0x22, 0xC4302Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:26 LDA #1
    case 0xC4ADD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:26 LDA #1
    // Overlapping static entry reached from 0xC4ADD8.
    case 0xC4ADDA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:27 STA DISABLE_MUSIC_CHANGES
    case 0xC4ADDB: {
        Instruction step(cpu, 0x8D, 0x00615Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:46 LDY @LOCAL01
    case 0xC4ADDE: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:47 TYA
    case 0xC4ADE0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:51 BEQ @UNKNOWN11
    case 0xC4ADE1: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:52 CMP #1
    case 0xC4ADE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:52 CMP #1
    // Overlapping static entry reached from 0xC4ADE3.
    case 0xC4ADE5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:53 _BEQL @UNKNOWN14
    case 0xC4ADE6: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:54 CMP #2
    case 0xC4ADE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:54 CMP #2
    // Overlapping static entry reached from 0xC4ADE8.
    case 0xC4ADEA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:55 _BEQL @UNKNOWN17
    case 0xC4ADEB: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:56 CMP #3
    case 0xC4ADED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:56 CMP #3
    // Overlapping static entry reached from 0xC4ADED.
    case 0xC4ADEF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:57 _BEQL @UNKNOWN18
    case 0xC4ADF0: {
        Instruction step(cpu, 0xF0, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:58 CMP #4
    case 0xC4ADF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:58 CMP #4
    // Overlapping static entry reached from 0xC4ADF2.
    case 0xC4ADF4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:59 _BEQL @UNKNOWN19
    case 0xC4ADF5: {
        Instruction step(cpu, 0xF0, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:60 CMP #5
    case 0xC4ADF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:60 CMP #5
    // Overlapping static entry reached from 0xC4ADF7.
    case 0xC4ADF9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:61 _BEQL @UNKNOWN20
    case 0xC4ADFA: {
        Instruction step(cpu, 0xF0, 0x000078u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:62 CMP #6
    case 0xC4ADFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:62 CMP #6
    // Overlapping static entry reached from 0xC4ADFC.
    case 0xC4ADFE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:63 BEQL @UNKNOWN21
    case 0xC4ADFF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:63 BEQL @UNKNOWN21
    case 0xC4AE01: {
        Instruction step(cpu, 0x4C, 0x00AE80u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:64 CMP #7
    case 0xC4AE04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:64 CMP #7
    // Overlapping static entry reached from 0xC4AE04.
    case 0xC4AE06: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:65 BEQL @UNKNOWN22
    case 0xC4AE07: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:65 BEQL @UNKNOWN22
    case 0xC4AE09: {
        Instruction step(cpu, 0x4C, 0x00AE8Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:66 CMP #8
    case 0xC4AE0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:66 CMP #8
    // Overlapping static entry reached from 0xC4AE0C.
    case 0xC4AE0E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:67 BEQL @UNKNOWN23
    case 0xC4AE0F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:67 BEQL @UNKNOWN23
    case 0xC4AE11: {
        Instruction step(cpu, 0x4C, 0x00AE98u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:68 CMP #9
    case 0xC4AE14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:68 CMP #9
    // Overlapping static entry reached from 0xC4AE14.
    case 0xC4AE16: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:69 BEQL @UNKNOWN24
    case 0xC4AE17: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:69 BEQL @UNKNOWN24
    case 0xC4AE19: {
        Instruction step(cpu, 0x4C, 0x00AEA4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:70 CMP #10
    case 0xC4AE1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:70 CMP #10
    // Overlapping static entry reached from 0xC4AE1C.
    case 0xC4AE1E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:71 BEQL @UNKNOWN25
    case 0xC4AE1F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:71 BEQL @UNKNOWN25
    case 0xC4AE21: {
        Instruction step(cpu, 0x4C, 0x00AEB0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:72 JMP @UNKNOWN26
    case 0xC4AE24: {
        Instruction step(cpu, 0x4C, 0x00AEBCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:74 JSL LOGO_SCREEN
    case 0xC4AE27: {
        Instruction step(cpu, 0x22, 0xC0F0D2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:101 TAX
    case 0xC4AE2B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:103 STX @LOCAL00
    case 0xC4AE2C: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:104 JMP @UNKNOWN27
    case 0xC4AE2E: {
        Instruction step(cpu, 0x4C, 0x00AEC1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:106 LDA #MUSIC::GAS_STATION
    case 0xC4AE31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:106 LDA #MUSIC::GAS_STATION
    // Overlapping static entry reached from 0xC4AE31.
    case 0xC4AE33: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:107 JSL CHANGE_MUSIC
    case 0xC4AE34: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:108 JSL GAS_STATION
    case 0xC4AE38: {
        Instruction step(cpu, 0x22, 0xC0F409u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:142 TAX
    case 0xC4AE3C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:144 STX @LOCAL00
    case 0xC4AE3D: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:145 JMP @UNKNOWN27
    case 0xC4AE3F: {
        Instruction step(cpu, 0x4C, 0x00AEC1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:147 LDA #MUSIC::TITLE_SCREEN
    case 0xC4AE42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x0000AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:147 LDA #MUSIC::TITLE_SCREEN
    // Overlapping static entry reached from 0xC4AE42.
    case 0xC4AE44: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:148 JSL CHANGE_MUSIC
    case 0xC4AE45: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:149 LDA #0
    case 0xC4AE49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:149 LDA #0
    // Overlapping static entry reached from 0xC4AE49.
    case 0xC4AE4B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:150 JSL SHOW_TITLE_SCREEN
    case 0xC4AE4C: {
        Instruction step(cpu, 0x22, 0xC0EDC0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:151 TAX
    case 0xC4AE50: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:152 STX @LOCAL00
    case 0xC4AE51: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:153 BRA @UNKNOWN27
    case 0xC4AE53: {
        Instruction step(cpu, 0x80, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:155 LDA #MUSIC::ATTRACT_MODE
    case 0xC4AE55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Du : 0x00009Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:155 LDA #MUSIC::ATTRACT_MODE
    // Overlapping static entry reached from 0xC4AE55.
    case 0xC4AE57: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:156 JSL CHANGE_MUSIC
    case 0xC4AE58: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:157 LDA #0
    case 0xC4AE5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:157 LDA #0
    // Overlapping static entry reached from 0xC4AE5C.
    case 0xC4AE5E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:158 JSL UNKNOWN_C4D989
    case 0xC4AE5F: {
        Instruction step(cpu, 0x22, 0xC4AC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:159 TAX
    case 0xC4AE63: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:160 STX @LOCAL00
    case 0xC4AE64: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:161 BRA @UNKNOWN27
    case 0xC4AE66: {
        Instruction step(cpu, 0x80, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:163 LDA #2
    case 0xC4AE68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:163 LDA #2
    // Overlapping static entry reached from 0xC4AE68.
    case 0xC4AE6A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:164 JSL UNKNOWN_C4D989
    case 0xC4AE6B: {
        Instruction step(cpu, 0x22, 0xC4AC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:165 TAX
    case 0xC4AE6F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:166 STX @LOCAL00
    case 0xC4AE70: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:167 BRA @UNKNOWN27
    case 0xC4AE72: {
        Instruction step(cpu, 0x80, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:169 LDA #3
    case 0xC4AE74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:169 LDA #3
    // Overlapping static entry reached from 0xC4AE74.
    case 0xC4AE76: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:170 JSL UNKNOWN_C4D989
    case 0xC4AE77: {
        Instruction step(cpu, 0x22, 0xC4AC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:171 TAX
    case 0xC4AE7B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:172 STX @LOCAL00
    case 0xC4AE7C: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:173 BRA @UNKNOWN27
    case 0xC4AE7E: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:175 LDA #4
    case 0xC4AE80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:175 LDA #4
    // Overlapping static entry reached from 0xC4AE80.
    case 0xC4AE82: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:176 JSL UNKNOWN_C4D989
    case 0xC4AE83: {
        Instruction step(cpu, 0x22, 0xC4AC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:177 TAX
    case 0xC4AE87: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:178 STX @LOCAL00
    case 0xC4AE88: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:179 BRA @UNKNOWN27
    case 0xC4AE8A: {
        Instruction step(cpu, 0x80, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:181 LDA #5
    case 0xC4AE8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:181 LDA #5
    // Overlapping static entry reached from 0xC4AE8C.
    case 0xC4AE8E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:182 JSL UNKNOWN_C4D989
    case 0xC4AE8F: {
        Instruction step(cpu, 0x22, 0xC4AC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:183 TAX
    case 0xC4AE93: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:184 STX @LOCAL00
    case 0xC4AE94: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:185 BRA @UNKNOWN27
    case 0xC4AE96: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:187 LDA #6
    case 0xC4AE98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:187 LDA #6
    // Overlapping static entry reached from 0xC4AE98.
    case 0xC4AE9A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:188 JSL UNKNOWN_C4D989
    case 0xC4AE9B: {
        Instruction step(cpu, 0x22, 0xC4AC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:189 TAX
    case 0xC4AE9F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:190 STX @LOCAL00
    case 0xC4AEA0: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:191 BRA @UNKNOWN27
    case 0xC4AEA2: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:193 LDA #7
    case 0xC4AEA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:193 LDA #7
    // Overlapping static entry reached from 0xC4AEA4.
    case 0xC4AEA6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:194 JSL UNKNOWN_C4D989
    case 0xC4AEA7: {
        Instruction step(cpu, 0x22, 0xC4AC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:195 TAX
    case 0xC4AEAB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:196 STX @LOCAL00
    case 0xC4AEAC: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:197 BRA @UNKNOWN27
    case 0xC4AEAE: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:199 LDA #9
    case 0xC4AEB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:199 LDA #9
    // Overlapping static entry reached from 0xC4AEB0.
    case 0xC4AEB2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:200 JSL UNKNOWN_C4D989
    case 0xC4AEB3: {
        Instruction step(cpu, 0x22, 0xC4AC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:201 TAX
    case 0xC4AEB7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:202 STX @LOCAL00
    case 0xC4AEB8: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:203 BRA @UNKNOWN27
    case 0xC4AEBA: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/init_intro.asm:206 LDY #1
    case 0xC4AEBC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:206 LDY #1
    // Overlapping static entry reached from 0xC4AEBC.
    case 0xC4AEBE: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:207 STY @LOCAL01
    case 0xC4AEBF: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:214 LDY @LOCAL01
    case 0xC4AEC1: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:215 INY
    case 0xC4AEC3: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:216 STY @LOCAL01
    case 0xC4AEC4: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:220 LDX @LOCAL00
    case 0xC4AEC6: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:221 BEQL @UNKNOWN0
    case 0xC4AEC8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:221 BEQL @UNKNOWN0
    case 0xC4AECA: {
        Instruction step(cpu, 0x4C, 0x00ADDEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/init_intro.asm:222 LDA #2
    case 0xC4AECD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:222 LDA #2
    // Overlapping static entry reached from 0xC4AECD.
    case 0xC4AECF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:223 JSL UNKNOWN_C0AC0C
    case 0xC4AED0: {
        Instruction step(cpu, 0x22, 0xC0ABEBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:229 LDA INIDISP_MIRROR
    case 0xC4AED4: {
        Instruction step(cpu, 0xAD, 0x00000Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:230 AND #$00FF
    case 0xC4AED7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC4AED7.
    case 0xC4AED9: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:231 CMP #$80
    case 0xC4AEDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:231 CMP #$80
    // Overlapping static entry reached from 0xC4AEDA.
    case 0xC4AEDC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:232 BEQ @UNKNOWN29
    case 0xC4AEDD: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:233 LDY #0
    case 0xC4AEDF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/init_intro.asm:233 LDY #0
    // Overlapping static entry reached from 0xC4AEDF.
    case 0xC4AEE1: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:234 LDX #1
    case 0xC4AEE2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/init_intro.asm:234 LDX #1
    // Overlapping static entry reached from 0xC4AEE2.
    case 0xC4AEE4: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:235 LDA #4
    case 0xC4AEE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:235 LDA #4
    // Overlapping static entry reached from 0xC4AEE5.
    case 0xC4AEE7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:236 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4AEE8: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/init_intro.asm:238 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AEEC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/init_intro.asm:239 LDA #$00
    case 0xC4AEEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008F00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    case 0xC4AEF0: {
        Instruction step(cpu, 0x8F, 0x002131u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4AEEE.
    case 0xC4AEF1: {
        Instruction step(cpu, 0x31, 0x000021u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4AEF1.
    case 0xC4AEF3: {
        Instruction step(cpu, 0x00, 0x00008Fu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:241 STA f:CGWSEL
    case 0xC4AEF4: {
        Instruction step(cpu, 0x8F, 0x002130u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:242 LDA #$01
    case 0xC4AEF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    case 0xC4AEFA: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AEF8.
    case 0xC4AEFB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AEFB.
    case 0xC4AEFC: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/init_intro.asm:244 STZ TD_MIRROR
    case 0xC4AEFD: {
        Instruction step(cpu, 0x9C, 0x00001Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/init_intro.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC4AF00: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/init_intro.asm:246 STZ DISABLE_MUSIC_CHANGES
    case 0xC4AF02: {
        Instruction step(cpu, 0x9C, 0x00615Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/init_intro.asm:247 END_C_FUNCTION
    case 0xC4AF05: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/init_intro.asm:247 END_C_FUNCTION
    case 0xC4AF06: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
