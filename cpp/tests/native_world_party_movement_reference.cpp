// Actual C03DAA (including RAND and artwork upload) and C0A26B are the oracle.
#include "eb/main_cpu_65816.hpp"
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
    unsigned destination = 0x4000;
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
struct Fixture {
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  ActorWorld actors;
  party::State party;
  WorldPartyState state;
  story::RandomState random;
  WorldPartyMovementData data;
  WorldPartyMovement movement;
  Fixture(const eb::GameAssets &a)
      : sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(std::make_shared<ActionScriptData>(
            std::vector<std::uint8_t>{0x09}, 0, std::vector<std::uint32_t>{0})),
        actors(sprites, scripts, a.version), party(a.version),
        data(import_party_movement_data(a.image, a.version)),
        movement(actors, party, state, random, data) {
    party.party_count = 2;
    state.roles[0] = 24; state.current_leader_role = 24;
    state.roles[1] = 25;
    actors.bind_party_movement(movement);
  }
  ActorId create(unsigned role, unsigned group = 1) {
    WorldActorSpec s;
    s.sprite = group;
    s.action.animation = 0;
    s.action.position = {0x00808000, 0x00808000, 0x8000};
    s.action.velocity = {0x18000, 0xffffc000, 0x2000};
    return *actors.create_authored(s, {role, role + 1});
  }
};
void startup_reference(const eb::GameAssets &assets, unsigned &count) {
  Fixture f(assets);
  Oracle o(assets);
  f.create(24);
  for (unsigned record = 0; record < 6; ++record)
    for (unsigned status : {0u, 1u, 2u, 7u})
      for (unsigned direction = 0; direction < 8; ++direction)
        for (unsigned phase : {0u, 2u}) {
          unsigned group = 1 + (record * 17 + direction * 3) % 32;
          while (f.sprites->definition(group).frames < 16)
            group = (group + 1) % f.sprites->size();
          const auto id = f.create(25, group);
          auto &a = f.actors.actor(id);
          context = assets.title + " startup record=" + std::to_string(record) +
                    " status=" + std::to_string(status) +
                    " dir=" + std::to_string(direction) +
                    " phase=" + std::to_string(phase);
          a.action().variables = {std::uint16_t(record + 2),
                                  std::uint16_t(record),
                                  0x4321,
                                  0x1234,
                                  0x8888,
                                  2,
                                  0xabcd,
                                  0xf00d};
          a.action().animation = phase;
          a.behavior.direction = direction;
          a.behavior.surface_flags = (count % 3) * 4;
          f.party.character(record + 1).afflictions[0] = status;
          f.random = {std::uint16_t(count * 997),
                      std::uint16_t(0xabcd - count * 131)};
          o.seed(25, a);
          o.artwork(25, group);
          o.put(0x24, f.random.primary_word);
          o.put(0x26, f.random.secondary_word);
          o.put(o.l.game + 148 - o.l.displacement, 24);
          o.bus->work_ram[o.character(record, 14)] = status;
          o.call(o.l.startup, 25, true);
          const auto result = f.movement.startup(id);
          check(result == o.cpu.accumulator && result == 48,
                "Startup script return differs");
          check(f.random.primary_word == o.get(0x24) &&
                    f.random.secondary_word == o.get(0x26),
                "Startup RNG state differs");
          const auto &record_state = f.state.character_startup[record];
          check(record_state.member_index == o.get(o.character(record, 53)) &&
                    record_state.actor_role == o.get(o.character(record, 59)) &&
                    record_state.reserved57 == o.get(o.character(record, 57)) &&
                    record_state.startup_marker ==
                        o.get(o.character(record, 92)),
                "Startup character binding fields differ");
          check(f.actors.appearance_scene().footstep_role == 24 &&
                    o.get(o.l.footstep) == 48 &&
                    a.appearance.fingerprint() == o.get(o.l.fingerprint + 50),
                "Startup appearance control differs");
          o.compare(25, a);
          const auto selection = *a.appearance.displayed();
          o.pixels(25,
                   *f.sprites->acquire(group, selection.pose, selection.surface,
                                       selection.format));
          f.actors.erase(id);
          ++count;
        }
}
void follower_reference(const eb::GameAssets &assets, unsigned &count) {
  const unsigned follow =
      assets.version == eb::GameVersion::JP ? jp.follow : us.follow;
  check(assets.image[follow + 10] == 0x29 && assets.image[follow + 11] == 0 &&
            assets.image[follow + 12] == 0x18,
        "Follower encoded VAR7 mask drifted");
  Fixture f(assets);
  Oracle o(assets);
  const auto leader = f.create(24), follower = f.create(25);
  auto &a = f.actors.actor(follower);
  auto &b = f.actors.actor(leader);
  unsigned random = 0x12345678;
  const auto next = [&]() {
    random = random * 1664525u + 1013904223u;
    return random;
  };
  for (unsigned direction = 0; direction < 8; ++direction)
    for (unsigned distance = 0; distance < 6; ++distance)
      for (unsigned trial = 0; trial < 160; ++trial) {
        context = assets.title + " follower dir=" + std::to_string(direction) +
                  " spacing=" + std::to_string(distance) +
                  " trial=" + std::to_string(trial);
        const unsigned origin = trial % 3 == 0 ? 128 : next() & 65535;
        a.action().position = {origin * 65536u + (next() & 65535),
                               origin * 65536u + (next() & 65535), next()};
        const unsigned spacing = direction & 1
                                     ? f.data.diagonal_spacing[distance]
                                     : f.data.cardinal_spacing[distance];
        b.action().position = {
            std::uint16_t(origin + spacing + int(trial % 7) - 3) * 65536u,
            std::uint16_t(origin + spacing + int(trial % 9) - 4) * 65536u,
            next()};
        a.action().variables[5] = distance * 2;
        a.action().variables[7] = next();
        a.behavior.direction = direction;
        a.behavior.projected_x = std::int16_t(next());
        a.behavior.projected_y = std::int16_t(next());
        b.behavior.projected_x =
            trial % 4 == 0 ? std::int16_t(a.behavior.projected_x ^ 0x8000)
                           : a.behavior.projected_x;
        b.behavior.projected_y =
            trial % 4 == 1 ? std::int16_t(a.behavior.projected_y ^ 0x8000)
                           : a.behavior.projected_y;
        f.state.projection = {
            trial % 11 == 0 ? 25u : 24u,
            std::uint16_t(trial % 13 == 0 ? (direction + 1) % 8 : direction),
            std::uint16_t(trial % 17 == 0)};
        f.actors.scene().camera_x = next();
        f.actors.scene().camera_y = next();
        o.seed(24, b);
        o.seed(25, a);
        o.put(o.l.leader, *f.state.projection.leader_role * 2);
        o.put(o.l.leader_direction, f.state.projection.direction);
        o.put(o.l.mismatch, f.state.projection.movement_mismatch);
        o.put(0x31, f.actors.scene().camera_x);
        o.put(0x33, f.actors.scene().camera_y);
        o.call(o.l.follow, 25, false);
        f.movement.project(follower);
        o.compare(25, a);
        o.compare(24, b);
        ++count;
      }
}
void pass_reference(eb::GameAssets assets, unsigned &count) {
  const auto l = assets.version == eb::GameVersion::JP ? jp : us;
  const bool is_jp = l.displacement;
  const unsigned startup = l.startup;
  const auto authored = import_action_scripts(assets.image, assets.version);
  const auto entry = authored->entry(2);
  // Retain the actual EVENT2 callback/animation bytes. Only the post-startup
  // loop is a test fixture; source and native execute the same authored phase.
  check(authored->byte(entry) == 0x23 && authored->byte(entry + 3) == 0x25 &&
            authored->byte(entry + 6) == 0x3b,
        "Authored EVENT2 callback prefix changed");
  std::vector<std::uint8_t> bytes{0x06, 1, 0x19, 0, 0x80};
  for (unsigned i = 0; i < 8; ++i)
    bytes.push_back(authored->byte(entry + i));
  const std::array<std::uint8_t, 11> tail{0x42,
                                          std::uint8_t(startup),
                                          std::uint8_t(startup >> 8),
                                          0xc0,
                                          0x1f,
                                          4,
                                          0x06,
                                          1,
                                          0x19,
                                          19,
                                          0x80};
  bytes.insert(bytes.end(), tail.begin(), tail.end());
  std::copy(bytes.begin(), bytes.end(), assets.image.begin() + 0x38000);
  auto scripts = std::make_shared<ActionScriptData>(
      bytes, 0x38000, std::vector<std::uint32_t>{0x38000, 0x38005});
  auto sprites = std::make_shared<SpriteResources>(
      assets.image, sprite_catalog_layout(assets.version));
  ActorWorld actors(sprites, scripts, assets.version);
  party::State party(assets.version);
  WorldPartyState state;
  story::RandomState random{0x1234, 0x9876};
  const auto data = import_party_movement_data(assets.image, assets.version);
  WorldPartyMovement movement(actors, party, state, random, data);
  actors.bind_party_movement(movement);
  party.party_count = 2;
  state.roles[0] = 24; state.current_leader_role = 24;
  state.roles[1] = 25;
  state.projection = {24, 0, 0};
  party.character(3).afflictions[0] = 1;
  Oracle o(assets);
  o.put(0x24, random.primary_word);
  o.put(0x26, random.secondary_word);
  o.put(l.game + 148 - l.displacement, 24);
  o.bus->work_ram[o.character(2, 14)] = 1;
  const unsigned delta = is_jp ? 10 : 0, first = 0xa50 - delta,
                 next = 0xa9e - delta, script = 0xa62 - delta,
                 task = 0xada - delta, next_task = 0x125a - delta,
                 cursor = 0x13fe - delta, bank = 0x148a - delta,
                 sleep = 0x1372 - delta, stack = 0x12e6 - delta,
                 temp = 0x1516 - delta, tick_low = 0x107a - delta,
                 tick_high = 0x10b6 - delta, physics = 0x121e - delta,
                 project = 0x11a6 - delta,
                 tick_none = is_jp ? 0xc0941a : 0xc0943b,
                 project_world = is_jp ? 0xa002 : 0xa023,
                 project_none = is_jp ? 0xa018 : 0xa039;
  o.put(first, 48);
  o.put(0xa5e - delta, project_none);
  std::array<ActorId, 2> ids{};
  for (unsigned i = 0; i < 2; ++i) {
    WorldActorSpec a;
    a.script = i;
    a.sprite = 1;
    a.action.animation = 0;
    a.behavior.direction = 0;
    a.action.position = {128u << 16, (100u + i * 17) << 16, 0};
    a.action.velocity = {0, 0xffff8000, 0};
    a.action.variables[0] = 3;
    a.action.variables[1] = 2;
    a.action.variables[5] = i * 2;
    ids[i] = *actors.create_authored(a, {24 + i, 25 + i});
    const unsigned index = (24 + i) * 2;
    o.seed(24 + i, actors.actor(ids[i]));
    o.artwork(24 + i, 1);
    o.put(next + index, i ? 0xffff : 50);
    o.put(script + index, 0);
    o.put(task + index, i * 2);
    o.put(next_task + i * 2, 0xffff);
    o.put(cursor + i * 2, 0x8000 + i * 5);
    o.put(bank + i * 2, 0xc3);
    o.put(sleep + i * 2, 0);
    o.put(stack + i * 2, 0);
    o.put(temp + i * 2, 0);
    o.put(tick_low + index, tick_none);
    o.put(tick_high + index, tick_none >> 16);
    o.put(physics + index, is_jp ? 0x9fa7 : 0x9fc8);
    o.put(project + index, project_world);
  }
  for (unsigned tick = 0; tick < 96; ++tick) {
    context = assets.title + " source party actor pass=" + std::to_string(tick);
    state.projection.movement_mismatch = tick % 9 == 0;
    o.put(l.mismatch, state.projection.movement_mismatch);
    o.put(l.leader, 48);
    o.put(l.leader_direction, 0);
    actors.scene().camera_x = tick % 7;
    actors.scene().camera_y = tick % 5;
    o.put(0x31, actors.scene().camera_x);
    o.put(0x33, actors.scene().camera_y);
    auto &a = actors.actor(ids[1]);
    a.scripts_and_physics_enabled = tick % 13 != 4;
    o.put(tick_high + 50,
          (tick_none >> 16) | (a.scripts_and_physics_enabled ? 0 : 0x4000));
    o.call(is_jp ? 0xc09445 : 0xc09466, 24, true);
    check(actors.advance_tick() == WorldTickResult::Complete,
          "Party service failed to finish native actor pass");
    for (unsigned i = 0; i < 2; ++i) {
      o.compare(24 + i, actors.actor(ids[i]));
      check(actors.actor(ids[i]).tasks()[0].temporary == o.get(temp + i * 2) &&
                actors.actor(ids[i]).tasks()[0].sleep_frames ==
                    o.get(sleep + i * 2),
            "Party task return/sleep differs");
    }
    check(actors.actor(ids[1]).behavior.physics ==
                  ActorPhysics::PartyFollower &&
              actors.actor(ids[1]).behavior.projection ==
                  ActorProjection::Unchanged &&
              o.get(physics + 50) == l.follow &&
              o.get(project + 50) == project_none,
          "Authored follower callback phases differ");
    check(random.primary_word == o.get(0x24) &&
              random.secondary_word == o.get(0x26),
          "Party pass consumed extra random draws");
    check(actors.ticks() == tick + 1,
          "Party movement advanced an extra logical tick");
    ++count;
  }
}
void authored_entry_reference(const eb::GameAssets &assets) {
  context = assets.title + " actual imported EVENT2";
  const auto scripts = import_action_scripts(assets.image, assets.version);
  auto sprites = std::make_shared<SpriteResources>(
      assets.image, sprite_catalog_layout(assets.version));
  ActorWorld actors(sprites, scripts, assets.version,
                    import_appearance_data(assets.image, assets.version));
  party::State party(assets.version);
  WorldPartyState state;
  story::RandomState random{0x1234, 0x9876};
  WorldPartyMovement movement(
      actors, party, state, random,
      import_party_movement_data(assets.image, assets.version));
  WorldActorSpec spec;
  spec.script = 2;
  spec.sprite = 1;
  spec.action.animation = 9;
  spec.action.position = {0x808000, 0x908000, 0x8000};
  spec.action.velocity = {0x18000, 0xffffc000, 0x2000};
  spec.action.variables[0] = 3;
  spec.action.variables[1] = 2;
  const auto id = *actors.create_authored(spec, {24, 25});
  auto &a = actors.actor(id);
  party.party_count = 1;
  state.roles[0] = 24; state.current_leader_role = 24;
  state.projection = {24, 0, 0};
  const auto before = random;
  check(actors.advance_tick() == WorldTickResult::NeedsEngine &&
            actors.request()->binding.operation ==
                NativeAction::InitializePartyActor,
        "Actual EVENT2 did not reach its typed startup service");
  check(a.behavior.physics == ActorPhysics::PartyFollower &&
            a.behavior.projection == ActorProjection::Unchanged &&
            a.action().animation == 0 &&
            a.action().position == spec.action.position && random == before,
        "Actual EVENT2 installed the wrong phases or ran movement before "
        "startup");
  Oracle o(assets);
  o.seed(24, a);
  o.artwork(24, 1);
  o.put(0x24, random.primary_word);
  o.put(0x26, random.secondary_word);
  o.put(o.l.game + 148 - o.l.displacement, 24);
  o.call(o.l.startup, 24, true);
  actors.bind_party_movement(movement);
  check(actors.advance_tick() == WorldTickResult::NeedsEngine,
        "Actual EVENT2 concealed a remaining service boundary");
  const auto &request = *actors.request();
  const bool jp = assets.version == eb::GameVersion::JP;
  check(jp ? request.origin == WorldActionOrigin::TickCallback &&
                 request.binding.operation == NativeAction::RunPartyFollower
           : request.origin == WorldActionOrigin::Script &&
                 request.binding.operation ==
                     NativeAction::RefreshPartyFollower &&
                 request.diagnostic.authored_identifier == 0xc04ef0u,
        "Actual EVENT2 missing following owner boundary changed");
  check(random.primary_word == o.get(0x24) &&
            random.secondary_word == o.get(0x26),
        "Actual EVENT2 startup did not consume exactly the source RNG draw");
  o.compare(24, a);
  const auto image = *a.appearance.displayed();
  o.pixels(24, *sprites->acquire(1, image.pose, image.surface, image.format));
  check(actors.ticks() == 0 && a.action().velocity == spec.action.velocity,
        "Pending authored EVENT2 advanced physics or completed a logical tick");
}

} // namespace
int main(int argc, char **argv) {
  try {
    check(argc >= 2, "native_world_party_movement_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      unsigned startup = 0, follower = 0, passes = 0;
      startup_reference(assets, startup);
      follower_reference(assets, follower);
      pass_reference(assets, passes);
      authored_entry_reference(assets);
      std::cout
          << "PASS " << assets.title << ": " << startup
          << " source startup/RNG/artwork calls, " << follower
          << " follower projections, " << passes
          << " complete actor passes and actual imported EVENT2 boundary\n";
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << ": " << context << '\n';
    return 1;
  }
}
