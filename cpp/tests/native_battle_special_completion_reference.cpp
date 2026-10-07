// Complete original/native special helpers after actual world and battle setup.
// Completion acceptance is separate from
// source parity: no state comparison can stop the other helper from finishing.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
#undef NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include <cstdlib>
#include <iomanip>
#include <sstream>
using namespace world_battle_reference;
using Kind = battle::actions::Kind;
namespace {
struct Case {
  Kind kind;
  unsigned us, jp;
  const char *name;
  unsigned group;
};
constexpr Case cases[] = {
    {Kind::BTLACT_CLUMSYDEATH, 0xc29298, 0xc2922f, "BTLACT_CLUMSYDEATH", 1},
    {Kind::BTLACT_TELEPORT_BOX, 0xc2ab71, 0xc2ab24, "BTLACT_TELEPORT_BOX", 1},
    {Kind::BTLACT_MASTERBARFDEATH, 0xc292ee, 0xc29285, "BTLACT_MASTERBARFDEATH",
     1},
    {Kind::BTLACT_POKEY_SPEECH, 0xc2c4c0, 0xc2c47a, "BTLACT_POKEY_SPEECH", 475},
    {Kind::BTLACT_POKEY_SPEECH_2, 0xc2c516, 0xc2c4d0, "BTLACT_POKEY_SPEECH_2",
     475},
    {Kind::BTLACT_GIYGAS_PRAYER_1, 0xc2c572, 0xc2c52c, "BTLACT_GIYGAS_PRAYER_1",
     478},
    {Kind::BTLACT_GIYGAS_PRAYER_2, 0xc2c5d1, 0xc2c58b, "BTLACT_GIYGAS_PRAYER_2",
     479},
    {Kind::BTLACT_GIYGAS_PRAYER_3, 0xc2c5fa, 0xc2c5b4, "BTLACT_GIYGAS_PRAYER_3",
     479},
    {Kind::BTLACT_GIYGAS_PRAYER_4, 0xc2c623, 0xc2c5dd, "BTLACT_GIYGAS_PRAYER_4",
     479},
    {Kind::BTLACT_GIYGAS_PRAYER_5, 0xc2c64c, 0xc2c606, "BTLACT_GIYGAS_PRAYER_5",
     479},
    {Kind::BTLACT_GIYGAS_PRAYER_6, 0xc2c675, 0xc2c62f, "BTLACT_GIYGAS_PRAYER_6",
     479},
    {Kind::BTLACT_GIYGAS_PRAYER_7, 0xc2c69e, 0xc2c658, "BTLACT_GIYGAS_PRAYER_7",
     479},
    {Kind::BTLACT_GIYGAS_PRAYER_8, 0xc2c6d0, 0xc2c68a, "BTLACT_GIYGAS_PRAYER_8",
     480},
    {Kind::BTLACT_GIYGAS_PRAYER_9, 0xc2c6f0, 0xc2c6aa, "BTLACT_GIYGAS_PRAYER_9",
     480},
};
void collect(Source &s, Rig &r, unsigned group) {
  unsigned ptr{};
  for (unsigned i = 0; i < 3; ++i)
    ptr |= unsigned(s.bus->read_byte(0xd0c60d + group * 8 + i)) << (8 * i);
  r.w.encounter.group = static_cast<std::uint16_t>(group);
  r.w.encounter.roster.clear();
  for (unsigned entry = 0; entry < 256; ++entry) {
    const auto count = s.bus->read_byte(ptr + entry * 3);
    if (count == 255)
      break;
    const auto id = s.bus->read_byte(ptr + entry * 3 + 1) |
                    unsigned(s.bus->read_byte(ptr + entry * 3 + 2)) << 8;
    for (unsigned i = 0; i < count; ++i)
      r.w.encounter.roster.push_back(static_cast<std::uint16_t>(id));
  }
  check(!r.w.encounter.roster.empty() && r.w.encounter.roster.size() <= 24,
        "Unowned encounter expansion");
  s.put(s.jp ? 0x4e12 : 0x4a8c, group);
  s.put(s.jp ? 0xa18c : 0x9f8a, r.w.encounter.roster.size());
  for (unsigned i = 0; i < r.w.encounter.roster.size(); ++i)
    s.put((s.jp ? 0xa18e : 0x9f8c) + i * 2, r.w.encounter.roster[i]);
  r.w.encounter.initiative = WorldBattleInitiative::Normal;
  r.w.control.encounter.mode = 1;
  s.put(s.jp ? 0x5148 : 0x4dc2, 1);
  check(!r.w.windows.prompt_state().battle_mode,
        "World bootstrap leaked battle render FLAG");
  r.w.clock.action_scripts_disabled = group >= 478 ? 0 : 1;
  s.put(s.jp ? 0xa56 : 0xa60, group >= 478 ? 0 : 1);
}
template <class Op> void scene_children(Rig &r, Op &op) {
  for (unsigned steps = 0; steps < 1000000; ++steps) {
    const auto progress = op.advance(1);
    if (progress == dialogue::Progress::Finished)
      return;
    if (progress == dialogue::Progress::Suspended) {
      auto *child = op.scene();
      check(child, "Startup suspended without actual Scene child");
      r.scene(*child);
    }
  }
  throw std::runtime_error("Battle setup work budget exceeded");
}
void execute(Rig &r, battle::actions::Executor::Operation &op) {
  for (unsigned steps = 0; steps < 2000000; ++steps) {
    const auto progress = op.advance(1);
    if (progress == dialogue::Progress::Finished)
      return;
    if (progress != dialogue::Progress::Suspended)
      continue;
    if (auto *child = op.scene()) {
      r.scene(*child);
      continue;
    }
    auto dismount = r.bicycle.begin();
    r.drive(*dismount);
    dismount.reset();
    if (auto *p = op.party_update())
      p->respond_bicycle_dismount();
    else if (auto *t = op.teddy_update())
      t->respond_bicycle_dismount();
    else if (auto *m = op.membership_update())
      m->respond_bicycle_dismount();
    else
      throw std::runtime_error("Action suspended without an actual child");
  }
  throw std::runtime_error("Special helper work budget exceeded");
}
void open_window(Source &s, Rig &r) {
  s.call(s.jp ? 0xc1db24 : 0xc1dd47, 14);
  auto op = r.w.windows.begin(
      {dialogue::WindowAction::Open, dialogue::WindowId{14}, {}, 0});
  while (op->advance() == dialogue::OutputProgress::Suspended) {
    auto child = r.b.scene.begin(*op->effect());
    r.scene(*child);
    child.reset();
    op->respond();
  }
}
struct Comparison {
  unsigned fields{}, different{};
  std::string first;
  void same(std::uint64_t original, std::uint64_t native,
            const std::string &field) {
    ++fields;
    if (original != native) {
      ++different;
      if (first.empty())
        first = field + " original=" + std::to_string(original) +
                " native=" + std::to_string(native);
    }
  }
  void print(const char *category) const {
    std::cout << "comparison category=" << category << " fields=" << fields
              << " different=" << different;
    if (!first.empty())
      std::cout << " first=" << std::quoted(first);
    std::cout << std::endl;
  }
};
void compare(Source &s, Rig &r, std::uint64_t source_start,
             std::uint64_t native_start) {
  Comparison roster, semantic, physical;
  const unsigned base = s.jp ? 0xa1ae : 0x9fac;
  for (unsigned slot = 0; slot < 32; ++slot) {
    const auto b = encode(r.b.roster.at(slot));
    for (unsigned i = 0; i < b.size(); ++i)
      roster.same(s.bus->work_ram[base + slot * 78 + i], b[i],
                  "battler " + std::to_string(slot) + " byte " +
                      std::to_string(i));
  }
  roster.print("roster");
  try {
    compare_party(s, r);
    std::cout << "comparison category=party result=equal" << std::endl;
  } catch (const std::exception &e) {
    std::cout << "comparison category=party result=different first="
              << std::quoted(e.what()) << std::endl;
  }
  semantic.same(s.word(s.jp ? 0xab7c : 0xa97a), r.b.frame_state.giygas_phase,
                "Giygas phase");
  semantic.same(s.word(s.jp ? 0xabe3 : 0xaa0e), r.b.state.special_defeat,
                "Special outcome");
  semantic.same(s.word(s.jp ? 0x4e12 : 0x4a8c), r.w.encounter.group,
                "Battle group");
  semantic.same(s.word(s.jp ? 0xa141 : 0x9f3f),
                r.w.actors.appearance_scene().teleport_destination,
                "Teleport destination");
  semantic.same(s.word(s.jp ? 0xa143 : 0x9f41), r.w.session.teleport_style,
                "Teleport style");
  semantic.same(s.word(s.jp ? 0xb6ec : 0xb53b), r.audio.current_track(),
                "Music track");
  semantic.same(s.word(s.jp ? 0xab72 : 0xa970),
                r.b.action.attacker ? base + *r.b.action.attacker * 78 : 0,
                "Attacker");
  semantic.same(s.word(s.jp ? 0xab74 : 0xa972),
                r.b.action.target ? base + *r.b.action.target * 78 : 0,
                "Target");
  semantic.print("phase_outcome_owners");
  Comparison world;
  world.same(s.word(0x24), r.w.random.primary_word, "Primary RNG");
  world.same(s.word(0x26), r.w.random.secondary_word, "Secondary RNG");
  world.same(s.word(s.jp ? 0x9939 : 0x9641),
             r.w.actors.scene().action_script_state, "Action-script signal");
  for (unsigned i = 0; i < r.w.text.event_flags.size(); ++i)
    world.same(s.bus->work_ram[(s.jp ? 0x9eb3 : 0x9c08) + i],
               r.w.text.event_flags[i], "Flag byte " + std::to_string(i));
  for (unsigned role = 0; role < 30; ++role) {
    const auto id = r.w.actors.actor_for_role(role);
    world.same(s.word((s.jp ? 0xa58 : 0xa62) + role * 2),
               id ? r.w.actors.actor(*id).script_style() : 0xffff,
               "Actor script " + std::to_string(role));
    if (!id)
      continue;
    const auto &actor = r.w.actors.actor(*id);
    for (unsigned axis = 0; axis < 3; ++axis) {
      const auto value =
          std::uint32_t(s.word((s.jp ? 0xb84 : 0xb8e) + axis * 60 + role * 2))
              << 16 |
          s.word((s.jp ? 0xc38 : 0xc42) + axis * 60 + role * 2);
      world.same(value, actor.action().position[axis],
                 "Actor " + std::to_string(role) + " axis " +
                     std::to_string(axis));
    }
    for (unsigned v = 0; v < 8; ++v)
      world.same(s.word((s.jp ? 0xe54 : 0xe5e) + v * 60 + role * 2),
                 actor.action().variables[v],
                 "Actor " + std::to_string(role) + " variable " +
                     std::to_string(v));
  }
  world.print("world_flags_actors_random");
  physical.same(s.bus->work_ram[0xd], r.w.fade.state().brightness,
                "Brightness");
  for (unsigned i = 0; i < 256; ++i)
    physical.same(s.word(0x200 + i * 2),
                  r.w.palette.staged_palette(i / 16)[i % 16],
                  "Palette " + std::to_string(i));
  const auto video = r.w.display.vram();
  for (unsigned i = 0; i < video.size(); ++i)
    physical.same(s.bus->video_ram[i], video[i], "VRAM " + std::to_string(i));
  for (unsigned i = 0; i < r.w.scratch.bytes.size(); ++i)
    physical.same(s.bus->work_ram[0x10000 + i], r.w.scratch.bytes[i],
                  "Scratch " + std::to_string(i));
  physical.print("physical_palette_vram_scratch");
  std::cout << "timing source_polls=" << s.polls - source_start
            << " native_polls=" << r.w.clock.input_polls - native_start
            << " source_frames=" << s.bus->completed_frames
            << " native_frames=" << r.physical_frames << std::endl;
}
void run_case(const eb::GameAssets &assets, const Case &test) {
  std::cout << "begin region="
            << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << " action=" << test.name << " group=" << test.group << std::endl;
  Rig r(assets, true);
  r.teleport_preflight_checks = true;
  r.trace_queued_creations = true;
  Source s(assets);
  s.initialize();
  auto snap = saved(r);
  if (test.group >= 478) {
    // Actual incoming save prerequisites for Mr Saturn and Miner in Prayer
    // scenes.
    for (unsigned flag : {372u, 651u})
      snap.state.event_flags[(flag - 1) / 8] |=
          std::uint8_t(1u << ((flag - 1) & 7));
    auto &game = snap.state.game;
    game.party_count = game.controlled_count = 4;
    for (unsigned i = 0; i < 4; ++i) {
      game.party_order[i] = game.display_order[i] =
          static_cast<std::uint8_t>(i + 1);
      game.controlled_order[i] = static_cast<std::uint8_t>(i);
      if (i)
        snap.state.characters[i] = snap.state.characters[0];
    }
    snap = {snap.state,
            saves::prepare_continue(snap.state, *r.content.continuing)};
  }
  auto archive = saves::SaveArchive::empty(assets.version);
  archive.save(0, snap.state, 0);
  auto startup = r.w.startup->begin(snap);
  while (startup->stage() != WorldStartupStage::ResetWorld) {
    if (startup->advance(1) == dialogue::Progress::Suspended)
      r.service(*startup->runtime_operation());
  }
  seed(s, r, archive);
  near_call(s, s.jp ? 0xc0b652 : 0xc0b67f);
  r.drive(*startup);
  startup.reset();
  s.call(s.jp ? 0xc04230 : 0xc03fa9, 0x456, 0x678, 2);
  auto placement = r.w.relocation->begin({0x456, 0x678}, 2);
  while (!placement->complete())
    placement->advance(1);
  placement.reset();
  std::cout << "genuine_world_prerequisite=complete" << std::endl;
  collect(s, r, test.group);
  s.start_main();
  s.until(s.jp ? 0xc24f02 : 0xc24fcf);
  std::cout << "source_battle_startup=complete" << std::endl;
  r.inputs = nullptr;
  r.physical_input = true;
  r.w.peripherals.set_buttons(r.physical_frames & 2 ? 0x80 : 0);
  auto battle_start = r.b.startup.begin();
  scene_children(r, *battle_start);
  battle_start.reset();
  r.phase = "open-window";
  open_window(s, r);
  std::cout << "native_battle_startup=complete" << std::endl;
  const unsigned base = s.jp ? 0xa1ae : 0x9fac,
                 attacker = s.jp ? 0xab72 : 0xa970, target = attacker + 2;
  r.b.action.attacker = 0;
  r.b.action.target = 8;
  r.b.action.target_flags = 1u << 8;
  s.put(attacker, base);
  s.put(target, base + 8 * 78);
  s.put(target - 6, 1u << 8);
  s.put(target - 4, 0);
  if (test.kind == Kind::BTLACT_TELEPORT_BOX) {
    unsigned item{};
    for (unsigned i = 1; i < 254; ++i)
      if (r.content.substitutions->item_properties(i).parameters[0] >= 128) {
        item = i;
        break;
      }
    check(item != 0, "No imported Teleport Box direct helper item parameter");
    auto &actor = r.b.roster.at(0);
    actor.action_argument = static_cast<std::uint8_t>(item);
    actor.action_item_slot = 1;
    r.w.party.character(1).items[0] = static_cast<std::uint8_t>(item);
    s.bus->work_ram[(s.jp ? 0x9c7f : 0x99ce) + 35 - (s.jp ? 1 : 0)] =
        static_cast<std::uint8_t>(item);
    const auto b = encode(actor);
    std::copy(b.begin(), b.end(), s.bus->work_ram.begin() + base);
  }
  s.call(s.jp ? 0xc23ab9 : 0xc23bcf, 0);
  s.call(s.jp ? 0xc23bf4 : 0xc23d05);
  r.b.names.fix_attacker(0);
  r.b.names.fix_target();
  const auto before_source = s.polls;
  const auto before_native = r.w.clock.input_polls;
  r.inputs = nullptr;
  r.physical_input = true;
  r.phase = test.name;
  r.w.peripherals.set_buttons(r.physical_frames & 2 ? 0x80 : 0);
  bool original_complete = false, native_complete = false;
  s.observer = [&](Source &v) {
    if (v.cpu.program_counter == (v.jp ? 0xc067d1u : 0xc065a3u)) {
      const auto count = v.word(v.jp ? 0x61bc : 0x5e36);
      check(count <= 12,
            "Original creation queue leaves declared record owner");
      std::cout << "source_creation_queue_before_drain count=" << count;
      for (unsigned i = 0; i < count; ++i) {
        const auto at = (v.jp ? 0x618c : 0x5e06) + i * 4;
        std::cout << " sprite=" << v.word(at) << " script=" << v.word(at + 2);
      }
      std::cout << std::endl;
    }
    if (v.cpu.program_counter == (v.jp ? 0xc49beau : 0xc4c91au))
      std::cout << "source_visibility role=" << v.cpu.accumulator
                << " effect=" << v.cpu.x_index << std::endl;
    if ((v.cpu.instruction_count & 0xffffff) == 0)
      std::cout << "source_progress instructions=" << v.cpu.instruction_count
                << " polls=" << v.polls << " pc=" << std::hex
                << v.cpu.program_counter << std::dec << std::endl;
  };
  try {
    s.call(s.jp ? test.jp : test.us);
    original_complete = true;
    std::cout << "original_helper=complete instructions="
              << s.cpu.instruction_count << std::endl;
  } catch (const std::exception &e) {
    std::cout << "original_helper=failed error=" << std::quoted(e.what())
              << std::endl;
  }
  try {
    auto op = r.b.executor.begin_action(test.kind);
    execute(r, *op);
    native_complete = op->complete();
    std::cout << "native_helper="
              << (native_complete ? "complete" : "incomplete") << std::endl;
  } catch (const std::exception &e) {
    std::cout << "native_helper=failed error=" << std::quoted(e.what())
              << std::endl;
  }
  if (original_complete && native_complete)
    compare(s, r, before_source, before_native);
  std::cout << "rejected_teleports=" << r.rejected_teleports << std::endl;
  check(original_complete && native_complete,
        "One or both complete helpers failed; comparison not substituted for "
        "execution");
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  unsigned complete{}, failed{};
  try {
    const char *selected = std::getenv("EB_SPECIAL_REFERENCE_CASE");
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      for (const auto &test : cases) {
        if (selected && std::string_view(selected) != test.name)
          continue;
        try {
          run_case(assets, test);
          ++complete;
        } catch (const std::exception &e) {
          ++failed;
          std::cout << "case_failure=" << std::quoted(e.what()) << std::endl;
        }
      }
    }
    std::cout << "completion_summary complete=" << complete
              << " failed=" << failed << " parity_is_separately_reported=1"
              << std::endl;
    return failed ? 1 : 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
