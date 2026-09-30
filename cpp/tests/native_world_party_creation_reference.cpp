// Executes original C0369B/C03A24, including CREATE_ENTITY, task allocation,
// insertion, free-role ordering, guest refresh and UPDATE_PARTY. Only the two
// graphics-pool allocators and the declared movement/window services are
// intercepted. None of those implementations is claimed by this owner.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_party_creation.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
std::string context;
void require(bool okay, const char *message) {
  if (!okay)
    throw std::runtime_error(std::string(message) + ": " + context);
}
struct Layout {
  unsigned insert, rebuild, movement, palette, graphics_allocator,
      map_allocator;
  unsigned game, characters, stride, displacement, first, free_actor, free_task,
      next_actor, next_task;
  unsigned script, script_index, cursor, bank, sleep, stack, x, fraction,
      velocity, velocity_fraction;
  unsigned variables, animation, priority, screen_x, screen_y, direction,
      sprite;
  unsigned new_height, new_variables, prepared_x, prepared_y,
      prepared_direction, trail, footsteps, override_sound;
};
constexpr Layout us{
    0xc0369b, 0xc03a24, 0xc02c3e, 0xc47f87, 0xc01c52, 0xc01a9d, 0x97f5, 0x99ce,
    95,       0,        0xa50,    0xa52,    0xa54,    0xa9e,    0x125a, 0xa62,
    0xada,    0x13fe,   0x148a,   0x1372,   0x12e6,   0xb8e,    0xc42,  0xcf6,
    0xdaa,    0xe5e,    0x10f2,   0x103e,   0xb16,    0xb52,    0x2af6, 0x2cd6,
    0xa48,    0xa38,    0x9e2d,   0x9e2f,   0x9e31,   0x5156,   0x289a, 0x289c};
constexpr Layout jp{
    0xc0389e, 0xc03c74, 0xc02e13, 0xc45c1a, 0xc01c68, 0xc01ab3, 0x9aa9, 0x9c7f,
    94,       3,        0xa46,    0xa48,    0xa4a,    0xa94,    0x1250, 0xa58,
    0xad0,    0x13f4,   0x1480,   0x1368,   0x12dc,   0xb84,    0xc38,  0xcec,
    0xda0,    0xe54,    0x10e8,   0x1034,   0xb0c,    0xb48,    0x2ef4, 0x30d4,
    0xa3e,    0xa2e,    0xa033,   0xa035,   0xa037,   0x54dc,   0x2c98, 0x2c9a};
struct Resources {
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  WorldPartyData data;
  explicit Resources(const eb::GameAssets &a)
      : sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(import_action_scripts(a.image, a.version)),
        data(a.image, a.version) {}
};
struct Fixture {
  party::State party;
  ActorWorld actors;
  WorldPartyState formation;
  WorldParty updater;
  PreparedActorState prepared;
  PartyTrail trail;
  std::uint16_t style{};
  WorldPartyCreation creation;
  Fixture(Resources &r, eb::GameVersion version, unsigned seed)
      : party(version), actors(r.sprites, r.scripts, version),
        updater(party, actors, r.data, formation),
        creation(party, actors, r.data, formation, updater, prepared, trail,
                 style) {
    const std::array<unsigned, 3> heads{0, 1, 255};
    trail.next_write = heads[seed % 3];
    for (unsigned i = 0; i < 256; ++i)
      trail.points[i] = {std::uint16_t(0x7f31 + i * 137),
                         std::uint16_t(0xff71 + i * 193),
                         std::uint16_t(i * 37),
                         std::uint16_t(i % 8),
                         std::uint16_t(i % 8),
                         std::uint16_t(0xa500 + i)};
    prepared = {
        0x1234, 0x5678, 0xfffb, 7, {100, 101, 102, 103, 104, 105, 106, 107}, 0};
    for (unsigned i = 0; i < 6; ++i) {
      formation.trail_cursors[i] = (seed * 37 + i * 19) & 255;
      party.character(i + 1).afflictions[0] = (seed + i) % 4;
    }
    formation.current_leader_role = 0x2468;
    formation.first_guest = {17, 1337};
    formation.second_guest = {9, 2112};
    actors.scene().camera_x = 0xfff1;
    actors.scene().camera_y = 0x8123;
    actors.appearance_scene().footstep_kind = 9;
    actors.appearance_scene().footstep_override = 4;
    style = seed % 8;
    // Real retired actors leave the source role variables available to the
    // insertion predicate, with no live placeholder actor or caller reply.
    for (unsigned role = 0; role < 30; ++role) {
      PreparedActorState previous;
      previous.variables[1] = (seed + role * 3) % 6;
      const auto id = actors.create_authored_script(1, previous, {role, role + 1});
      require(bool(id), "Retained-role fixture could not create its actor");
      actors.erase(*id);
    }
    actors.order_free_authored_roles();
  }
};
struct Oracle {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned allocations{};
  explicit Oracle(const eb::GameAssets &a)
      : l(a.version == eb::GameVersion::JP ? jp : us),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  unsigned game(unsigned at) const { return l.game + at - l.displacement; }
  unsigned character(unsigned i, unsigned at) const {
    return l.characters + i * l.stride + at - (l.displacement ? 1 : 0);
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void seed(const Fixture &f, unsigned seed) {
    bus->work_ram.fill(0);
    bus->work_ram[0x0d] = 0x80;
    allocations = 0;
    put(l.first, 0xffff);
    put(l.free_actor, 0);
    put(l.free_task, 0);
    for (unsigned i = 0; i < 30; ++i) {
      put(l.script + i * 2, 0xffff);
      put(l.next_actor + i * 2, i == 29 ? 0xffff : (i + 1) * 2);
      put(l.variables + 60 + i * 2, f.actors.authored_variable(i, 1));
    }
    for (unsigned i = 0; i < 70; ++i)
      put(l.next_task + i * 2, i == 69 ? 0xffff : (i + 1) * 2);
    std::copy(f.party.party_order.begin(), f.party.party_order.end(),
              bus->work_ram.begin() + game(122));
    put(game(136), f.trail.next_write);
    put(game(148), f.formation.current_leader_role);
    put(game(146), f.style);
    bus->work_ram[game(69)] = f.formation.first_guest.member;
    bus->work_ram[game(70)] = f.formation.second_guest.member;
    put(game(71), f.formation.first_guest.hp);
    put(game(73), f.formation.second_guest.hp);
    for (unsigned i = 0; i < 6; ++i) {
      put(character(i, 61), f.formation.trail_cursors[i]);
      bus->work_ram[character(i, 14)] = f.party.character(i + 1).afflictions[0];
    }
    for (unsigned i = 0; i < 256; ++i) {
      const auto &p = f.trail.points[i];
      const unsigned values[]{
          p.x, p.y, p.surface_flags, p.walking_style, p.direction, p.reserved};
      for (unsigned j = 0; j < 6; ++j)
        put(l.trail + i * 12 + j * 2, values[j]);
    }
    put(l.new_height, f.prepared.height);
    for (unsigned i = 0; i < 8; ++i)
      put(l.new_variables + i * 2, f.prepared.variables[i]);
    put(l.prepared_x, f.prepared.x);
    put(l.prepared_y, f.prepared.y);
    put(l.prepared_direction, f.prepared.direction);
    put(0x31, f.actors.scene().camera_x);
    put(0x33, f.actors.scene().camera_y);
    put(l.footsteps, 18);
    put(l.override_sound, 8);
    put(0x24, 0x1234);
    put(0x26, 0xfedc);
  }
  void begin(bool rebuild, unsigned member) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = member;
    cpu.x_index = cpu.y_index = 0;
    cpu.execute_instruction<0x22>(rebuild ? l.rebuild : l.insert, 4);
  }
  unsigned boundary() {
    for (unsigned step = 0; step < 1000000; ++step) {
      if (cpu.program_counter == l.movement || cpu.program_counter == l.palette)
        return cpu.program_counter;
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return 0;
      if (cpu.program_counter == l.graphics_allocator ||
          cpu.program_counter == l.map_allocator) {
        ++allocations;
        cpu.accumulator = 0;
        cpu.execute_instruction<0x6b>(0, 1);
      } else
        cpu.step_instruction();
    }
    throw std::runtime_error("Party creation source did not return: " +
                             cpu.describe_registers());
  }
  void respond() { cpu.execute_instruction<0x6b>(0, 1); }
  bool insertion_comparison(unsigned member) const {
    const auto record = word(l.variables + 60 + member * 2);
    require(record < 6, "Fixture source insertion role mapping invalid");
    return bus->work_ram[character(record, 14)] == 1;
  }
  void compare(const Fixture &f, const Resources &r, bool final,
               bool rebuild) const {
    require(bus->work_ram[game(174)] == f.party.party_count &&
                bus->work_ram[game(175)] == f.party.controlled_count,
            "Party counts differ");
    require(std::equal(f.party.party_order.begin(), f.party.party_order.end(),
                       bus->work_ram.begin() + game(122)) &&
                std::equal(f.party.display_order.begin(),
                           f.party.display_order.end(),
                           bus->work_ram.begin() + game(150)) &&
                std::equal(f.party.controlled_order.begin(),
                           f.party.controlled_order.end(),
                           bus->work_ram.begin() + game(156)),
            "Membership/formation/character mapping differs");
    require(word(game(136)) == f.trail.next_write && word(game(146)) == f.style,
            "Trail head or style changed");
    require(bus->work_ram[game(69)] == f.formation.first_guest.member &&
                bus->work_ram[game(70)] == f.formation.second_guest.member &&
                word(game(71)) == f.formation.first_guest.hp &&
                word(game(73)) == f.formation.second_guest.hp,
            "Guest identity/HP differs");
    for (unsigned i = 0; i < 6; ++i) {
      require(word(game(162) + i * 2) == f.formation.roles[i],
              "Formation role differs");
      require(word(character(i, 61)) == f.formation.trail_cursors[i],
              "Positional trail cursor differs");
      require(bus->work_ram[character(i, 14)] ==
                  f.party.character(i + 1).afflictions[0],
              "Character affliction changed");
    }
    require(word(l.prepared_x) == f.prepared.x &&
                word(l.prepared_y) == f.prepared.y &&
                word(l.prepared_direction) == f.prepared.direction &&
                word(l.new_height) == f.prepared.height,
            "Prepared coordinate/facing phase differs");
    for (unsigned i = 0; i < 8; ++i)
      require(word(l.new_variables + i * 2) == f.prepared.variables[i],
              "Prepared variable differs");
    auto source_role = word(l.first);
    for (const auto id : f.actors.actors()) {
      const auto &actor = f.actors.actor(id);
      const auto role = *actor.authored_role();
      const auto index = role * 2;
      require(source_role == index, "Active actor traversal order differs");
      source_role = word(l.next_actor + index);
      require(word(l.sprite + index) == actor.appearance.sprite(),
              "Created sprite differs");
      const auto script = word(l.script + index),
                 task = word(l.script_index + index);
      const auto states = actor.tasks();
      require(states.size() == 1 && task < 140, "Created task shape differs");
      const auto entry = r.scripts->entry(script) + 0xc00000;
      require(word(l.cursor + task) == (entry & 0xffff) &&
                  word(l.bank + task) == entry >> 16 &&
                  states[0].cursor == r.scripts->entry(script) &&
                  !word(l.sleep + task) && !word(l.stack + task) &&
                  !states[0].sleep_frames && !states[0].stack_depth,
              "Initial script/task continuation differs");
      for (unsigned axis = 0; axis < 3; ++axis) {
        require(actor.action().position[axis] ==
                    (word(l.x + axis * 60 + index) << 16 |
                     word(l.fraction + axis * 60 + index)),
                "Actor position/fraction differs");
        require(actor.action().velocity[axis] ==
                    (word(l.velocity + axis * 60 + index) << 16 |
                     word(l.velocity_fraction + axis * 60 + index)),
                "Actor velocity differs");
      }
      for (unsigned i = 0; i < 8; ++i)
        require(actor.action().variables[i] ==
                    word(l.variables + i * 60 + index),
                "Actor variable differs");
      require(actor.action().animation == word(l.animation + index) &&
                  actor.action().priority == word(l.priority + index) &&
                  actor.behavior.direction == word(l.direction + index),
              "Actor animation/priority/direction differs");
      require(std::uint16_t(actor.behavior.projected_x) ==
                      word(l.screen_x + index) &&
                  std::uint16_t(actor.behavior.projected_y) ==
                      word(l.screen_y + index),
              "Initial actor projection differs");
    }
    require(source_role == 0xffff && !f.actors.ticks(),
            "Extra source actor or native synthetic tick");
    require(word(game(148)) == f.formation.current_leader_role,
            "Source current leader selector differs");
    for (unsigned i = 0; i < 256; ++i) {
      const auto &p = f.trail.points[i];
      const unsigned values[]{
          p.x, p.y, p.surface_flags, p.walking_style, p.direction, p.reserved};
      for (unsigned j = 0; j < 6; ++j)
        require(word(l.trail + i * 12 + j * 2) == values[j],
                "Party creation changed trail content");
    }
    require(word(0x24) == 0x1234 && word(0x26) == 0xfedc,
            "Party creation consumed source RNG");
    require(
        word(l.footsteps) == f.actors.appearance_scene().footstep_kind * 2 &&
            word(l.override_sound) ==
                (f.actors.appearance_scene().footstep_override.value_or(0) * 2),
        "Footstep selection phase differs");
    if (final && rebuild)
      require(!word(l.displacement ? 0x6104 : 0x5d7e),
              "Source rebuild did not clear its busy marker");
  }
};
struct Counts {
  unsigned cases{}, actors{}, boundaries{}, comparisons{}, nested{},
      invalid_styles{};
};
void run(Resources &r, Oracle &o, eb::GameVersion version, unsigned seed,
         std::array<std::uint8_t, 6> members, bool rebuild, unsigned member,
         Counts &counts) {
  Fixture f(r, version, seed);
  f.party.party_order = members;
  o.seed(f, seed);
  o.begin(rebuild, member);
  auto operation =
      rebuild ? f.creation.begin_rebuild() : f.creation.begin_insert(member);
  unsigned boundary = o.boundary();
  for (unsigned steps = 0; steps < 100; ++steps) {
    const bool complete = operation->advance();
    if (complete) {
      require(!boundary, "Native creation completed before source service");
      o.compare(f, r, true, rebuild);
      require(o.allocations == operation->created().size() * 2,
              "Source CREATE allocation coverage missing");
      counts.actors += operation->created().size();
      ++counts.cases;
      return;
    }
    const auto service = *operation->service();
    require(service.kind != WorldPartyCreationServiceKind::CompareInsertionMember,
            "Insertion requested an external retained-role comparison");
    require(boundary ==
                (service.kind ==
                         WorldPartyCreationServiceKind::RefreshMovementPolicy
                     ? o.l.movement
                     : o.l.palette),
            "Source/native ordered service differs");
    o.compare(f, r, false, rebuild);
    ++counts.boundaries;
    require(!operation->advance(), "Pending creation service advanced twice");
    // A real caller may execute nested frames during these services. Apply
    // identical external mutations at this boundary, then prove resumption
    // retains them. We do not pretend the services themselves are ported.
    if ((seed % 3) == 1 &&
        service.kind == WorldPartyCreationServiceKind::RefreshMovementPolicy) {
      const auto made = operation->created().back();
      f.actors.actor(made.actor).behavior.direction = 6;
      o.put(o.l.direction + made.role * 2, 6);
      f.prepared.variables[7] ^= 0x55aa;
      o.put(o.l.new_variables + 14, f.prepared.variables[7]);
      ++counts.nested;
    }
    operation->respond();
    o.respond();
    boundary = o.boundary();
  }
  throw std::runtime_error("Native party creation repeated service traversal");
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::runtime_error(
          "native_world_party_creation_reference pack.ebpak ...");
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      Resources r(assets);
      Oracle o(assets);
      Counts counts;
      for (unsigned member = 1; member <= 17; ++member)
        for (unsigned seed = 0; seed < 24; ++seed) {
          context = assets.title + " insert=" + std::to_string(member) +
                    " seed=" + std::to_string(seed);
          if (seed % 8 == 3 && r.data.initial(member).small_sprite == 0xffff) {
            Fixture f(r, assets.version, seed);
            auto op = f.creation.begin_insert(member);
            bool rejected = false;
            try {
              op->advance();
            } catch (const std::invalid_argument &) {
              rejected = true;
            }
            require(rejected && f.creation.failed() && !f.actors.size() &&
                        !f.party.party_count,
                    "Unauthored guest/small-sprite combination was not "
                    "rejected before mutation");
            ++counts.invalid_styles;
            continue;
          }
          run(r, o, assets.version, seed, {std::uint8_t(member)}, false, member,
              counts);
        }
      std::array<std::uint8_t, 6> members{1, 2, 3, 4, 16, 17};
      unsigned seed{};
      do {
        context = assets.title + " rebuild permutation=" + std::to_string(seed);
        // Membership's chosen/guest prefix is a source invariant. Rebuild
        // permutations exercise the four chosen IDs and both guest orders.
        if (std::all_of(members.begin(), members.begin() + 4,
                        [](auto n) { return n < 5; }))
          run(r, o, assets.version, seed, members, true, 0, counts);
        ++seed;
      } while (std::next_permutation(members.begin(), members.end()));
      for (unsigned size = 0; size <= 6; ++size)
        for (unsigned seed = 0; seed < 8; ++seed) {
          std::array<std::uint8_t, 6> members{1, 2, 3, 4, 16, 17};
          std::fill(members.begin() + size, members.end(), 0);
          context = assets.title + " partial rebuild=" + std::to_string(size) +
                    " seed=" + std::to_string(seed);
          run(r, o, assets.version, seed, members, true, 0, counts);
        }
      // Repeated authored membership exercises CREATE's exact preferred+1
      // fallback and stable equal-key formation ordering. It is not a search
      // through arbitrarily many free roles.
      for (const unsigned member : {1u, 2u, 3u, 5u, 16u, 17u})
        for (unsigned seed = 0; seed < 8; ++seed) {
          if (seed % 8 == 3 && r.data.initial(member).small_sprite == 0xffff)
            continue;
          context = assets.title +
                    " duplicate member=" + std::to_string(member) +
                    " seed=" + std::to_string(seed);
          run(r, o, assets.version, seed,
              {std::uint8_t(member), std::uint8_t(member)}, true, 0, counts);
        }
      require(counts.nested && counts.actors > 500,
              "Native creation reference coverage is empty");
      std::cout << "PASS " << assets.title << ": " << counts.cases
                << " original insertion/rebuild operations, " << counts.actors
                << " actual CREATE/task lifecycles, " << counts.boundaries
                << " ordered service boundaries with native retained-role comparisons, " << counts.nested
                << " nested-service mutations, " << counts.invalid_styles
                << " rejected unauthored small-guest combinations; no "
                   "RNG/tick/trail mutation\n";
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << ": " << context << '\n';
    return 1;
  }
}
