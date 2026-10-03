#include "eb/native/battle/turn_scheduler.hpp"
#include "eb/native/saves/archive.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "native_save_test_data.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void check(bool value, const char *message) {
  ++checks;
  if (!value)
    throw std::runtime_error(message);
}
template <class F> void rejects(F operation, const char *message) {
  bool rejected{};
  try {
    operation();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, message);
}
BattleCombatants artwork() {
  std::vector<std::uint8_t> bytes(84);
  const auto put = [&](unsigned at, unsigned value) {
    bytes.at(at) = std::uint8_t(value);
    bytes.at(at + 1) = std::uint8_t(value >> 8);
  };
  put(0, 80);
  put(2, 0xc0);
  bytes[4] = 1;
  put(48, 1);
  put(56, 64);
  put(58, 0xc0);
  bytes[64] = 1;
  bytes[67] = 255;
  bytes[80] = 0xe5;
  bytes[81] = 0xff;
  bytes[82] = 0xff;
  bytes[83] = 0xff;
  return BattleCombatants(bytes, {0, 16, 48, 56, 64, 68, 4, 0, 2, 1, 1, 1, 1});
}
struct Input : dialogue_substitution_test_assets::Input {
  unsigned action_table;
  explicit Input(eb::GameVersion version)
      : dialogue_substitution_test_assets::Input(version),
        action_table(version == eb::GameVersion::US ? 0x157b68 : 0x158b1e) {
    for (unsigned id = 0; id < 231; ++id) {
      enemy_byte(id, 69, 2);
      for (unsigned i = 0; i < 4; ++i) {
        enemy_word(id, 70 + i * 2, 4);
        enemy_byte(id, 80 + i, 19 + i);
      }
    }
    for (unsigned id = 0; id < 318; ++id)
      image[action_table + id * 12 + 1] = 4;
    for (unsigned i = 0; i < 19; ++i)
      image[npc + i * 2] = 0;
    for (unsigned id = 1; id <= 20; ++id) {
      const auto at = items + id * item_stride + name_size;
      image[at] = 0x20;
      put(at + 1, id * 10);
    }
  }
  void enemy_byte(unsigned id, unsigned us_offset, unsigned value) {
    image.at(enemies + id * enemy_stride + us_offset -
             (version == eb::GameVersion::JP ? 17 : 0)) = std::uint8_t(value);
  }
  void enemy_word(unsigned id, unsigned us_offset, unsigned value) {
    enemy_byte(id, us_offset, value);
    enemy_byte(id, us_offset + 1, value >> 8);
  }
  void action(unsigned id, unsigned direction, unsigned shape) {
    image[action_table + id * 12] = std::uint8_t(direction);
    image[action_table + id * 12 + 1] = std::uint8_t(shape);
  }
};
struct Fixture {
  Input input;
  std::shared_ptr<const EnemyResources> enemies;
  std::shared_ptr<const ActionResources> actions;
  std::shared_ptr<const dialogue::SubstitutionResources> substitutions;
  BattleCombatants sprites = artwork();
  Roster roster;
  party::State party;
  story::RandomState random{0x1234, 0x5678};
  RowState rows;
  StealState steals;
  TargetSelection targets;
  TurnState state;
  ActionState action;
  EncounterState encounter;
  TurnScheduler turns;
  explicit Fixture(Input source)
      : input(std::move(source)),
        enemies(EnemyResources::import(input.image, input.version)),
        actions(ActionResources::import(input.image, input.version)),
        substitutions(input.load()), roster(enemies), party(input.version),
        targets(roster, party, random, rows, steals, *actions, *substitutions,
                sprites),
        turns(state, roster, party, action, random, *actions, encounter,
              targets) {
    player(0, 1);
    enemy(8, 1, 80, 0);
    party.party_order[0] = 1;
  }
  explicit Fixture(eb::GameVersion version) : Fixture(Input(version)) {}
  void player(unsigned slot, unsigned id) {
    auto &r = roster.at(slot);
    r = {};
    r.id = std::uint16_t(id);
    r.consciousness = 1;
    r.speed = 100;
    r.sprite = 1;
  }
  void enemy(unsigned slot, unsigned id, unsigned x, unsigned row) {
    auto &r = roster.at(slot);
    r = {};
    r.id = std::uint16_t(id);
    r.consciousness = r.side = r.sprite = 1;
    r.speed = 100;
    r.x = std::uint8_t(x);
    r.row = std::uint8_t(row);
  }
  void finish_players() {
    for (unsigned i = 0; i < 20; ++i) {
      const auto step = turns.inspect_player();
      if (step == PlayerStep::Finished)
        return;
      check(step != PlayerStep::PartyDefeated,
            "Fixture party unexpectedly defeated");
      if (step == PlayerStep::Selection)
        turns.submit_player(4);
    }
    throw std::runtime_error("Player loop did not complete");
  }
  void begin_actors() {
    turns.begin_round();
    finish_players();
    turns.choose_other_actions();
    check(turns.attempt_flee() == FleeResult::None,
          "Unexpected escape request");
    turns.finish_selection();
  }
};
void row_and_target_cases(eb::GameVersion version) {
  Input input(version);
  for (unsigned shape = 0; shape < 6; ++shape)
    for (unsigned direction = 0; direction < 2; ++direction)
      input.action(10 + shape * 2 + direction, direction, shape);
  input.image[input.npc + 5 * 2] = 2;
  Fixture f(std::move(input));
  f.enemy(9, 2, 40, 0);
  f.enemy(10, 3, 120, 1);
  f.rows.front.fill(0xdd);
  f.rows.front_x.fill(0xe1);
  f.rows.back.fill(0xee);
  f.targets.rebuild_rows();
  check(f.rows.front_count == 2 && f.rows.back_count == 1,
        "Row counts mismatch");
  check(f.rows.front[0] == 9 && f.rows.front[1] == 8 && f.rows.back[0] == 10,
        "Rows not ordered by physical X");
  check(f.rows.front_x[0] == 5 && f.rows.front_x[1] == 10 &&
            f.rows.front_y[0] == 14 && f.rows.back_y[0] == 12,
        "Row UI positions do not use source tile units");
  check(f.rows.front[2] == 0xdd && f.rows.front_x[2] == 0xe1 &&
            f.rows.back[1] == 0xee,
        "Rebuild cleared retained tails");
  f.roster.at(9).x = 80;
  f.targets.rebuild_rows();
  check(f.rows.front[0] == 9 && f.rows.front[1] == 9 &&
            f.rows.front_x[1] == 255,
        "Duplicate X did not retain later selected slot/source FFFF sentinel");
  f.roster.at(9).x = 40;
  f.targets.rebuild_rows();
  for (unsigned shape = 0; shape < 6; ++shape) {
    for (unsigned direction = 0; direction < 2; ++direction) {
      for (unsigned side : {0u, 1u, 2u}) {
        const unsigned slot = side == 1 ? 8 : 0;
        auto &actor = f.roster.at(slot);
        actor.side = std::uint8_t(side);
        actor.action = std::uint16_t(10 + shape * 2 + direction);
        actor.target = 71;
        actor.targeting = 0xff;
        f.random = {0x1234, 0x5678};
        f.targets.choose(slot);
        const unsigned base = ((side == 1) == bool(direction)) ? 0x10 : 0;
        const unsigned bits = shape <= 2   ? 1
                              : shape == 3 ? 2
                              : shape == 4 ? 4
                                           : 0;
        check(actor.targeting == (base | bits),
              "Target direction/shape byte mismatch");
        if (shape == 0)
          check(actor.target == (side == 1 ? 2 : 1),
                "Self target uses wrong numbering");
        if (shape == 3)
          check(actor.target >= 1 && actor.target <= 2,
                "Row target leaves two rows");
        if (shape == 4)
          check(actor.target == 1, "All target is not1");
        if (shape == 5)
          check(actor.target == 71,
                "Unknown target shape cleared retained target");
      }
    }
  }
  f.roster.at(0).side = 0;
  f.party.party_order = {5, 6, 0, 0, 0, 0};
  f.roster.at(1).consciousness = 1;
  f.roster.at(1).npc = 5;
  f.random = {0x1234, 0x5678};
  check(f.targets.find_npc() == 2, "Forced NPC target not found");
  f.roster.at(1).npc = 6;
  f.random = {0x1234, 0x5678};
  check(f.targets.find_npc() == 0,
        "Missing first flagged NPC did not terminate reused-local scan");
  f.roster.at(8).afflictions[0] = 2;
  check(!f.targets.valid(8), "Diamondized actor accepted as valid target");
  f.targets.rebuild_rows();
  check(f.rows.front_count == 2,
        "Row producer incorrectly excluded diamondized actor");
  f.roster.at(8).afflictions[0] = 1;
  f.targets.rebuild_rows();
  check(f.rows.front_count == 1, "Row producer retained unconscious actor");
  f.roster.at(9).x = 0;
  f.roster.at(10).x = 0;
  const auto retained = f.rows;
  rejects([&] { f.targets.rebuild_rows(); },
          "Unowned incoming row local accepted");
  check(f.rows == retained, "Rejected row expansion changed shared arrays");
}
void player_selection(eb::GameVersion version) {
  Fixture f(version);
  f.player(1, 2);
  f.party.party_order = {1, 2, 0, 0, 0, 0};
  f.state.menu = {1, 9, 77, 1, 2};
  f.state.item_used = 19;
  f.turns.begin_round();
  check(f.turns.inspect_player() == PlayerStep::Selection,
        "First player did not enter selection");
  f.turns.submit_player(8);
  check(f.roster.at(0).action == 8 && f.roster.at(0).guarding == 1 &&
            f.roster.at(0).action_item_slot == 9 &&
            f.roster.at(0).action_argument == 19 && f.roster.at(0).target == 2,
        "Player menu publication mismatch");
  check(f.turns.inspect_player() == PlayerStep::Selection,
        "Second player did not enter selection");
  f.turns.submit_player(0);
  check(f.state.selected_count == 0 && f.turns.player_list_index() == 0,
        "Cancellation did not backtrack");
  check(f.turns.inspect_player() == PlayerStep::Selection,
        "Backtracked first player was not selected");
  f.turns.submit_player(0);
  check(f.state.selected_count == 0 && f.turns.player_list_index() == 0,
        "First cancellation underflowed history");
  check(f.turns.inspect_player() == PlayerStep::Selection,
        "Repeated first selection failed");
  f.state.item_used = 0;
  f.state.menu.param = 81;
  f.turns.submit_player(1);
  check(f.roster.at(0).action == 0 && !f.roster.at(0).guarding &&
            !f.roster.at(0).action_item_slot &&
            f.roster.at(0).action_argument == 81,
        "USE_NO_EFFECT/menu parameter conversion mismatch");
  check(f.turns.inspect_player() == PlayerStep::Selection,
        "Second selection failed");
  f.state.initiative = 1;
  f.turns.submit_player(279);
  check(f.state.initiative == 4 && f.state.flee_requested,
        "Preemptive escape did not set initiative4");
  f.finish_players();
  f.turns.choose_other_actions();
  check(f.roster.at(8).action == 0,
        "Preemptive escape did not suppress enemy action");
  check(f.turns.attempt_flee() == FleeResult::Escaped &&
            f.state.initiative == 4 && f.state.flee_requested,
        "Guaranteed escape changed state after source exit");
  rejects([&] { f.turns.finish_selection(); },
          "Escaped battle continued actor selection");
  for (unsigned status = 0; status < 256; ++status) {
    Fixture g(version);
    g.party.character(1).afflictions[2] = std::uint8_t(status);
    g.state.menu = {1, 45, 88, 0x14, 67};
    g.state.item_used = 25;
    g.turns.begin_round();
    const auto step = g.turns.inspect_player();
    const bool disabled = status == 1 || status == 4;
    check(step == (disabled ? PlayerStep::Continue : PlayerStep::Selection),
          "Temporary disabled status predicate differs");
    if (disabled)
      check(g.roster.at(0).action == 0 &&
                g.roster.at(0).action_argument == 45 &&
                g.roster.at(0).targeting == 0x14 &&
                g.roster.at(0).target == 67 && !g.state.item_used,
            "Disabled player did not retain menu fields/clear item");
  }
  for (unsigned mode : {0u, 1u, 0xffffu}) {
    Fixture g(version);
    g.encounter.mode = std::uint16_t(mode);
    g.turns.begin_round();
    check(g.turns.inspect_player() == PlayerStep::Selection,
          "Cancel fixture selection missing");
    check(g.turns.submit_player(0xffff) ==
              (mode ? SelectionResult::CancelBattle
                    : SelectionResult::RestartBattle),
          "Battle mode FFFF return path mismatch");
  }
}
void enemy_and_actor_order(eb::GameVersion version) {
  Input input(version);
  input.enemy_word(1, 70, 245);
  input.enemy_byte(1, 80, 2);
  input.enemy_word(2, 72, 103);
  input.enemy_byte(2, 81, 93);
  Fixture f(std::move(input));
  f.begin_actors();
  check(f.roster.at(8).id == 2 && f.roster.at(8).action == 103 &&
            f.roster.at(8).action_order == 2 &&
            f.roster.at(8).action_argument == 93 && f.roster.at(8).guarding,
        "Extender chain lost live action-order state");
  f.enemy(9, 3, 120, 1);
  for (unsigned slot : {0u, 8u, 9u}) {
    f.roster.at(slot).initiative = 0;
    f.roster.at(slot).unknown71 = 1;
  }
  auto next = f.turns.next_actor();
  check(next.step == ActorStep::Actor && next.slot == 9 && !f.action.attacker &&
            !f.roster.at(9).taken_turn,
        "Equal full-word initiatives did not select later slot without "
        "premature publication");
  f.roster.at(9).afflictions[0] = 2;
  check(!f.turns.dispatch_actor() && f.action.attacker == 9 &&
            f.roster.at(9).taken_turn == 1,
        "Late incapacitation was not reread after actor prelude");
  next = f.turns.next_actor();
  check(next.slot == 8, "Next tied actor wrong");
  check(f.turns.dispatch_actor(), "Healthy actor not dispatched");
  next = f.turns.next_actor();
  check(next.slot == 0, "Final tied actor wrong");
  check(f.turns.dispatch_actor(), "Healthy party not dispatched");
  check(f.turns.next_actor().step == ActorStep::RoundComplete,
        "Taken actors did not finish round");
  f.party.character(1).battle_selection = 0x83;
  f.party.character(5).battle_selection = 0x94;
  f.roster.at(31).initiative = 0x34;
  f.roster.at(31).unknown71 = 0x12;
  f.roster.at(31).taken_turn = 255;
  f.state.round_number = 0xffff;
  f.turns.begin_round();
  check(f.state.round_number == 0 &&
            f.party.character(1).battle_selection == 0 &&
            f.party.character(5).battle_selection == 0x94,
        "Round prefix wraps/resets wrong party subset");
  check(TurnScheduler::initiative(f.roster.at(31)) == 0x1234 &&
            !f.roster.at(31).taken_turn,
        "Inactive initiative or unconditional taken reset mismatch");
}
void stealing_and_saves(eb::GameVersion version) {
  Fixture f(version);
  f.steals.candidates.fill(0xaa);
  auto &c = f.party.character(1);
  c.items = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  c.equipment = {2, 0, 0, 0};
  f.roster.at(0).action_item_slot = 4;
  check(f.targets.find_stealable_items() == 3 && f.steals.candidates[0] == 1 &&
            f.steals.candidates[1] == 3 && f.steals.candidates[2] == 5 &&
            f.steals.candidates[3] == 0xaa,
        "Steal filtering/tail retention mismatch");
  const auto before = f.random;
  c.items.fill(0);
  check(f.targets.select_stealable_item() == 0 &&
            f.random.primary_word == before.primary_word &&
            f.random.secondary_word == before.secondary_word,
        "Empty steal selection consumed randomness");
  auto bytes = save_test::fixture(version, 0x375f);
  saves::SaveArchive archive(version, bytes);
  auto saved = archive.load(0);
  const auto layout = saves::layout(version);
  for (unsigned i = 0; i < 6; ++i) {
    const auto at = 32 + layout.game_bytes + i * layout.character_bytes +
                    layout.character_bytes - 1;
    check(saved.characters[i].values.battle_selection == bytes[at],
          "Original save final character byte has duplicate ownership");
    saved.characters[i].values.battle_selection = std::uint8_t(0xc0 + i);
  }
  archive.save(0, saved, saved.game.elapsed_timer);
  const auto loaded = archive.load(0);
  for (unsigned i = 0; i < 6; ++i) {
    check(loaded.characters[i].values.battle_selection == 0xc0 + i,
          "Battle selection save roundtrip failed");
    const auto at = 32 + layout.game_bytes + i * layout.character_bytes +
                    layout.character_bytes - 1;
    check(archive.bytes()[at] == 0xc0 + i,
          "Battle selection archive offset changed");
  }
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
      row_and_target_cases(version);
      player_selection(version);
      enemy_and_actor_order(version);
      stealing_and_saves(version);
    }
    std::cout << "Native battle turn scheduler tests passed (" << checks
              << " checks)\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << "Battle turn scheduler failure after " << checks
              << " checks: " << error.what() << '\n';
    return 1;
  }
}
