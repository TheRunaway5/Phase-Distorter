// Executes original C032EC and UPDATE_PARTY. Movement policy and window palette
// are explicit external boundaries: compare at each actual source call, then
// return that call without pretending to implement its separate behavior.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_party.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const std::string &message) {
  if (!ok)
    throw std::runtime_error(message);
}
struct Layout {
  unsigned refresh, update, movement, palette, game, characters, stride, var1,
      var5;
  unsigned displacement;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {0xc032ec, 0xc034d6, 0xc02c3e, 0xc47f87, 0x97f5,
            0x99ce,   95,       0xe9a,    0xf8a,    0};
  return {0xc034c7, 0xc036c7, 0xc02e13, 0xc45c1a, 0x9aa9,
          0x9c7f,   94,       0xe90,    0xf80,    3};
}
struct Oracle {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  explicit Oracle(const eb::GameAssets &assets)
      : l(layout(assets.version)),
        bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram[0x0d] = 0x80;
  }
  unsigned game(unsigned us_offset) const {
    return l.game + us_offset - l.displacement;
  }
  unsigned character(unsigned index, unsigned us_offset) const {
    return l.characters + index * l.stride + us_offset -
           (l.displacement ? 1 : 0);
  }
  unsigned word(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  void begin(unsigned entry) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = cpu.x_index = cpu.y_index = 0;
    cpu.execute_instruction<0x22>(entry, 4);
  }
  unsigned boundary() {
    for (unsigned n = 0; n < 200000; ++n) {
      if (cpu.program_counter == l.movement || cpu.program_counter == l.palette)
        return cpu.program_counter;
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return 0;
      cpu.step_instruction();
    }
    throw std::runtime_error("World party original helper did not return: " +
                             cpu.describe_registers());
  }
  void respond() { cpu.execute_instruction<0x6b>(0, 1); }
};
struct Resources {
  native_sprite_test::Fixture graphics;
  std::shared_ptr<SpriteResources> sprites =
      std::make_shared<SpriteResources>(graphics.bytes, graphics.layout);
  std::shared_ptr<const ActionScriptData> scripts =
      std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09}, 0,
                                         std::vector<std::uint32_t>{0});
};
struct Fixture {
  party::State party;
  ActorWorld actors;
  WorldPartyState formation;
  WorldParty world;
  Fixture(Resources &resources, const WorldPartyData &data,
          eb::GameVersion version)
      : party(version), actors(resources.sprites, resources.scripts, version),
        world(party, actors, data, formation) {}
};
void seed(Oracle &o, const Fixture &f) {
  std::copy(f.party.party_order.begin(), f.party.party_order.end(),
            o.bus->work_ram.begin() + o.game(122));
  std::copy(f.party.display_order.begin(), f.party.display_order.end(),
            o.bus->work_ram.begin() + o.game(150));
  std::copy(f.party.controlled_order.begin(), f.party.controlled_order.end(),
            o.bus->work_ram.begin() + o.game(156));
  o.bus->work_ram[o.game(174)] = f.party.party_count;
  o.bus->work_ram[o.game(175)] = f.party.controlled_count;
  o.put(o.game(148), f.formation.current_leader_role);
  o.bus->work_ram[o.game(69)] = f.formation.first_guest.member;
  o.bus->work_ram[o.game(70)] = f.formation.second_guest.member;
  o.put(o.game(71), f.formation.first_guest.hp);
  o.put(o.game(73), f.formation.second_guest.hp);
  for (unsigned i = 0; i < 6; ++i) {
    o.put(o.game(162) + i * 2, f.formation.roles[i]);
    o.put(o.character(i, 61), f.formation.trail_cursors[i]);
    o.bus->work_ram[o.character(i, 14)] =
        f.party.character(i + 1).afflictions[0];
  }
  for (auto id : f.actors.actors()) {
    const auto &actor = f.actors.actor(id);
    const auto role = *actor.authored_role();
    o.put(o.l.var1 + role * 2, actor.action().variables[1]);
    o.put(o.l.var5 + role * 2, actor.action().variables[5]);
  }
}
void compare_guests(const Oracle &o, const Fixture &f,
                    const std::string &context) {
  require(o.bus->work_ram[o.game(175)] == f.party.controlled_count,
          context + ": controlled count differs");
  require(o.bus->work_ram[o.game(69)] == f.formation.first_guest.member &&
              o.bus->work_ram[o.game(70)] == f.formation.second_guest.member &&
              o.word(o.game(71)) == f.formation.first_guest.hp &&
              o.word(o.game(73)) == f.formation.second_guest.hp,
          context + ": guest identity/HP differs");
  require(std::equal(f.party.party_order.begin(), f.party.party_order.end(),
                     o.bus->work_ram.begin() + o.game(122)),
          context + ": source membership differs");
}
void compare_update(const Oracle &o, const Fixture &f,
                    const std::string &context) {
  compare_guests(o, f, context);
  require(o.bus->work_ram[o.game(174)] == f.party.party_count,
          context + ": formation count differs");
  require(std::equal(f.party.display_order.begin(), f.party.display_order.end(),
                     o.bus->work_ram.begin() + o.game(150)) &&
              std::equal(f.party.controlled_order.begin(),
                         f.party.controlled_order.end(),
                         o.bus->work_ram.begin() + o.game(156)),
          context + ": sorted member/control order differs");
  for (unsigned i = 0; i < 6; ++i) {
    require(o.word(o.game(162) + i * 2) == f.formation.roles[i],
            context + ": formation actor role differs");
    require(o.word(o.character(i, 61)) == f.formation.trail_cursors[i],
            context + ": character trail cursor differs");
    require(o.bus->work_ram[o.character(i, 14)] ==
                f.party.character(i + 1).afflictions[0],
            context + ": afflictions mutated");
  }
  for (auto id : f.actors.actors()) {
    const auto &actor = f.actors.actor(id);
    const auto role = *actor.authored_role();
    require(o.word(o.l.var1 + role * 2) == actor.action().variables[1] &&
                o.word(o.l.var5 + role * 2) == actor.action().variables[5],
            context + ": actor formation variables differ");
  }
  const auto leader = f.world.leader();
  require(o.word(o.game(148)) == f.formation.current_leader_role &&
              (f.party.party_count ? leader.has_value() : !leader.has_value()),
          context + ": current leading actor differs");
}
std::uint64_t guests(Resources &resources, const WorldPartyData &data,
                     Oracle &oracle, eb::GameVersion version) {
  Fixture f(resources, data, version);
  std::uint64_t calls{};
  std::vector<unsigned> members{0};
  for (unsigned id = 5; id <= 17; ++id)
    members.push_back(id);
  for (unsigned count = 0; count <= 4; ++count)
    for (auto first : members)
      for (auto second : members) {
        if (!first && second)
          continue;
        for (unsigned previous = 0; previous < 6; ++previous) {
          f.party.party_order.fill(0);
          for (unsigned i = 0; i < count; ++i)
            f.party.party_order[i] = i + 1;
          f.party.party_order[count] = first;
          f.party.party_order[count + 1] = second;
          f.party.controlled_count = 0xa5;
          const std::array<std::array<unsigned, 2>, 6> old{{{first, second},
                                                            {second, first},
                                                            {0, 0},
                                                            {5, 17},
                                                            {first, 5},
                                                            {17, second}}};
          f.formation.first_guest = {std::uint8_t(old[previous][0]), 0x1234};
          f.formation.second_guest = {std::uint8_t(old[previous][1]), 0xabcd};
          seed(oracle, f);
          oracle.begin(oracle.l.refresh);
          require(
              oracle.boundary() == 0,
              "Guest refresh unexpectedly called an external source service");
          f.world.refresh_guests();
          compare_guests(oracle, f, "guest case " + std::to_string(calls));
          ++calls;
        }
      }
  return calls;
}
std::uint64_t updates(Resources &resources, const WorldPartyData &data,
                      Oracle &oracle, eb::GameVersion version) {
  std::array<std::uint8_t, 6> order{1, 2, 3, 4, 5, 17};
  std::uint64_t calls{};
  std::vector<std::array<std::uint8_t, 6>> formations;
  do {
    formations.push_back(order);
  } while (std::next_permutation(order.begin(), order.end()));
  formations.push_back({1, 1, 5, 5, 2, 2});
  formations.push_back({17, 5, 17, 5, 1, 1});
  for (const auto &formation : formations) {
    const bool partial = formation == formations.front();
    // UPDATE_PARTY's count-1 sort bound underflows at zero. Empty rebuilds
    // legitimately skip this routine; classify its invalid direct call below.
    for (unsigned count = partial ? 1 : 6; count <= 6; ++count) {
      for (unsigned status = 0; status < 4; ++status) {
        Fixture f(resources, data, version);
        f.party.party_order = {1, 2, 3, 4, 5, 17};
        f.party.party_count = count;
        f.party.controlled_count = 4;
        f.party.display_order = formation;
        f.party.controlled_order = {3, 0, 5, 1, 4, 2};
        f.formation.roles = {27, 24, 29, 25, 28, 26};
        f.formation.trail_cursors = {0, 255, 1, 128, 73, 0xffff};
        f.formation.first_guest = {17, 0x4321};
        f.formation.second_guest = {5, 0xcafe};
        for (unsigned i = 0; i < 6; ++i)
          f.party.character(i + 1).afflictions[0] = (i + status) % 4;
        for (unsigned i = 0; i < count; ++i) {
          WorldActorSpec spec;
          spec.script = 0;
          spec.sprite = 0;
          spec.action.variables[1] = (i * 5 + 1) % 6;
          spec.action.variables[5] = 0xeeee;
          const auto role = f.formation.roles[i];
          require(
              f.actors
                  .create_authored(spec, {unsigned(role), unsigned(role) + 1})
                  .has_value(),
              "Could not create formation actor");
        }
        const auto active = f.actors.actors();
        seed(oracle, f);
        oracle.begin(oracle.l.update);
        auto operation = f.world.begin_update();
        require(!operation->advance() &&
                    operation->service() ==
                        WorldPartyService::RefreshMovementPolicy,
                "Native sort did not stop at movement-policy boundary");
        require(oracle.boundary() == oracle.l.movement,
                "Source sort did not stop at movement-policy boundary");
        compare_update(oracle, f, "movement boundary " + std::to_string(calls));
        require(!operation->advance(),
                "Pending movement service was acknowledged implicitly");
        compare_update(oracle, f,
                       "repeated movement boundary " + std::to_string(calls));
        require(f.actors.actors() == active && f.actors.ticks() == 0,
                "Formation update reordered active actors or advanced time");
        oracle.respond();
        operation->respond();
        require(!operation->advance() &&
                    operation->service() ==
                        WorldPartyService::RefreshWindowPalette,
                "Native update omitted its window-palette boundary");
        require(oracle.boundary() == oracle.l.palette,
                "Source update omitted its window-palette boundary");
        compare_update(oracle, f, "palette boundary " + std::to_string(calls));
        oracle.respond();
        operation->respond();
        require(operation->advance() && oracle.boundary() == 0,
                "Party update failed to return after explicit services");
        compare_update(oracle, f, "completed update " + std::to_string(calls));
        ++calls;
      }
    }
  }
  return calls;
}
void empty_source_boundary(Resources &resources, const WorldPartyData &data,
                           Oracle &oracle, eb::GameVersion version) {
  Fixture f(resources, data, version);
  f.party.party_count = 0;
  f.formation.roles[0] = 27;
  f.formation.current_leader_role = 0xabcd;
  seed(oracle, f);
  oracle.begin(oracle.l.update);
  // The complete original prologue skips empty-array initialization, then
  // count-1=FFFF branches into its first sort comparison. Stop before reading
  // uninitialized/out-of-array entries; this is not a completed source call.
  const auto invalid_sort = version == eb::GameVersion::US ? 0xc0357eu : 0xc0379du;
  bool reached = false;
  for (unsigned step = 0; step < 1000; ++step) {
    if (oracle.cpu.program_counter == invalid_sort) { reached = true; break; }
    require(oracle.cpu.program_counter != oracle.l.movement &&
                oracle.cpu.program_counter != oracle.l.palette &&
                oracle.cpu.program_counter != 0xc0ff04,
            "Empty source update unexpectedly completed its invalid sort");
    oracle.cpu.step_instruction();
  }
  require(reached && oracle.word(oracle.game(148)) == 0xabcd,
          "Empty source update did not expose count-underflow before publication");
  auto operation = f.world.begin_update();
  bool rejected = false;
  try { operation->advance(); } catch (const std::invalid_argument &) { rejected = true; }
  require(rejected && f.world.failed() && !operation->service() &&
              f.formation.current_leader_role == 0xabcd && f.formation.roles[0] == 27,
          "Native empty update did not reject the source-invalid domain intact");
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_world_party_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      WorldPartyData data(assets.image, assets.version);
      Resources resources;
      Oracle oracle(assets);
      const auto guest_cases = guests(resources, data, oracle, assets.version);
      const auto update_cases =
          updates(resources, data, oracle, assets.version);
      empty_source_boundary(resources, data, oracle, assets.version);
      std::cout
          << "PASS " << assets.title << ": " << guest_cases
          << " actual guest refreshes, " << update_cases
          << " actual formation sorts at movement/palette/return boundaries; "
             "one source-invalid empty sort classified and rejected\n";
    }
    return 0;
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
