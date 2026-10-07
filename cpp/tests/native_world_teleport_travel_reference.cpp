// Original executable helpers are reference-only. Native travel retains typed
// world owners and fixed-point fields, without a gameplay CPU or WRAM image.
#include "eb/direct_scene.hpp"
#include <map>
#define main retained_world_battle_return_reference_main
#include "native_world_battle_return_reference.cpp"
#undef main
#include "eb/native/world/teleport/travel.hpp"
namespace teleport_reference {
using namespace world_battle_reference;
namespace teleport = world::teleport;
std::uint32_t longword(Source &s, unsigned address) {
  return s.word(address) | std::uint32_t(s.word(address + 2)) << 16;
}
void longword(Source &s, unsigned address, std::uint32_t value) {
  s.put(address, value);
  s.put(address + 2, value >> 16);
}
teleport::MovementOwners movement_owners(Rig &r) {
  return {r.w.startup_owners(),
          r.w.following,
          r.content.walking,
          r.content.enemy_motion,
          r.content.collision,
          r.w.area,
          r.w.input,
          &r.w.peripherals};
}
teleport::Owners owners(Rig &r, teleport::MovementState &movement) {
  return {r.w.startup_owners(),
          r.teleport,
          movement,
          r.w.following,
          r.content.walking,
          r.content.enemy_motion,
          r.content.collision,
          r.w.area,
          r.w.input,
          r.content.teleports,
          *r.w.map_load,
          r.w.map_state,
          *r.w.relocation,
          r.w.npc_commands,
          r.w.music,
          r.w.music_state,
          r.audio,
          r.w.presentation,
          r.b.video,
          r.content.layers,
          r.w.layer,
          r.w.visual,
          r.w.frame_display,
          r.w.fade,
          &r.w.peripherals};
}
void window(Source &source, Rig &rig, const std::string &context) {
  const auto &actual = rig.w.map_state.collision_window;
  check(actual.initialized(),
        context + " actual collision window is uninitialized");
  for (unsigned cell = 0; cell < 4096; ++cell)
    check(
        source.bus->work_ram[0xe000 + cell] == actual.cells()[cell],
        context + " collision window differs cell" + std::to_string(cell) +
            " original=" + std::to_string(source.bus->work_ram[0xe000 + cell]) +
            " native=" + std::to_string(actual.cells()[cell]));
  for (unsigned block = 0; block < 256; ++block)
    check(source.word(0xf000 + block * 2) == actual.blocks()[block],
          context + " collision block selector differs " +
              std::to_string(block));
}
void bootstrap(Rig &rig, Source &source, bool companion = false,
               CollisionPoint position = {0x456, 0x678}) {
  source.initialize();
  auto snapshot = saved(rig, false);
  snapshot.state.game.leader_x = position.x;
  snapshot.state.game.leader_y = position.y;
  snapshot.state.game.leader_direction = 2;
  snapshot.handoff =
      saves::prepare_continue(snapshot.state, *rig.content.continuing);
  if (companion) {
    snapshot.state.game.party_count = snapshot.state.game.controlled_count = 2;
    snapshot.state.game.party_order[1] = snapshot.state.game.display_order[1] =
        2;
    snapshot.state.game.controlled_order[1] = 1;
    snapshot.state.characters[1] = snapshot.state.characters[0];
    snapshot.handoff =
        saves::prepare_continue(snapshot.state, *rig.content.continuing);
  }
  auto archive = saves::SaveArchive::empty(rig.content.version);
  archive.save(0, snapshot.state, 0);
  auto startup = rig.w.startup->begin(snapshot);
  while (startup->stage() != WorldStartupStage::ResetWorld) {
    const auto progress = startup->advance(1);
    if (progress == dialogue::Progress::Suspended)
      rig.service(*startup->runtime_operation());
  }
  seed(source, rig, archive);
  near_call(source, source.jp ? 0xc0b652 : 0xc0b67f);
  rig.drive(*startup);
  startup.reset();
  window(source, rig, "Bootstrap");
}
void compare(Source &source, Rig &rig, const teleport::MovementState &movement,
             const std::string &context) {
  const unsigned base = source.jp ? 0xa145 : 0x9f43,
                 game = source.jp ? 0x9aa9 : 0x97f5, delta = source.jp ? 3 : 0;
  auto word = [&](unsigned address, unsigned native, const char *field) {
    check(source.word(address) == native,
          context + " " + field +
              " differs original=" + std::to_string(source.word(address)) +
              " native=" + std::to_string(native));
  };
  auto integer = [&](unsigned address, std::uint32_t native,
                     const char *field) {
    check(longword(source, address) == native,
          context + " " + field +
              " differs original=" + std::to_string(longword(source, address)) +
              " native=" + std::to_string(native));
  };
  word(base, rig.teleport.state, "state");
  integer(base + 2, rig.teleport.speed, "speed");
  integer(base + 6, movement.speed_x, "speedX");
  integer(base + 10, movement.speed_y, "speedY");
  integer(base + 14, movement.next_x, "nextX");
  integer(base + 18, movement.next_y, "nextY");
  word(base + 22, movement.success_screen_speed_x, "screenSpeedX");
  word(base + 24, movement.success_screen_x, "successScreenX");
  word(base + 26, movement.success_screen_speed_y, "screenSpeedY");
  word(base + 28, movement.success_screen_y, "successScreenY");
  word(base + 30, rig.teleport.beta_angle, "angle");
  word(base + 32, rig.teleport.beta_progress, "progress");
  word(base + 34, rig.teleport.better_progress, "betterProgress");
  word(base + 36, rig.teleport.beta_x_adjustment, "adjustX");
  word(base + 38, rig.teleport.beta_y_adjustment, "adjustY");
  word(game + 130 - delta, rig.w.interactions.state().leader_x, "leaderX");
  word(game + 134 - delta, rig.w.interactions.state().leader_y, "leaderY");
  word(game + 128 - delta, rig.w.control.x_fraction, "fractionX");
  word(game + 132 - delta, rig.w.control.y_fraction, "fractionY");
  word(game + 138 - delta, rig.w.interactions.state().leader_direction,
       "direction");
  word(game + 136 - delta, rig.w.trail.next_write, "trailNext");
  for (unsigned point = 0; point < 256; ++point) {
    const auto &value = rig.w.trail.points[point];
    const unsigned at = (source.jp ? 0x54dc : 0x5156) + point * 12;
    word(at, value.x, ("trailX" + std::to_string(point)).c_str());
    word(at + 2, value.y, ("trailY" + std::to_string(point)).c_str());
    word(at + 4, value.surface_flags,
         ("trailSurface" + std::to_string(point)).c_str());
    word(at + 6, value.walking_style, "trailStyle");
    word(at + 8, value.direction, "trailDirection");
    word(at + 10, value.reserved, "trailReserved");
  }
}
void ordinary_entry(Source &source, Rig &rig, const char *phase) {
  const auto id = rig.w.actors.actor_for_role(0);
  const auto retained = rig.w.actors.authored_position(0);
  const auto pause = rig.w.actors.authored_pause(0);
  std::cout << "FRONTIER ordinary role0 " << phase << " "
            << (source.jp ? "JP" : "US")
            << " source_script=" << source.word(source.jp ? 0xa58 : 0xa62)
            << " source_callback_bank=" << std::hex
            << source.word(source.jp ? 0x10ac : 0x10b6) << std::dec
            << " source_xy=" << source.word(source.jp ? 0xb84 : 0xb8e) << ","
            << source.word(source.jp ? 0xbc0 : 0xbca)
            << " source_npc=" << source.word(source.jp ? 0x3098 : 0x2c9a)
            << " source_sprite=" << source.word(source.jp ? 0x30d4 : 0x2cd6)
            << " native_active=" << bool(id) << " native_style="
            << (id ? rig.w.actors.actor(*id).script_style() : 0xffff)
            << " native_retained_xy=" << (retained[0] >> 16) << ","
            << (retained[1] >> 16)
            << " native_retained_npc=" << rig.w.actors.authored_npc_selector(0)
            << " native_retained_sprite="
            << rig.w.actors.authored_sprite_selector(0)
            << " native_scripts=" << pause.scripts_and_physics_enabled
            << " native_tick=" << pause.tick_callback_enabled << '\n';
}
void actors(Source &source, Rig &rig, const std::string &context) {
  compare_party(source, rig);
  for (unsigned role = 23; role < 30; ++role) {
    const auto id = rig.w.actors.actor_for_role(role);
    const unsigned script =
        id ? rig.w.actors.actor(*id).script_style() : 0xffff;
    check(source.word((source.jp ? 0xa58 : 0xa62) + role * 2) == script,
          context + " actor occupancy differs role" + std::to_string(role) +
              " source=" +
              std::to_string(
                  source.word((source.jp ? 0xa58 : 0xa62) + role * 2)) +
              " native=" + std::to_string(script));
    const auto pause = rig.w.actors.authored_pause(role);
    const auto bank = source.word((source.jp ? 0x10ac : 0x10b6) + role * 2);
    check(pause.scripts_and_physics_enabled == !(bank & 0x4000) &&
              pause.tick_callback_enabled == !(bank & 0x8000),
          context + " actor pause bank differs role" + std::to_string(role));
    if (!id)
      continue;
    const auto &actor = rig.w.actors.actor(*id);
    for (unsigned axis = 0; axis < 3; ++axis)
      check(
          actor.action().position[axis] ==
              (source.word((source.jp ? 0xb84 : 0xb8e) + axis * 60 + role * 2)
                   << 16 |
               source.word((source.jp ? 0xc38 : 0xc42) + axis * 60 + role * 2)),
          context + " actor position differs role" + std::to_string(role) +
              " axis" + std::to_string(axis));
    for (unsigned variable = 0; variable < 8; ++variable)
      check(actor.action().variables[variable] ==
                source.word((source.jp ? 0xe54 : 0xe5e) + variable * 60 +
                            role * 2),
            context + " actor variable differs role" + std::to_string(role) +
                " variable" + std::to_string(variable));
    check(actor.behavior.direction ==
                  source.word((source.jp ? 0x2ef4 : 0x2af6) + role * 2) &&
              actor.behavior.surface_flags ==
                  source.word((source.jp ? 0x2fa8 : 0x2baa) + role * 2),
          context + " actor direction/surface differs role" +
              std::to_string(role));
  }
  const auto &queue = rig.w.queue.state();
  const unsigned records = source.jp ? 0x6170 : 0x5dea;
  check(queue.current == source.word(source.jp ? 0x6188 : 0x5e02) &&
            queue.next == source.word(source.jp ? 0x618a : 0x5e04) &&
            queue.pending == source.word(source.jp ? 0x6120 : 0x5d9a),
        context + " actual queued text indices differ");
  for (unsigned index = queue.current; index != queue.next;
       index = (index + 1) & 3) {
    const auto &record = queue.records[index];
    check(
        record.type == source.word(records + index * 6) &&
            std::equal(record.key.begin(), record.key.end(),
                       source.bus->work_ram.begin() + records + index * 6 + 2),
        context + " actual queued mastery text differs");
  }
}
CollisionPoint clear_fixture(const eb::GameAssets &assets, bool beta) {
  Rig picker(assets);
  Source source(assets);
  bootstrap(picker, source);
  const auto shape = picker.w.actors.actor(*picker.w.actors.actor_for_role(24))
                         .appearance_context.shape;
  for (unsigned y = 128; y < 10112; y += 32)
    for (unsigned x = 128; x < 7488; x += 32) {
      const auto &sector = picker.content.map.sector(x >> 8, y >> 7);
      if ((sector.attributes & 0x80) || !sector.combination ||
          !picker.content.map.block_id(x >> 5, y >> 5))
        continue;
      const auto area = picker.content.map.prepare(sector.combination,
                                                   picker.w.text.event_flags);
      bool clear = true;
      for (int dy = beta ? -24 : 0; dy <= (beta ? 24 : 0); dy += 4)
        for (int dx = beta ? -24 : 0; dx <= (beta ? 24 : 560); dx += 4) {
          const auto at_x = std::uint16_t(x + dx), at_y = std::uint16_t(y + dy);
          if (picker.content.map.sector(at_x >> 8, at_y >> 7).combination !=
                  sector.combination ||
              picker.content.collision.vertical_surfaces(
                  [&](CollisionCell cell) {
                    return area.collision(cell.x, cell.y);
                  },
                  {at_x, at_y}, shape) &
                  0xc0) {
            clear = false;
            break;
          }
        }
      if (clear) {
        std::cout << "AUTHORED clear " << (beta ? "beta" : "alpha")
                  << " fixture " << assets.title << " x=" << x << " y=" << y
                  << '\n';
        return {std::uint16_t(x), std::uint16_t(y)};
      }
    }
  throw std::runtime_error("No actual authored alpha runway found");
}
void travel(const eb::GameAssets &assets, unsigned style,
            bool companion = false, CollisionPoint position = {0x456, 0x678}) {
  Rig rig(assets);
  Source source(assets);
  bootstrap(rig, source, companion, position);
  if (style == 1 && !companion)
    ordinary_entry(source, rig, "post-bootstrap");
  teleport::MovementState movement;
  teleport::Travel owner(owners(rig, movement));
  const unsigned base = source.jp ? 0xa145 : 0x9f43;
  // The shared encounter fixture retains its incoming recursive-action
  // suppression. A standalone MAIN_LOOP caller resumes the actual actor owner.
  source.put(source.jp ? 0xa56 : 0xa60, 0);
  rig.w.clock.action_scripts_disabled = 0;
  source.fixed_buttons = 0;
  source.call(source.jp ? 0xc088a3 : 0xc088b1);
  source.call(source.jp ? 0xc09445 : 0xc09466);
  source.call(source.jp ? 0xc08b17 : 0xc08b26);
  source.call(source.jp ? 0xc0874c : 0xc08756);
  auto entered = rig.w.runtime->begin(story::TickKind::ActorFrame);
  rig.runtime(*entered);
  entered.reset();
  source.call(source.jp ? 0xc0885e : 0xc0886c, 1, 1);
  near_call(source, source.jp ? 0xc0dcd7 : 0xc0dd0f);
  rig.w.fade.begin_in(1, 1);
  for (unsigned frame = 0; rig.w.fade.active() && frame < 100; ++frame) {
    auto visible = rig.w.runtime->begin(story::TickKind::ActorFrame);
    rig.runtime(*visible);
    visible.reset();
  }
  check(!rig.w.fade.active() && rig.w.fade.state().brightness == 15 &&
            source.bus->work_ram[0xd] == 15,
        "Standalone PSI entry lacks a fully visible actual world");
  unsigned initial_trail_differences{};
  for (unsigned point = 0; point < 256; ++point)
    if (source.word((source.jp ? 0x54dc : 0x5156) + point * 12 + 4) !=
        rig.w.trail.points[point].surface_flags)
      ++initial_trail_differences;
  check(initial_trail_differences == 0,
        "Visible PSI preentry already differs in its actual trail");
  check(source.word(0x24) == rig.w.random.primary_word &&
            source.word(0x26) == rig.w.random.secondary_word,
        "Visible PSI entry RNG differs position=" + std::to_string(position.x) +
            "," + std::to_string(position.y) +
            " source=" + std::to_string(source.word(0x24)) + "," +
            std::to_string(source.word(0x26)) +
            " native=" + std::to_string(rig.w.random.primary_word) + "," +
            std::to_string(rig.w.random.secondary_word));
  if (style == 1 && !companion)
    ordinary_entry(source, rig, "visible-pretravel");
  rig.w.session.teleport_style = style;
  rig.w.actors.appearance_scene().teleport_destination = 1;
  source.put(base - 2, style);
  source.put(base - 4, 1);
  source.fixed_buttons = 0;
  const auto start_random = rig.w.random;
  std::map<unsigned, unsigned> source_random_callers;
  source.observer = [&](Source &s) {
    if (s.cpu.program_counter == (s.jp ? 0xc08e8bu : 0xc08e9au)) {
      const auto stack = s.cpu.stack_pointer;
      const unsigned caller = std::uint16_t(s.word(stack + 1) + 1) |
                              unsigned(s.bus->work_ram[stack + 3]) << 16;
      ++source_random_callers[caller];
    }
  };
  const auto polls = source.raw_inputs.size();
  source.call(source.jp ? 0xc088a3 : 0xc088b1);
  try {
    source.call(source.jp ? 0xc0ea63 : 0xc0ea99);
  } catch (const std::exception &e) {
    throw std::runtime_error(
        std::string(e.what()) + " style=" + std::to_string(style) +
        " state=" + std::to_string(source.word(base)) +
        " speed=" + std::to_string(longword(source, base + 2)) +
        " beta=" + std::to_string(source.word(base + 32)) +
        " better=" + std::to_string(source.word(base + 34)) +
        " polls=" + std::to_string(source.raw_inputs.size() - polls));
  }
  std::vector<std::array<std::uint16_t, 2>> input(
      source.raw_inputs.begin() + polls, source.raw_inputs.end());
  // Both callers sample the actual zero-button peripheral. Original CPU-time
  // NMIs during map preparation are measured separately from native explicit
  // waits; no fabricated polls or callee completion interception is used.
  rig.inputs = nullptr;
  rig.phase = "PSI travel";
  const auto native_polls = rig.w.clock.input_polls;
  auto operation = owner.begin();
  rig.drive(*operation);
  check(operation->complete(), "Actual PSI travel did not complete");
  check(rig.w.clock.input_polls - native_polls == input.size(),
        "Actual PSI caller poll count differs");
  compare(source, rig, movement, "Travel style" + std::to_string(style));
  window(source, rig, "Travel style" + std::to_string(style));
  actors(source, rig, "Travel style" + std::to_string(style));
  if (style == 1 && !companion)
    ordinary_entry(source, rig, "post-travel");
  if (source.word(0x24) != rig.w.random.primary_word ||
      source.word(0x26) != rig.w.random.secondary_word) {
    unsigned source_draws{}, native_draws{};
    auto random = start_random;
    for (unsigned draw = 0; draw < 10000; ++draw) {
      if (random.primary_word == source.word(0x24) &&
          random.secondary_word == source.word(0x26))
        source_draws = draw;
      if (random == rig.w.random)
        native_draws = draw;
      story::next_random(random);
    }
    std::cout << "RNG draws source=" << source_draws
              << " native=" << native_draws << '\n';
    for (const auto &[caller, draws] : source_random_callers)
      std::cout << "RNG source caller=" << std::hex << caller << std::dec
                << " draws=" << draws << '\n';
  }
  check(source.word(0x24) == rig.w.random.primary_word &&
            source.word(0x26) == rig.w.random.secondary_word,
        "Actual PSI caller RNG differs style" + std::to_string(style) +
            " position=" + std::to_string(position.x) + "," +
            std::to_string(position.y) +
            " source=" + std::to_string(source.word(0x24)) + "," +
            std::to_string(source.word(0x26)) +
            " native=" + std::to_string(rig.w.random.primary_word) + "," +
            std::to_string(rig.w.random.secondary_word));
  for (unsigned color = 0; color < 256; ++color)
    check(source.word(0x200 + color * 2) == rig.w.palette.staged_color(color),
          "Actual PSI staged palette differs color" + std::to_string(color));
  // The original callee can return during vblank. Complete its retained
  // physical scanout without executing CPU instructions or polling input.
  const auto instructions = source.cpu.instruction_count;
  const auto input_count = source.raw_inputs.size();
  source.bus->advance_master_clocks_with_refresh(1364 * 262);
  check(source.cpu.instruction_count == instructions &&
            source.raw_inputs.size() == input_count,
        "Completing source scanout advanced gameplay or input");
  const auto pixels = eb::rasterize_direct_scene({rig.w.runtime->frame(), {}});
  std::uint64_t pixel_differences{};
  for (unsigned pixel = 0; pixel < pixels.size(); ++pixel)
    if ((pixels[pixel] & 0xffffff) !=
        (source.bus->native_framebuffer[pixel] & 0xffffff))
      ++pixel_differences;
  check(operation->successful() == (style == 3 || style == 4 ||
                                    position != CollisionPoint{0x456, 0x678}),
        "Authored travel fixture did not cover its declared success/failure "
        "path");
  if (style == 5 && operation->successful())
    check(rig.w.queue.pending() &&
              rig.w.queue.state().records[rig.w.queue.state().current].type ==
                  8 &&
              rig.w.queue.state().records[rig.w.queue.state().current].key ==
                  rig.content.teleports.mastery_message(),
          "Actual successful style5 did not queue its regional mastery text");
  check(pixel_differences == 0, "Complete PSI caller scanout pixels differ");
  check(rig.w.actors.appearance_scene().teleport_destination ==
                source.word(base - 4) &&
            !rig.w.session.effect_in_progress &&
            !rig.w.clock.disabled_transitions && rig.w.party.party_status == 0,
        "Travel epilogue retained active destination/effect/failure state");
  std::cout << "PASS teleport mainloop " << assets.title << " style=" << style
            << " companions=" << companion << " start=" << position.x << ","
            << position.y << " success=" << operation->successful()
            << " source_polls=" << input.size()
            << " native_polls=" << rig.w.clock.input_polls - native_polls
            << " pixel_differences=" << pixel_differences
            << " instructions=" << source.cpu.instruction_count << '\n';
}
void velocity(const eb::GameAssets &assets) {
  Rig rig(assets);
  Source source(assets);
  source.initialize();
  teleport::MovementState fields;
  teleport::Movement movement(rig.teleport, fields, movement_owners(rig));
  const unsigned base = source.jp ? 0xa145 : 0x9f43,
                 game = source.jp ? 0x9aa9 : 0x97f5, delta = source.jp ? 3 : 0;
  std::uint64_t cases{};
  for (const unsigned state : {0u, 1u, 2u, 3u, 65535u})
    for (const unsigned area : {0u, 3u, 65535u})
      for (const std::uint32_t speed :
           {0u, 1u, 0xffffu, 0x10000u, 0x7ffffu, 0x8ffffu, 0x9ffffu, 0x100000u,
            0x7fffffffu, 0x80000000u, 0xffff0000u, 0xfffffff0u, 0xffffffffu})
        for (const unsigned direction :
             {0u, 1u, 2u, 3u, 4u, 5u, 6u, 7u, 65535u}) {
          rig.teleport.state = state;
          rig.teleport.speed = speed;
          rig.w.interactions.state().area_character_style = area;
          source.put(base, state);
          longword(source, base + 2, speed);
          source.put(game + 146 - delta, area);
          source.cpu.accumulator = direction;
          near_call(source, source.jp ? 0xc0dee7 : 0xc0df22);
          movement.velocity(direction);
          check(rig.teleport.speed == longword(source, base + 2) &&
                    fields.speed_x == longword(source, base + 6) &&
                    fields.speed_y == longword(source, base + 10),
                "Teleport C0DF22 fixed-point differs state=" +
                    std::to_string(state) + " area=" + std::to_string(area) +
                    " direction=" + std::to_string(direction) +
                    " speed=" + std::to_string(speed));
          ++cases;
        }
  std::cout << "PASS teleport velocity " << assets.title << " cases=" << cases
            << " instructions=" << source.cpu.instruction_count << '\n';
}
void leaders(const eb::GameAssets &assets) {
  Rig rig(assets);
  Source source(assets);
  bootstrap(rig, source);
  source.fixed_buttons = 0;
  teleport::MovementState fields;
  teleport::Movement movement(rig.teleport, fields, movement_owners(rig));
  const unsigned base = source.jp ? 0xa145 : 0x9f43,
                 game = source.jp ? 0x9aa9 : 0x97f5, delta = source.jp ? 3 : 0;
  std::uint64_t cases{};
  for (const unsigned style : {1u, 2u, 4u, 5u, 101u, 103u})
    for (unsigned direction = 0; direction < 8; ++direction)
      for (const unsigned speed : {0u, 0x8f321u, 0x9ffffu})
        for (const unsigned input : {0u, 0x100u, 0x800u, 0xf00u}) {
          fields = {0x1234, 0x5678, 0x9abc, 0xdef0, 1120, 1666, 0xfffc, 3};
          const unsigned state = style == 101 ? 1 : style == 103 ? 3 : 0;
          rig.teleport = {
              speed, std::uint16_t(state), 0x1234, 0xff8, 0x17f8, 1110, 1656};
          rig.w.session.teleport_style = style;
          rig.w.interactions.state().leader_x = 1110;
          rig.w.interactions.state().leader_y = 1656;
          rig.w.interactions.state().leader_direction = direction;
          rig.w.control.x_fraction = 0xa123;
          rig.w.control.y_fraction = 0xdef4;
          rig.w.interactions.state().area_character_style = 0;
          rig.w.input.state[0] = input;
          rig.w.trail.next_write = 255;
          source.put(base - 2, style);
          source.put(base, state);
          longword(source, base + 2, speed);
          longword(source, base + 6, fields.speed_x);
          longword(source, base + 10, fields.speed_y);
          longword(source, base + 14, fields.next_x);
          longword(source, base + 18, fields.next_y);
          source.put(base + 22, fields.success_screen_speed_x);
          source.put(base + 24, fields.success_screen_x);
          source.put(base + 26, fields.success_screen_speed_y);
          source.put(base + 28, fields.success_screen_y);
          source.put(base + 30, rig.teleport.beta_angle);
          source.put(base + 32, rig.teleport.beta_progress);
          source.put(base + 34, rig.teleport.better_progress);
          source.put(base + 36, 1110);
          source.put(base + 38, 1656);
          source.put(game + 130 - delta, 1110);
          source.put(game + 134 - delta, 1656);
          source.put(game + 138 - delta, direction);
          source.put(game + 128 - delta, 0xa123);
          source.put(game + 132 - delta, 0xdef4);
          source.put(game + 146 - delta, 0);
          source.put(game + 136 - delta, 255);
          source.put(0x65, input);
          for (unsigned point = 0; point < 256; ++point) {
            rig.w.trail.points[point] = {
                1110, 1656, 0, 0, std::uint16_t(direction), 0xa5cc};
            const auto at = (source.jp ? 0x54dc : 0x5156) + point * 12;
            source.put(at, 1110);
            source.put(at + 2, 1656);
            source.put(at + 4, 0);
            source.put(at + 6, 0);
            source.put(at + 8, direction);
            source.put(at + 10, 0xa5cc);
          }
          movement.phase(style == 101   ? teleport::MovementPhase::Departure
                         : style == 103 ? teleport::MovementPhase::Arrival
                         : style == 1 || style == 5
                             ? teleport::MovementPhase::Alpha
                             : teleport::MovementPhase::Beta);
          source.call(style == 101   ? (source.jp ? 0xc0e639 : 0xc0e674)
                      : style == 103 ? (source.jp ? 0xc0e73b : 0xc0e776)
                      : style == 1 || style == 5
                          ? (source.jp ? 0xc0e254 : 0xc0e28f)
                          : (source.jp ? 0xc0e4db : 0xc0e516));
          movement.tick(*rig.w.actors.actor_for_role(23),
                        ActorTickCallback::TeleportLeader);
          const auto context = "Leader style" + std::to_string(style) +
                               " direction" + std::to_string(direction) +
                               " input" + std::to_string(input);
          compare(source, rig, fields, context);
          window(source, rig, context);
          check(source.word(source.jp ? 0x470c : 0x4386) ==
                        rig.w.actors.scene().camera_x &&
                    source.word(source.jp ? 0x470e : 0x4388) ==
                        rig.w.actors.scene().camera_y,
                context + " actual CENTER_SCREEN differs original=" +
                    std::to_string(source.word(source.jp ? 0x470c : 0x4386)) +
                    "," +
                    std::to_string(source.word(source.jp ? 0x470e : 0x4388)) +
                    " native=" + std::to_string(rig.w.actors.scene().camera_x) +
                    "," + std::to_string(rig.w.actors.scene().camera_y));
          for (unsigned role = 24; role < 30; ++role)
            check(source.word((source.jp ? 0xf08 : 0xf12) + role * 2) ==
                      rig.w.actors.authored_variable(role, 3),
                  context + " animation speed role" + std::to_string(role) +
                      " differs");
          ++cases;
        }
  std::cout << "PASS teleport leader helpers " << assets.title
            << " cases=" << cases
            << " instructions=" << source.cpu.instruction_count << '\n';
}
void collision_window(const eb::GameAssets &assets) {
  Rig rig(assets);
  Source source(assets);
  bootstrap(rig, source);
  WorldCollisionWindow cold;
  for (bool sample : {false, true}) {
    bool rejected{};
    try {
      if (sample)
        (void)cold.sample({0, 0});
      else
        cold.refresh({0, 0}, rig.w.area);
    } catch (const std::logic_error &) {
      rejected = true;
    }
    check(rejected && !cold.initialized(),
          "Unloaded collision window manufactured retained terrain");
  }
  unsigned cases{};
  for (const CameraPosition camera :
       {CameraPosition{0xfff0, 0xffe0}, CameraPosition{8, 16},
        CameraPosition{0xfff8, 24}, CameraPosition{128, 0xfff8},
        CameraPosition{0, 0}, CameraPosition{512, 640},
        CameraPosition{0x456 - 128, 0x678 - 112}}) {
    source.cpu.accumulator = camera.x;
    source.cpu.x_index = camera.y;
    near_call(source, source.jp ? 0xc0156e : 0xc01558);
    rig.w.map_state.collision_window.refresh(camera, rig.w.area);
    window(source, rig, "Wrapped camera refresh" + std::to_string(cases));
    ++cases;
  }
  std::cout << "PASS actual retained collision window " << assets.title
            << " refreshes=" << cases
            << " cells=4096 blocks=256 cold_rejections=2\n";
}
void followers(const eb::GameAssets &assets) {
  Rig rig(assets);
  Source source(assets);
  bootstrap(rig, source, true);
  source.fixed_buttons = 0;
  teleport::MovementState fields;
  teleport::Movement movement(rig.teleport, fields, movement_owners(rig));
  const unsigned base = source.jp ? 0xa145 : 0x9f43,
                 chars = source.jp ? 0x9c7f : 0x99ce,
                 stride = source.jp ? 94 : 95;
  const unsigned vars = source.jp ? 0xe54 : 0xe5e,
                 absx = source.jp ? 0xb84 : 0xb8e,
                 fractionx = source.jp ? 0xc38 : 0xc42,
                 directions = source.jp ? 0x2ef4 : 0x2af6,
                 surfaces = source.jp ? 0x2fa8 : 0x2baa;
  std::uint64_t cases{};
  for (const bool failure : {false, true})
    for (const unsigned role : {24u, 25u})
      for (const unsigned cursor : {0u, 255u, 217u})
        for (const unsigned distance : {0u, 5u, 6u, 7u, 255u})
          for (const unsigned speed : {0u, 0x10000u, 0xffff0000u})
            for (const unsigned style : {0u, 4u, 7u, 8u, 65535u}) {
              const unsigned record = role - 24;
              auto &actor =
                  rig.w.actors.actor(*rig.w.actors.actor_for_role(role));
              rig.teleport.speed = speed;
              longword(source, base + 2, speed);
              rig.w.control.moved_this_tick = 0;
              source.put(
                  (source.jp ? 0x9aa9 : 0x97f5) + 144 - (source.jp ? 3 : 0), 0);
              rig.w.formation.trail_cursors[record] = cursor;
              rig.w.formation.selected_styles[record] = 0xabcd;
              if (record) {
                rig.w.formation.trail_cursors[0] = (cursor + distance) & 255;
                source.put(chars + 61 - (source.jp ? 1 : 0),
                           rig.w.formation.trail_cursors[0]);
              }
              source.put(chars + record * stride + 61 - (source.jp ? 1 : 0),
                         cursor);
              source.put(chars + record * stride + 55 - (source.jp ? 1 : 0),
                         0xabcd);
              actor.action().variables[7] = 0x1800;
              actor.action().variables[3] = 0x3333;
              actor.action().position[0] = 0x456a123;
              actor.action().position[1] = 0x678def4;
              actor.behavior.direction = 6;
              actor.behavior.surface_flags = 8;
              source.put(vars + role * 2 + 7 * 60, 0x1800);
              source.put(vars + role * 2 + 3 * 60, 0x3333);
              source.put(absx + role * 2, 0x456);
              source.put(absx + 60 + role * 2, 0x678);
              source.put(fractionx + role * 2, 0xa123);
              source.put(fractionx + 60 + role * 2, 0xdef4);
              source.put(directions + role * 2, 6);
              source.put(surfaces + role * 2, 8);
              const PartyTrailPoint point{1123, 1679,  12, std::uint16_t(style),
                                          3,    0x9988};
              rig.w.trail.points[cursor] = point;
              const auto at = (source.jp ? 0x54dc : 0x5156) + cursor * 12;
              source.put(at, point.x);
              source.put(at + 2, point.y);
              source.put(at + 4, point.surface_flags);
              source.put(at + 6, point.walking_style);
              source.put(at + 8, point.direction);
              source.put(at + 10, point.reserved);
              source.put(source.jp ? 0x1a38 : 0x1a42, role);
              // The real actor traversal owns the current character record;
              // C0E97C borrows it rather than selecting another member.
              source.put(source.jp ? 0x514c : 0x4dc6, chars + record * stride);
              source.call(failure ? (source.jp ? 0xc0e946 : 0xc0e97c)
                                  : (source.jp ? 0xc0e386 : 0xc0e3c1));
              movement.tick(*rig.w.actors.actor_for_role(role),
                            failure ? ActorTickCallback::TeleportFailureFollower
                                    : ActorTickCallback::TeleportFollower);
              const auto context =
                  std::string(failure ? "Failure follower role"
                                      : "Follower role") +
                  std::to_string(role) + " cursor" + std::to_string(cursor) +
                  " gap" + std::to_string(distance) + " style" +
                  std::to_string(style) + " speed" + std::to_string(speed);
              check(source.word(chars + record * stride + 61 -
                                (source.jp ? 1 : 0)) ==
                        rig.w.formation.trail_cursors[record],
                    context + " trail cursor differs");
              check(source.word(chars + record * stride + 55 -
                                (source.jp ? 1 : 0)) ==
                        rig.w.formation.selected_styles[record],
                    context + " selected style differs");
              for (unsigned variable = 0; variable < 8; ++variable)
                check(source.word(vars + role * 2 + variable * 60) ==
                          actor.action().variables[variable],
                      context + " actor variable differs " +
                          std::to_string(variable));
              check(source.word(absx + role * 2) ==
                            actor.action().position[0] >> 16 &&
                        source.word(absx + 60 + role * 2) ==
                            actor.action().position[1] >> 16 &&
                        source.word(fractionx + role * 2) ==
                            std::uint16_t(actor.action().position[0]) &&
                        source.word(fractionx + 60 + role * 2) ==
                            std::uint16_t(actor.action().position[1]) &&
                        source.word(directions + role * 2) ==
                            actor.behavior.direction &&
                        source.word(surfaces + role * 2) ==
                            actor.behavior.surface_flags,
                    context + " placement/fraction/direction/surface differs");
              const unsigned table_low = source.jp ? 0x2dc8 : 0x29ca,
                             table_high = source.jp ? 0x2e04 : 0x2a06;
              const unsigned table =
                  (source.word(table_low + role * 2) |
                   (source.word(table_high + role * 2) & 255) << 16) -
                  0xc00000;
              const auto group_at =
                  sprite_catalog_layout(assets.version).groups +
                  actor.appearance.sprite() * 4;
              unsigned header{};
              for (unsigned byte = 0; byte < 4; ++byte)
                header |= unsigned(assets.image[group_at + byte]) << (byte * 8);
              check(table == (header + 9) - 0xc00000,
                    context + " requested regional artwork differs");
              ++cases;
            }
  std::cout << "PASS teleport follower helper " << assets.title
            << " cases=" << cases
            << " instructions=" << source.cpu.instruction_count << '\n';
}
} // namespace teleport_reference
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      teleport_reference::velocity(assets);
      teleport_reference::leaders(assets);
      teleport_reference::followers(assets);
      teleport_reference::collision_window(assets);
      for (unsigned style : {1u, 2u, 3u, 4u, 5u})
        teleport_reference::travel(assets, style);
      teleport_reference::travel(assets, 2, true);
      teleport_reference::travel(assets, 4, true);
      const auto clear = teleport_reference::clear_fixture(assets, false);
      teleport_reference::travel(assets, 1, true, clear);
      teleport_reference::travel(assets, 5, true, clear);
      const auto beta = teleport_reference::clear_fixture(assets, true);
      teleport_reference::travel(assets, 2, true, beta);
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
