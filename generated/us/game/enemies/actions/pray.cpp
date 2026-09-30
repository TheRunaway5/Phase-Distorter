// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/pray.asm
bool resume_battle_actions_pray(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pray.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AD1B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    case 0xC2AD1D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    case 0xC2AD1E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    case 0xC2AD1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AD1F.
    case 0xC2AD21: {
        Instruction step(cpu, 0xFF, 0x10A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    case 0xC2AD22: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/pray.asm:16 LDA #16
    case 0xC2AD23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:16 LDA #16
    // Overlapping static entry reached from 0xC2AD23.
    case 0xC2AD25: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:17 JSR RAND_LIMIT
    case 0xC2AD26: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pray.asm:18 TAX
    case 0xC2AD29: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/pray.asm:19 LDA f:PRAYER_LIST,X
    case 0xC2AD2A: {
        Instruction step(cpu, 0xBF, 0xC4A2F9u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:20 AND #$00FF
    case 0xC2AD2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2AD2E.
    case 0xC2AD30: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:21 STA @LOCAL02
    case 0xC2AD31: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    case 0xC2AD33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x00A309u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    // Overlapping static entry reached from 0xC2AD33.
    case 0xC2AD35: {
        Instruction step(cpu, 0xA3, 0x000085u, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    case 0xC2AD36: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    // Overlapping static entry reached from 0xC2AD35.
    case 0xC2AD37: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    case 0xC2AD38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    // Overlapping static entry reached from 0xC2AD38.
    case 0xC2AD3A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    case 0xC2AD3B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:23 LDA @LOCAL02
    case 0xC2AD3D: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:24 ASL
    case 0xC2AD3F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/pray.asm:25 ASL
    case 0xC2AD40: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/pray.asm:26 CLC
    case 0xC2AD41: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/pray.asm:27 ADC @PRAYERTEXTPTR
    case 0xC2AD42: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/pray.asm:28 STA @PRAYERTEXTPTR
    case 0xC2AD44: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD46: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    // Overlapping static entry reached from 0xC2AD46.
    case 0xC2AD48: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD49: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD4B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD4C: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD4E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD50: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:30 MOVE_INT @PRAYERTEXTPTRTMP, @LOCAL00
    case 0xC2AD52: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:30 MOVE_INT @PRAYERTEXTPTRTMP, @LOCAL00
    case 0xC2AD54: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:30 MOVE_INT @PRAYERTEXTPTRTMP, @LOCAL00
    case 0xC2AD56: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:30 MOVE_INT @PRAYERTEXTPTRTMP, @LOCAL00
    case 0xC2AD58: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:31 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC2AD5A: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:32 LDA @LOCAL02
    case 0xC2AD5E: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:33 BEQ @UNKNOWN7
    case 0xC2AD60: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/pray.asm:34 CMP #1
    case 0xC2AD62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:34 CMP #1
    // Overlapping static entry reached from 0xC2AD62.
    case 0xC2AD64: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:35 BEQ @UNKNOWN8
    case 0xC2AD65: {
        Instruction step(cpu, 0xF0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/pray.asm:36 CMP #2
    case 0xC2AD67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:36 CMP #2
    // Overlapping static entry reached from 0xC2AD67.
    case 0xC2AD69: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:37 BEQ @UNKNOWN9
    case 0xC2AD6A: {
        Instruction step(cpu, 0xF0, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/pray.asm:38 CMP #3
    case 0xC2AD6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:38 CMP #3
    // Overlapping static entry reached from 0xC2AD6C.
    case 0xC2AD6E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:39 BEQL @UNKNOWN10
    case 0xC2AD6F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:39 BEQL @UNKNOWN10
    case 0xC2AD71: {
        Instruction step(cpu, 0x4C, 0x00ADFEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:40 CMP #4
    case 0xC2AD74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:40 CMP #4
    // Overlapping static entry reached from 0xC2AD74.
    case 0xC2AD76: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:41 BEQL @UNKNOWN11
    case 0xC2AD77: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:41 BEQL @UNKNOWN11
    case 0xC2AD79: {
        Instruction step(cpu, 0x4C, 0x00AE3Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:42 CMP #5
    case 0xC2AD7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:42 CMP #5
    // Overlapping static entry reached from 0xC2AD7C.
    case 0xC2AD7E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:43 BEQL @UNKNOWN12
    case 0xC2AD7F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:43 BEQL @UNKNOWN12
    case 0xC2AD81: {
        Instruction step(cpu, 0x4C, 0x00AE7Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:44 CMP #6
    case 0xC2AD84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:44 CMP #6
    // Overlapping static entry reached from 0xC2AD84.
    case 0xC2AD86: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:45 BEQL @UNKNOWN13
    case 0xC2AD87: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:45 BEQL @UNKNOWN13
    case 0xC2AD89: {
        Instruction step(cpu, 0x4C, 0x00AE95u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:46 CMP #7
    case 0xC2AD8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:46 CMP #7
    // Overlapping static entry reached from 0xC2AD8C.
    case 0xC2AD8E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:47 BEQL @UNKNOWN14
    case 0xC2AD8F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:47 BEQL @UNKNOWN14
    case 0xC2AD91: {
        Instruction step(cpu, 0x4C, 0x00AEADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:48 CMP #8
    case 0xC2AD94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:48 CMP #8
    // Overlapping static entry reached from 0xC2AD94.
    case 0xC2AD96: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:49 BEQL @UNKNOWN15
    case 0xC2AD97: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:49 BEQL @UNKNOWN15
    case 0xC2AD99: {
        Instruction step(cpu, 0x4C, 0x00AEC5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:50 CMP #9
    case 0xC2AD9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:50 CMP #9
    // Overlapping static entry reached from 0xC2AD9C.
    case 0xC2AD9E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:51 BEQL @UNKNOWN16
    case 0xC2AD9F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:51 BEQL @UNKNOWN16
    case 0xC2ADA1: {
        Instruction step(cpu, 0x4C, 0x00AEDDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:52 JMP @UNKNOWN17
    case 0xC2ADA4: {
        Instruction step(cpu, 0x4C, 0x00AEF3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:54 JSL TARGET_ALLIES
    case 0xC2ADA7: {
        Instruction step(cpu, 0x22, 0xC26BFBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:55 JSL REMOVE_NPC_TARGETTING
    case 0xC2ADAB: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    case 0xC2ADAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Au : 0x00AC2Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADAF.
    case 0xC2ADB1: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    case 0xC2ADB2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    case 0xC2ADB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADB4.
    case 0xC2ADB6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    case 0xC2ADB7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADB9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADBB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADBD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADBF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:58 JMP @UNKNOWN17
    case 0xC2ADC1: {
        Instruction step(cpu, 0x4C, 0x00AEF3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:60 JSL TARGET_ALLIES
    case 0xC2ADC4: {
        Instruction step(cpu, 0x22, 0xC26BFBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:61 JSL REMOVE_NPC_TARGETTING
    case 0xC2ADC8: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    case 0xC2ADCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Eu : 0x00AC3Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADCC.
    case 0xC2ADCE: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    case 0xC2ADCF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    case 0xC2ADD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADD1.
    case 0xC2ADD3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    case 0xC2ADD4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADD6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADD8: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADDA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADDC: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:64 JMP @UNKNOWN17
    case 0xC2ADDE: {
        Instruction step(cpu, 0x4C, 0x00AEF3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:66 JSL TARGET_ALLIES
    case 0xC2ADE1: {
        Instruction step(cpu, 0x22, 0xC26BFBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:67 JSL REMOVE_NPC_TARGETTING
    case 0xC2ADE5: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    case 0xC2ADE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x00AC68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADE9.
    case 0xC2ADEB: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    case 0xC2ADEC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    case 0xC2ADEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADEE.
    case 0xC2ADF0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    case 0xC2ADF1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:69 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADF3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:69 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADF5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:69 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADF7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:69 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADF9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:70 JMP @UNKNOWN17
    case 0xC2ADFB: {
        Instruction step(cpu, 0x4C, 0x00AEF3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:72 JSL TARGET_ALLIES
    case 0xC2ADFE: {
        Instruction step(cpu, 0x22, 0xC26BFBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:73 JSL REMOVE_NPC_TARGETTING
    case 0xC2AE02: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:74 JSR REMOVE_DEAD_TARGETTING
    case 0xC2AE06: {
        Instruction step(cpu, 0x20, 0x0070E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:75 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE09: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:75 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE0C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:75 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE0E: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:75 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE11: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE13: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE15: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE17: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE19: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC25893.
    case 0xC2AE1A: {
        Instruction step(cpu, 0x10, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/actions/pray.asm:77 JSL RANDOM_TARGETTING
    case 0xC2AE1B: {
        Instruction step(cpu, 0x22, 0xC26EF8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:77 JSL RANDOM_TARGETTING
    // Overlapping static entry reached from 0xC2AE1A.
    case 0xC2AE1C: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // src/battle/actions/pray.asm:77 JSL RANDOM_TARGETTING
    // Overlapping static entry reached from 0xC2AE1C.
    case 0xC2AE1D: {
        Instruction step(cpu, 0x6E, 0x00A5C2u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE1F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC2AE1D.
    case 0xC2AE20: {
        Instruction step(cpu, 0x06, 0x00008Du, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE21: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC2AE20.
    case 0xC2AE22: {
        Instruction step(cpu, 0x6C, 0x00A5A9u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE24: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE26: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    case 0xC2AE29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000051u : 0x00AC51u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE29.
    case 0xC2AE2B: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    case 0xC2AE2C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    case 0xC2AE2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE2E.
    case 0xC2AE30: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    case 0xC2AE31: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE33: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE35: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE37: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE39: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:81 JMP @UNKNOWN17
    case 0xC2AE3B: {
        Instruction step(cpu, 0x4C, 0x00AEF3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:83 JSL TARGET_ALL_ENEMIES
    case 0xC2AE3E: {
        Instruction step(cpu, 0x22, 0xC26C82u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:84 JSL REMOVE_NPC_TARGETTING
    case 0xC2AE42: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:85 JSR REMOVE_DEAD_TARGETTING
    case 0xC2AE46: {
        Instruction step(cpu, 0x20, 0x0070E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:86 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE49: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:86 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE4C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:86 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE4E: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:86 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE51: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE53: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE55: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE57: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE59: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:88 JSL RANDOM_TARGETTING
    case 0xC2AE5B: {
        Instruction step(cpu, 0x22, 0xC26EF8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:89 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE5F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:89 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE61: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:89 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE64: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:89 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE66: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    case 0xC2AE69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Fu : 0x00955Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE69.
    case 0xC2AE6B: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    case 0xC2AE6C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE6B.
    case 0xC2AE6D: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    case 0xC2AE6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE6D.
    case 0xC2AE6F: {
        Instruction step(cpu, 0xC2, 0x000000u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE6E.
    case 0xC2AE70: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    case 0xC2AE71: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:91 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE73: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:91 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE75: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:91 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE77: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:91 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE79: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:92 BRA @UNKNOWN17
    case 0xC2AE7B: {
        Instruction step(cpu, 0x80, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:94 JSL TARGET_ALL
    case 0xC2AE7D: {
        Instruction step(cpu, 0x22, 0xC26E00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    case 0xC2AE81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000087u : 0x009987u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE81.
    case 0xC2AE83: {
        Instruction step(cpu, 0x99, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    case 0xC2AE84: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    case 0xC2AE86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE86.
    case 0xC2AE88: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    case 0xC2AE89: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:96 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE8B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:96 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE8D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:96 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE8F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:96 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE91: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:97 BRA @UNKNOWN17
    case 0xC2AE93: {
        Instruction step(cpu, 0x80, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:99 JSL TARGET_ALL
    case 0xC2AE95: {
        Instruction step(cpu, 0x22, 0xC26E00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    case 0xC2AE99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00AC7Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE99.
    case 0xC2AE9B: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    case 0xC2AE9C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    case 0xC2AE9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE9E.
    case 0xC2AEA0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    case 0xC2AEA1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEA3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEA5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEA7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEA9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:102 BRA @UNKNOWN17
    case 0xC2AEAB: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:104 JSL TARGET_ALL
    case 0xC2AEAD: {
        Instruction step(cpu, 0x22, 0xC26E00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    case 0xC2AEB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000099u : 0x00AC99u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AEB1.
    case 0xC2AEB3: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    case 0xC2AEB4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    case 0xC2AEB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AEB6.
    case 0xC2AEB8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    case 0xC2AEB9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:106 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEBB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:106 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEBD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:106 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEBF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:106 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEC1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:107 BRA @UNKNOWN17
    case 0xC2AEC3: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:109 JSL TARGET_ALL
    case 0xC2AEC5: {
        Instruction step(cpu, 0x22, 0xC26E00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    case 0xC2AEC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DAu : 0x00ACDAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AEC9.
    case 0xC2AECB: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    case 0xC2AECC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    case 0xC2AECE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AECE.
    case 0xC2AED0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    case 0xC2AED1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:111 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AED3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:111 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AED5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:111 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AED7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:111 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AED9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:112 BRA @UNKNOWN17
    case 0xC2AEDB: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:114 JSL TARGET_ALL
    case 0xC2AEDD: {
        Instruction step(cpu, 0x22, 0xC26E00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    case 0xC2AEE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x009E86u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AEE1.
    case 0xC2AEE3: {
        Instruction step(cpu, 0x9E, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    case 0xC2AEE4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    case 0xC2AEE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AEE6.
    case 0xC2AEE8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    case 0xC2AEE9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:116 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEEB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:116 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEED: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:116 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEEF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:116 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEF1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:118 LDA @LOCAL02
    case 0xC2AEF3: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:119 CMP #6
    case 0xC2AEF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:119 CMP #6
    // Overlapping static entry reached from 0xC2AEF5.
    case 0xC2AEF7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:120 BEQ @UNKNOWN18
    case 0xC2AEF8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/pray.asm:121 JSR REMOVE_DEAD_TARGETTING
    case 0xC2AEFA: {
        Instruction step(cpu, 0x20, 0x0070E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:123 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2AEFD: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:123 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2AEFF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:123 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2AF01: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:123 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2AF03: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AF05: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AF07: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AF09: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AF0B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:125 JSL UNKNOWN_C240A4
    case 0xC2AF0D: {
        Instruction step(cpu, 0x22, 0xC240A4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2AF11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC2AF11.
    case 0xC2AF13: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2AF14: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2AF17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC2AF17.
    case 0xC2AF19: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2AF1A: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/pray.asm:127 END_C_FUNCTION
    case 0xC2AF1D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pray.asm:127 END_C_FUNCTION
    case 0xC2AF1E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
