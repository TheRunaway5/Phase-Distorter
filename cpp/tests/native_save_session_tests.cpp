#include "eb/native/saves/session.hpp"
#include "native_save_test_data.hpp"
#include <iostream>
#include <vector>

namespace {
using namespace save_test;
using namespace eb::native::saves;
template <class F> void rejects(F operation) {
  bool failed = false;
  try {
    operation();
  } catch (const std::exception &) {
    failed = true;
  }
  require(failed, "Invalid save-session operation was accepted");
}
std::vector<std::uint8_t> content(eb::GameVersion version) {
  const auto l = continue_resource_layout(version);
  std::vector<std::uint8_t> result(l.initial_stats + 80);
  for (unsigned i = 0; i < 56; ++i)
    for (unsigned j = 0; j < 4; ++j)
      put(result.data() + l.hotspots + i * 8 + j * 2, i * 137 + j * 1999);
  put(result.data() + l.hotspots + 55 * 8, 0xffff);
  for (unsigned i = 0; i < 3; ++i) {
    put(result.data() + l.hp_meter_speeds + i * 4, 0x2000 - i * 0x800);
    put(result.data() + l.hp_meter_speeds + i * 4 + 2, 1);
  }
  for (unsigned i = 0; i < 4; ++i) {
    auto *p = result.data() + l.initial_stats + i * 20;
    put(p, 1015);
    put(p + 2, 138);
    put(p + 4, 20);
    put(p + 6, i == 3 ? 15 : 1);
    put(p + 8, i == 3 ? 6000 : 0);
    for (unsigned j = 0; j < 10; ++j)
      p[10 + j] = 17 * i + j;
  }
  return result;
}
void run(eb::GameVersion version) {
  auto assets = content(version);
  auto resources = std::make_shared<ContinueResources>(assets, version);
  assets.clear(); // Import owns its values.
  const auto requirements = resources->new_game_requirements();
  require(requirements.respawn == Position{8120, 1104} &&
              requirements.prologue_position == Position{2112, 1768} &&
              requirements.money == 20 &&
              requirements.characters[3].level == 15 &&
              requirements.characters[3].additional_experience == 6000 &&
              requirements.characters[3].starting_items[9] == 60,
          "New-game requirements were guessed or lost imported fields");
  require(resources->hotspot(55, 0xff, 0x12345678).x1 == 0xfff8,
          "Hotspot conversion lost source word wrap");
  for (unsigned speed = 1; speed <= 3; ++speed) {
    const auto timing = resources->text_timing(speed);
    require(timing.selected_speed == speed - 1 &&
                timing.wait == (speed == 3 ? 0 : speed * 30) &&
                timing.hp_meter_speed == 0x12000 - (speed - 1) * 0x800,
            "Continue timing policy differs");
  }
  auto archive = SaveArchive::empty(version);
  auto state = SaveArchive(version, fixture(version)).load(0);
  state.game.text_speed = 2;
  state.game.auto_fight = 0xa5;
  state.game.favourite_thing[1] = 7;
  state.game.leader_x = 0;
  state.game.leader_y = 0xffff;
  state.game.leader_direction = 6;
  state.game.hotspot_modes = {3, 0};
  state.game.hotspot_ids = {55, 255};
  state.game.hotspot_content_references = {0xc1234567, 0xdeadbeef};
  state.game.party_order = {1, 4, 5, 0, 2, 3};
  archive.save(0, state, state.game.elapsed_timer);
  archive.save(1, state, state.game.elapsed_timer);
  Session session(archive, resources);
  const auto before = copy(session.archive().bytes());
  rejects([&] { session.save_current(state, 1); });
  auto selected = session.continue_slot(0);
  const auto &h = selected.handoff;
  require(session.selected_slot() == 0 &&
              copy(session.archive().bytes()) == before,
          "Continue changed persisted bytes");
  require(h.respawn == Position{0, 0xffff} && h.map.center == h.respawn &&
              h.map.scroll == Position{0xff80, 0xff8f} &&
              h.map.top_left_tiles == Position{0xfff0, 8177} &&
              h.map.sector_x == 0 && h.map.sector_y == 511 &&
              h.leader_direction == 6,
          "Source map anchor wrap differs");
  require(h.hotspot_updates[0] == resources->hotspot(55, 3, 0xc1234567) &&
              !h.hotspot_updates[1],
          "Zero hotspot mode was read/cleared instead of left untouched");
  require(h.party_member_count == 3 &&
              h.party_members ==
                  std::array<std::uint8_t, 6>{1, 4, 5, 0, 0, 0} &&
              !h.next_interaction && !h.current_interaction &&
              h.current_interaction_type == 0xffff,
          "Continue queue/membership handoff differs");
  const auto ordered = continue_steps();
  require(ordered.size() == 16 &&
              ordered.front() == ContinueStep::CloseMenuWindows &&
              ordered[1] == ContinueStep::RebuildTimedItemTransformations &&
              ordered[8] == ContinueStep::PrepareMapAndActivateActors &&
              ordered[10] == ContinueStep::RestoreTimedDeliveryActors &&
              ordered.back() == ContinueStep::PublishFirstFrame,
          "Continue owner dependencies disappeared or reordered");
  eb::native::party::State live(version);
  restore_party(selected.state, live);
  require(live.auto_fight == 0xa5, "Party restore lost the raw auto-fight owner");
  const auto recaptured = capture_party(live, selected.state);
  SaveArchive roundtrip = archive;
  roundtrip.save(0, recaptured, recaptured.game.elapsed_timer);
  require(copy(roundtrip.bytes()) == before,
          "Party import/capture changed persisted or archival fields");
  live.auto_fight = 0x7f;
  live.money_carried = 123456;
  live.bank_balance = 654321;
  live.character(6).items[13] = 0xf1;
  live.character(1).target_hp = 4321;
  live.name_field(4)[0] = 0xab;
  live.name_field(eb::native::party::NameField::Pet)[5] = 0xcd;
  live.party_order = {4, 3, 2, 1, 0, 0};
  live.party_count = 4;
  auto latest = capture_party(live, selected.state);
  require(latest.game.auto_fight == 0x7f &&
              latest.game.money_carried == 123456 &&
              latest.game.bank_balance == 654321 &&
              latest.characters[5].values.items[13] == 0xf1 &&
              latest.characters[0].values.target_hp == 4321 &&
              latest.characters[3].name[0] == 0xab &&
              latest.game.pet_name[5] == 0xcd &&
              latest.game.party_order[0] == 4 && latest.game.party_count == 4 &&
              latest.event_flags == selected.state.event_flags &&
              latest.characters[5].reserved_92_93 ==
                  selected.state.characters[5].reserved_92_93,
          "Party capture used a stale owner or lost unowned fields");
  session.save_current(latest, 987654321);
  require(session.archive().load(0).game.elapsed_timer == 987654321 &&
              session.archive().load(0).characters[5].values.items[13] == 0xf1,
          "Current snapshot was not saved");
  const auto saved = copy(session.archive().bytes());
  selected.state.game.money_carried = 1;
  require(copy(session.archive().bytes()) == saved,
          "Returned restore value aliases archive");
  rejects([&] { (void)session.continue_slot(2); });
  require(session.selected_slot() == 0 &&
              copy(session.archive().bytes()) == saved,
          "Failed continuation changed selection/archive");
  auto invalid = state;
  invalid.game.text_speed = 0;
  auto malformed_archive = archive;
  malformed_archive.save(1, invalid, 0);
  Session malformed(malformed_archive, resources);
  (void)malformed.continue_slot(0);
  rejects([&] { (void)malformed.continue_slot(1); });
  require(malformed.selected_slot() == 0,
          "Invalid semantic state changed selected slot");
  invalid = state;
  invalid.game.hotspot_ids[0] = 56;
  rejects([&] { (void)prepare_continue(invalid, *resources); });
  invalid = state;
  invalid.game.favourite_thing[1] = 0;
  rejects([&] { (void)prepare_continue(invalid, *resources); });
  const auto other = version == eb::GameVersion::US ? eb::GameVersion::JP
                                                    : eb::GameVersion::US;
  eb::native::party::State wrong_party(other);
  wrong_party.money_carried = 88;
  rejects([&] { restore_party(state, wrong_party); });
  require(wrong_party.money_carried == 88,
          "Rejected party import mutated owner");
  rejects([&] { (void)capture_party(wrong_party, state); });
  rejects([&] { Session bad(SaveArchive::empty(other), resources); });
  rejects([&] { Session bad(archive, {}); });
  auto copied_session = session;
  copied_session.erase_slot(0);
  require(!copied_session.selected_slot() && session.selected_slot() == 0 &&
              copy(session.archive().bytes()) == saved,
          "Session copies share mutable archive/selection");
  session.copy_slot(0, 1);
  require(!session.selected_slot(),
          "Replacing selected file did not invalidate stale selection");
  rejects([&] { session.save_current(latest, 1); });
  (void)session.continue_slot(1);
  session.copy_slot(1, 1);
  require(session.selected_slot() == 1,
          "Self-copy unexpectedly invalidated selection");
  session.repair_integrity();
  require(!session.selected_slot(),
          "Explicit archive repair retained old selection");
  for (unsigned speed : {0u, 4u, 255u})
    rejects([&] { (void)resources->text_timing(speed); });
  const auto good = content(version);
  rejects([&] {
    ContinueResources truncated{
        std::span<const std::uint8_t>(good).first(good.size() - 1), version};
  });
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
    std::cout << "Native save session: both-region restore, live-party "
                 "capture, lifecycle and rejection tests passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
