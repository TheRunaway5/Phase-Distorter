// Complete original BATTLE_ROUTINE execution to named continuations, with real
// graphics, NMI, input, text and SPC700/DSP; no downstream RTL replacement.
#include "eb/asset_store.hpp"
#include "eb/battle_sprite_bus.hpp"
#include "eb/direct_scene.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/action_scripts.hpp"
#include "eb/native/battle/dead_players.hpp"
#include "eb/native/battle/psi_resources.hpp"
#include "eb/native/battle/rounds.hpp"
#include "eb/native/battle/startup.hpp"
#include "eb/native/battle/turn_scheduler.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
namespace {
using namespace eb::native;
using namespace eb::native::battle;
struct Counts {
  std::uint64_t words{}, record_bytes{}, instructions{}, apu{}, text_pixels{};
  unsigned starts{}, menus{}, source_messages{}, native_polls{}, source_polls{},
      source_nmis{}, audio_services{};
} counts;
void require(bool okay, const std::string &why) {
  if (!okay)
    throw std::runtime_error(why);
}
void check_equal(unsigned a, unsigned b, const std::string &why) {
  ++counts.words;
  require(a == b, why + " original=" + std::to_string(a) +
                      " native=" + std::to_string(b));
}
using encounter_reference::Source;
using Bytes = std::array<std::uint8_t, 78>;
void put(std::span<std::uint8_t> b, unsigned n, unsigned v) {
  b[n] = v;
  b[n + 1] = v >> 8;
}
void put32(std::span<std::uint8_t> b, unsigned n, std::uint32_t v) {
  put(b, n, v);
  put(b, n + 2, v >> 16);
}
Bytes encode(const Battler &v) {
  Bytes b{};
  put(b, 0, v.id);
  put(b, 2, v.sprite);
  put(b, 4, v.action);
  b[6] = v.action_order;
  b[7] = v.action_item_slot;
  b[8] = v.action_argument;
  b[9] = v.targeting;
  b[10] = v.target;
  b[11] = v.label;
  b[12] = v.consciousness;
  b[13] = v.taken_turn;
  b[14] = v.side;
  b[15] = v.npc;
  b[16] = v.row;
  put(b, 17, v.hp);
  put(b, 19, v.target_hp);
  put(b, 21, v.maximum_hp);
  put(b, 23, v.pp);
  put(b, 25, v.target_pp);
  put(b, 27, v.maximum_pp);
  std::copy(v.afflictions.begin(), v.afflictions.end(), b.begin() + 29);
  b[36] = v.guarding;
  b[37] = v.shield_hp;
  put(b, 38, v.offense);
  put(b, 40, v.defense);
  put(b, 42, v.speed);
  put(b, 44, v.guts);
  put(b, 46, v.luck);
  b[48] = v.vitality;
  b[49] = v.iq;
  b[50] = v.base_offense;
  b[51] = v.base_defense;
  b[52] = v.base_speed;
  b[53] = v.base_guts;
  b[54] = v.base_luck;
  b[55] = v.paralysis_resistance;
  b[56] = v.freeze_resistance;
  b[57] = v.flash_resistance;
  b[58] = v.fire_resistance;
  b[59] = v.brainshock_resistance;
  b[60] = v.hypnosis_resistance;
  put(b, 61, v.money);
  put32(b, 63, v.experience);
  b[67] = v.resource;
  b[68] = v.x;
  b[69] = v.y;
  b[70] = v.initiative;
  b[71] = v.unknown71;
  b[72] = v.blink;
  b[73] = v.alternate_flash;
  b[74] = v.targeted;
  b[75] = v.alternate;
  put(b, 76, v.original_enemy);
  return b;
}
struct Resources {
  const eb::GameAssets &assets;
  std::shared_ptr<const EnemyResources> enemies;
  std::shared_ptr<const EncounterResources> encounter;
  std::shared_ptr<const ActionResources> actions;
  std::shared_ptr<const PsiResources> psi;
  BattleBackgroundScenes backgrounds;
  BattleCombatants combatants;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::WindowResources> windows;
  std::shared_ptr<const dialogue::WindowInitializationResources> artwork;
  std::shared_ptr<const dialogue::SubstitutionResources> substitutions;
  std::shared_ptr<const party::MeterWindowResources> meters;
  dialogue::ImportedProgram program;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  WorldMap map;
  WorldPalettes world_colors;
  WorldSwirlData swirl;
  WorldEncounterEffectData effects;
  WorldLayerConfigurations layers;
  WorldPartyData party_data;
  WorldCollision collision;
  std::shared_ptr<const npcs::InteractionResources> interaction;
  std::shared_ptr<const npcs::MapTextResources> map_text;
  explicit Resources(const eb::GameAssets &a)
      : assets(a), enemies(EnemyResources::import(a.image, a.version)),
        encounter(EncounterResources::import(a.image, a.version)),
        actions(ActionResources::import(a.image, a.version)),
        psi(PsiResources::import(a.image, a.version)),
        backgrounds(a.image, a.version), combatants(a.image, a.version),
        fonts(dialogue::FontResources::import(a.image, a.version)),
        windows(dialogue::WindowResources::import(a.image, a.version)),
        artwork(dialogue::WindowInitializationResources::import(a.image,
                                                                a.version)),
        substitutions(
            dialogue::SubstitutionResources::import(a.image, a.version)),
        meters(party::MeterWindowResources::import(a.image, a.version)),
        program(dialogue::import_program(a.image, a.version)),
        sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(import_action_scripts(a.image, a.version)),
        map(a.image, world_map_layout(a.version)),
        world_colors(a.image, world_palette_layout(a.version)),
        swirl(import_world_swirl_data(a.image)),
        effects(import_world_encounter_effect_data(a.image, a.version)),
        layers(a.image, a.version), party_data(a.image, a.version),
        collision(a.image, world_collision_layout(a.version)),
        interaction(npcs::InteractionResources::import(a.image, a.version)),
        map_text(npcs::MapTextResources::import(a.image, a.version)) {}
};
struct Native {
  Resources &r;
  Source audio_adapter;
  std::unique_ptr<eb::SnesBus> graphics_bus;
  eb::BattleSpriteBus sprite_reads;
  BattleBackgroundScene background;
  BackgroundDisplayState video;
  PaletteBankState colors;
  PsiScratch scratch;
  PsiDisplayState display;
  FrameDisplay frames;
  WorldDisplayFade fade;
  story::TickState clock;
  FrameState frame_state;
  WorldSwirlState swirl;
  WorldEncounterVisualState visual;
  WorldLayerSelection selection{1};
  BackgroundLoader loader;
  PaletteEffectState effect_state;
  PaletteEffects effects;
  PsiAnimationState psi_state;
  PsiAnimation animation;
  Roster roster;
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  std::shared_ptr<dialogue::WindowGraphics> artwork;
  party::State party;
  party::MeterWindows meters;
  story::RandomState random{0x1234, 0xabcd};
  story::InputState input;
  ActorWorld actors;
  WorldMapArea area;
  AreaPalettes area_colors;
  BattleCombatantScene objects;
  ScenePalette world_colors;
  WorldScenePresentation world;
  Frame frame;
  story::Scene scene;
  story::BattlePublication publication;
  DisplaySetup blank;
  BattleSpriteAllocation allocation;
  StartupGraphics graphics;
  dialogue::PreparedMessage prepared;
  ActionState action;
  Names names;
  dialogue::PromptHost prompts;
  story::BattleDialogue dialogue;
  WorldPartyState party_state;
  party::MovementPolicyState movement;
  WorldParty world_party;
  npcs::Interactions interactions;
  story::PartyFormation formation;
  WorldEncounterState encounter;
  EncounterState encounter_state;
  TurnState turns;
  Admission admission;
  RowState rows;
  StealState steals;
  TargetSelection targets;
  TurnScheduler scheduler;
  DeadPlayers dead;
  Rounds rounds;
  std::vector<unsigned> music_requests, sound_requests;
  std::vector<std::shared_ptr<const dialogue::TextFrame>> closing_frames;
  std::function<void(Native &)> before_music;
  const std::vector<std::array<std::uint16_t, 2>> *host_input{};
  std::unique_ptr<Startup> startup;
  explicit Native(Resources &s)
      : r(s), audio_adapter(s.assets),
        graphics_bus(
            std::make_unique<eb::SnesBus>(s.assets.image, s.assets.version)),
        sprite_reads(*graphics_bus),
        background(s.backgrounds.prepare(BattleBackgroundPair{0, 0, 4})),
        frames(display),
        loader(s.backgrounds, background, video, colors, scratch, display,
               frames, fade, clock, frame_state, swirl, visual, s.layers,
               selection),
        effects(colors, effect_state),
        animation(psi_state, scratch, display, effects, background),
        roster(s.enemies), output(s.fonts, text),
        windows(s.windows, text, output), artwork([&] {
          auto result =
              std::make_shared<dialogue::WindowGraphics>(s.artwork, output);
          windows.set_graphics(result);
          return result;
        }()),
        party(s.assets.version), meters(windows, party, s.meters),
        actors(s.sprites, s.scripts, s.assets.version),
        area(s.map.prepare(0, text.event_flags)),
        area_colors(s.world_colors.resolve({0, 0}, text.event_flags)),
        objects(s.combatants.prepare(1)),
        world(world_colors, visual, s.layers, selection),
        frame(frame_state, background, roster, objects, animation, effects,
              colors, display, frames, fade, clock, windows, party, meters,
              s.swirl, s.effects, swirl, visual, s.layers, selection),
        scene(windows, party, random, meters, clock, input, actors, area,
              area_colors),
        publication(colors, scratch, display, background, objects, windows,
                    visual, fade,
                    story::BattlePublication::WindowBinding::Deferred),
        blank(s.assets.version, fade, frames, clock, visual, scene),
        graphics(s.combatants, objects, allocation, *artwork, windows, party,
                 colors, scratch, display, video, fade, frame, &sprite_reads),
        prepared(s.assets.version),
        names(roster, party, prepared, *s.substitutions, action),
        prompts(windows),
        dialogue(s.program.program, prompts, prepared, party, input),
        world_party(party, actors, s.party_data, party_state),
        interactions(s.interaction, s.map_text, s.program.program, windows,
                     actors, s.collision, area),
        formation(world_party, party, actors, s.party_data, party_state,
                  movement, interactions, clock),
        admission(s.encounter, roster, party, party_state, encounter, text,
                  action, encounter_state, frame_state, turns, random, clock),
        targets(roster, party, random, rows, steals, *s.actions,
                *s.substitutions, s.combatants),
        scheduler(turns, roster, party, action, random, *s.actions,
                  encounter_state, targets),
        dead(s.encounter, roster, party, action, names, dialogue, windows,
             scene, formation),
        rounds(admission, scheduler, dead, scene, windows, meters, dialogue) {
    audio_adapter.call(s.assets.version == eb::GameVersion::JP ? 0xc4cef7
                                                               : 0xc4fb58);
    world.bind_display_fade(fade);
    world.bind_frame_display(frames);
    windows.bind_palette_publication(world);
    scene.bind_publication(world);
    publication.bind_frame_display(frames);
    windows.bind_party(party);
    windows.bind_prepared_message(prepared);
    windows.substitutions().configure(s.substitutions,
                                      party::dialogue_values(party));
    output.policy().instant = false;
    output.policy().text_speed =
        0; // Matches the explicit incoming source TEXT_SPEED word.
    clock.action_scripts_disabled = 1;
    clock.flavor = 1;
    party.party_count = party.controlled_count = 1;
    party.party_order[0] = party.display_order[0] = 1;
    auto name = party.name_field(1);
    for (unsigned i = 0; i < name.size(); ++i)
      name[i] =
          s.assets.version == eb::GameVersion::US && i == 4
              ? 0
              : std::uint8_t(
                    (s.assets.version == eb::GameVersion::JP ? 0x41 : 0x71) +
                    i);
    auto &c = party.character(1);
    c.level = 10;
    c.maximum_hp = c.current_hp = c.target_hp = 99;
    c.maximum_pp = c.current_pp = c.target_pp = 40;
    c.offense = c.defense = c.speed = c.guts = c.luck = c.vitality = c.iq = 20;
    c.base_offense = c.base_defense = c.base_speed = c.base_guts = c.base_luck =
        c.base_vitality = c.base_iq = 20;
    WorldActorSpec actor;
    actor.sprite = 0;
    actor.action.variables[1] = 0;
    const auto id = actors.create_authored(actor, {24, 25});
    require(id.has_value(), "Real incoming party actor not created");
    party_state.current_leader_role = party_state.roles[0] = 24;
    interactions.state().leader = *id;
    scene.bind_interactions(interactions);
    scene.bind_party_formation(formation);
    encounter.group = 1;
    encounter.roster = {std::uint16_t(objects.resources().front().enemy)};
    encounter_state.mode = 1;
    startup = std::make_unique<Startup>(
        admission, graphics, loader, blank, s.combatants, objects, frame,
        colors, fade, windows, meters, names, dialogue, scene, publication,
        [&](const WorldEncounterMusicChange &event) {
          if (before_music)
            before_music(*this);
          music_requests.push_back(event.track);
          audio_adapter.call(r.assets.version == eb::GameVersion::JP ? 0xc4cf5c
                                                                     : 0xc4fbbd,
                             event.track);
          ++counts.audio_services;
        });
  }
  void service(story::Scene::Operation &op) {
    const auto kind = op.service();
    if (kind == story::SceneService::Publication)
      op.complete_publication();
    else if (kind == story::SceneService::Frame) {
      require(host_input && clock.input_polls < host_input->size(),
              "Native requested more input polls than original before this "
              "boundary native=" +
                  std::to_string(clock.input_polls) + " source=" +
                  std::to_string(host_input ? host_input->size() : 0) +
                  " text_sounds=" + std::to_string(sound_requests.size()));
      op.complete_frame(host_input->at(clock.input_polls));
      ++counts.native_polls;
    } else if (kind == story::SceneService::ScriptSound) {
      const auto request = op.script_sound();
      audio_adapter.call(r.assets.version == eb::GameVersion::JP ? 0xc0abbf
                                                                 : 0xc0abe0,
                         request.source_value);
      sound_requests.push_back(request.source_value);
      ++counts.audio_services;
      op.respond_script_sound();
    } else if (kind == story::SceneService::PartySpriteBlink) {
      clear_party_sprite_blink(actors);
      op.respond_party_sprite_blink();
    } else if (kind == story::SceneService::Dialogue) {
      const auto &event = op.dialogue_event();
      const auto *effect =
          event ? std::get_if<dialogue::TextEffect>(&*event) : nullptr;
      if (!effect || effect->kind != dialogue::TextEffectKind::TextSound) {
        const auto *request =
            event ? std::get_if<dialogue::Request>(&*event) : nullptr;
        throw std::runtime_error(
            "Unowned authored dialogue variant=" +
            std::to_string(event ? event->index() : 999) + " request=" +
            std::to_string(request ? unsigned(request->kind) : 999) +
            " command=" + std::to_string(request ? request->command : 999) +
            " selector=" + std::to_string(request ? request->selector : 999));
      }
      audio_adapter.call(
          r.assets.version == eb::GameVersion::JP ? 0xc0abbf : 0xc0abe0, 7);
      sound_requests.push_back(7);
      ++counts.audio_services;
      op.respond_dialogue({});
    } else
      throw std::runtime_error("Unowned actual startup Scene service=" +
                               std::to_string(kind ? unsigned(*kind) : 999));
  }
  template <class Operation> dialogue::Progress advance(Operation &op) {
    const auto before = windows.slot_for({14}) ? output.frame({14}) : nullptr;
    const auto result = op.advance(1);
    if (before && !windows.slot_for({14}))
      closing_frames.push_back(before);
    return result;
  }
  template <class Operation> void drive(Operation &op) {
    for (unsigned i = 0; i < 20000; ++i) {
      auto p = advance(op);
      if (p == dialogue::Progress::Finished)
        return;
      if (p == dialogue::Progress::Suspended) {
        auto *child = op.scene();
        require(child, "Startup suspended without an actual Scene child");
        service(*child);
      }
    }
    throw std::runtime_error("Native startup budget exhausted");
  }
};
void compare_roster(Source &s, const Native &n, const std::string &where) {
  const unsigned records = s.jp ? 0xa1ae : 0x9fac;
  for (unsigned slot = 0; slot < 32; ++slot) {
    const auto bytes = encode(n.roster.at(slot));
    for (unsigned i = 0; i < 78; ++i) {
      ++counts.record_bytes;
      check_equal(s.bus->work_ram[records + slot * 78 + i], bytes[i],
                  where + " battler=" + std::to_string(slot) +
                      " byte=" + std::to_string(i));
    }
  }
  check_equal(s.word(s.jp ? 0xabe1 : 0xaa0c), n.roster.highest_enemy_level(),
              where + " highest level");
  check_equal(s.word(s.jp ? 0xa18c : 0x9f8a), n.action.enemy_count,
              where + " admitted count");
  check_equal(s.word(s.jp ? 0xabe5 : 0xaa10), n.encounter_state.item_dropped,
              where + " drop");
  check_equal(s.word(0x24), n.random.primary_word, where + " random A");
  check_equal(s.word(0x26), n.random.secondary_word, where + " random B");
}
struct SourceGraphics {
  std::vector<std::uint8_t> ram, vram;
  bool captured{};
};
void compare_graphics(const SourceGraphics &original, const Native &n,
                      bool jp) {
  require(original.captured, "Original music boundary was not captured");
  const auto vr = n.display.vram();
  for (unsigned i = 0; i < 65536; ++i) {
    check_equal(original.vram[i], vr[i],
                "Startup graphics VRAM byte=" + std::to_string(i));
    check_equal(original.ram[0x10000 + i], n.scratch.bytes[i],
                "Startup graphics scratch byte=" + std::to_string(i));
  }
  for (unsigned i = 0; i < 256; ++i) {
    const unsigned at = 0x200 + i * 2;
    check_equal(original.ram[at] | unsigned(original.ram[at + 1]) << 8,
                n.colors.staged_palette(i / 16)[i % 16],
                "Startup staged palette=" + std::to_string(i));
  }
  const auto word = [&](unsigned at) {
    return original.ram[at] | unsigned(original.ram[at + 1]) << 8;
  };
  const unsigned base = jp ? 0xac87 : 0xaab2;
  check_equal(word(base), n.allocation.maps, "Allocated sprite maps");
  check_equal(word(base + 2), n.allocation.sprites, "Allocated pictures");
  for (unsigned i = 0; i < 4; ++i) {
    check_equal(word(base + 4 + i * 2), n.allocation.map_offsets[i],
                "Sprite map allocation");
    check_equal(word(base + 12 + i * 2), n.allocation.enemy_ids[i],
                "Sprite enemy identity");
    check_equal(word(base + 20 + i * 2), n.allocation.widths[i],
                "Sprite width");
    check_equal(word(base + 28 + i * 2), n.allocation.heights[i],
                "Sprite height");
    for (unsigned j = 0; j < 80; ++j) {
      check_equal(original.ram[base + 36 + i * 80 + j],
                  n.allocation.normal[i][j], "Normal sprite map");
      check_equal(original.ram[base + 36 + 320 + i * 80 + j],
                  n.allocation.alternate[i][j], "Alternate sprite map");
    }
  }
}
void configure(Source &s, Native &n, unsigned scenario) {
  const unsigned game = s.jp ? 0x9aa9 : 0x97f5, chars = s.jp ? 0x9c7f : 0x99ce,
                 shift = s.jp ? 3 : 0, cd = s.jp ? 1 : 0,
                 stride = s.jp ? 94 : 95;
  if (scenario == 1 || scenario == 2 || scenario == 3) {
    const unsigned second = scenario == 3 ? 5 : 2, record = second - 1;
    n.party.party_count = n.party.controlled_count = 2;
    n.party.party_order[1] = n.party.display_order[1] = second;
    n.party.controlled_order[1] = record;
    s.bus->work_ram[game + 174 - shift] = s.bus->work_ram[game + 175 - shift] =
        2;
    s.bus->work_ram[game + 123 - shift] = s.bus->work_ram[game + 151 - shift] =
        second;
    s.bus->work_ram[game + 157 - shift] = record;
    s.put(game + 164 - shift, 25);
    s.put((s.jp ? 0xe90 : 0xe9a) + 25 * 2, record);
    n.party_state.roles[1] = 25;
    WorldActorSpec spec;
    spec.action.variables[1] = std::uint16_t(record);
    require(n.actors.create_authored(spec, {25, 26}).has_value(),
            "Second actual party actor missing");
    for (unsigned i = 0; i < stride; ++i)
      s.bus->work_ram[chars + record * stride + i] = s.bus->work_ram[chars + i];
    n.party.character(second) = n.party.character(1);
    auto dest = n.party.name_field(second);
    std::copy(n.party.name_field(1).begin(), n.party.name_field(1).end(),
              dest.begin());
    if (scenario == 1) {
      s.put(chars + 69 - cd, 0);
      s.put(chars + 71 - cd, 0);
      n.party.character(1).current_hp = n.party.character(1).target_hp = 0;
    }
    if (scenario == 3) {
      n.party_state.first_guest = {5, 77};
      s.bus->work_ram[game + 69 - shift] = 5;
      s.put(game + 71 - shift, 77);
    }
  }
  if (scenario == 2) {
    s.put(s.jp ? 0x5142 : 0x4dbc, 1);
    n.encounter.initiative = WorldBattleInitiative::PartyFirst;
  }
  if (scenario == 4) {
    s.bus->work_ram[(s.jp ? 0x9eb3 : 0x9c08) + 18 / 8] |= 1u << (18 % 8);
    n.text.set_flag(18, true);
    s.bus->work_ram[chars + 15 - cd] = 2;
    n.party.character(1).afflictions[1] = 2;
  }
  if (scenario == 8) {
    const auto enemy = n.encounter.roster.front();
    n.encounter.roster.assign(16, enemy);
    s.put(s.jp ? 0xa18c : 0x9f8a, 16);
    for (unsigned i = 0; i < 16; ++i)
      s.put((s.jp ? 0xa18e : 0x9f8c) + i * 2, enemy);
  }
  // Cases5..7 use matched live music callbacks for the three opening-status
  // branches. Both catalogs contain concentration status, but no initial
  // asleep or strange status. No imported enemy record is changed.
}
void compare_party(Source &s, const Native &n) {
  const unsigned game = s.jp ? 0x9aa9 : 0x97f5, chars = s.jp ? 0x9c7f : 0x99ce,
                 shift = s.jp ? 3 : 0, cd = s.jp ? 1 : 0,
                 stride = s.jp ? 94 : 95;
  for (unsigned i = 0; i < 6; ++i) {
    check_equal(s.bus->work_ram[game + 122 - shift + i], n.party.party_order[i],
                "Party membership");
    check_equal(s.bus->work_ram[game + 150 - shift + i],
                n.party.display_order[i], "Actual UPDATE_PARTY display order");
    check_equal(s.bus->work_ram[game + 156 - shift + i],
                n.party.controlled_order[i],
                "Actual UPDATE_PARTY controlled mapping");
    check_equal(s.word(game + 162 - shift + 2 * i), n.party_state.roles[i],
                "Actual UPDATE_PARTY role");
    for (unsigned a = 0; a < 7; ++a)
      check_equal(s.bus->work_ram[chars + stride * i + 14 - cd + a],
                  n.party.character(i + 1).afflictions[a], "Party status");
  }
  check_equal(s.word(game + 148 - shift), n.party_state.current_leader_role,
              "Actual party leader");
  for (unsigned i = 0; i < n.party.party_count; ++i) {
    const auto role = n.party_state.roles[i];
    check_equal(
        s.word((s.jp ? 0xf80 : 0xf8a) + role * 2),
        n.actors.actor(*n.actors.actor_for_role(role)).action().variables[5],
        "Actor formation position");
  }
}
dialogue::TextFrame source_text_frame(const Source &s) {
  const unsigned slot = s.word((s.jp ? 0x8c26 : 0x88e4) + 28);
  require(slot != 65535, "Source text capture has no real window14");
  const unsigned at = (s.jp ? 0x89c2 : 0x8650) + slot * (s.jp ? 76 : 82),
                 columns = s.word(at + 10), rows = s.word(at + 12),
                 tilemap = s.word(at + 53);
  dialogue::TextFrame result{columns * 8, rows * 8, {}, {}};
  result.pixels.resize(result.width * result.height);
  result.priority.resize(result.pixels.size());
  for (unsigned y = 0; y < result.height; ++y)
    for (unsigned x = 0; x < result.width; ++x) {
      const auto d = s.word(tilemap + ((y / 8) * columns + x / 8) * 2),
                 gx = (d & 0x4000) ? 7 - x % 8 : x % 8,
                 gy = (d & 0x8000) ? 7 - y % 8 : y % 8,
                 location = (0xc000 + (d & 1023) * 16 + gy * 2) & 65535;
      const unsigned
          color = ((s.bus->video_ram[location] >> (7 - gx)) & 1) |
                  (((s.bus->video_ram[(location + 1) & 65535] >> (7 - gx)) & 1)
                   << 1),
          index = y * result.width + x;
      result.pixels[index] = color ? color + ((d >> 10) & 7) * 4 : 0;
      result.priority[index] = color ? bool(d & 0x2000) : false;
    }
  return result;
}
void compare_text(const std::vector<dialogue::TextFrame> &source,
                  const Native &native) {
  check_equal(source.size(), native.closing_frames.size(),
              "Actual closed message windows");
  require(!source.empty(), "No authored message pixels observed");
  for (unsigned frame = 0; frame < source.size(); ++frame) {
    const auto &a = source[frame];
    const auto &b = *native.closing_frames[frame];
    check_equal(a.width, b.width, "Text width");
    check_equal(a.height, b.height, "Text height");
    for (unsigned i = 0; i < a.pixels.size(); ++i) {
      check_equal(a.pixels[i], b.pixels[i],
                  "Actual authored text pixel message=" +
                      std::to_string(frame) + " pixel=" + std::to_string(i));
      check_equal(a.priority[i], b.priority[i],
                  "Actual authored text priority");
      ++counts.text_pixels;
    }
  }
}
void run(const eb::GameAssets &a) {
  counts = {};
  Resources resources(a);
  std::vector<std::uint8_t> single_enemy_pixels;
  for (unsigned scenario = 0; scenario < 9; ++scenario) {
    Source source(a);
    source.initialize();
    Native native(resources);
    configure(source, native, scenario);
    native.host_input = &source.raw_inputs;
    std::cout << (source.jp ? "JP" : "US") << " scenario=" << scenario
              << " group=" << native.encounter.group << std::endl;
    SourceGraphics graphics;
    unsigned messages = 0, plural_count_returns = 0;
    std::vector<unsigned> admission_indices;
    std::vector<dialogue::TextFrame> source_frames;
    source.observer = [&](Source &s) {
      if (scenario == 8 &&
          s.cpu.program_counter == (s.jp ? 0xc2f000u : 0xc2f0e3u))
        admission_indices.push_back(s.cpu.x_index);
      if (scenario == 8 && !s.jp && s.cpu.program_counter == 0xc1519e) {
        check_equal(s.cpu.x_index, 3, "Actual CC1C14 capped plural count");
        ++plural_count_returns;
      }
      if (s.cpu.program_counter == (s.jp ? 0xc1d9ffu : 0xc1dc1cu))
        ++messages;
      if (s.cpu.program_counter == (s.jp ? 0xc1db36u : 0xc1dd59u) &&
          s.word(s.jp ? 0x8c96 : 0x8958) == 14)
        source_frames.push_back(source_text_frame(s));
      if (s.cpu.program_counter == (s.jp ? 0xc4cf5cu : 0xc4fbbdu)) {
        graphics.ram.assign(s.bus->work_ram.begin(), s.bus->work_ram.end());
        graphics.vram.assign(s.bus->video_ram.begin(), s.bus->video_ram.end());
        graphics.captured = true;
        if (scenario >= 5 && scenario <= 7) {
          const unsigned status = scenario == 5 ? 2 : scenario == 6 ? 4 : 3;
          s.bus->work_ram[(s.jp ? 0xa1ae : 0x9fac) + 8 * 78 + 29 + status] =
              scenario == 6 ? 4 : 1;
        }
      }
    };
    native.before_music = [&](Native &n) {
      compare_graphics(graphics, n, source.jp);
      if (scenario >= 5 && scenario <= 7) {
        const unsigned status = scenario == 5 ? 2 : scenario == 6 ? 4 : 3;
        n.roster.at(8).afflictions[status] = scenario == 6 ? 4 : 1;
      }
    };
    source.start_main();
    source.until(source.jp ? 0xc24f02 : 0xc24fcf);
    std::cout << "opening source polls=" << source.polls
              << " glyphs=" << source.glyphs
              << " sounds=" << source.sound_requests.size() << std::endl;
    auto operation = native.startup->begin();
    native.drive(*operation);
    require(operation->complete(), "Native opening incomplete");
    compare_roster(source, native, "Opening complete");
    ++counts.starts;
    source.until(source.jp ? 0xc23040 : 0xc2311b);
    auto round = native.rounds.begin_commands();
    for (unsigned i = 0; i < 20000 && !round->menu(); ++i) {
      const auto p = native.advance(*round);
      require(p != dialogue::Progress::Finished,
              "Expected actual first menu request");
      if (p == dialogue::Progress::Suspended && !round->menu()) {
        require(round->scene(), "Round has unowned non-Scene service");
        native.service(*round->scene());
      }
    }
    require(round->menu().has_value(),
            "Native did not reach real menu frontier");
    compare_roster(source, native, "First menu");
    ++counts.menus;
    check_equal(source.cpu.accumulator, round->menu()->character,
                "Menu character");
    compare_party(source, native);
    compare_text(source_frames, native);
    if (scenario == 0)
      single_enemy_pixels = source_frames.front().pixels;
    if (scenario == 8) {
      require(native.encounter.roster.size() == 16 &&
                  native.action.enemy_count > 1 &&
                  native.action.enemy_count < 16,
              "Collected/admitted distinction not exercised");
      require(admission_indices.size() == native.action.enemy_count + 1u &&
                  admission_indices.back() == native.action.enemy_count,
              "Original admission did not stop at first rejected width");
      for (unsigned i = 0; i < 16; ++i)
        check_equal(source.word((source.jp ? 0xa18e : 0x9f8c) + i * 2),
                    native.encounter.roster[i],
                    "Collected IDs retained beyond admission");
      require(source_frames.front().pixels != single_enemy_pixels,
              "Plural opening pixels did not differ from single-enemy text");
      require(source.jp ? plural_count_returns == 0 : plural_count_returns != 0,
              "Regional plural grammar path not exercised");
      std::cout << "admission collected=16 admitted="
                << native.action.enemy_count
                << " actual_US_plural_returns=" << plural_count_returns
                << std::endl;
    }
    if (scenario == 1) {
      require(native.party.character(1).afflictions[0] == 1 &&
                  round->menu()->character == 2,
              "Dead-player branch not exercised");
      require(native.party_state.current_leader_role == 25,
              "Actual UPDATE_PARTY did not move alive leader");
    }
    check_equal(source.polls, native.clock.input_polls,
                "Complete caller input-poll count");
    require(source.music_requests == native.music_requests,
            "Actual startup music requests differ");
    require(source.sound_requests == native.sound_requests,
            "Actual startup sound requests differ");
    require(messages == (scenario == 1 || scenario == 2 ||
                                 (scenario >= 5 && scenario <= 7)
                             ? 2u
                             : 1u),
            "Declared opening/KO message path was not executed");
    counts.source_messages += messages;
    counts.instructions += source.cpu.instruction_count;
    counts.apu += source.audio.instruction_count;
    counts.source_nmis += source.nmis;
    counts.source_polls += source.polls;
    std::cout << (source.jp ? "JP" : "US")
              << " accumulated_starts=" << counts.starts
              << " menus=" << counts.menus
              << " record_bytes=" << counts.record_bytes
              << " words=" << counts.words
              << " instructions=" << counts.instructions
              << " apu=" << counts.apu << " source_NMI=" << counts.source_nmis
              << " source_polls=" << counts.source_polls
              << " native_polls=" << counts.native_polls
              << " source_messages=" << counts.source_messages
              << " text_pixels=" << counts.text_pixels
              << " actual_audio_adapter=" << counts.audio_services << '\n';
  }
  require(counts.starts == 9 && counts.menus == 9 &&
              counts.text_pixels >= 56000 && counts.source_messages == 14,
          "Mandatory startup/UI/message coverage not exercised");
  std::cout << "scope: complete original ordinary startup to real first-menu "
               "entry; matched live status callbacks for cases5..7; real "
               "external SPC/DSP audio adapter; full encounter completion and "
               "command-menu body excluded\n";
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
