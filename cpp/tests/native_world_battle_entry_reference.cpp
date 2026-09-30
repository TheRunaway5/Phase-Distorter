// Complete original regional C0D19B, including the real C41EFF, complete
// BATTLE_SWIRL_SEQUENCE and whole FIND_PATH_TO_PARTY/C4 solver. No helper is
// substituted. CHANGE_MUSIC takes its legitimate already-playing-track exit.
#include "eb/main_cpu_65816.hpp"
#include "eb/scene_read_view.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_world_battle_entry_fixture.hpp"
#include <iostream>
#include <set>

namespace {
using namespace eb::native;
using Fixture = battle_entry_test::Fixture;
std::string context;
std::uint64_t checks{}, instructions{};
struct PruningCoverage {
  unsigned equality{}, excess_one{}, excess_two{}, touched_protection{};
  void observe(const Fixture &f) {
    for (const auto member : f.state.remaining) {
      if (!member.count)
        continue;
      unsigned candidates{}, positive{};
      for (const auto &candidate : f.paths.candidates()) {
        const auto role = f.actors.actor(candidate.actor).authored_role();
        if (role && f.actors.authored_enemy_selector(*role) == member.enemy) {
          ++candidates;
          positive += candidate.raw_length != 0;
        }
      }
      equality += candidates == member.count;
      excess_one += candidates == member.count + 1;
      excess_two += candidates == member.count + 2;
      touched_protection += positive > member.count;
    }
  }
};
void check(bool okay, const std::string &message) {
  ++checks;
  if (!okay)
    throw std::runtime_error(message + ": " + context);
}
unsigned packed(PaletteColor c) {
  return c.red | unsigned(c.green) << 5 | unsigned(c.blue) << 10;
}
template <std::size_t N> unsigned mask(const std::array<bool, N> &bits) {
  unsigned value = 0;
  for (unsigned i = 0; i < N; ++i)
    if (bits[i])
      value |= 1 << i;
  return value;
}
struct Oracle {
  bool jp;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned entry, game, shift, scripts, shape, path, x, y, moving, enemy, npc,
      tick, graphics, touched, target, touched_flag, initiative, swirl_count,
      group, remaining, roster, swirl, repeat, backup, track, music_entry,
      swirl_entry, path_entry;
  explicit Oracle(const eb::GameAssets &a)
      : jp(a.version == eb::GameVersion::JP),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    entry = jp ? 0xc0d165 : 0xc0d19b;
    game = jp ? 0x9aa9 : 0x97f5;
    shift = jp ? 3 : 0;
    scripts = jp ? 0xa58 : 0xa62;
    shape = jp ? 0x2f6c : 0x2b6e;
    path = jp ? 0x305c : 0x2c5e;
    x = jp ? 0xb84 : 0xb8e;
    y = jp ? 0xbc0 : 0xbca;
    moving = jp ? 0x1a7c : 0x1a86;
    enemy = jp ? 0x3110 : 0x2d12;
    npc = jp ? 0x3098 : 0x2c9a;
    tick = jp ? 0x10ac : 0x10b6;
    graphics = jp ? 0x1160 : 0x116a;
    touched = jp ? 0x513c : 0x4db6;
    target = touched + 2;
    touched_flag = touched + 4;
    initiative = touched + 6;
    swirl_count = jp ? 0x60e6 : 0x5d60;
    group = jp ? 0x4e12 : 0x4a8c;
    remaining = jp ? 0x4e02 : 0x4a7c;
    roster = jp ? 0xa18c : 0x9f8a;
    swirl = jp ? 0xb097 : 0xaec2;
    repeat = jp ? 0xb0b9 : 0xaee4;
    backup = jp ? 0x60f8 : 0x5d72;
    track = jp ? 0xb6ec : 0xb53b;
    music_entry = jp ? 0xc4cf5c : 0xc4fbbd;
    swirl_entry = jp ? 0xc2e7f9 : 0xc2e8e0;
    path_entry = jp ? 0xc0bc53 : 0xc0bc74;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  unsigned get(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void seed(const Fixture &f, unsigned expected_track) {
    put(game + 148 - shift, f.formation.current_leader_role);
    for (unsigned i = 0; i < 6; ++i)
      put(game + 162 - shift + i * 2, f.formation.roles[i]);
    bus->work_ram[game + 174 - shift] = f.party.party_count;
    put(game + 138 - shift, f.leader.leader_direction);
    put(touched, *f.actors.actor(*f.state.touched).authored_role());
    put(target, 25);
    put(touched_flag, f.maintenance.enemy_touched);
    put(initiative, 0xbeef);
    put(swirl_count, f.actors.appearance_scene().battle_swirl_ticks);
    put(group, f.state.group);
    put(roster, f.state.roster.size());
    for (unsigned i = 0; i < 4; ++i) {
      put(remaining + i * 2, f.state.remaining[i].enemy);
      put(remaining + 8 + i * 2, f.state.remaining[i].count);
    }
    for (unsigned i = 0; i < f.state.roster.size(); ++i)
      put(roster + 2 + i * 2, f.state.roster[i]);
    for (unsigned role = 0; role < 30; ++role) {
      const auto id = f.actors.actor_for_role(role);
      const auto b = f.actors.authored_behavior(role);
      const auto p = f.actors.authored_position(role);
      const auto pause = f.actors.authored_pause(role);
      put(scripts + role * 2,
          id && f.actors.actor(*id).action().alive ? 0 : 0xffff);
      put(x + role * 2, p[0] >> 16);
      put(y + role * 2, p[1] >> 16);
      put(shape + role * 2,
          id ? f.actors.actor(*id).appearance_context.shape : 0);
      put(path + role * 2, b.path_state);
      put(moving + role * 2, b.moving_direction);
      put(enemy + role * 2, f.actors.authored_enemy_selector(role));
      put(npc + role * 2, f.actors.authored_npc_selector(role));
      put(tick + role * 2,
          0xc0 | (!pause.tick_callback_enabled ? 0x8000 : 0) |
              (!pause.scripts_and_physics_enabled ? 0x4000 : 0));
      put(graphics + role * 2,
          0x7e | (f.actors.authored_sprite_hidden(role) ? 0x8000 : 0));
    }
    const auto &leader = f.actors.actor(f.player);
    const auto origin =
        f.collision.origin({std::uint16_t(leader.action().position[0] >> 16),
                            std::uint16_t(leader.action().position[1] >> 16)},
                           leader.appearance_context.shape);
    const auto left = std::uint16_t((origin.x >> 3) - 32),
               top = std::uint16_t((origin.y >> 3) - 32);
    for (unsigned yy = 0; yy < 64; ++yy)
      for (unsigned xx = 0; xx < 64; ++xx) {
        const auto px = std::uint16_t(left + xx), py = std::uint16_t(top + yy);
        bus->work_ram[0xe000 + (py & 63) * 64 + (px & 63)] =
            f.area.collision(px, py);
      }
    put(backup, packed(f.backup));
    put(0x200, packed(f.colors[0]));
    put(track, expected_track);
    bus->work_ram[repeat] = f.swirl.next;
    bus->work_ram[repeat + 1] = f.swirl.repeat_speed;
    bus->work_ram[repeat + 2] = f.swirl.repeats_until_speedup;
    put(0x24, 0x1234);
    put(0x26, 0xabcd);
  }
  void run(unsigned expected_track) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.execute_instruction<0x22>(entry, 4);
    unsigned music_calls = 0, swirl_calls = 0, path_calls = 0;
    for (unsigned i = 0; i < 5000000; ++i) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
        check(music_calls == 1 && swirl_calls == 1 && path_calls == 1,
              "Entry skipped a real source nested owner");
        return;
      }
      if (cpu.program_counter == music_entry) {
        ++music_calls;
        check(cpu.accumulator == expected_track,
              "Initiative chose a different real music track");
      }
      if (cpu.program_counter == swirl_entry)
        ++swirl_calls;
      if (cpu.program_counter == path_entry)
        ++path_calls;
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Original complete battle entry did not return: " +
                             cpu.describe_registers() + ": " + context);
  }
  void compare(const Fixture &f) {
    check(get(touched_flag) == f.maintenance.enemy_touched &&
              get(initiative) == unsigned(f.state.initiative) &&
              get(swirl_count) ==
                  f.actors.appearance_scene().battle_swirl_ticks &&
              get(group) == f.state.group,
          "Initiative/countdown/group publication differs");
    check(get(roster) == f.state.roster.size(),
          "Collected roster count differs");
    for (unsigned i = 0; i < f.state.roster.size(); ++i)
      check(get(roster + 2 + i * 2) == f.state.roster[i],
            "Collected enemy type differs");
    for (unsigned i = 0; i < 4; ++i)
      check(get(remaining + i * 2) == f.state.remaining[i].enemy &&
                get(remaining + 8 + i * 2) == f.state.remaining[i].count,
            "Four authored type/count entries differ");
    for (unsigned role = 0; role < 30; ++role) {
      const auto p = f.actors.authored_pause(role);
      check(get(path + role * 2) == f.actors.authored_behavior(role).path_state,
            "Path gate differs at role" + std::to_string(role));
      check(bool(get(tick + role * 2) & 0x8000) == !p.tick_callback_enabled &&
                bool(get(tick + role * 2) & 0x4000) ==
                    !p.scripts_and_physics_enabled,
            "Final pause gates differ at role" + std::to_string(role));
      check(bool(get(graphics + role * 2) & 0x8000) ==
                f.actors.authored_sprite_hidden(role),
            "Final sprite hide gate differs at role" + std::to_string(role));
    }
    check(get(0xf200 + 158) == f.paths.candidates().size(),
          "Candidate count differs");
    for (unsigned i = 0; i < f.paths.candidates().size(); ++i) {
      const auto &c = f.paths.candidates()[i];
      const unsigned at = 0xf200 + 160 + i * 18;
      check(get(at + 16) == *f.actors.actor(c.actor).authored_role() &&
                get(at + 14) == c.raw_length && get(at + 10) == c.points.size(),
            "Ordered/pruned candidate record differs");
      for (unsigned j = 0; j < c.points.size(); ++j) {
        const unsigned ptr = get(at + 12) + j * 4;
        check(get(ptr) == c.points[j].y && get(ptr + 2) == c.points[j].x,
              "Actual path waypoint differs");
      }
      if (!c.points.empty())
        check(f.paths.path(c.actor) &&
                  f.paths.path(c.actor)->points == c.points,
              "Actual path was not installed on native actor");
    }
    const auto &s = f.swirl;
    auto &b = bus->work_ram;
    check(b[swirl] == s.update_in && b[swirl + 1] == s.interval &&
              b[swirl + 2] == s.frames_left && b[swirl + 3] == s.frame &&
              b[swirl + 4] == s.invert && b[swirl + 5] == s.reverse &&
              b[swirl + 6] == mask(s.masked_layers) &&
              b[swirl + 8] == s.padding && b[swirl + 9] == s.restore_after,
          "Complete source swirl initialization differs");
    const auto view = bus->scene_read_view();
    check(get(0x200) == packed(f.colors[0]) &&
              view.fixed_color == packed(f.visual.fixed_color) &&
              b[0x1a] == mask(f.visual.visible_layers) &&
              view.ppu_registers[0x31] == (mask(f.visual.color_math_layers) |
                                           (f.visual.subtract ? 128 : 0) |
                                           (f.visual.half_intensity ? 64 : 0)),
          "Actual palette/effect publication differs");
    check(get(0x24) == 0x1234 && get(0x26) == 0xabcd && f.actors.ticks() == 0 &&
              f.music.size() == 1,
          "Entry consumed RNG/ticks or repeated music");
  }
};
struct Choice {
  unsigned encounter, index, group;
};
std::vector<Choice> choices(const EnemySpawnData &d) {
  std::vector<Choice> found;
  std::set<unsigned> groups;
  bool repeated_group{};
  for (unsigned e = 1; e < d.encounters.size(); ++e) {
    if (!d.encounters[e].chance[0])
      continue;
    for (unsigned i = 0; i < 8; ++i) {
      const unsigned group = d.encounters[e].choices.at(i);
      unsigned count = 0;
      bool okay = true;
      for (const auto member : d.battles[group]) {
        count += member.count;
        okay &= member.enemy != d.butterfly_enemy;
      }
      if (count < 1 || count > 4 || !okay || d.battles[group].size() > 4 ||
          groups.contains(group))
        continue;
      // A two-member row actually scans nearby matching enemies after the
      // touched member is accounted for. Single-member rows deliberately do
      // not, so duplicating those cannot prove pruning excess2/protection.
      const bool repeated = count == 2 && d.battles[group][0].count == 2;
      if (found.size() >= 9 && !repeated)
        continue;
      groups.insert(group);
      found.push_back({e, i, group});
      repeated_group |= repeated;
      if (found.size() == 10 && repeated_group)
        return found;
    }
  }
  return found;
}
void one(const eb::GameAssets &a,
         const std::shared_ptr<const EnemySpawnData> &data,
         const std::shared_ptr<SpriteResources> &sprites,
         const std::shared_ptr<const ActionScriptData> &scripts, Choice choice,
         unsigned extra_mode, unsigned enemy_direction,
         unsigned leader_direction, PruningCoverage &coverage) {
  Fixture f(a.version, sprites, scripts, GeneratedInputData(a.image, a.version),
            data, WorldCollision(a.image, world_collision_layout(a.version)),
            import_world_swirl_data(a.image));
  auto ids = f.spawn(choice.encounter, choice.index);
  if (extra_mode) {
    auto extra = f.spawn(choice.encounter, choice.index, 1);
    if (extra_mode == 1 && extra.size() > 1) {
      for (unsigned i = 1; i < extra.size(); ++i)
        f.actors.erase(extra[i]);
      extra.resize(1);
    }
    ids.insert(ids.end(), extra.begin(), extra.end());
  }
  f.arrange(ids, extra_mode == 3);
  f.actors.actor(ids[0]).behavior.moving_direction = enemy_direction;
  f.leader.leader_direction = leader_direction;
  // Target is independently selected; the path region still anchors role24.
  auto &target_actor = f.actors.actor(f.target_actor);
  target_actor.action().position[1] += std::uint32_t((leader_direction % 3) * 8)
                                       << 16;
  context = a.title + " group=" + std::to_string(choice.group) +
            " extra=" + std::to_string(extra_mode) +
            " facing=" + std::to_string(enemy_direction) + "," +
            std::to_string(leader_direction);
  // Determine the legitimate existing track from the actual native result,
  // then execute the entire source entry and compare its computed initiative.
  Oracle oracle(a);
  // Capture all source inputs before native entry publishes anything.
  const unsigned octant = unsigned(f.angles.direction(
      {std::uint16_t(f.actors.actor(ids[0]).action().position[0] >> 16),
       std::uint16_t(f.actors.actor(ids[0]).action().position[1] >> 16)},
      {std::uint16_t(target_actor.action().position[0] >> 16),
       std::uint16_t(target_actor.action().position[1] >> 16)}));
  const auto aligned = [&](unsigned facing) {
    auto delta = (facing - octant) & 7;
    return delta == 0 || delta == 1 || delta == 7;
  };
  const unsigned expected = choice.group >= 448 ? 8
                            : enemy_direction != 8 &&
                                    aligned(enemy_direction) &&
                                    aligned(leader_direction)
                                ? 9
                                : 176;
  oracle.seed(f, expected);
  oracle.run(expected);
  f.entry->enter();
  oracle.compare(f);
  coverage.observe(f);
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::invalid_argument("Provide US/JP packs");
    for (int arg = 1; arg < argc; ++arg) {
      auto a = eb::load_game_assets(argv[arg], eb::asset_profiles());
      const auto data = std::make_shared<EnemySpawnData>(
          import_enemy_spawn_data(a.image, a.version));
      const auto sprites = std::make_shared<SpriteResources>(
          a.image, sprite_catalog_layout(a.version));
      const auto scripts = import_action_scripts(a.image, a.version);
      const auto selected = choices(*data);
      check(selected.size() == 10,
            "Imported encounter fixture did not find ten valid groups");
      const auto before = checks;
      PruningCoverage coverage;
      unsigned calls = 0;
      for (const auto choice : selected)
        for (unsigned extra = 0; extra < 4; ++extra) {
          one(a, data, sprites, scripts, choice, extra, 8, 6, coverage);
          ++calls;
        }
      for (unsigned enemy = 0; enemy < 8; ++enemy)
        for (unsigned leader = 0; leader < 8; ++leader) {
          one(a, data, sprites, scripts, selected[0], 0, enemy, leader, coverage);
          ++calls;
        }
      check(coverage.equality && coverage.excess_one && coverage.excess_two &&
                coverage.touched_protection,
            "Imported fixtures missed a pruning boundary or touched protection " +
                std::to_string(coverage.equality) + "/" +
                std::to_string(coverage.excess_one) + "/" +
                std::to_string(coverage.excess_two) + "/" +
                std::to_string(coverage.touched_protection));
      std::cout << a.title << ": " << calls
                << " complete source battle entries; " << checks - before
                << " checks; pruning equality/excess1/excess2/protected="
                << coverage.equality << '/' << coverage.excess_one << '/'
                << coverage.excess_two << '/' << coverage.touched_protection
                << '\n';
    }
    std::cout << "Source instructions: " << instructions << '\n';
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
