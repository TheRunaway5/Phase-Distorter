// Complete original Event750 primitives, including real divider/multiplier
// registers and forced-blank pose transfers. No callback completion bypass.
#define NATIVE_WORLD_NPC_COMMANDS_REFERENCE_NO_MAIN
#include "eb/native/peripheral_state.hpp"
#include "eb/native/world_enemy_behavior.hpp"
#include "native_world_npc_commands_reference.cpp"
namespace {
struct TargetLayout {
  unsigned angle, reached, pose, current, speed, surface, map, displayed;
};
constexpr TargetLayout target_us{0xc46adb, 0xc0a8dc, 0xc0aa6e, 0x1a42,
                                 0x2b32,   0x2baa,   0x112e,   0x341a};
constexpr TargetLayout target_jp{0xc44857, 0xc0a8bb, 0xc0aa4d, 0x1a38,
                                 0x2f30,   0x2fa8,   0x1124,   0x1ab8};

struct TargetRig {
  NpcPair pair;
  TargetLayout l;
  std::shared_ptr<const EnemySpawnData> enemy_data;
  WorldEnemies enemies;
  party::State party;
  npcs::InteractionState leader;
  EnemyMovementData movement;
  GeneratedInputData angles;
  PeripheralState peripheral;
  WorldEnemyBehavior behavior;
  TargetRig(Content &c, Totals &t)
      : pair(c, t),
        l(c.assets.version == eb::GameVersion::JP ? target_jp : target_us),
        enemy_data(std::make_shared<EnemySpawnData>(
            import_enemy_spawn_data(c.assets.image, c.assets.version))),
        enemies(enemy_data, c.sprites, c.scripts->scripts()),
        party(c.assets.version), movement(c.assets.image, c.assets.version),
        angles(c.assets.image, c.assets.version),
        behavior(movement, angles, pair.actors, enemies, party, leader) {
    pair.sprite(1, 8, 0);
    behavior.bind_peripherals(peripheral);
  }
  ActorId id() const { return *pair.actors.actor_for_role(0); }
  void seed(std::uint16_t x, std::uint16_t y, std::uint16_t tx,
            std::uint16_t ty, std::uint16_t threshold, std::uint16_t speed) {
    auto &a = pair.actors.actor(id());
    const auto &n = pair.source.n;
    a.action().position = {std::uint32_t(x) << 16 | 0x1357,
                           std::uint32_t(y) << 16 | 0x2468, 0x3456789a};
    a.action().velocity = {0x56789abc, 0x789abcde, 0xabcdef01};
    a.action().variables[5] = threshold;
    a.action().variables[6] = tx;
    a.action().variables[7] = ty;
    a.behavior.movement_speed = speed;
    a.behavior.direction = 3;
    const unsigned whole[] = {n.whole_x, n.whole_y, n.whole_z},
                   fraction[] = {n.fraction_x, n.fraction_y, n.fraction_z},
                   velocity[] = {n.velocity_x, n.velocity_y, n.velocity_z},
                   vf[] = {n.velocity_fraction_x, n.velocity_fraction_y,
                           n.velocity_fraction_z};
    for (unsigned i = 0; i < 3; ++i) {
      pair.source.put(whole[i], a.action().position[i] >> 16);
      pair.source.put(fraction[i], a.action().position[i]);
      pair.source.put(velocity[i], a.action().velocity[i] >> 16);
      pair.source.put(vf[i], a.action().velocity[i]);
    }
    for (unsigned i = 0; i < 8; ++i)
      pair.source.put(n.actor_variables + i * 60, a.action().variables[i]);
    pair.source.put(n.direction, a.behavior.direction);
    pair.source.put(l.speed, speed);
    pair.source.put(l.current, 0);
    // Real incoming completed division. Axis/within-threshold paths must retain
    // it; other paths execute their own original hardware operations.
    pair.source.bus->write_byte(0x4204, 0x57);
    pair.source.bus->write_byte(0x4205, 0x93);
    pair.source.bus->write_byte(0x4206, 37);
    pair.source.bus->advance_cpu_cycles(32);
    peripheral.divide_word(0x9357, 37);
  }
  void compare_math() {
    auto &b = *pair.source.bus;
    equal_npc(b.read_byte(0x4214) | (unsigned(b.read_byte(0x4215)) << 8),
              peripheral.quotient(), "retained division quotient");
    equal_npc(b.read_byte(0x4216) | (unsigned(b.read_byte(0x4217)) << 8),
              peripheral.product(), "retained product/remainder");
  }
};
void movement_run(const eb::GameAssets &assets) {
  npc_checks = 0;
  Content content(assets);
  Totals totals;
  TargetRig r(content, totals);
  unsigned angles = 0, reached = 0, poses = 0;
  std::uint64_t pixels = 0;
  const std::array<std::array<std::uint16_t, 2>, 6> starts{{{0, 0},
                                                            {0xffff, 0xffff},
                                                            {0x7fff, 0x8000},
                                                            {128, 112},
                                                            {0xff80, 0x80},
                                                            {0x8000, 0}}};
  const std::array<std::array<std::uint16_t, 2>, 12> deltas{{{0, 0},
                                                             {1, 0},
                                                             {0, 1},
                                                             {1, 1},
                                                             {65535, 1},
                                                             {1, 65535},
                                                             {65535, 65535},
                                                             {255, 257},
                                                             {256, 256},
                                                             {32768, 0},
                                                             {0, 32768},
                                                             {32767, 32768}}};
  for (auto start : starts)
    for (auto delta : deltas) {
      const auto tx = std::uint16_t(start[0] + delta[0]),
                 ty = std::uint16_t(start[1] + delta[1]);
      context = assets.title + " target angle=" + std::to_string(angles);
      r.seed(start[0], start[1], tx, ty, 1, 0x100);
      r.pair.source.call(r.l.angle);
      equal_npc(r.pair.source.cpu.accumulator, r.behavior.target_angle(r.id()),
                "target angle return");
      r.compare_math();
      r.pair.compare();
      ++angles;
      for (unsigned threshold : {0u, 1u, 5u, 0x8000u, 0xffffu})
        for (unsigned speed : {0u, 0x100u, 0xffffu}) {
          context =
              assets.title + " target predicate=" + std::to_string(reached);
          r.seed(start[0], start[1], tx, ty, threshold, speed);
          r.pair.source.call(r.l.reached);
          equal_npc(r.pair.source.cpu.accumulator,
                    r.behavior.target_reached(r.id()), "target reached return");
          r.compare_math();
          r.pair.compare();
          ++reached;
        }
    }
  // Full original inline read and four/eight-direction graphics selection.
  for (unsigned branch : {0u, 1u, 0xffffu})
    for (unsigned direction = 0; direction < 8; ++direction)
      for (unsigned frame = 0; frame < 2; ++frame)
        for (unsigned surface : {0u, 4u, 8u, 12u}) {
          auto &p = r.pair;
          auto &actor = p.actors.actor(r.id());
          const auto &n = p.source.n;
          context = assets.title + " scripted pose=" + std::to_string(poses);
          actor.action().variables[0] = branch;
          actor.behavior.surface_flags = surface;
          p.source.put(n.actor_variables, branch);
          p.source.put(r.l.surface, surface);
          p.source.put(0x1e80, 0x6000);
          p.source.put(0x1e82, 0x7f);
          p.source.put(0x1e88, 0);
          p.source.put(0x1e94, 0xaaaa);
          p.source.bus->work_ram[0x16000] = direction;
          p.source.bus->work_ram[0x16001] = frame;
          // The two bytes are incoming shared content, not helper output.
          p.scratch.bytes[0x6000] = direction;
          p.scratch.bytes[0x6001] = frame;
          p.source.call(r.l.pose);
          select_scripted_pose(actor.action(), actor.behavior, actor.appearance,
                               std::uint8_t(direction), std::uint8_t(frame));
          equal_npc(p.source.word(0x1e94), 2, "consumed inline bytes");
          p.compare();
          const auto image = actor.appearance.image();
          check(bool(image), "No selected scripted image");
          const auto map_base = p.source.word(r.l.map);
          const auto ref = p.source.word(r.l.displayed);
          for (unsigned part = 0; part < image->parts.size(); ++part) {
            const unsigned map =
                map_base + ((ref & 1) * image->parts.size() + part) * 5;
            const unsigned attr = p.source.bus->work_ram.at(map + 2),
                           tile = p.source.bus->work_ram.at(map + 1);
            equal_npc(
                std::uint16_t(std::int8_t(p.source.bus->work_ram.at(map + 3))),
                std::uint16_t(image->parts[part].left), "part X");
            equal_npc(
                std::uint16_t(std::int8_t(p.source.bus->work_ram.at(map))),
                std::uint16_t(image->parts[part].top), "part Y");
            for (unsigned y = 0; y < 16; ++y)
              for (unsigned x = 0; x < 16; ++x) {
                const unsigned sx = attr & 64 ? 15 - x : x,
                               sy = attr & 128 ? 15 - y : y;
                const unsigned t = (((tile & 0xf0) + (sy / 8) * 16) & 0xf0) |
                                   ((tile + sx / 8) & 15),
                               at = 0x8000 + ((attr & 1) ? 8192 : 0) + t * 32 +
                                    (sy & 7) * 2;
                unsigned color = 0;
                for (unsigned plane = 0; plane < 4; ++plane)
                  color |=
                      ((p.source.bus
                            ->video_ram[(at + (plane / 2) * 16 + (plane & 1)) &
                                        65535] >>
                        (7 - (sx & 7))) &
                       1)
                      << plane;
                equal_npc(color, image->parts[part].indices[y * 16 + x],
                          "actual transferred indexed pixel");
                ++pixels;
              }
          }
          ++poses;
        }
  check(angles == 72 && reached == 1080 && poses == 192 && pixels != 0,
        "Required Event750 primitive coverage missing");
  std::cout << "PASS " << assets.title << " complete target-angle=" << angles
            << " target-reached=" << reached << " scripted-pose=" << poses
            << " transferred_pixels=" << pixels << " comparisons=" << npc_checks
            << " source_instructions=" << totals.instructions
            << "; actual divider/multiplier retention and full helper bodies, "
               "scheduling separately tested\n";
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int i = 1; i < argc; ++i)
      movement_run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
