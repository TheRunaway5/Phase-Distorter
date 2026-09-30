// The original C04C45, C05F82 and C07C5B execute only in this reference.
// Movement-mode reducers and CENTER_SCREEN are explicit synchronous boundaries:
// verify each request before supplying controlled live changes to both owners.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_control.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_world_movement_fixture.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
std::string context;
void require(bool condition, const std::string &message) {
  if (!condition)
    throw std::runtime_error(message + ": " + context);
}
struct Layout {
  unsigned control, walk, bicycle, escalator, automatic, camera, surface, blink;
  unsigned game, characters, stride, chosen, trail, intangible, spritemap_high,
      var1, sizes, debug, flags, origin_x, origin_y, camera_moved, footstep;
  unsigned displacement;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {0xc04c45, 0xc0449b, 0xc048d3, 0xc047cf, 0xc04b53, 0xc0400e,
            0xc05f82, 0xc07c5b, 0x97f5,   0x99ce,   95,       0x4dc8,
            0x5156,   0x5d58,   0x116a,   0xe9a,    0x2b6e,   0x436c,
            0x5da4,   0x5dac,   0x5dae,   0x4dd4,   0x289c,   0};
  return {0xc04ebb, 0xc04722, 0xc04b65, 0xc04a56, 0xc04dc9, 0xc04295,
          0xc061b0, 0xc07eab, 0x9aa9,   0x9c7f,   94,       0x514e,
          0x54dc,   0x60de,   0x1160,   0xe90,    0x2f6c,   0x46f2,
          0x612a,   0x6132,   0x6134,   0x515a,   0x2c9a,   3};
}
struct Counts {
  std::uint64_t controls{}, surface_calls{}, blink_calls{}, skipped{},
      camera_calls{}, nested_modes{}, nested_cameras{}, preserved_xy{},
      blink_words{}, trail_words{};
  std::array<std::uint64_t, 4> modes{};
  std::array<std::uint64_t, 3> overrides{};
};
struct Oracle {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned surface_calls{}, blink_calls{};
  explicit Oracle(const eb::GameAssets &assets)
      : l(layout(assets.version)),
        bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram[0xd] = 0x80;
  }
  unsigned game(unsigned offset) const {
    return l.game + offset - l.displacement;
  }
  unsigned character(unsigned i) const { return l.characters + i * l.stride; }
  unsigned cursor(unsigned i) const {
    return character(i) + 61 - (l.displacement ? 1 : 0);
  }
  unsigned word(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  void cache(const WorldMapArea &area, CollisionPoint anchor) {
    for (int dy = -32; dy < 32; ++dy)
      for (int dx = -32; dx < 32; ++dx) {
        const unsigned x = (unsigned(anchor.x / 8) + dx) & 8191,
                       y = (unsigned(anchor.y / 8) + dy) & 8191;
        bus->work_ram[0xe000 + (y & 63) * 64 + (x & 63)] = area.collision(x, y);
      }
  }
  void begin(unsigned entry = 0) {
    surface_calls = blink_calls = 0;
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = cpu.x_index = cpu.y_index = 0;
    cpu.execute_instruction<0x22>(entry ? entry : l.control, 4);
  }
  unsigned boundary() {
    for (unsigned steps = 0; steps < 200000; ++steps) {
      const auto pc = cpu.program_counter;
      if (pc == l.walk || pc == l.bicycle || pc == l.escalator ||
          pc == l.automatic || pc == l.camera)
        return pc;
      if (pc == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return 0;
      if (pc == l.surface) {
        require(cpu.accumulator == word(game(130)) &&
                    cpu.x_index == word(game(134)) &&
                    cpu.y_index == word(game(148)),
                "Source surface call did not use current leader/formation");
        ++surface_calls;
      }
      if (pc == l.blink)
        ++blink_calls;
      cpu.step_instruction();
    }
    throw std::runtime_error("World control source did not return: " +
                             cpu.describe_registers() + ": " + context);
  }
  void respond(bool camera) {
    // These are caller-clobbered registers, not part of either typed service.
    cpu.accumulator = 0xbeef;
    cpu.x_index = 0xace1;
    cpu.y_index = 0x1357;
    if (camera)
      cpu.execute_instruction<0x6b>(0, 1);
    else
      cpu.execute_instruction<0x60>(0, 1);
  }
};
struct Fixture {
  ActorWorld actors;
  WorldPartyState party;
  PartyTrail trail;
  npcs::InteractionState leader;
  WorldControlState state;
  dialogue::PromptState prompt;
  story::InputState input;
  story::TickState clock;
  std::array<ActorId, 7> ids;
  Fixture(std::shared_ptr<SpriteResources> sprites,
          std::shared_ptr<const ActionScriptData> scripts,
          eb::GameVersion version)
      : actors(std::move(sprites), std::move(scripts), version) {
    for (unsigned i = 0; i < 7; ++i) {
      const unsigned role = i < 6 ? 24 + i : 3;
      WorldActorSpec spec;
      spec.sprite = 1;
      spec.action.animation = 0;
      spec.action.variables[1] = i % 6;
      ids[i] = *actors.create_authored(spec, {role, role + 1});
      auto &actor = actors.actor(ids[i]);
      // Seed the actual native blink reducer, rather than accessing its
      // private latch. The first call changes fingerprint, the second hides.
      EightDirectionAnimation blink;
      blink.intangibility_ticks = 46;
      actor.appearance.step_eight(actor.action(), blink);
      actor.appearance.step_eight(actor.action(), blink);
      require(actor.appearance.flashing_hidden(),
              "Blink fixture did not hide native artwork");
    }
  }
};
void seed(Oracle &o, Fixture &f, unsigned character, unsigned cursor,
          unsigned shape, unsigned style, unsigned automatic,
          unsigned intangible, unsigned debug, unsigned pad, unsigned frame,
          CollisionPoint at) {
  f.party.roles = {24, 25, 26, 27, 28, 29}; f.party.current_leader_role = 24;
  for (unsigned i = 0; i < 6; ++i) {
    f.party.trail_cursors[i] = 0x9000 + i;
    o.put(o.l.chosen + i * 2, o.character(i));
    o.put(o.cursor(i), f.party.trail_cursors[i]);
    // Adjacent character fields must not be overwritten by the unaligned word.
    o.bus->work_ram[o.cursor(i) - 1] = 0x69;
    o.bus->work_ram[o.cursor(i) + 2] = 0x96;
  }
  f.actors.actor(f.ids[0]).action().variables[1] = character;
  for (unsigned i = 0; i < 7; ++i) {
    auto &a = f.actors.actor(f.ids[i]);
    a.appearance_context.shape = shape;
    const auto role = *a.authored_role();
    o.put(o.l.var1 + role * 2, a.action().variables[1]);
    o.put(o.l.sizes + role * 2, shape);
  }
  // Source changes all six reserved blink bits, leaving both other roles
  // and every lower descriptor bit unchanged. Native only owns living roles.
  for (unsigned role = 0; role < 30; ++role)
    o.put(o.l.spritemap_high + role * 2, 0x80c0 + role);
  for (unsigned i = 0; i < 256; ++i) {
    f.trail.points[i] = {std::uint16_t(0x1000 + i), std::uint16_t(0x2000 + i),
                         std::uint16_t(0x3000 + i), std::uint16_t(0x4000 + i),
                         std::uint16_t(0x5000 + i), std::uint16_t(0x6000 + i)};
    const auto &p = f.trail.points[i];
    const std::array<unsigned, 6> values{
        p.x, p.y, p.surface_flags, p.walking_style, p.direction, p.reserved};
    for (unsigned j = 0; j < 6; ++j)
      o.put(o.l.trail + i * 12 + j * 2, values[j]);
  }
  f.trail.next_write = cursor;
  f.leader.leader = f.ids[0];
  f.leader.leader_x = at.x;
  f.leader.leader_y = at.y;
  f.leader.leader_direction = 2;
  f.leader.walking_style = style;
  f.leader.movement_flags = 0x1234;
  f.leader.checked_surface_origin = {0x1234, 0x5678};
  f.leader.surface_flags = 0xabcd;
  f.state = {0x1357, 0x2468, 0x8765, std::uint16_t(automatic), 0xa55a, true};
  f.prompt.debug = debug;
  f.input.state[0] = pad;
  f.clock.frame_counter = frame;
  f.actors.appearance_scene().intangibility_ticks = intangible;
  f.actors.appearance_scene().footstep_override = 7;
  o.put(o.game(128), f.state.x_fraction);
  o.put(o.game(130), at.x);
  o.put(o.game(132), f.state.y_fraction);
  o.put(o.game(134), at.y);
  o.put(o.game(136), cursor);
  o.put(o.game(138), 2);
  o.put(o.game(140), f.state.trodden_surface_flags);
  o.put(o.game(142), style);
  o.put(o.game(144), f.state.moved_this_tick);
  o.put(o.game(146), f.leader.movement_flags);
  o.put(o.game(148), 24);
  o.put(o.game(176), automatic);
  o.put(o.l.intangible, intangible);
  o.put(o.l.camera_moved, 1);
  o.put(o.l.footstep, 14);
  o.put(o.l.flags, f.leader.surface_flags);
  o.put(o.l.origin_x, 0x1234);
  o.put(o.l.origin_y, 0x5678);
  o.put(o.l.debug, debug);
  o.put(0x65, pad);
  o.put(2, 0xa500 | frame);
  o.put(0x24, 0x71ab);
  o.put(0x26, 0x37dc);
}
void compare(const Oracle &o, const Fixture &f, bool cleared, Counts &counts) {
  const std::array<std::pair<unsigned, unsigned>, 12> game{
      {{128, f.state.x_fraction},
       {130, f.leader.leader_x},
       {132, f.state.y_fraction},
       {134, f.leader.leader_y},
       {136, f.trail.next_write},
       {138, f.leader.leader_direction},
       {140, f.state.trodden_surface_flags},
       {142, f.leader.walking_style},
       {144, f.state.moved_this_tick},
       {146, f.leader.movement_flags},
       {148, f.party.current_leader_role},
       {176, f.state.automatic_mode}}};
  for (const auto [offset, value] : game)
    require(o.word(o.game(offset)) == value,
            "Game-state word differs at offset " + std::to_string(offset));
  require(o.word(o.l.flags) == f.leader.surface_flags &&
              o.word(o.l.origin_x) == f.leader.checked_surface_origin.x &&
              o.word(o.l.origin_y) == f.leader.checked_surface_origin.y,
          "Surface result/origin differs");
  require(o.word(o.l.camera_moved) == f.state.camera_moved,
          "Camera completion marker differs");
  const auto &appearance = f.actors.appearance_scene();
  require(o.word(o.l.intangible) == appearance.intangibility_ticks,
          "Intangibility count differs");
  require(o.word(o.l.footstep) == (appearance.footstep_override
                                       ? 2u * (*appearance.footstep_override)
                                       : 0),
          "Footstep override differs");
  require(o.word(o.l.debug) == f.prompt.debug &&
              o.word(0x65) == f.input.state[0] &&
              o.word(2) == (0xa500 | f.clock.frame_counter),
          "Control polled input or advanced frame/debug state");
  require(o.word(0x24) == 0x71ab && o.word(0x26) == 0x37dc,
          "Control consumed random state");
  for (unsigned i = 0; i < 6; ++i) {
    require(o.word(o.cursor(i)) == f.party.trail_cursors[i],
            "Character trail read cursor differs");
    require(o.bus->work_ram[o.cursor(i) - 1] == 0x69 &&
                o.bus->work_ram[o.cursor(i) + 2] == 0x96,
            "Character cursor write damaged adjacent fields");
  }
  for (unsigned role = 0; role < 30; ++role) {
    const unsigned expected =
        (0x80c0 + role) & (cleared && role >= 24 ? 0x7fff : 0xffff);
    require(o.word(o.l.spritemap_high + role * 2) == expected,
            "Source blink operation changed another bit or role");
    ++counts.blink_words;
  }
  for (unsigned i = 0; i < 7; ++i) {
    const auto &a = f.actors.actor(f.ids[i]);
    require(a.appearance.flashing_hidden() == !(cleared && i < 6),
            "Native blink role/state differs");
    const auto role = *a.authored_role();
    require(o.word(o.l.var1 + role * 2) == a.action().variables[1] &&
                o.word(o.l.sizes + role * 2) == a.appearance_context.shape,
            "Control changed actor metadata");
  }
  for (unsigned i = 0; i < 256; ++i) {
    const auto &p = f.trail.points[i];
    const std::array<unsigned, 6> values{
        p.x, p.y, p.surface_flags, p.walking_style, p.direction, p.reserved};
    for (unsigned j = 0; j < 6; ++j) {
      require(o.word(o.l.trail + i * 12 + j * 2) == values[j],
              "Party trail word differs at point " + std::to_string(i) +
                  " word " + std::to_string(j));
      ++counts.trail_words;
    }
  }
}
void movement_response(Oracle &o, Fixture &f, unsigned variant, bool moved,
                       unsigned shape) {
  if (variant) {
    // Callback may switch formation identity and the trail head. Terrain
    // must read both after return; the character cursor write already happened.
    f.party.roles[0] = 25; f.party.current_leader_role = 25;
    o.put(o.game(148), 25);
    f.leader.leader = f.ids[1];
    f.actors.actor(f.ids[1]).appearance_context.shape = (shape + 1) % 17;
    o.put(o.l.sizes + 50, (shape + 1) % 17);
    f.trail.next_write ^= 255;
    o.put(o.game(136), f.trail.next_write);
    f.leader.leader_x += 3;
    f.leader.leader_y += 5;
    f.state.x_fraction = 0xfedc;
    f.state.y_fraction = 0xba98;
    f.leader.leader_direction = 6;
    f.leader.walking_style = 5;
    o.put(o.game(128), f.state.x_fraction);
    o.put(o.game(132), f.state.y_fraction);
    o.put(o.game(130), f.leader.leader_x);
    o.put(o.game(134), f.leader.leader_y);
    o.put(o.game(138), 6);
    o.put(o.game(142), 5);
  }
  f.state.moved_this_tick = moved ? 3 : 0;
  o.put(o.game(144), f.state.moved_this_tick);
}
void camera_response(Oracle &o, Fixture &f, unsigned variant) {
  if (!variant)
    return;
  // Nested refresh performs another collision query and changes live trail
  // cursor/style/facing. It must not change the point captured before refresh
  // or replace the persistent trodden flags with this temporary result.
  f.leader.surface_flags = 0x5aa5;
  f.leader.checked_surface_origin = {0x1111, 0xeeee};
  o.put(o.l.flags, f.leader.surface_flags);
  o.put(o.l.origin_x, 0x1111);
  o.put(o.l.origin_y, 0xeeee);
  f.trail.next_write = 113;
  o.put(o.game(136), 113);
  f.leader.walking_style = 11;
  f.leader.leader_direction = 7;
  o.put(o.game(142), 11);
  o.put(o.game(138), 7);
  f.leader.leader_x += 29;
  f.leader.leader_y += 31;
  o.put(o.game(130), f.leader.leader_x);
  o.put(o.game(134), f.leader.leader_y);
  if (variant >= 2) {
    // Explicit changes to the persistent owner, unlike the shared scratch,
    // must be used by the following trail metadata and footstep publication.
    f.state.trodden_surface_flags = variant == 2 ? 8 : variant == 3 ? 12 : 0;
    o.put(o.game(140), f.state.trodden_surface_flags);
  }
}
void run_case(Oracle &o, std::shared_ptr<SpriteResources> sprites,
              std::shared_ptr<const ActionScriptData> scripts,
              eb::GameVersion version, const WorldCollision &collision,
              const WorldMapArea &area, Counts &counts, unsigned character,
              unsigned cursor, unsigned shape, unsigned style,
              unsigned automatic, unsigned intangible, unsigned debug,
              unsigned pad, unsigned frame, CollisionPoint at, bool moved,
              unsigned nested) {
  context =
      "character=" + std::to_string(character) +
      " cursor=" + std::to_string(cursor) + " shape=" + std::to_string(shape) +
      " style=" + std::to_string(style) + " auto=" + std::to_string(automatic) +
      " intangible=" + std::to_string(intangible) +
      " debug=" + std::to_string(debug) + " pad=" + std::to_string(pad) +
      " frame=" + std::to_string(frame) + " xy=" + std::to_string(at.x) + "," +
      std::to_string(at.y) + " moved=" + std::to_string(moved) +
      " nested=" + std::to_string(nested);
  Fixture f(std::move(sprites), std::move(scripts), version);
  seed(o, f, character, cursor, shape, style, automatic, intangible, debug, pad,
       frame, at);
  o.cache(area, at);
  WorldControl control(f.actors, f.party, f.trail, f.leader, f.state, f.prompt,
                       f.input, f.clock, collision, area);
  auto operation = control.begin();
  o.begin();
  bool done = operation->advance();
  auto boundary = o.boundary();
  compare(o, f, intangible != 0, counts);
  const bool skip = debug && (pad & 0x40) && (frame & 15);
  if (skip) {
    require(done && boundary == 0 && !operation->request(),
            "Debug pause did not skip movement and trail work");
    require(!o.surface_calls && !f.state.moved_this_tick,
            "Paused control queried terrain or retained movement");
    ++counts.skipped;
  } else {
    const auto kind = automatic     ? WorldControlService::Automatic
                      : style == 12 ? WorldControlService::Escalator
                      : style == 3  ? WorldControlService::Bicycle
                                    : WorldControlService::Walk;
    const unsigned source = automatic     ? o.l.automatic
                            : style == 12 ? o.l.escalator
                            : style == 3  ? o.l.bicycle
                                          : o.l.walk;
    require(!done && operation->request() &&
                operation->request()->kind == kind && boundary == source,
            "Movement dispatch/order differs");
    require(operation->request()->previous_movement ==
                (kind == WorldControlService::Bicycle ? 0x8765 : 0),
            "Previous movement was not captured before reset");
    if (kind == WorldControlService::Bicycle)
      require(o.cpu.accumulator == 0x8765, "Source bicycle input differs");
    require(!o.surface_calls && f.party.trail_cursors[character] == cursor,
            "Character cursor was not published before movement");
    ++counts.modes[kind == WorldControlService::Walk        ? 0
                   : kind == WorldControlService::Bicycle   ? 1
                   : kind == WorldControlService::Escalator ? 2
                                                            : 3];
    const auto pending = *operation->request();
    require(!operation->advance() && *operation->request() == pending,
            "Repeated advance bypassed pending mode");
    movement_response(o, f, nested, moved, shape);
    counts.nested_modes += nested != 0;
    o.cache(area, {f.leader.leader_x, f.leader.leader_y});
    operation->respond();
    o.respond(false);
    done = operation->advance();
    boundary = o.boundary();
    compare(o, f, intangible != 0, counts);
    require(o.surface_calls == 1,
            "Original terrain helper did not execute exactly once");
    if (moved) {
      require(!done && operation->request() &&
                  operation->request()->kind ==
                      WorldControlService::RefreshCamera &&
                  boundary == o.l.camera,
              "Moving control did not wait for camera refresh");
      const auto request = *operation->request();
      require(o.cpu.accumulator == std::uint16_t(request.camera.x + 128) &&
                  o.cpu.x_index == std::uint16_t(request.camera.y + 112),
              "Camera boundary arguments differ");
      require(!operation->advance() && *operation->request() == request,
              "Repeated advance bypassed camera refresh");
      camera_response(o, f, nested);
      counts.nested_cameras += nested != 0;
      operation->respond();
      o.respond(true);
      done = operation->advance();
      boundary = o.boundary();
      ++counts.camera_calls;
      compare(o, f, intangible != 0, counts);
    } else
      ++counts.preserved_xy;
    require(done && boundary == 0 && !operation->request(),
            "Control did not finish after its exact boundaries");
    const auto value = f.actors.appearance_scene().footstep_override;
    ++counts.overrides[!value ? 0 : *value == 8 ? 1 : 2];
  }
  require(o.blink_calls == (intangible ? 1u : 0u),
          "Blink routine call count differs");
  require(o.cpu.direct_page == 0x1e00 && o.cpu.stack_pointer == 0x1fff &&
              o.cpu.data_bank == 0x7e,
          "Source control did not restore calling context");
  require(operation->advance() && !control.busy() && !control.failed(),
          "Completed control is not stable");
  counts.surface_calls += o.surface_calls;
  counts.blink_calls += o.blink_calls;
  ++counts.controls;
}
void run(const eb::GameAssets &assets) {
  const auto version = assets.version;
  auto sprites = std::make_shared<SpriteResources>(
      assets.image, sprite_catalog_layout(version));
  auto scripts = std::make_shared<ActionScriptData>(
      std::vector<std::uint8_t>{0x09}, 0, std::vector<std::uint32_t>{0});
  const WorldCollision collision(assets.image, world_collision_layout(version));
  const movement_test::Fixture content;
  const auto area = content.area();
  Oracle oracle(assets);
  Counts counts;
  // Direct C07C5B also has a zero-timer no-op path that C04C45 never calls.
  for (unsigned timer : {0u, 1u, 46u, 65535u}) {
    context = "standalone blink timer=" + std::to_string(timer);
    Fixture f(sprites, scripts, version);
    seed(oracle, f, 0, 255, 1, 0, 0, timer, 0, 0, 0, {144, 64});
    oracle.begin(oracle.l.blink);
    clear_party_sprite_blink(f.actors);
    require(oracle.boundary() == 0 && oracle.blink_calls == 1 &&
                !oracle.surface_calls,
            "Standalone source blink did not return without external services");
    compare(oracle, f, timer != 0, counts);
    ++counts.blink_calls;
  }
  // All authored shapes, all six character-pointer selections, both ring
  // boundaries, every dispatch mode and movement/camera continuation variant.
  for (unsigned shape = 0; shape < 17; ++shape)
    for (unsigned character = 0; character < 6; ++character)
      for (unsigned cursor : {0u, 255u})
        for (unsigned mode = 0; mode < 5; ++mode) {
          const unsigned sequence =
              shape * 60 + character * 10 + (cursor ? 5 : 0) + mode;
          const unsigned style = mode == 1   ? 3
                                 : mode == 2 ? 12
                                 : mode == 4 ? 12
                                             : 0;
          run_case(oracle, sprites, scripts, version, collision, area, counts,
                   character, cursor, shape, style, mode >= 3 ? 7 : 0,
                   std::array<unsigned, 4>{0, 1, 46, 65535}[sequence % 4], 0, 0,
                   17,
                   {std::uint16_t((sequence % 256) * 32 + 16 + (sequence & 7)),
                    std::uint16_t(16 + (sequence & 7))},
                   sequence % 3 != 0, sequence % 5);
        }
  // Held X is 0040, not the X directional/facing masks; debug alone or
  // another held key must not suppress a pass. Byte-low counter wraps exactly.
  for (unsigned debug : {0u, 1u, 0x8000u})
    for (unsigned pad : {0u, 0x40u, 0x4000u, 0xffffu})
      for (unsigned frame : {0u, 1u, 15u, 16u, 255u})
        for (unsigned intangible : {0u, 1u})
          run_case(oracle, sprites, scripts, version, collision, area, counts,
                   5, 255, 1, 3, 0, intangible, debug, pad, frame, {144, 64},
                   true, 1);
  // Imported scenery adds real source content beyond independently authored
  // collision patterns; source reads a coherent snapshot of exactly that area.
  const WorldMap map(assets.image, world_map_layout(version));
  for (unsigned combination = 0; combination < 32; ++combination) {
    const auto actual =
        map.prepare(combination, std::vector<std::uint8_t>(128));
    CollisionPoint center{128, 64};
    for (unsigned y = 0; y < 80; ++y) {
      bool found = false;
      for (unsigned x = 0; x < 32; ++x)
        if (map.sector(x, y).combination == combination) {
          center = {std::uint16_t(x * 256 + 128), std::uint16_t(y * 128 + 64)};
          found = true;
          break;
        }
      if (found)
        break;
    }
    run_case(oracle, sprites, scripts, version, collision, actual, counts,
             combination % 6, combination & 1 ? 255 : 0, combination % 17, 0, 0,
             46, 0, 0, 0, center, true, combination % 5);
  }
  require(counts.skipped > 0 && counts.nested_modes > 0 &&
              counts.nested_cameras > 0 && counts.preserved_xy > 0,
          "Control branch coverage is empty");
  for (auto n : counts.modes)
    require(n > 0, "A movement mode was never called");
  for (auto n : counts.overrides)
    require(n > 0, "A footstep override outcome was never published");
  std::cout << "PASS " << assets.title << ": " << counts.controls
            << " original control calls, " << counts.surface_calls
            << " real top/bottom queries, " << counts.blink_calls
            << " real blink calls, " << counts.camera_calls
            << " camera boundaries, " << counts.skipped
            << " debug-paused passes, " << counts.trail_words
            << " trail words, " << counts.blink_words
            << " descriptor-word checks\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc >= 2, "native_world_control_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
