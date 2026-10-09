#include "eb/native/battle/menu/command.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "native_battle_frame_fixture.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include <deque>
namespace {
using namespace eb::native;
using namespace eb::native::battle;
using battle_frame_test::check;
using battle_frame_test::rejects;
std::vector<std::uint8_t> menu_image(eb::GameVersion v) {
  auto bytes = battle_frame_test::assets(v).input.image;
  dialogue_substitution_test_assets::Input substitutions(v);
  substitutions.overlay(bytes);
  const bool jp = v == eb::GameVersion::JP;
  auto put = [&](unsigned p, unsigned x) {
    battle_frame_test::put(bytes, p, x);
  };
  const unsigned labels = jp ? 0x474b7 : 0x49fe1, stride = jp ? 5 : 16;
  for (unsigned i = 0; i < 11; ++i) {
    std::fill_n(bytes.begin() + labels + i * stride, stride, 0);
    bytes[labels + i * stride] = std::uint8_t(0x61 + i);
  }
  const unsigned categories = jp ? 0x3ec1b : 0x3f090;
  for (unsigned i = 0; i < 3; ++i) {
    std::fill_n(bytes.begin() + categories + i * (jp ? 5 : 8), jp ? 5 : 8, 0);
    bytes[categories + i * (jp ? 5 : 8)] = std::uint8_t(0x61 + i);
  }
  std::fill_n(bytes.begin() + (jp ? 0x3eca3 : 0x3f124), jp ? 90 : 200, 0);
  std::fill_n(bytes.begin() + (jp ? 0x4765f : 0x4a1f2), 3, 0);
  const unsigned action = jp ? 0x158b1e : 0x157b68;
  for (unsigned i = 0; i < 318; ++i) {
    bytes[action + i * 12] = 0;
    bytes[action + i * 12 + 1] = 1;
    bytes[action + i * 12 + 2] = 1;
    bytes[action + i * 12 + 3] = 3;
  }
  const unsigned psi = jp ? 0x159a06 : 0x158a50;
  for (unsigned i = 1; i < 53; ++i) {
    bytes[psi + i * 15 + 2] = i < 23 ? 1 : i < 39 ? 2 : 4;
    bytes[psi + i * 15 + 3] = 2;
    put(psi + i * 15 + 4, i + 9);
    bytes[psi + i * 15 + 6] = 1;
    bytes[psi + i * 15 + 7] = 1;
    bytes[psi + i * 15 + 8] = 1;
    bytes[psi + i * 15 + 9] = 1;
    bytes[psi + i * 15 + 10] = 0;
  }
  const unsigned items = jp ? 0x157000 : 0x155000;
  for (unsigned i = 0; i < 254; ++i) {
    bytes[items + i * (jp ? 24 : 39) + (jp ? 10 : 25)] = 0x20;
    put(items + i * (jp ? 24 : 39) + (jp ? 14 : 29), 4);
  }
  for (unsigned i = 0; i < 4; ++i) {
    put((jp ? 0x3e3f0 : 0x3e40e) + i * 2, 0x2000 + i);
    bytes[(jp ? 0x436a9 : 0x458ab) + i] = std::uint8_t(1u << i);
  }
  std::fill_n(bytes.begin() + (jp ? 0x3e42e : 0x3e44c), 4, 0);
  return bytes;
}
std::shared_ptr<const dialogue::WindowResources>
menu_windows(eb::GameVersion v) {
  auto input = battle_frame_test::assets(v).input;
  for (unsigned id = 0; id < (v == eb::GameVersion::JP ? 52u : 53u); ++id) {
    input.put(input.configs + id * 8, 1);
    input.put(input.configs + id * 8 + 2, 1);
    input.put(input.configs + id * 8 + 4, 28);
    input.put(input.configs + id * 8 + 6, 14);
  }
  return input.import();
}
struct Rig {
  battle_frame_test::FrameFixture h;
  std::vector<std::uint8_t> bytes;
  std::shared_ptr<const MenuContent> content;
  std::shared_ptr<const dialogue::SubstitutionResources> substitutions;
  std::shared_ptr<const ActionResources> actions;
  std::shared_ptr<const dialogue::MenuResources> menu_resources;
  std::shared_ptr<const dialogue::Program> program;
  dialogue::PreparedMessage prepared;
  dialogue::PromptHost prompts;
  dialogue::MenuHost menus;
  ActionState action;
  Names names;
  TurnState turns;
  CommandMenuState state;
  RowState rows;
  StealState steals;
  TargetSelection targets;
  CommandMenu command;
  unsigned sound_events{}, publications{}, polls{};
  explicit Rig(eb::GameVersion v)
      : h(v, 4, true, menu_windows(v)), bytes(menu_image(v)),
        content(MenuContent::import(bytes, v)),
        substitutions(dialogue::SubstitutionResources::import(bytes, v)),
        actions(ActionResources::import(bytes, v)),
        menu_resources(dialogue::MenuResources::import(bytes, v)),
        program(battle_frame_test::program(v, {2})), prepared(v),
        prompts(h.f.windows), menus(program, prompts, menu_resources),
        names(h.roster, h.f.party, prepared, *substitutions, action),
        targets(h.roster, h.f.party, h.f.random, rows, steals, *actions,
                *substitutions, h.catalog),
        command(content, program, menu_resources,
                battle_frame_test::assets(v).fonts, substitutions, *actions,
                h.f.party, turns, state, targets, h.roster, names,
                h.frame_state, h.colors, h.scratch, h.f.random, menus,
                *h.f.scene, h.f.input) {
    auto &p = h.f.party;
    p.party_count = p.controlled_count = 1;
    p.party_order[0] = 1;
    p.display_order[0] = 1;
    p.character(1).level = 1;
    p.character(1).maximum_hp = p.character(1).target_hp =
        p.character(1).current_hp = 100;
    p.character(1).maximum_pp = p.character(1).target_pp =
        p.character(1).current_pp = 100;
    std::fill(p.name_field(1).begin(), p.name_field(1).end(), 0);
    p.name_field(1)[0] = 0x61;
    h.f.windows.bind_prepared_message(prepared);
    h.f.windows.substitutions().configure(substitutions,
                                          party::dialogue_values(p));
    h.roster.initialize_player(0, p, 1);
    auto &enemy = h.roster.at(8);
    enemy.id = 0;
    enemy.label = 1;
    enemy.original_enemy = 0;
    targets.rebuild_rows();
  }
  void finish(CommandMenu::Operation &op, std::deque<std::uint16_t> keys = {},
              std::function<std::uint16_t()> controller = {}) {
    unsigned boundaries = 0;
    for (unsigned i = 0; i < 2000000; ++i) {
      auto result = op.advance(17);
      if (result == dialogue::Progress::Finished)
        return;
      if (op.audio()) {
        ++sound_events;
        op.respond_audio();
        continue;
      }
      auto *scene = op.scene();
      if (!scene || !scene->service())
        continue;
      switch (*scene->service()) {
      case story::SceneService::Frame: {
        auto raw = std::uint16_t(0);
        // Delayed physical key changes are real Scene polls, never direct
        // writes into selected_option or a fabricated result callback.
        if (++boundaries % 4 == 0) {
          if (controller)
            raw = controller();
          else if (!keys.empty()) {
            raw = keys.front();
            keys.pop_front();
          }
        }
        scene->complete_frame({raw, 0});
        ++polls;
        break;
      }
      case story::SceneService::Publication:
        scene->complete_publication();
        ++publications;
        break;
      case story::SceneService::PartySpriteBlink:
        clear_party_sprite_blink(h.f.actors);
        scene->respond_party_sprite_blink();
        break;
      default:
        throw std::runtime_error(
            "Battle menu fixture reached an unowned Scene service");
      }
    }
    throw std::runtime_error("Battle menu input script did not finish");
  }
};
void automatic(eb::GameVersion v) {
  Rig f(v);
  auto &p = f.h.f.party;
  p.auto_fight = 7;
  p.character(1).afflictions[4] = 1;
  const auto seed = f.h.f.random;
  const auto polls = f.h.f.clock.input_polls;
  auto op = f.command.begin(1, 0, 0);
  check(op->advance(0) == dialogue::Progress::BudgetExhausted &&
            f.h.f.random == seed,
        "Zero budget mutated menu");
  rejects([&] { f.command.begin(1, 0, 0); },
          "Concurrent command menu admitted");
  f.finish(*op);
  check(op->result() == 4 && f.turns.menu.action == 4 &&
            f.turns.menu.user == 1 && f.turns.menu.targeting == 17 &&
            f.turns.menu.target == 1,
        "Auto-fight did not select actual roster target");
  check(f.h.f.clock.input_polls == polls && f.h.f.random != seed,
        "Auto-fight polled input or missed RNG");
  check(f.h.colors.upload_mode == 16 &&
            f.h.colors.staged[12][15] ==
                ((f.h.colors.staged[8][15] >> 2) & 0x1ce7),
        "Command entry did not darken alternate palettes");
  p.character(1).afflictions[0] = 3;
  const auto retained = f.turns.menu;
  auto second = f.command.begin(1, 0, 0);
  f.finish(*second);
  check(second->result() == 1 && f.turns.menu == retained,
        "Paralyzed auto-fight changed retained selection");
}
void lifeup(eb::GameVersion v) {
  Rig f(v);
  auto &p = f.h.f.party;
  p.auto_fight = 1;
  p.character(1).target_hp = 1;
  auto op = f.command.begin(1, 0, 0);
  f.finish(*op);
  check(op->result() == 34 && f.turns.menu.param == 25 &&
            f.turns.menu.target == 1 && p.character(1).battle_selection == 1,
        "AutoLifeup priority/claim is wrong");
}
void cancel_and_bash(eb::GameVersion v) {
  Rig f(v);
  auto op = f.command.begin(1, 0, 0);
  f.finish(*op, {0x8000, 0x8000, 0x8000});
  check(op->result() == 0 && !f.h.f.windows.prompt_state().half_meter_speed &&
            !f.h.f.windows.prompt_state().rolling_disabled,
        "Menu cancel did not resume meters");
  check(f.polls > 0 && f.h.f.clock.input_polls > 0,
        "Menu cancel did not use real Scene input");
  auto next = f.command.begin(1, 0, 0);
  f.finish(*next, {0x0080, 0x0080, 0x0080, 0x0080, 0x0080, 0x0080});
  check(next->result() == 4 && f.turns.menu.target == 1 &&
            !f.h.roster.at(8).targeted && !f.h.frame_state.targeting_flash,
        "Bash target confirmation retained flash or wrong target");
}
void wrong_owners(eb::GameVersion v) {
  Rig f(v);
  PaletteBankState foreign;
  CommandMenu wrong(f.content, f.program, f.menu_resources,
                    battle_frame_test::assets(v).fonts, f.substitutions,
                    *f.actions, f.h.f.party, f.turns, f.state, f.targets,
                    f.h.roster, f.names, f.h.frame_state, foreign, f.h.scratch,
                    f.h.f.random, f.menus, *f.h.f.scene, f.h.f.input);
  const auto before = f.h.colors.staged;
  const auto random = f.h.f.random;
  const auto clock = f.h.f.clock.frame_counter;
  rejects([&] { wrong.begin(1, 0, 0); },
          "Foreign displayed palette owner admitted");
  check(f.h.colors.staged == before && f.h.f.random == random &&
            f.h.f.clock.frame_counter == clock && !wrong.busy(),
        "Failed menu admission mutated shared owners");
  dialogue::PreparedMessage foreign_prepared(v);
  Names wrong_names(f.h.roster, f.h.f.party, foreign_prepared, *f.substitutions,
                    f.action);
  CommandMenu wrong_text(f.content, f.program, f.menu_resources,
                         battle_frame_test::assets(v).fonts, f.substitutions,
                         *f.actions, f.h.f.party, f.turns, f.state, f.targets,
                         f.h.roster, wrong_names, f.h.frame_state, f.h.colors,
                         f.h.scratch, f.h.f.random, f.menus, *f.h.f.scene,
                         f.h.f.input);
  rejects([&] { wrong_text.begin(1, 0, 0); },
          "Foreign prepared name buffer admitted");
  check(f.prepared.name(dialogue::PreparedName::Attacker)[0] == 0 &&
            !wrong_text.busy(),
        "Rejected name owner published text");
}
void goods(eb::GameVersion v) {
  Rig f(v);
  f.h.f.party.character(1).items[0] = 1;
  auto op = f.command.begin(1, 0, 0);
  f.finish(*op,
           {0x0100, 0x0080, 0x0080, 0x0080, 0x0080, 0x0080, 0x0080, 0x0080});
  check(op->result() == 4 && f.turns.menu.param == 1 &&
            f.turns.item_used == 1 && f.h.f.party.character(1).items[0] == 1,
        "Real goods selection did not retain its item and target");
}

void target_navigation(eb::GameVersion version) {
  Rig f(version);
  for (unsigned i = 0; i < 4; ++i) {
    f.h.roster.at(8 + i) = f.h.roster.at(8);
    auto &enemy = f.h.roster.at(8 + i);
    enemy.row = std::uint8_t(i / 2);
    enemy.x = std::uint8_t(64 + (i % 2) * 64);
    enemy.label = std::uint8_t(i + 1);
  }
  f.targets.rebuild_rows();
  check(f.rows.front_count == 2 && f.rows.back_count == 2,
        "Navigation fixture did not create two real rows");
  std::vector<std::uint8_t> first_name;
  auto op = f.command.begin(1, 0, 0);
  f.finish(*op, {}, [&] {
    if (f.h.f.windows.state().focus == dialogue::WindowId{49}) {
      if (first_name.empty()) {
        const auto name = f.prepared.name(dialogue::PreparedName::Attacker);
        first_name.assign(name.begin(), name.end());
      }
      if (!f.state.flashing_enemy_row)
        return std::uint16_t(0x0800);
      if (!f.state.flashing_enemy)
        return std::uint16_t(0x0100);
    }
    return std::uint16_t(0x0080);
  });
  const auto name = f.prepared.name(dialogue::PreparedName::Attacker);
  check(op->result() == 4 && f.turns.menu.target == 4 &&
            f.state.flashing_enemy == 0xffff,
        "Actual directional target input did not select back/right and clear "
        "flash");
  check(!first_name.empty() &&
            !std::equal(first_name.begin(), first_name.end(), name.begin()),
        "Moved target retained the first enemy label");
  for (unsigned i = 0; i < 4; ++i)
    check(!f.h.roster.at(8 + i).targeted,
          "Navigation retained a previous target highlight");
}
void refocus_after_target_with_retained_lookup() {
  for(const auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
    Rig baseline(version),actual(version);
    const unsigned at=version==eb::GameVersion::JP?0x8c24:0x88e2;
    // The actual ordinary session retains these graphics bytes when the
    // target window closes. SET_WINDOW_FOCUS never reads this lookup.
    const unsigned raw=version==eb::GameVersion::JP?3416:19704;
    baseline.h.f.windows.bind_ambient_register_source(baseline.h.scratch.bytes);
    actual.h.f.windows.bind_ambient_register_source(actual.h.scratch.bytes);
    actual.h.scratch.bytes[at]=std::uint8_t(raw);actual.h.scratch.bytes[at+1]=std::uint8_t(raw>>8);
    auto expected=baseline.command.begin(1,0,0),op=actual.command.begin(1,0,0);
    const std::deque<std::uint16_t> taps={0x80,0x80,0x80,0x80,0x80,0x80};
    baseline.finish(*expected,taps);actual.finish(*op,taps);
    check(op->result()==4&&op->result()==expected->result()&&actual.turns.menu==baseline.turns.menu&&
        actual.h.f.windows.state().focus==baseline.h.f.windows.state().focus&&
        actual.polls==baseline.polls&&actual.publications==baseline.publications&&
        actual.h.f.random==baseline.h.f.random&&!actual.command.failed(),
        "Explicit command refocus read the stale active-window lookup or changed target/input/publication/RNG");
    check((unsigned(actual.h.scratch.bytes[at])|(unsigned(actual.h.scratch.bytes[at+1])<<8))==raw,
        "Explicit refocus rewrote the retained graphics lookup bytes");
  }
}
void ambient_scratch() {
  for (const unsigned selector : {0u, 0x8000u, 0xffffu, 8u}) {
    Rig f(eb::GameVersion::JP);
    f.h.f.party.character(1).items[0] = 1;
    f.h.scratch.bytes[0x8c24] = std::uint8_t(selector);
    f.h.scratch.bytes[0x8c25] = std::uint8_t(selector >> 8);
    auto op = f.command.begin(1, 0, 0);
    const auto run = [&] {
      f.finish(*op, {0x0100, 0x0080, 0x0080, 0x0080, 0x0080, 0x0080, 0x0080,
                     0x0080});
    };
    if (selector == 8) {
      rejects(run,
              "Unfocused source selector escaped owned physical window banks");
      check(f.command.failed() && !op->complete(),
            "Invalid raw register address fabricated a menu result");
    } else {
      run();
      check(op->result() == 4 && f.turns.item_used == 1,
            "Actual scratch-backed unfocused/dummy register bank was not "
            "honored");
    }
  }
}

} // namespace
int main() {
  try {
    for (auto v : {eb::GameVersion::US, eb::GameVersion::JP}) {
      automatic(v);
      lifeup(v);
      cancel_and_bash(v);
      wrong_owners(v);
      goods(v);
      target_navigation(v);
    }
    refocus_after_target_with_retained_lookup();
    ambient_scratch();
    std::cout << "native battle command menu checks "
              << battle_frame_test::checks << '\n';
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
