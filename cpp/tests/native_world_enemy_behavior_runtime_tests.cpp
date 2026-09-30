// Native orchestration acceptance: actual Scene/Ticks, actors, streaming and
// rendering; independently varied work budgets and nested service boundaries.
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/world_actor_movement.hpp"
#include "eb/native/world_battle_entry.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_enemy_behavior.hpp"
#include "eb/native/world_enemy_contact.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/world_party_following.hpp"
#include "eb/native/world_runtime.hpp"
#include "native_dialogue_test_assets.hpp"
#include "native_interaction_test_assets.hpp"
#include "native_world_movement_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
namespace dialogue = eb::native::dialogue;
namespace story = eb::native::story;
unsigned checks{};
void check(bool ok, const char *message) {
  ++checks;
  if (!ok)
    throw std::runtime_error(message);
}
template <class F> void rejects(F operation, const char *message) {
  bool rejected = false;
  try {
    operation();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, message);
}
void put(std::vector<std::uint8_t> &bytes, unsigned at, unsigned value) {
  bytes.at(at) = std::uint8_t(value);
  bytes.at(at + 1) = std::uint8_t(value >> 8);
}
void pointer(std::vector<std::uint8_t> &bytes, unsigned at, unsigned offset) {
  const unsigned value = 0xc00000 + offset;
  put(bytes, at, value);
  put(bytes, at + 2, value >> 16);
}
void zero_run(std::vector<std::uint8_t> &bytes, unsigned &at, unsigned count) {
  while (count) {
    const unsigned length = std::min(count, 1024u), encoded = length - 1;
    bytes.at(at++) = std::uint8_t(0xe4 | (encoded >> 8));
    bytes.at(at++) = std::uint8_t(encoded);
    bytes.at(at++) = 0;
    count -= length;
  }
  bytes.at(at) = 0xff;
}
WorldMap make_map() {
  // Same bounded source data shapes exercised by native_world_map_tests,
  // reduced to one visible arrangement with no external event dependencies.
  std::vector<std::uint8_t> bytes(0x20000);
  WorldMapLayout layout{{},      0x1a000, 0x1aa00, 0x1c000, 0x1c100,
                        0x1c104, 0x1c108, 0x1c400, 0x1c430, 0x1c600,
                        0x1c10c, 0x1c110, 1};
  for (unsigned i = 0; i < 10; ++i)
    layout.block_chunks[i] = i * 0x2800;
  pointer(bytes, layout.graphics, 0x1d000);
  pointer(bytes, layout.arrangements, 0x1d500);
  pointer(bytes, layout.collision_pointers, 0x1e000);
  pointer(bytes, layout.animation_properties, 0x1c800);
  put(bytes, layout.event_pointers, 0xc700);
  unsigned at = 0x1d000;
  bytes[at++] = 31;
  for (unsigned y = 0; y < 8; ++y) {
    bytes[at++] = std::uint8_t(y & 1 ? 0xaa : 0x55);
    bytes[at++] = 0;
  }
  for (unsigned i = 0; i < 16; ++i)
    bytes[at++] = 0;
  zero_run(bytes, at, 0x7001 - 32);
  at = 0x1d500;
  bytes[at++] = 31;
  for (unsigned tile = 0; tile < 16; ++tile) {
    put(bytes, at, 0x0800);
    at += 2;
  }
  bytes[at++] = 31;
  for (unsigned tile = 0; tile < 16; ++tile) {
    put(bytes, at, 0x0801);
    at += 2;
  }
  bytes[at] = 0xff;
  bytes[layout.block_chunks[0]] =
      1; // Origin uses blank block1; out-of-map uses striped block0.
  put(bytes, 0x1c700, 0x8001);
  put(bytes, 0x1c702, 1);
  put(bytes, 0x1c704, 0);
  put(bytes, 0x1c706, 1);
  pointer(bytes, layout.animation_graphics, 0x1d700);
  bytes[0x1c800] = 1;
  bytes[0x1c801] = 2;
  bytes[0x1c802] = 3;
  put(bytes, 0x1c803, 32);
  put(bytes, 0x1c805, 0);
  put(bytes, 0x1c807, 16);
  bytes[0x1d700] = 0x3f;
  bytes[0x1d701] = 0xff;
  bytes[0x1d702] = 0x3f;
  bytes[0x1d703] = 0;
  bytes[0x1d704] = 0xff;
  return WorldMap(bytes, layout);
}
WorldPalettes make_palette_content() {
  std::vector<std::uint8_t> bytes(0x6000);
  WorldPaletteLayout layout{0x1000, 0x200, 0x4000 + 32 * 192, 0x2000};
  for (unsigned group = 0; group < 32; ++group) {
    const unsigned first = 0x4000 + group * 192;
    pointer(bytes, layout.groups + group * 4, first);
    for (unsigned i = 1; i < 96; ++i)
      put(bytes, first + i * 2, i % 16 ? 0x421 : 0);
  }
  for (unsigned p = 0; p < 8; ++p)
    for (unsigned color = 1; color < 16; ++color)
      put(bytes, layout.sprites + (p * 16 + color) * 2,
          0x0010 + color + (color << 10));
  return WorldPalettes(bytes, layout);
}
std::shared_ptr<SpriteResources> make_sprites(unsigned shape = 0) {
  // Local adaptation of native_sprite_fixture's two-part synthetic sprite.
  std::vector<std::uint8_t> bytes(4096 + 72);
  SpriteCatalogLayout layout{0, 73, shape ? 4096u : 8u, 2, shape ? 18u : 1u};
  pointer(bytes, 0, 32);
  pointer(bytes, 4, 32);
  pointer(bytes, 8, 128);
  if (shape)
    for (unsigned i = 0; i < 18; ++i)
      pointer(bytes, 4096 + i * 4, 128);
  bytes[32] = 3;
  bytes[33] = 0x20;
  bytes[34] = shape;
  bytes[35] = 0x1a;
  bytes[40] = 0xc0;
  for (unsigned i = 0; i < 16; ++i)
    put(bytes, 41 + i * 2, 512 | (i & 1));
  bytes[128] = 2;
  bytes[129] = 1;
  for (unsigned mirror = 0; mirror < 2; ++mirror)
    for (unsigned part = 0; part < 2; ++part) {
      const unsigned at = 130 + (mirror * 2 + part) * 5;
      bytes[at] = std::uint8_t(-24 + part * 16);
      bytes[at + 2] = mirror ? 0x40 : 0;
      bytes[at + 3] = std::uint8_t(-8);
      bytes[at + 4] = part ? 0x80 : 0;
    }
  for (unsigned y = 0; y < 24; ++y)
    for (unsigned x = 0; x < 16; ++x) {
      const unsigned color = (x + y * 3) % 16;
      for (unsigned plane = 0; plane < 4; ++plane)
        if (color & (1u << plane))
          bytes[512 + ((y / 8) * 2 + x / 8) * 32 + (y & 7) * 2 +
                (plane / 2) * 16 + (plane & 1)] |= 1u << (7 - (x & 7));
    }
  return std::make_shared<SpriteResources>(bytes, layout);
}
WorldActorSpec actor(unsigned script = 0) {
  WorldActorSpec result;
  result.script = script;
  result.action.position = {100 * 65536 + 0x8000, 100 * 65536 + 0x8000, 0x8000};
  result.action.velocity[0] = 65536;
  result.action.animation = 0;
  result.action.priority = 3;
  return result;
}

struct Assets {
  dialogue_test_assets::WindowInput input;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const party::MeterWindowResources> meters;
  explicit Assets(eb::GameVersion version) : input(version) {
    dialogue_test_assets::add_text_fonts(input);
    input.put(input.configs, 1);
    input.put(input.configs + 2, 1);
    input.put(input.configs + 4, 28);
    input.put(input.configs + 6, 6);
    fonts = dialogue::FontResources::import(input.image, version);
    meters = party::MeterWindowResources::import(input.image, version);
  }
};
const Assets &assets(eb::GameVersion version) {
  static const Assets us(eb::GameVersion::US), jp(eb::GameVersion::JP);
  return version == eb::GameVersion::US ? us : jp;
}
std::shared_ptr<const dialogue::Program>
program(eb::GameVersion version, std::vector<std::uint8_t> bytes) {
  return std::make_shared<const dialogue::Program>(
      version, std::vector<dialogue::ContentBlock>{{0, 0, std::move(bytes)}},
      std::vector<dialogue::Location>{{0, 0}});
}
std::shared_ptr<const NpcCatalog> make_npcs() {
  std::vector<std::uint8_t> bytes(0x3000);
  const NpcCatalogLayout layout{0, 0x1000, 0x1100, 0x1100, 0x2000, 8, 799};
  for (unsigned id = 0; id < 8; ++id)
    bytes[layout.definitions + id * 17] = 1;
  // One actor just beyond the starting camera, activated by its first strip.
  put(bytes, 2, 0x1000);
  put(bytes, 0x1000, 1);
  put(bytes, 0x1002, 1);
  bytes[0x1004] = 128;
  bytes[0x1005] = 64;
  return std::make_shared<NpcCatalog>(bytes, layout);
}
std::shared_ptr<EnemySpawnData> make_enemies() {
  auto data = std::make_shared<EnemySpawnData>();
  data->cells.fill(1);
  data->sectors.fill({0, 0});
  data->encounters = {
      EnemySpawnEncounter{},
      EnemySpawnEncounter{0, {100, 0}, {0, 0, 0, 0, 0, 0, 0, 0}}};
  data->battles = {{{1, 0}}, {{1, 1}}};
  data->enemies = {{0, 0, 4, 20}, {0, 0, 4, 20}};
  data->battle_behaviors.resize(2);
  data->enemies[0].level = 10;
  data->butterfly_enemy = 1;
  data->butterfly_battle = 1;
  return data;
}
std::shared_ptr<const ActionScriptData> scripts(eb::GameVersion version) {
  const bool jp = version == eb::GameVersion::JP;
  std::vector<std::uint8_t> bytes;
  const auto call = [&](unsigned source) {
    bytes.insert(bytes.end(),
                 {0x42, std::uint8_t(source), std::uint8_t(source >> 8),
                  std::uint8_t(source >> 16)});
  };
  call(jp ? 0xc0c471 : 0xc0c48f);
  call(jp ? 0xc0c491 : 0xc0c4af);
  call(jp ? 0xc448e1 : 0xc46b65);
  call(jp ? 0xc0c60d : 0xc0c62b);
  call(jp ? 0xc44dc8 : 0xc47044);
  call(jp ? 0xc44886 : 0xc46b0a);
  call(jp ? 0xc0a63e : 0xc0a65f);
  call(jp ? 0xc0a68c : 0xc0a6ad);
  bytes.insert(bytes.end(), {8, 0, 0x14, 0, 2, 1, 0, 0x09});
  const unsigned idle = bytes.size();
  bytes.push_back(0x09);
  return std::make_shared<ActionScriptData>(
      bytes, 0, std::vector<std::uint32_t>{0, idle});
}
WorldPaletteAnimations make_animations() {
  std::vector<std::uint8_t> bytes(600);
  pointer(bytes, 0, 4);
  pointer(bytes, 4, 32);
  bytes[8] = 2;
  bytes[9] = 2;
  bytes[10] = 3;
  bytes[32] = 0xe1;
  bytes[33] = 127; // Literal384-byte payload.
  for (unsigned frame = 0; frame < 2; ++frame)
    for (unsigned color = 0; color < 96; ++color)
      put(bytes, 34 + frame * 192 + color * 2, frame ? 0x03e0 : 0x7c00);
  bytes[418] = 0xff;
  return WorldPaletteAnimations(bytes, {0, 1});
}
struct Fixture {
  eb::GameVersion version;
  party::State party;
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  party::MeterWindows meters;
  story::RandomState random{1, 2};
  story::TickState clock;
  story::InputState input;
  std::shared_ptr<SpriteResources> sprites = make_sprites();
  std::shared_ptr<const ActionScriptData> actions;
  ActorWorld actors;
  std::shared_ptr<const NpcCatalog> npcs = make_npcs();
  WorldActivation activation;
  WorldEnemies enemies;
  movement_test::Fixture collision_content;
  WorldCollision collision;
  WorldMap map = make_map();
  WorldPalettes colors = make_palette_content();
  WorldMapArea area = map.prepare(0, std::array<std::uint8_t, 128>{});
  AreaPalettes palettes = colors.resolve({0, 0}, {});
  WorldPaletteAnimations animations = make_animations();
  WorldSpawnControls controls;
  std::unique_ptr<WorldRuntime> runtime;
  explicit Fixture(eb::GameVersion region, bool invalid_shape = false)
      : version(region), party(region), output(assets(region).fonts, text),
        windows(assets(region).input.import(), text, output),
        meters(windows, party, assets(region).meters),
        sprites(make_sprites(invalid_shape ? 17 : 0)), actions(scripts(region)),
        actors(sprites, actions, region),
        activation(npcs, sprites, actions, region, {0, 8}),
        enemies(make_enemies(), sprites, actions, {0, 0, 2}),
        collision(collision_content.bytes, collision_content.collision_layout) {
    party.controlled_count = 1;
    party.controlled_order[0] = 0;
    party.party_order[0] = 1;
    actors.scene().event_flags = text.event_flags;
    actors.scene().camera_y = 64;
    controls.npcs = NpcSpawnMode::Streaming;
    controls.enemies = true;
    auto open = windows.begin(
        {dialogue::WindowAction::Open, dialogue::WindowId{0}, {}, 0});
    check(open->advance() == dialogue::OutputProgress::Suspended,
          "Opening fixture window did not yield");
    open->respond();
    check(open->advance() == dialogue::OutputProgress::Complete,
          "Opening fixture window did not finish");
    output.policy().sound_mode = 3;
  }
  void start(ActorRetentionReader retention = {}, unsigned width = 320) {
    for (auto id : actors.actors())
      actors.actor(id).appearance.select_four(0, 0, 0);
    runtime = std::make_unique<WorldRuntime>(
        windows, party, random, meters, clock, input, actors, activation,
        enemies, collision, area, palettes, map, colors, animations, controls,
        NpcStripAdmission::Admitted, std::move(retention),
        story::SceneView{width, 64, 917});
  }
};
dialogue::Progress next(WorldRuntime::Operation &operation,
                        unsigned budget = 1) {
  for (unsigned i = 0; i < 10000; ++i) {
    const auto progress = operation.advance(budget);
    if (progress != dialogue::Progress::BudgetExhausted)
      return progress;
  }
  throw std::runtime_error("World runtime failed to reach a service");
}
void frame(WorldRuntime::Operation &operation) {
  check(next(operation) == dialogue::Progress::Suspended &&
            operation.service() == story::SceneService::Frame,
        "World runtime failed to reach its exact frame boundary");
}
void finish(WorldRuntime::Operation &operation) {
  check(next(operation) == dialogue::Progress::Finished && operation.complete(),
        "World runtime failed to finish");
}
void run(eb::GameVersion version, bool movement_first, bool bind_behavior) {
  Fixture f(version);
  f.controls.npcs = NpcSpawnMode::Disabled;
  f.controls.enemies = false;
  f.party.party_count = 1;
  f.party.display_order[0] = 1;
  f.party.character(1).level = 1;
  EnemySpawnState spawn;
  spawn.bypass_chance = true;
  spawn.event_flags.resize(128);
  f.enemies.begin_cell(f.actors, 0, 0, 1, 8, 8, spawn);
  while (f.enemies.busy()) {
    if (std::holds_alternative<EnemyRandomRequest>(*f.enemies.request()))
      f.enemies.respond_random(f.actors, 0);
    else
      f.enemies.respond_terrain(f.actors, 0);
  }
  check(f.enemies.actors().size() == 1,
        "Runtime fixture failed real enemy spawn");
  const auto enemy = f.enemies.actors()[0].actor;
  auto &a = f.actors.actor(enemy);
  a.action().position = {100u << 16, 100u << 16, 0};
  a.behavior.movement_speed = 512;
  auto spec = actor(1);
  spec.action.position = {132u << 16, 100u << 16, 0};
  spec.action.velocity = {};
  const auto leader = *f.actors.create_authored(spec, {24, 25});
  WorldPartyState formation;
  formation.roles[0] = 24;
  formation.current_leader_role = 24;
  PartyTrail trail;
  npcs::InteractionState position;
  position.leader = leader;
  position.leader_x = 132;
  position.leader_y = 100;
  WorldControlState control_state;
  WorldControl control(f.actors, formation, trail, position, control_state,
                       f.windows.prompt_state(), f.input, f.clock, f.collision,
                       f.area);
  WorldMaintenanceState maintenance;
  party::ItemTransformationState items;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue(
      version, queued, f.actors.appearance_scene().intangibility_ticks, phone);
  std::vector<std::uint8_t> content(0x50000);
  const auto layout = generated_input_data_layout(version);
  const std::array<unsigned, 13> bases{0x4000, 0x8000, 0,      0xc000, 0x8000,
                                       0xffff, 0,      0xffff, 0x4000, 0xc000,
                                       0xffff, 0xffff, 0};
  const std::array<unsigned, 16> thresholds{13,  38,   64,   92,  121, 153,
                                            190, 232,  282,  345, 427, 541,
                                            715, 1021, 1723, 5181};
  for (unsigned i = 0; i < bases.size(); ++i)
    put(content, layout.angle_bases + i * 2, bases[i]);
  for (unsigned i = 0; i < thresholds.size(); ++i)
    put(content, layout.angle_thresholds + i * 2, thresholds[i]);
  const auto factors = version == eb::GameVersion::US ? 0x4205d : 0x41fa9;
  put(content, factors + 16 * 2, 256);
  EnemyMovementData data(content, version), other_data(content, version);
  GeneratedInputData angles(content, version), other_angles(content, version);
  WorldPathfinding paths(f.actors, f.collision, f.area, formation, f.party);
  WorldEnemyMovement movement(data, angles, f.actors, paths, f.collision),
      wrong_movement(other_data, angles, f.actors, paths, f.collision);
  WorldEnemyBehavior behavior(data, angles, f.actors, f.enemies, f.party,
                              position);
  WorldEnemyBehavior wrong_data(other_data, angles, f.actors, f.enemies,
                                f.party, position);
  WorldEnemyBehavior wrong_angles(data, other_angles, f.actors, f.enemies,
                                  f.party, position);
  npcs::InteractionState other_position;
  WorldEnemyBehavior wrong_position(data, angles, f.actors, f.enemies, f.party,
                                    other_position);
  f.start();
  rejects([&] { f.runtime->bind_enemy_behavior(behavior); },
          "Behavior bound before controller ownership");
  f.runtime->bind_maintenance(control, maintenance, items, queue);
  rejects([&] { f.runtime->bind_enemy_behavior(wrong_position); },
          "Behavior accepted different leader owner");
  if (movement_first) {
    f.runtime->bind_enemy_movement(movement);
    rejects([&] { f.runtime->bind_enemy_behavior(wrong_data); },
            "Behavior accepted alternate movement content");
    rejects([&] { f.runtime->bind_enemy_behavior(wrong_angles); },
            "Behavior accepted alternate angle content");
  }
  if (bind_behavior) {
    f.runtime->bind_enemy_behavior(behavior);
    rejects([&] { f.runtime->bind_enemy_behavior(behavior); },
            "Duplicate behavior owner accepted");
    if (!movement_first) {
      rejects([&] { f.runtime->bind_enemy_movement(wrong_movement); },
              "Movement accepted different bound behavior tables");
      f.runtime->bind_enemy_movement(movement);
    }
  }
  for (unsigned tick = 0; tick < 5; ++tick) {
    auto op = f.runtime->begin(story::TickKind::WorldFrame);
    if (!bind_behavior) {
      check(next(*op) == dialogue::Progress::Suspended && op->actor_request() &&
                op->actor_request()->binding.operation ==
                    NativeAction::EnemyDistanceBand,
            "Missing behavior owner did not preserve typed pending service");
      rejects([&] { op->respond_actor(); },
              "Generic response bypassed real behavior service");
      check(!f.actors.ticks() && !f.runtime->completed_frames(),
            "Missing behavior advanced a frame");
      op.reset();
      f.runtime.reset();
      return;
    }
    frame(*op);
    check(!f.actors.request() && a.action().variables[6] == 132 &&
              a.action().variables[7] == 100 &&
              a.behavior.moving_direction == 2 && a.behavior.direction == 2 &&
              a.action().velocity[0] == 0x20000 && a.action().velocity[1] == 0,
          "Runtime skipped a typed behavior decision or velocity service");
    check(a.action().position[0] == (102u + tick * 2) << 16 &&
              f.actors.ticks() == tick + 1 &&
              f.runtime->completed_frames() == tick,
          "Behavior sleep repeated physics or prematurely published frame");
    const auto tasks = a.tasks();
    // The source counts the requesting pass itself once, so the four-frame
    // duration is already three by this frame's publication boundary.
    check(tasks.size() == 1 &&
              tasks[0].sleep_frames ==
                  (tick < 4 ? (tick < 3 ? 3 - tick : 0) : 0xfffe),
          "Sleep was not assigned to the requesting task");
    check(a.action().variables[0] == (tick == 4 ? 1 : 0),
          "Task resumed at the wrong sleep boundary");
    op->complete_frame({std::uint16_t(0x100 + tick * 0x10), 0});
    finish(*op);
    check(f.runtime->completed_frames() == tick + 1 &&
              f.clock.frame_counter == tick + 1 &&
              f.input.state[0] == 0x100 + tick * 0x10,
          "Runtime lost exact publication/input boundary");
  }
  f.runtime.reset();
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
      run(version, false, true);
      run(version, true, true);
      run(version, true, false);
    }
    std::cout << checks << " native enemy behavior Runtime checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
