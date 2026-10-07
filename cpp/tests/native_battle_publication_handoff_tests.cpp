// Publication lifecycle acceptance uses real Scene, Runtime, Frame and window
// owners. Synthetic imported content supplies no original execution or assets.
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
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/world_scene.hpp"
#include "native_battle_frame_fixture.hpp"
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
struct HandoffFixture {
  Fixture f;
  ScenePalette world_colors{};
  WorldEncounterVisualState visual;
  WorldDisplayFade fade;
  WorldLayerConfigurations layers;
  WorldLayerSelection selected;
  WorldScenePresentation world;
  BattleBackgroundScene background;
  BattleCombatants catalog = battle_frame_test::battle_catalog();
  battle::PaletteBankState colors;
  BattleCombatantScene objects = catalog.prepare(0);
  battle::PsiAnimationState psi_state;
  battle::PsiScratch scratch;
  battle::PsiDisplayState display;
  battle::FrameDisplay screen{display};
  battle::PaletteEffectState ramps;
  battle::PaletteEffects effects{colors,ramps};
  battle::PsiAnimation psi{psi_state,scratch,display,effects,background};
  battle::Roster roster;
  WorldSwirlData swirl_data;
  WorldEncounterEffectData swirl_effects{{},{},{}};
  WorldSwirlState swirl;
  battle::FrameState frame_state;
  battle::Frame body;
  std::shared_ptr<const battle::PsiResources> animation_resources;
  battle::ActionState action;
  battle::PsiSetup setup;
  battle::AnimationCommands commands;
  std::unique_ptr<story::BattlePublication> battle;
  explicit HandoffFixture(eb::GameVersion version,unsigned depth)
    :f(version),layers(std::vector<std::uint8_t>(0x100000),version),
     world(world_colors,visual,layers,selected),background(battle_frame_test::battle_background(depth)),
     roster(battle::EnemyResources::import(std::vector<std::uint8_t>(0x160000),version)),
     body(frame_state,background,roster,objects,psi,effects,colors,display,screen,
       fade,f.clock,f.windows,f.party,f.meters,swirl_data,swirl_effects,swirl,visual,layers,selected),
     animation_resources(battle_frame_test::animation_resources(version)),
     setup(animation_resources,psi_state,scratch,display,effects,background,roster,action,catalog,fade,f.clock),
     commands(setup,*animation_resources,roster,action,background,colors,swirl_data,swirl,visual) {
    action.target=8;
    visual.visible_layers.fill(true); world_colors[1]={2,3,4};
    world.bind_display_fade(fade);world.bind_frame_display(screen);
    f.start({},256); f.runtime->bind_presentation(world); f.runtime->refresh_world_capture();
    const auto retained=f.runtime->frame();
    battle=std::make_unique<story::BattlePublication>(colors,scratch,display,background,objects,
      f.windows,visual,fade,story::BattlePublication::WindowBinding::Deferred);
    battle->bind_frame_display(screen);
    check(f.windows.palette_publication()==&world && f.runtime->frame()==retained,
      "Deferred battle candidate claimed current world routing or capture");
  }
  ~HandoffFixture() { f.runtime.reset(); }
  void enter() { f.runtime->enter_battle_publication(world,*battle,fade,body,&commands); }
  void leave() { f.runtime->return_world_publication(*battle,world,fade); }
};
void handoff(eb::GameVersion version,unsigned depth) {
  HandoffFixture h(version,depth); auto& f=h.f;
  const auto before=f.runtime->frame(); const auto pixels=eb::rasterize_direct_scene({before,{}});
  const auto clock=f.clock; const auto input=f.input; const auto random=f.random;
  h.colors.staged[0][1]=0x9234;h.colors.displayed[0][1]=0x4567;h.colors.upload_mode=16;
  h.scratch.bytes[0]=7;h.display.queue_frame(0);h.display.staged_scroll[0]={7,9};
  std::array<BattleCombatantPresentation,1> records{}; records[0].slot=8;records[0].resource=0;records[0].x=120;records[0].y=100;
  h.objects.publish(records);h.screen.update_screen(h.objects.snapshot());
  const auto staged=h.colors.staged, displayed=h.colors.displayed;
  const auto world=h.world_colors; const auto serial=h.display.publication_serial();
  h.enter();
  check(f.windows.palette_publication()==h.battle.get() && f.runtime->frame()==before,
    "World-to-battle switch did not atomically route or retained frame changed");
  check(h.colors.staged==staged && h.colors.displayed==displayed && h.world_colors==world &&
    h.colors.upload_mode==16 && h.display.publication_serial()==serial && !h.display.pending().empty() &&
    h.screen.pending() && h.display.scroll[0]==battle::PsiScroll{},
    "Handoff copied palette state or consumed pending display transport");
  check(f.clock.frame_counter==clock.frame_counter && f.clock.new_frame_started==clock.new_frame_started &&
    f.clock.input_polls==clock.input_polls && f.input==input && f.random==random && f.actors.ticks()==0,
    "Handoff advanced live timing/input/gameplay owners");
  f.windows.animate_palette(1,1);
  const auto cycle=f.windows.palette();
  check(h.colors.staged[1][4]==cycle[20] && h.colors.upload_mode==24 && h.world_colors==world,
    "Window palette writes did not reach actual battle sink");
  auto op=f.runtime->begin(story::TickKind::Frame);frame(*op);op->complete_publication();
  check(h.display.publication_serial()==serial+1 && h.display.pending().empty() && !h.screen.pending() &&
    h.display.tilemap[0]==0x3007 && h.display.scroll[0]==battle::PsiScroll{7,9} && f.clock.input_polls==0,
    "First battle publication did not consume the actual transport without polling input");
  op->complete_frame({0x8000,0});finish(*op);op.reset();
  const auto battle_frame=f.runtime->frame();
  check(battle_frame!=before && eb::rasterize_direct_scene({before,{}})==pixels,
    "Battle publication mutated previously retained world frame");
  const auto retained_battle=eb::rasterize_direct_scene({battle_frame,{}});
  const auto battle_staged=h.colors.staged;
  h.leave();
  check(f.windows.palette_publication()==&h.world && f.runtime->frame()==battle_frame,
    "World return lost actual sink or invented immediate recapture");
  f.windows.animate_palette(1,1);
  check(h.world_colors[20]==PaletteColor{std::uint8_t(cycle[20]&31),std::uint8_t((cycle[20]>>5)&31),std::uint8_t((cycle[20]>>10)&31)} && h.colors.staged==battle_staged,
    "Returned window palette writes did not reach actual world owner");
  auto world_op=f.runtime->begin(story::TickKind::Frame);frame(*world_op);world_op->complete_frame({0,0});finish(*world_op);
  check(eb::rasterize_direct_scene({battle_frame,{}})==retained_battle &&
    f.runtime->frame()!=battle_frame && f.clock.input_polls==2,
    "World publication mutated retained battle frame or lost single WAIT poll");
  world_op.reset();
  h.enter();h.leave();
}
void rejection(eb::GameVersion version,unsigned depth) {
  HandoffFixture h(version,depth),other(version,depth);auto& f=h.f;
  const auto retained=f.runtime->frame();const auto colors=h.colors.staged;
  const auto unchanged=[&] {
    check(f.windows.palette_publication()==&h.world && f.runtime->frame()==retained &&
      !f.runtime->failed() && !f.clock.input_polls && h.display.publication_serial()==0 && h.colors.staged==colors,
      "Rejected switch lost world binding/capture or advanced state");
  };
  rejects([&]{f.runtime->enter_battle_publication(other.world,*h.battle,h.fade,h.body);},"Foreign expected world admitted");unchanged();
  rejects([&]{f.runtime->enter_battle_publication(h.world,*other.battle,other.fade,other.body);},"Foreign battle visual/window admitted");unchanged();
  story::TickState foreign_clock;
  battle::Frame wrong_clock(h.frame_state,h.background,h.roster,h.objects,h.psi,h.effects,h.colors,h.display,
    h.screen,h.fade,foreign_clock,f.windows,f.party,f.meters,h.swirl_data,h.swirl_effects,h.swirl,
    h.visual,h.layers,h.selected);
  rejects([&]{f.runtime->enter_battle_publication(h.world,*h.battle,h.fade,wrong_clock);},
    "Incoming frame with foreign clock admitted");unchanged();
  battle::PsiAnimationState foreign_psi;
  battle::PsiSetup wrong_setup(h.animation_resources,foreign_psi,h.scratch,h.display,h.effects,h.background,
    h.roster,h.action,h.catalog,h.fade,f.clock);
  battle::AnimationCommands wrong_commands(wrong_setup,*h.animation_resources,h.roster,h.action,h.background,
    h.colors,h.swirl_data,h.swirl,h.visual);
  rejects([&]{f.runtime->enter_battle_publication(h.world,*h.battle,h.fade,h.body,&wrong_commands);},
    "Animation with different PSI state partially admitted");unchanged();
  rejects([&]{story::BattlePublication immediate(h.colors,h.scratch,h.display,h.background,h.objects,
    f.windows,h.visual,h.fade);},"Immediate candidate replaced world palette sink");unchanged();
  WorldDisplayFade wrong_fade;
  rejects([&]{f.runtime->enter_battle_publication(h.world,*h.battle,wrong_fade,h.body);},"Foreign fade admitted");unchanged();
  h.fade.begin_in(1,0);h.fade.commit_frame(h.fade.preview_next_frame());
  rejects([&]{h.enter();},"Nonblank publication handoff admitted");unchanged();
  h.fade.begin_out(16,0);h.fade.commit_frame(h.fade.preview_next_frame());
  check(h.fade.state().brightness&0x80,"Fixture did not reach actual forced blank");
  auto active=f.runtime->begin(story::TickKind::Frame);frame(*active);
  rejects([&]{h.enter();},"Active Scene admitted idle handoff");unchanged();
  active->complete_frame({0,0});finish(*active);active.reset();
  const auto fresh=f.runtime->frame();
  h.frame_state.hp_pp_blink_duration=1;h.frame_state.hp_pp_blink_target=4;
  rejects([&]{h.enter();},"Invalid incoming frame admitted");
  check(f.windows.palette_publication()==&h.world && f.runtime->frame()==fresh,"Invalid frame lost old routing");
  h.frame_state.hp_pp_blink_duration=0;
  f.windows.clear_palette_publication(h.world);
  rejects([&]{h.enter();},"Missing expected window sink admitted");
  check(f.windows.palette_publication()==nullptr && f.runtime->frame()==fresh,"Rejected missing sink invented binding");
  f.windows.bind_palette_publication(h.world);
  auto busy=h.body.begin();rejects([&]{h.enter();},"Busy incoming frame admitted");
  check(busy->advance() && busy->complete(),"Fixture direct frame did not finish");busy.reset();
  auto command=h.commands.begin(48,48);
  rejects([&]{h.enter();},"Busy incoming animation command admitted");
  check(command->advance() && command->complete(),"No-op authored animation dispatch did not finish");
  h.enter();
  auto outgoing=h.commands.begin(48,48);
  rejects([&]{h.leave();},"Unfinished outgoing animation detached");
  check(outgoing->advance() && outgoing->complete(),"Outgoing animation did not finish");
  rejects([&]{h.enter();},"Repeated expected-world switch admitted");
  rejects([&]{f.runtime->return_world_publication(*h.battle,other.world,h.fade);},"Foreign return publisher admitted");
  check(f.windows.palette_publication()==h.battle.get() && f.runtime->frame()==fresh,
    "Failed return lost battle routing or retained frame");
  h.frame_state.hp_pp_blink_duration=1;h.frame_state.hp_pp_blink_target=4;
  h.leave(); // Returning does not speculatively validate another battle body.
}
void publication_only(eb::GameVersion version,unsigned depth) {
  HandoffFixture h(version,depth);auto& f=h.f;
  const auto input=f.input;const auto random=f.random;const auto party=f.party.character(1);
  for(auto mask:{0u,0x10u,0x20u}) {
    f.clock.interrupt_mask=std::uint8_t(mask);
    rejects([&]{f.runtime->begin_publication();},"Unsupported interrupt source admitted a native NMI");
  }
  f.clock.interrupt_mask=0x80;f.clock.frame_counter=255;f.clock.new_frame_started=255;f.clock.publications=17;
  auto first=f.runtime->begin_publication();
  check(next(*first)==dialogue::Progress::Suspended && first->service()==story::SceneService::Publication,
    "Raw publication failed to suspend at actual NMI");
  rejects([&]{first->complete_frame({0xffff,0});},"Publication-only operation consumed a WAIT input");
  check(f.clock.publications==17 && f.clock.frame_counter==255 && f.clock.new_frame_started==255,
    "Rejected input response changed publication clock");
  first->complete_publication();finish(*first);first.reset();
  check(f.clock.publications==18 && f.clock.frame_counter==0 && f.clock.new_frame_started==0 &&
    f.input==input && f.random==random && f.clock.input_polls==0 && f.actors.ticks()==0 &&
    f.party.character(1).current_hp==party.current_hp && f.party.character(1).hp_fraction==party.hp_fraction,
    "Raw NMI lost byte wrap or ran input/gameplay ticks");
  auto second=f.runtime->begin_publication();check(next(*second)==dialogue::Progress::Suspended,"Second NMI did not suspend");
  second->complete_publication();finish(*second);
  check(f.clock.publications==19 && f.clock.new_frame_started==1 && f.clock.input_polls==0,
    "Second NMI did not preserve raw pending-frame receipt");
}
void world_fade(eb::GameVersion version) {
  HandoffFixture h(version,4);
  h.screen.hdma_enable=0x6c;h.screen.displayed_hdma_enable=0x14;
  EncounterWindowMask rows;rows.fill({{{17,99},{133,211}}});
  h.screen.install_oval(rows); // Actual channel3 writes only the first interval.
  h.visual.window_left={3,4};h.visual.window_right={9,10};
  h.display.staged_scroll[0]={77,88};h.screen.update_screen(h.objects.snapshot());
  const auto original=h.fade.state();
  h.fade.begin_in(2,0);const auto staged=h.fade.state();
  eb::DirectSceneFrame malformed;malformed.atlas={0xffffffff};malformed.palette_indices={257};
  rejects([&]{h.world.capture_next(malformed);},"Invalid frame unexpectedly captured");
  check(h.fade.state()==staged && h.screen.hdma_enable==0x6c && h.screen.displayed_hdma_enable==0x14 &&
    h.screen.pending() && h.display.scroll[0]==battle::PsiScroll{},
    "Rejected world capture consumed a fade/display phase");
  check(h.visual.window_left[1]==4 && h.visual.window_right[1]==10,
    "Rejected capture committed NMI window reset");
  eb::DirectSceneFrame valid;valid.width=valid.atlas_width=256;valid.atlas_height=224;
  valid.atlas.assign(256*224,0xffffffff);valid.palette_indices.assign(256*224,1);
  auto readonly=h.world.capture(valid);
  check(readonly->effects->brightness==0 && h.fade.state()==staged,
    "Read-only world capture changed forced blank or advanced fade");
  check(h.screen.displayed_hdma_enable==0x14,"Read-only world capture changed hardware HDMA");
  auto next=h.world.capture_next(valid);
  check(next->effects->brightness==2 && h.fade.state().brightness==2 && h.fade.state()!=original,
    "World publication did not commit exact shared fade preview");
  check(h.screen.displayed_hdma_enable==0x6c && h.screen.hdma_enable==0x6c && !h.screen.pending() &&
    h.display.scroll[0]==battle::PsiScroll{77,88},"World NMI failed shared OAM/scroll transport or post-fade HDMA");
  check(next->effects->windows[0]==std::array<std::uint8_t,4>{17,99,255,0} &&
    h.visual.window_left==std::array<std::uint8_t,2>{17,255} &&
    h.visual.window_right==std::array<std::uint8_t,2>{99,0},
    "World NMI failed actual installed first-window stream and second-window reset");
  const auto committed=h.fade.state();h.world.complete_publication();
  check(h.fade.state()==committed,"World completion advanced fade twice");
  h.visual.window_rows_enabled=true;h.fade.begin_out(3,0);
  const auto revision=h.visual.window_revision;
  auto blank=h.world.capture_next(valid);
  check(blank->effects->brightness==0 && h.fade.state().brightness==0x80 && !h.visual.window_rows_enabled &&
    h.visual.window_revision==revision+1 && h.screen.hdma_enable==0 && h.screen.displayed_hdma_enable==0,
    "World fade completion did not disable real row streams and global HDMA");
  h.screen.hdma_enable=0x78;h.screen.displayed_hdma_enable=0x78;
  h.visual.window_left={11,12};h.visual.window_right={22,23};
  auto retained_blank=h.world.capture_next(valid);
  check(retained_blank->effects->brightness==0 && h.screen.hdma_enable==0x78 &&
    h.screen.displayed_hdma_enable==0 && !h.screen.pending(),
    "Cold forced-blank NMI lost retained HDMA mirror or restored a consumed display request");
  check(retained_blank->effects->windows[0]==std::array<std::uint8_t,4>{11,22,255,0} &&
    h.visual.window_left[0]==11 && h.visual.window_right[0]==22 &&
    h.visual.window_left[1]==255 && h.visual.window_right[1]==0,
    "Forced blank ran installed row streams or failed unconditional WH2 reset");
  battle::PsiDisplayState foreign_display;battle::FrameDisplay foreign_screen(foreign_display);
  rejects([&]{h.world.bind_frame_display(foreign_screen);},"World replaced its stable HDMA owner");
  WorldDisplayFade foreign;
  rejects([&]{h.world.bind_display_fade(foreign);},"World replaced its stable fade owner");
}
void immediate(eb::GameVersion version) {
  battle_frame_test::FrameFixture f(version,4);
  check(f.f.windows.palette_publication()==&f.publication,"Default immediate construction changed");
}
void prayer_world_publication(eb::GameVersion version,unsigned depth) {
  HandoffFixture h(version,depth);auto &f=h.f;
  h.world.bind_palette_transport(h.colors);
  const auto serial=h.display.publication_serial();const auto clock=f.clock;
  const auto input=f.input;const auto random=f.random;
  rejects([&]{h.battle->bind_world_presentation(*h.battle);},
    "Battle world routing admitted itself as the world publication");
  rejects([&]{HandoffFixture other(version,depth);h.battle->bind_world_presentation(other.world);},
    "Battle world routing admitted foreign publication owners");
  ScenePalette unused_colors;
  WorldScenePresentation same(unused_colors,h.visual,h.layers,h.selected);
  same.bind_display_fade(h.fade);same.bind_frame_display(h.screen);same.bind_palette_transport(h.colors);
  h.battle->bind_world_presentation(h.world);
  h.battle->bind_world_presentation(h.world);
  rejects([&]{h.battle->bind_world_presentation(same);},
    "Battle world routing replaced its stable world presentation");
  check(f.windows.palette_publication()==&h.world && h.display.publication_serial()==serial &&
    f.clock.publications==clock.publications && f.input==input && f.random==random,
    "World binding claimed the window sink or advanced live publication owners");
  h.fade.begin_in(15,0);h.fade.commit_frame(h.fade.preview_next_frame());
  for(unsigned i=1;i<256;++i)
    h.colors.displayed[i/16][i%16]=i<32?0x7c00:i<128?0x001f:0x03e0;
  h.colors.staged=h.colors.displayed;
  f.output.policy().instant=true;f.output.begin_glyph(0x71);
  check(f.output.advance()==dialogue::OutputProgress::Complete,"Prayer fixture glyph unexpectedly yielded");
  f.windows.draw_tick();f.windows.publish_scene();
  auto spec=battle_frame_test::actor();spec.behavior.projected_x=120;spec.behavior.projected_y=120;
  const auto id=f.actors.create(spec);f.actors.actor(id).appearance.select_four(0,0,0);
  const auto objects=f.actors.draw(256,f.palettes.sprites,731);
  const auto source=draw_world_scene(f.area,f.palettes,{0,64,256,64,objects->frame,731},objects);
  const auto original=eb::rasterize_direct_scene({source,{}});
  const auto source_atlas=source->atlas;
  check(std::any_of(source->quads.begin(),source->quads.end(),[](const auto &q){return q.object;}),
    "Prayer fixture did not contain an actual ActorWorld draw list");
  f.windows.prompt_state().battle_mode=0;
  const auto readonly=h.battle->capture(*source);
  const auto pixels=eb::rasterize_direct_scene({readonly,{}});
  check(std::find(pixels.begin(),pixels.end(),0xffff0000)!=pixels.end(),
    "Prayer publication lost its actual map pixels");
  check(std::find(pixels.begin(),pixels.end(),0xff00ff00)!=pixels.end(),
    "Prayer publication lost its actual world actor pixels");
  check(std::find(pixels.begin(),pixels.end(),0xff0000ff)!=pixels.end(),
    "Prayer publication lost its actual dialogue pixels");
  check(readonly->scene_identity==source->scene_identity && readonly->frame==source->frame &&
    readonly->palette_indices.empty() && source->atlas==source_atlas &&
    eb::rasterize_direct_scene({source,{}})==original && h.display.publication_serial()==serial &&
    h.colors.upload_mode==0 && f.actors.ticks()==0 && f.clock.input_polls==0,
    "Read-only prayer capture mutated the source frame or advanced state");
  f.windows.prompt_state().battle_mode=1;
  const auto battle_pixels=eb::rasterize_direct_scene({h.battle->capture(*source),{}});
  check(battle_pixels!=pixels && std::find(battle_pixels.begin(),battle_pixels.end(),0xff00ff00)==battle_pixels.end(),
    "Live battle FLAG did not return to retained battle composition");
  f.windows.prompt_state().battle_mode=0;
  check(eb::rasterize_direct_scene({h.battle->capture(*source),{}})==pixels,
    "Live world FLAG required another publication binding or lost retained world artwork");
  h.colors.staged[2][1]=0x03ff;h.colors.upload_mode=24;
  h.scratch.bytes[0]=7;h.display.queue_frame(0);
  h.display.staged_scroll[0]={7,9};h.screen.update_world_screen();
  h.fade.begin_out(1,0);
  const auto fade=h.fade.state();const auto staged=h.colors.staged;const auto displayed=h.colors.displayed;
  auto malformed=*source;malformed.palette_indices[0]=257;
  rejects([&]{h.battle->capture_next(malformed);},"Malformed world stamp committed its NMI preview");
  check(h.fade.state()==fade && h.colors.staged==staged && h.colors.displayed==displayed &&
    h.colors.upload_mode==24 && h.display.publication_serial()==serial && !h.display.pending().empty() &&
    h.screen.pending() && h.display.scroll[0]==battle::PsiScroll{},
    "Rejected world capture consumed fade, palette, OAM scroll or shared PSI DMA");
  const auto published=h.battle->capture_next(*source);
  check(published->effects->brightness==14 && h.fade.state().brightness==14 &&
    h.display.publication_serial()==serial+1 && h.display.pending().empty() && !h.screen.pending() &&
    h.display.tilemap[0]==0x3007 && h.display.scroll[0]==battle::PsiScroll{7,9} &&
    h.colors.displayed==staged && h.colors.upload_mode==0,
    "World route failed the single actual fade/palette/OAM/PSI publication commit");
  check(eb::rasterize_direct_scene({readonly,{}})==pixels && source->atlas==source_atlas &&
    f.clock.publications==clock.publications && f.clock.input_polls==0 && f.actors.ticks()==0 &&
    f.input==input && f.random==random,
    "World NMI route changed retained frames or ran input/gameplay clocks");
  const auto committed=h.fade.state();h.battle->complete_publication();
  check(h.fade.state()==committed && h.display.publication_serial()==serial+1,
    "World completion repeated its publication commits");
}
void direct_return_identity(eb::GameVersion version) {
  battle_frame_test::FrameFixture h(version,4);
  ScenePalette colors;
  WorldEncounterVisualState foreign_visual;
  WorldScenePresentation foreign(colors,foreign_visual,h.layers,h.layer);
  foreign.bind_display_fade(h.fade);
  foreign.bind_frame_display(h.frame_display);
  h.fade.force_blank();
  const auto retained=h.f.scene->frame();
  const auto clock=h.f.clock;
  const auto fade=h.fade.state();
  const auto visual=h.visual;
  rejects([&]{h.f.scene->handoff_publication(h.publication,foreign,h.fade,{});},
    "Direct Scene return admitted a foreign visual owner");
  check(h.f.scene->publication()==&h.publication && h.f.windows.palette_publication()==&h.publication &&
    h.f.scene->frame()==retained && !h.f.scene->failed() && !h.f.scene->busy(),
    "Rejected direct return changed publisher, sink, retained frame or admission");
  check(h.f.clock.publications==clock.publications && h.f.clock.frame_counter==clock.frame_counter &&
    h.f.clock.new_frame_started==clock.new_frame_started && h.f.clock.input_polls==clock.input_polls &&
    h.fade.state()==fade && h.visual.window_revision==visual.window_revision,
    "Rejected direct return advanced actual clocks, fade or visual state");
  WorldScenePresentation same(colors,h.visual,h.layers,h.layer);
  same.bind_display_fade(h.fade);
  same.bind_frame_display(h.frame_display);
  h.f.scene->handoff_publication(h.publication,same,h.fade,{});
  check(h.f.scene->publication()==&same && h.f.windows.palette_publication()==&same &&
    h.f.scene->frame()==retained && h.f.clock.publications==clock.publications,
    "Valid direct return failed to preserve the actual visual owner without publication");
  h.f.scene.reset();
}
} // namespace
int main() {
  try {
    for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
      immediate(version);world_fade(version);direct_return_identity(version);
      for(unsigned depth:{2u,4u}) {handoff(version,depth);rejection(version,depth);publication_only(version,depth);prayer_world_publication(version,depth);}
    }
    std::cout<<"native battle publication handoff: "<<checks<<" checks passed\n";
  } catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
