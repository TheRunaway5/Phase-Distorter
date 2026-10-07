// Actual C05200, C04C45, ghost CREATE/delete, tile/palette animation and
// LOAD_DAD_PHONE execute in the original regional program. Only the explicit
// native item, movement-mode/camera and sector-music boundaries are supplied by
// the host. Repeated native budget/service polls cannot replay those phases.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/world_interaction_queue.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
std::string context;
void require(bool condition, const std::string &message) {
  if (!condition)
    throw std::runtime_error(message + ": " + context);
}
unsigned word(std::span<const std::uint8_t> b, unsigned at) {
  return b[at] | unsigned(b[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> b, unsigned at) {
  return word(b, at) | word(b, at + 2) << 16;
}
std::uint32_t argb(unsigned color) {
  const auto c = [](unsigned x) { return (x << 3) | (x >> 2); };
  return 0xff000000u | c(color & 31) << 16 | c((color >> 5) & 31) << 8 |
         c((color >> 10) & 31);
}
struct Layout {
  unsigned maintenance, create, destroy, phone, items, music, walk, bicycle,
      escalator, automatic, camera, ghost_create, ghost_delete;
  unsigned game, characters, stride, shift, chosen, trail, var1, shape,
      tick_high, map_high, first, free_actor, next_actor, free_task, next_task;
  unsigned possessed, ghost, battle, sector_x, sector_y, auto_music,
      loaded_items, loaded_tiles, palette_loaded, activity, windows,
      battle_flag, enemy, flags;
  unsigned records, current, next, current_type, pending, timer, queued,
      intangible, swirl, cached_role, cached_direction, footstep, surface,
      origin_x, origin_y, camera_moved;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {0xc05200, 0xc01e49, 0xc02140, 0xc0dcc6, 0xc48fc4, 0xc03c25,
            0xc0449b, 0xc048d3, 0xc047cf, 0xc04b53, 0xc0400e, 0xc07716,
            0xc0777a, 0x97f5,   0x99ce,   95,       0,        0x4dc8,
            0x5156,   0xe9a,    0x2b6e,   0x10b6,   0x116a,   0xa50,
            0xa52,    0xa9e,    0xa54,    0x125a,   0x9f6f,   0x9f6b,
            0x4dc2,   0x5d5c,   0x5d5e,   0xb549,   0x9f2a,   0x4472,
            0x4474,   0xa34,    0x88e0,   0x9643,   0x4dba,   0x9c08,
            0x5dea,   0x5e02,   0x5e04,   0x5dc0,   0x5d9a,   0x9e54,
            0x9e56,   0x5d58,   0x5d60,   0x5d78,   0x5d76,   0x289c,
            0x5da4,   0x5dac,   0x5dae,   0x4dd4};
  return {0xc05425, 0xc01e5f, 0xc0214e, 0xc0dc8e, 0xc4660e, 0xc03e8c, 0xc04722,
          0xc04b65, 0xc04a56, 0xc04dc9, 0xc04295, 0xc07963, 0xc079ca, 0x9aa9,
          0x9c7f,   94,       3,        0x514e,   0x54dc,   0xe90,    0x2f6c,
          0x10ac,   0x1160,   0xa46,    0xa48,    0xa94,    0xa4a,    0x1250,
          0xa171,   0xa16d,   0x5148,   0x60e2,   0x60e4,   0xb6fa,   0xa130,
          0x47f8,   0x47fa,   0xa2a,    0x8c22,   0x993b,   0x5140,   0x9eb3,
          0x6170,   0x6188,   0x618a,   0x6146,   0x6120,   0xa05a,   0xa05c,
          0x60de,   0x60e6,   0x60fe,   0x60fc,   0x2c9a,   0x612a,   0x6132,
          0x6134,   0x515a};
}
struct Counts {
  unsigned calls{}, battles{}, created{}, deleted{}, phones{}, items{}, modes{},
      cameras{}, music{}, polls{}, tile_ticks{}, palette_ticks{};
  std::uint64_t pixels{};
};
struct Content {
  const eb::GameAssets &assets;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const CompiledActionProgram> program;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::WindowResources> windows;
  WorldMap map;
  WorldCollision collision;
  WorldPaletteAnimations animations;
  unsigned animated_combination{}, inactive_combination{};
  explicit Content(const eb::GameAssets &a)
      : assets(a), sprites(std::make_shared<SpriteResources>(
                       a.image, sprite_catalog_layout(a.version))),
        program(std::make_shared<CompiledActionProgram>(
            import_action_scripts(a.image, a.version), a.version)),
        fonts(dialogue::FontResources::import(a.image, a.version)),
        windows(dialogue::WindowResources::import(a.image, a.version)),
        map(a.image, world_map_layout(a.version)),
        collision(a.image, world_collision_layout(a.version)),
        animations(a.image, world_palette_animation_layout(a.version)) {
    const std::array<std::uint8_t, 128> flags{};
    for (unsigned i = 0; i < 32; ++i)
      if (map.prepare(i, flags).animation_active()) {
        animated_combination = i;
        break;
      }
    for (unsigned i = 0; i < 32; ++i)
      if (!map.prepare(i, flags).animation_active()) {
        inactive_combination = i;
        break;
      }
    require(map.prepare(animated_combination, flags).animation_active() &&
                !map.prepare(inactive_combination, flags).animation_active(),
            "Missing active/inactive authored areas");
  }
};
AreaPalettes initial_colors(unsigned track) {
  AreaPalettes c;
  c.animation_id = track;
  for (unsigned p = 0; p < 6; ++p)
    for (unsigned i = 1; i < 16; ++i)
      c.scenery[p][i] = argb(((p * 83 + i * 117) ^ 0x1357) & 0x7fff);
  return c;
}
struct Fixture {
  Content &content;
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  ActorWorld actors;
  WorldPartyState party;
  PartyTrail trail;
  npcs::InteractionState leader;
  WorldControlState control_state;
  story::InputState input;
  story::TickState ticks;
  WorldMapArea area;
  AreaPalettes palettes;
  AreaPaletteAnimation animation;
  WorldControl control;
  WorldMaintenanceState state;
  party::ItemTransformationState items;
  npcs::InteractionQueueState queue_state;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  PreparedActorState prepared;
  WorldMaintenance maintenance;
  ActorId leader_id;
  dialogue::WindowHost &bind_flags() {
    actors.scene().event_flags = text.event_flags;
    return windows;
  }
  Fixture(Content &c, bool animated)
      : content(c), output(c.fonts, text), windows(c.windows, text, output),
        actors(c.sprites, c.program),
        area(c.map.prepare(animated ? c.animated_combination
                                    : c.inactive_combination,
                           text.event_flags)),
        palettes(initial_colors(animated ? 1 : 0)),
        animation(c.animations.prepare(palettes)),
        control(actors, party, trail, leader, control_state,
                windows.prompt_state(), input, ticks, c.collision, area),
        queue(c.assets.version, queue_state,
              actors.appearance_scene().intangibility_ticks, phone),
        maintenance(bind_flags(), control, state, items, queue, area, palettes,
                    animation, prepared) {
    actors.scene().event_flags = text.event_flags;
    prepared = {17, 19, 7, 6, {2, 0, 17, 31, 45, 59, 73, 87}};
    auto spec = actors.prepare_actor(
        1, 0, PreparedActorState{128, 144, 7, 0, prepared.variables});
    leader_id = *actors.create_authored(spec, {24, 25});
    party.roles[0] = 24; party.current_leader_role = 24;
    party.projection = {24, 6, 0};
    leader.leader = leader_id;
    leader.leader_x = 128;
    leader.leader_y = 144;
    leader.leader_direction = 2;
    for (unsigned i = 0; i < 6; ++i)
      party.trail_cursors[i] = 0x9000 + i;
    trail.next_write = 255;
    for (unsigned i = 0; i < 256; ++i)
      trail.points[i] = {std::uint16_t(i + 10), std::uint16_t(i + 20),
                         std::uint16_t(i + 30), std::uint16_t(i + 40),
                         std::uint16_t(i + 50), std::uint16_t(i + 60)};
  }
};
struct Oracle {
  Content &content;
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Counts &counts;
  unsigned tile_calls{}, palette_calls{}, phone_calls{}, create_calls{},
      delete_calls{};
  Oracle(Content &c, Counts &n)
      : content(c), l(layout(c.assets.version)),
        bus(std::make_unique<eb::SnesBus>(c.assets.image, c.assets.version)),
        cpu(*bus), counts(n) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram[0xd] = 0x80;
  }
  void put(unsigned at, unsigned v) {
    bus->work_ram[at] = v;
    bus->work_ram[at + 1] = v >> 8;
  }
  unsigned get(unsigned at) const { return word(bus->work_ram, at); }
  unsigned game(unsigned offset) const { return l.game + offset - l.shift; }
  unsigned char_cursor(unsigned i) const {
    return l.characters + i * l.stride + 61 - (l.shift ? 1 : 0);
  }
  void registers() {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
  }
  void invoke(unsigned address, unsigned a = 0, unsigned x = 0, unsigned y = 0,
              bool far = true) {
    registers();
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    if (far)
      cpu.execute_instruction<0x22>(address, 4);
    else
      cpu.execute_instruction<0x20>(address & 65535, 3);
    for (unsigned step = 0; step < 3000000; ++step) {
      if (cpu.program_counter == 0xc0ff00u + (far ? 4 : 3) &&
          cpu.stack_pointer == 0x1fff)
        return;
      cpu.step_instruction();
    }
    throw std::runtime_error("Original helper did not return " +
                             cpu.describe_registers() + ": " + context);
  }
  void actor_tables(const Fixture &f) {
    // Real allocators are empty, not intercepted. Logical role24 and its
    // task are created by the actual CREATE_ENTITY before the callback.
    std::fill_n(bus->work_ram.begin() + (l.shift ? 0x4a04 : 0x467e), 0x380,
                0xff);
    put(l.first, 0xffff);
    put(l.free_actor, 0);
    put(l.free_task, 0);
    for (unsigned i = 0; i < 30; ++i)
      put(l.next_actor + i * 2, i == 29 ? 65535 : (i + 1) * 2);
    for (unsigned i = 0; i < 70; ++i)
      put(l.next_task + i * 2, i == 69 ? 65535 : (i + 1) * 2);
    const unsigned delta = l.shift ? 10 : 0;
    const unsigned prepared_xy = l.shift ? 0xa033 : 0x9e2d;
    put(prepared_xy, f.prepared.x);
    put(prepared_xy + 2, f.prepared.y);
    put(prepared_xy + 4, f.prepared.direction);
    put(0xa48 - delta, f.prepared.height);
    for (unsigned i = 0; i < 8; ++i)
      put(0xa38 - delta + i * 2, f.prepared.variables[i]);
    put(0x1e0e, 128);
    put(0x1e10, 144);
    invoke(l.create, 1, 0, 24);
    require(cpu.accumulator == 24, "Original leader role creation failed");
  }
  void animations(const Fixture &f) {
    const auto layout = world_map_layout(content.assets.version);
    const auto source = pointer(content.assets.image,
                                layout.graphics + f.area.tileset_id() * 4);
    put(0x1e0e, source);
    put(0x1e10, source >> 16);
    put(0x1e12, 0);
    put(0x1e14, 0x7f);
    invoke(l.shift ? 0xc419ea : 0xc41a9e);
    std::copy_n(bus->work_ram.begin() + 0x10000, 0x7000,
                bus->video_ram.begin());
    put(l.shift ? 0x46f8 : 0x4372, f.area.tileset_id());
    invoke(0xc00085, 0, 0, 0, false);
    for (unsigned p = 0; p < 6; ++p)
      for (unsigned i = 0; i < 16; ++i)
        put(0x240 + (p * 16 + i) * 2, ((p * 83 + i * 117) ^ 0x1357) & 0x7fff);
    put(0x2a0, f.palettes.animation_id);
    invoke(0xc0023f, 0, 0, 0, false);
  }
  void cache(const Fixture &f) {
    for (int dy = -32; dy < 32; ++dy)
      for (int dx = -32; dx < 32; ++dx) {
        const unsigned x = (unsigned(f.leader.leader_x / 8) + dx) & 8191,
                       y = (unsigned(f.leader.leader_y / 8) + dy) & 8191;
        bus->work_ram[0xe000 + (y & 63) * 64 + (x & 63)] =
            f.area.collision(x, y);
      }
  }
  void seed(Fixture &f) {
    actor_tables(f);
    animations(f);
    const std::array<std::pair<unsigned, unsigned>, 12> game_words{
        {{128, f.control_state.x_fraction},
         {130, f.leader.leader_x},
         {132, f.control_state.y_fraction},
         {134, f.leader.leader_y},
         {136, f.trail.next_write},
         {138, f.leader.leader_direction},
         {140, f.control_state.trodden_surface_flags},
         {142, f.leader.walking_style},
         {144, f.control_state.moved_this_tick},
         {146, f.leader.area_character_style},
         {148, 24},
         {176, f.control_state.automatic_mode}}};
    for (auto [at, v] : game_words)
      put(game(at), v);
    for (unsigned i = 0; i < 6; ++i) {
      put(l.chosen + i * 2, l.characters + i * l.stride);
      put(char_cursor(i), f.party.trail_cursors[i]);
    }
    for (unsigned i = 0; i < 256; ++i) {
      const auto &p = f.trail.points[i];
      const unsigned values[]{
          p.x, p.y, p.surface_flags, p.walking_style, p.direction, p.reserved};
      for (unsigned j = 0; j < 6; ++j)
        put(l.trail + i * 12 + j * 2, values[j]);
    }
    const auto &a = f.actors.actor(f.leader_id);
    put(l.var1 + 48, a.action().variables[1]);
    put(l.shape + 48, a.appearance_context.shape);
    put(l.tick_high + 48, 0xc0 | (a.scripts_and_physics_enabled ? 0 : 0x4000) |
                              (a.tick_callback_enabled ? 0 : 0x8000));
    put(l.map_high + 48, 0x7e | (a.appearance.flashing_hidden() ? 0x8000 : 0));
    put(l.possessed, f.state.possessed_players);
    put(l.ghost, 65535);
    put(l.battle, f.control_state.encounter.mode);
    put(l.sector_x, f.state.last_sector_x);
    put(l.sector_y, f.state.last_sector_y);
    put(l.auto_music, f.state.auto_sector_music);
    put(l.loaded_items, f.items.loaded_count);
    put(l.activity, f.input.player_activity);
    put(l.windows, f.windows.draw_order().empty() ? 65535 : 0);
    put(l.battle_flag, f.windows.prompt_state().battle_mode);
    put(l.enemy, f.state.enemy_touched);
    put(l.swirl, f.actors.appearance_scene().battle_swirl_ticks);
    put(l.intangible, f.actors.appearance_scene().intangibility_ticks);
    put(l.footstep, 0);
    put(l.surface, f.leader.surface_flags);
    put(l.origin_x, f.leader.checked_surface_origin.x);
    put(l.origin_y, f.leader.checked_surface_origin.y);
    put(l.camera_moved, f.control_state.camera_moved);
    put(l.timer, f.phone.timer);
    put(l.queued, f.phone.queued);
    put(l.cached_role, *f.party.projection.leader_role * 2);
    put(l.cached_direction, f.party.projection.direction);
    put(l.current, f.queue_state.current);
    put(l.next, f.queue_state.next);
    put(l.current_type, f.queue_state.current_type);
    put(l.pending, f.queue_state.pending);
    for (unsigned i = 0; i < 4; ++i) {
      put(l.records + i * 6, f.queue_state.records[i].type);
      std::copy(f.queue_state.records[i].key.begin(),
                f.queue_state.records[i].key.end(),
                bus->work_ram.begin() + l.records + i * 6 + 2);
    }
    std::copy(f.text.event_flags.begin(), f.text.event_flags.end(),
              bus->work_ram.begin() + l.flags);
    put(0x24, 0x71ab);
    put(0x26, 0x37dc);
    cache(f);
  }
  void begin() {
    registers();
    cpu.execute_instruction<0x22>(l.maintenance, 4);
    tile_calls = palette_calls = phone_calls = create_calls = delete_calls = 0;
  }
  unsigned boundary() {
    for (unsigned step = 0; step < 2000000; ++step) {
      const auto pc = cpu.program_counter;
      if (pc == l.items || pc == l.music || pc == l.walk || pc == l.bicycle ||
          pc == l.escalator || pc == l.automatic || pc == l.camera)
        return pc;
      if (pc == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Maintenance damaged caller context");
        return 0;
      }
      if (pc == 0xc00172)
        ++tile_calls;
      if (pc == (l.shift ? 0xc00317u : 0xc0030fu))
        ++palette_calls;
      if (pc == l.phone)
        ++phone_calls;
      if (pc == l.create)
        ++create_calls;
      if (pc == l.destroy)
        ++delete_calls;
      cpu.step_instruction();
    }
    throw std::runtime_error("Original maintenance did not return " +
                             cpu.describe_registers() + ": " + context);
  }
  void respond(unsigned pc) {
    cpu.accumulator = 0xbeef;
    cpu.x_index = 0xace1;
    cpu.y_index = 0x1357;
    if (pc == l.items || pc == l.camera)
      cpu.execute_instruction<0x6b>(0, 1);
    else
      cpu.execute_instruction<0x60>(0, 1);
  }
};
void compare(Oracle &o, const Fixture &f) {
  const auto &l = o.l;
  const unsigned prepared_xy = l.shift ? 0xa033 : 0x9e2d;
  require(o.get(prepared_xy) == f.prepared.x &&
              o.get(prepared_xy + 2) == f.prepared.y &&
              o.get(prepared_xy + 4) == f.prepared.direction,
          "Maintenance changed borrowed prepared coordinates");
  require(o.get(l.possessed) == f.state.possessed_players &&
              o.get(l.sector_x) == f.state.last_sector_x &&
              o.get(l.sector_y) == f.state.last_sector_y,
          "Possession/sector maintenance state differs");
  require(o.get(l.auto_music) == f.state.auto_sector_music &&
              o.get(l.loaded_items) == f.items.loaded_count,
          "Borrowed service inputs changed");
  require(o.get(l.cached_role) == *f.party.projection.leader_role * 2 &&
              o.get(l.cached_direction) == f.party.projection.direction &&
              o.get(l.activity) == f.input.player_activity,
          "Final follower/input caches differ");
  require(o.get(l.timer) == f.phone.timer && o.get(l.queued) == f.phone.queued,
          "Phone timer/queued state differs");
  require(o.get(l.current) == f.queue_state.current &&
              o.get(l.next) == f.queue_state.next &&
              o.get(l.current_type) == f.queue_state.current_type &&
              o.get(l.pending) == f.queue_state.pending,
          "Phone queue cursor/type/pending state differs");
  for (unsigned i = 0; i < 4; ++i)
    require(o.get(l.records + i * 6) == f.queue_state.records[i].type &&
                std::equal(f.queue_state.records[i].key.begin(),
                           f.queue_state.records[i].key.end(),
                           o.bus->work_ram.begin() + l.records + i * 6 + 2),
            "Phone queue record differs");
  require(std::equal(f.text.event_flags.begin(), f.text.event_flags.end(),
                     o.bus->work_ram.begin() + l.flags),
          "Maintenance changed story flags");
  require(o.get(0x24) == 0x71ab && o.get(0x26) == 0x37dc,
          "Maintenance consumed undocumented randomness");
  const std::array<std::pair<unsigned, unsigned>, 12> game{
      {{128, f.control_state.x_fraction},
       {130, f.leader.leader_x},
       {132, f.control_state.y_fraction},
       {134, f.leader.leader_y},
       {136, f.trail.next_write},
       {138, f.leader.leader_direction},
       {140, f.control_state.trodden_surface_flags},
       {142, f.leader.walking_style},
       {144, f.control_state.moved_this_tick},
       {146, f.leader.area_character_style},
       {148, f.party.current_leader_role},
       {176, f.control_state.automatic_mode}}};
  for (auto [offset, value] : game)
    require(o.get(o.game(offset)) == value,
            "Control game field differs at " + std::to_string(offset));
  require(o.get(l.surface) == f.leader.surface_flags &&
              o.get(l.origin_x) == f.leader.checked_surface_origin.x &&
              o.get(l.origin_y) == f.leader.checked_surface_origin.y,
          "Original terrain sampling differs");
  require(o.get(l.intangible) ==
                  f.actors.appearance_scene().intangibility_ticks &&
              o.get(l.camera_moved) == f.control_state.camera_moved &&
              o.get(l.footstep) ==
                  f.actors.appearance_scene().footstep_override.value_or(0) * 2,
          "Control appearance/camera publication differs");
  for (unsigned i = 0; i < 6; ++i)
    require(o.get(o.char_cursor(i)) == f.party.trail_cursors[i],
            "Trail character cursor differs");
  for (unsigned i = 0; i < 256; ++i) {
    const auto &p = f.trail.points[i];
    const unsigned values[]{
        p.x, p.y, p.surface_flags, p.walking_style, p.direction, p.reserved};
    for (unsigned j = 0; j < 6; ++j)
      require(o.get(l.trail + i * 12 + j * 2) == values[j],
              "Trail point differs");
  }
  std::vector<unsigned> roles;
  unsigned next = o.get(l.first);
  for (unsigned guard = 0; next != 65535 && guard < 31; ++guard) {
    require(next < 60 && !(next & 1), "Original active role list is corrupt");
    roles.push_back(next / 2);
    next = o.get(l.next_actor + next);
  }
  const auto ids = f.actors.actors();
  require(next == 65535 && ids.size() == roles.size(),
          "Ghost active-list size differs");
  for (unsigned i = 0; i < ids.size(); ++i)
    require(f.actors.actor(ids[i]).authored_role() == roles[i],
            "Ghost create/delete changed active-role order");
  if (f.state.possession_actor) {
    const auto &ghost = f.actors.actor(*f.state.possession_actor);
    const auto role = *ghost.authored_role();
    const unsigned index = role * 2, delta = l.shift ? 10 : 0;
    require(o.get(l.ghost) == role, "Ghost logical identity differs");
    for (unsigned axis = 0; axis < 3; ++axis) {
      require(ghost.action().position[axis] ==
                  (o.get(0xb8e - delta + axis * 60 + index) << 16 |
                   o.get(0xc42 - delta + axis * 60 + index)),
              "Ghost coordinate/fraction differs");
      require(ghost.action().velocity[axis] ==
                  (o.get(0xcf6 - delta + axis * 60 + index) << 16 |
                   o.get(0xdaa - delta + axis * 60 + index)),
              "Ghost velocity/fraction differs");
    }
    for (unsigned i = 0; i < 8; ++i)
      require(ghost.action().variables[i] ==
                  o.get(0xe5e - delta + i * 60 + index),
              "Ghost prepared variables differ");
    require(ghost.action().animation == o.get(0x10f2 - delta + index) &&
                std::uint16_t(ghost.behavior.projected_x) ==
                    o.get(0xb16 - delta + index) &&
                std::uint16_t(ghost.behavior.projected_y) ==
                    o.get(0xb52 - delta + index),
            "Ghost hidden initial appearance differs");
    const unsigned task = o.get(0xada - delta + index),
                   entry = f.content.program->scripts()->entry(786) + 0xc00000;
    require(o.get(0xa62 - delta + index) == 786 &&
                o.get(0x13fe - delta + task) == (entry & 65535) &&
                o.get(0x148a - delta + task) == entry >> 16 &&
                !o.get(0x1372 - delta + task) && !o.get(0x12e6 - delta + task),
            "Ghost authored task start differs");
  } else
    require(o.get(l.ghost) == 65535, "Source retained an extra ghost identity");
  if (f.animation.active()) {
    const unsigned state = l.shift ? 0x47e2 : 0x445c;
    require(o.get(state) == f.animation.ticks_until_change() &&
                o.get(state + 2) == f.animation.next_frame_index(),
            "Palette animation advanced a different number of ticks");
  }
  for (unsigned p = 0; p < 6; ++p)
    for (unsigned i = 1; i < 16; ++i)
      require(f.palettes.scenery[p][i] == argb(o.get(0x240 + (p * 16 + i) * 2)),
              "Maintenance palette publication differs");
  const auto &graphics = f.area.graphics();
  for (unsigned tile = 0; tile < graphics.size(); ++tile)
    for (unsigned y = 0; y < 8; ++y)
      for (unsigned x = 0; x < 8; ++x) {
        unsigned color = 0;
        for (unsigned plane = 0; plane < 4; ++plane)
          color |= ((o.bus->video_ram[tile * 32 + y * 2 + (plane / 2) * 16 +
                                      (plane & 1)] >>
                     (7 - x)) &
                    1)
                   << plane;
        require(graphics[tile][y * 8 + x] == color,
                "Maintenance animated map pixels differ");
        ++o.counts.pixels;
      }
}
WorldMaintenanceRequest expected(const Oracle &o, unsigned pc) {
  if (pc == o.l.items)
    return {WorldMaintenanceService::ItemTransformations, {}};
  if (pc == o.l.music)
    return {WorldMaintenanceService::SectorMusic, {}};
  auto kind = pc == o.l.walk        ? WorldControlService::Walk
              : pc == o.l.bicycle   ? WorldControlService::Bicycle
              : pc == o.l.escalator ? WorldControlService::Escalator
              : pc == o.l.automatic ? WorldControlService::Automatic
                                    : WorldControlService::RefreshCamera;
  WorldControlRequest control{kind, {}, {}};
  if (kind == WorldControlService::Bicycle)
    control.previous_movement = o.cpu.accumulator;
  if (kind == WorldControlService::RefreshCamera)
    control.camera = {std::uint16_t(o.cpu.accumulator - 128),
                      std::uint16_t(o.cpu.x_index - 112)};
  return {WorldMaintenanceService::Control, control};
}
void drive(Oracle &o, Fixture &f, unsigned scenario, unsigned serial) {
  o.begin();
  auto operation = f.maintenance.begin();
  ++o.counts.calls;
  require(!operation->advance(0), "Zero maintenance budget progressed");
  for (unsigned stage = 0; stage < 8; ++stage) {
    const unsigned pc = o.boundary();
    bool complete = false;
    for (unsigned budget = 0; budget < 16 && !operation->request() && !complete;
         ++budget)
      complete = operation->advance(serial & 1 ? 1 : 256);
    require(complete == !pc,
            "Native/source maintenance completion boundary differs");
    compare(o, f);
    if (!pc) {
      require(operation->complete() && !operation->request() &&
                  !f.maintenance.busy(),
              "Completed maintenance retained a request");
      require(operation->advance(1), "Completed maintenance replayed");
      compare(o, f);
      o.counts.created += o.create_calls;
      o.counts.deleted += o.delete_calls;
      o.counts.phones += o.phone_calls;
      o.counts.tile_ticks += o.tile_calls;
      o.counts.palette_ticks += o.palette_calls;
      if (f.control_state.encounter.mode) {
        ++o.counts.battles;
        require(!stage && !o.create_calls && !o.delete_calls &&
                    !o.phone_calls && !o.tile_calls && !o.palette_calls,
                "Battle skip executed maintenance work");
      }
      return;
    }
    const auto request = expected(o, pc);
    require(operation->request() == request,
            "Maintenance service kind/order/input differs");
    for (unsigned poll = 0; poll < 3; ++poll) {
      require(!operation->advance(poll) && operation->request() == request,
              "Pending service replayed or changed");
      compare(o, f);
      ++o.counts.polls;
    }
    if (pc == o.l.items) {
      ++o.counts.items;
      // A completed item reducer may change shared phone/sector inputs.
      // Both owners receive the same controlled native service result.
      if (scenario & 1) {
        f.state.auto_sector_music = 1;
        o.put(o.l.auto_music, 1);
      }
    } else if (pc == o.l.music) {
      ++o.counts.music;
      f.leader.leader_direction = (f.leader.leader_direction + 1) & 7;
      o.put(o.game(138), f.leader.leader_direction);
    } else if (pc == o.l.camera) {
      ++o.counts.cameras;
      require(o.cpu.accumulator == f.leader.leader_x &&
                  o.cpu.x_index == f.leader.leader_y,
              "Camera request used stale leader position");
    } else {
      ++o.counts.modes;
      f.control_state.moved_this_tick = scenario & 1;
      o.put(o.game(144), f.control_state.moved_this_tick);
      if (f.control_state.moved_this_tick) {
        f.leader.leader_x = std::uint16_t(f.leader.leader_x + 192);
        f.leader.leader_y = std::uint16_t(f.leader.leader_y + 128);
        o.put(o.game(130), f.leader.leader_x);
        o.put(o.game(134), f.leader.leader_y);
        o.cache(f);
      }
    }
    o.respond(pc);
    operation->respond();
  }
  throw std::runtime_error(
      "Maintenance exceeded its finite source boundary count: " + context);
}
void configure(Fixture &f, unsigned scenario, unsigned gate) {
  f.state.possessed_players = scenario % 3 == 0 ? 2 : 0;
  f.items.loaded_count = scenario & 1 ? 3 : 0;
  f.state.auto_sector_music = (scenario >> 1) & 1;
  f.state.last_sector_x = scenario % 4 == 0 ? 0 : 9;
  f.state.last_sector_y = scenario % 4 == 0 ? 0 : 8;
  f.control_state.moved_this_tick = 0x1234;
  f.control_state.automatic_mode =
      scenario % 4 == 3 ? (scenario & 1 ? 2 : 1) : 0;
  f.leader.walking_style = scenario % 4 == 1 ? 3 : scenario % 4 == 2 ? 12 : 0;
  f.input.player_activity = 0x5432;
  f.phone.timer = gate == 1 ? 27 : 0;
  f.phone.queued = gate == 2 ? 1 : 0;
  f.windows.prompt_state().battle_mode = gate == 3;
  f.actors.appearance_scene().battle_swirl_ticks = gate == 4 ? 17 : 0;
  f.state.enemy_touched = gate == 5;
  if (gate == 6)
    f.text.event_flags[(775 - 1) / 8] |= 1u << ((775 - 1) % 8);
  if (gate == 7) {
    auto open = f.windows.begin(
        {dialogue::WindowAction::Open, dialogue::WindowId{0}, {}, 0});
    for (unsigned step = 0; step < 32; ++step) {
      const auto progress = open->advance();
      if (progress == dialogue::OutputProgress::Complete)
        break;
      if (progress == dialogue::OutputProgress::Suspended)
        open->respond();
    }
    require(!f.windows.draw_order().empty(),
            "Window phone gate fixture did not open");
  }
  f.queue_state.current = 2;
  f.queue_state.next = scenario % 4;
  f.queue_state.pending = 0x5678;
  f.queue_state.current_type = gate == 8 ? 10 : 0xffff;
  for (unsigned i = 0; i < 4; ++i)
    f.queue_state.records[i] = {std::uint16_t(i + 1),
                                {std::uint8_t(i), 2, 3, 4}};
  if (gate == 9)
    f.actors.actor(f.leader_id).scripts_and_physics_enabled = false;
  if (gate == 10)
    f.actors.actor(f.leader_id).tick_callback_enabled = false;
  if (gate == 11) {
    auto &a = f.actors.actor(f.leader_id);
    a.action().animation = 0;
    EightDirectionAnimation blink;
    blink.intangibility_ticks = 46;
    a.appearance.step_eight(a.action(), blink);
    a.appearance.step_eight(a.action(), blink);
    require(a.appearance.flashing_hidden(), "Ghost blink gate fixture failed");
  }
  f.control_state.encounter.mode = gate == 12;
}
void verify(const eb::GameAssets &assets) {
  Content content(assets);
  Counts counts;
  for (unsigned scenario = 0; scenario < 8; ++scenario)
    for (unsigned gate = 0; gate < 13; ++gate) {
      context = assets.title + " scenario=" + std::to_string(scenario) +
                " gate=" + std::to_string(gate);
      Fixture f(content, scenario & 2);
      configure(f, scenario, gate);
      Oracle o(content, counts);
      o.seed(f);
      drive(o, f, scenario, scenario + gate);
      if (f.state.possession_actor) {
        require(f.state.possessed_players == 0,
                "Maintenance failed to consume possession count");
        context += " existing ghost battle pause";
        f.control_state.encounter.mode = 1;
        o.put(o.l.battle, 1);
        const auto retained = f.state.possession_actor;
        drive(o, f, scenario, 0);
        require(f.state.possession_actor == retained,
                "Battle pause erased existing ghost");
        f.control_state.encounter.mode = 0;
        o.put(o.l.battle, 0);
        context += " release";
        drive(o, f, scenario, 1);
        require(!f.state.possession_actor,
                "Second maintenance failed to erase unpossessed ghost");
      }
    }
  // Keep both authored animation clocks running through wraparound while
  // service polling varies, then insert a battle pause without resetting them.
  Fixture f(content, true);
  Oracle o(content, counts);
  f.phone.timer = 1;
  f.state.auto_sector_music = 1;
  f.items.loaded_count = 1;
  o.seed(f);
  for (unsigned tick = 0; tick < 96; ++tick) {
    context =
        assets.title + " continued animation tick=" + std::to_string(tick);
    f.control_state.encounter.mode = tick % 11 == 7;
    o.put(o.l.battle, f.control_state.encounter.mode);
    drive(o, f, tick & 1, tick);
  }
  require(counts.created && counts.deleted && counts.phones && counts.items &&
              counts.modes && counts.cameras && counts.music &&
              counts.battles && counts.tile_ticks && counts.palette_ticks,
          "Maintenance reference coverage is vacuous");
  std::cout << "PASS " << assets.title << ": " << counts.calls
            << " actual maintenance calls, " << counts.created
            << " ghost creates/" << counts.deleted << " deletes, "
            << counts.phones << " Dad-phone calls, " << counts.items << " item/"
            << counts.modes << " mode/" << counts.cameras << " camera/"
            << counts.music << " music boundaries, " << counts.polls
            << " unchanged service polls, " << counts.battles
            << " battle skips, " << counts.tile_ticks << " tile/"
            << counts.palette_ticks << " palette ticks, " << counts.pixels
            << " indexed pixels\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc >= 2, "native_world_maintenance_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << ": " << context << '\n';
    return 1;
  }
}
