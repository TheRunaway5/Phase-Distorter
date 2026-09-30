#include "eb/native/world_party_creation.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool okay, const char *message) {
  if (!okay)
    throw std::runtime_error(message);
}
template <class F> void rejects(F &&f) {
  try {
    f();
  } catch (const std::exception &) {
    return;
  }
  throw std::runtime_error("Invalid native party creation accepted");
}
std::vector<std::uint8_t> content(eb::GameVersion version) {
  const bool jp = version == eb::GameVersion::JP;
  std::vector<std::uint8_t> bytes(0x160000);
  const auto put = [&](unsigned at, unsigned value) {
    bytes[at] = value;
    bytes[at + 1] = value >> 8;
  };
  for (unsigned i = 0; i < 17; ++i) {
    const auto at = (jp ? 0x3dffc : 0x3e012) + i * 8;
    put(at, 0);
    put(at + 2, 1);
    put(at + 4, 0);
    put(at + 6, i < 4 ? 24 + i : 28);
  }
  for (unsigned i = 0; i < 18; ++i) {
    bytes[(jp ? 0x159dda : 0x158f23) + i * 2 + 1] = i;
    put((jp ? 0x15a440 : 0x159589) + i * (jp ? 77 : 94) + (jp ? 16 : 33),
        500 + i);
  }
  return bytes;
}
struct Fixture {
  native_sprite_test::Fixture graphics;
  std::shared_ptr<SpriteResources> sprites =
      std::make_shared<SpriteResources>(graphics.bytes, graphics.layout);
  std::shared_ptr<ActionScriptData> scripts =
      std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09}, 0,
                                         std::vector<std::uint32_t>{0});
  ActorWorld actors;
  party::State party;
  WorldPartyData data;
  WorldPartyState formation;
  WorldParty updater;
  PreparedActorState prepared{
      123, 456, 37, 7, {100, 101, 102, 103, 104, 105, 106, 107}, 999};
  PartyTrail trail;
  std::uint16_t style{};
  WorldPartyCreation creation;
  explicit Fixture(eb::GameVersion version)
      : actors(sprites, scripts, version), party(version),
        data(content(version), version),
        updater(party, actors, data, formation),
        creation(party, actors, data, formation, updater, prepared, trail,
                 style) {
    for (unsigned i = 0; i < 256; ++i)
      trail.points[i] = {
          std::uint16_t(0xff00 + i), std::uint16_t(0x8123 + i * 3),
          std::uint16_t(i * 5),      std::uint16_t(i & 7),
          std::uint16_t(i & 7),      std::uint16_t(0xa500 + i)};
    actors.scene().camera_x = 0xff80;
    actors.scene().camera_y = 0x8000;
  }
  ActorId existing(unsigned member, unsigned role, unsigned cursor) {
    PreparedActorState p;
    p.variables[0] = member - 1;
    p.variables[1] = role - 24;
    const auto id = *actors.create_authored(actors.prepare_actor(0, 0, p),
                                            {role, role + 1});
    const auto index = party.party_count++;
    party.display_order[index] = member;
    party.controlled_order[index] = role - 24;
    formation.roles[index] = role;
    formation.trail_cursors[role - 24] = cursor;
    return id;
  }
};
unsigned finish(WorldPartyCreation::Operation &operation,
                bool unconscious = false) {
  unsigned services{};
  while (!operation.advance()) {
    check(++services < 40, "Native creation repeated its services");
    check(!operation.advance(), "Pending native creation service was skipped");
    if (operation.service()->kind ==
        WorldPartyCreationServiceKind::CompareInsertionMember)
      operation.respond_comparison(unconscious);
    else
      operation.respond();
  }
  return services;
}
void single(eb::GameVersion version) {
  for (unsigned style = 0; style < 8; ++style)
    for (const unsigned head : {0u, 1u, 255u})
      for (const unsigned member : {1u, 4u, 5u, 17u}) {
        Fixture f(version);
        f.style = style;
        f.trail.next_write = head;
        f.party.party_order[0] = member;
        const auto trail = f.trail;
        auto operation = f.creation.begin_insert(member);
        check(!operation->advance() && operation->created().size() == 1 &&
                  operation->service()->kind ==
                      WorldPartyCreationServiceKind::RefreshMovementPolicy,
              "Creation did not suspend after real sort/guest refresh");
        const auto made = operation->created()[0];
        auto &actor = f.actors.actor(made.actor);
        const auto point = f.trail.points[head ? head - 1 : 255];
        check(made.role == (member < 5 ? 23 + member : 28) &&
                  actor.appearance.sprite() == (style == 3 ? 1u : 0u),
              "Native creation chose incorrect authored role or small sprite");
        check(actor.action().position ==
                      std::array<std::uint32_t, 3>{
                          std::uint32_t(point.x) << 16 | 0x8000,
                          std::uint32_t(point.y) << 16 | 0x8000,
                          37u << 16 | 0x8000} &&
                  actor.action().animation == 0xffff &&
                  actor.behavior.direction == 0,
              "Creation lost source position/fraction or applied prepared "
              "facing early");
        check(std::uint16_t(actor.behavior.projected_x) ==
                      std::uint16_t(point.x - 0xff80) &&
                  std::uint16_t(actor.behavior.projected_y) ==
                      std::uint16_t(point.y - 0x8000),
              "Creation did not apply source screen projection");
        check(f.prepared.x == 123 && f.prepared.y == 456 &&
                  f.prepared.direction == 7 &&
                  f.prepared.variables[0] == member - 1 &&
                  f.prepared.variables[1] == made.role - 24,
              "Prepared state was committed at the wrong service phase");
        actor.behavior.direction = 6;
        f.prepared.variables[7] = 0xbeef;
        operation->respond();
        check(!operation->advance() &&
                  operation->service()->kind ==
                      WorldPartyCreationServiceKind::RefreshWindowPalette,
              "Palette service is out of order");
        operation->respond();
        check(operation->advance() && !f.creation.busy() &&
                  f.prepared.x == point.x && f.prepared.y == point.y &&
                  f.prepared.direction == 6 &&
                  f.prepared.variables[7] == 0xbeef,
              "Creation restored stale state after nested service work");
        check(f.trail == trail && !f.actors.ticks() && f.actors.size() == 1,
              "Creation advanced actors or rewrote follower trail");
      }
}
void comparisons(eb::GameVersion version) {
  for (const bool retained : {false, true})
  for (const bool unconscious : {false, true}) {
    Fixture f(version);
    f.party.party_order = {1, 2};
    f.trail.next_write = 9;
    f.existing(1, 24, 77);
    unsigned record = 0;
    if (retained) {
      WorldActorSpec old;
      old.sprite = 0;
      old.action.variables[1] = record = 3;
      const auto historical = *f.actors.create_authored(old, {1, 2});
      f.actors.erase(historical);
    }
    f.party.character(record + 1).afflictions[0] = unconscious;
    auto operation = f.creation.begin_insert(2);
    finish(*operation);
    const auto &actor = f.actors.actor(operation->created()[0].actor);
    const bool sorted_after_new_member = unconscious && !retained;
    check((actor.action().position[0] >> 16) ==
                  f.trail.points[unconscious ? 8 : 76].x &&
              f.party.display_order[0] == (sorted_after_new_member ? 2 : 1) &&
              f.party.display_order[1] == (sorted_after_new_member ? 1 : 2) &&
              f.formation.trail_cursors[0] == (unconscious && retained ? 9 : 77),
          "Insertion predicate's observable positional cursor effect was lost");
  }
  Fixture f(version);
  f.party.party_order = {1, 2};
  f.trail.next_write = 9;
  f.existing(1, 24, 77);
  WorldActorSpec probe;
  probe.sprite = 0;
  probe.action.variables[1] = 3;
  f.actors.create_authored(probe, {1, 2});
  f.party.character(4).afflictions[0] = 1;
  auto operation = f.creation.begin_insert(2);
  check(finish(*operation) == 2 && f.formation.trail_cursors[0] == 9,
        "Live member-ID role did not supply insertion predicate");
}
void rebuild(eb::GameVersion version) {
  Fixture f(version);
  f.style = 3;
  f.trail.next_write = 255;
  f.party.party_order = {1, 2, 3, 4, 9, 17};
  f.party.display_order.fill(17);
  f.party.controlled_order.fill(5);
  f.party.party_count = 6;
  f.formation.roles.fill(29);
  f.actors.appearance_scene().footstep_kind = 9;
  f.actors.appearance_scene().footstep_override = 4;
  auto operation = f.creation.begin_rebuild();
  check(finish(*operation) == 12 && operation->created().size() == 6 &&
            f.party.party_count == 6 && f.party.controlled_count == 4 &&
            f.party.display_order == f.party.party_order,
        "Rebuild did not create six members in authored service order");
  check(f.formation.roles ==
                std::array<std::uint16_t, 6>{24, 25, 26, 27, 28, 29} &&
            f.actors.appearance_scene().footstep_kind == 3 &&
            !f.actors.appearance_scene().footstep_override && !f.actors.ticks(),
        "Rebuild role/footstep state differs or ran a synthetic tick");
  Fixture empty(version);
  empty.style = 7;
  empty.formation.current_leader_role = 24;
  empty.party.party_count = 4;
  empty.actors.appearance_scene().footstep_override = 1;
  auto none = empty.creation.begin_rebuild();
  check(none->advance() && none->created().empty() &&
            !empty.party.party_count &&
            empty.formation.current_leader_role == 24 &&
            empty.actors.appearance_scene().footstep_kind == 7 &&
            !empty.actors.appearance_scene().footstep_override,
        "Empty rebuild omitted its footstep reset");
}
void failure(eb::GameVersion version) {
  {
    Fixture f(version);
    party::State other(version);
    WorldParty alien(other, f.actors, f.data, f.formation);
    rejects([&] {
      WorldPartyCreation bad(f.party, f.actors, f.data, f.formation, alien,
                             f.prepared, f.trail, f.style);
    });
    check(!f.party.party_count && !f.actors.size(),
          "Wrong updater mutated owners");
  }
  {
    Fixture f(version);
    f.trail.next_write = 256;
    rejects([&] { f.creation.begin_insert(1); });
    check(!f.creation.failed(),
          "Rejected invalid arguments poisoned an idle owner");
  }
  {
    Fixture f(version);
    auto op = f.creation.begin_insert(1);
    op.reset();
    check(f.creation.failed(), "Dropped creation could replay mutations");
    rejects([&] { f.creation.begin_rebuild(); });
  }
  {
    Fixture f(version);
    f.existing(1, 24, 5);
    f.existing(2, 25, 7);
    auto op = f.creation.begin_insert(1);
    rejects([&] { finish(*op); });
    check(f.creation.failed() && f.actors.size() == 2,
          "Occupied adjacent role was silently replaced");
    rejects([&] { op->advance(); });
  }
  {
    Fixture f(version);
    f.existing(1, 24, 256);
    auto op = f.creation.begin_insert(2);
    rejects([&] { finish(*op); });
    check(f.creation.failed() && f.actors.size() == 1,
          "Invalid cursor accessed outside the native ring");
  }
  {
    Fixture f(version);
    f.existing(1, 24, 12);
    f.party.party_order = {1, 2};
    WorldActorSpec invalid;
    invalid.sprite = 0;
    invalid.action.variables[1] = 6;
    const auto old = *f.actors.create_authored(invalid, {1, 2});
    f.actors.erase(old);
    auto op = f.creation.begin_insert(2);
    rejects([&] { op->advance(); });
    check(f.creation.failed() && f.actors.size() == 1,
          "Invalid retained comparison mapping was accepted");
  }
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
      single(version);
      comparisons(version);
      rebuild(version);
      failure(version);
    }
    std::cout << "PASS native party creation/rebuild, explicit insertion "
                 "predicate, trail/role ownership and ordered services\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
