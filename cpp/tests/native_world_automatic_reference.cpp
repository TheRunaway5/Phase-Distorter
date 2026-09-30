// Full original regional C04B53 is the oracle. Actual C0A780/C0A794
// transfer sprite pixels; C04A88 is observed before and after its real audio
// driver command. C0D19B is an explicit unexecuted battle-entry continuation.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_creation.hpp"
#include "eb/native/world_automatic.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/world_npc_collision.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>
using namespace eb::native;
namespace {
std::string context;
unsigned comparisons{};
void check(bool ok, const char *m) {
  ++comparisons;
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
    put(l.vram + i, 0x4000 + (role % 6) * 0x400);
    put(l.displayed + i, 0xffff);
    put(l.fingerprint + i, 0x1234);
  }
  void compare(unsigned role, const WorldActor &a) {
    const unsigned i = role * 2;
    for (unsigned axis = 0; axis < 3; ++axis) {
      check(a.action().position[axis] ==
                (get(l.position + axis * 60 + i) << 16 |
                 get(l.fraction + axis * 60 + i)),
            "Automatic actor position/fraction differs");
      check(a.action().velocity[axis] ==
                (get(l.velocity + axis * 60 + i) << 16 |
                 get(l.velocity_fraction + axis * 60 + i)),
            "Automatic actor velocity/fraction differs");
    }
    for (unsigned v = 0; v < 8; ++v)
      check(a.action().variables[v] == get(l.vars + v * 60 + i),
            "Automatic actor variables differ");
    check(a.behavior.direction == get(l.direction + i) &&
              a.behavior.surface_flags == get(l.surface + i) &&
              a.action().animation == get(l.animation + i),
          "Automatic facing/surface/animation differs");
    if (a.behavior.projected_x != std::int16_t(get(l.screen_x + i)) ||
        a.behavior.projected_y != std::int16_t(get(l.screen_y + i)))
      throw std::runtime_error(
          "Automatic projection differs native=" +
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
                "Automatic source artwork pixels differ at " +
                std::to_string(x) + "," + std::to_string(row * 8 + y) +
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

struct Fixture {
  WalkingData data;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  ActorWorld actors;
  std::shared_ptr<EnemySpawnData> enemy_data;
  WorldEnemies enemies;
  npcs::InteractionState leader;
  WorldControlState control;
  WorldDoorTransitionState transitions;
  WorldPartyState formation;
  PartyTrail trail;
  WorldMaintenanceState maintenance;
  story::InputState input;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  WorldAutomatic automatic;
  explicit Fixture(const eb::GameAssets &a)
      : data(a.image, a.version),
        sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(std::make_shared<ActionScriptData>(
            std::vector<std::uint8_t>{0x09}, 0, std::vector<std::uint32_t>{0})),
        actors(sprites, scripts, a.version,
               import_appearance_data(a.image, a.version)),
        enemy_data(std::make_shared<EnemySpawnData>(
            import_enemy_spawn_data(a.image, a.version))),
        enemies(enemy_data, sprites, scripts, EnemyPopulation{.maximum = 8}),
        queue(a.version, queued, actors.appearance_scene().intangibility_ticks,
              phone),
        automatic(data, actors, enemies, leader, control, transitions,
                  formation, trail, maintenance, input, queue) {
    formation.current_leader_role = 24;
    actors.bind_enemies(enemies);
  }
  ~Fixture() { actors.clear_enemies(enemies); }
  ActorId create(unsigned role, unsigned npc = 0xffff) {
    WorldActorSpec spec;
    spec.sprite = 1;
    if (npc != 0xffff)
      spec.npc = std::uint16_t(npc);
    spec.action.animation = 2;
    spec.action.position = {0x12345678, 0x9876abcd, 0x11112222};
    spec.action.velocity = {0x33445566, 0x55667788, 0x778899aa};
    spec.action.variables = {
        16, std::uint16_t(role % 6), 0x8888, 0x1234, 0x7777, 2, 0xabcd, 0xfedc};
    spec.behavior.direction = 6;
    return *actors.create_authored(spec, {role, role + 1});
  }
  void tick() {
    auto op = automatic.begin();
    check(op->advance() && op->complete(), "Automatic mode did not complete");
  }
};
struct AutomaticOracle : Oracle {
  unsigned entry, velocity, count, backup, automatic_direction, suppression,
      focus, scripts, pending, trail, refresh, begin_interval, sound, battle;
  unsigned return_address{};
  std::vector<unsigned> refreshed;
  explicit AutomaticOracle(const eb::GameAssets &a) : Oracle(a) {
    const bool jp = a.version == eb::GameVersion::JP;
    entry = jp ? 0xc04dc9 : 0xc04b53;
    velocity = jp ? 0xc02c4e : 0xc430ec;
    count = jp ? 0x6102 : 0x5d7c;
    backup = jp ? 0x6100 : 0x5d7a;
    automatic_direction = jp ? 0x6150 : 0x5dca;
    suppression = jp ? 0x611e : 0x5d98;
    focus = jp ? 0xa039 : 0x9e33;
    scripts = jp ? 0xa58 : 0xa62;
    pending = jp ? 0x6120 : 0x5d9a;
    trail = jp ? 0x54dc : 0x5156;
    refresh = jp ? 0xc0a75f : 0xc0a780;
    begin_interval = jp ? 0xc04cfe : 0xc04a88;
    sound = jp ? 0xc0abeb : 0xc0ac0c;
    battle = jp ? 0xc0d165 : 0xc0d19b;
    call(velocity, true);
  }
  unsigned game(unsigned offset) const {
    return l.game + offset - l.displacement;
  }
  bool resume(unsigned boundary = 0) {
    for (unsigned steps = 0; steps < 200000; ++steps) {
      if (cpu.program_counter == return_address && cpu.stack_pointer == 0x1fff)
        return true;
      if (boundary && cpu.program_counter == boundary)
        return false;
      if (cpu.program_counter == refresh)
        refreshed.push_back(cpu.accumulator);
      cpu.step_instruction();
    }
    throw std::runtime_error("Automatic source did not return: " +
                             cpu.describe_registers() + ": " + context);
  }
  bool call(unsigned address, bool far = false, unsigned boundary = 0,
            unsigned argument = 0, unsigned x = 0, unsigned y = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.direct_page = 0x1e00;
    cpu.data_bank = 0x7e;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = argument;
    cpu.x_index = x;
    cpu.y_index = y;
    return_address = 0xc0ff00 + (far ? 4 : 3);
    refreshed.clear();
    if (far)
      cpu.execute_instruction<0x22>(address, 4);
    else
      cpu.execute_instruction<0x20>(address & 0xffff, 3);
    return resume(boundary);
  }
  void world(const Fixture &f) {
    for (auto [offset, value] :
         std::initializer_list<std::pair<unsigned, unsigned>>{
             {128, f.control.x_fraction},
             {130, f.leader.leader_x},
             {132, f.control.y_fraction},
             {134, f.leader.leader_y},
             {138, f.leader.leader_direction},
             {142, f.leader.walking_style},
             {144, f.control.moved_this_tick},
             {176, f.control.automatic_mode},
             {178, f.control.automatic_ticks},
             {180, f.control.automatic_restore_style}})
      put(game(offset), value);
    put(count, f.control.direction_interval_ticks);
    put(backup, f.control.direction_interval_previous_mode);
    put(automatic_direction, f.transitions.automatic_direction);
    put(suppression, f.maintenance.overworld_status_suppression);
    put(pending, f.queued.pending);
    put(0x65, f.input.state[0]);
    put(0x67, f.input.state[1]);
    put(0x24, 0x1234);
    put(0x26, 0x9876);
    put(2, 0x34ab);
    for (unsigned role = 0; role < 30; ++role) {
      put(scripts + role * 2, 0xffff);
      if (const auto id = f.actors.actor_for_role(role)) {
        const auto &a = f.actors.actor(*id);
        seed(role, a);
        put(scripts + role * 2, a.action().alive ? 0 : 0xffff);
        if (f.control.camera_focus == CameraTarget{AuthoredRoleRef(role)})
          put(focus, role);
      }
    }
    for (unsigned i = 0; i < 6; ++i)
      put(character(i, 61), f.formation.trail_cursors[i]);
    for (unsigned i = 0; i < 256; ++i)
      put(trail + i * 12 + 6, f.trail.points[i].walking_style);
  }
  void same(const Fixture &f) {
    for (auto [offset, value] :
         std::initializer_list<std::pair<unsigned, unsigned>>{
             {128, f.control.x_fraction},
             {130, f.leader.leader_x},
             {132, f.control.y_fraction},
             {134, f.leader.leader_y},
             {138, f.leader.leader_direction},
             {142, f.leader.walking_style},
             {144, f.control.moved_this_tick},
             {176, f.control.automatic_mode},
             {178, f.control.automatic_ticks},
             {180, f.control.automatic_restore_style}})
      check(get(game(offset)) == value,
            ("Automatic game field " + std::to_string(offset) + " differs")
                .c_str());
    check(get(count) == f.control.direction_interval_ticks &&
              get(backup) == f.control.direction_interval_previous_mode &&
              get(automatic_direction) == f.transitions.automatic_direction &&
              get(suppression) == f.maintenance.overworld_status_suppression,
          "Automatic state owner differs");
    check(get(pending) == f.queued.pending && get(0x65) == f.input.state[0] &&
              get(0x67) == f.input.state[1] && get(0x24) == 0x1234 &&
              get(0x26) == 0x9876 && get(2) == 0x34ab && f.actors.ticks() == 0,
          "Automatic control consumed input, RNG or an extra frame/actor tick");
    for (unsigned role = 0; role < 30; ++role)
      if (const auto id = f.actors.actor_for_role(role))
        compare(role, f.actors.actor(*id));
    for (unsigned i = 0; i < 6; ++i)
      check(get(character(i, 61)) == f.formation.trail_cursors[i],
            "Facing changed party trail cursor");
  }
};
void timed(const eb::GameAssets &a, unsigned &calls) {
  Fixture f(a);
  AutomaticOracle o(a);
  for (unsigned style = 0; style < 14; ++style)
    for (unsigned direction = 0; direction < 8; ++direction)
      for (unsigned count : {0u, 1u, 2u, 0xffffu})
        for (unsigned position : {0u, 1u}) {
          context = a.title + " timed style=" + std::to_string(style) +
                    " direction=" + std::to_string(direction) +
                    " count=" + std::to_string(count);
          f.leader.walking_style = style;
          f.leader.leader_direction = direction;
          f.leader.leader_x = position ? 0xffff : 100;
          f.leader.leader_y = position ? 0 : 200;
          f.control.x_fraction = position ? 0xffff : 0x1234;
          f.control.y_fraction = position ? 1 : 0xabcd;
          f.control.automatic_mode = 0x101;
          f.control.automatic_ticks = count;
          f.control.automatic_restore_style = 0xabcd;
          f.control.moved_this_tick = 7;
          f.transitions.automatic_direction = (direction + 3) & 7;
          o.world(f);
          check(o.call(o.entry), "Timed source did not finish");
          f.tick();
          o.same(f);
          ++calls;
        }
  for (unsigned mode : {0u, 4u, 0xffu, 0x100u, 0xffffu}) {
    context = a.title + " unknown mode=" + std::to_string(mode);
    f.control.automatic_mode = mode;
    f.leader.walking_style = 0xffff;
    o.world(f);
    check(o.call(o.entry), "No-op source did not finish");
    f.tick();
    o.same(f);
    ++calls;
  }
}
void follow(const eb::GameAssets &a, unsigned &calls) {
  Fixture f(a);
  AutomaticOracle o(a);
  for (unsigned role = 0; role < 30; ++role)
    f.create(role, role + 1);
  for (unsigned role = 0; role < 30; ++role)
    for (unsigned variant = 0; variant < 8; ++variant) {
      context = a.title + " focus role=" + std::to_string(role) +
                " variant=" + std::to_string(variant);
      const auto id = *f.actors.actor_for_role(role);
      auto &actor = f.actors.actor(id);
      actor.action().alive =
          variant != 7; // Source focus copy has no script gate.
      actor.action().position[0] = 0x12345678u + variant;
      actor.action().position[1] = 0xfedcabcd;
      actor.behavior.direction = variant;
      f.control.camera_focus = AuthoredRoleRef(role);
      f.control.automatic_mode = 0x102;
      f.leader.walking_style = 0xffff;
      f.leader.leader_x = 0x1234;
      f.control.x_fraction = 0x5678;
      f.leader.leader_y = 0xfedc;
      f.control.y_fraction = 0xabcd;
      if (variant == 3)
        f.control.y_fraction = 0xffff;
      if (variant == 4)
        f.leader.leader_x = 0xffff;
      if (variant == 5)
        f.leader.leader_y = 0;
      f.control.moved_this_tick = 9;
      o.world(f);
      check(o.call(o.entry), "Focus source did not finish");
      f.tick();
      o.same(f);
      ++calls;
    }
}
// NPC metadata is the battle group plus its enemy bit. Spawn cell is a
// separate identity field; create a real native enemy where these disagree.
void enemy_focus(const eb::GameAssets &a, unsigned &calls) {
  context = a.title + " enemy focus battle group versus spawn cell";
  Fixture f(a);
  AutomaticOracle o(a);
  f.enemy_data->battles[1] = {{1, 0}};
  f.enemy_data->enemies[0] = {1, 0, 4, 0};
  f.enemy_data->encounters[1] = {0, {100, 0}, std::vector<unsigned>(8, 1)};
  EnemySpawnState spawn;
  spawn.event_flags.resize(128);
  spawn.bypass_chance = true;
  spawn.tileset = f.enemy_data->sectors[(5 / 2) * 32 + 3 / 4].tileset;
  f.enemies.begin_cell(f.actors, 3, 5, 1, 32, 32, spawn);
  for (unsigned step = 0; f.enemies.busy(); ++step) {
    check(step < 20 && bool(f.enemies.request()),
          "Enemy focus fixture did not finish placement");
    if (const auto *r =
            std::get_if<EnemyRandomRequest>(&*f.enemies.request())) {
      const unsigned value = r->purpose == EnemyRandomPurpose::PositionX   ? 16
                             : r->purpose == EnemyRandomPurpose::PositionY ? 10
                                                                           : 0;
      f.enemies.respond_random(f.actors, value);
    } else
      f.enemies.respond_terrain(f.actors, 0);
  }
  check(f.enemies.actors().size() == 1,
        "Enemy focus fixture produced wrong actor count");
  const auto enemy = f.enemies.actors()[0];
  const auto role = *f.actors.actor(enemy.actor).authored_role();
  check(enemy.battle == 1 && enemy.spawn_cell == 643,
        "Enemy focus fixture identity unexpectedly equal");
  const bool jp = a.version == eb::GameVersion::JP;
  const auto npc = jp ? 0x3098 : 0x2c9a;
  const auto cell = jp ? 0x314c : 0x2d4e;
  const auto selector = jp ? 0xc4440e : 0xc46698;
  for (unsigned i = 0; i < 30; ++i)
    o.put(npc + i * 2, 0xffff);
  o.put(npc + role * 2, enemy.battle + 0x8000);
  o.put(cell + role * 2, enemy.spawn_cell);
  for (unsigned query : {enemy.spawn_cell | 0x8000u, enemy.battle | 0x8000u}) {
    o.world(f);
    check(o.call(selector, true, 0, query),
          "Original enemy focus selector did not return");
    const auto selected = f.automatic.start_follow_npc(query);
    check(selected == (o.get(o.focus) == role
                           ? std::optional<CameraTarget>(AuthoredRoleRef(role))
                           : std::nullopt),
          "Enemy focus selection differs from original actual NPC metadata");
    check(o.get(cell + role * 2) == enemy.spawn_cell,
          "Focus selector modified spawn cell");
    o.same(f);
    ++calls;
  }
  o.world(f);
  check(o.call(o.entry), "Original enemy focus copy did not return");
  f.tick();
  o.same(f);
  ++calls;
  f.enemies.release_appearance(f.actors, enemy.actor);
  o.put(npc + role * 2, 0xffff);
  o.world(f);
  check(o.call(selector, true, 0, enemy.battle | 0x8000u),
        "Released source enemy selector failed");
  check(!f.automatic.start_follow_npc(enemy.battle | 0x8000u) &&
            o.get(o.focus) == 0xffff,
        "Released native enemy retained NPC identity");
  o.same(f);
  ++calls;
}
// Complete original creation, retirement, appearance release, selectors and
// camera consumption. Once created, neither side's pose/selector state is
// reseeded from the other side; each original lifecycle call executes in full.
struct FocusLifetime {
  Fixture f;
  AutomaticOracle o;
  bool jp;
  unsigned npc, sprite, create, retire, erase, release, reset, misc, graphics,
      direction, select_npc, select_sprite, formation_reset;
  unsigned new_z, new_var, new_priority, minimum, maximum;
  unsigned &calls;
  explicit FocusLifetime(const eb::GameAssets &assets, unsigned &count)
      : f(assets), o(assets), jp(assets.version == eb::GameVersion::JP),
        npc(jp ? 0x3098 : 0x2c9a), sprite(jp ? 0x30d4 : 0x2cd6),
        create(jp ? 0xc01e5f : 0xc01e49), retire(jp ? 0xc09c14 : 0xc09c35),
        erase(jp ? 0xc0214e : 0xc02140), release(jp ? 0xc020ff : 0xc020f1),
        reset(jp ? 0xc0925e : 0xc0927c), misc(jp ? 0xc01a7f : 0xc01a69),
        graphics(jp ? 0xc01a9c : 0xc01a86), direction(jp ? 0xc0a63e : 0xc0a65f),
        select_npc(jp ? 0xc4440e : 0xc46698),
        select_sprite(jp ? 0xc4441e : 0xc466a8),
        formation_reset(jp ? 0xc0419b : 0xc03f1e), new_z(jp ? 0xa3e : 0xa48),
        new_var(jp ? 0xa2e : 0xa38), new_priority(jp ? 0xa40 : 0xa4a),
        minimum(jp ? 0xa42 : 0xa4c), maximum(jp ? 0xa44 : 0xa4e), calls(count) {
    invoke(reset);
    invoke(misc);
    invoke(graphics);
    // Actual allocator reset, not an allocator return substitution.
    invoke(jp ? 0xc01c27 : 0xc01c11, 0x8000);
    compare(false);
  }
  void invoke(unsigned entry, unsigned a = 0, unsigned x = 0, unsigned y = 0,
              bool far = true) {
    check(o.call(entry, far, 0, a, x, y),
          "Original focus lifetime call did not finish");
    ++calls;
  }
  void compare(bool focus = true) {
    for (unsigned role = 0; role < 30; ++role) {
      const auto pose = f.actors.authored_pose(role);
      for (unsigned axis = 0; axis < 3; ++axis)
        check(pose.position[axis] ==
                  (o.get(o.l.position + axis * 60 + role * 2) << 16 |
                   o.get(o.l.fraction + axis * 60 + role * 2)),
              "Retained source/native role pose differs");
      check(pose.direction == o.get(o.l.direction + role * 2) &&
                f.actors.authored_npc_selector(role) == o.get(npc + role * 2) &&
                f.actors.authored_sprite_selector(role) ==
                    o.get(sprite + role * 2),
            "Retained source/native direction or selector differs");
      check(f.actors.authored_enemy_selector(role) ==
                o.get((jp ? 0x3110 : 0x2d12) + role * 2),
            "Retained source/native enemy type differs");
    }
    if (!focus)
      return;
    check(o.get(o.focus) ==
              (f.control.camera_focus
                   ? std::get<AuthoredRoleRef>(*f.control.camera_focus).value()
                   : 0xffff),
          "Source focus lost its authored role across lifetime");
    for (const auto [offset, value] :
         std::initializer_list<std::pair<unsigned, unsigned>>{
             {128, f.control.x_fraction},
             {130, f.leader.leader_x},
             {132, f.control.y_fraction},
             {134, f.leader.leader_y},
             {138, f.leader.leader_direction},
             {144, f.control.moved_this_tick},
             {176, f.control.automatic_mode}})
      check(o.get(o.game(offset)) == value,
            "Lifetime camera state differs from actual source consumer");
  }
  void prepare(const PreparedActorState &p) {
    o.put(new_z, p.height);
    o.put(new_priority, p.priority);
    for (unsigned v = 0; v < 8; ++v)
      o.put(new_var + v * 2, p.variables[v]);
  }
  ActorHitbox hitbox(unsigned sprite_id) {
    const auto metadata = actor_creation_metadata(
        *f.sprites,
        import_actor_creation_data(o.assets.image, o.assets.version),
        sprite_id);
    return {metadata.collision_profile,
            {metadata.sprite.hitbox[0], metadata.sprite.hitbox[1]},
            {metadata.sprite.hitbox[2], metadata.sprite.hitbox[3]}};
  }
  ActorId graphical(unsigned role, PreparedActorState p) {
    prepare(p);
    o.put(0x1e0e, p.x);
    o.put(0x1e10, p.y);
    invoke(create, 1, 0, role);
    check(o.cpu.accumulator == role, "Creation chose another authored role");
    p.direction = 0; // Bare CREATE_ENTITY's actual default.
    auto spec = f.actors.prepare_actor(1, 0, p);
    spec.hitbox = hitbox(1);
    const auto id = f.actors.create_authored(spec, {role, role + 1});
    check(id.has_value(), "Native graphical creation rejected free role");
    compare(false);
    return *id;
  }
  void facing(unsigned role, unsigned value) {
    o.put(0x1e88, role * 2);
    invoke(direction, value);
    f.actors.set_authored_direction(role, std::uint16_t(value));
    compare(false);
  }
  void select(unsigned value, bool by_npc = false) {
    invoke(by_npc ? select_npc : select_sprite, value);
    if (by_npc)
      f.automatic.start_follow_npc(value);
    else
      f.automatic.start_follow_sprite(value);
    compare();
  }
  void consume() {
    invoke(jp ? 0xc049f4 : 0xc0476d, 0, 0, 0, false);
    f.tick();
    compare();
    check(f.actors.ticks() == 0, "Camera consumption ran actor work");
  }
  void remove(unsigned role, bool graphics_too) {
    const auto id = *f.actors.actor_for_role(role);
    invoke(graphics_too ? erase : retire, role);
    check(graphics_too ? f.actors.erase(id) : f.actors.retire(id),
          "Native role retirement failed");
    compare();
  }
  void release_only(unsigned role) {
    o.put(o.l.current, role);
    invoke(release);
    check(f.actors.release_appearance(*f.actors.actor_for_role(role)),
          "Native appearance release failed");
    compare();
  }
  void formation_write(unsigned role, unsigned x, unsigned y, unsigned facing) {
    o.put(o.game(174), 1);
    o.put(o.game(150), 1);
    o.put(o.game(162), role);
    o.put(jp ? 0x514e : 0x4dc8, o.l.characters);
    o.put(o.game(130), x);
    o.put(o.game(134), y);
    o.put(o.game(138), facing);
    invoke(formation_reset);
    f.leader.leader_x = x;
    f.leader.leader_y = y;
    f.leader.leader_direction = facing;
    f.actors.set_authored_coordinate(role, 0, x);
    f.actors.set_authored_coordinate(role, 1, y);
    f.actors.set_authored_direction(role, facing);
    // Only coordinate/facing effects of the full source formation helper are
    // compared here. Its trail/party effects have separate owners/proofs.
    compare();
  }
  void script_reuse(unsigned role, const PreparedActorState &p) {
    prepare(p);
    o.put(minimum, role);
    o.put(maximum, role + 1);
    invoke(jp ? 0xc09300 : 0xc09321, 0, p.x, p.y);
    check(o.cpu.accumulator == role, "INIT_ENTITY reused another role");
    check(f.actors.create_authored_script(0, p, {role, role + 1}).has_value(),
          "Native script creation rejected retired role");
    compare();
  }
  void move_default(unsigned role) {
    auto &actor = f.actors.actor(*f.actors.actor_for_role(role));
    check(actor.behavior.physics == ActorPhysics::Planar &&
              o.get((jp ? 0x1214 : 0x121e) + role * 2) ==
                  (jp ? 0x9fa7 : 0x9fc8),
          "INIT_ENTITY did not install its actual planar callback");
    const auto height = actor.action().position[2];
    // Supply equal velocity inputs, then run the actual installed source/native
    // reducers. Retained positions are never copied between either side.
    for (const auto velocity :
         {std::array<std::uint32_t, 3>{0x00018001, 0xfffe7000, 0x12345678},
          std::array<std::uint32_t, 3>{0xffff7fff, 0x00019000, 0x80008000}}) {
      actor.action().velocity = velocity;
      for (unsigned axis = 0; axis < 3; ++axis) {
        o.put(o.l.velocity + axis * 60 + role * 2, velocity[axis] >> 16);
        o.put(o.l.velocity_fraction + axis * 60 + role * 2, velocity[axis]);
      }
      o.put(0x1e88, role * 2);
      invoke(jp ? 0xc09fa7 : 0xc09fc8, 0, 0, 0, false);
      run_actor_physics(actor.action(), actor.behavior);
      compare();
      check(actor.action().position[2] == height,
            "Bare INIT_ENTITY integrated a height velocity");
      consume();
    }
  }
  void compare_metadata(unsigned role) {
    const auto behavior = f.actors.authored_behavior(role);
    for (const auto [base, value] :
         std::initializer_list<std::pair<unsigned, unsigned>>{
             {jp ? 0x1a7c : 0x1a86, behavior.moving_direction},
             {jp ? 0x2f30 : 0x2b32, behavior.movement_speed},
             {jp ? 0x2fa8 : 0x2baa, behavior.surface_flags},
             {jp ? 0x305c : 0x2c5e, behavior.path_state},
             {jp ? 0x2cd8 : 0x28da, behavior.obstacle_flags},
             {jp ? 0x2c9c : 0x289e, std::uint16_t(behavior.collision_object)}})
      check(o.get(base + role * 2) == value,
            "Bare INIT lost retained behavior metadata");
    const auto pause = f.actors.authored_pause(role);
    const auto flags = o.get((jp ? 0x10ac : 0x10b6) + role * 2);
    check(pause.scripts_and_physics_enabled == !(flags & 0x4000) &&
              pause.tick_callback_enabled == !(flags & 0x8000) &&
              f.actors.authored_sprite_hidden(role) ==
                  bool(o.get((jp ? 0x1160 : 0x116a) + role * 2) & 0x8000),
          "Retained pause/visibility flags differ");
    if (const auto id = f.actors.actor_for_role(role)) {
      const auto &actor = f.actors.actor(*id);
      check(actor.hitbox.has_value(), "Bare INIT lost collision geometry");
      const auto &box = *actor.hitbox;
      for (const auto [base, value] :
           std::initializer_list<std::pair<unsigned, unsigned>>{
               {jp ? 0x2f6c : 0x2b6e, actor.appearance_context.shape},
               {jp ? 0x3728 : 0x332a, box.enabled},
               {jp ? 0x3764 : 0x3366, box.vertical.half_width},
               {jp ? 0x37a0 : 0x33a2, box.vertical.height},
               {jp ? 0x37dc : 0x33de, box.lateral.half_width},
               {jp ? 0x1a40 : 0x1a4a, box.lateral.height}})
        check(o.get(base + role * 2) == value,
              "Bare INIT lost retained shape/hitbox");
    }
  }
  void initialize_retained_metadata(unsigned role) {
    auto &actor = f.actors.actor(*f.actors.actor_for_role(role));
    // Equal explicit initial field inputs precede the actual lifecycle calls.
    // Subsequent INIT/removal/reset calls must retain these independently.
    actor.behavior.moving_direction = 0xabcd;
    actor.behavior.movement_speed = 0x3456;
    actor.behavior.surface_flags = 3;
    actor.behavior.path_state = 0x8001;
    actor.behavior.obstacle_flags = 0x6789;
    actor.behavior.collision_object = 0x1234;
    actor.appearance_context.shape = 7;
    actor.hitbox = ActorHitbox{7, {3, 4}, {5, 6}};
    for (const auto [base, value] :
         std::initializer_list<std::pair<unsigned, unsigned>>{
             {jp ? 0x1a7c : 0x1a86, 0xabcd},
             {jp ? 0x2f30 : 0x2b32, 0x3456},
             {jp ? 0x2fa8 : 0x2baa, 3},
             {jp ? 0x305c : 0x2c5e, 0x8001},
             {jp ? 0x2cd8 : 0x28da, 0x6789},
             {jp ? 0x2c9c : 0x289e, 0x1234},
             {jp ? 0x2f6c : 0x2b6e, 7},
             {jp ? 0x3728 : 0x332a, 7},
             {jp ? 0x3764 : 0x3366, 3},
             {jp ? 0x37a0 : 0x33a2, 4},
             {jp ? 0x37dc : 0x33de, 5},
             {jp ? 0x1a40 : 0x1a4a, 6}})
      o.put(base + role * 2, value);
    actor.action().animation = 0;
    o.put(o.l.animation + role * 2, 0);
    invoke(jp ? 0xc0a75f : 0xc0a780, role);
    actor.appearance.select_eight(actor.behavior.direction, 0, 3);
    f.actors.set_authored_pause(role, false, false);
    o.put((jp ? 0x10ac : 0x10b6) + role * 2, 0xc0c0);
    f.actors.set_authored_sprite_hidden(role, true);
    const auto high = (jp ? 0x1160 : 0x116a) + role * 2;
    o.put(high, o.get(high) | 0x8000);
    compare_metadata(role);
  }
  void check_retained_artwork(unsigned role) {
    auto &actor = f.actors.actor(*f.actors.actor_for_role(role));
    check(actor.has_appearance() && actor.appearance.available() &&
              actor.appearance.displayed().has_value(),
          "Bare INIT discarded existing artwork latches");
    const auto display = *actor.appearance.displayed();
    o.pixels(role, *f.sprites->acquire(display.sprite, display.pose,
                                       display.surface, display.format));
    // INIT disables drawing through animationFFFF, then source animation input
    // reveals the retained frame. Neither side refreshes or reselects it here.
    actor.action().animation = 0;
    o.put(o.l.animation + role * 2, 0);
    check(!actor.appearance.draw(actor.action(), 128, 112).visible,
          "Bare INIT discarded the retained sprite hide flag");
    f.actors.set_authored_sprite_hidden(role, false);
    const auto high = (jp ? 0x1160 : 0x116a) + role * 2;
    o.put(high, o.get(high) & 0x7fff);
    check(actor.appearance.draw(actor.action(), 128, 112).visible,
          "Unhiding reused artwork did not reveal its retained frame");
    compare_metadata(role);
  }
  void collide_reused_npc(unsigned role) {
    PreparedActorState leader;
    leader.x = 100;
    leader.y = 100;
    graphical(24, leader);
    const auto pose = f.actors.authored_pose(role);
    f.leader.movement_flags = f.leader.walking_style = f.leader.demo_frames = 0;
    o.put(o.game(142), 0);
    for (unsigned dx : {0u, 128u}) {
      const CollisionPoint proposed{
          std::uint16_t((pose.position[0] >> 16) + dx),
          std::uint16_t(pose.position[1] >> 16)};
      invoke(jp ? 0xc06224 : 0xc05ff6, proposed.x, proposed.y, 24);
      world_npc_collision(f.actors, f.enemies, f.leader, f.formation, proposed);
      check(o.cpu.accumulator == (dx ? 0xffff : role) &&
                f.leader.collision_actor ==
                    (dx ? std::nullopt : f.actors.actor_for_role(role)),
            "Reused NPC collision did not preserve actual hit/miss geometry");
    }
    compare_metadata(role);
  }
};
void focus_lifetimes(const eb::GameAssets &a, unsigned &calls) {
  for (unsigned role : {0u, 2u, 21u, 24u, 29u}) {
    context =
        a.title + " retained camera lifecycle role=" + std::to_string(role);
    FocusLifetime p(a, calls);
    p.select(0); // Cold sprite selector chooses the first pristine role.
    p.consume();
    p.select(0xffff, true);
    p.consume();
    PreparedActorState first;
    first.x = 0xffff;
    first.y = std::uint16_t(role + 17);
    first.height = 0x8001;
    const auto old = p.graphical(role, first);
    p.facing(role, (role + 3) & 7);
    p.select(1);
    p.consume();
    p.release_only(role);
    p.consume();
    p.select(0xffff); // Released sprite is an in-range role, not search miss.
    p.consume();
    p.remove(role, false); // Released appearance followed by real script END.
    p.consume();
    p.formation_write(role, 0x1234, 0xffab, 6);
    p.consume();
    PreparedActorState next;
    next.x = 1;
    next.y = 0x8000;
    next.height = 123;
    const auto replacement = p.graphical(role, next);
    check(old != replacement, "Native graphical reuse recycled a host ID");
    p.consume(); // No new selector: the role now resolves its new occupant.
    p.remove(role, true); // Full graphical removal, without a prior release.
    p.consume();
    p.graphical(role, next);
    p.consume();
    p.facing(role, 7);
    p.remove(role, false);
    p.consume();
    p.select(1); // Script-only removal retains the sprite selector.
    p.consume();
    next.x = 0x7fff;
    next.y = 0xffff;
    next.direction = 2; // Bare INIT_ENTITY must retain7 instead.
    next.priority = 0x1234;
    p.script_reuse(role, next);
    p.consume();
    check(p.f.leader.leader_direction == 7 && p.f.control.x_fraction == 0x8000,
          "Bare role reuse lost retained direction or actual init fraction");
    p.move_default(role);
    p.invoke(p.reset);
    p.f.actors.reset_scripts();
    p.compare();
    p.consume();
    p.select(1);
    p.consume();
    p.select(0xbeef); // A true miss is retained, never consumed in source.
    check(!p.f.control.camera_focus,
          "Missing selector became an authored role");
    auto invalid = p.f.automatic.begin();
    bool rejected = false;
    try {
      invalid->advance();
    } catch (const std::logic_error &) {
      rejected = true;
    }
    check(rejected && p.f.automatic.failed(),
          "Native fabricated the source's out-of-range focus read");
  }
  context = a.title + " retained NPC selector after actual prepared creation";
  FocusLifetime p(a, calls);
  PreparedActorState prepared;
  prepared.x = 0xfffe;
  prepared.y = 0x8001;
  prepared.direction = 5;
  p.prepare(prepared);
  p.o.put(p.jp ? 0xa033 : 0x9e2d, prepared.x);
  p.o.put(p.jp ? 0xa035 : 0x9e2f, prepared.y);
  p.o.put(p.jp ? 0xa037 : 0x9e31, prepared.direction);
  p.invoke(p.jp ? 0xc44223 : 0xc464b5, 373, 0);
  check(p.o.cpu.accumulator == 0, "Prepared NPC did not use first free role");
  const NpcCatalog catalog(a.image, npc_catalog_layout(a.version));
  auto spec =
      p.f.actors.prepare_actor(catalog.definition(373).sprite, 0, prepared);
  spec.npc = 373;
  spec.hitbox = p.hitbox(catalog.definition(373).sprite);
  check(p.f.actors.create_authored(spec, {0, 1}).has_value(),
        "Native prepared NPC failed");
  p.compare(false);
  p.select(373, true);
  p.consume();
  p.initialize_retained_metadata(0);
  p.remove(0, false);
  p.compare_metadata(0);
  p.select(373, true);
  p.consume();
  prepared.priority = 3;
  prepared.x = prepared.y = 100;
  p.script_reuse(0, prepared);
  const auto reused = *p.f.actors.actor_for_role(0);
  check(p.f.actors.actor_for_npc(373) == reused &&
            p.f.actors.actor(reused).npc() == 373,
        "Bare INIT did not restore real ordinary NPC ownership");
  p.compare_metadata(0);
  p.check_retained_artwork(0);
  p.collide_reused_npc(0);
  p.consume();
  p.invoke(p.reset);
  p.f.actors.reset_scripts();
  p.compare_metadata(0);
  p.script_reuse(0, prepared);
  p.compare_metadata(0);
  check(!p.f.actors.actor(*p.f.actors.actor_for_role(0)).has_appearance() &&
            p.o.get(p.jp ? 0x1160 : 0x116a) == 0,
        "Script reset retained drawable artwork");
  p.remove(0, false);
  // The source may release a sprite after its script has already retired.
  p.invoke(p.erase, 0);
  check(p.f.actors.release_authored_appearance(0),
        "Dormant role did not release retained selector ownership");
  p.compare();
  p.consume();
  p.select(373, true);
  check(!p.f.control.camera_focus,
        "Released dormant NPC retained its old selector");
  p.select(0xffff, true);
  p.consume();

  context = a.title + " retained enemy focus from matched initial spawn state";
  FocusLifetime e(a, calls);
  e.f.enemy_data->battles[1] = {{1, 0}};
  e.f.enemy_data->enemies[0] = {1, 0, 4, 0};
  e.f.enemy_data->encounters[1] = {0, {100, 0}, std::vector<unsigned>(8, 1)};
  EnemySpawnState spawn;
  spawn.event_flags.resize(128);
  spawn.bypass_chance = true;
  spawn.tileset = e.f.enemy_data->sectors[(5 / 2) * 32 + 3 / 4].tileset;
  e.f.enemies.begin_cell(e.f.actors, 3, 5, 1, 32, 32, spawn);
  unsigned spawn_steps = 0;
  while (e.f.enemies.busy()) {
    check(++spawn_steps <= 16, "Enemy fixture spawn did not terminate");
    check(e.f.enemies.request().has_value(), "Enemy spawn lost its request");
    if (const auto *r =
            std::get_if<EnemyRandomRequest>(&*e.f.enemies.request()))
      e.f.enemies.respond_random(
          e.f.actors, r->purpose == EnemyRandomPurpose::PositionX   ? 16
                      : r->purpose == EnemyRandomPurpose::PositionY ? 10
                                                                    : 0);
    else
      e.f.enemies.respond_terrain(e.f.actors, 0);
  }
  check(e.f.enemies.actors().size() == 1, "Enemy fixture has wrong population");
  const auto enemy = e.f.enemies.actors().front();
  check(enemy.battle == 1 && enemy.spawn_cell == 643,
        "Enemy fixture did not separate group from placement identity");
  const auto &actor = e.f.actors.actor(enemy.actor);
  check(actor.authored_role() == 0, "Enemy fixture did not allocate role0");
  // One explicit initial-state boundary: native placement supplies a real
  // actor; source CREATE executes fully, then its enemy-controller metadata is
  // matched. This proves subsequent lifetime/focus, not source spawn selection.
  // No pose/selector is copied between sides after this boundary.
  PreparedActorState initial;
  initial.x = actor.action().position[0] >> 16;
  initial.y = actor.action().position[1] >> 16;
  e.prepare(initial);
  e.o.put(0x1e0e, initial.x);
  e.o.put(0x1e10, initial.y);
  e.invoke(e.create, 1, 0, 0);
  e.o.put(e.npc, *enemy.npc_identity());
  e.o.put(e.jp ? 0x3110 : 0x2d12, enemy.enemy);
  e.o.put(e.jp ? 0x314c : 0x2d4e, enemy.spawn_cell);
  const unsigned population = e.jp ? 0x4de2 : 0x4a5c;
  e.o.put(population, e.f.enemies.population().count);
  e.compare(false);
  e.select(0x8001, true);
  e.consume();
  e.remove(0, false);
  check(e.f.enemies.actors().empty() &&
            e.f.enemies.population().count == e.o.get(population),
        "Enemy retirement lost accounting or kept a dead host identity");
  e.select(0x8001, true);
  e.consume();
  initial.x = 0xabcd;
  initial.y = 0x8000;
  e.script_reuse(0, initial);
  check(e.f.enemies.actors().size() == 1 &&
            e.f.enemies.actors().front().actor != enemy.actor &&
            e.f.enemies.population().count == e.o.get(population),
        "Bare role reuse lost actual enemy identity or changed population");
  e.select(0x8001, true);
  e.consume();
  e.remove(0, false);
  e.invoke(e.erase, 0);
  check(e.f.enemies.release_authored_role(e.f.actors, 0),
        "Dormant enemy release lost its owner");
  check(e.f.enemies.population().count == e.o.get(population) &&
            e.o.get(population) == 0,
        "Dormant enemy release did not execute exact population decrement");
  e.compare();
  e.consume();
  e.select(0x8001, true);
  check(!e.f.control.camera_focus,
        "Released dormant enemy remained selectable");
  e.select(0xffff, true);
  e.consume();
}
void facing(const eb::GameAssets &a, unsigned &calls, unsigned &refreshes) {
  Fixture f(a);
  AutomaticOracle o(a);
  for (unsigned role = 24; role < 30; ++role)
    f.create(role);
  for (unsigned style = 0; style < 14; ++style)
    for (unsigned mask = 0; mask < 16; ++mask) {
      context = a.title + " facing style=" + std::to_string(style) +
                " input=" + std::to_string(mask);
      f.control.automatic_mode = 0x103;
      f.control.direction_interval_ticks = mask % 3 == 0   ? 0
                                           : mask % 3 == 1 ? 2
                                                           : 0xffff;
      f.control.direction_interval_previous_mode = 0xabcd;
      f.control.moved_this_tick = 7;
      f.leader.walking_style = style;
      f.leader.leader_direction = 5;
      f.input.state[0] = mask << 8;
      f.queued.pending = style == 5 ? 1 : 0;
      std::vector<unsigned> before;
      for (unsigned i = 0; i < 6; ++i) {
        auto &actor = f.actors.actor(*f.actors.actor_for_role(24 + i));
        actor.action().alive = i != (mask % 7);
        actor.action().variables[1] = i;
        actor.action().animation = (mask & 1) * 2;
        actor.behavior.direction = (mask + i) & 7;
        actor.behavior.surface_flags = (i % 4) * 4;
        actor.appearance.select_eight(actor.behavior.direction,
                                      actor.action().animation,
                                      actor.behavior.surface_flags);
        f.formation.trail_cursors[i] = 250 + i;
        f.trail.points[250 + i].walking_style = i == 1 ? 7 : i == 2 ? 8 : 0;
        before.push_back(actor.behavior.direction);
        o.artwork(24 + i, actor.appearance.sprite());
      }
      o.world(f);
      // Install the same initial artwork using the actual source refresher.
      for (unsigned role = 24; role < 30; ++role)
        check(o.call(o.refresh, true, 0, role), "Source artwork setup failed");
      check(o.call(o.entry), "Facing source did not finish");
      const auto refreshed = o.refreshed;
      f.tick();
      o.same(f);
      std::vector<unsigned> changed;
      for (unsigned i = 0; i < 6; ++i) {
        const unsigned role = 24 + i;
        const auto &actor = f.actors.actor(*f.actors.actor_for_role(role));
        if (actor.behavior.direction != before[i])
          changed.push_back(role);
        const auto selected = *actor.appearance.displayed();
        o.pixels(role, *f.sprites->acquire(selected.sprite, selected.pose,
                                           selected.surface, selected.format));
        check(o.get(o.l.fingerprint + role * 2) == 0x1234 &&
                  actor.appearance.fingerprint() == 0xffff,
              "Facing refreshed animation fingerprint");
      }
      check(refreshed == changed, "Facing source refresh order differs from "
                                  "actual native party updates");
      refreshes += refreshed.size();
      ++calls;
    }
}
void boundaries(const eb::GameAssets &a, unsigned &calls) {
  for (unsigned previous : {0u, 1u, 2u, 0x102u}) {
    context =
        a.title + " direction interval previous=" + std::to_string(previous);
    Fixture f(a);
    AutomaticOracle o(a);
    f.control.automatic_mode = previous;
    f.maintenance.overworld_status_suppression = 77;
    o.world(f);
    check(!o.call(o.begin_interval, true, o.sound),
          "Source did not reach actual audio command boundary");
    auto start = f.automatic.begin_direction_interval();
    check(!start->advance() &&
              start->request() == WorldAutomaticService::ScriptSound &&
              start->sound() ==
                  dialogue::ScriptSoundRequest{
                      dialogue::ScriptSoundKind::DirectDriverCommand, 2, 2},
          "Native did not expose actual ordered sound command");
    o.same(f);
    check(o.resume(), "Original audio command/start tail did not return");
    start->respond_sound();
    check(start->advance(), "Executed sound did not complete interval start");
    o.same(f);
    ++calls;
    f.control.direction_interval_ticks = 1;
    o.world(f);
    check(!o.call(o.entry, false, o.battle),
          "Source did not reach actual battle-entry boundary");
    auto expiry = f.automatic.begin();
    check(!expiry->advance() &&
              expiry->request() == WorldAutomaticService::BattleEntry,
          "Native did not retain battle-entry continuation");
    o.same(f);
    for (unsigned i = 0; i < 4; ++i) {
      check(!expiry->advance(), "Battle entry was silently acknowledged");
      o.same(f);
    }
    ++calls;
  }
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::runtime_error("Provide one or more regional ebpak files");
    for (int i = 1; i < argc; ++i) {
      const auto a = eb::load_game_assets(argv[i], eb::asset_profiles());
      unsigned calls = 0, refreshes = 0;
      const auto before = comparisons;
      timed(a, calls);
      follow(a, calls);
      enemy_focus(a, calls);
      focus_lifetimes(a, calls);
      facing(a, calls, refreshes);
      boundaries(a, calls);
      std::cout
          << a.title << ": " << calls << " original automatic calls/prefixes; "
          << refreshes
          << " original party artwork refreshes with pixel equality; "
          << comparisons - before
          << " state checks; battle entry remains explicit continuation\n";
    }
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
