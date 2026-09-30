// Complete original C02D29 (including VELOCITY_STORE and GET_EVENT_FLAG), and
// the actual C0B67F controller-creation fragment through the C03A24 boundary.
// No source call is stubbed. CPU/bus storage exists only in this oracle.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_world_bootstrap_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
std::uint64_t checks{}, instructions{};
std::string context;
void check(bool okay, const char *message) {
  ++checks;
  if (!okay)
    throw std::runtime_error(std::string(message) + ": " + context);
}
struct Layout {
  unsigned initializer, boot, rebuild, init, game, displacement, flags, shape,
      ghost, pajamas, hp, speed_x, speed_y, trail, characters, stride, first,
      free_actor, free_task, next_actor, next_task, minimum, maximum,
      new_height, new_vars, new_priority, script, script_index, cursor, bank,
      sleep, stack, position, fraction, velocity, velocity_fraction, variables,
      animation, priority, direction, screen_x, screen_y;
};
constexpr Layout us{0xc02d29, 0xc0b67f, 0xc03a24, 0xc09321, 0x97f5, 0,
                    0x9c08,   0x2b6e,   0x9f6b,   0x9f71,   0x5d8c, 0x4dd6,
                    0x4f96,   0x5156,   0x99ce,   95,       0xa50,  0xa52,
                    0xa54,    0xa9e,    0x125a,   0xa4c,    0xa4e,  0xa48,
                    0xa38,    0xa4a,    0xa62,    0xada,    0x13fe, 0x148a,
                    0x1372,   0x12e6,   0xb8e,    0xc42,    0xcf6,  0xdaa,
                    0xe5e,    0x10f2,   0x103e,   0x2af6,   0xb16,  0xb52};
constexpr Layout jp{0xc02efe, 0xc0b652, 0xc03c74, 0xc09300, 0x9aa9, 3,
                    0x9eb3,   0x2f6c,   0xa16d,   0xa173,   0x6112, 0x515c,
                    0x531c,   0x54dc,   0x9c7f,   94,       0xa46,  0xa48,
                    0xa4a,    0xa94,    0x1250,   0xa42,    0xa44,  0xa3e,
                    0xa2e,    0xa40,    0xa58,    0xad0,    0x13f4, 0x1480,
                    0x1368,   0x12dc,   0xb84,    0xc38,    0xcec,  0xda0,
                    0xe54,    0x10e8,   0x1034,   0x2ef4,   0xb0c,  0xb48};
struct Oracle {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  std::array<std::uint8_t, 512> saved_game;
  explicit Oracle(const eb::GameAssets &a)
      : l(a.version == eb::GameVersion::JP ? jp : us),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  unsigned game(unsigned offset) const {
    return l.game + offset - (offset >= 60 ? l.displacement : 0);
  }
  unsigned character(unsigned i, unsigned offset) const {
    return l.characters + i * l.stride + offset - (l.displacement ? 1 : 0);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  unsigned get(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void seed(const bootstrap_test::Fixture &f) {
    bus->work_ram.fill(0);
    bus->work_ram[0xd] = 0x80;
    for (unsigned i = 0; i < saved_game.size(); ++i)
      bus->work_ram[l.game + i] = (i * 17 + 0x39) & 255;
    for (auto [offset, value] :
         std::initializer_list<std::pair<unsigned, unsigned>>{
             {71, f.formation.first_guest.hp},
             {73, f.formation.second_guest.hp},
             {128, f.control.x_fraction},
             {132, f.control.y_fraction},
             {136, f.trail.next_write},
             {140, f.control.trodden_surface_flags},
             {148, f.formation.current_leader_role},
             {176, f.control.automatic_mode},
             {178, f.control.automatic_ticks},
             {180, f.control.automatic_restore_style}})
      put(game(offset), value);
    bus->work_ram[game(69)] = f.formation.first_guest.member;
    bus->work_ram[game(70)] = f.formation.second_guest.member;
    bus->work_ram[game(75)] = f.party.party_status;
    bus->work_ram[game(174)] = f.party.party_count;
    bus->work_ram[game(175)] = f.party.controlled_count;
    for (unsigned i = 0; i < 6; ++i) {
      bus->work_ram[game(122) + i] = f.party.party_order[i];
      bus->work_ram[game(150) + i] = f.party.display_order[i];
      bus->work_ram[game(156) + i] = f.party.controlled_order[i];
      put(game(162) + i * 2, f.formation.roles[i]);
      put(l.hp + i * 2, f.formation.hp_alert_shown[i]);
      put(character(i, 61), f.formation.trail_cursors[i]);
    }
    std::copy(f.flags.begin(), f.flags.end(), bus->work_ram.begin() + l.flags);
    for (unsigned role = 0; role < 30; ++role)
      put(l.shape + role * 2, 0x1000 + role);
    put(l.ghost, 23);
    put(l.pajamas, f.following.pajamas);
    for (unsigned i = 0; i < 256; ++i) {
      const auto &p = f.trail.points[i];
      const std::array<unsigned, 6> words{
          p.x, p.y, p.surface_flags, p.walking_style, p.direction, p.reserved};
      for (unsigned j = 0; j < 6; ++j)
        put(l.trail + i * 12 + j * 2, words[j]);
    }
    // The actual scene reset has made the original free role/task lists.
    put(l.first, 0xffff);
    put(l.free_actor, 0);
    put(l.free_task, 0);
    for (unsigned role = 0; role < 30; ++role) {
      put(l.next_actor + role * 2, role == 29 ? 0xffff : (role + 1) * 2);
      put(l.script + role * 2, 0xffff);
    }
    for (unsigned task = 0; task < 70; ++task)
      put(l.next_task + task * 2, task == 69 ? 0xffff : (task + 1) * 2);
    put(l.new_height, f.prepared.height);
    put(l.new_priority, f.prepared.priority);
    for (unsigned i = 0; i < 8; ++i)
      put(l.new_vars + i * 2, f.prepared.variables[i]);
    std::copy_n(bus->work_ram.begin() + l.game, saved_game.size(),
                saved_game.begin());
  }
  void setup() {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.accumulator = 0;
    cpu.x_index = 0;
    cpu.y_index = 0;
  }
  void run_to(unsigned stop) {
    for (unsigned i = 0; i < 100000; ++i) {
      if (cpu.program_counter == stop && cpu.stack_pointer == 0x1fff)
        return;
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Original bootstrap did not reach boundary: " +
                             cpu.describe_registers());
  }
  void create(const eb::GameAssets &a) {
    // Locate and execute the actual producer, not a copied/trampoline recipe.
    // The prefix is immediately after the caller's reset/setup operations.
    const std::vector<std::uint8_t> marker{0xa9,
                                           23,
                                           0,
                                           0x8d,
                                           std::uint8_t(l.minimum),
                                           std::uint8_t(l.minimum >> 8),
                                           0xa9,
                                           24,
                                           0,
                                           0x8d,
                                           std::uint8_t(l.maximum),
                                           std::uint8_t(l.maximum >> 8),
                                           0xa0,
                                           0,
                                           0,
                                           0xbb,
                                           0xa9,
                                           1,
                                           0,
                                           0x22,
                                           std::uint8_t(l.init),
                                           std::uint8_t(l.init >> 8),
                                           std::uint8_t(l.init >> 16),
                                           0x22,
                                           std::uint8_t(l.initializer),
                                           std::uint8_t(l.initializer >> 8),
                                           std::uint8_t(l.initializer >> 16),
                                           0x22,
                                           std::uint8_t(l.rebuild),
                                           std::uint8_t(l.rebuild >> 8),
                                           std::uint8_t(l.rebuild >> 16)};
    const unsigned begin = l.boot - 0xc00000;
    const auto found =
        std::search(a.image.begin() + begin, a.image.begin() + begin + 0x180,
                    marker.begin(), marker.end());
    check(found != a.image.begin() + begin + 0x180,
          "Actual boot producer no longer matches source "
          "controller/initializer calls");
    setup();
    cpu.program_counter = 0xc00000 + std::distance(a.image.begin(), found);
    run_to(cpu.program_counter + marker.size() - 4);
    check(get(l.script + 23 * 2) == 1 && get(l.first) == 23 * 2,
          "Source boot failed to allocate actual controller");
  }
  void initialize() {
    setup();
    cpu.program_counter = 0xc0ff00;
    cpu.execute_instruction<0x22>(l.initializer, 4);
    run_to(0xc0ff04);
  }
  void compare(const bootstrap_test::Fixture &f, ActorId id) const {
    const auto &actor = f.actors.actor(id);
    check(actor.script_only() && !actor.has_appearance(),
          "Native controller acquired graphical allocation");
    check(actor.appearance_context.shape == get(l.shape + 23 * 2) &&
              !f.maintenance.possession_actor && get(l.ghost) == 0xffff &&
              f.following.pajamas == get(l.pajamas),
          "Initializer actor/ghost/pajamas differ");
    for (unsigned role = 0; role < 30; ++role)
      if (role != 23)
        check(get(l.shape + role * 2) == 0x1000 + role,
              "Source initializer changed another actor shape");
    for (auto [offset, value] :
         std::initializer_list<std::pair<unsigned, unsigned>>{
             {71, f.formation.first_guest.hp},
             {73, f.formation.second_guest.hp},
             {128, f.control.x_fraction},
             {132, f.control.y_fraction},
             {136, f.trail.next_write},
             {140, f.control.trodden_surface_flags},
             {148, f.formation.current_leader_role},
             {176, f.control.automatic_mode},
             {178, f.control.automatic_ticks},
             {180, f.control.automatic_restore_style}})
      check(get(game(offset)) == value,
            "Native initialized or retained game word differs");
    check(bus->work_ram[game(75)] == f.party.party_status &&
              bus->work_ram[game(174)] == f.party.party_count &&
              bus->work_ram[game(175)] == f.party.controlled_count,
          "Native initialized game byte differs");
    for (unsigned i = 0; i < 6; ++i) {
      check(bus->work_ram[game(122) + i] == f.party.party_order[i] &&
                bus->work_ram[game(150) + i] == f.party.display_order[i] &&
                bus->work_ram[game(156) + i] == f.party.controlled_order[i] &&
                get(game(162) + i * 2) == f.formation.roles[i] &&
                get(l.hp + i * 2) == f.formation.hp_alert_shown[i] &&
                get(character(i, 61)) == f.formation.trail_cursors[i],
            "Native party reset/retained fields differ");
    }
    for (unsigned axis = 0; axis < 2; ++axis)
      for (unsigned style = 0; style < 14; ++style)
        for (unsigned direction = 0; direction < 8; ++direction) {
          const unsigned at =
              (axis ? l.speed_y : l.speed_x) + style * 32 + direction * 4;
          check(
              f.walking.raw_delta(axis, style, CollisionDirection(direction)) ==
                  (get(at) | std::uint32_t(get(at + 2)) << 16),
              "Immutable native movement expansion differs from full "
              "VELOCITY_STORE");
        }
    const auto tasks = actor.tasks();
    const unsigned task = get(l.script_index + 46);
    check(tasks.size() == 1 && task < 140 &&
              tasks[0].cursor + 0xc00000 ==
                  (get(l.cursor + task) | get(l.bank + task) << 16) &&
              !get(l.sleep + task) && !get(l.stack + task),
          "Actual controller script task did not start at the imported EVENT1 "
          "entry");
    for (unsigned axis = 0; axis < 3; ++axis) {
      check(actor.action().position[axis] ==
                (get(l.position + axis * 60 + 46) << 16 |
                 get(l.fraction + axis * 60 + 46)),
            "Actual controller creation position/fraction differs");
      check(actor.action().velocity[axis] ==
                (get(l.velocity + axis * 60 + 46) << 16 |
                 get(l.velocity_fraction + axis * 60 + 46)),
            "Actual controller creation velocity differs");
    }
    for (unsigned i = 0; i < 8; ++i)
      check(actor.action().variables[i] == get(l.variables + i * 60 + 46),
            "Controller prepared variable differs");
    check(actor.action().priority == get(l.priority + 46) &&
              actor.action().animation == get(l.animation + 46) &&
              actor.behavior.direction == get(l.direction + 46) &&
              std::uint16_t(actor.behavior.projected_x) ==
                  get(l.screen_x + 46) &&
              std::uint16_t(actor.behavior.projected_y) == get(l.screen_y + 46),
          "Controller priority/animation/projection differs");
    check(f.actors.ticks() == 0 && f.actors.actor_for_role(23) == id &&
              !f.actors.actor_for_role(24),
          "Initializer advanced actors or fabricated current leader identity");
    for (unsigned i = 0; i < 128; ++i)
      check(bus->work_ram[l.flags + i] == f.flags[i],
            "Initializer changed story flags");
    for (unsigned i = 0; i < 256; ++i) {
      const auto &p = f.trail.points[i];
      const std::array<unsigned, 6> words{
          p.x, p.y, p.surface_flags, p.walking_style, p.direction, p.reserved};
      for (unsigned j = 0; j < 6; ++j)
        check(get(l.trail + i * 12 + j * 2) == words[j],
              "Initializer changed retained follower trail points");
    }
    for (unsigned i = 0; i < saved_game.size(); ++i) {
      const unsigned at = l.game + i;
      bool reset = at == game(75) || (at >= game(136) && at < game(138)) ||
                   (at >= game(148) && at < game(156)) ||
                   (at >= game(174) && at < game(182));
      if (!reset)
        check(
            bus->work_ram[at] == saved_game[i],
            "Original initializer unexpectedly changed a preserved game byte");
    }
  }
};
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::invalid_argument("Provide US and/or JP content packs");
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      const auto sprites = std::make_shared<SpriteResources>(
          assets.image, sprite_catalog_layout(assets.version));
      const auto scripts = import_action_scripts(assets.image, assets.version);
      const auto before = checks;
      for (unsigned priority : {0u, 1u, 0xabcdu, 0xffffu})
        for (bool pajamas : {false, true}) {
          context =
              std::string(assets.version == eb::GameVersion::JP ? "JP" : "US") +
              " pajamas=" + std::to_string(pajamas);
          bootstrap_test::Fixture f(assets.image, assets.version, sprites,
                                    scripts, pajamas);
          f.prepared.priority = priority;
          Oracle original(assets);
          original.seed(f);
          original.create(assets);
          const auto id =
              f.bootstrap.create_controller_and_initialize(f.prepared);
          original.compare(f, id);
          // Re-entry consumes newly supplied flags and leaves the same actual
          // actor.
          const unsigned bit = f.data.pajamas_flag() - 1;
          f.flags[bit / 8] ^= 1u << (bit % 8);
          original.bus->work_ram[original.l.flags + bit / 8] = f.flags[bit / 8];
          original.initialize();
          f.bootstrap.initialize();
          original.compare(f, id);
        }
      std::cout << "PASS native bootstrap "
                << (assets.version == eb::GameVersion::JP ? "JP" : "US") << ": "
                << checks - before
                << " checks; actual boot fragment + complete initializer\n";
    }
    std::cout << "Source instructions: " << instructions << '\n';
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
