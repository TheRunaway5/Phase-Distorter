// Original C04EF0/C04D78 and full authored EVENT2 passes are the oracle.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_party_following.hpp"
#include "eb/native/world_party_movement.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>
using namespace eb::native;
namespace {
std::string context;
void check(bool ok, const char *m) {
  if (!ok)
    throw std::runtime_error(std::string(m) + ": " + context);
}
unsigned word(std::span<const std::uint8_t> b, unsigned at) {
  return b[at] | unsigned(b[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> b, unsigned at) {
  return word(b, at) | word(b, at + 2) << 16;
}
struct Layout {
  unsigned startup, follow, game, characters, stride, displacement, current,
      position, fraction, velocity, velocity_fraction, vars, screen_x, screen_y;
  unsigned direction, surface, animation, fingerprint, footstep, leader,
      leader_direction, mismatch;
  unsigned graphics_low, graphics_high, graphics_bank, vram, byte_width,
      tile_height, displayed;
};
constexpr Layout us{0xc03daa, 0xa26b, 0x97f5, 0x99ce, 95,     0,
                    0x1a42,   0xb8e,  0xc42,  0xcf6,  0xdaa,  0xe5e,
                    0xb16,    0xb52,  0x2af6, 0x2baa, 0x10f2, 0x3456,
                    0x2898,   0x5d78, 0x5d76, 0x5db8, 0x29ca, 0x2a06,
                    0x2a42,   0x298e, 0x2a7e, 0x2aba, 0x341a};
constexpr Layout jp{0xc04009, 0xa24a, 0x9aa9, 0x9c7f, 94,     3,
                    0x1a38,   0xb84,  0xc38,  0xcec,  0xda0,  0xe54,
                    0xb0c,    0xb48,  0x2ef4, 0x2fa8, 0x10e8, 0x1af4,
                    0x2c96,   0x60fe, 0x60fc, 0x613e, 0x2dc8, 0x2e04,
                    0x2e40,   0x2d8c, 0x2e7c, 0x2eb8, 0x1ab8};
struct Oracle {
  const eb::GameAssets &assets;
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Oracle(const eb::GameAssets &a)
      : assets(a), l(a.version == eb::GameVersion::JP ? jp : us),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    bus->work_ram[0xd] = 0x80;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  unsigned get(unsigned at) const { return word(bus->work_ram, at); }
  unsigned character(unsigned record, unsigned field) const {
    return l.characters + record * l.stride + field - (l.displacement ? 1 : 0);
  }
  void seed(unsigned role, const WorldActor &a) {
    const auto i = role * 2;
    put(l.direction + i, a.behavior.direction);
    put(l.surface + i, a.behavior.surface_flags);
    put(l.animation + i, a.action().animation);
    put(l.screen_x + i, a.behavior.projected_x);
    put(l.screen_y + i, a.behavior.projected_y);
    for (unsigned v = 0; v < 8; ++v)
      put(l.vars + v * 60 + i, a.action().variables[v]);
    for (unsigned axis = 0; axis < 3; ++axis) {
      put(l.position + axis * 60 + i, a.action().position[axis] >> 16);
      put(l.fraction + axis * 60 + i, a.action().position[axis]);
      put(l.velocity + axis * 60 + i, a.action().velocity[axis] >> 16);
      put(l.velocity_fraction + axis * 60 + i, a.action().velocity[axis]);
    }
  }
  void artwork(unsigned role, unsigned sprite) {
    const auto catalog = sprite_catalog_layout(assets.version);
    const unsigned base = pointer(assets.image, catalog.groups + sprite * 4) -
                          0xc00000,
                   table = base + 9, i = role * 2;
    put(l.graphics_low + i, table);
    put(l.graphics_high + i, (table + 0xc00000) >> 16);
    put(l.graphics_bank + i, assets.image[base + 8]);
    put(l.byte_width + i, assets.image[base + 1] * 2);
    put(l.tile_height + i, assets.image[base]);
    put(l.vram + i, 0x4000);
    put(l.displayed + i, 0xffff);
    put(l.fingerprint + i, 0x1234);
    bus->video_ram.fill(0);
  }
  void call(unsigned address, unsigned role, bool far) {
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = 0xa53c;
    cpu.x_index = 0x1357;
    cpu.y_index = 0x2468;
    put(l.current, role);
    put(0x1e88, role * 2);
    if (far)
      cpu.execute_instruction<0x22>(address, 4);
    else
      cpu.execute_instruction<0x20>(address, 3);
    unsigned steps = 0;
    while (cpu.program_counter != 0xc0ff00u + (far ? 4 : 3) ||
           cpu.stack_pointer != 0x1fff) {
      if (++steps > 1000000)
        throw std::runtime_error("Party movement source did not return " +
                                 context + " " + cpu.describe_registers());
      cpu.step_instruction();
    }
    check(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
          "Source helper damaged caller context");
  }
  void compare(unsigned role, const WorldActor &a) {
    const unsigned i = role * 2;
    for (unsigned axis = 0; axis < 3; ++axis) {
      check(a.action().position[axis] ==
                (get(l.position + axis * 60 + i) << 16 |
                 get(l.fraction + axis * 60 + i)),
            "Party actor position/fraction differs");
      check(a.action().velocity[axis] ==
                (get(l.velocity + axis * 60 + i) << 16 |
                 get(l.velocity_fraction + axis * 60 + i)),
            "Party actor velocity/fraction differs");
    }
    for (unsigned v = 0; v < 8; ++v)
      check(a.action().variables[v] == get(l.vars + v * 60 + i),
            "Party actor variables differ");
    check(a.behavior.direction == get(l.direction + i) &&
              a.behavior.surface_flags == get(l.surface + i) &&
              a.action().animation == get(l.animation + i),
          "Party facing/surface/animation differs");
    if (a.behavior.projected_x != std::int16_t(get(l.screen_x + i)) ||
        a.behavior.projected_y != std::int16_t(get(l.screen_y + i)))
      throw std::runtime_error(
          "Party projection differs native=" +
          std::to_string(a.behavior.projected_x) + "," +
          std::to_string(a.behavior.projected_y) +
          " source=" + std::to_string(std::int16_t(get(l.screen_x + i))) + "," +
          std::to_string(std::int16_t(get(l.screen_y + i))) + ": " + context);
  }
  void pixels(unsigned role, const SpriteImage &image) {
    unsigned destination = get(l.vram + role * 2);
    const unsigned size = get(l.byte_width + role * 2);
    const unsigned rows = get(l.tile_height + role * 2),
                   padding = (rows & 1) * 8;
    for (unsigned row = 0; row < rows; ++row) {
      for (unsigned y = 0; y < 8; ++y)
        for (unsigned x = 0; x < size / 4; ++x) {
          const unsigned at = destination * 2 + (x / 8) * 32 + y * 2;
          unsigned color = 0;
          for (unsigned p = 0; p < 4; ++p)
            color |= ((bus->video_ram[(at + (p / 2) * 16 + (p & 1)) & 65535] >>
                       (7 - (x & 7))) &
                      1)
                     << p;
          if (color != (*image.canvas)[(padding + row * 8 + y) *
                                           image.layout->canvas_width +
                                       x])
            throw std::runtime_error(
                "Startup source artwork pixels differ at " + std::to_string(x) +
                "," + std::to_string(row * 8 + y) +
                " source=" + std::to_string(color) + " native=" +
                std::to_string((*image.canvas)[(padding + row * 8 + y) *
                                                   image.layout->canvas_width +
                                               x]) +
                " displayed=" + std::to_string(get(l.displayed + role * 2)) +
                " width=" + std::to_string(image.width) +
                " height=" + std::to_string(image.height) + ": " + context);
        }
      if (!(destination & 0x100))
        destination += 0x100;
      else {
        const unsigned next = destination + ((size + 32) & 0xffc0) / 2;
        destination = (next ^ destination) & 0x100 ? next : next - 0x100;
      }
    }
  }
};
struct FollowingFixture {
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  ActorWorld actors;
  party::State party;
  WorldPartyState formation;
  PartyTrail trail;
  WorldControlState control;
  npcs::InteractionState leader;
  dialogue::PromptState prompt;
  WorldMaintenanceState maintenance;
  WorldPartyFollowingState state;
  WorldPartyFollowingData data;
  story::RandomState random{0x1234, 0x9876};
  WorldPartyMovementData movement_data;
  WorldPartyMovement movement;
  WorldPartyFollowing following;
  FollowingFixture(const eb::GameAssets &a, bool authored = false)
      : sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(authored ? import_action_scripts(a.image, a.version)
                         : std::make_shared<ActionScriptData>(
                               std::vector<std::uint8_t>{0x09}, 0,
                               std::vector<std::uint32_t>{0})),
        actors(sprites, scripts, a.version,
               import_appearance_data(a.image, a.version)),
        party(a.version), data(import_party_following_data(a.image, a.version)),
        movement_data(import_party_movement_data(a.image, a.version)),
        movement(actors, party, formation, random, movement_data),
        following(actors, party, formation, trail, control, leader, prompt,
                  maintenance, leader.movement_flags, state, data) {
    party.display_order = {1, 2, 3, 4, 5, 6};
    party.party_count = 6;
    formation.current_leader_role = 24;
    for (unsigned i = 0; i < 6; ++i)
      formation.roles[i] = 24 + i;
    for (unsigned i = 0; i < 256; ++i)
      trail.points[i] = {std::uint16_t(100 + i),     std::uint16_t(200 + i),
                         std::uint16_t((i % 3) * 4), 0,
                         std::uint16_t(i % 8),       0x4567};
  }
  ActorId create(unsigned record, unsigned member, unsigned group = 1,
                 unsigned script = 0) {
    WorldActorSpec s;
    s.script = script;
    s.sprite = group;
    s.action.animation = 2;
    s.action.position = {0x00801234, 0x00905678, 0x34567890};
    s.action.velocity = {0x00018000, 0xffffc000, 0x56781234};
    s.action.variables = {std::uint16_t(member),
                          std::uint16_t(record),
                          0x4321,
                          0x1234,
                          0x8888,
                          2,
                          0xabcd,
                          0x5a5a};
    return *actors.create_authored(s, {24 + record, 25 + record});
  }
};
struct FollowingOracle : Oracle {
  bool jp;
  unsigned pointers, trail, overlay, walking, possessed, pajamas, transitions,
      swirl, touched, battle;
  FollowingOracle(const eb::GameAssets &a)
      : Oracle(a), jp(a.version == eb::GameVersion::JP),
        pointers(jp ? 0x514e : 0x4dc8), trail(jp ? 0x54dc : 0x5156),
        overlay(jp ? 0x3278 : 0x2e7a), walking(jp ? 0x3020 : 0x2c22),
        possessed(jp ? 0xa171 : 0x9f6f), pajamas(jp ? 0xa173 : 0x9f71),
        transitions(jp ? 0xb68a : 0xb4b6), swirl(jp ? 0x60e6 : 0x5d60),
        touched(jp ? 0x5140 : 0x4dba), battle(jp ? 0x5148 : 0x4dc2) {}
  void world(const FollowingFixture &f) {
    for (unsigned i = 0; i < 6; ++i) {
      put(pointers + i * 2, l.characters + i * l.stride);
      put(character(i, 53), f.formation.character_startup[i].member_index);
      put(character(i, 55), f.formation.selected_styles[i]);
      put(character(i, 61), f.formation.trail_cursors[i]);
      put(character(i, 65), f.formation.last_trail_styles[i]);
      for (unsigned n = 0; n < 7; ++n)
        bus->work_ram[character(i, 14) + n] =
            f.party.character(i + 1).afflictions[n];
      bus->work_ram[l.game + 150 - l.displacement + i] =
          f.party.display_order[i];
    }
    // Formation IDs and roles are distinct source fields (unknown96/unknownA2).
    for (unsigned i = 0; i < 6; ++i) {
      bus->work_ram[l.game + 150 - l.displacement + i] =
          f.party.display_order[i];
      put(l.game + 162 - l.displacement + i * 2, f.formation.roles[i]);
    }
    put(l.game + 148 - l.displacement, f.formation.current_leader_role);
    for (unsigned i = 0; i < 256; ++i) {
      const auto &p = f.trail.points[i];
      unsigned at = trail + i * 12;
      put(at, p.x);
      put(at + 2, p.y);
      put(at + 4, p.surface_flags);
      put(at + 6, p.walking_style);
      put(at + 8, p.direction);
      put(at + 10, p.reserved);
    }
    put(l.game + 144 - l.displacement, f.control.moved_this_tick);
    put(l.game + 176 - l.displacement, f.control.automatic_mode);
    put(l.game + 142 - l.displacement, f.leader.walking_style);
    put(l.game + 146 - l.displacement, f.leader.movement_flags);
    bus->work_ram[l.game + 75 - l.displacement] = f.party.party_status;
    put(possessed, f.maintenance.possessed_players);
    put(pajamas, f.state.pajamas);
    put(transitions, f.actors.appearance_scene().transitions_disabled);
    put(swirl, f.actors.appearance_scene().battle_swirl_ticks);
    put(touched, f.maintenance.enemy_touched);
    put(battle, f.prompt.battle_mode);
  }
  void actor(unsigned role, const WorldActor &a) {
    seed(role, a);
    artwork(role, a.appearance.sprite());
    put(overlay + role * 2, a.appearance_context.overlay_flags);
    put(walking + role * 2, a.appearance_context.walking_style);
  }
  unsigned selected(unsigned role, const SpriteResources &r) {
    const unsigned p = (get(l.graphics_low + role * 2) |
                        (get(l.graphics_high + role * 2) & 255) << 16) -
                       0xc00000;
    const auto group = r.group_for_frame_table(p);
    check(bool(group), "Source selected an unimported frame table");
    return *group;
  }
  void compare_follow(unsigned role, const WorldActor &a,
                      const FollowingFixture &f) {
    compare(role, a);
    const unsigned record = a.action().variables[1];
    check(
        f.formation.trail_cursors[record] == get(character(record, 61)) &&
            f.formation.selected_styles[record] == get(character(record, 55)) &&
            f.formation.last_trail_styles[record] == get(character(record, 65)),
        "Follower character trail/style fields differ");
    check(f.maintenance.possessed_players == get(possessed) &&
              a.appearance_context.overlay_flags == get(overlay + role * 2) &&
              a.appearance_context.walking_style == get(walking + role * 2),
          "Follower possession/overlay/style differs");
    const auto catalog = sprite_catalog_layout(assets.version);
    const unsigned header =
        pointer(assets.image, catalog.groups + a.appearance.sprite() * 4);
    check(get(l.graphics_low + role * 2) == ((header + 9) & 65535) &&
              (get(l.graphics_high + role * 2) & 255) == (header >> 16) &&
              get(l.graphics_bank + role * 2) ==
                  assets.image[header - 0xc00000 + 8],
          "Follower requested artwork differs");
  }
};
void direct_reference(const eb::GameAssets &assets, unsigned &calls) {
  FollowingFixture f(assets);
  FollowingOracle o(assets);
  f.create(0, 16);
  const auto id = f.create(1, 0);
  auto &a = f.actors.actor(id);
  unsigned random = 0x71394acdu;
  const auto next = [&] {
    random = random * 1664525u + 1013904223u;
    return random;
  };
  for (unsigned member = 0; member < 17; ++member)
    for (unsigned style : {0u, 4u, 7u, 8u, 12u, 13u, 0x107u})
      for (unsigned trial = 0; trial < 64; ++trial) {
        context = assets.title + " following member=" + std::to_string(member) +
                  " style=" + std::to_string(style) +
                  " trial=" + std::to_string(trial);
        const unsigned record = 1 + trial % 5;
        const unsigned cursor = trial % 4 == 0 ? 255 : next() % 256;
        const unsigned ahead = (cursor +
                                unsigned(trial % 3 == 0   ? 11
                                         : trial % 3 == 1 ? 12
                                                          : 31) +
                                f.data.sizes[member]) &
                               255;
        f.party.display_order = {17, std::uint8_t(member + 1), 0, 0, 0, 0};
        if (member == 16)
          f.party.display_order = {17, 1, 0, 0, 0, 0};
        f.formation.trail_cursors[0] = ahead;
        f.formation.trail_cursors[record] = cursor;
        f.formation.selected_styles[record] = trial % 2 ? style : 0xabcd;
        f.formation.last_trail_styles[record] = 0x5678;
        f.formation.character_startup[record].member_index =
            trial % 2 ? member : 0;
        f.trail.points[cursor] = {
            std::uint16_t(next()),          std::uint16_t(next()),
            std::uint16_t((trial % 4) * 4), std::uint16_t(style),
            std::uint16_t(trial % 8),       0x9988};
        f.control.moved_this_tick = trial % 4 != 0;
        f.control.automatic_mode = trial % 11 == 0   ? 2
                                   : trial % 17 == 0 ? 3
                                                     : 0;
        f.leader.walking_style = trial % 2 ? 12 : 0;
        f.leader.movement_flags = trial % 7;
        f.party.party_status = trial % 13 == 0 ? 1 : trial % 11 == 0 ? 3 : 0;
        f.party.character(record + 1).afflictions[0] = trial % 6;
        f.party.character(record + 1).afflictions[1] = (trial / 6) % 4;
        f.state.pajamas = trial % 3 == 0;
        f.actors.appearance_scene().transitions_disabled = trial % 5 == 0;
        f.maintenance.possessed_players = trial % 2 ? 0xffff : 7;
        f.actors.appearance_scene().battle_swirl_ticks = trial == 61;
        f.maintenance.enemy_touched = trial == 62;
        f.prompt.battle_mode = trial == 63;
        a.action().variables = {std::uint16_t(member),
                                std::uint16_t(record),
                                0x4321,
                                0x1234,
                                0x8888,
                                2,
                                0xabcd,
                                std::uint16_t(next())};
        a.action().animation = 2;
        a.action().position = {next(), next(), next()};
        a.action().velocity = {next(), next(), next()};
        a.behavior.direction = 6;
        a.behavior.surface_flags = 0;
        a.appearance_context.overlay_flags = 0x1357;
        a.appearance_context.walking_style = 0xbeef;
        a.appearance = SpriteAppearance(f.sprites, 1);
        const bool prepare = !o.jp && trial % 2 == 0;
        const unsigned address =
            prepare ? 0xc04ef0 : (o.jp ? 0xc04fee : 0xc04d78);
        o.world(f);
        o.actor(24, f.actors.actor(*f.actors.actor_for_role(24)));
        o.actor(25, a);
        o.put(0x24, 0x9876);
        o.put(0x26, 0x1357);
        o.call(address, 25, true);
        // The creation owner provides the selected mode's geometry. Re-seed
        // using that authored geometry before the measured call; no helper is
        // replaced.
        const unsigned group = o.selected(25, *f.sprites);
        a.appearance = SpriteAppearance(f.sprites, group);
        o.world(f);
        o.actor(24, f.actors.actor(*f.actors.actor_for_role(24)));
        o.actor(25, a);
        o.put(0x24, 0x9876);
        o.put(0x26, 0x1357);
        o.call(address, 25, true);
        if (prepare) {
          const auto value = f.following.prepare(id);
          check(value && *value == o.cpu.accumulator,
                "Preparation exact script return differs");
        } else
          check(f.following.tick(id), "Valid original follower state rejected");
        o.compare_follow(25, a, f);
        check(o.get(0x24) == 0x9876 && o.get(0x26) == 0x1357,
              "Original following consumed RNG");
        ++calls;
      }
}
void event_reference(const eb::GameAssets &assets, unsigned &passes) {
  FollowingFixture f(assets, true);
  FollowingOracle o(assets);
  const bool jp = o.jp;
  const auto &l = o.l;
  f.party.party_count = 2;
  f.party.display_order = {1, 2, 0, 0, 0, 0};
  f.formation.projection = {24, 0, 0};
  f.formation.trail_cursors[0] = 50;
  f.formation.trail_cursors[1] = 38;
  const std::array<ActorId, 2> ids{f.create(0, 0, 1, 2), f.create(1, 1, 2, 2)};
  f.actors.bind_party_movement(f.movement);
  f.actors.bind_party_following(f.following);
  o.world(f);
  o.put(0x24, f.random.primary_word);
  o.put(0x26, f.random.secondary_word);
  const unsigned delta = jp ? 10 : 0, first = 0xa50 - delta,
                 next = 0xa9e - delta, script = 0xa62 - delta,
                 task = 0xada - delta, next_task = 0x125a - delta,
                 cursor = 0x13fe - delta, bank = 0x148a - delta,
                 sleep = 0x1372 - delta, stack = 0x12e6 - delta,
                 temp = 0x1516 - delta, tick_low = 0x107a - delta,
                 tick_high = 0x10b6 - delta, physics = 0x121e - delta,
                 project = 0x11a6 - delta;
  const unsigned tick_none = jp ? 0xc0941a : 0xc0943b,
                 project_none = jp ? 0xa018 : 0xa039;
  const auto entry = f.scripts->entry(2);
  check(f.scripts->byte(entry) == 0x23 && f.scripts->byte(entry + 3) == 0x25 &&
            f.scripts->byte(entry + 6) == 0x3b,
        "Authored EVENT2 callback bytes drifted");
  o.put(first, 48);
  o.put(0xa5e - delta, project_none);
  o.put(l.leader, 48);
  o.put(l.leader_direction, 0);
  for (unsigned i = 0; i < 2; ++i) {
    const unsigned index = (24 + i) * 2;
    o.actor(24 + i, f.actors.actor(ids[i]));
    o.put(l.vram + index, 0x4000 + i * 0x400);
    o.put(next + index, i ? 0xffff : 50);
    o.put(script + index, 0);
    o.put(task + index, i * 2);
    o.put(next_task + i * 2, 0xffff);
    o.put(cursor + i * 2, entry);
    o.put(bank + i * 2, 0xc0 | (entry >> 16));
    o.put(sleep + i * 2, 0);
    o.put(stack + i * 2, 0);
    o.put(temp + i * 2, 0);
    o.put(tick_low + index, tick_none);
    o.put(tick_high + index, tick_none >> 16);
    o.put(physics + index, jp ? 0x9fa7 : 0x9fc8);
    o.put(project + index, jp ? 0xa002 : 0xa023);
  }
  for (unsigned tick = 0; tick < 192; ++tick) {
    context =
        assets.title + " complete authored EVENT2 pass=" + std::to_string(tick);
    f.control.moved_this_tick = tick % 7 != 3;
    f.control.automatic_mode = tick % 19 == 5 ? 2 : tick % 19 == 6 ? 3 : 0;
    f.formation.projection.movement_mismatch = tick % 11 == 0;
    f.actors.scene().camera_x = tick % 7;
    f.actors.scene().camera_y = tick % 5;
    f.actors.appearance_scene().battle_swirl_ticks = tick % 23 == 8 ? 3 : 0;
    f.maintenance.enemy_touched = tick % 29 == 9;
    f.prompt.battle_mode = tick % 31 == 10;
    o.put(l.game + 144 - l.displacement, f.control.moved_this_tick);
    o.put(l.game + 176 - l.displacement, f.control.automatic_mode);
    o.put(l.mismatch, f.formation.projection.movement_mismatch);
    o.put(0x31, f.actors.scene().camera_x);
    o.put(0x33, f.actors.scene().camera_y);
    o.put(o.swirl, f.actors.appearance_scene().battle_swirl_ticks);
    o.put(o.touched, f.maintenance.enemy_touched);
    o.put(o.battle, f.prompt.battle_mode);
    // Both real actor passes see the same newly recorded trail content. Cursors
    // and character state are never copied from one implementation to the
    // other.
    for (unsigned record = 0; record < 2; ++record) {
      const auto at = f.formation.trail_cursors[record];
      auto &p = f.trail.points[at];
      p.walking_style = tick % 37 == 0 ? 12 : 0;
      p.surface_flags = (tick / 13 % 3) * 4;
      p.direction = tick / 17 % 8;
      o.put(o.trail + at * 12 + 4, p.surface_flags);
      o.put(o.trail + at * 12 + 6, p.walking_style);
      o.put(o.trail + at * 12 + 8, p.direction);
    }
    o.call(jp ? 0xc09445 : 0xc09466, 24, true);
    const auto result = f.actors.advance_tick();
    if (result != WorldTickResult::Complete) {
      const auto &r = *f.actors.request();
      throw std::runtime_error(
          "Authored EVENT2 retained operation " +
          std::to_string(unsigned(r.binding.operation)) + " id=" +
          std::to_string(r.diagnostic.authored_identifier) + ": " + context);
    }
    for (unsigned i = 0; i < 2; ++i) {
      const auto &a = f.actors.actor(ids[i]);
      o.compare_follow(24 + i, a, f);
      const auto t = a.tasks()[0];
      if ((t.cursor & 65535) != o.get(cursor + i * 2) ||
          ((t.cursor >> 16) | 0xc0) != o.get(bank + i * 2) ||
          t.sleep_frames != o.get(sleep + i * 2) ||
          t.stack_depth != o.get(stack + i * 2))
        throw std::runtime_error(
            "Full EVENT2 task continuation differs native=" +
            std::to_string(t.cursor) + "," + std::to_string(t.sleep_frames) +
            "," + std::to_string(t.stack_depth) +
            " source=" + std::to_string(o.get(cursor + i * 2)) + "," +
            std::to_string(o.get(bank + i * 2)) + "," +
            std::to_string(o.get(sleep + i * 2)) + "," +
            std::to_string(o.get(stack + i * 2)) + ": " + context);
      check(a.behavior.tick == ActorTickCallback::PartyFollower &&
                a.behavior.physics == ActorPhysics::PartyFollower &&
                a.behavior.projection == ActorProjection::Unchanged,
            "Full EVENT2 callback phase differs");
      check(a.appearance.fingerprint() == o.get(l.fingerprint + (24 + i) * 2),
            "Full EVENT2 appearance key differs");
      const auto selected = *a.appearance.displayed();
      o.pixels(24 + i, *f.sprites->acquire(selected.sprite, selected.pose,
                                           selected.surface, selected.format));
    }
    check(f.random.primary_word == o.get(0x24) &&
              f.random.secondary_word == o.get(0x26),
          "Full EVENT2 RNG order differs");
    check(f.actors.ticks() == tick + 1, "Full EVENT2 advanced extra tick");
    ++passes;
  }
}
} // namespace
int main(int argc, char **argv) {
  try {
    check(argc >= 2, "native_world_party_following_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) {
      const auto a = eb::load_game_assets(argv[i], eb::asset_profiles());
      unsigned calls = 0, passes = 0;
      direct_reference(a, calls);
      event_reference(a, passes);
      std::cout << "PASS " << a.title << ": " << calls
                << " actual following/preparation calls, " << passes
                << " complete imported EVENT2 passes\n";
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << ": " << context << '\n';
    return 1;
  }
}
