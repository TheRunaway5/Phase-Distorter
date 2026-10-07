#include "eb/native/battle/actions/rules.hpp"
#include "eb/native/battle/actions/resources.hpp"
#include "eb/native/world_party.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F operation) {
    bool rejected{};
    try { operation(); } catch (const std::exception&) { rejected = true; }
    check(rejected, "Unowned action state was accepted");
}
void modifiers() {
    constexpr unsigned damage[] = {255, 179, 102, 13}, status[] = {255, 128, 26, 0};
    for (unsigned value = 0; value < 65536; ++value) {
        const unsigned low = value & 255;
        check(actions::damage_modifier(std::uint16_t(value)) == (low < 4 ? damage[low] : low),
              "Damage modifier did not preserve raw low-byte level");
        check(actions::status_modifier(std::uint16_t(value)) == (low < 4 ? status[low] : low),
              "Status modifier did not preserve raw low-byte level");
    }
}
void statuses() {
    Battler actor;
    for (unsigned group = 0; group < 7; ++group)
        for (unsigned old = 0; old < 256; ++old)
            for (unsigned value : {0u, 1u, 2u, 3u, 4u, 7u, 255u, 256u, 65535u}) {
                actor.afflictions.fill(171);
                actor.afflictions[group] = std::uint8_t(old);
                const auto before = actor;
                const bool accepted = !old || old > value;
                check(actions::inflict(actor, group, std::uint16_t(value)) == accepted,
                      "Status precedence result differs");
                for (unsigned i = 0; i < 7; ++i)
                    check(actor.afflictions[i] == (i == group && accepted ? std::uint8_t(value) : before.afflictions[i]),
                          "Status precedence changed another byte");
            }
    actor.npc = 213;
    const auto before = actor;
    check(!actions::inflict(actor, 65535, 1) && actor == before,
          "NPC early return read an unused status group");
    actor.npc = 0;
    rejects([&] { (void)actions::inflict(actor, 7, 1); });
}
void stat_bounds() {
    Battler actor;
    actor.base_offense = actor.base_defense = 100;
    actor.offense = 100; actions::increase_offense(actor);
    check(actor.offense == 106, "Offense increase is not one sixteenth");
    actor.offense = 124; actions::increase_offense(actor);
    check(actor.offense == 125, "Offense cap differs");
    actor.defense = 100; actions::decrease_defense(actor);
    check(actor.defense == 94, "Defense decrease is not one sixteenth");
    actor.defense = 76; actions::decrease_defense(actor);
    check(actor.defense == 75, "Defense floor differs");
    actor.offense = 65535; actions::increase_offense(actor);
    check(actor.offense == 125, "Wrapped increase cap differs");
    actor.offense = 0; actions::decrease_offense(actor);
    check(actor.offense == 65535, "Underflow was normalized before source comparison");
    actor.base_defense = 0; actor.defense = 0; actions::increase_defense(actor);
    check(actor.defense == 0, "Zero base cap differs");
}
void trials() {
    Battler attacker, target;
    for (unsigned status = 0; status < 256; ++status) {
        story::RandomState random{1234, 5678}, initial = random;
        target.afflictions[2] = std::uint8_t(status);
        attacker.speed = target.speed = 100;
        (void)actions::dodge(random, attacker, target);
        check((random == initial) == (status == 1 || status == 3 || status == 4),
              "Dodge disabled-status gate consumed the wrong RNG count");
    }
    target.afflictions.fill(0);
    story::RandomState random{1, 2}, initial = random;
    target.speed = 0; attacker.speed = 1;
    check(!actions::dodge(random, attacker, target) && random == initial,
          "Negative dodge difference consumed RNG");
    attacker.speed = 0;
    check(!actions::dodge(random, attacker, target) && random != initial,
          "Zero dodge probability did not consume its real trial");
    for (unsigned seed = 0; seed < 256; ++seed) {
        random = {std::uint16_t(seed * 257), std::uint16_t(seed * 17)};
        auto same = random;
        check(!actions::success255(random, 256) && random != same, "Byte-zero probability was not a real trial");
        check(actions::variance25(same, 0) == 0, "Variance changed a zero amount");
    }
}
void meters(eb::GameVersion version) {
    std::vector<std::uint8_t> image(0x160000);
    Roster roster(EnemyResources::import(image, version));
    party::State party(version);
    WorldPartyState guests;
    actions::Meters meters(roster, party, guests);
    auto& actor = roster.at(0);
    actor.maximum_hp = 300; actor.maximum_pp = 100;
    actor.hp = 200; actor.pp = 50; actor.row = 3; actor.id = 1;
    party.character(4).current_hp = 200;
    meters.set_hp(0, 150); meters.set_pp(0, 99);
    check(actor.hp == 200 && actor.pp == 50 && actor.target_hp == 150 && actor.target_pp == 99,
          "Player meter unexpectedly rolled immediately");
    check(party.character(4).target_hp == 150 && party.character(4).target_pp == 99 &&
          party.character(1).target_hp == 0, "Player source row was confused with character ID");
    meters.reduce_hp(0, 151); meters.reduce_pp(0, 65535);
    check(actor.target_hp == 0 && actor.target_pp == 0 && actor.hp == 200,
          "Subtracting player meters did not clamp correctly");
    actor.side = 255; actor.row = 255;
    meters.set_hp(0, 65535); meters.set_pp(0, 65535);
    check(actor.hp == 300 && actor.pp == 100, "Nonzero side did not use immediate clamped meters");
    actor.side = 0; actor.npc = 16; actor.row = 1;
    meters.set_hp(0, 77); meters.set_pp(0, 88);
    check(actor.hp == 77 && actor.pp == 88 && guests.second_guest.hp == 77 && !guests.first_guest.hp,
          "Guest meter did not use its real source word");
    actor.row = 2;
    const auto before = actor;
    rejects([&] { meters.set_hp(0, 22); });
    check(actor == before, "Rejected guest HP changed its battler");
    meters.set_pp(0, 22);
    check(actor.pp == 22, "Guest PP unnecessarily required an HP address");
    actor.npc = 0; actor.row = 6;
    rejects([&] { meters.set_pp(0, 22); });
}
}
int main() {
    try {
        modifiers(); statuses(); stat_bounds(); trials();
        meters(eb::GameVersion::US); meters(eb::GameVersion::JP);
        std::cout << "PASS native battle action rules: " << checks << " checks\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
