// Whole original US/JP C216DB reference. Real ADD/REMOVE, CREATE_ENTITY,
// graphical/task allocators, deletion, UPDATE_PARTY, movement and palette run.
// Initial actors are prepared through actual regional rebuild and matching
// native WorldPartyCreation; no successful Teddy operation acknowledges a
// lifecycle service. No world frame, GPU or audio playback is claimed.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/story/teddy_party.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
std::string context;
void require(bool okay, const std::string &message) {
  if (!okay)
    throw std::runtime_error(message + ": " + context);
}
struct Counts {
  std::uint64_t cases{}, instructions{}, setup_instructions{}, created{},
      erased{}, updates{}, guest_refreshes{}, movement{}, palettes{}, noops{},
      leader_removals{}, snapshots{}, actor_words{}, metadata_words{},
      task_words{}, list_bytes{}, budget_polls{}, normal_guest_setups{},
      small_teddy_setups{}, occupied_frontiers{}, bicycle_frontiers{},
      receipts{}, receipt_lifecycles{}, no_room_receipts{};
} counts;
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
  const eb::GameAssets &assets;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::WindowResources> window_resources;
  std::shared_ptr<const dialogue::SubstitutionResources> items;
  std::shared_ptr<const npcs::InteractionResources> npcs;
  std::shared_ptr<const npcs::MapTextResources> map_text;
  std::shared_ptr<const dialogue::Program> program;
  WorldPartyData data;
  ActorCreationData creation_data;
  WorldMap map;
  WorldCollision collision;
  explicit Resources(const eb::GameAssets &a)
      : assets(a), sprites(std::make_shared<SpriteResources>(
                       a.image, sprite_catalog_layout(a.version))),
        scripts(import_action_scripts(a.image, a.version)),
        fonts(dialogue::FontResources::import(a.image, a.version)),
        window_resources(dialogue::WindowResources::import(a.image, a.version)),
        items(dialogue::SubstitutionResources::import(a.image, a.version)),
        npcs(npcs::InteractionResources::import(a.image, a.version)),
        map_text(npcs::MapTextResources::import(a.image, a.version)),
        program(std::make_shared<dialogue::Program>(
            a.version, std::vector<dialogue::ContentBlock>{{1, 0x1000, {2}}})),
        data(a.image, a.version),
        creation_data(import_actor_creation_data(a.image, a.version)),
        map(a.image, world_map_layout(a.version)),
        collision(a.image, world_collision_layout(a.version)) {}
};
struct Fixture {
  Resources &r;
  party::State party;
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  ActorWorld actors;
  WorldMapArea area;
  npcs::Interactions talk;
  WorldPartyState formation;
  WorldParty updater;
  PreparedActorState prepared;
  PartyTrail trail;
  std::uint16_t style{};
  WorldPartyCreation creation;
  party::MovementPolicyState movement;
  story::TickState clock;
  story::PartyFormation refresh;
  story::TeddyParty teddy;
  Fixture(Resources &resources, unsigned seed)
      : r(resources), party(r.assets.version), output(r.fonts, text),
        windows(r.window_resources, text, output),
        actors(r.sprites, r.scripts, r.assets.version),
        area(r.map.prepare(0, text.event_flags)),
        talk(r.npcs, r.map_text, r.program, windows, actors, r.collision, area),
        updater(party, actors, r.data, formation),
        creation(party, actors, r.data, formation, updater, prepared, trail,
                 style),
        refresh(updater, party, actors, r.data, formation, movement, talk,
                clock),
        teddy(party, actors, r.data, formation, updater, prepared, trail, style,
              refresh, r.items, talk, *r.sprites, r.creation_data) {
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
      party.character(i + 1).afflictions[1] = seed % 4;
    }
    formation.first_guest = {17, 1337};
    formation.second_guest = {9, 2112};
    actors.scene().camera_x = 0xfff1;
    actors.scene().camera_y = 0x8123;
    actors.appearance_scene().footstep_kind = 9;
    actors.appearance_scene().footstep_override = 4;
    style = seed % 2 ? 3 : 0;
    clock.flavor = std::uint8_t(1 + seed % 5);
    clock.disabled_transitions = seed % 2;
    movement = {0x9876, std::uint16_t(seed % 3 == 0 ? 0x1234 : 0), 0xabcd};
  }
  void setup_native() {
    for (unsigned role = 0; role < 30; ++role) {
      PreparedActorState historical;
      historical.variables[1] = (setup_seed + role * 3) % 6;
      const auto id = actors.create_authored_script(1, historical, {role, role + 1});
      require(bool(id), "Teddy setup failed to establish retained role input");
      actors.erase(*id);
    }
    actors.order_free_authored_roles();
    auto op = creation.begin_rebuild();
    for (unsigned n = 0; n < 100; ++n) {
      if (op->advance()) {
        for (auto id : actors.actors()) {
          const auto &actor = actors.actor(id);
          talk.attach(id, *actor.authored_role(),
                      actor_creation_metadata(*r.sprites, r.creation_data,
                                              actor.appearance.sprite()),
                      0xffff);
        }
        return;
      }
      const auto service = *op->service();
      if (service.kind ==
          WorldPartyCreationServiceKind::CompareInsertionMember) {
        const auto record = (setup_seed + service.existing_member * 3) % 6;
        op->respond_comparison(party.character(record + 1).afflictions[0] == 1);
      } else {
        auto tail = refresh.begin_tail(
            service.kind == WorldPartyCreationServiceKind::RefreshMovementPolicy
                ? WorldPartyService::RefreshMovementPolicy
                : WorldPartyService::RefreshWindowPalette);
        require(tail->advance() == dialogue::Progress::Finished,
                "Prepared non-bicycle setup suspended");
        tail.reset();
        op->respond();
      }
    }
    throw std::runtime_error("Prepared rebuild did not complete");
  }
  unsigned setup_seed{};
};
struct Oracle {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned allocations{}, creations{}, deletions{}, updates{}, refreshes{},
      movement_calls{}, palette_calls{}, frontier{}, teddy_calls{};
  std::vector<unsigned> call_order;
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
      // This is explicit reference input for the source's absent-role
      // comparison. It is never installed as a native ghost actor.
      put(l.variables + 60 + i * 2, (seed + i * 3) % 6);
    }
    for (unsigned i = 0; i < 70; ++i)
      put(l.next_task + i * 2, i == 69 ? 0xffff : (i + 1) * 2);
    std::copy(f.party.party_order.begin(), f.party.party_order.end(),
              bus->work_ram.begin() + game(122));
    put(game(136), f.trail.next_write);
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
    std::fill_n(bus->work_ram.begin() + (l.displacement ? 0x4a04 : 0x467e),
                0x380, 0xff);
    for (unsigned i = 0; i < 6; ++i) {
      put((l.displacement ? 0x514e : 0x4dc8) + i * 2,
          l.characters + i * l.stride);
      bus->work_ram[character(i, 15)] = f.party.character(i + 1).afflictions[1];
    }
    put(game(142), f.talk.state().walking_style);
    put(l.displacement ? 0x6126 : 0x5da0, f.movement.mushroomized);
    put(l.displacement ? 0x6122 : 0x5d9c, f.movement.timer);
    put(l.displacement ? 0x6124 : 0x5d9e, f.movement.modifier);
    put(l.displacement ? 0xb68a : 0xb4b6, f.clock.disabled_transitions);
    bus->work_ram[game(0x1d8)] = f.clock.flavor;
    put(0x24, 0x1234);
    put(0x26, 0xfedc);
  }

  unsigned teddy() const { return l.displacement ? 0xc21583 : 0xc216db; }
  unsigned create() const { return l.displacement ? 0xc01e5f : 0xc01e49; }
  unsigned destroy() const { return l.displacement ? 0xc0214e : 0xc02140; }
  unsigned update() const { return l.displacement ? 0xc036c7 : 0xc034d6; }
  unsigned guests() const { return l.displacement ? 0xc034c7 : 0xc032ec; }
  void invoke(unsigned address, bool setup = false,
              unsigned allowed_frontier = 0, unsigned a = 0, unsigned x = 0) {
    frontier = 0;
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    cpu.execute_instruction<0x22>(address, 4);
    if (!setup) {
      allocations = creations = deletions = updates = refreshes =
          movement_calls = palette_calls = teddy_calls = 0;
      call_order.clear();
    }
    for (unsigned n = 0; n < 2000000; ++n) {
      const auto pc = cpu.program_counter;
      if (pc == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Source damaged caller ABI");
        return;
      }
      if (pc == allowed_frontier) {
        frontier = pc;
        return;
      }
      if (pc == l.graphics_allocator || pc == l.map_allocator)
        ++allocations;
      if (pc == create())
        ++creations;
      if (pc == teddy())
        ++teddy_calls;
      if (pc == destroy())
        ++deletions;
      if (pc == update())
        ++updates;
      if (pc == guests())
        ++refreshes;
      if (pc == l.movement)
        ++movement_calls;
      if (pc == l.palette)
        ++palette_calls;
      if (pc == create() || pc == destroy() || pc == update() ||
          pc == guests() || pc == l.movement || pc == l.palette)
        call_order.push_back(pc);
      require(pc != (l.displacement ? 0xc03f64u : 0xc03cfdu),
              "Non-bicycle source entered unsupported dismount");
      require(pc != (l.displacement ? 0xc3e790u : 0xc3ebcau),
              "Teddy wrapper incorrectly rescanned transformation timers");
      cpu.step_instruction();
      if (setup)
        ++counts.setup_instructions;
      else
        ++counts.instructions;
    }
    throw std::runtime_error("Original Teddy failed to return " +
                             cpu.describe_registers());
  }
  bool insertion_comparison(unsigned member) const {
    const auto record = word(l.variables + 60 + member * 2);
    require(record < 6, "Source setup role mapping invalid");
    return bus->work_ram[character(record, 14)] == 1;
  }
  void compare(Fixture &f, const Resources &r, bool final = false,
               bool rebuild = false) const {
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
      const auto &character_state = f.party.character(i + 1);
      require(std::equal(character_state.items.begin(),
                         character_state.items.end(),
                         bus->work_ram.begin() + character(i, 35)),
              "Teddy refresh changed controlled inventory");
      require(std::equal(character_state.afflictions.begin(),
                         character_state.afflictions.end(),
                         bus->work_ram.begin() + character(i, 14)),
              "Teddy refresh changed character afflictions");
      counts.list_bytes +=
          3 + character_state.items.size() + character_state.afflictions.size();
    }
    require(word(l.prepared_x) == f.prepared.x &&
                word(l.prepared_y) == f.prepared.y &&
                word(l.prepared_direction) == f.prepared.direction &&
                word(l.new_height) == f.prepared.height,
            "Prepared coordinate/facing phase differs");
    for (unsigned i = 0; i < 8; ++i)
      require(word(l.new_variables + i * 2) == f.prepared.variables[i],
              "Prepared variable differs");
    require(word(l.displacement ? 0x6126 : 0x5da0) == f.movement.mushroomized &&
                word(l.displacement ? 0x6122 : 0x5d9c) == f.movement.timer &&
                word(l.displacement ? 0x6124 : 0x5d9e) == f.movement.modifier,
            "Movement policy differs");
    for (unsigned i = 0; i < 32; ++i)
      require(word(0x200 + i * 2) == f.windows.palette()[i],
              "Formation palette differs at " + std::to_string(i) +
                  " original=" + std::to_string(word(0x200 + i * 2)) +
                  " native=" + std::to_string(f.windows.palette()[i]));
    auto source_role = word(l.first);
    for (const auto id : f.actors.actors()) {
      const auto &actor = f.actors.actor(id);
      const auto role = *actor.authored_role();
      const auto index = role * 2;
      require(source_role == index, "Active actor traversal order differs");
      source_role = word(l.next_actor + index);
      require(word(l.sprite + index) == actor.appearance.sprite(),
              "Created sprite differs");
      const auto map_pointer = word((l.displacement ? 0x1124 : 0x112e) + index);
      const unsigned pool = l.displacement ? 0x4a04 : 0x467e;
      require(map_pointer >= pool && map_pointer < pool + 0x380 &&
                  word((l.displacement ? 0x1160 : 0x116a) + index) == 0x7e,
              "Actual source spritemap allocation failed");
      const auto vram = word((l.displacement ? 0x2d8c : 0x298e) + index);
      require(vram >= 0x4000 && vram < 0x8000,
              "Actual source graphics allocation failed");
      const auto pause = word((l.displacement ? 0x10ac : 0x10b6) + index);
      require(actor.tick_callback_enabled == !(pause & 0x8000) &&
                  actor.scripts_and_physics_enabled == !(pause & 0x4000),
              "Actor pause flags differ");
      const auto &metadata = f.talk.body(id);
      const unsigned hitbox_fields[]{l.displacement ? 0x3764u : 0x3366u,
                                     l.displacement ? 0x37a0u : 0x33a2u,
                                     l.displacement ? 0x37dcu : 0x33deu,
                                     l.displacement ? 0x1a40u : 0x1a4au};
      require(metadata.vertical.half_width == word(hitbox_fields[0] + index) &&
                  metadata.vertical.height == word(hitbox_fields[1] + index) &&
                  metadata.lateral.half_width ==
                      word(hitbox_fields[2] + index) &&
                  metadata.lateral.height == word(hitbox_fields[3] + index),
              "Actual interaction hitboxes differ");
      require(metadata.hitbox_enabled ==
                      word((l.displacement ? 0x3728 : 0x332a) + index) &&
                  metadata.npc_id == 0xffff,
              "Actual interaction collision profile/identity differs");
      counts.metadata_words += 6;
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
    std::array<bool, 30> occupied_roles{};
    std::array<bool, 70> occupied_tasks{};
    for (auto id : f.actors.actors()) {
      const auto role = *f.actors.actor(id).authored_role();
      occupied_roles[role] = true;
      const auto task = word(l.script_index + role * 2);
      require(task < 140 && !(task & 1), "Active source task index invalid");
      require(!occupied_tasks[task / 2],
              "Two live source actors share one task");
      occupied_tasks[task / 2] = true;
    }
    auto free_role = word(l.free_actor);
    for (unsigned i = 0; free_role != 0xffff && i < 30; ++i) {
      require(free_role < 60 && !(free_role & 1) &&
                  !occupied_roles[free_role / 2],
              "Freed source actor still active or duplicated");
      occupied_roles[free_role / 2] = true;
      free_role = word(l.next_actor + free_role);
    }
    require(free_role == 0xffff &&
                std::all_of(occupied_roles.begin(), occupied_roles.end(),
                            [](bool b) { return b; }),
            "Source role allocation lost ownership");
    auto free_task = word(l.free_task);
    for (unsigned i = 0; free_task != 0xffff && i < 70; ++i) {
      require(free_task < 140 && !(free_task & 1) &&
                  !occupied_tasks[free_task / 2],
              "Freed source task still active or duplicated");
      occupied_tasks[free_task / 2] = true;
      free_task = word(l.next_task + free_task);
    }
    require(free_task == 0xffff &&
                std::all_of(occupied_tasks.begin(), occupied_tasks.end(),
                            [](bool b) { return b; }),
            "Source task allocation lost ownership");
    require(source_role == 0xffff && !f.actors.ticks(),
            "Extra source actor or native synthetic tick");
    if (f.party.party_count) {
      require(word(game(148)) == f.formation.current_leader_role,
              "Source leading actor differs");
      require(f.actors.actor_for_role(word(game(148))) == f.talk.state().leader,
              "Interaction owner did not publish the actual source leader");
    }
    const unsigned graphics = l.displacement ? 0x4d86 : 0x4a00;
    for (unsigned i = 0; i < 88; ++i)
      if (const auto owner = bus->work_ram[graphics + i])
        require((owner & 0x80) && f.actors.actor_for_role(owner & 0x7f),
                "Source graphics memory retained an erased role");
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
    ++counts.snapshots;
    if (final && rebuild)
      require(!word(l.displacement ? 0x6104 : 0x5d7e),
              "Source rebuild did not clear its busy marker");
  }
};
struct Case {
  std::string name;
  std::array<std::uint8_t, 6> members;
  unsigned seed{}, item{}, slot{}, inventory_member = 1;
  bool hole{}, leader_teddy{}, both_items{};
};
void run(Resources &r, const Case &c) {
  context = r.assets.title + " " + c.name + " seed=" + std::to_string(c.seed);
  Fixture f(r, c.seed);
  f.setup_seed = c.seed;
  f.party.party_order = c.members;
  if (f.style == 3) {
    for (auto member : c.members)
      if (member && r.data.initial(member).small_sprite == 0xffff) {
        f.style = 0;
        ++counts.normal_guest_setups;
        break;
      }
    if (f.style == 3 &&
        (std::find(c.members.begin(), c.members.end(), 16) != c.members.end() ||
         std::find(c.members.begin(), c.members.end(), 17) != c.members.end()))
      ++counts.small_teddy_setups;
  }
  Oracle o(r.assets);
  o.seed(f, c.seed);
  o.invoke(o.l.rebuild, true);
  f.setup_native();
  o.compare(f, r);
  // Prepared play state deliberately retains live damaged guest HP and
  // unusual trail cursors; C216DB must preserve or migrate them itself.
  f.formation.first_guest.hp = 0x1357;
  f.formation.second_guest.hp = 0x2468;
  o.put(o.game(71), f.formation.first_guest.hp);
  o.put(o.game(73), f.formation.second_guest.hp);
  if (c.leader_teddy) {
    unsigned at = 0;
    while (at < f.party.party_count && f.party.display_order[at] != 16 &&
           f.party.display_order[at] != 17)
      ++at;
    require(at < f.party.party_count, "Leader-removal case lacks Teddy actor");
    std::swap(f.party.display_order[0], f.party.display_order[at]);
    std::swap(f.party.controlled_order[0], f.party.controlled_order[at]);
    std::swap(f.formation.roles[0], f.formation.roles[at]);
    for (unsigned i = 0; i < 6; ++i) {
      o.bus->work_ram[o.game(150) + i] = f.party.display_order[i];
      o.bus->work_ram[o.game(156) + i] = f.party.controlled_order[i];
      o.put(o.game(162) + 2 * i, f.formation.roles[i]);
    }
    f.formation.current_leader_role = f.formation.roles[0];
    o.put(o.game(148), f.formation.current_leader_role);
    f.talk.state().leader = *f.actors.actor_for_role(f.formation.roles[0]);
    ++counts.leader_removals;
  }
  if (c.item) {
    auto &items = f.party.character(c.inventory_member).items;
    std::fill_n(items.begin(), c.slot, std::uint8_t(1));
    items[c.slot] = std::uint8_t(c.item);
    if (c.hole && c.slot)
      items[c.slot - 1] = 0;
    if (c.both_items) {
      for (unsigned i = 1; i < r.items->item_count(); ++i)
        if (r.items->item_properties(i).type == 4 && i != c.item) {
          f.party.character(2).items[0] = std::uint8_t(i);
          break;
        }
    }
  }
  for (unsigned i = 0; i < 6; ++i)
    std::copy(f.party.character(i + 1).items.begin(),
              f.party.character(i + 1).items.end(),
              o.bus->work_ram.begin() + o.character(i, 35));
  const auto before = f.actors.size();
  const auto before_ids = f.actors.actors();
  const auto held = f.windows.frame();
  const auto pixels = held->pixels;
  o.invoke(o.teddy());
  auto op = f.teddy.begin();
  require(op->advance(0) == dialogue::Progress::BudgetExhausted,
          "Zero budget advanced Teddy operation");
  for (unsigned n = 0; n < 500; ++n) {
    const auto progress = op->advance(n % 2 ? 1 : 7);
    ++counts.budget_polls;
    require(progress != dialogue::Progress::Suspended,
            "Non-bicycle Teddy left an unowned lifecycle service");
    if (progress == dialogue::Progress::Finished) {
      require(op->complete(), "Finished Teddy operation not complete");
      o.compare(f, r);
      require(
          o.allocations == 2 * o.creations,
          "Real graphics allocators did not execute exactly once per CREATE");
      require(o.updates == o.creations + o.deletions &&
                  o.refreshes == 2 * (o.creations + o.deletions) &&
                  o.movement_calls == o.updates && o.palette_calls == o.updates,
              "Original lifecycle tail order/count changed: creates=" +
                  std::to_string(o.creations) +
                  " deletes=" + std::to_string(o.deletions) +
                  " updates=" + std::to_string(o.updates) +
                  " refreshes=" + std::to_string(o.refreshes) +
                  " movements=" + std::to_string(o.movement_calls) +
                  " palettes=" + std::to_string(o.palette_calls));
      require(f.actors.size() == before + o.creations - o.deletions,
              "Actual native actor lifetime delta differs");
      const auto after_ids = f.actors.actors();
      for (auto old : before_ids)
        if (std::find(after_ids.begin(), after_ids.end(), old) ==
            after_ids.end()) {
          bool stale = false;
          try {
            (void)f.talk.body(old);
          } catch (const std::exception &) {
            stale = true;
          }
          require(stale, "Erased Teddy retained usable collision metadata");
        }
      std::vector<unsigned> expected_order;
      for (unsigned call : o.call_order)
        if (call == o.create() || call == o.destroy()) {
          expected_order.insert(expected_order.end(),
                                {call, o.guests(), o.update(), o.guests(),
                                 o.l.movement, o.l.palette});
        }
      require(o.call_order == expected_order,
              "Original callback sequencing changed within the completed "
              "lifecycle");
      require(held->pixels == pixels,
              "Teddy refresh mutated an immutable window snapshot");
      require(op->advance() == dialogue::Progress::Finished,
              "Complete Teddy operation replayed work");
      ++counts.cases;
      counts.created += o.creations;
      counts.erased += o.deletions;
      counts.updates += o.updates;
      counts.guest_refreshes += o.refreshes;
      counts.movement += o.movement_calls;
      counts.palettes += o.palette_calls;
      if (!o.creations && !o.deletions)
        ++counts.noops;
      return;
    }
  }
  throw std::runtime_error("Native Teddy exceeded operation budget");
}

void receipt(Resources &r, const std::array<unsigned, 2> &items, unsigned mode,
             unsigned selector) {
  context = r.assets.title + " full receipt mode=" + std::to_string(mode) +
            " selector=" + std::to_string(selector);
  Fixture f(r, mode);
  f.setup_seed = mode;
  f.party.party_order = {1, 2};
  if (mode == 2 || mode == 4 || mode == 5)
    f.party.party_order[2] = 16;
  if (mode == 3)
    f.party.party_order[2] = 17;
  Oracle o(r.assets);
  o.seed(f, mode);
  o.invoke(o.l.rebuild, true);
  f.setup_native();
  const unsigned recipient = selector == 0xff ? 2 : selector;
  if (selector == 0xff)
    f.party.character(1).items.fill(1);
  if (mode == 2 || mode == 4)
    f.party.character(recipient).items[0] = std::uint8_t(items[0]);
  if (mode == 5)
    for (unsigned id : {1u, 2u})
      f.party.character(id).items.fill(1);
  for (unsigned i = 0; i < 6; ++i)
    std::copy(f.party.character(i + 1).items.begin(),
              f.party.character(i + 1).items.end(),
              o.bus->work_ram.begin() + o.character(i, 35));
  party::ItemTransformationState timers;
  timers.loaded_count = 0x1234;
  timers.next_check = 13;
  for (unsigned i = 0; i < 4; ++i)
    timers.records[i] = {std::uint8_t(0x91 + i), std::uint8_t(3 + i),
                         std::uint8_t(0xb5 + i), std::uint8_t(11 + i)};
  const unsigned timer_base = o.l.displacement ? 0xa120 : 0x9f1a,
                 loaded = o.l.displacement ? 0xa130 : 0x9f2a;
  for (unsigned i = 0; i < 4; ++i) {
    const auto &t = timers.records[i];
    const unsigned at = timer_base + i * 4;
    o.bus->work_ram[at] = t.sfx;
    o.bus->work_ram[at + 1] = t.frequency;
    o.bus->work_ram[at + 2] = t.sfx_countdown;
    o.bus->work_ram[at + 3] = t.transformation_countdown;
  }
  o.put(loaded, timers.loaded_count);
  o.bus->work_ram[loaded + 2] = timers.next_check;
  story::RandomState random{0x1234, 0xfedc};
  party::Inventory inventory(f.party, r.items,
                             party::ItemTransformationResources::import(
                                 r.assets.image, r.assets.version),
                             timers, random);
  require(f.teddy.bound_to(f.party, f.actors, f.refresh, inventory),
          "Receipt borrowed different Teddy/Inventory owners");
  const unsigned incoming = items[mode == 1 || mode == 2 || mode == 5 ? 1 : 0];
  o.invoke(o.l.displacement ? 0xc18c69 : 0xc18bc6, false, 0, selector,
           incoming);
  auto operation =
      inventory.begin_give(std::uint16_t(selector), std::uint16_t(incoming));
  unsigned services = 0;
  for (unsigned step = 0; step < 200; ++step) {
    const auto progress = operation->advance(step & 1 ? 1 : 4096);
    if (progress == dialogue::Progress::BudgetExhausted)
      continue;
    if (progress == dialogue::Progress::Suspended) {
      require(operation->service() == party::InventoryService::TeddyRefresh &&
                  services++ == 0,
              "Receipt requested an unexpected/repeated lifecycle");
      auto teddy = f.teddy.begin();
      for (unsigned n = 0; n < 500; ++n) {
        const auto t = teddy->advance(n & 1 ? 1 : 4096);
        require(t != dialogue::Progress::Suspended,
                "Receipt left unresolved Teddy lifecycle");
        if (t == dialogue::Progress::Finished)
          break;
      }
      require(teddy->complete(),
              "Receipt would acknowledge an incomplete Teddy lifecycle");
      // This is the actual owned child operation's completion, not an
      // external fake success reply or mutation seam.
      teddy.reset();
      operation->respond();
      ++counts.receipt_lifecycles;
      continue;
    }
    require(operation->complete() &&
                operation->recipient() == o.cpu.accumulator,
            "Whole receipt returned different recipient");
    require(services == o.teddy_calls && services == (mode == 5 ? 0u : 1u),
            "Actual C216DB caller continuation count differs");
    o.compare(f, r);
    for (unsigned i = 0; i < 4; ++i) {
      const auto &t = timers.records[i];
      const auto at = timer_base + i * 4;
      require(t.sfx == o.bus->work_ram[at] &&
                  t.frequency == o.bus->work_ram[at + 1] &&
                  t.sfx_countdown == o.bus->work_ram[at + 2] &&
                  t.transformation_countdown == o.bus->work_ram[at + 3],
              "Receipt transformation timer changed incorrectly");
    }
    require(timers.loaded_count == o.word(loaded) &&
                timers.next_check == o.bus->work_ram[loaded + 2] &&
                random.primary_word == o.word(0x24) &&
                random.secondary_word == o.word(0x26),
            "Receipt timer/RNG continuation differs");
    require(operation->recipient() == (mode == 5 ? 0u : recipient),
            "Prepared receipt did not exercise expected recipient");
    if (mode == 5) {
      ++counts.no_room_receipts;
      require(!o.creations && !o.deletions,
              "No-room receipt entered actor lifecycle");
    }
    ++counts.receipts;
    counts.created += o.creations;
    counts.erased += o.deletions;
    counts.updates += o.updates;
    counts.guest_refreshes += o.refreshes;
    counts.movement += o.movement_calls;
    counts.palettes += o.palette_calls;
    return;
  }
  throw std::runtime_error("Native Inventory receipt did not finish");
}
void frontiers(Resources &r, unsigned item) {
  for (bool bicycle : {false, true}) {
    context = r.assets.title + (bicycle ? " actual bicycle boundary"
                                        : " occupied role29 boundary");
    Fixture f(r, 0);
    f.party.party_order = bicycle ? std::array<std::uint8_t, 6>{1}
                                  : std::array<std::uint8_t, 6>{1, 5, 6};
    Oracle o(r.assets);
    o.seed(f, 0);
    o.invoke(o.l.rebuild, true);
    f.setup_native();
    o.compare(f, r);
    f.party.character(1).items[0] = std::uint8_t(item);
    o.bus->work_ram[o.character(0, 35)] = item;
    const auto before = f.actors.actors();
    if (bicycle) {
      f.talk.state().walking_style = 3;
      o.put(o.game(142), 3);
      f.party.character(1).afflictions[1] = 1;
      o.bus->work_ram[o.character(0, 15)] = 1;
    }
    const auto frontier =
        bicycle ? (o.l.displacement ? 0xc03f64 : 0xc03cfd) : o.create();
    o.invoke(o.teddy(), false, frontier);
    require(o.frontier == frontier,
            "Original did not reach requested ownership frontier");
    auto operation = f.teddy.begin();
    if (bicycle) {
      require(operation->advance() == dialogue::Progress::Suspended &&
                  operation->service() ==
                      story::PartyFormationService::BicycleDismount,
              "Native Teddy did not stop at actual source dismount");
      o.compare(f, r);
      for (unsigned budget : {0u, 1u, 4096u})
        require(operation->advance(budget) == dialogue::Progress::Suspended,
                "Pending Teddy dismount replayed lifecycle work");
      require(!o.palette_calls && o.creations == 1,
              "Bicycle frontier omitted creation or ran later palette");
      ++counts.bicycle_frontiers;
    } else {
      require(o.cpu.y_index == 29 &&
                  std::find(before.begin(), before.end(),
                            *f.actors.actor_for_role(29)) != before.end(),
              "Source CREATE frontier did not target occupied "
              "preferred-plus-one role");
      bool rejected = false;
      try {
        (void)operation->advance();
      } catch (const std::invalid_argument &e) {
        rejected = std::string(e.what()) ==
                   "Native party creation's authored role is occupied";
      }
      require(
          rejected && f.actors.actors() == before,
          "Occupied source role was silently replaced or reported complete");
      require(
          std::equal(f.party.party_order.begin(), f.party.party_order.end(),
                     o.bus->work_ram.begin() + o.game(122)),
          "Role frontier did not retain earlier wrapper membership mutation");
      ++counts.occupied_frontiers;
    }
  }
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2) {
    std::cerr << "native_story_teddy_reference pack.ebpak ...\n";
    return 77; // Opt-in authored data is not supplied by default CTest.
  }
  try {
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      Resources r(assets);
      counts = {};
      std::array<unsigned, 2> item{};
      for (unsigned i = 1; i < r.items->item_count(); ++i) {
        const auto p = r.items->item_properties(i);
        if (p.type == 4) {
          require(p.parameters[0] == 16 || p.parameters[0] == 17,
                  "Imported type4 item selects unsupported membership");
          item[p.parameters[0] - 16] = i;
        }
      }
      require(item[0] && item[1] && r.items->item_properties(1).type != 4,
              "Missing authored Teddy items/non-Teddy filler");
      for (unsigned member : {5u, 6u, 16u, 17u})
        std::cout << "Authored member=" << member
                  << " normal=" << r.data.initial(member).sprite
                  << " small=" << r.data.initial(member).small_sprite << '\n';
      const std::array<std::array<std::uint8_t, 6>, 8> memberships{
          {{1},
           {1, 2, 3, 4},
           {1, 16},
           {1, 17},
           {1, 16, 17},
           {1, 16, 16},
           {1, 5},
           {1, 2, 3, 4, 5, 6}}};
      for (unsigned seed = 0; seed < 6; ++seed)
        for (unsigned m = 0; m < memberships.size(); ++m) {
          const auto members = memberships[m];
          run(r, {"no-item-" + std::to_string(m), members, seed});
          for (unsigned which = 0; which < 2; ++which) {

            run(r, {"item-" + std::to_string(which) + "-membership-" +
                        std::to_string(m),
                    members, seed, item[which]});
          }
        }
      for (unsigned slot = 0; slot < 14; ++slot)
        for (unsigned which = 0; which < 2; ++which) {
          run(r, {"inventory-slot-" + std::to_string(slot),
                  {1, 2},
                  slot % 6,
                  item[which],
                  slot,
                  2});
          if (slot)
            run(r, {"first-hole-" + std::to_string(slot),
                    {1, 16},
                    slot % 6,
                    item[which],
                    slot,
                    1,
                    true});
        }
      for (unsigned seed = 0; seed < 6; ++seed) {
        run(r, {"leader-remove16", {1, 2, 16}, seed, 0, 0, 1, false, true});
        run(r,
            {"leader-replace17", {1, 2, 17}, seed, item[0], 0, 1, false, true});
        run(r, {"inventory-strongest",
                {1, 2, 3, 4},
                seed,
                item[0],
                0,
                1,
                false,
                false,
                true});
      }
      for (unsigned mode = 0; mode < 6; ++mode)
        for (unsigned selector : {1u, 2u, 0xffu})
          receipt(r, item, mode, selector);
      frontiers(r, item[0]);
      require(counts.created && counts.erased && counts.noops &&
                  counts.leader_removals,
              "Teddy reference coverage empty");
      std::cout << "PASS " << assets.title << ": " << counts.cases
                << " direct whole original Teddy calls, " << counts.receipts
                << " whole original receipts (" << counts.receipt_lifecycles
                << " actual native Teddy children, " << counts.no_room_receipts
                << " no-room returns), " << counts.instructions
                << " original instructions including separate frontiers, "
                << counts.created << " CREATE/task lifecycles, "
                << counts.erased << " actual deletions, " << counts.updates
                << " formation/movement/palette tails, " << counts.noops
                << " actual no-op paths, " << counts.leader_removals
                << " leader-removal inputs, " << counts.snapshots
                << " full state snapshots, " << counts.metadata_words
                << " collision metadata comparisons, "
                << counts.setup_instructions
                << " separate original setup instructions, "
                << counts.normal_guest_setups
                << " explicitly normal-style guest setups, "
                << counts.small_teddy_setups << " small-style Teddy setups, "
                << counts.occupied_frontiers
                << " separate occupied-role frontier, "
                << counts.bicycle_frontiers
                << " separate actual dismount frontier; zero fabricated "
                   "lifecycle acknowledgments\n";
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << ": " << context << '\n';
    return 1;
  }
}
