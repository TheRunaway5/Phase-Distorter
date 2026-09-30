// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/pray.asm
bool resume_battle_actions_pray(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pray.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2ACCF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    case 0xC2ACD1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    case 0xC2ACD2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    case 0xC2ACD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2ACD3.
    case 0xC2ACD5: {
        Instruction step(cpu, 0xFF, 0x10A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/pray.asm:8 END_STACK_VARS
    case 0xC2ACD6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/pray.asm:16 LDA #16
    case 0xC2ACD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:16 LDA #16
    // Overlapping static entry reached from 0xC2ACD7.
    case 0xC2ACD9: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:17 JSR RAND_LIMIT
    case 0xC2ACDA: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pray.asm:18 TAX
    case 0xC2ACDD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/pray.asm:19 LDA f:PRAYER_LIST,X
    case 0xC2ACDE: {
        Instruction step(cpu, 0xBF, 0xC47766u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:20 AND #$00FF
    case 0xC2ACE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2ACE2.
    case 0xC2ACE4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:21 STA @LOCAL02
    case 0xC2ACE5: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    case 0xC2ACE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000076u : 0x007776u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    // Overlapping static entry reached from 0xC2ACE7.
    case 0xC2ACE9: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    case 0xC2ACEA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    // Overlapping static entry reached from 0xC2ACE9.
    case 0xC2ACEB: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    case 0xC2ACEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    // Overlapping static entry reached from 0xC2ACEB.
    case 0xC2ACED: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    // Overlapping static entry reached from 0xC2ACEC.
    case 0xC2ACEE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:22 LOADPTR PRAYER_TEXT_PTRS, @PRAYERTEXTPTR
    case 0xC2ACEF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:23 LDA @LOCAL02
    case 0xC2ACF1: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:24 ASL
    case 0xC2ACF3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/pray.asm:25 ASL
    case 0xC2ACF4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/pray.asm:26 CLC
    case 0xC2ACF5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/pray.asm:27 ADC @PRAYERTEXTPTR
    case 0xC2ACF6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/pray.asm:28 STA @PRAYERTEXTPTR
    case 0xC2ACF8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2ACFA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    // Overlapping static entry reached from 0xC2ACFA.
    case 0xC2ACFC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2ACFD: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2ACFF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD00: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD02: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/actions/pray.asm:29 DEREFERENCE_PTR_TO @PRAYERTEXTPTR, @PRAYERTEXTPTRTMP
    case 0xC2AD04: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:30 MOVE_INT @PRAYERTEXTPTRTMP, @LOCAL00
    case 0xC2AD06: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:30 MOVE_INT @PRAYERTEXTPTRTMP, @LOCAL00
    case 0xC2AD08: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:30 MOVE_INT @PRAYERTEXTPTRTMP, @LOCAL00
    case 0xC2AD0A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:30 MOVE_INT @PRAYERTEXTPTRTMP, @LOCAL00
    case 0xC2AD0C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:31 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC2AD0E: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:32 LDA @LOCAL02
    case 0xC2AD12: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:33 BEQ @UNKNOWN7
    case 0xC2AD14: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/pray.asm:34 CMP #1
    case 0xC2AD16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:34 CMP #1
    // Overlapping static entry reached from 0xC2AD16.
    case 0xC2AD18: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:35 BEQ @UNKNOWN8
    case 0xC2AD19: {
        Instruction step(cpu, 0xF0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/pray.asm:36 CMP #2
    case 0xC2AD1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:36 CMP #2
    // Overlapping static entry reached from 0xC2AD1B.
    case 0xC2AD1D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:37 BEQ @UNKNOWN9
    case 0xC2AD1E: {
        Instruction step(cpu, 0xF0, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/pray.asm:38 CMP #3
    case 0xC2AD20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:38 CMP #3
    // Overlapping static entry reached from 0xC2AD20.
    case 0xC2AD22: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:39 BEQL @UNKNOWN10
    case 0xC2AD23: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:39 BEQL @UNKNOWN10
    case 0xC2AD25: {
        Instruction step(cpu, 0x4C, 0x00ADB2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:40 CMP #4
    case 0xC2AD28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:40 CMP #4
    // Overlapping static entry reached from 0xC2AD28.
    case 0xC2AD2A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:41 BEQL @UNKNOWN11
    case 0xC2AD2B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:41 BEQL @UNKNOWN11
    case 0xC2AD2D: {
        Instruction step(cpu, 0x4C, 0x00ADF2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:42 CMP #5
    case 0xC2AD30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:42 CMP #5
    // Overlapping static entry reached from 0xC2AD30.
    case 0xC2AD32: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:43 BEQL @UNKNOWN12
    case 0xC2AD33: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:43 BEQL @UNKNOWN12
    case 0xC2AD35: {
        Instruction step(cpu, 0x4C, 0x00AE31u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:44 CMP #6
    case 0xC2AD38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:44 CMP #6
    // Overlapping static entry reached from 0xC2AD38.
    case 0xC2AD3A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:45 BEQL @UNKNOWN13
    case 0xC2AD3B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:45 BEQL @UNKNOWN13
    case 0xC2AD3D: {
        Instruction step(cpu, 0x4C, 0x00AE49u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:46 CMP #7
    case 0xC2AD40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:46 CMP #7
    // Overlapping static entry reached from 0xC2AD40.
    case 0xC2AD42: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:47 BEQL @UNKNOWN14
    case 0xC2AD43: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:47 BEQL @UNKNOWN14
    case 0xC2AD45: {
        Instruction step(cpu, 0x4C, 0x00AE61u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:48 CMP #8
    case 0xC2AD48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:48 CMP #8
    // Overlapping static entry reached from 0xC2AD48.
    case 0xC2AD4A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:49 BEQL @UNKNOWN15
    case 0xC2AD4B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:49 BEQL @UNKNOWN15
    case 0xC2AD4D: {
        Instruction step(cpu, 0x4C, 0x00AE79u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:50 CMP #9
    case 0xC2AD50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:50 CMP #9
    // Overlapping static entry reached from 0xC2AD50.
    case 0xC2AD52: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/pray.asm:51 BEQL @UNKNOWN16
    case 0xC2AD53: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/pray.asm:51 BEQL @UNKNOWN16
    case 0xC2AD55: {
        Instruction step(cpu, 0x4C, 0x00AE91u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:52 JMP @UNKNOWN17
    case 0xC2AD58: {
        Instruction step(cpu, 0x4C, 0x00AEA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:54 JSL TARGET_ALLIES
    case 0xC2AD5B: {
        Instruction step(cpu, 0x22, 0xC26B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:55 JSL REMOVE_NPC_TARGETTING
    case 0xC2AD5F: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    case 0xC2AD63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DEu : 0x00ABDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AD63.
    case 0xC2AD65: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    case 0xC2AD66: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    case 0xC2AD68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AD68.
    case 0xC2AD6A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:56 LOADPTR BTLACT_PRAY_SUBTLE, @VIRTUAL06
    case 0xC2AD6B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AD6D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AD6F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AD71: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AD73: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:58 JMP @UNKNOWN17
    case 0xC2AD75: {
        Instruction step(cpu, 0x4C, 0x00AEA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:60 JSL TARGET_ALLIES
    case 0xC2AD78: {
        Instruction step(cpu, 0x22, 0xC26B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:61 JSL REMOVE_NPC_TARGETTING
    case 0xC2AD7C: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    case 0xC2AD80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F2u : 0x00ABF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AD80.
    case 0xC2AD82: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    case 0xC2AD83: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    case 0xC2AD85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AD85.
    case 0xC2AD87: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:62 LOADPTR BTLACT_PRAY_WARM, @VIRTUAL06
    case 0xC2AD88: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AD8A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AD8C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AD8E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AD90: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:64 JMP @UNKNOWN17
    case 0xC2AD92: {
        Instruction step(cpu, 0x4C, 0x00AEA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:66 JSL TARGET_ALLIES
    case 0xC2AD95: {
        Instruction step(cpu, 0x22, 0xC26B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:67 JSL REMOVE_NPC_TARGETTING
    case 0xC2AD99: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    case 0xC2AD9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00AC1Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AD9D.
    case 0xC2AD9F: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    case 0xC2ADA0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    case 0xC2ADA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADA2.
    case 0xC2ADA4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:68 LOADPTR BTLACT_PRAY_MYSTERIOUS, @VIRTUAL06
    case 0xC2ADA5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:69 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADA7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:69 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADA9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:69 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADAB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:69 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADAD: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:70 JMP @UNKNOWN17
    case 0xC2ADAF: {
        Instruction step(cpu, 0x4C, 0x00AEA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:72 JSL TARGET_ALLIES
    case 0xC2ADB2: {
        Instruction step(cpu, 0x22, 0xC26B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:73 JSL REMOVE_NPC_TARGETTING
    case 0xC2ADB6: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:74 JSR REMOVE_DEAD_TARGETTING
    case 0xC2ADBA: {
        Instruction step(cpu, 0x20, 0x007023u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:75 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2ADBD: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:75 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2ADC0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:75 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2ADC2: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:75 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2ADC5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ADC7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ADC9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ADCB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ADCD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:77 JSL RANDOM_TARGETTING
    case 0xC2ADCF: {
        Instruction step(cpu, 0x22, 0xC26E37u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2ADD3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2ADD5: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2ADD8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:78 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2ADDA: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    case 0xC2ADDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x00AC05u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADDD.
    case 0xC2ADDF: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    case 0xC2ADE0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    case 0xC2ADE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ADE2.
    case 0xC2ADE4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:79 LOADPTR BTLACT_PRAY_GOLDEN, @VIRTUAL06
    case 0xC2ADE5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADE7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADE9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADEB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ADED: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:81 JMP @UNKNOWN17
    case 0xC2ADEF: {
        Instruction step(cpu, 0x4C, 0x00AEA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray.asm:83 JSL TARGET_ALL_ENEMIES
    case 0xC2ADF2: {
        Instruction step(cpu, 0x22, 0xC26BC1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:84 JSL REMOVE_NPC_TARGETTING
    case 0xC2ADF6: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray.asm:85 JSR REMOVE_DEAD_TARGETTING
    case 0xC2ADFA: {
        Instruction step(cpu, 0x20, 0x007023u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:86 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2ADFD: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:86 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE00: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:86 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE02: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:86 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2AE05: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE07: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE09: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE0B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AE0D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:88 JSL RANDOM_TARGETTING
    case 0xC2AE0F: {
        Instruction step(cpu, 0x22, 0xC26E37u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:89 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE13: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:89 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE15: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:89 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE18: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:89 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2AE1A: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    case 0xC2AE1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x009508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE1D.
    case 0xC2AE1F: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    case 0xC2AE20: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE1F.
    case 0xC2AE21: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    case 0xC2AE22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE21.
    case 0xC2AE23: {
        Instruction step(cpu, 0xC2, 0x000000u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE22.
    case 0xC2AE24: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:90 LOADPTR BTLACT_PSI_ROCKIN_B, @VIRTUAL06
    case 0xC2AE25: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:91 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE27: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:91 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE29: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:91 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE2B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:91 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE2D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:92 BRA @UNKNOWN17
    case 0xC2AE2F: {
        Instruction step(cpu, 0x80, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:94 JSL TARGET_ALL
    case 0xC2AE31: {
        Instruction step(cpu, 0x22, 0xC26D3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    case 0xC2AE35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x009930u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE35.
    case 0xC2AE37: {
        Instruction step(cpu, 0x99, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    case 0xC2AE38: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    case 0xC2AE3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE3A.
    case 0xC2AE3C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:95 LOADPTR BTLACT_PSI_FLASH_A, @VIRTUAL06
    case 0xC2AE3D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:96 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE3F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:96 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE41: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:96 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE43: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:96 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE45: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:97 BRA @UNKNOWN17
    case 0xC2AE47: {
        Instruction step(cpu, 0x80, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:99 JSL TARGET_ALL
    case 0xC2AE49: {
        Instruction step(cpu, 0x22, 0xC26D3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    case 0xC2AE4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00AC2Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE4D.
    case 0xC2AE4F: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    case 0xC2AE50: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    case 0xC2AE52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE52.
    case 0xC2AE54: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:100 LOADPTR BTLACT_PRAY_RAINBOW, @VIRTUAL06
    case 0xC2AE55: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE57: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE59: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE5B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE5D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:102 BRA @UNKNOWN17
    case 0xC2AE5F: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:104 JSL TARGET_ALL
    case 0xC2AE61: {
        Instruction step(cpu, 0x22, 0xC26D3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    case 0xC2AE65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Du : 0x00AC4Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE65.
    case 0xC2AE67: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    case 0xC2AE68: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    case 0xC2AE6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE6A.
    case 0xC2AE6C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:105 LOADPTR BTLACT_PRAY_AROMA, @VIRTUAL06
    case 0xC2AE6D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:106 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE6F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:106 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE71: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:106 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE73: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:106 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE75: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:107 BRA @UNKNOWN17
    case 0xC2AE77: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:109 JSL TARGET_ALL
    case 0xC2AE79: {
        Instruction step(cpu, 0x22, 0xC26D3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    case 0xC2AE7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Eu : 0x00AC8Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE7D.
    case 0xC2AE7F: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    case 0xC2AE80: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    case 0xC2AE82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE82.
    case 0xC2AE84: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:110 LOADPTR BTLACT_PRAY_RENDING_SOUND, @VIRTUAL06
    case 0xC2AE85: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:111 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE87: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:111 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE89: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:111 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE8B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:111 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE8D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:112 BRA @UNKNOWN17
    case 0xC2AE8F: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/pray.asm:114 JSL TARGET_ALL
    case 0xC2AE91: {
        Instruction step(cpu, 0x22, 0xC26D3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    case 0xC2AE95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x009E2Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE95.
    case 0xC2AE97: {
        Instruction step(cpu, 0x9E, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    case 0xC2AE98: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    case 0xC2AE9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2AE9A.
    case 0xC2AE9C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray.asm:115 LOADPTR BTLACT_DEFENSE_DOWN_A, @VIRTUAL06
    case 0xC2AE9D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:116 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AE9F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:116 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEA1: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:116 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEA3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:116 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AEA5: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:118 LDA @LOCAL02
    case 0xC2AEA7: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:119 CMP #6
    case 0xC2AEA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:119 CMP #6
    // Overlapping static entry reached from 0xC2AEA9.
    case 0xC2AEAB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray.asm:120 BEQ @UNKNOWN18
    case 0xC2AEAC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/pray.asm:121 JSR REMOVE_DEAD_TARGETTING
    case 0xC2AEAE: {
        Instruction step(cpu, 0x20, 0x007023u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:123 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2AEB1: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:123 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2AEB3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:123 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2AEB5: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:123 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2AEB7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/pray.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AEB9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/pray.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AEBB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/pray.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AEBD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AEBF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray.asm:125 JSL UNKNOWN_C240A4
    case 0xC2AEC1: {
        Instruction step(cpu, 0x22, 0xC23F58u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2AEC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC2AEC5.
    case 0xC2AEC7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2AEC8: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2AECB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC2AECB.
    case 0xC2AECD: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/actions/pray.asm:126 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2AECE: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/pray.asm:127 END_C_FUNCTION
    case 0xC2AED1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pray.asm:127 END_C_FUNCTION
    case 0xC2AED2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
