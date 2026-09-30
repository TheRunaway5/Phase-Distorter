// Complete original C07526/C07477 and ordinary door helpers. Type3/4 stop at
// the real generated-input producer entry, before any producer instruction;
// they are never acknowledged as successful native transitions.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_doors.hpp"
#include "eb/native/world_maintenance.hpp"
#include "generated_assets.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <set>
#include <stdexcept>
#include <string>
#include <tuple>

namespace {
using namespace eb::native;
std::string context;
void check(bool okay, const char *message) {
  if (!okay)
    throw std::runtime_error(std::string(message) + ": " + context);
}
unsigned word(std::span<const std::uint8_t> b, unsigned at) {
  return b[at] | unsigned(b[at + 1]) << 8;
}
void put(std::span<std::uint8_t> b, unsigned at, unsigned value) {
  b[at] = value;
  b[at + 1] = value >> 8;
}
void pointer(std::span<std::uint8_t> b, unsigned at, unsigned value) {
  put(b, at, value);
  put(b, at + 2, value >> 16);
}
struct Layout {
  unsigned route, escalator, stairs, producer, game, found, type, ladder,
      stairs_direction, using_door, activity, pending, enemy, swirl,
      intangibility, queue, current, next, current_type, flags, descriptor_high;
};
Layout layout(eb::GameVersion v) {
  if (v == eb::GameVersion::US)
    return {0xc07526, 0xc06e6e, 0xc070cb, 0xc48c69, 0x97f5, 0x5dbc, 0x5dbe,
            0x5da8,   0x5dc4,   0x5dc2,   0xa34,    0x5d9a, 0x4dba, 0x5d60,
            0x5d58,   0x5dea,   0x5e02,   0x5e04,   0x5dc0, 0x9c08, 0x116a};
  return {0xc07765, 0xc0709c, 0xc072f9, 0xc462b3, 0x9aa9, 0x6142, 0x6144,
          0x612e,   0x614a,   0x6148,   0xa2a,    0x6120, 0x5140, 0x60e6,
          0x60de,   0x6170,   0x6188,   0x618a,   0x6146, 0x9eb3, 0x1160};
}
struct Native {
  ActorWorld actors;
  npcs::InteractionState leader;
  WorldControlState control;
  WorldNavigationState navigation;
  WorldMaintenanceState maintenance;
  story::InputState input;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone{321, 1};
  WorldInteractionQueue queue;
  std::array<std::uint8_t, 128> flags{};
  WorldDoors doors;
  std::array<ActorId, 7> ids{};
  Native(eb::GameVersion version, std::shared_ptr<SpriteResources> sprites,
         std::shared_ptr<const npcs::MapTextResources> map,
         std::shared_ptr<const WorldDoorResources> data)
      : actors(
            sprites,
            std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{9}, 0,
                                               std::vector<std::uint32_t>{0}),
            version),
        queue(version, queued, actors.appearance_scene().intangibility_ticks,
              phone),
        doors(map, data, actors, leader, control, navigation, maintenance,
              input, queue) {
    actors.scene().event_flags = flags;
    leader.map_text = {0x1234, 0x5678, 0xabcd, {0x23, 0x45, 0x67, 0x89}};
    leader.walking_style = 0;
    leader.leader_direction = 7;
    leader.leader_x = 300;
    leader.leader_y = 400;
    input.player_activity = 1;
    navigation.ladder_stairs = {77, 88};
    navigation.stairs_direction = 0x1234;
    navigation.using_door = 0x9876;
    queued.current = 1;
    queued.next = 3;
    for (unsigned i = 0; i < 4; ++i)
      queued.records[i] = {std::uint16_t(10 + i), {std::uint8_t(i), 2, 3, 4}};
    actors.appearance_scene().intangibility_ticks = 46;
    for (unsigned i = 0; i < 7; ++i) {
      const unsigned role = i ? 23 + i : 3;
      WorldActorSpec spec;
      spec.action.animation = 0;
      ids[i] = *actors.create_authored(spec, {role, role + 1});
      auto &a = actors.actor(ids[i]);
      a.action().variables[2] = 2;
      a.action().variables[3] = 3;
      EightDirectionAnimation p{1, 0, 0, 0, 44};
      a.appearance.step_eight(a.action(), p);
      a.appearance.step_eight(a.action(), p);
      check(a.appearance.flashing_hidden(), "Source fixture is not flashing");
    }
  }
};
struct Original {
  eb::GameVersion version;
  Layout l;
  std::vector<std::uint8_t> memory = std::vector<std::uint8_t>(0x1000000);
  std::uint64_t calls{}, completed{}, transitions{}, undefined_permissions{},
      unowned_flags{}, steps{};
  std::array<unsigned, 8> types{};
  explicit Original(eb::GameVersion v) : version(v), l(layout(v)) {}
  void load(std::span<const std::uint8_t> image) {
    std::copy(image.begin(), image.end(), memory.begin() + 0xc00000);
    std::copy(image.begin(), image.end(), memory.begin() + 0x400000);
  }
  void state(std::span<std::uint8_t> ram, const Native &n) const {
    const unsigned shift = version == eb::GameVersion::JP ? 3 : 0;
    put(ram, l.game + 130 - shift, n.leader.leader_x);
    put(ram, l.game + 134 - shift, n.leader.leader_y);
    put(ram, l.game + 138 - shift, n.leader.leader_direction);
    put(ram, l.game + 142 - shift, n.leader.walking_style);
    put(ram, l.game + 176 - shift, n.control.automatic_mode);
    put(ram, 0x81, n.leader.demo_frames);
    put(ram, l.found, n.leader.map_text.door_found);
    put(ram, l.type, n.leader.map_text.door_found_type);
    put(ram, l.ladder, n.navigation.ladder_stairs.x);
    put(ram, l.ladder + 2, n.navigation.ladder_stairs.y);
    put(ram, l.stairs_direction, n.navigation.stairs_direction);
    put(ram, l.using_door, n.navigation.using_door);
    put(ram, l.activity, n.input.player_activity);
    put(ram, l.enemy, n.maintenance.enemy_touched);
    put(ram, l.swirl, n.actors.appearance_scene().battle_swirl_ticks);
    put(ram, l.intangibility, n.actors.appearance_scene().intangibility_ticks);
    put(ram, l.pending, n.queued.pending);
    put(ram, l.current, n.queued.current);
    put(ram, l.next, n.queued.next);
    put(ram, l.current_type, n.queued.current_type);
    for (unsigned i = 0; i < 4; ++i) {
      put(ram, l.queue + i * 6, n.queued.records[i].type);
      std::copy(n.queued.records[i].key.begin(), n.queued.records[i].key.end(),
                ram.begin() + l.queue + i * 6 + 2);
    }
    std::copy(n.flags.begin(), n.flags.end(), ram.begin() + l.flags);
    for (unsigned i = 0; i < 7; ++i) {
      const unsigned role = i ? 23 + i : 3;
      put(ram, l.descriptor_high + role * 2,
          (0x1200 + role) |
              (n.actors.actor(n.ids[i]).appearance.flashing_hidden() ? 0x8000
                                                                     : 0));
    }
  }
  unsigned compare(Native &n, CollisionCell cell, unsigned type, unsigned found,
                   unsigned stack_fill = 0,
                   std::optional<unsigned> unsupported_flag = std::nullopt) {
    std::array<std::uint8_t, 0x20000> expected{};
    state(expected, n);
    // Unrelated source state is retained, including RNG and phone fields.
    put(expected, 0x24, 0xabcd);
    put(expected, 0x26, 0x1234);
    std::copy(expected.begin(), expected.end(), memory.begin() + 0x7e0000);
    std::fill(memory.begin() + 0x1b00, memory.begin() + 0x2000, stack_fill);
    const auto old_input = n.input;
    const auto old_phone = n.phone;
    const auto old_text = n.leader.map_text;
    const auto old_control = n.control;
    const auto old_flags = n.flags;
    eb::MainCpu65816 cpu(memory, version);
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.accumulator = cell.x;
    cpu.x_index = cell.y;
    cpu.y_index = 0x5432;
    cpu.program_counter = 0xc0ff00;
    cpu.execute_instruction<0x22>(l.route, 4);
    bool transition_entry = false, producer = false, flag_boundary = false;
    unsigned local_steps = 0;
    while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
      check(++local_steps < 100000,
            "Source door routing failed to return/yield");
      if (cpu.program_counter == l.escalator ||
          cpu.program_counter == l.stairs) {
        check(type == (cpu.program_counter == l.escalator ? 3u : 4u) &&
                  cpu.accumulator == found && cpu.x_index == cell.x &&
                  cpu.y_index == cell.y,
              "Source transition record/cell arguments differ");
        transition_entry = true;
      }
      if (cpu.program_counter == l.producer) {
        check(transition_entry && !n.leader.demo_frames,
              "Unexpected generated-input producer");
        producer = true;
        break;
      }
      if (unsupported_flag &&
          cpu.program_counter ==
              (version == eb::GameVersion::US ? 0xc21628u : 0xc214d0u)) {
        check(type == 0 && cpu.accumulator == *unsupported_flag,
              "Out-of-owner source flag request differs");
        flag_boundary = true;
        break;
      }
      cpu.step_instruction();
    }
    check(flag_boundary == unsupported_flag.has_value(),
          "Expected source flag boundary was not reached");
    const auto operation = n.doors.begin(cell);
    bool done = false;
    if (type > 7 || flag_boundary) {
      bool rejected = false;
      try {
        operation->advance();
      } catch (const std::out_of_range &) {
        rejected = true;
      }
      check(rejected && n.doors.failed() && !operation->complete() &&
                !operation->request() && !producer,
            "Native door invented the uninitialized source permission");
      if (flag_boundary)
        ++unowned_flags;
      else
        ++undefined_permissions;
    } else {
      done = operation->advance();
      check(done == !producer,
            "Native transition completion differs from actual source boundary");
    }
    if (done) {
      check(operation->permission() == bool(cpu.accumulator),
            "Source door move permission differs");
      check(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
            "Source door corrupted caller context");
      ++completed;
    } else if (type <= 7 && !flag_boundary) {
      const WorldDoorTransitionRequest request{
          type == 3 ? WorldDoorTransitionKind::Escalator
                    : WorldDoorTransitionKind::Stairs,
          cell, std::uint16_t(found)};
      check(operation->request() == request && !operation->advance(),
            "Native producer request has wrong arguments or resumes without "
            "producer");
      ++transitions;
    }
    state(expected, n);
    const unsigned division_scratch =
        version == eb::GameVersion::JP ? 0xae : 0xb0;
    for (unsigned at = 0; at < expected.size(); ++at)
      // GET_EVENT_FLAG's actual MODULUS16 uses only these two calculator
      // words (DIV_MULT_TMP/DIV_MULT_TMP2). Native bit selection has no
      // retained division workspace; every gameplay owner remains compared.
      if (!(type == 0 && !flag_boundary && at >= division_scratch &&
            at < division_scratch + 4) &&
          expected[at] != memory[0x7e0000 + at])
        throw std::runtime_error(
            "Door semantic RAM differs at " + std::to_string(at) +
            " expected=" + std::to_string(expected[at]) + " source=" +
            std::to_string(memory[0x7e0000 + at]) + ": " + context);
    check(n.input == old_input && n.phone == old_phone &&
              n.flags == old_flags && n.actors.ticks() == 0 &&
              n.control.x_fraction == old_control.x_fraction &&
              n.control.y_fraction == old_control.y_fraction &&
              n.control.moved_this_tick == old_control.moved_this_tick &&
              n.control.trodden_surface_flags ==
                  old_control.trodden_surface_flags &&
              n.leader.map_text.text == old_text.text &&
              n.leader.map_text.unread_type == old_text.unread_type,
          "Door changed unrelated native input/phone/flags/clock/control/text "
          "state");
    ++calls;
    if (type < types.size())
      ++types[type];
    steps += local_steps;
    return cpu.accumulator;
  }
};
std::shared_ptr<SpriteResources> sprites() {
  native_sprite_test::Fixture f;
  return std::make_shared<SpriteResources>(f.bytes, f.layout);
}
void authored(const eb::GameAssets &assets, Original &o) {
  o.load(assets.image);
  const auto map = npcs::MapTextResources::import(assets.image, assets.version);
  const auto data = WorldDoorResources::import(assets.image, assets.version);
  const auto art = sprites();
  std::set<std::pair<unsigned, unsigned>> cells;
  for (unsigned index = 0; index < 1280; ++index) {
    const unsigned at = 0x100000 + index * 4;
    const unsigned pointer = word(assets.image, at) | word(assets.image, at + 2)
                                                          << 16;
    check((pointer & 0xff0000) == 0xcf0000,
          "Authored door directory leaves owned bank");
    const unsigned list = pointer - 0xc00000;
    const unsigned count = word(assets.image, list);
    for (unsigned i = 0; i < count; ++i) {
      const unsigned entry = list + 2 + i * 5;
      const unsigned y = assets.image[entry], x = assets.image[entry + 1];
      if (x < 32 && y < 32)
        cells.emplace((index % 32) * 32 + x, (index / 32) * 32 + y);
    }
  }
  // CLEAN_ROM intentionally preserves overcounted lists. Their extra item
  // aliases the following list header/content. These exact nine selections
  // reach no C07526 case and read its uninitialized LOCAL00 permission.
  const std::set<std::tuple<unsigned, unsigned, unsigned>> expected_unknown{
      {32, 99, 9},    {288, 684, 20}, {352, 390, 22},
      {384, 298, 22}, {416, 320, 8},  {512, 674, 13},
      {544, 66, 9},   {576, 546, 13}, {896, 577, 10}};
  std::set<std::tuple<unsigned, unsigned, unsigned>> observed_unknown;
  const std::set<std::tuple<unsigned, unsigned, unsigned>>
      expected_unowned_flags{
          {480, 912, 0x71c0},
          {544, 1056,
           assets.version == eb::GameVersion::US ? 0x320eu : 0x16efu}};
  std::set<std::tuple<unsigned, unsigned, unsigned>> observed_unowned_flags;
  for (const auto [x, y] : cells) {
    npcs::MapTextState selected;
    const unsigned type = map->lookup(x, y, selected);
    if (type > 7) {
      context = assets.title +
                " overcounted door type=" + std::to_string(type) +
                " cell=" + std::to_string(x) + "," + std::to_string(y);
      check(expected_unknown.contains({x, y, type}),
            "Unexpected unsupported authored door selection");
      observed_unknown.emplace(x, y, type);
      Native zero(assets.version, art, map, data),
          poisoned(assets.version, art, map, data);
      const auto first = o.compare(zero, {std::uint16_t(x), std::uint16_t(y)},
                                   type, selected.door_found, 0);
      const auto second =
          o.compare(poisoned, {std::uint16_t(x), std::uint16_t(y)}, type,
                    selected.door_found, 0xa5);
      check(first != second, "Unknown source door permission no longer depends "
                             "on prior stack contents");
      continue;
    }
    if (type == 0) {
      const auto predicate = data->event_predicate(selected.door_found);
      if (!predicate.flag || predicate.flag > 1024) {
        context = assets.title +
                  " overcounted event cell=" + std::to_string(x) + "," +
                  std::to_string(y) + " flag=" + std::to_string(predicate.flag);
        check(expected_unowned_flags.contains({x, y, predicate.flag}),
              "Unexpected out-of-owner door flag");
        observed_unowned_flags.emplace(x, y, predicate.flag);
        Native n(assets.version, art, map, data);
        o.compare(n, {std::uint16_t(x), std::uint16_t(y)}, type,
                  selected.door_found, 0, predicate.flag);
        continue;
      }
    }
    const unsigned variants = type == 0                  ? 4
                              : type == 1                ? 3
                              : type == 2                ? 8
                              : (type == 3 || type == 4) ? 2
                                                         : 1;
    for (unsigned variant = 0; variant < variants; ++variant) {
      context = assets.title + " authored type=" + std::to_string(type) +
                " cell=" + std::to_string(x) + "," + std::to_string(y) +
                " variant=" + std::to_string(variant);
      Native n(assets.version, art, map, data);
      if (type == 0) {
        const auto payload = data->event_predicate(selected.door_found);
        check(payload.flag && payload.flag <= 1024,
              "Authored door event escapes flag owner");
        n.flags[(payload.flag - 1) / 8] =
            (variant & 1) ? 1u << ((payload.flag - 1) & 7) : 0;
        n.queued.current_type = (variant & 2) ? 0 : 0xffff;
      } else if (type == 1)
        n.leader.walking_style = variant ? variant + 6 : 0;
      else if (type == 2) {
        if (variant == 1)
          n.input.player_activity = 0;
        if (variant == 2)
          n.control.automatic_mode = 2;
        if (variant == 3)
          n.queued.pending = 1;
        if (variant == 4)
          n.maintenance.enemy_touched = 1;
        if (variant == 5)
          n.actors.appearance_scene().battle_swirl_ticks = 1;
        if (variant == 6)
          n.queued.current_type = 2;
        if (variant == 7)
          n.actors.appearance_scene().intangibility_ticks = 0;
      } else if (type == 3 || type == 4)
        n.leader.demo_frames = variant;
      o.compare(n, {std::uint16_t(x), std::uint16_t(y)}, type,
                selected.door_found);
    }
  }
  check(observed_unowned_flags == expected_unowned_flags,
        "Overcounted out-of-owner event inventory changed");
  check(observed_unknown == expected_unknown,
        "Overcounted authored door inventory changed");
  for (unsigned type = 0; type < 7; ++type)
    check(o.types[type] > 0, "Authored corpus has no coverage for a door type");
  // No type7 record is authored in either regional directory. Its actual
  // dispatcher branch is exercised below through the synthetic catalog.
  check(o.types[7] == 0, "Authored type7 inventory changed");
}
void synthetic(eb::GameAssets assets, Original &o) {
  const auto art = sprites();
  for (unsigned type : {0u, 1u, 2u, 3u, 4u, 5u, 6u, 7u})
    for (unsigned variant = 0; variant < 16; ++variant) {
      const unsigned found = type == 1 ? (variant % 3 == 0   ? 0
                                          : variant % 3 == 1 ? 1
                                                             : 0x8000)
                             : type == 3 || type == 4 ? variant * 0x100
                                                      : 0x8100;
      // Redirect one catalog cell to one actual record. All instructions,
      // event/queue helpers and dispatcher remain the regional original.
      pointer(assets.image, 0x100000, 0xcf3100);
      put(assets.image, 0xf3100, 1);
      assets.image[0xf3102] = 6;
      assets.image[0xf3103] = 5;
      assets.image[0xf3104] = type;
      put(assets.image, 0xf3105, found);
      put(assets.image, 0xf0100, (variant & 1) ? 0x8400 : 0x0400);
      pointer(assets.image, 0xf0102, (variant & 2) ? 0 : 0x81abcdef);
      o.load(assets.image);
      auto map = npcs::MapTextResources::import(assets.image, assets.version);
      auto data = WorldDoorResources::import(assets.image, assets.version);
      Native n(assets.version, art, map, data);
      n.leader.leader_direction = variant & 1 ? 0xffff : variant;
      n.queued.next = variant & 3;
      n.queued.current_type = variant & 4 ? type : 0xffff;
      n.flags[127] = variant & 2 ? 0x80 : 0;
      n.leader.walking_style = variant % 4 == 0   ? 0
                               : variant % 4 == 1 ? 7
                               : variant % 4 == 2 ? 8
                                                  : 13;
      n.leader.demo_frames = variant & 8;
      n.actors.appearance_scene().intangibility_ticks =
          variant & 2 ? 0 : 0xffff;
      context = assets.title + " synthetic type=" + std::to_string(type) +
                " variant=" + std::to_string(variant);
      o.compare(n, {5, 6}, type, found);
    }
}
} // namespace
int main(int argc, char **argv) {
  try {
    check(argc > 1, "native_world_door_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      Original original(assets.version);
      authored(assets, original);
      synthetic(assets, original);
      std::cout
          << "PASS " << assets.title << ": " << original.calls
          << " source door calls, " << original.completed
          << " complete routes, " << original.transitions
          << " required input-producer boundaries, "
          << original.undefined_permissions
          << " rejected uninitialized permissions, " << original.unowned_flags
          << " rejected out-of-owner flag reads, " << original.steps
          << " source steps; full semantic RAM/queue/blink equality; types";
      for (auto count : original.types)
        std::cout << ' ' << count;
      std::cout << '\n';
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
