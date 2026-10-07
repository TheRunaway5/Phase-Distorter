#include "eb/native/world_party_creation.hpp"
#include "native_sprite_fixture.hpp"
#include "native_world_bootstrap_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay, const char *message) {
  ++checks;
  if (!okay)
    throw std::runtime_error(message);
}
template <class F> void rejects(F &&fn) {
  bool rejected{};
  try {
    fn();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, "Invalid bootstrap accepted");
}
std::vector<std::uint8_t> content(eb::GameVersion version) {
  std::vector<std::uint8_t> bytes(0x160000);
  const auto put = [&](unsigned at, unsigned n) {
    bytes[at] = n;
    bytes[at + 1] = n >> 8;
  };
  put(0x30186, 749);
  const auto l = walking_data_layout(version);
  for (unsigned i = 0; i < 14; ++i) {
    put(l.cardinal + i * 4, 0x6000 + i);
    put(l.cardinal + i * 4 + 2, 1);
    put(l.diagonal + i * 4, 0xf8e6 + i);
    put(l.allowed + i * 2, 255);
  }
  const bool jp = version == eb::GameVersion::JP;
  for (unsigned i = 0; i < 17; ++i) {
    const unsigned at = (jp ? 0x3dffc : 0x3e012) + i * 8;
    put(at, 1);
    put(at + 2, 1);
    put(at + 4, 0);
    put(at + 6, i < 4 ? 24 + i : 28);
  }
  return bytes;
}
struct Fixture : bootstrap_test::Fixture {
  static std::shared_ptr<SpriteResources> sprites() {
    native_sprite_test::Fixture f;
    return std::make_shared<SpriteResources>(f.bytes, f.layout);
  }
  explicit Fixture(eb::GameVersion version, bool pajamas = true)
      : bootstrap_test::Fixture(content(version), version, sprites(),
                                std::make_shared<ActionScriptData>(
                                    std::vector<std::uint8_t>{0x09}, 0,
                                    std::vector<std::uint32_t>{0, 0}),
                                pajamas) {}
};
void initialized(Fixture &f, ActorId id, bool pajamas,
                 const PartyTrail &trail) {
  check(f.actors.actor(id).appearance_context.shape == 1 &&
            !f.maintenance.possession_actor && f.trail.next_write == 0 &&
            !f.control.automatic_mode && !f.control.automatic_ticks &&
            !f.control.automatic_restore_style && !f.party.party_status &&
            f.formation.current_leader_role == 24 && !f.party.party_count &&
            !f.party.controlled_count &&
            f.following.pajamas == unsigned(pajamas),
        "Initializer missed an authoritative reset");
  check(f.party.display_order == std::array<std::uint8_t, 6>{} &&
            f.formation.hp_alert_shown == std::array<std::uint16_t, 6>{},
        "Initializer did not clear all six display/HP latch positions");
  check(f.formation.roles ==
                std::array<std::uint16_t, 6>{26, 27, 29, 24, 28, 25} &&
            f.formation.trail_cursors ==
                std::array<std::uint16_t, 6>{11, 22, 33, 44, 55, 66} &&
            f.trail.points == trail.points &&
            f.party.party_order ==
                std::array<std::uint8_t, 6>{4, 2, 1, 3, 9, 17} &&
            f.party.controlled_order ==
                std::array<std::uint8_t, 6>{2, 3, 5, 0, 4, 1},
        "Initializer conflated current selector/display list with retained "
        "party state");
  check(f.control.x_fraction == 0x1234 && f.control.y_fraction == 0x5678 &&
            f.control.moved_this_tick == 9 &&
            f.control.trodden_surface_flags == 7 && f.control.camera_moved &&
            f.control.camera_focus == CameraTarget{AuthoredRoleRef{7}} &&
            f.control.direction_interval_ticks == 987 &&
            f.control.direction_interval_previous_mode == 2 &&
            f.control.bicycle_turn_frames == 654 &&
            f.actors.scene().camera_x == 0x1122 &&
            f.actors.scene().camera_y == 0xaabb,
        "Initializer reset unrelated movement/camera state");
  check(f.maintenance.possessed_players == 7 &&
            f.maintenance.enemy_touched == 8 &&
            f.control.encounter.mode == 9 &&
            f.maintenance.last_sector_x == 10 &&
            f.maintenance.last_sector_y == 11 &&
            f.maintenance.auto_sector_music == 12 &&
            f.maintenance.overworld_status_suppression == 13 &&
            f.formation.first_guest == WorldPartyGuest{9, 1234} &&
            f.formation.second_guest == WorldPartyGuest{17, 4567},
        "Initializer reset unrelated maintenance or guest state");
  for (unsigned i = 1; i <= 6; ++i)
    check(f.party.character(i).current_hp == i * 123 &&
              f.party.character(i).afflictions[0] == i,
          "Initializer overwrote restored character state");
  check(f.actors.ticks() == 0 && f.party.money_carried == 0x10203040 &&
            f.party.bank_balance == 0x87654321,
        "Initializer advanced gameplay or rewrote saved money");
}
void happy(eb::GameVersion version, bool pajamas, unsigned priority) {
  Fixture f(version, pajamas);
  f.prepared.priority = priority;
  const auto trail = f.trail;
  const auto flags = f.flags;
  const auto id = f.bootstrap.create_controller_and_initialize(f.prepared);
  const auto &a = f.actors.actor(id);
  check(f.actors.actor_for_role(23) == id && f.actors.size() == 1 &&
            a.script_only() && !a.has_appearance() &&
            !f.actors.actor_for_role(24),
        "Bootstrap fabricated leader identity or acquired controller artwork");
  check(a.action().position ==
                std::array<std::uint32_t, 3>{0x8000, 0x8000, 0xfedc8000} &&
            a.action().variables == f.prepared.variables &&
            a.action().animation == 0xffff && a.action().priority == priority &&
            a.behavior.direction == 0 &&
            a.action().velocity == std::array<std::uint32_t, 3>{},
        "Controller bypassed actual script initialization");
  check(f.prepared.x == 0x1234 && f.prepared.y == 0x9876 && f.flags == flags,
        "Bootstrap mutated caller preparation or story flags");
  initialized(f, id, pajamas, trail);
  // Re-entry resets only authored state; it never allocates another controller.
  f.maintenance.possession_actor = id;
  f.formation.hp_alert_shown.fill(9);
  f.bootstrap.initialize();
  initialized(f, id, pajamas, trail);
  check(f.actors.size() == 1 && f.actors.actor_for_role(23) == id,
        "Initializer re-entry replaced controller identity");
  const auto count = f.actors.size();
  rejects([&] { f.bootstrap.create_controller_and_initialize(f.prepared); });
  check(f.actors.size() == count && f.formation.current_leader_role == 24,
        "Duplicate bootstrap partially modified live state");
  check(f.bootstrap.uses(f.actors, f.party, f.formation, f.trail, f.control,
                         f.maintenance, f.following),
        "Bootstrap lost owner identity");
  PartyTrail other;
  check(!f.bootstrap.uses(f.actors, f.party, f.formation, other, f.control,
                          f.maintenance, f.following),
        "Bootstrap accepted foreign trail owner");
}
void invalid(eb::GameVersion version) {
  Fixture f(version);
  const auto trail = f.trail;
  rejects([&] { f.bootstrap.initialize(); });
  check(f.formation.current_leader_role == 26 && f.party.party_count == 6 &&
            f.trail == trail && f.actors.size() == 0,
        "Missing controller partially reset owners");
  f.actors.scene().event_flags = {};
  rejects([&] { f.bootstrap.create_controller_and_initialize(f.prepared); });
  check(f.actors.size() == 0 && f.party.party_status == 0xac,
        "Missing flags allowed partial controller publication");
  f.actors.scene().event_flags = f.flags;
  const auto controller =
      f.bootstrap.create_controller_and_initialize(f.prepared);
  f.actors.actor(controller).behavior.tick = ActorTickCallback::CenterCamera;
  check(f.actors.advance_tick() == WorldTickResult::NeedsCameraRefresh &&
            f.actors.in_tick(),
        "Bootstrap fixture failed to suspend its actual actor tick");
  f.party.party_status = 0x7b;
  f.formation.hp_alert_shown[1] = 9;
  rejects([&] { f.bootstrap.initialize(); });
  rejects([&] { f.bootstrap.create_controller_and_initialize(f.prepared); });
  check(f.party.party_status == 0x7b && f.formation.hp_alert_shown[1] == 9 &&
            f.actors.ticks() == 0 && f.actors.camera_refresh().has_value(),
        "Bootstrap partially reset an active actor transaction");
  const auto other = version == eb::GameVersion::US ? eb::GameVersion::JP
                                                    : eb::GameVersion::US;
  WorldBootstrapData other_data(content(other), other);
  rejects([&] {
    WorldBootstrap bad(other_data, f.walking, f.actors, f.party, f.formation,
                       f.trail, f.control, f.maintenance, f.following);
  });
  auto bytes = content(version);
  bytes[0x30186] = bytes[0x30187] = 0;
  rejects([&] { WorldBootstrapData bad(bytes, version); });
  bytes[0x30187] = 5;
  rejects([&] { WorldBootstrapData bad(bytes, version); });
  rejects([&] { WorldBootstrapData bad({}, version); });
}
void rebuild(eb::GameVersion version, bool empty) {
  Fixture f(version);
  f.party.party_order = {};
  if (!empty)
    f.party.party_order[0] = 1;
  const auto controller =
      f.bootstrap.create_controller_and_initialize(f.prepared);
  WorldPartyData data(content(version), version);
  WorldParty party(f.party, f.actors, data, f.formation);
  const std::uint16_t style{};
  WorldPartyCreation creator(f.party, f.actors, data, f.formation, party,
                             f.prepared, f.trail, style);
  auto op = creator.begin_rebuild();
  if (empty) {
    check(op->advance() && op->complete() && op->created().empty() &&
              f.formation.current_leader_role == 24 &&
              f.formation.roles == std::array<std::uint16_t, 6>{} &&
              !party.leader(),
          "Empty source rebuild failed to preserve separate current selector");
  } else {
    check(!op->advance() &&
              op->service()->kind ==
                  WorldPartyCreationServiceKind::RefreshMovementPolicy &&
              op->created().size() == 1 &&
              op->created()[0].actor == f.actors.actor_for_role(24) &&
              f.formation.current_leader_role == 24 &&
              party.leader() == f.actors.actor_for_role(24),
          "Real party creation did not hand off the initialized live owners");
    check(!op->advance() && f.actors.size() == 2 && f.actors.ticks() == 0,
          "Pending real movement policy repeated party creation or advanced a "
          "frame");
  }
  check(f.actors.actor_for_role(23) == controller,
        "Party rebuild replaced the controller");
}
} // namespace
int main() {
  try {
    for (auto region : {eb::GameVersion::US, eb::GameVersion::JP}) {
      for (unsigned priority : {0u, 1u, 0xabcdu, 0xffffu}) {
        happy(region, false, priority);
        happy(region, true, priority);
      }
      invalid(region);
      rebuild(region, false);
      rebuild(region, true);
    }
    std::cout << "PASS native world bootstrap: " << checks << " checks\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
