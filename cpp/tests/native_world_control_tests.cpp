// Real native owners with synthetic imported artwork/collision/window content.
// Movement, camera and text remain explicit boundaries; these tests supply
// their controlled live mutations and never pretend to run a player reducer.
#include "eb/native/world_maintenance.hpp"
#include "native_interaction_test_assets.hpp"
#include "native_world_movement_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
namespace data = interaction_test_assets;
unsigned checks{};
void check(bool okay, const char *message) {
  ++checks;
  if (!okay)
    throw std::runtime_error(message);
}
template <class F> void rejects(F &&f, const char *message) {
  bool rejected = false;
  try {
    f();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, message);
}
movement_test::Fixture map_content(unsigned surface) {
  movement_test::Fixture result;
  std::fill(result.bytes.begin(), result.bytes.begin() + 0x19000, 0);
  std::array<std::uint8_t, 16> cells;
  cells.fill(surface);
  result.pattern(cells);
  result.pointer(result.map_layout.animation_graphics, 0x1d700);
  result.bytes[0x1c800] = 1;
  result.bytes[0x1c801] = 2;
  result.bytes[0x1c802] = 3;
  result.word(0x1c803, 32);
  result.word(0x1c805, 0);
  result.word(0x1c807, 16);
  result.bytes[0x1d700] = 0x3f;
  result.bytes[0x1d701] = 0xff;
  result.bytes[0x1d702] = 0x3f;
  result.bytes[0x1d703] = 0;
  result.bytes[0x1d704] = 0xff;
  return result;
}
WorldPaletteAnimations palette_content() {
  std::vector<std::uint8_t> bytes(600);
  data::pointer(bytes, 0, 4);
  data::pointer(bytes, 4, 32);
  bytes[8] = 2;
  bytes[9] = 2;
  bytes[10] = 3;
  bytes[32] = 0xe1;
  bytes[33] = 127;
  for (unsigned frame = 0; frame < 2; ++frame)
    for (unsigned color = 0; color < 96; ++color)
      data::put(bytes, 34 + frame * 192 + color * 2, frame ? 0x03e0 : 0x7c00);
  bytes[418] = 0xff;
  return WorldPaletteAnimations(bytes, {0, 1});
}
AreaPalettes colors() {
  auto result = data::make_palettes();
  result.animation_id = 1;
  return result;
}
WorldControl &bind_flags(ActorWorld &actors, dialogue::State &text,
                         WorldControl &control) {
  actors.scene().event_flags = text.event_flags;
  return control;
}
struct Fixture {
  eb::GameVersion version;
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  story::InputState input;
  story::TickState clock;
  std::shared_ptr<SpriteResources> sprites = data::make_sprites();
  std::shared_ptr<const ActionScriptData> scripts =
      std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09}, 0,
                                         std::vector<std::uint32_t>{0});
  ActorWorld actors;
  WorldPartyState formation;
  PartyTrail trail;
  npcs::InteractionState leader;
  WorldControlState movement;
  movement_test::Fixture map;
  WorldCollision collision;
  WorldMapArea area;
  WorldControl control;
  WorldPaletteAnimations tracks = palette_content();
  AreaPalettes palettes = colors();
  AreaPaletteAnimation animation = tracks.prepare(palettes);
  WorldMaintenanceState state;
  party::ItemTransformationState items;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  PreparedActorState prepared{17, 19, 23, 6, {1, 2, 3, 4, 5, 6, 7, 8}, 0};
  WorldMaintenance maintenance;
  ActorId player{};
  explicit Fixture(eb::GameVersion region, unsigned surface = 12,
                   dialogue::ReferenceKey dad = {})
      : version(region), output(data::assets(region).fonts, text),
        windows(data::assets(region).input.import(), text, output),
        actors(sprites, scripts, region), map(map_content(surface)),
        collision(map.bytes, map.collision_layout), area(map.area()),
        control(actors, formation, trail, leader, movement,
                windows.prompt_state(), input, clock, collision, area),
        queue(region, queued, actors.appearance_scene().intangibility_ticks,
              phone,
              dad == dialogue::ReferenceKey{}
                  ? npcs::dad_message_reference(region)
                  : dad),
        maintenance(windows, bind_flags(actors, text, control), state, items,
                    queue, area, palettes, animation, prepared, {1, 0}) {
    player = create(24, 2);
    formation.roles[0] = 24; formation.current_leader_role = 24;
    leader.leader = player;
    leader.leader_x = 64;
    leader.leader_y = 80;
    leader.leader_direction = 2;
    trail.next_write = 17;
    for (unsigned i = 0; i < 256; ++i)
      trail.points[i] = {
          std::uint16_t(1000 + i),  std::uint16_t(2000 + i), 3, 4, 5,
          std::uint16_t(0xa500 + i)};
    formation.trail_cursors = {1, 2, 3, 4, 5, 6};
    input.state = {0x1234, 0xabcd};
    input.pressed = {3, 4};
    input.held = {5, 6};
    clock.frame_counter = 32;
  }
  ActorId create(unsigned role, unsigned record) {
    WorldActorSpec spec;
    spec.sprite = 1;
    spec.action.variables[1] = record;
    spec.action.animation = 0;
    spec.behavior.direction = 2;
    return *actors.create_authored(spec, {role, role + 1});
  }
  void flash(ActorId id) {
    auto &actor = actors.actor(id);
    actor.action().animation = 0;
    actor.action().variables[2] = 2;
    actor.action().variables[3] = 3;
    EightDirectionAnimation context{1, 0, 0, 0, 44};
    actor.appearance.step_eight(actor.action(), context);
    actor.appearance.step_eight(actor.action(), context);
    check(actor.appearance.flashing_hidden(),
          "Fixture failed to create actual sprite flashing");
  }
};
void modes(eb::GameVersion version) {
  for (const unsigned automatic : {0u, 1u, 2u, 0xffffu})
    for (const unsigned style : {0u, 3u, 12u, 0xffffu})
      for (const unsigned surface : {0u, 8u, 12u}) {
        Fixture f(version, surface);
        f.movement.automatic_mode = automatic;
        f.movement.moved_this_tick = 9;
        f.leader.walking_style = style;
        const auto original_input = f.input;
        const auto original_trail = f.trail;
        const auto second = f.create(29, 5), other = f.create(23, 0);
        f.flash(f.player);
        f.flash(second);
        f.flash(other);
        f.actors.appearance_scene().intangibility_ticks = 2;
        auto op = f.control.begin();
        const auto expected = automatic     ? WorldControlService::Automatic
                              : style == 12 ? WorldControlService::Escalator
                              : style == 3  ? WorldControlService::Bicycle
                                            : WorldControlService::Walk;
        check(!op->advance() && op->request()->kind == expected,
              "Control selected the wrong movement mode");
        check(op->request()->previous_movement ==
                  (expected == WorldControlService::Bicycle ? 9 : 0),
              "Control exposed prior movement outside the bicycle contract");
        check(f.actors.appearance_scene().intangibility_ticks == 1 &&
                  !f.actors.actor(f.player).appearance.flashing_hidden() &&
                  !f.actors.actor(second).appearance.flashing_hidden() &&
                  f.actors.actor(other).appearance.flashing_hidden(),
              "Blink clear escaped reserved party roles or missed one");
        check(f.formation.trail_cursors[2] == 17 && !f.movement.moved_this_tick,
              "Control did not snapshot old movement and publish current "
              "character cursor");
        for (unsigned repeat = 0; repeat < 3; ++repeat)
          check(
              !op->advance() &&
                  f.actors.appearance_scene().intangibility_ticks == 1,
              "Repeated pending movement consumed another intangibility tick");
        op->respond();
        check(op->advance() && op->complete() && !f.control.busy(),
              "Stationary movement failed to complete");
        const auto &point = f.trail.points[17];
        check(
            f.trail.next_write == 17 &&
                point.x == original_trail.points[17].x &&
                point.y == original_trail.points[17].y &&
                point.surface_flags == surface &&
                point.walking_style == style && point.direction == 2 &&
                point.reserved == original_trail.points[17].reserved,
            "Stationary control changed XY/head or missed live trail metadata");
        const auto override = f.actors.appearance_scene().footstep_override;
        check(surface == 0 ? !override
                           : override == unsigned(surface == 8 ? 9 : 8),
              "Wet-surface footstep material differs");
        check(f.input == original_input && f.clock.frame_counter == 32 &&
                  !f.actors.ticks(),
              "Control polled input or ran a synthetic frame/actor tick");
      }
}
void debug_and_blink(eb::GameVersion version) {
  for (const unsigned frame : {1u, 15u, 16u}) {
    Fixture f(version);
    f.windows.prompt_state().debug = 1;
    f.input.state[0] = 0x40;
    f.clock.frame_counter = frame;
    f.movement.moved_this_tick = 99;
    f.movement.camera_moved = true;
    f.actors.appearance_scene().footstep_override = 7;
    f.actors.appearance_scene().intangibility_ticks = 1;
    f.flash(f.player);
    const auto trail = f.trail;
    const auto cursors = f.formation.trail_cursors;
    auto op = f.control.begin();
    if (frame & 15) {
      check(op->advance() && !op->request() && f.trail == trail &&
                f.formation.trail_cursors == cursors,
            "Debug frame skip passed into movement/trail work");
      check(f.movement.camera_moved &&
                f.actors.appearance_scene().footstep_override == 7,
            "Debug skip changed fields after its authored early return");
    } else {
      check(!op->advance() && op->request()->kind == WorldControlService::Walk,
            "Sixteenth debug frame did not admit movement");
      op->respond();
      check(op->advance(), "Admitted debug movement did not complete");
    }
    check(!f.movement.moved_this_tick &&
              !f.actors.appearance_scene().intangibility_ticks &&
              !f.actors.actor(f.player).appearance.flashing_hidden(),
          "Debug gate incorrectly skipped initial reset/blink phase");
  }
  Fixture zero(version);
  zero.flash(zero.player);
  clear_party_sprite_blink(zero.actors);
  check(zero.actors.actor(zero.player).appearance.flashing_hidden(),
        "Zero intangibility cleared unrelated flashing");
}
void live_camera(eb::GameVersion version) {
  Fixture f(version);
  const auto new_leader = f.create(25, 4);
  const auto old_first = f.trail.points[0];
  const auto reserved = f.trail.points[255].reserved;
  auto op = f.control.begin();
  check(!op->advance(), "Control missed initial mode boundary");
  f.formation.current_leader_role = 25; // Formation roles deliberately remain unchanged.
  f.leader.leader = new_leader;
  f.leader.leader_x = 0xffff;
  f.leader.leader_y = 0;
  f.leader.leader_direction = 7;
  f.leader.walking_style = 9;
  f.trail.next_write = 255;
  f.movement.moved_this_tick = 1;
  op->respond();
  check(!op->advance() &&
            op->request() ==
                WorldControlRequest{
                    WorldControlService::RefreshCamera, 0, {0xff7f, 0xff90}},
        "Control ignored live leader/ring state after movement");
  check(f.formation.trail_cursors[2] == 17 &&
            f.formation.trail_cursors[4] == 5 && !f.trail.next_write &&
            f.trail.points[255].x == 0xffff && f.trail.points[255].y == 0,
        "Camera preparation rewrote initial character cursor or failed ring255 "
        "wrap");
  const auto pending_trail = f.trail;
  check(!op->advance() && f.trail == pending_trail && !f.movement.camera_moved,
        "Pending camera acknowledgment published its continuation early");
  // Actual camera/activation work may alter shared temporary query results,
  // direction/style, the ring head and even coordinates. The source retains
  // the old point address and captured XY, but reads metadata after return.
  f.leader.leader_x = 42;
  f.leader.leader_y = 43;
  f.leader.leader_direction = 6;
  f.leader.walking_style = 11;
  f.leader.surface_flags = 0x99;
  f.movement.trodden_surface_flags = 8;
  f.trail.next_write = 5;
  op->respond();
  check(op->advance(), "Control did not return after real camera work");
  check(
      f.trail.points[255] == PartyTrailPoint{0xffff, 0, 8, 11, 6, reserved} &&
          f.trail.points[0] == old_first && f.trail.next_write == 5 &&
          f.movement.camera_moved,
      "Camera return lost retained trail point or restored stale shared state");
  check(
      f.leader.surface_flags == 0x99 &&
          f.actors.appearance_scene().footstep_override == 9,
      "Control confused scratch surface flags with persistent trodden terrain");
}
bool next(WorldMaintenance::Operation &op, unsigned budget = 1) {
  for (unsigned i = 0; i < 100; ++i) {
    if (op.advance(budget))
      return true;
    if (op.request())
      return false;
  }
  throw std::runtime_error(
      "Maintenance did not reach a bounded service/completion");
}
void finish_stationary(WorldMaintenance::Operation &op, unsigned budget = 1) {
  for (unsigned i = 0; i < 20; ++i) {
    if (next(op, budget))
      return;
    check(op.request()->kind == WorldMaintenanceService::Control &&
              op.request()->control &&
              op.request()->control->kind != WorldControlService::RefreshCamera,
          "Stationary fixture reached an unexpected external service");
    op.respond();
  }
  throw std::runtime_error("Maintenance repeated stationary control service");
}
void maintenance_order(eb::GameVersion version, unsigned budget) {
  Fixture f(version);
  f.state.possessed_players = 1;
  f.items.loaded_count = 1;
  f.state.auto_sector_music = 1;
  const auto input = f.input;
  auto expected_area = f.area;
  auto expected_animation = f.animation;
  expected_area.advance_animation();
  expected_animation.advance();
  auto op = f.maintenance.begin();
  const auto before = f.area.graphics();
  check(!op->advance(0) && !op->request() && f.actors.size() == 1 &&
            f.area.graphics() == before &&
            f.animation.ticks_until_change() == 2,
        "Zero maintenance budget performed a phase");
  check(!next(*op, budget) &&
            op->request()->kind == WorldMaintenanceService::ItemTransformations,
        "Maintenance did not preserve possession/animation/item ordering");
  check(f.actors.size() == 2 && f.state.possession_actor &&
            f.area.graphics() == expected_area.graphics() &&
            f.animation.ticks_until_change() ==
                expected_animation.ticks_until_change(),
        "Maintenance failed its single possession/animation phase");
  const auto ghost = *f.state.possession_actor;
  const auto &effect = f.actors.actor(ghost);
  check(effect.action().position[0] == 0xff008000u &&
            effect.action().position[1] == 0xff008000u &&
            effect.action().position[2] == 0x178000u &&
            effect.behavior.projected_x == 0 &&
            effect.behavior.projected_y == -256 &&
            effect.action().animation == 0xffff,
        "Possession creation did not retain authored offscreen/default state");
  for (unsigned i = 0; i < 4; ++i)
    check(!op->advance(1000) && f.actors.size() == 2 &&
              f.animation.ticks_until_change() == 1,
          "Pending item work repeated possession or palette animation");
  f.items.loaded_count = 0;
  op->respond();
  check(!next(*op, budget) &&
            op->request()->kind == WorldMaintenanceService::Control &&
            op->request()->control->kind == WorldControlService::Walk,
        "Item return skipped control mode");
  f.leader.leader_x = 513;
  f.leader.leader_y = 769;
  f.movement.moved_this_tick = 1;
  op->respond();
  check(!next(*op, budget) &&
            op->request()->control->kind == WorldControlService::RefreshCamera,
        "Maintenance did not retain its nested camera request");
  const auto ring = f.trail;
  check(!op->advance(4096) && f.trail == ring,
        "Repeated camera suspension repeated source trail publication");
  op->respond();
  check(!next(*op, budget) &&
            op->request()->kind == WorldMaintenanceService::SectorMusic &&
            f.state.last_sector_x == 2 && f.state.last_sector_y == 3,
        "Sector/music ordering differs after camera return");
  const auto alternate = f.create(25, 4);
  (void)alternate;
  f.formation.current_leader_role = 25; // Formation roles deliberately remain unchanged.
  f.leader.leader_direction = 5;
  f.leader.leader_x = 1024;
  f.leader.leader_y = 2304;
  check(!op->advance(1000) && f.state.last_sector_x == 2 &&
            f.state.last_sector_y == 3,
        "Pending music recomputed a later sector");
  op->respond();
  check(next(*op, budget) && !f.maintenance.busy(),
        "Maintenance did not finish after source-ordered services");
  check(!f.state.possessed_players &&
            f.formation.projection.leader_role == 25 &&
            f.formation.projection.direction == 5 &&
            f.input.player_activity == 1 && f.phone.queued == 1,
        "Maintenance final cached follower/input/phone phase used stale state");
  auto observed = f.input;
  observed.player_activity = input.player_activity;
  check(observed == input && !f.actors.ticks() && f.clock.frame_counter == 32,
        "Maintenance polled controls or advanced a fake frame/tick");
  for (unsigned tick = 0; tick < 8; ++tick)
    check(f.area.advance_animation() == expected_area.advance_animation() &&
              f.area.graphics() == expected_area.graphics(),
          "Budget/pending calls advanced hidden map animation clocks");
  f.state.auto_sector_music = 0;
  auto cleanup = f.maintenance.begin();
  check(!cleanup->advance(1) && !f.state.possession_actor &&
            f.actors.size() == 2,
        "Next maintenance did not remove only its possession actor");
  finish_stationary(*cleanup, budget);
}
void queue_ownership(eb::GameVersion version) {
  const dialogue::ReferenceKey custom{0xa1, 0xb2, 0xdd, 0x12};
  Fixture f(version, 0, custom);
  check(&f.queue.phone() == &f.phone && f.queue.dad_message() == custom,
        "Queue wrapper copied phone state or lost its imported Dad message");
  auto maintenance = f.maintenance.begin();
  finish_stationary(*maintenance);
  check(f.queued.records[0] == npcs::QueuedInteraction{10, custom} &&
            f.queued.next == 1 && f.queued.pending == 1 && f.phone.queued == 1,
        "Maintenance did not enqueue wrapper-owned custom Dad content");
  auto consume = f.queue.queue().begin();
  check(consume->advance() == npcs::InteractionQueueProgress::Suspended &&
            consume->service()->kind ==
                npcs::InteractionQueueServiceKind::ClearPartySpriteBlink,
        "Phone consumer omitted its actual sprite-blink boundary");
  clear_party_sprite_blink(f.actors);
  consume->respond();
  check(consume->advance() == npcs::InteractionQueueProgress::Suspended &&
            consume->service()->kind ==
                npcs::InteractionQueueServiceKind::Text &&
            consume->service()->key == custom,
        "Phone consumer lost custom content at text suspension");
  check(consume->advance() == npcs::InteractionQueueProgress::Suspended &&
            f.phone.timer == 0 && f.phone.queued == 1,
        "Phone timer reset before text actually completed");
  consume->respond();
  check(consume->advance() == npcs::InteractionQueueProgress::Finished &&
            f.phone.timer == 1687 && !f.phone.queued && !f.queued.pending &&
            f.queued.current_type == 0xffff,
        "Maintenance producer and text consumer did not mutate the same phone "
        "owner");
  // Source suppression still sets Dad's queued flag even if no new record is
  // written. This matters during nested processing of an existing type10.
  Fixture suppressed(version, 0, custom);
  suppressed.queued.current_type = 10;
  const auto before = suppressed.queued;
  auto again = suppressed.maintenance.begin();
  finish_stationary(*again);
  check(suppressed.queued == before && suppressed.phone.queued == 1,
        "Current-type suppression incorrectly rolled back source Dad queued "
        "state");
}
void phone_gates(eb::GameVersion version) {
  for (unsigned gate = 0; gate < 8; ++gate) {
    Fixture f(version);
    switch (gate) {
    case 0:
      f.phone.timer = 1;
      break;
    case 1:
      f.movement.automatic_mode = 2;
      break;
    case 2: {
      auto open = f.windows.begin(
          {dialogue::WindowAction::Open, dialogue::WindowId{0}, {}, 0});
      check(open->advance() == dialogue::OutputProgress::Suspended,
            "Window gate fixture failed to open");
      open->respond();
      check(open->advance() == dialogue::OutputProgress::Complete,
            "Window gate fixture failed to finish");
      break;
    }
    case 3:
      f.windows.prompt_state().battle_mode = 1;
      break;
    case 4:
      f.actors.appearance_scene().battle_swirl_ticks = 1;
      break;
    case 5:
      f.state.enemy_touched = 1;
      break;
    case 6:
      f.phone.queued = 1;
      break;
    case 7:
      f.text.event_flags[(775 - 1) / 8] |= 1u << ((775 - 1) % 8);
      break;
    }
    const auto phone = f.phone;
    auto op = f.maintenance.begin();
    finish_stationary(*op);
    check(!f.queued.pending && f.queued.next == 0 && f.phone == phone,
          "Maintenance ignored an authored Dad-phone gate");
  }
}
void battle_and_possession_gates(eb::GameVersion version) {
  Fixture battle(version);
  battle.movement.encounter.mode = 1;
  battle.state.possessed_players = 3;
  battle.items.loaded_count = 1;
  battle.state.auto_sector_music = 1;
  battle.movement.moved_this_tick = 7;
  battle.actors.appearance_scene().intangibility_ticks = 9;
  const auto trail = battle.trail;
  const auto input = battle.input;
  const auto graphics = battle.area.graphics();
  const auto countdown = battle.animation.ticks_until_change();
  auto skip = battle.maintenance.begin();
  check(next(*skip, 1) && !skip->request(),
        "Battle did not skip all overworld maintenance");
  check(battle.trail == trail && battle.input == input &&
            battle.area.graphics() == graphics &&
            battle.animation.ticks_until_change() == countdown &&
            battle.actors.size() == 1 && battle.state.possessed_players == 3 &&
            battle.movement.moved_this_tick == 7 &&
            battle.actors.appearance_scene().intangibility_ticks == 9 &&
            !battle.phone.queued,
        "Battle skip performed a possession/animation/control/phone phase");
  for (unsigned gate = 0; gate < 4; ++gate) {
    Fixture f(version);
    f.state.possessed_players = 1;
    switch (gate) {
    case 0:
      f.actors.actor(f.player).scripts_and_physics_enabled = false;
      break;
    case 1:
      f.actors.actor(f.player).tick_callback_enabled = false;
      break;
    case 2:
      f.flash(f.player);
      break;
    case 3:
      f.movement.automatic_mode = 2;
      break;
    }
    auto op = f.maintenance.begin();
    finish_stationary(*op);
    check(!f.state.possession_actor && f.actors.size() == 1 &&
              !f.state.possessed_players,
          "Possession ignored paused/hidden/automatic-mode2 leader gate");
  }
}
void failures(eb::GameVersion version) {
  {
    Fixture f(version);
    f.state.possessed_players = 1;
    auto abandoned = f.control.begin();
    abandoned.reset();
    const auto art = f.area.graphics();
    const auto colors = f.palettes.scenery;
    const auto delay = f.animation.ticks_until_change();
    rejects(
        [&] {
          auto op = f.maintenance.begin();
          op->advance();
        },
        "Maintenance adopted a terminally failed controller");
    check(f.actors.size() == 1 && !f.state.possession_actor &&
              f.area.graphics() == art && f.palettes.scenery == colors &&
              f.animation.ticks_until_change() == delay,
          "Failed controller was rejected only after possession/animation "
          "mutations");
  }
  {
    Fixture f(version);
    f.state.possessed_players = 1;
    auto abandoned = f.maintenance.begin();
    check(!abandoned->advance(1) && f.actors.size() == 2,
          "Abandonment fixture did not reach actual possession mutation");
    abandoned.reset();
    check(f.maintenance.failed() && !f.maintenance.busy(),
          "Dropped maintenance was reusable");
    const auto ids = f.actors.actors();
    const auto remaining = f.animation.ticks_until_change();
    rejects([&] { f.maintenance.begin(); },
            "Abandoned maintenance replayed consumed effects");
    check(f.actors.actors() == ids &&
              f.animation.ticks_until_change() == remaining,
          "Rejected abandoned maintenance changed state");
  }
  {
    Fixture f(version);
    auto op = f.control.begin();
    check(!op->advance(), "Control failure fixture missed service");
    f.actors.erase(f.player);
    op->respond();
    rejects([&] { op->advance(); },
            "Movement returned without leader but succeeded");
    check(f.control.failed(), "Failed movement continuation was not terminal");
    const auto ring = f.trail;
    rejects([&] { op->advance(); }, "Failed control retried after mutation");
    check(f.trail == ring, "Failed control replay changed trail");
  }
  {
    Fixture f(version);
    f.trail.next_write = 256;
    auto op = f.control.begin();
    rejects([&] { op->advance(); }, "Out-of-range trail head was accepted");
    check(f.control.failed(),
          "Invalid ring state did not poison its active control operation");
  }
  {
    Fixture f(version);
    auto op = f.maintenance.begin();
    rejects([&] { f.maintenance.begin(); },
            "Maintenance accepted concurrent outer callbacks");
    check(!next(*op) && op->request()->kind == WorldMaintenanceService::Control,
          "Nested invalidation fixture missed control");
    f.movement.moved_this_tick = 1;
    op->respond();
    check(!next(*op) && op->request()->control->kind ==
                            WorldControlService::RefreshCamera,
          "Nested invalidation fixture missed camera");
    const auto ring = f.trail;
    const auto remaining = f.animation.ticks_until_change();
    std::array<std::uint8_t, 128> foreign{};
    f.actors.scene().event_flags = foreign;
    rejects([&] { op->advance(); },
            "Camera suspension admitted a different mutable flag owner");
    check(f.trail == ring && f.animation.ticks_until_change() == remaining,
          "Rejected flag-owner invalidation repeated animation/trail work");
    f.actors.scene().event_flags = f.text.event_flags;
    op->respond();
    check(next(*op), "Restored explicit flag binding could not finish its "
                     "retained camera continuation");
  }
  {
    Fixture f(version);
    std::uint16_t other_intangibility{};
    npcs::InteractionQueueState state;
    npcs::DadPhoneState phone;
    WorldInteractionQueue other(version, state, other_intangibility, phone);
    rejects(
        [&] {
          WorldMaintenance bad(f.windows, f.control, f.state, f.items, other,
                               f.area, f.palettes, f.animation, f.prepared,
                               {1, 0});
        },
        "Maintenance accepted a queue from another intangibility owner");
    auto area = f.area;
    rejects(
        [&] {
          WorldMaintenance bad(f.windows, f.control, f.state, f.items, f.queue,
                               area, f.palettes, f.animation, f.prepared,
                               {1, 0});
        },
        "Maintenance accepted another mutable active area");
    check(f.actors.size() == 1 && !f.maintenance.busy() && !f.phone.queued,
          "Rejected owner graph mutated the actual scene");
  }
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
      modes(version);
      debug_and_blink(version);
      live_camera(version);
      for (unsigned budget : {1u, 2u, 256u})
        maintenance_order(version, budget);
      queue_ownership(version);
      phone_gates(version);
      battle_and_possession_gates(version);
      failures(version);
    }
    std::cout << "PASS " << checks
              << " native control/maintenance checks: modes, ring/camera "
                 "continuation, owned phone queue, budgets and failure gates\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
