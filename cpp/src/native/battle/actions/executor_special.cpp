#include "executor_internal.hpp"
#include "eb/native/battle/outcomes.hpp"
#include <stdexcept>

namespace eb::native::battle::actions {
namespace {
bool swirl_waiting(const WorldSwirlState& swirl) {
    // C2E9C8's CLC/SBC4 and strict signed branch give a threshold of5.
    return swirl.update_in != 0 && swirl.padding >= 5;
}
}
detail::Routine Executor::Operation::Execution::fade_wait() {
    while (o.special.fade.active()) co_await tick();
    co_return 0;
}
detail::Routine Executor::Operation::Execution::close_hide() {
    co_await window({dialogue::WindowAction::CloseAll, {}, {}, 0});
    co_await tick();
    meter = o.meters.begin_hide(o.windows.prompt_state().battle_mode != 0);
    co_await std::suspend_always{};
    co_await tick();
    co_return 0;
}
detail::Routine Executor::Operation::Execution::replace_background(std::uint16_t group,
                                                                  std::uint16_t music) {
    auto& s = o.special;
    const bool slow_fade = o.windows.prompt_state().battle_mode == 0 || group == 483;
    if (!slow_fade) {
        configure_world_swirl(s.swirl_data, o.swirl, s.visual, 6, 1, 30);
        while (swirl_waiting(o.swirl)) co_await tick();
    }
    s.world_encounter.group = group;
    // Selection precedes the original blank wait, so a callback cannot change
    // the selected backgrounds while it can still change other live owners.
    const auto selected = s.loader.selection(group);
    s.blank.begin(DisplayBlankKind::Reset);
    child = Child::Direct; scene = o.scene.begin_publication();
    co_await std::suspend_always{};
    s.blank.finish();
    s.graphics.load_common(o.clock.flavor);
    // LOAD_BATTLE_BG reads the live group after the blank/publication wait;
    // the selected layer pair above remains the caller's captured value.
    s.loader.load(selected, s.world_encounter.group == 478
                                ? BattleArtworkPublication::GiygasPrayer
                                : BattleArtworkPublication::Ordinary);
    // C2EEE7 reads CURRENT_BATTLE_GROUP again after LOAD_BATTLE_BG.
    s.graphics.load_enemies(s.world_encounter.group);
    s.colors.upload_mode = 24;
    o.frame.publish_combatants();
    o.windows.prompt_state().battle_mode = 1;
    if (music) o.audio.change_music(music, o.clock.disabled_transitions);
    s.blank.begin(DisplayBlankKind::Retain);
    child = Child::Direct; scene = o.scene.begin_publication();
    co_await std::suspend_always{};
    s.blank.finish();
    if (slow_fade) {
        s.fade.begin_in(1, 4);
        co_await fade_wait();
    } else {
        s.fade.begin_in(15, 1);
        if (group != 483) {
            configure_world_swirl(s.swirl_data, o.swirl, s.visual, 6, 0, 5);
            while (swirl_waiting(o.swirl)) co_await tick();
        }
    }
    co_return 0;
}
detail::Routine Executor::Operation::Execution::prayer_scene(Text script, std::uint16_t group,
                                                            std::uint16_t music) {
    auto& s = o.special;
    s.fade.begin_out(1, 4); co_await fade_wait();
    o.windows.prompt_state().battle_mode = 0;
    s.music.current_map_track = 0;
    co_await close_hide();
    co_await text(script);
    s.fade.begin_out(1, 2); co_await fade_wait();
    co_await replace_background(group, music);
    o.windows.prompt_state().battle_mode = 1;
    co_await show_meters();
    co_await window({dialogue::WindowAction::Open, dialogue::WindowId{14}, {}, 0});
    co_await wait(60);
    co_return 0;
}
detail::Routine Executor::Operation::Execution::prayer_focus(Text script, std::uint16_t music) {
    auto& s = o.special;
    s.fade.begin_out(1, 1);
    o.audio.driver_effect(2);
    co_await fade_wait();
    o.windows.prompt_state().battle_mode = 0;
    co_await close_hide();
    s.visual.visible_layers = {false, false, true, false, false};
    o.audio.change_music(191, o.clock.disabled_transitions);
    s.fade.begin_in(1, 1); co_await fade_wait();
    co_await wait(20);
    co_await text(script);
    o.windows.prompt_state().battle_mode = 1;
    co_await wait(20);
    o.audio.driver_effect(2);
    s.fade.begin_out(1, 1); co_await fade_wait();
    co_await show_meters();
    co_await window({dialogue::WindowAction::Open, dialogue::WindowId{14}, {}, 0});
    s.visual.visible_layers = {true, true, true, false, true};
    o.audio.change_music(music, o.clock.disabled_transitions);
    s.fade.begin_in(1, 1); co_await fade_wait();
    co_return 0;
}
detail::Routine Executor::Operation::Execution::prayer_hurt(std::uint16_t amount) {
    co_await wait(60);
    o.action.target = 8; o.names.fix_target();
    o.background.flash_green(60);
    o.action.smash_attack = 1;
    co_await resist_damage(variance25(o.random, amount), 255);
    co_await wait(60);
    co_return 0;
}
detail::Routine Executor::Operation::Execution::special(Kind kind) {
    auto& s = o.special;
    switch (kind) {
    case Kind::BTLACT_CLUMSYDEATH:
        if (o.windows.state().flag(s.teleports.destination(13).event_flag)) {
            co_await text(Text::MSG_BTL_TONZURA_BREAK_IN_OK);
            set_teleport_state(s.session, s.actors.appearance_scene(), 15, 3);
        } else {
            co_await text(Text::MSG_BTL_TONZURA_BREAK_IN_NG);
            set_teleport_state(s.session, s.actors.appearance_scene(), 13, 3);
            o.encounter.special_defeat = 1;
        }
        break;
    case Kind::BTLACT_TELEPORT_BOX: {
        s.session.current_sector_attributes = s.map.sector(s.leader.leader_x >> 8,
                                                           s.leader.leader_y >> 7).attributes;
        if (s.session.current_sector_attributes & 0x80) {
            co_await text(Text::MSG_BTL_TLPTBOX_CANT); break;
        }
        if (o.windows.prompt_state().battle_mode != 0) {
            const auto roll = random_limit(o.random, 100);
            const auto strength = o.items.item_properties(attacker().action_argument).parameters[0];
            const auto threshold = strength < 128 ? strength : 0xff00u | strength;
            if (roll >= threshold) { co_await text(Text::MSG_BTL_TLPTBOX_NG); break; }
            bool boss = false;
            for (unsigned slot = 0; slot < Roster::size; ++slot) {
                const auto& b = o.roster.at(slot);
                if (b.consciousness && b.side == 1 && o.roster.resources().enemy(b.id).boss) {
                    boss = true; break;
                }
            }
            if (boss) { co_await text(Text::MSG_BTL_TLPTBOX_NG); break; }
        }
        co_await remove_item(attacker().id, attacker().action_item_slot);
        co_await text(Text::MSG_BTL_TLPTBOX_OK);
        set_teleport_state(s.session, s.actors.appearance_scene(), s.session.teleport_box_destination, 3);
        o.encounter.special_defeat = 1;
        break;
    }
    case Kind::BTLACT_MASTERBARFDEATH: {
        const auto saved_attacker = o.action.attacker, saved_target = o.action.target;
        meter = o.meters.begin_hide(o.windows.prompt_state().battle_mode != 0);
        co_await std::suspend_always{};
        membership = s.membership.begin_add(4); co_await std::suspend_always{};
        for (unsigned slot = 0; slot < Roster::size; ++slot) {
            if (o.roster.at(slot).consciousness) continue;
            o.roster.initialize_player(slot, o.party, 4);
            o.action.attacker = slot;
            co_await show_meters();
            for (unsigned position = 0; position < 6; ++position)
                if (o.party.party_order[position] == 4) {
                    meter = o.meters.begin_select(position); co_await std::suspend_always{};
                    break;
                }
            break;
        }
        co_await text(Text::MSG_BTL_POO_BREAK_IN_2);
        o.names.fix_attacker(0);
        o.dialogue.prepared().set_item(21);
        const auto description = o.actions.action(30).description;
        const dialogue::ReferenceKey key{std::uint8_t(description), std::uint8_t(description >> 8),
                                        std::uint8_t(description >> 16), std::uint8_t(description >> 24)};
        co_await text(key);
        for (unsigned slot = 0; slot < Roster::size; ++slot) {
            const auto& b = o.roster.at(slot);
            if (!b.consciousness || b.side != 1) continue;
            o.action.target = slot; o.names.fix_target();
            co_await damage(slot, variance25(o.random, 360));
        }
        o.action.attacker = saved_attacker; o.action.target = saved_target;
        o.names.fix_attacker(0); o.names.fix_target();
        break;
    }
    case Kind::BTLACT_POKEY_SPEECH:
        o.frame_state.giygas_phase = 2;
        o.roster.replace_primary_enemy(219);
        co_await replace_background(476, 186);
        co_await text(Text::MSG_BTL_MECHPOKEY_1_TALK_B);
        o.roster.at(9).consciousness = 0;
        o.frame_state.giygas_phase = 3;
        // The legitimate imported CHECK_HARDWARE checksum is verified by
        // SpecialResources before this action owner can be constructed.
        o.roster.replace_primary_enemy(220);
        co_await replace_background(477, 73);
        o.action.skip_death_cleanup = 1;
        break;
    case Kind::BTLACT_POKEY_SPEECH_2:
        o.frame_state.giygas_phase = 4;
        co_await wait(120);
        o.roster.at(9).consciousness = 1; o.frame.publish_combatants();
        co_await text(Text::MSG_BTL_MECHPOKEY_2_TALK_2);
        o.roster.at(9).consciousness = 0; o.frame.publish_combatants();
        co_await wait(60);
        o.roster.replace_primary_enemy(221);
        co_await replace_background(478, 185);
        o.action.skip_death_cleanup = 1;
        break;
    case Kind::BTLACT_GIYGAS_PRAYER_1:
        co_await prayer_scene(Text::MSG_EVT_PRAY_7_DOSEI, 478, 185);
        co_await wait(120);
        o.audio.play_sound(64);
        co_await wait(30);
        o.background.quake(60, 12);
        co_await text(Text::MSG_BTL_INORU_DAMAGE_1);
        o.frame_state.giygas_phase = 5;
        o.roster.replace_primary_enemy(229);
        co_await replace_background(479, 0);
        break;
    case Kind::BTLACT_GIYGAS_PRAYER_2:
    case Kind::BTLACT_GIYGAS_PRAYER_3:
    case Kind::BTLACT_GIYGAS_PRAYER_4:
    case Kind::BTLACT_GIYGAS_PRAYER_5:
    case Kind::BTLACT_GIYGAS_PRAYER_6:
    case Kind::BTLACT_GIYGAS_PRAYER_7: {
        static constexpr std::array texts{Text::MSG_EVT_PRAY_2_TONZURA, Text::MSG_EVT_PRAY_3_PAULA_PAPA,
            Text::MSG_EVT_PRAY_4_TONY, Text::MSG_EVT_PRAY_5_RAMA, Text::MSG_EVT_PRAY_6_FRANK,
            Text::MSG_EVT_PRAY_1_NES_MAMA};
        const unsigned index = unsigned(kind) - unsigned(Kind::BTLACT_GIYGAS_PRAYER_2);
        co_await prayer_scene(texts.at(index), 479, 185);
        co_await prayer_hurt(std::uint16_t(50u << index));
        o.frame_state.giygas_phase = std::uint16_t(6 + index);
        if (index == 5) co_await replace_background(480, 74);
        break;
    }
    case Kind::BTLACT_GIYGAS_PRAYER_8:
        co_await prayer_focus(Text::MSG_BTL_INORU_BACK_TO_PC_8, 74);
        o.frame_state.giygas_phase = 12;
        break;
    case Kind::BTLACT_GIYGAS_PRAYER_9: {
        battle::reset_rolling(o.party, o.clock);
        static constexpr std::array texts{Text::MSG_BTL_INORU_BACK_TO_PC_9, Text::MSG_BTL_INORU_BACK_TO_PC_F_1,
            Text::MSG_BTL_INORU_BACK_TO_PC_F_2, Text::MSG_BTL_INORU_BACK_TO_PC_F_3};
        for (unsigned i = 0; i < texts.size(); ++i) {
            co_await prayer_focus(texts[i], 74);
            co_await prayer_hurt(std::uint16_t(3200u << i));
        }
        co_await window({dialogue::WindowAction::CloseFocus, {}, {}, 0});
        o.windows.prompt_state().battle_mode = 0;
        meter = o.meters.begin_hide(false); co_await std::suspend_always{};
        o.windows.prompt_state().battle_mode = 1;
        co_await tick();
        o.frame_state.giygas_phase = 0xffff;
        o.audio.change_music(190, o.clock.disabled_transitions);
        for (const auto entry : s.resources.noises()) {
            o.audio.play_sound(entry[0]);
            if (!entry[1]) break;
            co_await wait(entry[1]);
        }
        o.audio.change_music(75, o.clock.disabled_transitions);
        o.frame_state.giygas_phase = 0;
        co_await wait(480);
        o.roster.at(9).consciousness = 1; o.frame.publish_combatants();
        co_await text(Text::MSG_BTL_POKEY_RUN_AWAY);
        o.roster.at(9).consciousness = 0; o.frame.publish_combatants();
        co_await wait(60);
        std::uint16_t audio_parameter = 2, quakes = 2, until_quake = 45;
        o.background.quake(60, o.background.effects().vertical_hold);
        for (const auto delay : s.resources.static_delays()) {
            for (unsigned i = 0; i < delay; ++i) {
                co_await tick();
                if (quakes && --until_quake == 0) {
                    --quakes; until_quake = 45;
                    o.background.quake(60, o.background.effects().vertical_hold);
                }
            }
            o.background.swap_final_distortion();
            o.audio.driver_parameter(audio_parameter);
            audio_parameter = audio_parameter == 2 ? 1 : 2;
        }
        o.audio.change_music(182, o.clock.disabled_transitions);
        co_await wait(600);
        o.audio.play_sound(63);
        o.audio.stop_music();
        configure_world_swirl(s.swirl_data, o.swirl, s.visual, 5, 0, 5);
        while (swirl_waiting(o.swirl)) co_await tick();
        o.audio.stop_music();
        co_await replace_background(483, 0);
        co_await wait(480);
        o.encounter.special_defeat = 3;
        break;
    }
    default: throw std::invalid_argument("This action has no final-battle handler");
    }
    co_return 0;
}
} // namespace eb::native::battle::actions
