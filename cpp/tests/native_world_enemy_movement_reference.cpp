// Whole original FIND_PATH_TO_PARTY and its entire original C4 solver execute
// here. No path, grid result, sorting helper or reconstruction is substituted.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_creation.hpp"
#include "eb/native/world_activation.hpp"
#include "eb/native/world_actor_movement.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_world_movement_fixture.hpp"
#include <iostream>

namespace {
using namespace eb::native;
std::string context;
unsigned checks{};
void check(bool ok, const std::string &message) {
  ++checks;
  if (!ok)
    throw std::runtime_error(message + ": " + context);
}
std::shared_ptr<const ActionScriptData> fixture_scripts(const eb::GameAssets &a,
                                                        bool authored) {
  if (!authored)
    return std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09},
                                              0, std::vector<std::uint32_t>{0});
  // Only the caller/wait loop is test-authored. The entire called C3A401 setup
  // and spawned C3A20E artwork task remain the imported original bytes.
  auto imported = import_action_scripts(a.image, a.version);
  const unsigned start = a.version == eb::GameVersion::JP ? 0x3a1fe : 0x3a20e;
  const unsigned end = a.version == eb::GameVersion::JP ? 0x3a478 : 0x3a488;
  std::vector<std::uint8_t> content;
  for (unsigned at = start; at < end; ++at)
    content.push_back(imported->byte(at));
  const unsigned setup = a.version == eb::GameVersion::JP ? 0xa3f1 : 0xa401;
  return std::make_shared<ActionScriptData>(
      std::vector<ActionScriptBlock>{
          {start, std::move(content)},
          {0x38000,
           {0x1a, std::uint8_t(setup), std::uint8_t(setup >> 8), 0x09}},
          {0x38010, {0x09}}},
      std::vector<std::uint32_t>{0x38000, 0x38010});
}
struct Fixture {
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  ActorWorld actors;
  WorldCollision collision;
  movement_test::Fixture terrain;
  WorldMapArea area;
  WorldPartyState formation;
  party::State party;
  WorldPathfinding paths;
  EnemyMovementData data;
  GeneratedInputData angles;
  WorldEnemyMovement follow;
  WorldActorMovement movement;
  Fixture(const eb::GameAssets &a, bool authored = false)
      : sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(fixture_scripts(a, authored)),
        actors(sprites, scripts, a.version,
               import_appearance_data(a.image, a.version)),
        collision(a.image, world_collision_layout(a.version)),
        area(terrain.area()), party(a.version),
        paths(actors, collision, area, formation, party),
        data(a.image, a.version), angles(a.image, a.version),
        follow(data, angles, actors, paths, collision),
        movement(collision, area) {
    actors.bind_movement(movement);
    std::fill(terrain.bytes.begin(), terrain.bytes.begin() + 0x19000, 0);
    terrain.pattern({});
    area = terrain.area();
    for (unsigned role : {0u, 1u, 2u, 3u, 4u, 5u, 24u, 25u, 26u}) {
      WorldActorSpec spec;
      spec.sprite = 1;
      spec.script = authored && role != 0 ? 1 : 0;
      spec.action.position = {0x1801234, 0x1805678, 0x22223333};
      auto id = actors.create_authored(spec, {role, role + 1});
      check(bool(id), "Cannot create source path fixture role");
    }
    formation.roles = {24, 25, 26, 0, 0, 0};
    formation.current_leader_role = 24;
    party.party_count = 1;
  }
};
struct Oracle {
  bool jp;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned entry, game, shift, scripts, size, state, points, count, x, y,
      target;
  Oracle(const eb::GameAssets &a)
      : jp(a.version == eb::GameVersion::JP),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    entry = jp ? 0xc0bc53 : 0xc0bc74;
    game = jp ? 0x9aa9 : 0x97f5;
    shift = jp ? 3 : 0;
    scripts = jp ? 0xa58 : 0xa62;
    size = jp ? 0x2f6c : 0x2b6e;
    state = jp ? 0x305c : 0x2c5e;
    points = jp ? 0x3200 : 0x2e02;
    count = jp ? 0x323c : 0x2e3e;
    x = jp ? 0xb84 : 0xb8e;
    y = jp ? 0xbc0 : 0xbca;
    target = jp ? 0x4e14 : 0x4a8e;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  unsigned get(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void seed(const Fixture &f, unsigned width, unsigned height) {
    put(game + 148 - shift, f.formation.current_leader_role);
    for (unsigned i = 0; i < 6; ++i)
      put(game + 162 - shift + i * 2, f.formation.roles[i]);
    put(0x24, 0x1234);
    put(0x26, 0x9876);
    put(2, 0x45ab);
    for (unsigned role = 0; role < 30; ++role) {
      put(scripts + role * 2, 0xffff);
      if (const auto id = f.actors.actor_for_role(role)) {
        const auto &a = f.actors.actor(*id);
        put(scripts + role * 2, a.action().alive ? 0 : 0xffff);
        put(x + role * 2, a.action().position[0] >> 16);
        put(y + role * 2, a.action().position[1] >> 16);
        put(size + role * 2, a.appearance_context.shape);
        put(state + role * 2, a.behavior.path_state);
        const auto path = f.paths.path(*id);
        put(count + role * 2, path ? path->remaining : 0);
      }
    }
    const auto &leader = f.actors.actor(
        *f.actors.actor_for_role(f.formation.current_leader_role));
    const auto origin =
        f.collision.origin({std::uint16_t(leader.action().position[0] >> 16),
                            std::uint16_t(leader.action().position[1] >> 16)},
                           leader.appearance_context.shape);
    const auto left = std::uint16_t((origin.x >> 3) - width / 2),
               top = std::uint16_t((origin.y >> 3) - height / 2);
    for (unsigned dy = 0; dy < height; ++dy)
      for (unsigned dx = 0; dx < width; ++dx) {
        const auto xx = std::uint16_t(left + dx), yy = std::uint16_t(top + dy);
        bus->work_ram[0xe000 + (yy & 63) * 64 + (xx & 63)] =
            f.area.collision(xx, yy);
      }
  }
  unsigned call(unsigned targets, unsigned width, unsigned height) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = targets;
    cpu.x_index = width;
    cpu.y_index = height;
    cpu.execute_instruction<0x22>(entry, 4);
    for (unsigned i = 0; i < 3000000; ++i) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return cpu.accumulator;
      cpu.step_instruction();
    }
    throw std::runtime_error("Original pathfinder did not return " +
                             cpu.describe_registers() + ": " + context);
  }
  void same(const Fixture &f, unsigned routed, unsigned returned) {
    check(returned == (routed ? 0u : 0xffffu), "Pathfinder return differs");
    check(get(target) == f.paths.centre().x &&
              get(target + 2) == f.paths.centre().y &&
              get(target + 4) == f.paths.half_extent().x &&
              get(target + 6) == f.paths.half_extent().y,
          "Path search origin differs");
    check(get(0xf200 + 156) == f.paths.targets().size() &&
              get(0xf200 + 158) == f.paths.candidates().size(),
          "Target/candidate count differs");
    for (unsigned i = 0; i < f.paths.targets().size(); ++i)
      check(get(0xf200 + 124 + i * 4) == f.paths.targets()[i].y &&
                get(0xf200 + 126 + i * 4) == f.paths.targets()[i].x,
            "Party target differs");
    for (unsigned i = 0; i < f.paths.candidates().size(); ++i) {
      const auto &p = f.paths.candidates()[i];
      const auto role = *f.actors.actor(p.actor).authored_role();
      const auto at = 0xf200 + 160 + i * 18;
      check(get(at) == 0 && get(at + 2) == p.height && get(at + 4) == p.width &&
                get(at + 6) == p.origin.y && get(at + 8) == p.origin.x &&
                get(at + 16) == role,
            "Candidate shape/origin/order differs");
      check(get(at + 14) == p.raw_length,
            "Candidate raw path length differs role=" + std::to_string(role) +
                " native=" + std::to_string(p.raw_length) +
                " source=" + std::to_string(get(at + 14)));
      check(get(at + 10) == p.points.size(), "Compressed path count differs");
      for (unsigned n = 0; n < p.points.size(); ++n) {
        const auto ptr = get(at + 12) + n * 4;
        check(get(ptr) == p.points[n].y && get(ptr + 2) == p.points[n].x,
              "Compressed path point differs role=" + std::to_string(role) +
                  " point=" + std::to_string(n));
      }
      if (!p.points.empty())
        check(get(count + role * 2) == p.points.size(),
              "Published actor path count differs");
    }
    for (unsigned role = 0; role < 30; ++role)
      if (const auto id = f.actors.actor_for_role(role))
        check(get(state + role * 2) == f.actors.actor(*id).behavior.path_state,
              "Actor path gate differs");
    check(get(2) == 0x45ab && get(0x24) == 0x1234 && get(0x26) == 0x9876 &&
              f.actors.ticks() == 0,
          "Pathfinding consumed RNG/frame/actor tick");
  }
};
struct MovementOracle : Oracle {
  unsigned tick, waypoint, component, velocity_call, moving, speed, direction,
      current, fraction, velocity, velocity_fraction, vars, obstacle, surface,
      collider, physics, path_base{};
  explicit MovementOracle(const eb::GameAssets &a) : Oracle(a) {
    tick = jp ? 0xc0d7bf : 0xc0d7f7;
    waypoint = jp ? 0xc0d957 : 0xc0d98f;
    component = jp ? 0xc41f4b : 0xc41fff;
    velocity_call = jp ? 0xc44dc8 : 0xc47044;
    moving = jp ? 0x1a7c : 0x1a86;
    speed = jp ? 0x2f30 : 0x2b32;
    direction = jp ? 0x2ef4 : 0x2af6;
    current = jp ? 0x1a38 : 0x1a42;
    fraction = jp ? 0xc38 : 0xc42;
    velocity = jp ? 0xcec : 0xcf6;
    velocity_fraction = jp ? 0xda0 : 0xdaa;
    vars = jp ? 0xe54 : 0xe5e;
    obstacle = jp ? 0x2cd8 : 0x28da;
    surface = jp ? 0x2fa8 : 0x2baa;
    collider = jp ? 0x2c9c : 0x289e;
    physics = jp ? 0xa33f : 0xa360;
    bus->work_ram[0xd] = 0x80;
  }
  unsigned invoke(unsigned address, unsigned a = 0, unsigned xx = 0,
                  unsigned yy = 0, bool far = true) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = xx;
    cpu.y_index = yy;
    put(current, 0);
    put(0x1e88, 0);
    if (far)
      cpu.execute_instruction<0x22>(address, 4);
    else
      cpu.execute_instruction<0x20>(address, 3);
    for (unsigned step = 0; step < 1000000; ++step) {
      if (cpu.program_counter == 0xc0ff00u + (far ? 4 : 3) &&
          cpu.stack_pointer == 0x1fff)
        return cpu.accumulator;
      cpu.step_instruction();
    }
    throw std::runtime_error("Original enemy movement did not return " +
                             cpu.describe_registers() + ": " + context);
  }
  void seed_actor(const WorldActor &a) {
    put(size, a.appearance_context.shape);
    put(state, a.behavior.path_state);
    put(direction, a.behavior.direction);
    put(moving, a.behavior.moving_direction);
    put(speed, a.behavior.movement_speed);
    put(obstacle, a.behavior.obstacle_flags);
    put(surface, a.behavior.surface_flags);
    put(collider, a.behavior.collision_object);
    for (unsigned axis = 0; axis < 3; ++axis) {
      put(x + axis * 60, a.action().position[axis] >> 16);
      put(fraction + axis * 60, a.action().position[axis]);
      put(velocity + axis * 60, a.action().velocity[axis] >> 16);
      put(velocity_fraction + axis * 60, a.action().velocity[axis]);
    }
    for (unsigned i = 0; i < 8; ++i)
      put(vars + i * 60, a.action().variables[i]);
  }
  void compare(const Fixture &f, ActorId id, unsigned expected_ticks = 0) {
    const auto &a = f.actors.actor(id);
    const auto *path = f.paths.path(id);
    check(get(count) == f.paths.remaining(id), "Remaining path count differs");
    if (path)
      check(get(points) == std::uint16_t(path_base + path->next * 4),
            "Path cursor differs");
    for (unsigned axis = 0; axis < 3; ++axis) {
      check(a.action().position[axis] ==
                (get(x + axis * 60) << 16 | get(fraction + axis * 60)),
            "Position/fraction differs");
      check(a.action().velocity[axis] == (get(velocity + axis * 60) << 16 |
                                          get(velocity_fraction + axis * 60)),
            "Velocity/fraction differs");
    }
    check(get(state) == a.behavior.path_state &&
              get(obstacle) == a.behavior.obstacle_flags,
          "Path gate/obstacle differs");
    check(get(direction) == a.behavior.direction &&
              get(moving) == a.behavior.moving_direction,
          "Facing/moving direction differs");
    check(get(surface) == a.behavior.surface_flags &&
              std::uint16_t(a.behavior.collision_object) == get(collider),
          "Surface/collider differs");
    for (unsigned i = 0; i < 8; ++i)
      check(get(vars + i * 60) == a.action().variables[i],
            "Script variable differs");
    check(get(2) == 0x45ab && get(0x24) == 0x1234 && get(0x26) == 0x9876 &&
              f.actors.ticks() == expected_ticks,
          "Movement advanced time/RNG/actor tick");
  }
};
ActorId setup(Fixture &f, MovementOracle &o, unsigned shape, unsigned gx = 48,
              unsigned gy = 48) {
  const auto id = *f.actors.actor_for_role(0);
  for (unsigned role : {0u, 1u, 2u, 3u, 4u, 5u, 24u, 25u, 26u})
    f.actors.actor(*f.actors.actor_for_role(role)).behavior.path_state = 0;
  auto &enemy = f.actors.actor(id);
  auto &leader = f.actors.actor(*f.actors.actor_for_role(24));
  enemy.appearance_context.shape = shape;
  leader.appearance_context.shape = shape;
  const auto &box = f.collision.shape(shape);
  leader.action().position = {
      std::uint32_t(std::uint16_t(gx * 8 + box.anchor_x)) << 16,
      std::uint32_t(std::uint16_t(gy * 8 + box.anchor_y - box.surface_offset_y))
          << 16,
      0x12345678};
  enemy.action().position = leader.action().position;
  enemy.action().position[0] += 24u << 16;
  enemy.action().position[1] += 16u << 16;
  enemy.action().position[0] |= 0x789a;
  enemy.action().position[1] |= 0x1234;
  enemy.action().velocity = {0x31415926, 0xfedcba98, 0x76543210};
  enemy.behavior.path_state = 0xffff;
  enemy.behavior.direction = 0xabcd;
  enemy.behavior.moving_direction = 0xfedc;
  enemy.behavior.movement_speed = 0x180;
  enemy.behavior.obstacle_flags = 0x1204;
  enemy.behavior.surface_flags = 0xabcd;
  enemy.behavior.collision_object = -1;
  enemy.behavior.physics = ActorPhysics::CollisionSurface;
  for (unsigned i = 0; i < 8; ++i)
    enemy.action().variables[i] = 0x7000 + i;
  o.seed(f, 64, 64);
  const auto result = o.call(1, 64, 64);
  const auto routed = f.paths.find_to_party();
  o.same(f, routed, result);
  check(routed == 1, "Movement fixture did not produce a full original route");
  o.path_base = o.get(o.points);
  o.seed_actor(enemy);
  return id;
}
unsigned imported_task(eb::GameAssets assets) {
  const unsigned wrapper_entry =
      assets.version == eb::GameVersion::JP ? 0xa3f1 : 0xa401;
  assets.image[0x38000] = 0x1a;
  assets.image[0x38001] = wrapper_entry;
  assets.image[0x38002] = wrapper_entry >> 8;
  assets.image[0x38003] = 0x09;
  Fixture f(assets, true);
  MovementOracle o(assets);
  const auto id = setup(f, o, 0);
  auto &actor = f.actors.actor(id);
  actor.behavior.direction = 6;
  actor.behavior.moving_direction = 6;
  o.seed_actor(actor);
  const unsigned shift = o.jp ? 10 : 0, first = 0xa50 - shift,
                 next = 0xa9e - shift, task = 0xada - shift,
                 next_task = 0x125a - shift, cursor = 0x13fe - shift,
                 bank = 0x148a - shift, sleep = 0x1372 - shift,
                 stack = 0x12e6 - shift, temporary = 0x1516 - shift,
                 tick_low = 0x107a - shift, tick_high = 0x10b6 - shift,
                 physics = 0x121e - shift, projection = 0x11a6 - shift,
                 animation = 0x10f2 - shift;
  // Install the exact same test caller in source content; called task bytes
  // are original imported bytes and every machine helper executes normally.
  o.put(first, 0);
  o.put(next, 0xffff);
  o.put(task, 0);
  o.put(next_task, 0xffff);
  o.put(cursor, 0x8000);
  o.put(bank, 0xc3);
  o.put(sleep, 0);
  o.put(stack, 0);
  o.put(temporary, 0);
  o.put(0xa54 - shift, 2);
  o.put(next_task + 2, 0xffff);
  const auto none = o.jp ? 0xc0941a : 0xc0943b;
  o.put(tick_low, none);
  o.put(tick_high, none >> 16);
  actor.behavior.physics = ActorPhysics::Planar;
  o.put(physics, o.jp ? 0x9fa7 : 0x9fc8);
  o.put(projection, o.jp ? 0xa002 : 0xa023);
  o.put(0xa5e - shift, o.jp ? 0xa018 : 0xa039);
  o.put(animation, actor.action().animation);
  const auto catalog = sprite_catalog_layout(assets.version);
  const auto read = [&](unsigned at) {
    return unsigned(assets.image[at]) | unsigned(assets.image[at + 1]) << 8;
  };
  const unsigned base =
      (read(catalog.groups + 4) | read(catalog.groups + 6) << 16) - 0xc00000;
  const unsigned low = o.jp ? 0x2dc8 : 0x29ca, high = o.jp ? 0x2e04 : 0x2a06,
                 graphics_bank = o.jp ? 0x2e40 : 0x2a42,
                 width = o.jp ? 0x2e7c : 0x2a7e, rows = o.jp ? 0x2eb8 : 0x2aba,
                 vram = o.jp ? 0x2d8c : 0x298e,
                 displayed = o.jp ? 0x1ab8 : 0x341a,
                 fingerprint = o.jp ? 0x1af4 : 0x3456;
  o.put(low, base + 9);
  o.put(high, (base + 9 + 0xc00000) >> 16);
  o.put(graphics_bank, assets.image[base + 8]);
  o.put(width, assets.image[base + 1] * 2);
  o.put(rows, assets.image[base]);
  o.put(vram, 0x4000);
  o.put(displayed, 0xffff);
  o.put(fingerprint, actor.appearance.fingerprint());
  const unsigned lx = 384, ly = 384;
  o.put(o.game + 130 - o.shift, lx);
  o.put(o.game + 134 - o.shift, ly);
  unsigned callbacks = 0;
  for (unsigned frame = 0; frame < 64; ++frame) {
    context =
        assets.title + " imported C3A401/C3A20E frame=" + std::to_string(frame);
    o.invoke(o.jp ? 0xc09445 : 0xc09466);
    while (f.actors.advance_tick() != WorldTickResult::Complete) {
      check(bool(f.actors.request()),
            "Imported task requested an unexpected camera phase");
      const auto request = *f.actors.request();
      if (request.binding.operation == NativeAction::RunEnemyPath) {
        f.follow.tick(request.actor);
        f.actors.respond();
        ++callbacks;
      } else if (request.binding.operation == NativeAction::WithinLoadingArea) {
        const auto &a = f.actors.actor(request.actor);
        f.actors.respond(npc_within_retention_area(a.action().position[0] >> 16,
                                                   a.action().position[1] >> 16,
                                                   lx, ly, 0)
                             ? 0xffff
                             : 0);
      } else
        throw std::runtime_error(
            "Imported enemy task needs actual service " +
            std::to_string(unsigned(request.binding.operation)) + ": " +
            context);
    }
    o.compare(f, id, frame + 1);
    const auto tasks = actor.tasks();
    unsigned source_task = o.get(task), n = 0;
    while (source_task != 0xffff) {
      check(n < tasks.size(), "Original spawned an unmatched task");
      check(tasks[n].cursor ==
                    ((o.get(bank + source_task) & 255) - 0xc0) * 65536u +
                        o.get(cursor + source_task) &&
                tasks[n].sleep_frames == o.get(sleep + source_task) &&
                tasks[n].stack_depth == o.get(stack + source_task) / 2,
            "Imported task cursor/sleep/stack differs native=" +
                std::to_string(tasks[n].cursor) + "," +
                std::to_string(tasks[n].sleep_frames) + "," +
                std::to_string(tasks[n].stack_depth) + " source=" +
                std::to_string(((o.get(bank + source_task) & 255) - 0xc0) *
                                   65536u +
                               o.get(cursor + source_task)) +
                "," + std::to_string(o.get(sleep + source_task)) + "," +
                std::to_string(o.get(stack + source_task)));
      source_task = o.get(next_task + source_task);
      ++n;
    }
    check(n == tasks.size(), "Native spawned an unmatched task");
    check(actor.action().animation == o.get(animation),
          "Imported task animation differs");
    if (frame) {
      check(actor.appearance.fingerprint() == o.get(fingerprint),
            "Imported task appearance fingerprint differs");
      const auto selected = *actor.appearance.displayed();
      const auto image = f.sprites->acquire(selected.sprite, selected.pose,
                                            selected.surface, selected.format);
      unsigned destination = o.get(vram);
      const unsigned byte_width = o.get(width), tile_rows = o.get(rows),
                     padding = (tile_rows & 1) * 8;
      bool equal = true;
      for (unsigned row = 0; row < tile_rows; ++row) {
        for (unsigned y = 0; y < 8; ++y)
          for (unsigned x = 0; x < byte_width / 4; ++x) {
            const unsigned at = destination * 2 + (x / 8) * 32 + y * 2;
            unsigned color = 0;
            for (unsigned bit = 0; bit < 4; ++bit)
              color |= ((o.bus->video_ram[(at + (bit / 2) * 16 + (bit & 1)) &
                                          65535] >>
                         (7 - (x & 7))) &
                        1)
                       << bit;
            equal &= color == (*image->canvas)[(padding + row * 8 + y) *
                                                   image->layout->canvas_width +
                                               x];
          }
        if (!(destination & 0x100))
          destination += 0x100;
        else {
          const unsigned next = destination + ((byte_width + 32) & 0xffc0) / 2;
          destination = (next ^ destination) & 0x100 ? next : next - 0x100;
        }
      }
      check(equal, "Imported task refreshed artwork pixels differ");
    }
    check(actor.behavior.tick ==
              (frame ? ActorTickCallback::EnemyPath : ActorTickCallback::None),
          "Imported callback installation cadence differs");
  }
  check(callbacks == 63 && f.paths.remaining(id) == 0,
        "Imported task did not drive actual path to completion");
  return 64;
}
void run(const eb::GameAssets &assets) {
  const auto initial = checks;
  unsigned calls = 0, frames = 0, routes = 0;
  Fixture f(assets);
  MovementOracle o(assets);
  // Complete original angle component and signed fraction conversion helpers.
  // Exercise every table index and both ends of each quantization interval.
  for (unsigned angle = 0; angle < 64; ++angle)
    for (unsigned edge : {0u, 1023u})
      for (unsigned speed :
           {0u, 1u, 127u, 255u, 256u, 257u, 32767u, 32768u, 65535u}) {
        const auto theta = std::uint16_t(angle * 1024 + edge);
        context = assets.title + " component angle=" + std::to_string(theta) +
                  " speed=" + std::to_string(speed);
        const auto raw = f.data.components(theta, speed);
        const auto result = o.invoke(o.component, theta, speed);
        check(result == raw[0] && o.get(0x1e06) == raw[1],
              "Authored component helper differs");
        ++calls;
        o.put(o.speed, speed);
        o.invoke(o.velocity_call, theta);
        const auto v = f.data.velocity(theta, speed);
        check(v[0] == (o.get(o.velocity) << 16 | o.get(o.velocity_fraction)) &&
                  v[1] == (o.get(o.velocity + 60) << 16 |
                           o.get(o.velocity_fraction + 60)),
              "Signed velocity conversion differs");
        ++calls;
      }
  for (unsigned shape = 0; shape < 17; ++shape) {
    // Fresh full source search for each near-arrival boundary, including the
    // source's wrapped signed absolute-value edge at -32768.
    for (int dx : {-32768, -3, -2, -1, 0, 1, 2, 3, 32767})
      for (int dy : {-3, 0, 3}) {
        context = assets.title + " arrival shape=" + std::to_string(shape) +
                  " delta=" + std::to_string(dx) + "," + std::to_string(dy);
        const auto id = setup(f, o, shape);
        ++routes;
        auto &a = f.actors.actor(id);
        const auto point = f.paths.current_point(id), top = f.paths.top_left();
        const auto &box = f.collision.shape(shape);
        const auto xx =
            std::uint16_t((top.x + point.x) * 8 + box.anchor_x + dx);
        const auto yy = std::uint16_t((top.y + point.y) * 8 + box.anchor_y -
                                      box.surface_offset_y + dy);
        a.action().position[0] = unsigned(xx) << 16 | 0x789a;
        a.action().position[1] = unsigned(yy) << 16 | 0x1234;
        o.seed_actor(a);
        o.invoke(o.tick);
        f.follow.tick(id);
        o.compare(f, id);
        ++calls;
      }
    // Consume the entire produced route through the actual script service.
    context = assets.title + " waypoint shape=" + std::to_string(shape);
    auto id = setup(f, o, shape, shape & 1 ? 1 : 8188, 48);
    ++routes;
    while (true) {
      const auto result = o.invoke(o.waypoint);
      const auto native = f.follow.consume_waypoint(id);
      check(result == native, "Waypoint boolean differs");
      o.compare(f, id);
      ++calls;
      if (!native)
        break;
    }
    // Real consecutive frames: complete path callback, then the actual
    // collision/surface physics callback. No test-written intermediate poses.
    context = assets.title + " movement frames shape=" + std::to_string(shape);
    id = setup(f, o, shape);
    ++routes;
    auto &actor = f.actors.actor(id);
    unsigned n = 0;
    while (actor.behavior.path_state == 0xffff && n++ < 96) {
      o.invoke(o.tick);
      f.follow.tick(id);
      o.compare(f, id);
      ++calls;
      o.invoke(o.physics, 0, 0, 0, false);
      f.movement.advance(actor);
      o.compare(f, id);
      ++frames;
    }
    check(n >= 1 && n < 96 && actor.behavior.path_state == 0 &&
              f.paths.remaining(id) == 0,
          "Real path frames did not finish n=" + std::to_string(n) +
              " state=" + std::to_string(actor.behavior.path_state) +
              " count=" + std::to_string(f.paths.remaining(id)) +
              " xy=" + std::to_string(actor.action().position[0] >> 16) + "," +
              std::to_string(actor.action().position[1] >> 16) +
              " obstacle=" + std::to_string(actor.behavior.obstacle_flags));
    const auto retained = f.paths.path(id)->next;
    o.invoke(o.tick);
    f.follow.tick(id);
    o.compare(f, id);
    ++calls;
    check(f.paths.path(id)->next == retained,
          "Completed callback advanced retained final point");
    // Source path metadata survives script retirement and bare initialization
    // of the same authored role. Host identities do not survive.
    context =
        assets.title + " retained role route shape=" + std::to_string(shape);
    id = setup(f, o, shape);
    ++routes;
    o.invoke(o.waypoint);
    check(f.follow.consume_waypoint(id), "First retained waypoint absent");
    ++calls;
    const auto old = id;
    const auto saved_cursor = o.get(o.points), saved_count = o.get(o.count);
    const unsigned shift = o.jp ? 10 : 0;
    o.put(0xa50 - shift, 0);
    o.put(0xa9e - shift, 0xffff);
    o.put(0xa52 - shift, 0xffff);
    o.put(0xa54 - shift, 2);
    o.put(0xada - shift, 0);
    o.put(0x125a - shift, 0xffff);
    o.put(0x125c - shift, 0xffff);
    o.invoke(o.jp ? 0xc09c14 : 0xc09c35, 0);
    f.actors.retire(id);
    check(o.get(o.points) == saved_cursor && o.get(o.count) == saved_count,
          "Original retirement changed retained path metadata");
    PreparedActorState prepared;
    prepared.x = 420;
    prepared.y = 412;
    prepared.height = 7;
    o.put(0xa4c - shift, 0);
    o.put(0xa4e - shift, 1);
    o.put(0xa48 - shift, prepared.height);
    o.put(0xa4a - shift, 0);
    for (unsigned v = 0; v < 8; ++v)
      o.put(0xa38 - shift + v * 2, 0);
    check(o.invoke(o.jp ? 0xc09300 : 0xc09321, 0, prepared.x, prepared.y) == 0,
          "Original INIT_ENTITY did not reuse authored role zero");
    id = *f.actors.create_authored_script(0, prepared, {0, 1});
    check(id != old, "Role reuse retained old host identity");
    o.compare(f, id);
    check(o.get(o.points) == saved_cursor && o.get(o.count) == saved_count,
          "Original bare initialization changed retained path metadata");
    bool rejected = false;
    try {
      (void)f.paths.remaining(old);
    } catch (const std::exception &) {
      rejected = true;
    }
    check(rejected, "Stale host identity accessed retained role route");
    while (true) {
      const auto result = o.invoke(o.waypoint);
      const auto native = f.follow.consume_waypoint(id);
      check(result == native, "Retained role waypoint differs");
      o.compare(f, id);
      ++calls;
      if (!native)
        break;
    }
    for (unsigned gate : {0u, 1u, 0x8000u, 0xfffeu}) {
      f.actors.actor(id).behavior.path_state = gate;
      o.put(o.state, gate);
      o.invoke(o.tick);
      f.follow.tick(id);
      o.compare(f, id);
      ++calls;
    }
  }
  const auto task_frames = imported_task(assets);
  std::cout << assets.title << ": " << calls
            << " complete original enemy movement/helper calls, " << routes + 1
            << " complete source path searches, " << frames
            << " actual collision physics frames, " << task_frames
            << " full imported enemy task passes, 17 original "
               "retirement/initialization pairs, 63 sprite pixel comparisons; "
            << checks - initial << " checks\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::runtime_error("Provide regional ebpak paths");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
