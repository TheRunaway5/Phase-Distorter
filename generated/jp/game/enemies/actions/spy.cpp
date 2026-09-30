// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/spy.asm
bool resume_battle_actions_spy(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/spy.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28717: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC28719: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC2871A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC2871B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2871B.
    case 0xC2871D: {
        Instruction step(cpu, 0xFF, 0x51A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC2871E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC2871F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000051u : 0x002F51u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC2871F.
    case 0xC28721: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC28722: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC28724: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28721.
    case 0xC28725: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28724.
    case 0xC28726: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC28727: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:9 LDX CURRENT_TARGET
    case 0xC28729: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:10 LDA a:battler::offense,X
    case 0xC2872C: {
        Instruction step(cpu, 0xBD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/spy.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC2872F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/spy.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC28731: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28733: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28735: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28737: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28739: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:13 JSL DISPLAY_TEXT_WAIT
    case 0xC2873B: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC2873F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000063u : 0x002F63u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC2873F.
    case 0xC28741: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC28742: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC28744: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28741.
    case 0xC28745: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28744.
    case 0xC28746: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC28747: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:15 LDX CURRENT_TARGET
    case 0xC28749: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:16 LDA a:battler::defense,X
    case 0xC2874C: {
        Instruction step(cpu, 0xBD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/spy.asm:17 STORE_INT1632 @VIRTUAL06
    case 0xC2874F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/spy.asm:17 STORE_INT1632 @VIRTUAL06
    case 0xC28751: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28753: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28755: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28757: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28759: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:19 JSL DISPLAY_TEXT_WAIT
    case 0xC2875B: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:20 LDX CURRENT_TARGET
    case 0xC2875F: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:21 LDA a:battler::fire_resist,X
    case 0xC28762: {
        Instruction step(cpu, 0xBD, 0x00003Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:22 AND #$00FF
    case 0xC28765: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC28765.
    case 0xC28767: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:23 CMP #$00FF
    case 0xC28768: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:23 CMP #$00FF
    // Overlapping static entry reached from 0xC28768.
    case 0xC2876A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:24 BNE @UNKNOWN0
    case 0xC2876B: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC2876D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000071u : 0x002F71u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    // Overlapping static entry reached from 0xC2876D.
    case 0xC2876F: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC28770: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC28772: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    // Overlapping static entry reached from 0xC2876F.
    case 0xC28773: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    // Overlapping static entry reached from 0xC28772.
    case 0xC28774: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC28775: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC28777: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:27 LDX CURRENT_TARGET
    case 0xC2877B: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:28 LDA a:battler::freeze_resist,X
    case 0xC2877E: {
        Instruction step(cpu, 0xBD, 0x000038u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:29 AND #$00FF
    case 0xC28781: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC28781.
    case 0xC28783: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:30 CMP #$00FF
    case 0xC28784: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:30 CMP #$00FF
    // Overlapping static entry reached from 0xC28784.
    case 0xC28786: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:31 BNE @UNKNOWN1
    case 0xC28787: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC28789: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000082u : 0x002F82u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    // Overlapping static entry reached from 0xC28789.
    case 0xC2878B: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC2878C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC2878E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    // Overlapping static entry reached from 0xC2878B.
    case 0xC2878F: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    // Overlapping static entry reached from 0xC2878E.
    case 0xC28790: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC28791: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC28793: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:34 LDX CURRENT_TARGET
    case 0xC28797: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:35 LDA a:battler::flash_resist,X
    case 0xC2879A: {
        Instruction step(cpu, 0xBD, 0x000039u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:36 AND #$00FF
    case 0xC2879D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC2879D.
    case 0xC2879F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:37 CMP #$00FF
    case 0xC287A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:37 CMP #$00FF
    // Overlapping static entry reached from 0xC287A0.
    case 0xC287A2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:38 BNE @UNKNOWN2
    case 0xC287A3: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000092u : 0x002F92u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    // Overlapping static entry reached from 0xC287A5.
    case 0xC287A7: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287A8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    // Overlapping static entry reached from 0xC287A7.
    case 0xC287AB: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    // Overlapping static entry reached from 0xC287AA.
    case 0xC287AC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287AD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287AF: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:41 LDX CURRENT_TARGET
    case 0xC287B3: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:42 LDA a:battler::paralysis_resist,X
    case 0xC287B6: {
        Instruction step(cpu, 0xBD, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:43 AND #$00FF
    case 0xC287B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC287B9.
    case 0xC287BB: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:44 CMP #$00FF
    case 0xC287BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:44 CMP #$00FF
    // Overlapping static entry reached from 0xC287BC.
    case 0xC287BE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:45 BNE @UNKNOWN3
    case 0xC287BF: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A3u : 0x002FA3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    // Overlapping static entry reached from 0xC287C1.
    case 0xC287C3: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287C4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    // Overlapping static entry reached from 0xC287C3.
    case 0xC287C7: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    // Overlapping static entry reached from 0xC287C6.
    case 0xC287C8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287C9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287CB: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:48 LDX CURRENT_TARGET
    case 0xC287CF: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:49 LDA a:battler::hypnosis_resist,X
    case 0xC287D2: {
        Instruction step(cpu, 0xBD, 0x00003Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:50 AND #$00FF
    case 0xC287D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC287D5.
    case 0xC287D7: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:51 CMP #$00FF
    case 0xC287D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:51 CMP #$00FF
    // Overlapping static entry reached from 0xC287D8.
    case 0xC287DA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:52 BNE @UNKNOWN4
    case 0xC287DB: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B3u : 0x002FB3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    // Overlapping static entry reached from 0xC287DD.
    case 0xC287DF: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287E0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    // Overlapping static entry reached from 0xC287DF.
    case 0xC287E3: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    // Overlapping static entry reached from 0xC287E2.
    case 0xC287E4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287E5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287E7: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:55 LDX CURRENT_TARGET
    case 0xC287EB: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:56 LDA a:battler::brainshock_resist,X
    case 0xC287EE: {
        Instruction step(cpu, 0xBD, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:57 AND #$00FF
    case 0xC287F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC287F1.
    case 0xC287F3: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:58 CMP #$00FF
    case 0xC287F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:58 CMP #$00FF
    // Overlapping static entry reached from 0xC287F4.
    case 0xC287F6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:59 BNE @UNKNOWN5
    case 0xC287F7: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC287F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x002FC4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    // Overlapping static entry reached from 0xC287F9.
    case 0xC287FB: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC287FC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC287FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    // Overlapping static entry reached from 0xC287FB.
    case 0xC287FF: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    // Overlapping static entry reached from 0xC287FE.
    case 0xC28800: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC28801: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC28803: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:62 LDX CURRENT_TARGET
    case 0xC28807: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/spy.asm:63 LDA a:battler::ally_or_enemy,X
    case 0xC2880A: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:64 AND #$00FF
    case 0xC2880D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2880D.
    case 0xC2880F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:65 CMP #1
    case 0xC28810: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:65 CMP #1
    // Overlapping static entry reached from 0xC28810.
    case 0xC28812: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:66 BNE @UNKNOWN6
    case 0xC28813: {
        Instruction step(cpu, 0xD0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/spy.asm:67 LDA #3
    case 0xC28815: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:67 LDA #3
    // Overlapping static entry reached from 0xC28815.
    case 0xC28817: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:68 JSL FIND_INVENTORY_SPACE2
    case 0xC28818: {
        Instruction step(cpu, 0x22, 0xC43525u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:69 CMP #0
    case 0xC2881C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:69 CMP #0
    // Overlapping static entry reached from 0xC2881C.
    case 0xC2881E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/spy.asm:70 BEQ @UNKNOWN6
    case 0xC2881F: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/spy.asm:71 LDA ITEM_DROPPED
    case 0xC28821: {
        Instruction step(cpu, 0xAD, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:72 BEQ @UNKNOWN6
    case 0xC28824: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/spy.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC28826: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/spy.asm:74 LDA ITEM_DROPPED
    case 0xC28828: {
        Instruction step(cpu, 0xAD, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/spy.asm:75 JSL REDIRECT_C1ACF8
    case 0xC2882B: {
        Instruction step(cpu, 0x22, 0xC1DB59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC2882F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F0u : 0x004AF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    // Overlapping static entry reached from 0xC2882F.
    case 0xC28831: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28832: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28834: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    // Overlapping static entry reached from 0xC28834.
    case 0xC28836: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28837: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28839: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/spy.asm:78 STZ ITEM_DROPPED
    case 0xC2883D: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/spy.asm:80 END_C_FUNCTION
    case 0xC28840: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/spy.asm:80 END_C_FUNCTION
    case 0xC28841: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
