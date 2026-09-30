// Whole original FIND_PATH_TO_PARTY and its entire original C4 solver execute
// here. No path, grid result, sorting helper or reconstruction is substituted.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_pathfinding.hpp"
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
  Fixture(const eb::GameAssets &a)
      : sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(std::make_shared<ActionScriptData>(
            std::vector<std::uint8_t>{0x09}, 0, std::vector<std::uint32_t>{0})),
        actors(sprites, scripts, a.version),
        collision(a.image, world_collision_layout(a.version)),
        area(terrain.area()), party(a.version),
        paths(actors, collision, area, formation, party) {
    std::fill(terrain.bytes.begin(), terrain.bytes.begin() + 0x19000, 0);
    terrain.pattern({});
    area = terrain.area();
    for (unsigned role : {0u, 1u, 2u, 3u, 4u, 5u, 24u, 25u, 26u}) {
      WorldActorSpec spec;
      spec.sprite = 1;
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
        put(count + role * 2, path ? path->points.size() - path->next : 0);
      }
    }
    const auto &leader =
        f.actors.actor(*f.actors.actor_for_role(f.formation.current_leader_role));
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
void run(const eb::GameAssets &a) {
  Fixture f(a);
  Oracle o(a);
  unsigned calls = 0;
  const auto initial_checks = checks;
  for (unsigned trial = 0; trial < 224; ++trial) {
    context = a.title + " pathfinding trial=" + std::to_string(trial);
    f.party.party_count = 1 + trial % 3;
    std::array<std::uint8_t, 16> terrain{};
    if (trial >= 32)
      for (unsigned i = 0; i < 16; ++i)
        terrain[i] = (trial % 5 == 0 || (i == trial % 16))
                         ? std::uint8_t(trial & 1 ? 0x40 : 0x80)
                         : std::uint8_t(i & 15);
    f.terrain.pattern(terrain);
    f.area = f.terrain.area();
    for (unsigned role : {0u, 1u, 2u, 3u, 4u, 5u, 24u, 25u, 26u}) {
      auto &actor = f.actors.actor(*f.actors.actor_for_role(role));
      actor.action().alive = role != 5 || trial % 4;
      actor.appearance_context.shape = trial < 16 ? 0 : (role + trial) % 17;
      const auto &shape = f.collision.shape(actor.appearance_context.shape);
      const unsigned base = trial >= 192 ? (trial % 2 ? 1 : 8188) : 48;
      const unsigned spread = trial >= 136 && trial < 192 ? 20 : 0;
      const unsigned xx = role < 6 ? base + role * 2 - trial % 9 - spread
                                   : base + (role - 24) * 2;
      const unsigned yy =
          role < 6 ? base + trial % 7 - role - spread : base + (role - 24);
      const auto x = std::uint16_t(xx * 8 + shape.anchor_x);
      const auto y =
          std::uint16_t(yy * 8 + shape.anchor_y - shape.surface_offset_y);
      actor.action().position[0] = unsigned(x) << 16 | 0x1234;
      actor.action().position[1] = unsigned(y) << 16 | 0xabcd;
      actor.behavior.path_state =
          role < 6 && role <= trial % 6 && (trial < 128 || trial >= 136)
              ? 0xffff
              : 0x1234;
    }
    const unsigned width = trial >= 136 && trial < 192 ? 64
                           : trial % 2                 ? 48
                                                       : 64,
                   height = width;
    // The source current-party selector can disagree with sorted role zero.
    f.formation.current_leader_role = trial % 3 ? 24 : 26;
    o.seed(f, width, height);
    const auto returned = o.call(f.party.party_count, width, height);
    const auto routed = f.paths.find_to_party(width, height);
    o.same(f, routed, returned);
    ++calls;
  }
  std::cout << a.title << ": " << calls
            << " full original FIND_PATH_TO_PARTY calls; "
            << checks - initial_checks << " checks\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::runtime_error("Provide regional ebpak paths");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
