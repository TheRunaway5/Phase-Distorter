// Complete original regional LOAD_BATTLE_BG bodies; no callee interception.
// Original code and imported data are confined to this optional oracle.
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/action_scripts.hpp"
#include "eb/native/battle/background_loader.hpp"
#include "eb/native/battle/psi_resources.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/party/meter_windows.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
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
  std::uint64_t instructions{}, vram_bytes{}, scratch_bytes{}, record_bytes{},
      words{};
  unsigned loaders{}, catalog{}, dependencies{}, warm{}, nmis{}, polls{},
      residue{}, blanks{}, handoffs{}, callers{}, publications{};
  std::uint64_t pixels{}, nonblack{}, immutable_pixels{};
} counts;
void require(bool ok, const std::string &message) {
  if (!ok)
    throw std::runtime_error(message);
}
void check_equal(unsigned original, unsigned native, const std::string &field) {
  ++counts.words;
  require(original == native, field + ": original=" + std::to_string(original) +
                                  " native=" + std::to_string(native));
}
unsigned packed(PaletteColor color) {
  return color.red | unsigned(color.green) << 5 | unsigned(color.blue) << 10;
}
struct Layout {
  unsigned load, blank_reset, blank_retain, enable, wait, body, caller;
  unsigned effects, record, swirl, group, defeated;
};
Layout layout(bool jp) {
  return jp ? Layout{0xc2d0d5, 0xc0871f, 0xc0873a, 0xc0870e, 0xc0874c, 0xc2dab4,
                     0xc432ea, 0xaf5f,   0xafa9,   0xb097,   0x4e12,   0xab7c}
            : Layout{0xc2d121, 0xc08726, 0xc08744, 0xc08715, 0xc08756, 0xc2db3f,
                     0xc43568, 0xad8a,   0xadd4,   0xaec2,   0x4a8c,   0xa97a};
}
class Source {
public:
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Layout p;
  bool jp;
  unsigned nmis{}, polls{}, fixed_color{};
  std::function<void(Source &)> nmi_entry;
  explicit Source(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), p(layout(assets.version == eb::GameVersion::JP)),
        jp(assets.version == eb::GameVersion::JP) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    bus->work_ram[0xd] = 0x80;
    bus->work_ram[0x2e] = 1;
    bus->write_byte(0x2100, 0x80);
    cpu.observe_memory_write = [&](std::uint32_t address, std::uint8_t value) {
      if ((address & 0x40ffff) != 0x2132)
        return;
      if (value & 0x20)
        fixed_color = (fixed_color & ~31u) | (value & 31u);
      if (value & 0x40)
        fixed_color = (fixed_color & ~(31u << 5)) | ((value & 31u) << 5);
      if (value & 0x80)
        fixed_color = (fixed_color & ~(31u << 10)) | ((value & 31u) << 10);
    };
  }
  ~Source() {
    counts.instructions += cpu.instruction_count;
    counts.nmis += nmis;
    counts.polls += polls;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = std::uint8_t(value);
    bus->work_ram.at(at + 1) = std::uint8_t(value >> 8);
  }
  void call(unsigned target, unsigned a = 0, unsigned x = 0, unsigned y = 0,
            bool far = true) {
    require(cpu.stack_pointer == 0x1fff && cpu.direct_page == 0x1e00,
            "Original call context not restored");
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = (target & 0xff0000) | 0xff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    const unsigned finish = cpu.program_counter + (far ? 4 : 3);
    if (far)
      cpu.execute_instruction<0x22>(target, 4);
    else
      cpu.execute_instruction<0x20>(target & 65535, 3);
    for (unsigned i = 0; i < 12000000; ++i) {
      if (cpu.program_counter == finish && cpu.stack_pointer == 0x1fff)
        return;
      if (cpu.program_counter == 0xc08170) {
        ++nmis;
        if (nmi_entry)
          nmi_entry(*this);
      }
      if (cpu.program_counter == 0xc08496)
        ++polls;
      cpu.step_instruction();
    }
    throw std::runtime_error("Original helper did not return: " +
                             cpu.describe_registers());
  }
  std::vector<std::uint32_t> pixels() {
    const auto end = bus->completed_frames + 2;
    while (bus->completed_frames < end)
      bus->advance_cpu_cycles(3000);
    return {bus->native_framebuffer.begin(), bus->native_framebuffer.end()};
  }
  void disable_nmi() {
    bus->write_byte(0x4200, 0);
    bus->work_ram[0x1e] = 0;
  }
};
using Record = std::array<std::uint8_t, 119>;
void word(Record &r, unsigned offset, unsigned value) {
  r.at(offset) = std::uint8_t(value);
  r.at(offset + 1) = std::uint8_t(value >> 8);
}
// Independent source field offsets from loaded_bg_data. No native packing or
// production serialization supplies the expected record.
Record encode(const BattleBackground *layer,
              const BattleBackgroundPalette &palette,
              const BattleBackgroundLayerMetadata &metadata) {
  Record r{};
  r[0] = metadata.target_layer;
  r[2] = metadata.freeze_palette_scrolling;
  word(r, 76, metadata.palette_base ? 0x200 + *metadata.palette_base * 2 : 0);
  for (unsigned i = 0; i < 16; ++i) {
    word(r, 12 + i * 2,
         packed(palette.base[i]) | ((palette.base_high_bits >> i & 1u) << 15));
    word(r, 44 + i * 2,
         packed(palette.backup[i]) |
             ((palette.backup_high_bits >> i & 1u) << 15));
  }
  if (!layer)
    return r;
  const auto &d = layer->definition();
  const auto &s = layer->state();
  r[1] = std::uint8_t(d.bitdepth);
  r[3] = std::uint8_t(d.palette_style);
  r[4] = std::uint8_t(d.first1);
  r[5] = std::uint8_t(d.last1);
  r[6] = std::uint8_t(d.first2);
  r[7] = std::uint8_t(d.last2);
  r[8] = std::uint8_t(s.palette_step1);
  r[9] = std::uint8_t(s.palette_step2);
  r[10] = std::uint8_t(d.palette_delay);
  r[11] = std::uint8_t(s.palette_remaining);
  for (unsigned i = 0; i < 4; ++i) {
    r[78 + i] = std::uint8_t(d.scrolling[i]);
    r[97 + i] = std::uint8_t(d.distortions[i]);
  }
  r[82] = std::uint8_t(s.scroll_index);
  word(r, 83, s.scroll.duration);
  word(r, 85, s.horizontal_position);
  word(r, 87, s.vertical_position);
  word(r, 89, s.scroll.horizontal_velocity);
  word(r, 91, s.scroll.vertical_velocity);
  word(r, 93, s.scroll.horizontal_acceleration);
  word(r, 95, s.scroll.vertical_acceleration);
  r[101] = std::uint8_t(s.distortion_index);
  word(r, 102, s.distortion.duration);
  r[104] = s.distortion.style;
  word(r, 105, s.distortion.frequency);
  word(r, 107, s.distortion.amplitude);
  r[109] = s.distortion.speed;
  word(r, 110, s.distortion.compression);
  word(r, 112, s.distortion.frequency_acceleration);
  word(r, 114, s.distortion.amplitude_acceleration);
  r[116] = s.distortion.speed_acceleration;
  word(r, 117, s.distortion.compression_acceleration);
  return r;
}
struct Shared {
  const eb::GameAssets &assets;
  std::shared_ptr<const PsiResources> psi;
  std::shared_ptr<const EnemyResources> enemies;
  BattleBackgroundScenes backgrounds;
  BattleCombatants combatants;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::WindowResources> windows;
  std::shared_ptr<const party::MeterWindowResources> meters;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  WorldMap map;
  WorldPalettes world_colors;
  std::vector<std::uint8_t> flags = std::vector<std::uint8_t>(1024);
  WorldSwirlData swirl;
  WorldEncounterEffectData encounter;
  WorldLayerConfigurations layers;
  explicit Shared(const eb::GameAssets &a)
      : assets(a), psi(PsiResources::import(a.image, a.version)),
        enemies(EnemyResources::import(a.image, a.version)),
        backgrounds(a.image, a.version), combatants(a.image, a.version),
        fonts(dialogue::FontResources::import(a.image, a.version)),
        windows(dialogue::WindowResources::import(a.image, a.version)),
        meters(party::MeterWindowResources::import(a.image, a.version)),
        sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(import_action_scripts(a.image, a.version)),
        map(a.image, world_map_layout(a.version)),
        world_colors(a.image, world_palette_layout(a.version)),
        swirl(import_world_swirl_data(a.image)),
        encounter(import_world_encounter_effect_data(a.image, a.version)),
        layers(a.image, a.version) {}
};
struct Pair {
  Shared &shared;
  Source source;
  BattleBackgroundScene background;
  BackgroundDisplayState video;
  PaletteBankState colors;
  PsiScratch scratch;
  PsiDisplayState display;
  FrameDisplay frames;
  WorldDisplayFade fade;
  story::TickState clock;
  FrameState frame;
  WorldSwirlState swirl;
  WorldEncounterVisualState visual;
  WorldLayerSelection selection{1};
  BackgroundLoader loader;
  explicit Pair(Shared &s, unsigned seed = 1)
      : shared(s), source(s.assets),
        background(s.backgrounds.prepare(BattleBackgroundPair{0, 0, 4})),
        frames(display),
        loader(s.backgrounds, background, video, colors, scratch, display,
               frames, fade, clock, frame, swirl, visual, s.layers, selection) {
    // Explicit incoming caller state. LOAD must independently produce all later
    // values; no source output is copied into the native loader result.
    video = {0x19, {0x58, 0x5c, 0x7c, 0x0c}, {0x10, 0x63}};
    source.bus->work_ram[0xf] = video.mode;
    source.bus->write_byte(0x2105, video.mode);
    for (unsigned i = 0; i < 4; ++i) {
      source.bus->work_ram[0x11 + i] = video.maps[i];
      source.bus->write_byte(0x2107 + i, video.maps[i]);
      display.staged_scroll[i] = {std::uint16_t(17 + i * 13),
                                  std::uint16_t(65529 + i)};
      source.put(0x31 + i * 4, display.staged_scroll[i].x);
      source.put(0x33 + i * 4, display.staged_scroll[i].y);
    }
    for (unsigned i = 0; i < 2; ++i) {
      source.bus->work_ram[0x15 + i] = video.graphics[i];
      source.bus->write_byte(0x210b + i, video.graphics[i]);
    }
    for (unsigned i = 0; i < 65536; ++i) {
      scratch.bytes[i] = std::uint8_t(i * 19 + (i >> 8) + seed * 7);
      source.bus->work_ram[0x10000 + i] = scratch.bytes[i];
      const auto value = std::uint8_t(i * 29 + (i >> 7) + seed * 11);
      display.set_vram_byte(std::uint16_t(i), value);
      source.bus->video_ram[i] = value;
    }
    for (unsigned i = 0; i < 256; ++i) {
      const auto value = std::uint16_t(0x8451u + i * 127u + seed * 3u);
      colors.staged_palette(i / 16)[i % 16] = value;
      source.put(0x200 + i * 2, value);
      const auto displayed = std::uint16_t((value ^ 0x2379) & 0x7fff);
      colors.displayed[i / 16][i % 16] = displayed;
      source.bus->palette_ram[i * 2] = std::uint8_t(displayed);
      source.bus->palette_ram[i * 2 + 1] = std::uint8_t(displayed >> 8);
    }
    clock.frame_counter = std::uint8_t(seed & 1);
    source.bus->work_ram[2] = clock.frame_counter;
    frames.hdma_enable = 0x7f;
    source.bus->work_ram[0x1f] = frames.hdma_enable;
    swirl.update_in = 13;
    swirl.hdma_channel_offset = std::uint8_t(seed & 1);
    source.bus->work_ram[source.p.swirl] = swirl.update_in;
    source.bus->work_ram[source.p.swirl + 7] = swirl.hdma_channel_offset;
    source.put(source.p.effects, selection.value);
    source.call(source.jp ? 0xc0afac : 0xc0afcd, selection.value);
    apply_world_layer_configuration(s.layers, selection, visual);
    background.reflect(3);
    background.green_background(5);
    background.quake(7, 9);
    background.shake(11);
    background.wobble(13);
    background.wait(15);
    background.flash_red(17);
    background.flash_green(19);
    source.put(source.p.effects + 2, 7);
    source.put(source.p.effects + 4, 9);
    source.put(source.p.effects + 6, 15);
    source.put(source.p.effects + 8, 13);
    source.put(source.p.effects + 10, 11);
    source.put(source.p.effects + 20, 19);
    source.put(source.p.effects + 22, 17);
    source.put(source.p.effects + 30, 3);
    source.put(source.p.effects + 32, 5);
    source.disable_nmi();
  }
  void compare(const std::string &where) {
    const auto vr = display.vram();
    for (unsigned i = 0; i < 65536; ++i) {
      ++counts.vram_bytes;
      ++counts.scratch_bytes;
      if (source.bus->video_ram[i] != vr[i])
        throw std::runtime_error(
            where + " VRAM " + std::to_string(i) +
            " original=" + std::to_string(source.bus->video_ram[i]) +
            " native=" + std::to_string(vr[i]));
      if (source.bus->work_ram[0x10000 + i] != scratch.bytes[i])
        throw std::runtime_error(
            where + " scratch " + std::to_string(i) +
            " original=" + std::to_string(source.bus->work_ram[0x10000 + i]) +
            " native=" + std::to_string(scratch.bytes[i]));
    }
    const auto retained = background.retained_secondary_background();
    for (unsigned ordinal = 0; ordinal < 2; ++ordinal) {
      const auto *layer = ordinal == 0             ? &background.primary()
                          : background.secondary() ? &*background.secondary()
                          : retained               ? &*retained
                                                   : nullptr;
      const auto palette = ordinal == 0
                               ? background.primary().palette_state()
                               : background.retained_secondary_palette();
      const auto encoded =
          encode(layer, palette, background.layer_metadata(ordinal));
      for (unsigned i = 0; i < encoded.size(); ++i) {
        ++counts.record_bytes;
        if (source.bus->work_ram[source.p.record + ordinal * 119 + i] !=
            encoded[i])
          throw std::runtime_error(
              where + " loaded record " + std::to_string(ordinal) + " byte " +
              std::to_string(i) + " original=" +
              std::to_string(
                  source.bus->work_ram[source.p.record + ordinal * 119 + i]) +
              " native=" + std::to_string(encoded[i]));
      }
    }
    for (unsigned i = 0; i < 256; ++i) {
      check_equal(source.word(0x200 + i * 2),
                  colors.staged_palette(i / 16)[i % 16],
                  where + " staged palette");
      check_equal(source.bus->palette_ram[i * 2] |
                      unsigned(source.bus->palette_ram[i * 2 + 1]) << 8,
                  colors.displayed_palette(i / 16)[i % 16],
                  where + " displayed palette");
    }
    check_equal(source.bus->work_ram[0x30], colors.upload_mode,
                where + " palette intent");
    check_equal(source.bus->work_ram[0xf], video.mode, where + " mode");
    for (unsigned i = 0; i < 4; ++i) {
      check_equal(source.bus->work_ram[0x11 + i], video.maps[i],
                  where + " map base");
      check_equal(source.word(0x31 + i * 4), display.staged_scroll[i].x,
                  where + " scroll X");
      check_equal(source.word(0x33 + i * 4), display.staged_scroll[i].y,
                  where + " scroll Y");
    }
    for (unsigned i = 0; i < 2; ++i)
      check_equal(source.bus->work_ram[0x15 + i], video.graphics[i],
                  where + " graphics base");
    check_equal(source.bus->work_ram[0x1f], frames.hdma_enable,
                where + " HDMA mirror");
    check_equal(source.bus->work_ram[source.p.swirl], swirl.update_in,
                where + " swirl countdown");
    check_equal(source.fixed_color, packed(visual.fixed_color),
                where + " fixed color");
    check_equal(source.word(source.p.effects), selection.value,
                where + " selected layer");
    check_equal(source.word(source.p.effects + 34),
                background.alternate_distortion(), where + " alternate gate");
    const auto &e = background.effects();
    for (const auto [offset, value] :
         std::array<std::pair<unsigned, unsigned>, 17>{
             {{2, e.vertical_duration},
              {4, e.vertical_hold},
              {6, e.minimum_wait},
              {8, e.wobble_duration},
              {10, e.shake_duration},
              {12, e.horizontal_offset},
              {14, e.vertical_offset},
              {20, e.green_duration},
              {22, e.red_duration},
              {30, e.reflect_duration},
              {32, e.green_background_duration},
              {40, e.top_end},
              {42, e.bottom_start},
              {44, e.opening_letterbox},
              {66, e.opening_top},
              {68, e.opening_bottom},
              {72, e.brightness}}})
      check_equal(source.word(source.p.effects + offset), value,
                  where + " effect offset " + std::to_string(offset));
    check_equal(source.word(source.p.effects + 70), e.darkening,
                where + " darkening");
    check_equal(source.word(source.p.effects + 40), frames.letterbox.top_end,
                where + " retained letterbox top");
    check_equal(source.word(source.p.effects + 42),
                frames.letterbox.bottom_start,
                where + " retained letterbox bottom");
    check_equal(source.word(source.p.effects + 36), frames.letterbox.visible,
                where + " letterbox visible policy");
    check_equal(source.word(source.p.effects + 38), frames.letterbox.nonvisible,
                where + " letterbox outside policy");
    check_equal(source.word(0x99), display.pending_bytes(),
                where + " pending bytes");
    check_equal(source.bus->work_ram[0], display.producer_index(),
                where + " queue producer");
    check_equal(source.bus->work_ram[1], display.consumer_index(),
                where + " queue consumer");
  }
  void load(BattleBackgroundPair pair, unsigned group = 0,
            bool catalog = false) {
    source.put(source.p.group, group);
    const auto polls = source.polls, nmis = source.nmis;
    source.call(source.p.load, pair.primary, pair.secondary, pair.style);
    if (catalog)
      loader.load(group);
    else
      loader.load(pair, group == 478 ? BattleArtworkPublication::GiygasPrayer
                                     : BattleArtworkPublication::Ordinary);
    require(source.polls == polls && source.nmis == nmis,
            "Forcedblank loader invented input or interrupt work");
    ++counts.loaders;
    compare("LOAD group=" + std::to_string(group) +
            " pair=" + std::to_string(pair.primary) + "," +
            std::to_string(pair.secondary) + "," + std::to_string(pair.style));
  }
};
// The first-frame cases enter with an explicit empty roster and cold UI. They
// own neither admission nor the full main battle routine's party/music work.
struct Rig {
  Shared &shared;
  Pair p;
  PaletteEffectState effect_state;
  PaletteEffects effects;
  PsiAnimationState psi_state;
  PsiAnimation animation;
  Roster roster;
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  party::State party;
  party::MeterWindows meters;
  story::RandomState random{1, 2};
  story::InputState input;
  ActorWorld actors;
  WorldMapArea area;
  AreaPalettes area_colors;
  BattleCombatantScene objects;
  ScenePalette world_colors;
  WorldScenePresentation world;
  Frame frame;
  story::Scene scene;
  story::BattlePublication battle;
  DisplaySetup blank;
  explicit Rig(Shared &s)
      : shared(s), p(s), effects(p.colors, effect_state),
        animation(psi_state, p.scratch, p.display, effects, p.background),
        roster(s.enemies), output(s.fonts, text),
        windows(s.windows, text, output), party(s.assets.version),
        meters(windows, party, s.meters),
        actors(s.sprites, s.scripts, s.assets.version),
        area(s.map.prepare(0, s.flags)),
        area_colors(s.world_colors.resolve({0, 0}, s.flags)),
        objects(s.combatants.prepare(176)),
        world(world_colors, p.visual, s.layers, p.selection),
        frame(p.frame, p.background, roster, objects, animation, effects,
              p.colors, p.display, p.frames, p.fade, p.clock, windows, party,
              meters, s.swirl, s.encounter, p.swirl, p.visual, s.layers,
              p.selection),
        scene(windows, party, random, meters, p.clock, input, actors, area,
              area_colors),
        battle(p.colors, p.scratch, p.display, p.background, objects, windows,
               p.visual, p.fade,
               story::BattlePublication::WindowBinding::Deferred),
        blank(s.assets.version, p.fade, p.frames, p.clock, p.visual, scene) {
    world.bind_display_fade(p.fade);
    world.bind_frame_display(p.frames);
    windows.bind_palette_publication(world);
    scene.bind_publication(world);
    battle.bind_frame_display(p.frames);
    p.frames.hdma_enable = p.source.bus->work_ram[0x1f] = 0;
    p.source.call(0xc08522); // Complete original IRQ callback initialization.
    // Cold physical VRAM and no caller effects are incoming conditions, set
    // before either loader. Neither is copied from the other's loaded output.
    for (unsigned i = 0; i < 65536; ++i) {
      p.display.set_vram_byte(std::uint16_t(i), 0);
      p.source.bus->video_ram[i] = 0;
    }
    p.background.reflect(0);
    p.background.green_background(0);
    p.background.quake(0, 0);
    p.background.shake(0);
    p.background.wobble(0);
    p.background.wait(0);
    p.background.flash_red(0);
    p.background.flash_green(0);
    for (unsigned offset : {2u, 4u, 6u, 8u, 10u, 20u, 22u, 30u, 32u})
      p.source.put(p.source.p.effects + offset, 0);
    // This original-only prior helper supplies the documented hardware entry
    // layout. Native entry fields are specified independently from its source
    // contract; it is not counted as a native enemy-loader implementation.
    p.source.call(p.source.jp ? 0xc2c882 : 0xc2c8c8);
    p.video.mode = 0x19;
    p.video.maps = {0x58, 0x5c, 0x7c, 0x0c};
    p.video.graphics = {0x10, 0x66};
    for (unsigned i = 0; i < 3; ++i)
      p.display.staged_scroll[i] = {};
    p.scratch.bytes[0x8000] = 0;
    p.source.bus->set_buttons(0);
    p.source.put(p.source.jp ? 0x993b : 0x9643, 1);
    windows.prompt_state().battle_mode = 1;
  }
  void publication() {
    const auto polls = p.clock.input_polls;
    auto op = scene.begin_publication();
    require(op->advance() == dialogue::Progress::Suspended &&
                op->service() == story::SceneService::Publication,
            "Publication helper did not expose the real NMI boundary");
    op->complete_publication();
    require(op->advance() == dialogue::Progress::Finished && op->complete(),
            "Actual publication operation did not finish");
    require(p.clock.input_polls == polls, "Publication polled input");
    ++counts.publications;
  }
  void compare_boundary(const std::string &where) {
    check_equal(p.source.bus->work_ram[2], p.clock.frame_counter,
                where + " frame byte");
    check_equal(p.source.bus->work_ram[0x2b], p.clock.new_frame_started,
                where + " pending byte");
    check_equal(p.source.bus->work_ram[0xd], p.fade.state().brightness,
                where + " brightness");
    check_equal(p.source.bus->work_ram[0x28], p.fade.state().step,
                where + " fade step");
    check_equal(p.source.bus->work_ram[0x29], p.fade.state().delay,
                where + " fade delay");
    check_equal(p.source.bus->work_ram[0x2a], p.fade.state().remaining,
                where + " fade remaining");
    check_equal(p.source.bus->work_ram[0x1f], p.frames.hdma_enable,
                where + " HDMA mirror");
  }
  void blank_helper(DisplayBlankKind kind) {
    const auto source_polls = p.source.polls, source_nmis = p.source.nmis;
    const auto native_polls = p.clock.input_polls;
    // Enter before visible scanline work, so enabling does not first deliver
    // an unrelated already-latched vblank before this helper's fresh wait.
    do {
      p.source.bus->advance_cpu_cycles(100);
    } while (p.source.bus->scanline_index() != 0);
    p.source.call(p.source.p.enable);
    p.source.call(kind == DisplayBlankKind::Reset ? p.source.p.blank_reset
                                                  : p.source.p.blank_retain);
    p.source.disable_nmi();
    blank.begin(kind);
    publication();
    blank.finish();
    require(!blank.pending() && p.source.polls == source_polls &&
                p.clock.input_polls == native_polls,
            "Blank helper consumed an input poll");
    check_equal(p.source.nmis - source_nmis, 1,
                "Blank helper actual NMI count");
    compare_boundary("Blank helper");
    ++counts.blanks;
  }
  void caller() {
    const auto polls = p.source.polls, nmis = p.source.nmis;
    const auto native_polls = p.clock.input_polls,
               publications = p.clock.publications;
    // Preserve a pending NMI from C08744: the first WAIT consumes it. A real
    // scanline entry with NMI disabled keeps incidental CPU time distinct from
    // authored wait requirements.
    do {
      p.source.bus->advance_cpu_cycles(100);
    } while (p.source.bus->scanline_index() != 0);
    p.source.call(p.source.p.enable);
    p.source.call(p.source.p.caller);
    p.source.disable_nmi();
    auto op = scene.begin_battle_frame();
    unsigned services = 0;
    while (op->advance() != dialogue::Progress::Finished) {
      require(++services < 8, "First C43568 did not finish bounded services");
      if (op->service() == story::SceneService::Frame)
        op->complete_frame({0, 0});
      else if (op->service() == story::SceneService::Publication)
        op->complete_publication();
      else
        throw std::runtime_error("First C43568 requested an unowned service");
    }
    require(op->complete(), "First C43568 operation incomplete");
    check_equal(p.source.polls - polls, 1, "First caller original input count");
    check_equal(unsigned(p.clock.input_polls - native_polls), 1,
                "First caller native input count");
    check_equal(p.source.nmis - nmis,
                unsigned(p.clock.publications - publications),
                "First caller scheduled publications");
    p.compare("First C43568");
    compare_boundary("First C43568");
    for (unsigned pad = 0; pad < 2; ++pad) {
      check_equal(p.source.word(0x65 + pad * 2), input.state[pad],
                  "Input state");
      check_equal(p.source.word(0x69 + pad * 2), input.held[pad], "Held input");
      check_equal(p.source.word(0x6d + pad * 2), input.pressed[pad],
                  "Pressed input");
      check_equal(p.source.word(0x71 + pad * 2), input.repeat_timer[pad],
                  "Input repeat");
    }
    ++counts.callers;
  }
  void publish_visible() {
    // C08744 is a complete actual publication wait, without an input poll.
    // Retaining forced blank here would erase fade-in; use the NMI-enabled
    // WAIT helper and its exact matching Scene Frame operation instead.
    const auto before = p.source.nmis;
    require(p.source.bus->work_ram[0x2b] == 0 && p.clock.new_frame_started == 0,
            "Prior caller/WAIT retained a pending frame before the next wait");
    p.source.call(p.source.p.enable);
    p.source.call(p.source.p.wait);
    p.source.disable_nmi();
    auto op = scene.begin(story::TickKind::Frame);
    require(op->advance() == dialogue::Progress::Suspended &&
                op->service() == story::SceneService::Frame,
            "Visible publication did not require actual WAIT");
    op->complete_frame({0, 0});
    require(op->advance() == dialogue::Progress::Finished && op->complete(),
            "Visible WAIT did not finish");
    check_equal(p.source.nmis - before, 1, "Visible wait NMI");
    ++counts.publications;
    compare_boundary("Visible WAIT");
  }
};
void blank_cases(Shared &shared) {
  for (auto kind : {DisplayBlankKind::Reset, DisplayBlankKind::Retain}) {
    for (bool fade : {false, true}) {
      Rig r(shared);
      if (fade) {
        r.p.source.call(r.p.source.jp ? 0xc0885e : 0xc0886c, 5, 0);
        r.p.fade.begin_in(5, 0);
      }
      r.blank_helper(kind);
    }
  }
}
void startup_case(Shared &shared, BattleBackgroundPair pair) {
  Rig r(shared);
  r.blank_helper(DisplayBlankKind::Reset);
  const auto retained = r.scene.frame();
  require(bool(retained), "World publication did not retain a frame");
  const auto retained_pixels = eb::rasterize_direct_scene({retained, {}});
  r.p.load(pair);
  const auto prior_clock = r.p.clock.publications;
  r.scene.handoff_publication(r.world, r.battle, r.p.fade, {&r.frame, nullptr});
  require(r.scene.publication() == &r.battle && r.scene.frame() == retained &&
              r.p.clock.publications == prior_clock,
          "Handoff captured or clocked a new frame");
  // Preserve the actual main caller's relative publication/fade order. The
  // roster/admission, UI, audio and dialogue between these calls are outside
  // this bounded empty-roster handoff entry contract.
  r.p.colors.upload_mode = r.p.source.bus->work_ram[0x30] = 24;
  r.blank_helper(DisplayBlankKind::Retain);
  r.p.source.call(r.p.source.jp ? 0xc0885e : 0xc0886c, 1, 1);
  r.p.fade.begin_in(1, 1);
  r.caller();
  for (unsigned i = 0; i < 30; ++i)
    r.publish_visible();
  r.p.compare("Loaded first-frame publication");
  const auto original = r.p.source.pixels();
  const auto native = eb::rasterize_direct_scene({r.scene.frame(), {}});
  require(original.size() == native.size(),
          "Startup images have different size");
  unsigned visible = 0;
  for (unsigned i = 0; i < original.size(); ++i) {
    ++counts.pixels;
    visible += original[i] != 0xff000000;
    require(original[i] == native[i],
            "Startup PPU pixel=" + std::to_string(i) +
                " original=" + std::to_string(original[i]) +
                " native=" + std::to_string(native[i]));
  }
  require(visible != 0, "Startup PPU comparison is vacuously black");
  counts.nonblack += visible;
  require(eb::rasterize_direct_scene({retained, {}}) == retained_pixels,
          "Incoming world frame changed across battle handoff");
  counts.immutable_pixels += retained_pixels.size();
  ++counts.handoffs;
}

void run(const eb::GameAssets &assets) {
  counts = {};
  Shared shared(assets);
  for (unsigned group = 0; group < shared.backgrounds.size(); ++group) {
    const auto pair = shared.backgrounds.selection(group);
    const auto publication = group == 478
                                 ? BattleArtworkPublication::GiygasPrayer
                                 : BattleArtworkPublication::Ordinary;
    if (shared.backgrounds.artwork_dependency(pair, publication)) {
      ++counts.dependencies;
      continue;
    }
    Pair p(shared, group + 1);
    p.load(pair, group, true);
    ++counts.catalog;
  }
  for (unsigned parity = 0; parity < 2; ++parity) {
    Pair p(shared, parity);
    p.load({0, 45, 4});
    p.load({0, 0, 4});
    ++counts.warm;
  }
  {
    Pair p(shared);
    p.load({0, 45, 4});
    // Explicit incoming raw retained-state domain, not an authored writer:
    // the imported ordinary catalog does not yield a nonzero high byte here.
    // Both owners receive the same declared initial high bytes, and all other
    // independently compared loaded fields remain unchanged before the body.
    BattleBackgroundStart entry;
    entry.primary_compression_acceleration_high = 0xa5;
    entry.secondary_compression_acceleration_high = 0x96;
    entry.reflect_duration = p.background.effects().reflect_duration;
    entry.green_background_duration =
        p.background.effects().green_background_duration;
    p.background = shared.backgrounds.prepare({0, 45, 4}, entry);
    p.source.bus->work_ram[p.source.p.record + 118] = 0xa5;
    p.source.bus->work_ram[p.source.p.record + 119 + 118] = 0x96;
    p.compare("Explicit retained-byte entry");
    p.load({0, 45, 4});
    check_equal(p.source.bus->work_ram[p.source.p.record + 118], 0xa5,
                "Primary MEMSET16 retained high byte");
    check_equal(p.source.bus->work_ram[p.source.p.record + 119 + 118], 0x96,
                "Secondary MEMSET16 retained high byte");
    counts.residue += 2;
  }
  blank_cases(shared);
  for (auto pair :
       {BattleBackgroundPair{0, 45, 4}, BattleBackgroundPair{1, 0, 4}})
    startup_case(shared, pair);
  require(counts.catalog + counts.dependencies == 484 && counts.catalog &&
              counts.warm == 2 && counts.blanks == 8 && counts.handoffs == 2 &&
              counts.callers == 2 && counts.residue == 2 && counts.nonblack &&
              counts.immutable_pixels,
          "Required loader coverage missing");
  std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP")
            << ": complete_loaders=" << counts.loaders
            << " catalog=" << counts.catalog
            << " artwork_frontiers=" << counts.dependencies
            << " warm=" << counts.warm << " vram_bytes=" << counts.vram_bytes
            << " scratch_bytes=" << counts.scratch_bytes
            << " loaded_record_bytes=" << counts.record_bytes
            << " words=" << counts.words << " input_polls=" << counts.polls
            << " source_NMI=" << counts.nmis
            << " retained_byte_witnesses=" << counts.residue
            << " blank_helpers=" << counts.blanks
            << " handoffs=" << counts.handoffs
            << " first_callers=" << counts.callers
            << " publications=" << counts.publications
            << " pixels=" << counts.pixels << " nonblack=" << counts.nonblack
            << " immutable_pixels=" << counts.immutable_pixels
            << " instructions=" << counts.instructions << '\n';
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2) {
    std::cerr << "Original assets required; skipped.\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    std::cout << "Complete forcedblank loader, blank-helper and first-frame "
                 "handoff reference passed.\n";
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
