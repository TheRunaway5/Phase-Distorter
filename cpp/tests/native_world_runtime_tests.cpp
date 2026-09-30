// Native orchestration acceptance: actual Scene/Ticks, actors, streaming and
// rendering; independently varied work budgets and nested service boundaries.
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/world_actor_movement.hpp"
#include "eb/native/world_battle_entry.hpp"
#include "eb/native/world_enemy_contact.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/world_party_following.hpp"
#include "eb/native/world_runtime.hpp"
#include "eb/native/world_scene_presentation.hpp"
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
  data->butterfly_enemy = 1;
  data->butterfly_battle = 1;
  return data;
}
std::shared_ptr<const ActionScriptData> scripts(eb::GameVersion version) {
  auto bytes =
      std::vector<std::uint8_t>{0x14, 0,    2,    1,    0,    0x06, 1, 0x19, 0,
                                0,    0x42, 0x34, 0x12, 0xc0, 0x06, 1, 0x09};
  const auto release = version == eb::GameVersion::US ? 0xc020f1u : 0xc020ffu;
  bytes.insert(bytes.end(),
               {0x42, std::uint8_t(release), std::uint8_t(release >> 8),
                std::uint8_t(release >> 16), 0x09});
  const auto retain = version == eb::GameVersion::US ? 0xc0c6b6u : 0xc0c698u;
  bytes.insert(bytes.end(),
               {0x42, std::uint8_t(retain), std::uint8_t(retain >> 8),
                std::uint8_t(retain >> 16), 0x06, 1, 0x09});
  std::vector<std::uint32_t> entries{0, 10, 14, 17, 22};
  for (const unsigned address : {
           version == eb::GameVersion::US ? 0xc0d5b0u : 0xc0d578u,
           version == eb::GameVersion::US ? 0xc0d98fu : 0xc0d957u}) {
    entries.push_back(bytes.size());
    bytes.insert(bytes.end(), {0x42, std::uint8_t(address),
                              std::uint8_t(address >> 8),
                              std::uint8_t(address >> 16), 0x09});
  }
  return std::make_shared<ActionScriptData>(
      bytes, 0, entries);
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
void main_frame_publication(eb::GameVersion version) {
  Fixture f(version);
  f.start();
  rejects([&] { f.runtime->begin_main_frame(); }, "Unbound main effects were silently skipped");
  std::vector<std::uint8_t> bytes(0xb100);
  const unsigned at = version == eb::GameVersion::US ? 0xaff1 : 0xafd0;
  for (unsigned i = 0; i < 10; ++i) bytes[at + i] = 23;
  WorldLayerConfigurations configs(bytes, version);
  WorldLayerSelection selected;
  ScenePalette colors{};
  WorldEncounterVisualState visual;
  WorldScenePresentation presentation(colors, visual, configs, selected);
  presentation.restore_selected_layer_configuration();
  presentation.publish_area(f.palettes);
  WorldSwirlData definitions;
  definitions.definitions[1] = {1, 0, 2};
  std::array<WorldEncounterClip, 126> clips{};
  for (unsigned i = 0; i < clips.size(); ++i) {
    clips[i].second_window = true;
    for (unsigned y = 0; y < 224; ++y)
      clips[i].rows[y] = {{{std::uint8_t(i), std::uint8_t(100 + i)}, {150, 200}}};
  }
  WorldEncounterEffectData content{clips, {}, {}};
  WorldSwirlState swirl;
  WorldEncounterState encounter_state;
  PaletteColor backup{};
  WorldEncounter encounter(definitions, encounter_state, swirl, colors, backup, visual, {});
  WorldEncounterEffects effects(definitions, content, swirl, colors, visual, presentation);
  f.runtime->bind_presentation(presentation);
  f.runtime->bind_encounter_effects(effects);
  f.runtime->refresh_world_capture();
  encounter.configure_swirl(1, 2, 0);
  const auto old_frame = f.runtime->frame();
  const auto random = f.random;
  auto main = f.runtime->begin_main_frame();
  frame(*main);
  check(f.actors.ticks() == 1 && f.runtime->completed_frames() == 0 && f.random == random,
        "Main prefix changed frame/input/RNG before the boundary");
  check(visual.window_pattern && !visual.window_right[1], "Main prefix failed to advance effect or published it too early");
  const auto once = swirl;
  const auto revision = visual.window_revision;
  for (unsigned i = 0; i < 5; ++i) {
    frame(*main);
    check(swirl == once && visual.window_revision == revision && f.runtime->frame() == old_frame,
          "Repeated pending frame work advanced or published encounter effects");
  }
  main->complete_frame({0,0});
  check(visual.window_right[1] == 200 && f.runtime->frame()->effects && f.runtime->completed_frames() == 1,
        "Logical publication did not commit the actual terminal window interval");
  const auto snapshot = f.runtime->frame();
  for (unsigned i = 0; i < 4; ++i) {
    (void)eb::rasterize_direct_scene({snapshot,{}});
    check(swirl == once && visual.window_revision == revision, "Display sampling advanced encounter effects");
  }
  finish(*main); main.reset();
  auto other = f.runtime->begin(story::TickKind::WorldFrame);
  frame(*other);
  check(swirl == once && visual.window_revision == revision, "Ordinary world wait invented a MAIN effect call");
  other->complete_frame({0,0}); finish(*other); other.reset();
  f.runtime.reset(); // borrowed publication/effect owners outlive Runtime
}
void camera_streaming(eb::GameVersion version, bool erase_camera) {
  Fixture f(version);
  auto spec = actor();
  spec.action.velocity = {};
  spec.action.position = {192u << 16, 176u << 16, 0};
  spec.behavior.tick = ActorTickCallback::CenterCamera;
  const auto camera = f.actors.create(spec), later = f.actors.create(actor());
  f.start();
  const auto initial = f.runtime->frame();
  const auto random = f.random;
  auto operation = f.runtime->begin(story::TickKind::WorldFrame);
  check(operation->advance(0) == dialogue::Progress::BudgetExhausted &&
            f.actors.ticks() == 0,
        "Zero work budget advanced a native tick");
  for (unsigned i = 0; !f.runtime->streaming() && i < 100; ++i)
    check(operation->advance(1) == dialogue::Progress::BudgetExhausted,
          "Camera escaped internal streaming");
  check(f.runtime->streaming() && f.actors.camera_refresh() &&
            f.actors.ticks() == 0 && f.random == random &&
            f.actors.actor(later).action().variables[0] == 0,
        "Camera did not suspend before later actors");
  rejects([&] { f.runtime->frame(); }, "Streaming allowed a frame sample");
  rejects([&] { operation->complete_frame({0, 0}); },
          "Streaming allowed input/frame completion");
  rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
          "Streaming admitted another tick");
  rejects([&] { f.runtime->advance_streaming(); },
          "External code stole actor streaming continuation");
  check(initial->frame == 0,
        "Streaming mutated a previously held immutable frame");
  if (erase_camera)
    f.actors.erase(camera);
  frame(*operation);
  check(
      !f.runtime->streaming() && !f.actors.camera_refresh() &&
          f.actors.ticks() == 1 &&
          f.actors.actor(later).action().variables[0] == 1 &&
          f.runtime->completed_frames() == 0 &&
          f.runtime->streaming_work().npc_creations == 1 &&
          f.runtime->streaming_work().terrain_queries == 1,
      "Camera completion lost source-ordered activation or repeated its tick");
  check(f.runtime->frame() == initial,
        "Actor work published before real frame completion");
  operation->complete_frame({0x0080, 0});
  finish(*operation);
  check(f.runtime->completed_frames() == 1 && f.input.state[0] == 0x0080 &&
            f.runtime->frame() != initial,
        "Native frame failed to commit real input and immutable output");
}
void initial_and_dirty_capture(eb::GameVersion version) {
  Fixture f(version);
  f.start();
  const auto random = f.random;
  const auto inputs = f.input;
  f.runtime->prepare_area({128, 112});
  f.runtime->begin_initial_activation({128, 112});
  rejects([&] { f.runtime->frame(); },
          "Initial streaming exposed the old world capture");
  rejects([&] { f.runtime->begin(story::TickKind::Frame); },
          "Initial streaming admitted a frame");
  unsigned yields = 0;
  while (!f.runtime->advance_streaming(1))
    ++yields;
  check(yields >= 79 && f.actors.ticks() == 0 &&
            f.runtime->completed_frames() == 0 && f.input == inputs &&
            f.controls.npcs == NpcSpawnMode::Streaming,
        "Initial streaming advanced time or skipped rows");
  check(f.random != random && f.runtime->streaming_work().terrain_queries > 0,
        "Initial activation omitted shared enemy RNG");
  rejects([&] { f.runtime->frame(); },
          "Activation published actors without their first real tick");
  rejects([&] { f.runtime->begin(story::TickKind::Frame); },
          "A frame-only wait bypassed required world capture");
  auto step = f.runtime->begin(story::TickKind::WorldFrame);
  frame(*step);
  step->complete_frame({0, 0});
  finish(*step);
  check(f.runtime->frame()->frame == 1 && f.actors.ticks() == 1,
        "Explicit first actor/screen tick did not publish");
  const auto art = f.area.graphics();
  const auto palette = f.palettes.scenery;
  const auto seed = f.random;
  f.text.event_flags[0] ^= 1;
  f.runtime->reprepare_events();
  check(f.area.graphics() == art && f.palettes.scenery == palette &&
            f.random == seed && f.actors.ticks() == 1,
        "Event-only area refresh changed artwork, palette, RNG or time");
  rejects([&] { f.runtime->frame(); },
          "Event refresh reused an obsolete scene capture");
  auto redraw = f.runtime->begin(story::TickKind::WorldFrame);
  frame(*redraw);
  redraw->complete_frame({0, 0});
  finish(*redraw);
  const auto committed = f.runtime->frame();
  rejects([&] { f.runtime->prepare_area({8192, 0}); },
          "Out-of-map preparation was accepted");
  check(f.runtime->frame() == committed && f.area.graphics() == art,
        "Rejected preparation changed live area/publication");
  f.windows.prompt_state().battle_mode = 1;
  check(!f.runtime->advance_area_animation() && f.runtime->frame() == committed,
        "Battle advanced world animation");
}
void nested_dialogue_and_explicit_services(eb::GameVersion version) {
  Fixture f(version);
  const auto blocked = f.actors.create(actor(1)),
             later = f.actors.create(actor());
  f.start();
  auto parent = f.runtime->begin(story::TickKind::WorldFrame);
  check(next(*parent) == dialogue::Progress::Suspended &&
            parent->service() == story::SceneService::ActorEngine &&
            parent->actor_request()->actor == blocked &&
            f.clock.action_scripts_disabled == 1,
        "Unported actor service escaped the real Scene guard");
  dialogue::Conversation child(program(version, {0x71, 0x02}), f.windows);
  child.start(dialogue::EntryId{0});
  auto nested = f.runtime->begin_nested(child, *parent);
  rejects([&] { parent->advance(); },
          "Parent resumed while nested dialogue owned the scene");
  rejects([&] { parent->respond_actor(); },
          "Parent answered through nested ownership");
  frame(*nested);
  check(f.actors.ticks() == 0 &&
            f.actors.actor(later).action().variables[0] == 0 &&
            f.clock.action_scripts_disabled == 1,
        "Nested text pumped the suspended world");
  nested->complete_frame({0, 0});
  finish(*nested);
  check(parent->actor_request()->actor == blocked &&
            f.runtime->completed_frames() == 1,
        "Nested dialogue lost its parent engine request");
  f.actors.erase(blocked);
  frame(*parent);
  check(f.actors.ticks() == 1 &&
            f.actors.actor(later).action().variables[0] == 1,
        "Parent traversal failed after nested deletion");
  parent->complete_frame({0, 0});
  finish(*parent);
  f.windows.prompt_state().battle_mode = 1;
  auto battle = f.runtime->begin(story::TickKind::WorldFrame);
  frame(*battle);
  battle->complete_frame({0, 0});
  check(next(*battle) == dialogue::Progress::Suspended &&
            battle->service() == story::SceneService::BattleHelper,
        "Unported battle service was silently acknowledged");
  battle->respond_battle();
  finish(*battle);
  check(f.actors.ticks() == 1 && f.runtime->completed_frames() == 3,
        "Battle helper added an overworld tick");
}
void rejection(eb::GameVersion version) {
  Fixture foreign(version);
  std::array<std::uint8_t, 128> other{};
  foreign.actors.scene().event_flags = other;
  rejects([&] { foreign.start(); },
          "A second mutable event-flag owner was accepted");
  check(
      !foreign.windows.query_party({dialogue::PartyQueryKind::ControlledCount}),
      "Rejected runtime committed a party binding");
  Fixture occupied(version);
  WorldActorMovement existing(occupied.collision, occupied.area);
  occupied.actors.bind_movement(existing);
  rejects([&] { occupied.start(); },
          "Conflicting movement ownership was accepted");
  check(!occupied.windows.query_party(
            {dialogue::PartyQueryKind::ControlledCount}),
        "Failed movement adoption committed the WindowHost party binding");
  WorldActorMovement stranger(occupied.collision, occupied.area);
  rejects([&] { occupied.actors.bind_movement(stranger); },
          "Failed runtime detached another movement owner");
  occupied.actors.clear_movement(existing);
  Fixture invalid(version, true);
  const auto invalid_actor = invalid.actors.create(actor());
  rejects([&] { invalid.start(); }, "Missing collision shape was accepted");
  check(!invalid.windows.query_party(
            {dialogue::PartyQueryKind::ControlledCount}) &&
            !invalid.actors.actor(invalid_actor).hitbox,
        "Invalid shape partially committed runtime owners");
  Fixture screen_failure(version);
  const auto initial_actor = screen_failure.actors.create(actor());
  rejects([&] { screen_failure.start({}, 255); },
          "Invalid Scene width was accepted");
  check(!screen_failure.windows.query_party(
            {dialogue::PartyQueryKind::ControlledCount}) &&
            !screen_failure.actors.actor(initial_actor).hitbox,
        "Failed Scene capture retained movement geometry or party adoption");
  screen_failure.start();
  check(screen_failure.actors.actor(initial_actor).hitbox.has_value(),
        "Construction rollback prevented later valid movement adoption");
  Fixture f(version);
  f.start();
  auto operation = f.runtime->begin(story::TickKind::Frame);
  operation.reset();
  check(f.runtime->failed(),
        "Abandoning an unfinished native scene was not terminal");
  rejects([&] { f.runtime->frame(); }, "Abandoned scene remained publishable");
  rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
          "Abandoned scene admitted another tick");
}
void lifecycle(eb::GameVersion version) {
  Fixture f(version);
  const auto release = f.actors.create(actor(3)),
             retain = f.actors.create(actor(4));
  std::optional<ActorRetentionArea> live;
  unsigned reads{};
  f.start([&] {
    ++reads;
    return live;
  });
  auto operation = f.runtime->begin(story::TickKind::WorldFrame);
  check(next(*operation) == dialogue::Progress::Suspended &&
            operation->service() == story::SceneService::ActorEngine &&
            operation->actor_request()->actor == retain &&
            !f.actors.actor(release).has_appearance() && f.actors.ticks() == 0,
        "Lifecycle release was not fulfilled, or absent retention state was "
        "fabricated");
  live = ActorRetentionArea{100, 100, 0};
  frame(*operation);
  check(f.actors.actor(retain).tasks()[0].temporary == 0xffff &&
            f.actors.ticks() == 1 && reads >= 3,
        "Retention service ignored the current authoritative leader or added a "
        "tick");
  operation->complete_frame({0, 0});
  finish(*operation);
}
void explicit_animation(eb::GameVersion version) {
  Fixture f(version);
  f.palettes.animation_id = 1;
  f.start();
  const auto initial_art = f.area.graphics();
  const auto initial_color = f.palettes.scenery;
  for (unsigned i = 0; i < 3; ++i) {
    auto step = f.runtime->begin(story::TickKind::WorldFrame);
    frame(*step);
    step->complete_frame({0, 0});
    finish(*step);
  }
  check(f.area.graphics() == initial_art && f.palettes.scenery == initial_color,
        "Generic scene ticks invented an EVENT_1 animation callback");
  check(!f.runtime->advance_area_animation(),
        "First explicit animation step ignored authored delays");
  check(f.runtime->advance_area_animation() &&
            f.area.graphics() == initial_art &&
            f.palettes.scenery == f.animations.track(1).frames[1].scenery,
        "Explicit palette step did not publish source frame1 at delay2");
  check(f.runtime->advance_area_animation() && f.area.graphics()[1][0] == 15,
        "Explicit map step did not retain its independent delay3");
  const auto ticks = f.actors.ticks();
  const auto random = f.random;
  const auto inputs = f.input;
  f.text.set_flag(1, true);
  f.runtime->reprepare_events();
  check(f.area.blocks() == f.map.prepare(0, f.text.event_flags).blocks() &&
            f.area.graphics()[1][0] == 15,
        "Event-only reprepare lost the changed block or current animated "
        "artwork");
  check(f.actors.ticks() == ticks && f.random == random && f.input == inputs,
        "Explicit area phases invented time/RNG/input");
  auto screen = f.runtime->begin(story::TickKind::WorldFrame);
  frame(*screen);
  screen->complete_frame({0, 0});
  finish(*screen);
  check(f.runtime->frame()->frame == 4,
        "Explicit area changes did not use the next real screen boundary");
}
void budget_and_failure(eb::GameVersion version) {
  Fixture one(version), many(version);
  for (auto f : {&one, &many}) {
    auto spec = actor();
    spec.action.velocity = {};
    spec.action.position = {192u << 16, 176u << 16, 0};
    spec.behavior.tick = ActorTickCallback::CenterCamera;
    f->actors.create(spec);
    f->actors.create(actor());
    f->start();
  }
  auto slow = one.runtime->begin(story::TickKind::WorldFrame),
       fast = many.runtime->begin(story::TickKind::WorldFrame);
  check(next(*slow, 1) == dialogue::Progress::Suspended &&
            next(*fast, 4096) == dialogue::Progress::Suspended,
        "Budget schedules failed to reach their common frame boundary");
  slow->complete_frame({0x0100, 0});
  fast->complete_frame({0x0100, 0});
  finish(*slow);
  finish(*fast);
  check(one.random == many.random &&
            one.text.event_flags == many.text.event_flags &&
            one.input == many.input &&
            one.actors.actors() == many.actors.actors() &&
            one.runtime->streaming_work() == many.runtime->streaming_work() &&
            eb::rasterize_direct_scene({one.runtime->frame(), {}}) ==
                eb::rasterize_direct_scene({many.runtime->frame(), {}}),
        "Work budgeting changed owners, random/input state, activation order "
        "or output");
  for (auto id : one.actors.actors())
    check(one.actors.actor(id).action().position ==
                  many.actors.actor(id).action().position &&
              one.actors.actor(id).action().variables ==
                  many.actors.actor(id).action().variables,
          "Work budgeting changed complete actor traversal state");
  Fixture failed(version);
  for (unsigned role = 0; role < 22; ++role)
    check(failed.actors.create_authored(actor(), {role, role + 1}).has_value(),
          "Could not fill real NPC roles");
  failed.start();
  failed.runtime->begin_refresh({64, 64});
  rejects(
      [&] {
        while (!failed.runtime->advance_streaming(1)) {
        };
      },
      "Exhausted real NPC roles did not fail streaming");
  const auto random = failed.random;
  const auto work = failed.runtime->streaming_work();
  check(failed.runtime->failed() && failed.runtime->streaming(),
        "Failed streaming lost its terminal barrier");
  for (unsigned retry = 0; retry < 3; ++retry) {
    rejects([&] { failed.runtime->advance_streaming(); },
            "Failed streaming replayed consumed work");
    rejects([&] { failed.runtime->begin(story::TickKind::Frame); },
            "Failed streaming admitted a tick");
    rejects([&] { failed.runtime->frame(); },
            "Failed streaming published an incomplete world");
  }
  check(failed.random == random && failed.runtime->streaming_work() == work &&
            failed.actors.ticks() == 0,
        "Repeated failure changed RNG, work or tick state");
}
void party_blink(eb::GameVersion version) {
  Fixture f(version);
  const auto party_actor = *f.actors.create_authored(actor(2), {24, 25});
  const auto ordinary = *f.actors.create_authored(actor(2), {3, 4});
  f.start();
  f.actors.appearance_scene().intangibility_ticks = 46;
  for (const auto id : {party_actor, ordinary}) {
    auto &a = f.actors.actor(id);
    EightDirectionAnimation blink;
    blink.intangibility_ticks = 46;
    a.appearance.step_eight(a.action(), blink);
    a.appearance.step_eight(a.action(), blink);
    check(a.appearance.flashing_hidden(),
          "Runtime blink fixture did not hide artwork");
  }
  auto operation = f.runtime->begin(
      dialogue::WindowEffect{dialogue::WindowEffectKind::ClearPartyBlink});
  finish(*operation);
  check(
      !f.actors.actor(party_actor).appearance.flashing_hidden() &&
          f.actors.actor(ordinary).appearance.flashing_hidden() &&
          f.actors.appearance_scene().intangibility_ticks == 46 &&
          f.actors.ticks() == 0 && f.runtime->completed_frames() == 0,
      "Native window blink service affected ordinary actors or advanced time");
}
void maintenance_interaction_identity(eb::GameVersion version,
                                      bool interactions_first) {
  Fixture f(version);
  auto spec = actor(2);
  spec.action.velocity = {};
  spec.behavior.tick = ActorTickCallback::WorldMaintenance;
  f.actors.create_authored(spec, {23, 24});
  spec.behavior.tick = ActorTickCallback::None;
  f.actors.create_authored(spec, {24, 25});
  interaction_test_assets::Content content(version);
  const auto resources =
      npcs::InteractionResources::import(content.bytes, version);
  const auto map_text = npcs::MapTextResources::import(content.bytes, version);
  const auto text = content.program(version);
  npcs::Interactions real(resources, map_text, text, f.windows, f.actors,
                          f.collision, f.area);
  npcs::Interactions other(resources, map_text, text, f.windows, f.actors,
                           f.collision, f.area);
  real.state().leader_x = 128;
  real.state().leader_y = 176;
  other.state().leader_x = 400;
  other.state().leader_y = 500;
  WorldPartyState formation;
  formation.roles[0] = 24;
  formation.current_leader_role = 24;
  PartyTrail trail;
  WorldControlState state;
  WorldControl correct(f.actors, formation, trail, real.state(), state,
                       f.windows.prompt_state(), f.input, f.clock, f.collision,
                       f.area);
  WorldControl wrong(f.actors, formation, trail, other.state(), state,
                     f.windows.prompt_state(), f.input, f.clock, f.collision,
                     f.area);
  WorldMaintenanceState maintenance;
  party::ItemTransformationState items;
  npcs::InteractionQueueState queue_state;
  npcs::DadPhoneState phone{1, 0};
  WorldInteractionQueue queue(version, queue_state,
                              f.actors.appearance_scene().intangibility_ticks,
                              phone);
  f.start();
  if (interactions_first) {
    f.runtime->bind_interactions(real);
    rejects(
        [&] { f.runtime->bind_maintenance(wrong, maintenance, items, queue); },
        "Runtime bound movement to a different InteractionState than "
        "TALK/CHECK");
    f.runtime->bind_maintenance(correct, maintenance, items, queue);
  } else {
    f.runtime->bind_maintenance(correct, maintenance, items, queue);
    rejects([&] { f.runtime->bind_interactions(other); },
            "Runtime bound TALK/CHECK to a different InteractionState than "
            "movement");
    f.runtime->bind_interactions(real);
  }
  check(!f.runtime->failed() && !correct.busy() && !wrong.busy() &&
            other.state().leader_x == 400 && other.state().leader_y == 500,
        "Rejected interaction/control adoption mutated or poisoned an owner");
  auto tick = f.runtime->begin(story::TickKind::WorldFrame);
  check(
      next(*tick) == dialogue::Progress::Suspended &&
          tick->maintenance_request()->control->kind ==
              WorldControlService::Walk,
      "Valid owner could not run after a rejected interaction/control binding");
  state.moved_this_tick = 1;
  tick->respond_maintenance();
  frame(*tick);
  tick->complete_frame({0, 0});
  finish(*tick);
  check(trail.points[0].x == real.state().leader_x &&
            trail.points[0].y == real.state().leader_y &&
            other.state().leader_x == 400 && other.state().leader_y == 500 &&
            f.actors.ticks() == 1,
        "Successful retry retained the rejected leader-state owner");
}

void nested_maintenance_services(eb::GameVersion version) {
  Fixture f(version);
  f.palettes.animation_id = 1;
  auto spec = actor(2);
  spec.action.velocity = {};
  spec.behavior.tick = ActorTickCallback::WorldMaintenance;
  const auto issuer = *f.actors.create_authored(spec, {23, 24});
  const auto leader = *f.actors.create_authored(actor(), {24, 25});
  const auto later = f.actors.create(actor());
  f.actors.actor(leader).action().variables[1] = 2;
  f.actors.appearance_scene().intangibility_ticks = 46;
  WorldPartyState formation;
  formation.roles[0] = 24;
  formation.current_leader_role = 24;
  PartyTrail trail;
  trail.next_write = 255;
  trail.points[255] = {17, 19, 21, 23, 25, 27};
  npcs::InteractionState position;
  position.leader_x = 128;
  position.leader_y = 176;
  WorldControlState control_state;
  WorldControl control(f.actors, formation, trail, position, control_state,
                       f.windows.prompt_state(), f.input, f.clock, f.collision,
                       f.area);
  WorldMaintenanceState maintenance;
  party::ItemTransformationState items;
  items.loaded_count = 1;
  npcs::InteractionQueueState queue_state;
  npcs::DadPhoneState phone{1, 0};
  WorldInteractionQueue queue(version, queue_state,
                              f.actors.appearance_scene().intangibility_ticks,
                              phone);
  f.start();
  f.runtime->bind_maintenance(control, maintenance, items, queue);
  const auto initial_art = f.area.graphics();
  const auto initial_palette = f.palettes.scenery;
  auto parent = f.runtime->begin(story::TickKind::WorldFrame);
  check(next(*parent) == dialogue::Progress::Suspended &&
            parent->maintenance_request() &&
            parent->maintenance_request()->kind ==
                WorldMaintenanceService::ItemTransformations &&
            parent->actor_request()->actor == issuer,
        "Nested maintenance fixture did not reach its item service");
  unsigned nested_frames{};
  const auto nested_service = [&] {
    const auto pending = *parent->maintenance_request();
    const auto old_trail = trail;
    const auto old_cursors = formation.trail_cursors;
    const auto old_intangibility =
        f.actors.appearance_scene().intangibility_ticks;
    const auto old_members = f.actors.actors();
    const auto leader_position = f.actors.actor(leader).action().position;
    const auto later_position = f.actors.actor(later).action().position;
    dialogue::Conversation text(program(version, {0x71, 0x02}), f.windows);
    text.start(dialogue::EntryId{0});
    auto child = f.runtime->begin_nested(text, *parent);
    rejects([&] { parent->advance(); },
            "Maintenance parent advanced through nested dialogue ownership");
    rejects(
        [&] { parent->respond_maintenance(); },
        "Maintenance parent acknowledged through nested dialogue ownership");
    rejects([&] { parent->respond_actor(); },
            "Actor acknowledgment bypassed nested maintenance ownership");
    frame(*child);
    check(!child->maintenance_request() &&
              *parent->maintenance_request() == pending &&
              f.clock.action_scripts_disabled == 1 && f.actors.ticks() == 0 &&
              f.actors.actors() == old_members &&
              f.actors.actor(leader).action().variables[0] == 0 &&
              f.actors.actor(later).action().variables[0] == 0 &&
              f.actors.actor(leader).action().position == leader_position &&
              f.actors.actor(later).action().position == later_position &&
              trail == old_trail && formation.trail_cursors == old_cursors &&
              f.actors.appearance_scene().intangibility_ticks ==
                  old_intangibility &&
              f.area.graphics() == initial_art &&
              f.palettes.scenery == initial_palette,
          "Nested dialogue pumped actors or replayed a maintenance phase");
    const auto random_at_frame = f.random;
    check(child->advance(4096) == dialogue::Progress::Suspended &&
              f.random == random_at_frame &&
              f.runtime->completed_frames() == nested_frames,
          "Repeated nested frame wait advanced an owner");
    child->complete_frame({0, 0});
    finish(*child);
    ++nested_frames;
    check(parent->actor_request()->actor == issuer &&
              *parent->maintenance_request() == pending &&
              f.clock.action_scripts_disabled == 1 && f.actors.ticks() == 0 &&
              f.clock.frame_counter == nested_frames &&
              f.runtime->completed_frames() == nested_frames &&
              trail == old_trail && formation.trail_cursors == old_cursors &&
              f.actors.appearance_scene().intangibility_ticks ==
                  old_intangibility,
          "Nested dialogue lost the original maintenance continuation");
    const auto random_after_child = f.random;
    check(parent->advance(4096) == dialogue::Progress::Suspended &&
              *parent->maintenance_request() == pending &&
              f.random == random_after_child && f.actors.ticks() == 0 &&
              f.area.graphics() == initial_art &&
              f.palettes.scenery == initial_palette,
          "Resuming a pending maintenance parent replayed work without its "
          "response");
  };
  nested_service();
  check(f.actors.appearance_scene().intangibility_ticks == 46 &&
            formation.trail_cursors[2] == 0 && trail.next_write == 255,
        "Item-service dialogue prematurely ran world control");
  items.loaded_count = 0;
  parent->respond_maintenance();
  check(next(*parent) == dialogue::Progress::Suspended &&
            parent->maintenance_request()->kind ==
                WorldMaintenanceService::Control &&
            parent->maintenance_request()->control->kind ==
                WorldControlService::Walk &&
            formation.trail_cursors[2] == 255 &&
            f.actors.appearance_scene().intangibility_ticks == 45,
        "Original control did not begin exactly once after the item response");
  nested_service();
  position.leader_direction = 6;
  control_state.moved_this_tick = 1;
  parent->respond_maintenance();
  frame(*parent);
  check(!parent->maintenance_request() && f.actors.ticks() == 1 &&
            f.actors.actor(leader).action().variables[0] == 1 &&
            f.actors.actor(later).action().variables[0] == 1 &&
            trail.next_write == 0 && trail.points[255].x == 128 &&
            trail.points[255].y == 176 && trail.points[255].direction == 6 &&
            trail.points[255].reserved == 27 && control_state.camera_moved &&
            f.actors.appearance_scene().intangibility_ticks == 45 &&
            f.area.graphics() == initial_art &&
            f.palettes.scenery == initial_palette,
        "Nested services duplicated or skipped the original callback or "
        "follower pass");
  parent->complete_frame({0, 0});
  finish(*parent);
  check(f.runtime->completed_frames() == 3 && f.clock.frame_counter == 3 &&
            f.clock.action_scripts_disabled == 0 && !control.busy(),
        "Nested maintenance did not release its guard after one actor tick and "
        "three frames");
  // The next true callback, not either dialogue frame, is animation tick2.
  auto second = f.runtime->begin(story::TickKind::WorldFrame);
  check(next(*second) == dialogue::Progress::Suspended &&
            second->maintenance_request()->control->kind ==
                WorldControlService::Walk &&
            f.palettes.scenery == f.animations.track(1).frames[1].scenery &&
            f.area.graphics() == initial_art &&
            f.actors.appearance_scene().intangibility_ticks == 44,
        "Dialogue frames shifted the next maintenance animation/control tick");
  second->respond_maintenance();
  frame(*second);
  second->complete_frame({0, 0});
  finish(*second);
  check(f.actors.ticks() == 2 && f.runtime->completed_frames() == 4 &&
            f.actors.actor(later).action().variables[0] == 2,
        "Maintenance did not return to one traversal per explicit world tick");
}

void maintenance_callback(eb::GameVersion version, bool erase_issuer,
                          bool zero_strips) {
  Fixture f(version);
  f.palettes.animation_id = 1;
  auto spec = actor(2);
  spec.action.velocity = {};
  spec.behavior.tick = ActorTickCallback::WorldMaintenance;
  const auto issuer = *f.actors.create_authored(spec, {23, 24});
  spec.behavior.tick = ActorTickCallback::None;
  const auto leader = *f.actors.create_authored(spec, {24, 25});
  f.actors.actor(leader).action().variables[1] = 2;
  WorldPartyState formation;
  formation.roles[0] = 24;
  formation.current_leader_role = 24;
  PartyTrail trail;
  trail.next_write = 255;
  npcs::InteractionState position;
  position.leader_x = 128;
  position.leader_y = 176;
  WorldControlState control_state;
  WorldControl control(f.actors, formation, trail, position, control_state,
                       f.windows.prompt_state(), f.input, f.clock, f.collision,
                       f.area);
  WorldMaintenanceState state;
  party::ItemTransformationState items;
  items.loaded_count = 1;
  npcs::InteractionQueueState queue_state;
  npcs::DadPhoneState phone{1, 0};
  WorldInteractionQueue queue(version, queue_state,
                              f.actors.appearance_scene().intangibility_ticks,
                              phone);
  f.start();
  story::TickState wrong_clock;
  WorldControl wrong_control(f.actors, formation, trail, position,
                             control_state, f.windows.prompt_state(), f.input,
                             wrong_clock, f.collision, f.area);
  rejects(
      [&] { f.runtime->bind_maintenance(wrong_control, state, items, queue); },
      "Runtime adopted a controller driven by a different tick clock");
  WorldCollision wrong_collision(f.collision_content.bytes,
                                 f.collision_content.collision_layout);
  WorldControl wrong_geometry(f.actors, formation, trail, position,
                              control_state, f.windows.prompt_state(), f.input,
                              f.clock, wrong_collision, f.area);
  rejects(
      [&] { f.runtime->bind_maintenance(wrong_geometry, state, items, queue); },
      "Runtime adopted a controller using a different collision owner");
  f.runtime->bind_maintenance(control, state, items, queue);
  rejects([&] { f.runtime->bind_maintenance(control, state, items, queue); },
          "Runtime accepted a second maintenance owner");
  rejects([&] { f.runtime->advance_area_animation(); },
          "Bound animation clock admitted a second advancement entry");
  const auto initial_palette = f.palettes.scenery;
  const auto initial_art = f.area.graphics();
  auto operation = f.runtime->begin(story::TickKind::WorldFrame);
  check(next(*operation) == dialogue::Progress::Suspended &&
            operation->service() == story::SceneService::ActorEngine &&
            operation->actor_request()->origin ==
                WorldActionOrigin::TickCallback &&
            operation->maintenance_request()->kind ==
                WorldMaintenanceService::ItemTransformations,
        "EVENT1 callback did not enter native maintenance at its item phase");
  const auto ticks = f.actors.ticks();
  const auto rng = f.random;
  for (unsigned repeat = 0; repeat < 4; ++repeat) {
    check(operation->advance(100) == dialogue::Progress::Suspended &&
              f.actors.ticks() == ticks && f.clock.frame_counter == 0 &&
              f.area.graphics() == initial_art &&
              f.palettes.scenery == initial_palette && f.random == rng,
          "Pending maintenance replayed a clock, RNG, input or scene mutation");
    rejects([&] { operation->respond_actor(); },
            "Generic actor ACK bypassed native maintenance");
  }
  // The real item service can mutate live state, then returns exactly once.
  items.loaded_count = 0;
  operation->respond_maintenance();
  check(
      next(*operation) == dialogue::Progress::Suspended &&
          operation->maintenance_request()->control->kind ==
              WorldControlService::Walk &&
          formation.trail_cursors[2] == 255,
      "Native maintenance lost the actual controller/character trail boundary");
  position.leader_x = zero_strips ? 128 : 160;
  position.leader_y = 176;
  position.leader_direction = 6;
  control_state.moved_this_tick = 1;
  if (erase_issuer)
    f.actors.erase(issuer);
  operation->respond_maintenance();
  bool saw_refresh = false;
  for (unsigned step = 0; step < 10000; ++step) {
    const auto result = operation->advance(1);
    if (operation->maintenance_request() &&
        operation->maintenance_request()->control &&
        operation->maintenance_request()->control->kind ==
            WorldControlService::RefreshCamera) {
      saw_refresh = true;
      rejects([&] { operation->respond_maintenance(); },
              "External ACK bypassed maintenance-owned streaming");
      rejects([&] { f.runtime->begin(story::TickKind::Frame); },
              "Maintenance-owned streaming admitted an unrelated tick");
      check(f.actors.ticks() == ticks && f.clock.frame_counter == 0,
            "Maintenance streaming consumed another logic or input tick");
    }
    if (result != dialogue::Progress::BudgetExhausted) {
      check(result == dialogue::Progress::Suspended &&
                operation->service() == story::SceneService::Frame,
            "Maintenance did not reach its frame boundary");
      break;
    }
    check(step + 1 < 10000, "Maintenance streaming did not terminate");
  }
  check(saw_refresh && !operation->maintenance_request() &&
            control_state.camera_moved && trail.next_write == 0 &&
            trail.points[255].x == position.leader_x &&
            trail.points[255].y == position.leader_y &&
            formation.projection.leader_role == 24 &&
            formation.projection.direction == 6 &&
            f.input.player_activity == 1 &&
            f.actors.scene().camera_x == (zero_strips ? 0 : 32) &&
            f.actors.scene().camera_y == 64,
        "Native callback lost camera completion, live follower cache, or ring "
        "wrap");
  check(f.palettes.scenery == initial_palette &&
            f.area.graphics() == initial_art,
        "Maintenance replayed the first eligible animation tick");
  operation->complete_frame({0, 0});
  finish(*operation);
  check(f.runtime->completed_frames() == 1 && f.clock.frame_counter == 1,
        "Maintenance callback manufactured a display/input frame");
  if (erase_issuer) {
    auto subsequent = f.runtime->begin(story::TickKind::WorldFrame);
    frame(*subsequent);
    subsequent->complete_frame({0, 0});
    finish(*subsequent);
    check(f.palettes.scenery == initial_palette,
          "Deleted EVENT1 actor kept an implicit maintenance clock alive");
  } else {
    for (unsigned tick = 2; tick <= 3; ++tick) {
      auto subsequent = f.runtime->begin(story::TickKind::WorldFrame);
      check(next(*subsequent) == dialogue::Progress::Suspended &&
                subsequent->maintenance_request() &&
                subsequent->maintenance_request()->control->kind ==
                    WorldControlService::Walk,
            "Surviving EVENT1 did not run exactly one maintenance callback "
            "next tick");
      check(f.palettes.scenery == f.animations.track(1).frames[1].scenery,
            "Native callback did not publish palette frame1 on its actual "
            "second tick");
      if (tick == 3)
        check(f.area.graphics()[1][0] == 15,
              "Native callback did not publish tile frame1 on its actual third "
              "tick");
      subsequent->respond_maintenance();
      frame(*subsequent);
      subsequent->complete_frame({0, 0});
      finish(*subsequent);
      check(f.clock.frame_counter == tick && f.actors.ticks() == tick,
            "Repeated native maintenance changed game/display cadence");
    }
  }
}
void native_walking(eb::GameVersion version, bool transition,
                    bool external_door = false, bool missing_follower = false,
                    bool abandoned_queue = false,
                    unsigned native_transition = 0, unsigned control_mode = 0) {
  Fixture f(version);
  f.controls.enemies = false;
  std::optional<ActorId> focus_actor;
  if (control_mode == 2) {
    auto moving = actor(2);
    moving.npc = 321;
    moving.action.position = {130u * 65536 + 0x4567, 176u * 65536 + 0x2345, 0};
    moving.action.velocity = {65536, 0, 0};
    moving.behavior.direction = 2;
    focus_actor = f.actors.create_authored(moving, {0, 1});
  }
  auto spec = actor();
  spec.script = 2;
  spec.action.velocity = {};
  spec.behavior.tick = ActorTickCallback::WorldMaintenance;
  f.actors.create_authored(spec, {23, 24});
  spec.behavior.tick = ActorTickCallback::None;
  const auto leader = *f.actors.create_authored(spec, {24, 25});
  f.actors.actor(leader).action().variables[1] = 0;
  f.actors.scene().camera_x = 128;
  f.actors.scene().camera_y = 64;
  WorldPartyState formation;
  formation.roles[0] = 24;
  formation.current_leader_role = 24;
  PartyTrail trail;
  trail.next_write = 255;
  npcs::InteractionState position;
  position.leader = leader;
  position.leader_x = 128;
  position.leader_y = 176;
  WorldControlState movement;
  movement.x_fraction = 0x3456;
  WorldControl control(f.actors, formation, trail, position, movement,
                       f.windows.prompt_state(), f.input, f.clock, f.collision,
                       f.area);
  WorldMaintenanceState maintenance;
  party::ItemTransformationState items;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue(
      version, queued, f.actors.appearance_scene().intangibility_ticks, phone);
  WorldNavigationState navigation;
  WorldHotspotState hot;
  WorldHotspots hotspots(version, hot, position, f.clock,
                         f.actors.appearance_scene(), queue);
  std::vector<std::uint8_t> content(0x101400);
  const auto walking_layout = walking_data_layout(version);
  for (unsigned style = 0; style < 14; ++style) {
    put(content, walking_layout.cardinal + style * 4, 0x8000);
    put(content, walking_layout.cardinal + style * 4 + 2, 1);
    put(content, walking_layout.diagonal + style * 4, 0);
    put(content, walking_layout.diagonal + style * 4 + 2, 1);
    put(content, walking_layout.allowed + style * 2, 255);
  }
  for (unsigned i = 0; i < 1280; ++i)
    pointer(content, 0x100000 + i * 4, 0xf3000);
  if (transition) {
    // Every cell uses the same authored escalator record. Collision still
    // selects the actual ladder cell before the real map-text directory lookup.
    put(content, 0xf3000, 1024);
    for (unsigned y = 0; y < 32; ++y)
      for (unsigned x = 0; x < 32; ++x) {
        const unsigned at = 0xf3002 + (y * 32 + x) * 5;
        content[at] = y;
        content[at + 1] = x;
        content[at + 2] = native_transition == 2 ? 4 : 3;
        put(content, at + 3, 0x200);
      }
    std::fill(f.collision_content.bytes.begin(),
              f.collision_content.bytes.begin() + 0x19000, 0);
    std::array<std::uint8_t, 16> cells;
    cells.fill(0x10);
    f.collision_content.pattern(cells);
    f.area = f.collision_content.area();
  }
  const auto generated_layout = generated_input_data_layout(version);
  const std::array<unsigned, 8> pads{0x800, 0x900, 0x100, 0x500,
                                     0x400, 0x600, 0x200, 0xa00};
  const std::array<unsigned, 13> bases{0x4000, 0x8000, 0,      0xc000, 0x8000,
                                       0xffff, 0,      0xffff, 0x4000, 0xc000,
                                       0xffff, 0xffff, 0};
  const std::array<unsigned, 16> thresholds{13,  38,   64,   92,  121, 153,
                                            190, 232,  282,  345, 427, 541,
                                            715, 1021, 1723, 5181};
  for (unsigned i = 0; i < pads.size(); ++i)
    put(content, generated_layout.pads + 2 * i, pads[i]);
  for (unsigned i = 0; i < bases.size(); ++i)
    put(content, generated_layout.angle_bases + 2 * i, bases[i]);
  for (unsigned i = 0; i < thresholds.size(); ++i)
    put(content, generated_layout.angle_thresholds + 2 * i, thresholds[i]);
  const auto factors_x = version == eb::GameVersion::US ? 0x4205d : 0x41fa9;
  const auto factors_y = version == eb::GameVersion::US ? 0x420bd : 0x42009;
  put(content, factors_x + 16 * 2, 256);
  put(content, factors_x + 48 * 2, 256);
  put(content, factors_y, 256);
  put(content, factors_y + 32 * 2, 256);
  const std::array<unsigned, 12> escalator_words{8, 0, 0, 8, 0, 8,
                                                 0, 8, 6, 2, 6, 2};
  const std::array<unsigned, 24> stair_words{
      7, 1, 5, 3, 2, 6, 2, 6, 0, 8, 0, 8, 0, 0, 8, 8, 8, 0, 8, 0, 8, 8, 0, 0};
  const unsigned escalator_base =
      version == eb::GameVersion::US ? 0x6e02 : 0x7030;
  const unsigned stair_base =
      version == eb::GameVersion::US ? 0x3e200 : 0x3e1ea;
  for (unsigned i = 0; i < escalator_words.size(); ++i)
    put(content, escalator_base + 2 * i, escalator_words[i]);
  for (unsigned i = 0; i < stair_words.size(); ++i)
    put(content, stair_base + 2 * i, stair_words[i]);
  WorldDoors doors(npcs::MapTextResources::import(content, version),
                   WorldDoorResources::import(content, version), f.actors,
                   position, movement, navigation, maintenance, f.input, queue);
  WalkingData data(content, version);
  WorldMovement terrain(f.collision_content.bytes,
                        f.collision_content.movement_layout);
  party::MovementPolicyState mushroom;
  WorldWalking walking(data, f.actors, f.enemies, position, movement, formation,
                       f.party, mushroom, f.windows.prompt_state(), f.input,
                       f.clock, navigation, queue, hotspots, doors, f.collision,
                       terrain, f.area);
  const GeneratedInputData generated_data(content, version);
  const WorldDoorTransitionData transition_data(content, version);
  WorldScheduler scheduler(f.windows, f.clock, phone,
                           f.actors.appearance_scene(), maintenance);
  WorldInputPlayback playback(
      position, f.input,
      WorldRawInputState{
          {}, std::uint16_t(native_transition == 3 ? 0x8000 : 0), 0});
  WorldDoorTransitionState transition_state;
  WorldDoorTransitions transitions(transition_data, generated_data, data,
                                   playback, scheduler, position, movement,
                                   navigation, formation, transition_state);
  WorldEscalator escalator(data, f.actors, position, movement, formation,
                           navigation, transition_state, maintenance, f.input,
                           queue, doors, f.collision, terrain, f.area);
  WorldPartyFollowingData follower_data;
  for (auto &row : follower_data.graphics)
    row.fill(1);
  WorldPartyFollowingState follower_state;
  WorldPartyFollowing following(f.actors, f.party, formation, trail, movement,
                                position, f.windows.prompt_state(), maintenance,
                                position.movement_flags, follower_state,
                                follower_data);
  f.party.display_order[0] = missing_follower ? 0 : 1;
  f.actors.actor(leader).behavior.tick = ActorTickCallback::PartyFollower;
  f.start();
  rejects([&] { f.runtime->bind_walking(walking); },
          "Walking bound without its maintenance owner");
  rejects([&] { f.runtime->bind_party_following(following); },
          "Following bound without its maintenance owner");
  f.runtime->bind_maintenance(control, maintenance, items, queue);
  party::State wrong_party(version);
  WorldPartyFollowing wrong_follower_party(
      f.actors, wrong_party, formation, trail, movement, position,
      f.windows.prompt_state(), maintenance, position.movement_flags,
      follower_state, follower_data);
  rejects([&] { f.runtime->bind_party_following(wrong_follower_party); },
          "Runtime accepted different following party owner");
  PartyTrail wrong_trail;
  WorldPartyFollowing wrong_follower_trail(
      f.actors, f.party, formation, wrong_trail, movement, position,
      f.windows.prompt_state(), maintenance, position.movement_flags,
      follower_state, follower_data);
  rejects([&] { f.runtime->bind_party_following(wrong_follower_trail); },
          "Runtime accepted different following trail owner");
  f.runtime->bind_party_following(following);
  rejects([&] { f.runtime->bind_party_following(following); },
          "Runtime accepted duplicate following owner");
  WorldWalking other_party(
      data, f.actors, f.enemies, position, movement, formation, wrong_party,
      mushroom, f.windows.prompt_state(), f.input, f.clock, navigation, queue,
      hotspots, doors, f.collision, terrain, f.area);
  rejects([&] { f.runtime->bind_walking(other_party); },
          "Runtime adopted a different party owner for walking");
  WorldEnemies other_enemies(make_enemies(), f.sprites, f.actions, {0, 0, 2});
  WorldWalking different_enemies(
      data, f.actors, other_enemies, position, movement, formation, f.party,
      mushroom, f.windows.prompt_state(), f.input, f.clock, navigation, queue,
      hotspots, doors, f.collision, terrain, f.area);
  rejects([&] { f.runtime->bind_walking(different_enemies); },
          "Runtime adopted a different enemy identity registry");
  npcs::InteractionQueueState other_queued;
  npcs::DadPhoneState other_phone;
  WorldInteractionQueue other_queue(
      version, other_queued, f.actors.appearance_scene().intangibility_ticks,
      other_phone);
  WorldHotspotState other_hot;
  WorldHotspots other_hotspots(version, other_hot, position, f.clock,
                               f.actors.appearance_scene(), other_queue);
  WorldDoors other_queue_doors(npcs::MapTextResources::import(content, version),
                               WorldDoorResources::import(content, version),
                               f.actors, position, movement, navigation,
                               maintenance, f.input, other_queue);
  WorldWalking different_queue(data, f.actors, f.enemies, position, movement,
                               formation, f.party, mushroom,
                               f.windows.prompt_state(), f.input, f.clock,
                               navigation, other_queue, other_hotspots,
                               other_queue_doors, f.collision, terrain, f.area);
  rejects([&] { f.runtime->bind_walking(different_queue); },
          "Runtime adopted a different pending-interaction queue");
  WorldMaintenanceState other_maintenance;
  WorldDoors different_doors(npcs::MapTextResources::import(content, version),
                             WorldDoorResources::import(content, version),
                             f.actors, position, movement, navigation,
                             other_maintenance, f.input, queue);
  WorldWalking different_gate(
      data, f.actors, f.enemies, position, movement, formation, f.party,
      mushroom, f.windows.prompt_state(), f.input, f.clock, navigation, queue,
      hotspots, different_doors, f.collision, terrain, f.area);
  rejects([&] { f.runtime->bind_walking(different_gate); },
          "Runtime adopted a different door enemy gate");
  f.runtime->bind_walking(walking);
  rejects([&] { f.runtime->bind_walking(walking); },
          "Runtime adopted two walking owners");
  if (native_transition == 6) {
    walking.bind_transitions(transitions);
    check(f.runtime->failed(),
          "Direct door binding left its missing frame owner undetected");
    const auto before = f.input;
    rejects(
        [&] { f.runtime->begin(story::TickKind::WorldFrame); },
        "Door producer ran without its corresponding frame scheduler/playback");
    check(f.actors.ticks() == 0 && f.clock.frame_counter == 0 &&
              f.input == before && !playback.active(),
          "Mismatched frame/door owners changed state before rejection");
    f.runtime.reset();
    return;
  }
  if (native_transition || control_mode) {
    WalkingData foreign_data(content, version);
    WorldScheduler foreign_scheduler(f.windows, f.clock, phone,
                                     f.actors.appearance_scene(), maintenance);
    WorldDoorTransitionState foreign_state;
    WorldDoorTransitions foreign_content(transition_data, generated_data,
                                         foreign_data, playback,
                                         foreign_scheduler, position, movement,
                                         navigation, formation, foreign_state);
    rejects([&] { f.runtime->bind_door_transitions(foreign_content); },
            "Runtime accepted a different walking speed owner for transition "
            "prediction");
    story::TickState foreign_clock;
    WorldScheduler foreign_clock_scheduler(f.windows, foreign_clock, phone,
                                           f.actors.appearance_scene(),
                                           maintenance);
    WorldDoorTransitions foreign_frame(transition_data, generated_data, data,
                                       playback, foreign_clock_scheduler,
                                       position, movement, navigation,
                                       formation, foreign_state);
    rejects([&] { f.runtime->bind_door_transitions(foreign_frame); },
            "Runtime accepted another frame clock for scheduled transitions");
    rejects([&] { f.runtime->bind_escalator(escalator); },
            "Escalator bound without its actual scheduled transition owner");
    f.runtime->bind_door_transitions(transitions);
    f.runtime->bind_door_transitions(
        transitions); // Idempotent same-owner bind.
    WorldDoorTransitionState unrelated_transition;
    WorldEscalator foreign_escalator(
        data, f.actors, position, movement, formation, navigation,
        unrelated_transition, maintenance, f.input, queue, doors, f.collision,
        terrain, f.area);
    rejects([&] { f.runtime->bind_escalator(foreign_escalator); },
            "Escalator accepted a different retained entrance/target owner");
    f.runtime->bind_escalator(escalator);
    rejects([&] { f.runtime->bind_escalator(escalator); },
            "Runtime accepted duplicate escalator service");
    phone = {7, 9};
    f.clock.frame_counter = 255;
    position.leader_direction = 2;
  }
  f.input.state[0] = 0x100;
  f.input.player_activity = 1;
  if (abandoned_queue) {
    hot.live[0] = {2, 0, 0, 1000, 1000, 0xc0123456};
    hot.saved_modes[0] = 2;
    auto consumer = queue.queue().begin();
    check(consumer->advance() == npcs::InteractionQueueProgress::Suspended &&
              !queue.failed() && !f.runtime->failed(),
          "A healthy active queue was mistaken for terminal failure");
    consumer.reset();
    const auto before = hot;
    const auto rng = f.random;
    const auto pose = f.actors.actor(leader).action().position;
    const auto queue_snapshot = queued;
    check(queue.failed() && walking.failed() && doors.failed() &&
              f.runtime->failed(),
          "Abandoned queue failure did not propagate through the real world "
          "owners");
    rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
            "Abandoned queue admitted another world frame");
    rejects([&] { walking.begin(); }, "Abandoned queue admitted walking");
    rejects([&] { doors.begin({0, 0}); },
            "Abandoned queue admitted a door lookup");
    rejects([&] { hotspots.evaluate_tick(); },
            "Abandoned queue consumed a hotspot trigger");
    check(hot == before && f.random == rng && queued == queue_snapshot &&
              f.actors.actor(leader).action().position == pose &&
              f.actors.ticks() == 0 && f.clock.frame_counter == 0 &&
              position.leader_x == 128 && trail.next_write == 255 &&
              f.actors.appearance_scene().movement_counter == 0,
          "Failed queue changed actor, RNG, walking, clock or hotspot state "
          "before rejection");
    f.runtime.reset();
    return;
  }
  if (control_mode) {
    std::vector<dialogue::ScriptSoundRequest> sounds;
    WorldBicycle bicycle(
        data, f.actors, f.enemies, position, movement, formation,
        f.windows.prompt_state(), f.input, navigation, queue, f.collision,
        f.area, [&](const auto &sound) {
          check(position.leader_x == 128 && movement.moved_this_tick == 0 &&
                    f.actors.appearance_scene().movement_counter == 0,
                "Bicycle bell did not precede motion and its counter");
          sounds.push_back(sound);
        });
    WorldAutomatic automatic(data, f.actors, f.enemies, position, movement,
                             transition_state, formation, trail, maintenance,
                             f.input, queue);
    WorldControlCommands commands(automatic);
    rejects([&] { f.runtime->bind_world_control_commands(commands); },
            "Focus commands bound without the actual Automatic owner");
    WorldDoorTransitionState foreign_transition;
    WorldAutomatic foreign_auto(data, f.actors, f.enemies, position, movement,
                                foreign_transition, formation, trail,
                                maintenance, f.input, queue);
    rejects([&] { f.runtime->bind_automatic(foreign_auto); },
            "Automatic movement adopted another transition-state owner");
    dialogue::PromptState foreign_prompt;
    WorldBicycle foreign_bike(data, f.actors, f.enemies, position, movement,
                              formation, foreign_prompt, f.input, navigation,
                              queue, f.collision, f.area, {});
    rejects([&] { f.runtime->bind_bicycle(foreign_bike); },
            "Bicycle adopted another prompt/battle-state owner");
    f.runtime->bind_bicycle(bicycle);
    f.runtime->bind_automatic(automatic);
    f.runtime->bind_world_control_commands(commands);
    WorldControlCommands foreign_commands(foreign_auto);
    rejects([&] { f.runtime->bind_world_control_commands(foreign_commands); },
            "Dialogue focus adopted another Automatic controller");
    rejects([&] { f.runtime->bind_bicycle(bicycle); },
            "Duplicate bicycle owner accepted");
    rejects([&] { f.runtime->bind_automatic(automatic); },
            "Duplicate Automatic owner accepted");
    const auto command = [&](std::vector<std::uint8_t> bytes) {
      dialogue::Conversation text(program(version, std::move(bytes)),
                                  f.windows);
      text.start(dialogue::EntryId{0});
      auto dialogue = f.runtime->begin(text);
      finish(*dialogue);
    };
    if (control_mode == 1) {
      position.walking_style = 3;
      f.input.pressed[0] = 0x10;
      auto expected =
          (std::uint32_t(position.leader_x) << 16) | movement.x_fraction;
      const auto before_frames = f.runtime->completed_frames();
      const auto before_ticks = f.actors.ticks();
      const auto before_count = f.actors.appearance_scene().movement_counter;
      const auto before_head = trail.next_write;
      for (unsigned step = 0; step < 3; ++step) {
        auto tick = f.runtime->begin(story::TickKind::WorldFrame);
        frame(*tick);
        expected += data.raw_delta(0, 3, CollisionDirection::East);
        check(position.leader_x == expected >> 16 &&
                  movement.x_fraction == std::uint16_t(expected) &&
                  movement.moved_this_tick == 1 &&
                  trail.next_write == ((before_head + step + 1) & 255) &&
                  f.actors.appearance_scene().movement_counter ==
                      before_count + step + 1 &&
                  f.actors.scene().camera_x ==
                      std::uint16_t(position.leader_x - 128),
              "Real Bicycle/coasting/trail/camera path did not execute once");
        check(sounds.size() == 1 &&
                  sounds[0] ==
                      dialogue::ScriptSoundRequest{
                          dialogue::ScriptSoundKind::QueueEffect, 23, 23},
              "Bicycle bell intent was lost or replayed during coasting");
        rejects([&] { tick->respond_maintenance(); },
                "Bicycle allowed an external movement ACK");
        tick->complete_frame({0, 0});
        finish(*tick);
      }
      check(f.runtime->completed_frames() == before_frames + 3 &&
                f.actors.ticks() == before_ticks + 3,
            "Bicycle movement changed actor/publication cadence");
    } else if (control_mode == 2) {
      // The followed non-party actor advances through the real actor pass,
      // after the callback traversal, matching the source physics phase.
      // EVENT1 copies its live pre-physics pose selected by dialogue.
      const auto focus = *focus_actor;
      const auto focus_role = *f.actors.actor(focus).authored_role();
      const CameraTarget target{AuthoredRoleRef(focus_role)};
      command({0x1f, 0xee, 0x41, 1, 0x02});
      check(movement.automatic_mode == 2 && movement.camera_focus == target &&
                f.actors.ticks() == 0,
            "Dialogue focus did not use the actual actor or consumed a frame");
      const auto before_head = trail.next_write;
      const auto before = f.actors.actor(focus).action().position[0];
      for (unsigned step = 0; step < 3; ++step) {
        const auto expected = f.actors.actor(focus).action().position;
        auto tick = f.runtime->begin(story::TickKind::WorldFrame);
        frame(*tick);
        const auto pose = f.actors.actor(focus).action().position;
        check(pose[0] > before && pose[0] == expected[0] + 65536 &&
                  position.leader_x == expected[0] >> 16 &&
                  movement.x_fraction == std::uint16_t(expected[0]) &&
                  position.leader_y == expected[1] >> 16 &&
                  movement.y_fraction == std::uint16_t(expected[1]) &&
                  f.actors.scene().camera_x ==
                      std::uint16_t(position.leader_x - 128) &&
                  trail.next_write == ((before_head + step + 1) & 255),
              "Automatic camera lost the real moving focus, fractional "
              "position or trail");
        tick->complete_frame({0, 0});
        finish(*tick);
      }
      // Keep the actual dialogue-selected role through retirement, a vacant
      // role write and real streamed NPC replacement. No replacement focus command
      // or display-sampling frame drives this lifecycle.
      const auto retained = f.actors.authored_pose(focus_role);
      check(f.actors.retire(focus), "Focused actor failed to retire");
      for (unsigned phase = 0; phase < 3; ++phase) {
        if (phase == 1) {
          f.actors.set_authored_coordinate(focus_role, 0, 142);
          f.actors.set_authored_direction(focus_role, 6);
        } else if (phase == 2) {
          const auto replacement = f.actors.actor_for_role(focus_role);
          check(replacement && *replacement != focus &&
                    f.actors.actor(*replacement).npc().has_value() &&
                    f.runtime->streaming_work().npc_creations > 0,
                "Camera traversal did not reuse its retired role through real NPC activation");
        }
        const auto expected = f.actors.authored_pose(focus_role);
        auto tick = f.runtime->begin(story::TickKind::WorldFrame);
        frame(*tick);
        check(movement.camera_focus == target &&
                  position.leader_x == expected.position[0] >> 16 &&
                  position.leader_y == expected.position[1] >> 16 &&
                  movement.x_fraction == std::uint16_t(expected.position[0]) &&
                  movement.y_fraction == std::uint16_t(expected.position[1]) &&
                  position.leader_direction == expected.direction,
              "Runtime lost camera role across retirement, vacant write or reuse");
        if (!phase) check(f.actors.authored_pose(focus_role) == retained,
                          "Vacant role moved or lost retained facing during frame");
        tick->complete_frame({0, 0});
        finish(*tick);
      }
      const auto replacement = *f.actors.actor_for_role(focus_role);
      const auto replacement_npc = *f.actors.actor(replacement).npc();
      const auto frames_before_reselect = f.runtime->completed_frames();
      const auto ticks_before_reselect = f.actors.ticks();
      command({0x1f, 0xee, std::uint8_t(replacement_npc),
               std::uint8_t(replacement_npc >> 8), 0x02});
      check(movement.camera_focus == target &&
                f.actors.actor_for_npc(replacement_npc) == replacement &&
                f.actors.ticks() == ticks_before_reselect,
            "Real NPC focus command lost replacement identity or ticked actors");
      for (unsigned phase = 0; phase < 2; ++phase) {
        const auto expected = f.actors.authored_pose(focus_role);
        if (phase) {
          check(f.actors.erase(replacement) &&
                    !f.actors.actor_for_npc(replacement_npc) &&
                    f.actors.authored_npc_selector(focus_role) == 0xffff,
                "Actual replacement release retained its live NPC identity");
        }
        const auto head = trail.next_write;
        const bool expected_moved =
            expected.position[0] !=
                ((std::uint32_t(position.leader_x) << 16) | movement.x_fraction) ||
            expected.position[1] !=
                ((std::uint32_t(position.leader_y) << 16) | movement.y_fraction);
        const auto frame_clock = f.clock.frame_counter;
        auto tick = f.runtime->begin(story::TickKind::WorldFrame);
        frame(*tick);
        check(movement.camera_focus == target &&
                  position.leader_x == expected.position[0] >> 16 &&
                  position.leader_y == expected.position[1] >> 16 &&
                  movement.x_fraction == std::uint16_t(expected.position[0]) &&
                  movement.y_fraction == std::uint16_t(expected.position[1]) &&
                  position.leader_direction == expected.direction &&
                  movement.moved_this_tick == expected_moved &&
                  trail.next_write == ((head + unsigned(expected_moved)) & 255),
              "Reselected or released NPC focus lost its pre-physics role pose");
        tick->complete_frame({0x80, 0});
        finish(*tick);
        check(f.actors.ticks() == ticks_before_reselect + phase + 1 &&
                  f.runtime->completed_frames() ==
                      frames_before_reselect + phase + 1 &&
                  f.clock.frame_counter == std::uint16_t(frame_clock + 1) &&
                  playback.state().raw[0] == 0x80 &&
                  f.input.state[0] == 0x80,
              "Replacement focus/release repeated actor, input or frame work");
      }
      const auto consumed = f.actors.ticks();
      command({0x1f, 0xed, 0x02});
      check(movement.automatic_mode == 0 && movement.moved_this_tick == 0 &&
                movement.camera_focus == target && f.actors.ticks() == consumed,
            "Dialogue stop cleared focus identity or consumed an actor tick");
    } else if (control_mode == 3) {
      movement.automatic_mode = 3;
      movement.direction_interval_previous_mode = 2;
      movement.direction_interval_ticks = 1;
      const auto head = trail.next_write;
      auto tick = f.runtime->begin(story::TickKind::WorldFrame);
      check(next(*tick) == dialogue::Progress::Suspended &&
                tick->automatic_request() ==
                    WorldAutomaticService::BattleEntry &&
                movement.automatic_mode == 2 &&
                movement.direction_interval_ticks == 0,
            "Direction interval did not retain the actual pending battle "
            "boundary");
      rejects([&] { tick->respond_maintenance(); },
              "Pending battle entry accepted movement ACK");
      rejects([&] { tick->respond_actor(); },
              "Pending battle entry accepted actor ACK");
      rejects([&] { tick->respond_script_sound(); },
              "Pending battle entry accepted sound ACK");
      for (unsigned retry = 0; retry < 5; ++retry)
        check(next(*tick) == dialogue::Progress::Suspended &&
                  trail.next_write == head &&
                  movement.direction_interval_ticks == 0 &&
                  f.runtime->completed_frames() == 0 && f.actors.ticks() == 0,
              "Pending battle entry consumed movement, countdown or a frame on "
              "retry");
      tick.reset();
      check(f.runtime->failed() && automatic.failed(),
            "Abandoned Automatic battle did not invalidate Runtime");
    } else if (control_mode >= 5 && control_mode <= 8) {
      f.party.party_count = 1;
      f.actors.actor(leader).action().position = {128u << 16, 176u << 16, 0};
      EnemySpawnState spawn;
      spawn.event_flags = f.text.event_flags;
      f.enemies.begin_cell(f.actors, 4, 5, 1, 1, 1, spawn);
      while (f.enemies.busy()) {
        if (std::holds_alternative<EnemyRandomRequest>(*f.enemies.request()))
          f.enemies.respond_random(f.actors, 0);
        else
          f.enemies.respond_terrain(f.actors, 0);
      }
      check(f.enemies.actors().size() == 1,
            "Runtime entry fixture failed to create its actual enemy");
      const auto touched = f.enemies.actors().front().actor;
      auto &enemy = f.actors.actor(touched);
      enemy.action().position = {144u << 16, 176u << 16, 0};
      enemy.behavior.moving_direction = 8;
      const auto touched_type = f.enemies.enemy_type(touched);
      check(touched_type.has_value(), "Actual enemy lacked its imported type");
      WorldEncounterState encounter_state;
      encounter_state.touched = touched;
      encounter_state.pathfinding_target = AuthoredRoleRef(24);
      encounter_state.roster = {999};
      WorldSwirlData swirl_data;
      swirl_data.definitions[1] = {2, 3, 4};
      WorldSwirlState swirl;
      WorldEncounterVisualState visual;
      ScenePalette palette{};
      PaletteColor backdrop{1, 2, 3};
      unsigned music_calls = 0;
      WorldEncounter encounter(
          swirl_data, encounter_state, swirl, palette, backdrop, visual,
          [&](const WorldEncounterMusicChange &music) {
            ++music_calls;
            check(maintenance.enemy_touched == 0 &&
                      f.actors.appearance_scene().battle_swirl_ticks == 120 &&
                      encounter_state.roster == std::vector<std::uint16_t>{999} &&
                      !swirl.update_in && palette[0] == PaletteColor{} &&
                      music.track == 176,
                  "Entry music boundary lost authored mutation order");
            if (control_mode == 6)
              throw std::runtime_error("Fixture music adapter failed");
          });
      WorldPathfinding paths(f.actors, f.collision, f.area, formation, f.party);
      WorldBattleEntry entry(generated_data, f.actors, f.enemies, position,
                             formation, f.party, maintenance, encounter_state,
                             encounter, paths);
      WorldPathfinding wrong_paths(f.actors, f.collision, f.area, formation,
                                    wrong_party);
      WorldBattleEntry wrong_entry(generated_data, f.actors, f.enemies,
                                   position, formation, wrong_party,
                                   maintenance, encounter_state, encounter,
                                   wrong_paths);
      rejects([&] { f.runtime->bind_battle_entry(wrong_entry); },
              "Runtime accepted a different entry party owner");
      WorldBattleEntry wrong_gate(generated_data, f.actors, f.enemies,
                                  position, formation, f.party,
                                  other_maintenance, encounter_state,
                                  encounter, paths);
      rejects([&] { f.runtime->bind_battle_entry(wrong_gate); },
              "Runtime accepted a different entry maintenance owner");
      f.runtime->bind_battle_entry(entry);
      rejects([&] { f.runtime->bind_battle_entry(entry); },
              "Runtime accepted duplicate entry binding");
      if (control_mode >= 7) {
        EnemyMovementData motion_data(content, version);
        WorldEnemyMovement motion(motion_data, generated_data, f.actors, paths,
                                   f.collision);
        WorldEnemyMovement foreign_motion(motion_data, generated_data, f.actors,
                                           wrong_paths, f.collision);
        rejects([&] { f.runtime->bind_enemy_movement(foreign_motion); },
                "Runtime accepted enemy movement using another party");
        WorldPathfinding alternate_paths(f.actors, f.collision, f.area,
                                         formation, f.party);
        WorldEnemyMovement alternate_motion(motion_data, generated_data,
                                              f.actors, alternate_paths,
                                              f.collision);
        rejects([&] { f.runtime->bind_enemy_movement(alternate_motion); },
                "Runtime movement used another route owner than encounter entry");
        f.runtime->bind_enemy_movement(motion);
        rejects([&] { f.runtime->bind_enemy_movement(motion); },
                "Runtime accepted duplicate enemy movement");
        ScenePalette contact_backup{};
        unsigned sound_calls{};
        WorldEnemyContact contact(
            f.actors, f.enemies, position, movement, f.windows.prompt_state(),
            navigation, maintenance, paths, encounter_state, encounter,
            automatic, palette, contact_backup, f.collision, f.area,
            [&](const dialogue::ScriptSoundRequest &sound) {
              ++sound_calls;
              check(sound.kind == dialogue::ScriptSoundKind::DirectDriverCommand &&
                        sound.value == 2 && sound.source_value == 2 &&
                        encounter_state.touched == touched &&
                        maintenance.enemy_touched == 1 &&
                        movement.automatic_mode == 3 && visual.palette_dirty,
                    "Runtime contact lost its actual sound/state ordering");
              if (control_mode == 8)
                throw std::runtime_error("Fixture contact adapter failed");
            });
        f.runtime->bind_enemy_contact(contact);
        rejects([&] { f.runtime->bind_enemy_contact(contact); },
                "Runtime accepted duplicate enemy contact");
        f.input = {};
        // The synthetic shape's surface anchor lies two pixels above each
        // eight-pixel grid boundary. Use a truly cardinal authored route.
        position.leader_y = 174;
        f.actors.actor(leader).action().position[1] = 174u << 16;
        f.actors.replace_script(touched, f.actions->entry(2));
        enemy.behavior.path_state = 0xffff;
        enemy.behavior.tick = ActorTickCallback::EnemyPath;
        enemy.behavior.movement_speed = 256;
        enemy.behavior.physics = ActorPhysics::Planar;
        enemy.action().position = {152u << 16, 174u << 16, 0};
        check(paths.find_to_party() == 1, "Runtime movement did not install an actual route");
        for (unsigned step = 0; step < 4; ++step) {
          const auto before = enemy.action().position;
          const auto ticks = f.actors.ticks(), frames = f.runtime->completed_frames();
          auto walking_frame = f.runtime->begin(story::TickKind::WorldFrame);
          frame(*walking_frame);
          if (enemy.action().velocity[0] != 0xffff00ffu ||
              enemy.action().position[0] != before[0] + 0xffff00ffu ||
              enemy.action().position[1] != before[1])
            std::cerr << "Enemy frame " << step << " position " << before[0]
                      << ',' << before[1] << " -> " << enemy.action().position[0]
                      << ',' << enemy.action().position[1] << " velocity "
                      << enemy.action().velocity[0] << ',' << enemy.action().velocity[1]
                      << " path " << enemy.behavior.path_state << " left "
                      << paths.remaining(touched) << '\n';
          check(enemy.action().velocity[0] == 0xffff00ffu &&
                    enemy.action().position[0] == before[0] + 0xffff00ffu &&
                    enemy.action().position[1] == before[1] &&
                    f.actors.ticks() == ticks + 1 &&
                    f.runtime->completed_frames() == frames,
                "Bound enemy tick skipped or doubled normal physics/frame time");
          walking_frame->complete_frame({0, 0});
          finish(*walking_frame);
        }
        enemy.behavior.tick = ActorTickCallback::None;
        enemy.action().velocity = {};
        f.actors.replace_script(touched, f.actions->entry(6));
        const auto count = paths.remaining(touched);
        auto waypoint = f.runtime->begin(story::TickKind::WorldFrame);
        frame(*waypoint);
        check(paths.remaining(touched) == count - 1 &&
                  enemy.tasks().front().temporary == 1,
              "Runtime waypoint request did not consume its real path/result");
        waypoint->complete_frame({0, 0});
        finish(*waypoint);
        waypoint.reset();
        encounter_state.touched.reset();
        encounter_state.pathfinding_target.reset();
        enemy.behavior.moving_direction = 8;
        position.collision_actor = touched;
        enemy.behavior.collision_object = 24;
        f.actors.replace_script(touched, f.actions->entry(5));
        const auto ticks = f.actors.ticks(), frames = f.runtime->completed_frames();
        auto collision_frame = f.runtime->begin(story::TickKind::WorldFrame);
        if (control_mode == 8) {
          rejects([&] { next(*collision_frame); }, "Contact adapter failure was swallowed");
          check(contact.failed() && f.runtime->failed() && sound_calls == 1 &&
                    f.actors.ticks() == ticks && f.runtime->completed_frames() == frames,
                "Failed contact advanced game time or left healthy owners");
          rejects([&] { next(*collision_frame); }, "Failed contact was replayed");
          check(sound_calls == 1, "Failed contact repeated the existing sound command");
        } else {
          frame(*collision_frame);
          if (sound_calls != 1 || maintenance.enemy_touched != 1 ||
              enemy.scripts_and_physics_enabled || music_calls != 0)
            std::cerr << "Contact frame sound " << sound_calls << " touched "
                      << maintenance.enemy_touched << " paused "
                      << !enemy.scripts_and_physics_enabled << " music "
                      << music_calls << " interval " << movement.direction_interval_ticks
                      << " mode " << movement.automatic_mode << '\n';
          check(sound_calls == 1 && maintenance.enemy_touched == 1 &&
                    encounter_state.touched == touched &&
                    encounter_state.pathfinding_target == CameraTarget{AuthoredRoleRef(24)} &&
                    !enemy.scripts_and_physics_enabled && music_calls == 0,
                "Real script contact did not suspend actors and install encounter state");
          collision_frame->complete_frame({0, 0});
          finish(*collision_frame);
          collision_frame.reset();
          for (unsigned step = 0; step < 12; ++step) {
            auto countdown = f.runtime->begin(story::TickKind::WorldFrame);
            frame(*countdown);
            countdown->complete_frame({0, 0});
            finish(*countdown);
          }
          check(music_calls == 1 && sound_calls == 1 && !maintenance.enemy_touched &&
                    encounter_state.roster == std::vector<std::uint16_t>{std::uint16_t(*touched_type)} &&
                    swirl.update_in == 1 && f.actors.ticks() == ticks + 13 &&
                    f.runtime->completed_frames() == frames + 13,
                "Contact/countdown/entry did not traverse actual world frames once");
        }
        collision_frame.reset();
        f.runtime.reset();
        return;
      }
      maintenance.enemy_touched = 17;
      movement.automatic_mode = 3;
      movement.direction_interval_previous_mode = 0;
      movement.direction_interval_ticks = 1;
      const auto before_ticks = f.actors.ticks();
      const auto before_frames = f.runtime->completed_frames();
      const auto before_random = f.random;
      auto tick = f.runtime->begin(story::TickKind::WorldFrame);
      if (control_mode == 6) {
        rejects([&] { next(*tick); }, "Entry adapter failure was swallowed");
        check(entry.failed() && automatic.failed() && f.runtime->failed() &&
                  music_calls == 1 && f.actors.ticks() == before_ticks &&
                  f.runtime->completed_frames() == before_frames,
              "Failed entry published a frame or left its owners healthy");
        rejects([&] { next(*tick); }, "Failed entry resumed its partial work");
        check(music_calls == 1, "Failed entry repeated its audio intent");
      } else {
        frame(*tick);
        check(!tick->automatic_request() && music_calls == 1 &&
                  encounter_state.roster ==
                      std::vector<std::uint16_t>{std::uint16_t(*touched_type)} &&
                  encounter_state.initiative == WorldBattleInitiative::PartyFirst &&
                  paths.path(touched) && swirl.update_in == 1 &&
                  palette[0] == backdrop &&
                  movement.direction_interval_ticks == 0 &&
                  movement.automatic_mode == 0 && f.random == before_random &&
                  f.actors.ticks() == before_ticks + 1 &&
                  f.runtime->completed_frames() == before_frames,
              "Runtime failed to consume real entry/path/swirl exactly once");
        rejects([&] { tick->respond_maintenance(); },
                "Consumed entry accepted an external maintenance response");
        tick->complete_frame({0x80, 0});
        finish(*tick);
        check(f.runtime->completed_frames() == before_frames + 1 &&
                  f.input.state[0] == 0x80 && music_calls == 1,
              "Entry changed publication/input cadence or repeated music");
      }
      tick.reset();
      f.runtime.reset();
      return;
    } else {
      command({0x1f, 0xee, 0xff, 0x7f, 0x02});
      check(movement.automatic_mode == 2 && !movement.camera_focus,
            "Missing focus producer invented an actor identity");
      auto tick = f.runtime->begin(story::TickKind::WorldFrame);
      rejects([&] { next(*tick); }, "Missing focus invented camera motion");
      check(f.runtime->failed() && automatic.failed() &&
                f.runtime->completed_frames() == 0,
            "Missing focus failure was hidden or published a frame");
      tick.reset();
    }
    f.runtime.reset();
    return;
  }
  if (native_transition == 5)
    for (unsigned slot = 0; slot < 4; ++slot)
      check(scheduler.schedule(100, WorldScheduledCallback::EscalatorEnter) ==
                slot,
            "Transition capacity fixture did not fill source slots");
  auto operation = f.runtime->begin(story::TickKind::WorldFrame);
  if (native_transition == 5) {
    rejects([&] { next(*operation); },
            "Full scheduler fabricated a successful door transition");
    check(f.runtime->failed() && walking.failed() && transitions.failed() &&
              f.runtime->completed_frames() == 0 &&
              f.clock.frame_counter == 255 && !playback.active(),
          "Unpublishable transition was allowed to resume or consume a frame");
    const auto tasks = scheduler.tasks();
    rejects([&] { operation->advance(); }, "Failed door producer was replayed");
    check(scheduler.tasks() == tasks,
          "Failed producer changed scheduled tasks on retry");
    operation.reset();
    f.runtime.reset();
    return;
  }
  if (native_transition) {
    frame(*operation);
    const unsigned expected_trail = native_transition == 2 ? 0 : 255;
    check(!operation->door_request() && !walking.busy() && playback.active() &&
              position.demo_frames && scheduler.tasks()[0].frames_left &&
              trail.next_write == expected_trail && f.actors.ticks() == 1 &&
              f.clock.frame_counter == 255 &&
              f.runtime->completed_frames() == 0,
          "Bound transition did not install once and return through actual "
          "walking/trail/camera");
    const auto sequence = playback.sequence();
    const auto scheduled = scheduler.tasks();
    const auto countdown = position.demo_frames;
    const auto random = f.random;
    for (unsigned sample = 0; sample < 12; ++sample) {
      check(operation->advance(1) == dialogue::Progress::Suspended &&
                playback.sequence() == sequence &&
                scheduler.tasks() == scheduled &&
                position.demo_frames == countdown && phone.timer == 7 &&
                f.random == random && f.actors.ticks() == 1 &&
                trail.next_write == expected_trail,
            "Pending frame work replayed transition, scheduler, input or "
            "movement");
    }
    if (native_transition == 3) {
      const auto input = f.input;
      rejects([&] { operation->complete_frame({0x80, 0x40}); },
              "Active recording bypassed its missing real service");
      check(f.clock.frame_counter == 255 &&
                f.runtime->completed_frames() == 0 &&
                position.demo_frames == countdown &&
                scheduler.tasks() == scheduled && f.input == input &&
                phone.timer == 7 && !f.runtime->failed(),
            "Frame preflight rejection consumed scheduler/input/publication");
      playback.clear_flags();
      playback.install(sequence);
    }
    operation->complete_frame({0x80, 0x40});
    finish(*operation);
    check(f.clock.frame_counter == 0 && f.runtime->completed_frames() == 1 &&
              phone.timer == 6 && scheduler.tasks() == scheduled &&
              playback.sequence() == sequence && f.actors.ticks() == 1 &&
              trail.next_write == expected_trail,
          "Real frame failed counter/phone-before-window-gate order or "
          "repeated world work");
    check(position.demo_frames == std::uint16_t(countdown - 1) ||
              countdown == 1,
          "Real frame did not consume one playback input phase");
    const auto published = f.runtime->frame();
    const auto after_input = f.input;
    const auto after_count = position.demo_frames;
    for (unsigned sample = 0; sample < 40; ++sample)
      check(f.runtime->frame() == published &&
                position.demo_frames == after_count &&
                scheduler.tasks() == scheduled && f.input == after_input &&
                phone.timer == 6,
            "High-rate draw sampling advanced native gameplay input/tasks");
    rejects([&] { operation->complete_frame({0, 0}); },
            "Completed frame was consumed twice");
    check(f.clock.frame_counter == 0 && phone.timer == 6 &&
              !f.runtime->failed(),
          "Rejected duplicate frame altered scheduler or owner health");
    // Execute the actual source callback at a later frame after closing its
    // real window gate. No actor tick is needed to advance a frame-only wait.
    auto close = f.windows.begin(
        {dialogue::WindowAction::Close, dialogue::WindowId{0}, {}, 0});
    for (unsigned step = 0; step < 16; ++step) {
      const auto result = close->advance();
      if (result == dialogue::OutputProgress::Complete)
        break;
      check(result == dialogue::OutputProgress::Suspended,
            "Window close failed");
      close->respond();
    }
    check(f.windows.draw_order().empty(),
          "Transition fixture retained window gate");
    if (native_transition == 2)
      position.leader_y = std::uint16_t(transition_state.stairs_target.y + 2);
    const auto target = native_transition == 2
                            ? transition_state.stairs_target
                            : transition_state.escalator_target;
    for (unsigned step = 0; scheduler.tasks()[0].frames_left; ++step) {
      check(step < 512,
            "Scheduled transition did not finish through real frame waits");
      auto wait = f.runtime->begin(story::TickKind::Frame);
      frame(*wait);
      wait->complete_frame({0x80, 0x40});
      finish(*wait);
    }
    check(position.leader_x == target.x && position.leader_y == target.y &&
              movement.x_fraction == 0 && movement.y_fraction == 0 &&
              position.walking_style == (native_transition == 2 ? 13 : 12) &&
              f.actors.ticks() == 1 && trail.next_write == expected_trail,
          "Actual scheduled callback did not snap shared leader without "
          "another actor pass");
    if (native_transition == 1) {
      for (unsigned step = 0; step < 3; ++step) {
        const auto x =
            std::uint32_t(position.leader_x) << 16 | movement.x_fraction;
        const auto y =
            std::uint32_t(position.leader_y) << 16 | movement.y_fraction;
        const auto direction = std::array{CollisionDirection::NorthWest,
                                          CollisionDirection::NorthEast,
                                          CollisionDirection::SouthWest,
                                          CollisionDirection::SouthEast}
            [(transition_state.escalator_entrance & 0x300) >> 8];
        const auto expected_x = x + data.raw_delta(0, 12, direction);
        const auto expected_y = y + data.raw_delta(1, 12, direction);
        const auto previous_trail = trail.next_write;
        const auto previous_ticks = f.actors.ticks();
        auto ride = f.runtime->begin(story::TickKind::WorldFrame);
        bool mode = false;
        for (unsigned work = 0; work < 10000; ++work) {
          const auto progress = ride->advance(1);
          if (ride->maintenance_request() &&
              ride->maintenance_request()->control &&
              ride->maintenance_request()->control->kind ==
                  WorldControlService::Escalator) {
            mode = true;
            rejects([&] { ride->respond_maintenance(); },
                    "External response bypassed actual escalator reducer");
          }
          if (progress != dialogue::Progress::BudgetExhausted) {
            check(progress == dialogue::Progress::Suspended &&
                      ride->service() == story::SceneService::Frame,
                  "Native escalator ride left an unfulfilled movement service");
            break;
          }
          check(work + 1 < 10000,
                "Native escalator ride did not reach frame boundary");
        }
        check(
            mode && position.leader_x == std::uint16_t(expected_x >> 16) &&
                movement.x_fraction == std::uint16_t(expected_x) &&
                position.leader_y == std::uint16_t(expected_y >> 16) &&
                movement.y_fraction == std::uint16_t(expected_y) &&
                trail.next_write == ((previous_trail + 1) & 255) &&
                f.actors.ticks() == previous_ticks + 1 && !escalator.busy(),
            "Actual escalator/trail/camera work did not complete exactly once");
        ride->complete_frame({0, 0});
        finish(*ride);
      }
    }
    if (native_transition == 4) {
      scheduler.clear_callbacks(transitions);
      check(f.runtime->failed() && transitions.failed(),
            "Detached callback owner remained usable");
      const auto frames = f.runtime->completed_frames();
      const auto ticks = f.actors.ticks();
      rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
              "Detached callback owner admitted another actor pass");
      check(f.runtime->completed_frames() == frames &&
                f.actors.ticks() == ticks,
            "Detached callback owner mutated scene state before rejection");
    }
    f.runtime.reset();
    return;
  }
  if (transition) {
    check(next(*operation) == dialogue::Progress::Suspended &&
              operation->door_request() &&
              operation->door_request()->kind ==
                  WorldDoorTransitionKind::Escalator,
          "Actual walking did not expose its unfinished escalator input "
          "producer");
    const auto request = *operation->door_request();
    const auto rng = f.random;
    const auto count = f.actors.appearance_scene().movement_counter;
    for (unsigned repeat = 0; repeat < 8; ++repeat) {
      check(operation->advance(100) == dialogue::Progress::Suspended &&
                operation->door_request() == request &&
                position.leader_x == 128 &&
                f.actors.appearance_scene().movement_counter == count &&
                f.random == rng && f.clock.frame_counter == 0 &&
                trail.next_write == 255,
            "Waiting on scheduled door input replayed walking or committed "
            "movement");
      rejects([&] { operation->respond_maintenance(); },
              "Maintenance ACK skipped scheduled door input");
      rejects([&] { operation->respond_actor(); },
              "Actor ACK skipped scheduled door input");
    }
    operation.reset();
    check(
        f.runtime->failed() && walking.failed() && doors.failed(),
        "Abandoned door continuation was not terminal for its owning runtime");
    f.runtime.reset();
    return;
  }
  bool saw_walk = false, saw_refresh = false;
  for (unsigned step = 0; step < 10000; ++step) {
    const auto progress = operation->advance(1);
    if (operation->maintenance_request() &&
        operation->maintenance_request()->control) {
      const auto kind = operation->maintenance_request()->control->kind;
      if (kind == WorldControlService::Walk) {
        saw_walk = true;
        rejects([&] { operation->respond_maintenance(); },
                "External ACK bypassed bound walking reducer");
      }
      if (kind == WorldControlService::RefreshCamera)
        saw_refresh = true;
    }
    if (progress != dialogue::Progress::BudgetExhausted) {
      if (missing_follower && progress == dialogue::Progress::Suspended &&
          operation->service() == story::SceneService::ActorEngine &&
          operation->actor_request() &&
          operation->actor_request()->binding.operation ==
              NativeAction::RunPartyFollower) {
        const auto pose = f.actors.actor(leader).action().position;
        const auto variables = f.actors.actor(leader).action().variables;
        for (unsigned repeat = 0; repeat < 4; ++repeat) {
          rejects([&] { operation->respond_actor(); },
                  "Generic ACK skipped bound following");
          check(operation->advance(100) == dialogue::Progress::Suspended &&
                    f.actors.actor(leader).action().position == pose &&
                    f.actors.actor(leader).action().variables == variables &&
                    trail.next_write == 0 && f.clock.frame_counter == 0,
                "Pending follower partially committed or replayed world work");
        }
        f.party.display_order[0] = 1;
        missing_follower = false;
        continue;
      }
      if (progress != dialogue::Progress::Suspended ||
          operation->service() != story::SceneService::Frame) {
        std::cerr << "Walking runtime boundary: service="
                  << (operation->service() ? int(*operation->service()) : -1);
        if (operation->actor_request())
          std::cerr << " actor=" << operation->actor_request()->actor
                    << " operation="
                    << int(operation->actor_request()->binding.operation);
        if (operation->maintenance_request())
          std::cerr << " maintenance="
                    << int(operation->maintenance_request()->kind);
        std::cerr << '\n';
      }
      check(progress == dialogue::Progress::Suspended &&
                operation->service() == story::SceneService::Frame,
            "Walking required a fake service response before frame completion");
      break;
    }
    check(step + 1 < 10000, "Native walking/camera work did not terminate");
  }
  check(saw_walk && saw_refresh && position.leader_x == 129 &&
            position.leader_y == 176 && movement.x_fraction == 0xb456 &&
            movement.moved_this_tick == 1 && trail.next_write == 0 &&
            trail.points[255].x == 129 && trail.points[255].y == 176 &&
            f.actors.appearance_scene().movement_counter == 1 &&
            !walking.busy(),
        "Real walking, trail publication and camera refresh did not execute "
        "once");
  check(f.actors.actor(leader).action().position[0] == (129u << 16 | 0x8000) &&
            f.actors.actor(leader).action().position[1] ==
                (176u << 16 | 0x8000) &&
            formation.trail_cursors[0] == 0,
        "Actual following callback did not consume the just-published walking "
        "trail");
  check(f.clock.frame_counter == 0 && f.actors.ticks() == 1,
        "Walking work budgets advanced extra logic/input ticks");
  operation->complete_frame({0x100, 0});
  finish(*operation);
  check(f.clock.frame_counter == 1 && f.runtime->completed_frames() == 1 &&
            f.runtime->frame() && !f.runtime->failed(),
        "Native walking did not publish an actual completed world frame");
  if (external_door) {
    auto external = doors.begin({0, 0});
    const auto ticks = f.actors.ticks();
    rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
            "Runtime began with independently pending door work");
    rejects([&] { walking.begin(); },
            "Walking began with independently pending door work");
    check(!f.runtime->failed() && f.actors.ticks() == ticks,
          "Pending door was mistaken for failure or began another actor tick");
    external.reset();
    check(f.runtime->failed() && walking.failed(),
          "Runtime did not report borrowed door failure before another tick");
    rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
            "Runtime began after external door abandonment");
    check(f.actors.ticks() == ticks && f.clock.frame_counter == 1,
          "Failed door advanced scene state before rejection");
    f.runtime.reset();
    return;
  }
  auto external = walking.begin();
  rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
          "Runtime began while bound walking had independent unfinished work");
  check(!f.runtime->failed(), "Busy walking was mistaken for failure");
  external.reset();
  check(f.runtime->failed(), "Runtime ignored abandoned borrowed walking");
  f.runtime.reset();
}
void world_control_scene_boundaries(eb::GameVersion version) {
  for (bool bound : {false, true}) {
    Fixture f(version), foreign(version);
    story::Scene scene(f.windows, f.party, f.random, f.meters, f.clock, f.input,
                       f.actors, f.area, f.palettes);
    struct Service : WorldControlCommandService {
      const ActorWorld &actors;
      unsigned calls{};
      explicit Service(const ActorWorld &a) : actors(a) {}
      bool uses(const ActorWorld &a) const noexcept override {
        return &a == &actors;
      }
      void apply(const WorldControlCommand &command) override {
        ++calls;
        check(command ==
                  WorldControlCommand{WorldControlCommandKind::FocusNpc, 321},
              "Scene changed the parsed camera command");
        throw std::runtime_error(
            "Control service failed after consuming its command");
      }
    } service(f.actors), another(f.actors), wrong(foreign.actors);
    rejects([&] { scene.bind_world_control(wrong); },
            "Scene admitted foreign control actors");
    if (bound) {
      scene.bind_world_control(service);
      scene.bind_world_control(service);
      rejects([&] { scene.bind_world_control(another); },
              "Scene rebound control services");
    }
    dialogue::Conversation text(program(version, {0x1f, 0xee, 0x41, 1, 0x02}),
                                f.windows);
    text.start(dialogue::EntryId{0});
    auto operation = scene.begin(text);
    if (bound) {
      rejects([&] { operation->advance(); },
              "Failing control service reported completion");
      rejects([&] { operation->advance(); },
              "Scene retried a consumed failing control command");
      check(service.calls == 1, "Scene replayed failing control service");
    } else {
      check(operation->advance() == dialogue::Progress::Suspended &&
                operation->service() == story::SceneService::Dialogue,
            "Unbound world command was silently skipped");
      rejects([&] { operation->respond_dialogue({}); },
              "Unbound control command accepted fake ACK");
      check(operation->advance() == dialogue::Progress::Suspended &&
                service.calls == 0,
            "Unbound command advanced without its real service");
    }
    check(scene.completed_frames() == 0 && f.actors.ticks() == 0,
          "Rejected control command consumed an actor/frame phase");
  }
}
// A post-publication callback can fail after consuming a frame. The scene
// must retain that publication and reject retries without re-running input.
void frame_boundary_failure(eb::GameVersion version) {
  Fixture f(version);
  story::Scene scene(f.windows, f.party, f.random, f.meters, f.clock, f.input,
                     f.actors, f.area, f.palettes);
  struct Boundary : story::FrameBoundaryService {
    story::Scene &scene;
    story::TickState &clock;
    story::InputState &input;
    story::InputState initial;
    bool reject_before = true;
    unsigned calls{};
    Boundary(story::Scene &s, story::TickState &c, story::InputState &i)
        : scene(s), clock(c), input(i), initial(i) {}
    void validate_frame() const override {
      if (reject_before)
        throw std::logic_error("Pending frame prerequisite");
    }
    std::array<std::uint16_t, 2>
    read_after_publication(std::array<std::uint16_t, 2>) override {
      ++calls;
      check(scene.completed_frames() == 1 && scene.frame() &&
                clock.frame_counter == 0 && input == initial,
            "Scheduled phase did not follow publication and precede input");
      throw std::runtime_error("Frame callback failed after publication");
    }
  } boundary(scene, f.clock, f.input);
  f.clock.frame_counter = 255;
  auto operation = scene.begin(story::TickKind::Frame);
  for (unsigned work = 0;
       operation->advance(1) == dialogue::Progress::BudgetExhausted; ++work)
    check(work < 100, "Scene failed to reach frame service");
  check(operation->service() == story::SceneService::Frame,
        "Scene did not wait for a real frame");
  rejects([&] { operation->complete_frame({0x100, 0}, boundary); },
          "Frame validation did not reject");
  check(scene.completed_frames() == 0 && f.clock.frame_counter == 255 &&
            boundary.calls == 0,
        "Frame validation consumed publication or callback");
  boundary.reject_before = false;
  rejects([&] { operation->complete_frame({0x100, 0}, boundary); },
          "Failing callback returned success");
  check(scene.completed_frames() == 1 && boundary.calls == 1 &&
            f.clock.frame_counter == 0 && f.input == boundary.initial,
        "Failing post-publication callback lost frame or consumed input");
  rejects([&] { operation->complete_frame({0x100, 0}, boundary); },
          "Poisoned scene replayed a published frame");
  rejects([&] { operation->advance(); }, "Poisoned scene resumed its tick");
  check(scene.completed_frames() == 1 && boundary.calls == 1 &&
            f.actors.ticks() == 0,
        "Frame callback failure replayed an actor/display phase");
}
void maintenance_controller_lifetime(eb::GameVersion version) {
  Fixture f(version);
  WorldPartyState formation;
  PartyTrail trail;
  npcs::InteractionState position;
  WorldControlState control_state;
  WorldControl control(f.actors, formation, trail, position, control_state,
                       f.windows.prompt_state(), f.input, f.clock, f.collision,
                       f.area);
  WorldMaintenanceState state;
  party::ItemTransformationState items;
  npcs::InteractionQueueState queue_state;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue(version, queue_state,
                              f.actors.appearance_scene().intangibility_ticks,
                              phone);
  f.start();
  f.runtime->bind_maintenance(control, state, items, queue);
  auto outside = control.begin();
  rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
          "Runtime began a scene while its controller had external unfinished "
          "work");
  check(!f.runtime->failed(),
        "Busy controller was mistaken for terminal failure");
  outside.reset();
  check(f.runtime->failed(),
        "Runtime did not report its controller's terminal failure");
  rejects([&] { f.runtime->begin(story::TickKind::WorldFrame); },
          "Runtime began a scene after its controller was abandoned");
  rejects([&] { f.runtime->frame(); },
          "Failed control owner allowed new publication");
  check(f.actors.ticks() == 0 && f.clock.frame_counter == 0 &&
            f.runtime->completed_frames() == 0,
        "Failed control advanced earlier actors/input before rejection");
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
      main_frame_publication(version);
      camera_streaming(version, false);
      camera_streaming(version, true);
      initial_and_dirty_capture(version);
      nested_dialogue_and_explicit_services(version);
      rejection(version);
      lifecycle(version);
      budget_and_failure(version);
      explicit_animation(version);
      party_blink(version);
      maintenance_interaction_identity(version, false);
      maintenance_interaction_identity(version, true);
      nested_maintenance_services(version);
      maintenance_controller_lifetime(version);
      frame_boundary_failure(version);
      world_control_scene_boundaries(version);
      native_walking(version, false);
      for (unsigned mode = 1; mode <= 8; ++mode)
        native_walking(version, false, false, false, false, 0, mode);
      native_walking(version, false, true);
      native_walking(version, false, false, true);
      native_walking(version, false, false, false, true);
      native_walking(version, true);
      for (unsigned kind = 1; kind <= 6; ++kind)
        native_walking(version, true, false, false, false, kind);
      maintenance_callback(version, false, false);
      maintenance_callback(version, true, false);
      maintenance_callback(version, true, true);
    }
    std::cout << "Native world runtime: " << checks
              << " integration checks passed\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
