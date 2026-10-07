#include "executor_internal.hpp"
#include <stdexcept>
namespace eb::native::battle::actions {
namespace {
dialogue::ReferenceKey reference(std::uint32_t pointer) {
    dialogue::ReferenceKey key{};
    for (unsigned i = 0; i < 4; ++i) key[i] = std::uint8_t(pointer >> (8 * i));
    return key;
}
}
void Executor::Operation::Execution::reset_meters() {
    if (o.party.controlled_count > o.party.party_order.size())
        throw std::invalid_argument("Rolling meter reset leaves the owned party list");
    // Admission reads every character before the source's first mutation.
    for (unsigned i = 0; i < o.party.controlled_count; ++i) (void)o.party.character(o.party.party_order[i]);
    for (unsigned i = 0; i < o.party.controlled_count; ++i) {
        auto& c = o.party.character(o.party.party_order[i]);
        if (c.afflictions[0] != 1 && !c.current_hp) c.target_hp = 1;
        if (c.hp_fraction && c.current_hp > c.target_hp) c.target_hp = c.current_hp;
        if (c.pp_fraction && c.current_pp > c.target_pp) c.target_pp = c.current_pp;
    }
    o.clock.fastest_hp_increase = 1;
}
detail::Routine Executor::Operation::Execution::ko(unsigned slot) {
    (void)o.roster.at(slot);
    o.action.skip_death_cleanup = 0;
    if (!o.roster.at(slot).side) {
        if (o.roster.at(slot).afflictions[1] == 2) {
            for (unsigned i = 0; i < 6; ++i) {
                const auto& candidate = o.roster.at(i);
                if (!candidate.consciousness || candidate.npc || candidate.afflictions[1] != 2) continue;
                if (i != slot || o.roster.at(6).npc != 213) break;
                o.roster.at(6).consciousness = 0;
                for (; i < 6; ++i) {
                    const auto& later = o.roster.at(i);
                    if (later.consciousness && !later.npc && later.afflictions[1] == 2) {
                        o.roster.initialize_enemy(6, 213);
                        o.roster.at(6).npc = 213; o.roster.at(6).taken_turn = 1;
                    }
                }
                break;
            }
        }
        auto& actor = o.roster.at(slot);
        actor.afflictions.fill(0); actor.afflictions[0] = 1;
        if (actor.npc) {
            co_await text(reference(o.roster.resources().enemy(actor.id).death_text));
            auto& live = o.roster.at(slot);
            live.consciousness = 0;
            if (live.npc == 16 || live.npc == 17) {
                if (live.row > 1) throw std::invalid_argument("Teddy replacement leaves the guest owner");
                const auto& guest = live.row ? o.guests.second_guest : o.guests.first_guest;
                if (guest.member) {
                    live.consciousness = 1; live.afflictions[0] = 0;
                    live.target_hp = guest.hp; live.hp = guest.hp;
                    live.npc = guest.member; live.id = o.items.npc_enemy(guest.member);
                }
            } else if (o.guests.first_guest.member) {
                for (unsigned i = 0; i < Roster::size; ++i) {
                    auto& candidate = o.roster.at(i);
                    if (candidate.consciousness && !candidate.side && candidate.npc == o.guests.first_guest.member) {
                        candidate.row = 0; break;
                    }
                }
            }
        } else {
            actor.target_hp = 0;
            auto& c = o.party.character(unsigned(actor.row) + 1);
            c.target_hp = 0; c.current_hp = 1;
            co_await text(Text::MSG_BTL_KIZETU_ON);
        }
        co_return 0;
    }
    auto& actor = o.roster.at(slot);
    if (actor.id == 218 || actor.id == 219 || actor.id == 221 || actor.id == 229) co_return 0;
    if (o.targets.count(1) == 1) {
        reset_meters();
        for (unsigned i = 0; i < 6; ++i) {
            auto& candidate = o.roster.at(i);
            if (!candidate.consciousness || candidate.side || candidate.afflictions[0] == 1 || candidate.npc) continue;
            auto& c = o.party.character(unsigned(candidate.row) + 1);
            if (!c.current_hp) { candidate.target_hp = 1; c.target_hp = 1; }
        }
    }
    o.encounter.experience_gained += actor.experience;
    o.encounter.money_gained = std::uint16_t(o.encounter.money_gained + actor.money);
    if (o.roster.resources().enemy(actor.id).final_action) {
        o.action.enemy_final_attack = 1;
        const auto saved_attacker = o.action.attacker, saved_target = o.action.target;
        const auto saved_flags = o.action.target_flags;
        o.action.attacker = slot;
        actor.action = o.roster.resources().enemy(actor.id).final_action;
        actor.action_argument = o.roster.resources().enemy(actor.id).final_argument;
        o.targets.choose(slot); resolve_targets(slot);
        o.names.fix_attacker(0); o.names.select_first_target();
        co_await text(reference(o.actions.action(o.roster.resources().enemy(actor.id).final_action).description));
        co_await each_target(o.resources.kind(o.roster.resources().enemy(o.roster.at(slot).id).final_action));
        o.action.enemy_final_attack = 0;
        o.action.attacker = saved_attacker; o.action.target = saved_target; o.action.target_flags = saved_flags;
        o.names.fix_attacker(0); o.names.fix_target();
        if (o.encounter.special_defeat) co_return 0;
    }
    if (o.action.skip_death_cleanup) co_return 0;
    co_await text(reference(o.roster.resources().enemy(o.roster.at(slot).id).death_text));
    for (unsigned i = 0; i < Roster::size; ++i) o.roster.at(i).alternate = 0;
    o.roster.at(slot).alternate = 1;
    o.palette_effects.set_speed(10);
    for (unsigned color = 1; color < 16; ++color)
        o.palette_effects.target(unsigned(o.roster.at(slot).resource) * 16 + color, 31, 31, 31);
    co_await wait(10);
    o.palette_effects.set_speed(20);
    for (unsigned color = 1; color < 16; ++color)
        o.palette_effects.target(unsigned(o.roster.at(slot).resource) * 16 + color, 0, 0, 0);
    co_await wait(20);
    auto& dead_actor = o.roster.at(slot);
    dead_actor.afflictions.fill(0); dead_actor.afflictions[0] = 1; dead_actor.target_hp = 0;
    if (o.roster.resources().enemy(dead_actor.id).death_type) {
        for (unsigned i = 8; i < Roster::size; ++i)
            if (o.roster.at(i).consciousness) o.roster.at(i).alternate = 1;
        o.audio.play_sound(33);
        o.palette_effects.set_speed(10);
        for (unsigned color = 1; color < 64; ++color)
            if (color & 15) o.palette_effects.target(color, 31, 31, 31);
        co_await wait(10);
        o.palette_effects.set_speed(20);
        for (unsigned color = 1; color < 64; ++color)
            if (color & 15) o.palette_effects.target(color, 0, 0, 0);
        co_await wait(20);
        for (unsigned i = 8; i < Roster::size; ++i)
            if (o.roster.at(i).consciousness) o.roster.at(i).afflictions[0] = 1;
        o.frame.publish_combatants(); o.encounter.special_defeat = 2;
    }
    if (o.roster.at(slot).npc == 213) {
        unsigned i{};
        for (; i < 6; ++i) {
            auto& candidate = o.roster.at(i);
            if (candidate.consciousness && !candidate.npc && candidate.afflictions[1] == 2) {
                candidate.afflictions[1] = 0; break;
            }
        }
        for (; i < 6; ++i) {
            const auto& candidate = o.roster.at(i);
            if (candidate.consciousness && !candidate.npc && candidate.afflictions[1] == 2) {
                o.roster.initialize_enemy(6, 213);
                o.roster.at(6).npc = 213; o.roster.at(6).taken_turn = 1;
            }
        }
    }
    co_return 0;
}
} // namespace eb::native::battle::actions
