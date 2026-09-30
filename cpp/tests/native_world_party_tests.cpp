#include "eb/native/world_party.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
template<class F> void rejects(F &&fn) {
    try { fn(); } catch (const std::exception &) { return; }
    throw std::runtime_error("Invalid world party operation accepted");
}
std::vector<std::uint8_t> content() {
    std::vector<std::uint8_t> bytes(0x160000);
    const auto put = [&](unsigned at, unsigned value) { bytes[at] = value; bytes[at + 1] = value >> 8; };
    for (unsigned i = 0; i < 17; ++i) {
        put(0x3e012 + i * 8, 1);
        put(0x3e012 + i * 8 + 2, 1);
        put(0x3e012 + i * 8 + 4, 0);
        put(0x3e012 + i * 8 + 6, i < 4 ? 24 + i : 28);
    }
    for (unsigned i = 0; i < 18; ++i) {
        bytes[0x158f23 + i * 2 + 1] = i;
        put(0x159589 + i * 94 + 33, 200 + i);
    }
    return bytes;
}
struct Fixture {
    native_sprite_test::Fixture graphics;
    std::shared_ptr<SpriteResources> sprites = std::make_shared<SpriteResources>(graphics.bytes, graphics.layout);
    std::shared_ptr<ActionScriptData> scripts = std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09}, 0, std::vector<std::uint32_t>{0});
    ActorWorld world{sprites, scripts, eb::GameVersion::US};
    party::State party{eb::GameVersion::US};
    WorldPartyData data{content(), eb::GameVersion::US};
    WorldPartyState state;
    WorldParty formation{party, world, data, state};
    Fixture() {
        party.party_count = 6;
        party.party_order = {1, 2, 3, 4, 9, 17};
        party.display_order = {3, 17, 1, 2, 9, 4};
        party.controlled_order = {2, 5, 0, 1, 4, 3};
        state.roles = {26, 29, 24, 25, 28, 27};
        state.trail_cursors = {10, 20, 30, 40, 50, 60};
        state.first_guest = {17, 75}; state.second_guest = {9, 44};
        party.character(1).afflictions[0] = 1;
        party.character(3).afflictions[0] = 2;
        for (unsigned i = 0; i < 6; ++i) {
            WorldActorSpec actor; actor.sprite = 1;
            actor.action.variables[1] = i;
            actor.action.variables[5] = 99;
            world.create_authored(actor, {24 + i, 25 + i});
        }
    }
};
void normal() {
    Fixture f;
    const auto active = f.world.actors();
    auto operation = f.formation.begin_update();
    check(f.formation.busy() && !operation->complete(), "Formation did not retain operation");
    rejects([&] { f.formation.begin_update(); });
    rejects([&] { f.formation.refresh_guests(); });
    rejects([&] { operation->respond(); });
    check(!operation->advance() && operation->service() == WorldPartyService::RefreshMovementPolicy,
          "Formation did not suspend for movement policy");
    check(f.party.display_order == std::array<std::uint8_t, 6>{2, 4, 1, 3, 9, 17} &&
          f.party.controlled_order == std::array<std::uint8_t, 6>{1, 3, 0, 2, 4, 5} &&
          f.state.roles == std::array<std::uint16_t, 6>{25, 27, 24, 26, 28, 29}, "Formation stable sort differs");
    check(f.state.trail_cursors == std::array<std::uint16_t, 6>{10, 30, 20, 60, 50, 40},
          "Trail cursors followed character identity instead of formation position");
    check(f.state.first_guest == WorldPartyGuest{9, 44} && f.state.second_guest == WorldPartyGuest{17, 217} &&
          f.party.controlled_count == 4, "Guest identity switch lost HP or controlled count");
    check(f.formation.leader() == f.world.actor_for_role(25) && f.world.actors() == active && f.world.ticks() == 0,
          "Formation changed actor traversal or advanced a tick");
    for (unsigned i = 0; i < 6; ++i)
        check(f.world.actor(*f.world.actor_for_role(f.state.roles[i])).action().variables[5] == i * 2,
              "Formation spacing was not published to actor variable5");
    // A nested movement service may mutate live state. Resumption must neither
    // sort again nor restore stale copies of character/guest values.
    f.party.character(2).afflictions[0] = 1;
    f.state.first_guest.hp = 19;
    f.state.trail_cursors[1] = 199;
    check(!operation->advance(), "Pending movement service was skipped");
    operation->respond();
    check(!operation->advance() && operation->service() == WorldPartyService::RefreshWindowPalette,
          "Formation palette service order differs");
    check(f.party.display_order[0] == 2 && f.state.first_guest.hp == 19 && f.state.trail_cursors[1] == 199,
          "Formation replayed mutations after a service");
    operation->respond();
    check(operation->advance() && operation->advance() && operation->complete() && !f.formation.busy(),
          "Formation did not finish after both real services");
    rejects([&] { operation->respond(); });
}
void failure() {
    { Fixture f; auto operation = f.formation.begin_update(); operation.reset();
      check(f.formation.failed() && !f.formation.busy(), "Abandoned formation was reusable");
      rejects([&] { f.formation.begin_update(); }); }
    { Fixture f; const auto order = f.party.display_order; f.party.controlled_order[5] = 6;
      auto operation = f.formation.begin_update(); rejects([&] { operation->advance(); });
      check(f.formation.failed() && f.party.display_order == order, "Invalid formation partially sorted");
      rejects([&] { operation->advance(); }); }
    { Fixture f; f.world.erase(*f.world.actor_for_role(27));
      auto operation = f.formation.begin_update(); rejects([&] { operation->advance(); }); }
    { Fixture f; f.party.party_count = 0; check(!f.formation.leader(), "Empty party invented a leader");
      const auto order = f.party.display_order;
      const auto roles = f.state.roles;
      const auto cursors = f.state.trail_cursors;
      f.state.current_leader_role = 0xabcd;
      auto operation = f.formation.begin_update();
      rejects([&] { operation->advance(); });
      check(f.formation.failed() && !operation->service() &&
            f.state.current_leader_role == 0xabcd && f.party.display_order == order &&
            f.state.roles == roles && f.state.trail_cursors == cursors,
            "Invalid empty update changed retained formation or reached a service");
      rejects([&] { operation->advance(); }); }
    { Fixture f; f.party.party_order.fill(1); rejects([&] { f.formation.refresh_guests(); });
      check(f.state.first_guest == WorldPartyGuest{17, 75}, "Invalid membership partly changed guests"); }
}
void data() {
    const WorldPartyData imported(content(), eb::GameVersion::US);
    check(imported.initial(1).preferred_role == 24 && imported.initial(17).preferred_role == 28 &&
          imported.guest_hp(0) == 200 && imported.guest_hp(17) == 217, "Party resources lost authored zero/role entries");
    rejects([&] { imported.initial(0); }); rejects([&] { imported.initial(18); });
    rejects([&] { imported.guest_hp(18); });
    rejects([&] { WorldPartyData bad({}, eb::GameVersion::US); });
    auto bytes = content(); bytes[0x3e012 + 6] = 23;
    rejects([&] { WorldPartyData bad(bytes, eb::GameVersion::US); });
    Fixture f; party::State jp(eb::GameVersion::JP);
    rejects([&] { WorldParty bad(jp, f.world, f.data, f.state); });
}
} // namespace
int main() { try { data(); normal(); failure();
    std::cout << "PASS native party formation, positional trail cursors, guest HP and service lifetime\n";
} catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; } }
