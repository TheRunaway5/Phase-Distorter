// Original regional effect/ellipse execution is an oracle only. Row transport
// uses the actual configured HDMA tables after the routine has returned; this
// fixture proves complete settled pictures, not mid-scanline execution timing.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/scene_read_view.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
std::uint64_t checks{}, calls{}, instructions{}, pictures{};
std::string context;
void check(bool value, const std::string &message) {
  ++checks;
  if (!value) throw std::runtime_error(message + ": " + context);
}
struct NoRestoration final : WorldEncounterRestoration {
  ScenePalette &colors; WorldEncounterVisualState &visual;
  NoRestoration(ScenePalette &c, WorldEncounterVisualState &v) : colors(c), visual(v) {}
  bool uses(const ScenePalette &c, const WorldEncounterVisualState &v) const noexcept override {
    return &c == &colors && &v == &visual;
  }
  void restore_battle_palettes() override {
    throw std::logic_error("This no-restore fixture cannot acknowledge battle palettes");
  }
  void restore_selected_layer_configuration() override {
    throw std::logic_error("This no-restore fixture cannot acknowledge scene configuration");
  }
};
struct Oracle {
  bool jp;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned swirl, repeat, oval, buffer, oval_content;
  explicit Oracle(const eb::GameAssets &a)
      : jp(a.version == eb::GameVersion::JP),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus),
        swirl(jp ? 0xb097 : 0xaec2), repeat(jp ? 0xb0b9 : 0xaee4),
        oval(jp ? 0xb0a5 : 0xaed0), buffer(jp ? 0x4356 : 0x3fd0),
        oval_content(jp ? 0xc47a37 : 0xc4a5ce) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->write_byte(0x2100, 0x80);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8;
  }
  unsigned get(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void call(unsigned entry, unsigned a = 0, unsigned x = 0, unsigned y = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a; cpu.x_index = x; cpu.y_index = y;
    cpu.execute_instruction<0x22>(entry, 4);
    for (unsigned i = 0; i < 4000000; ++i) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
        ++calls; return;
      }
      cpu.step_instruction(); ++instructions;
    }
    throw std::runtime_error("Original effect did not return: " + context + " " + cpu.describe_registers());
  }
  void same(const WorldSwirlState &s) {
    const auto &b = bus->work_ram;
    check(b[swirl] == s.update_in && b[swirl + 1] == s.interval &&
              b[swirl + 2] == s.frames_left && b[swirl + 3] == s.frame,
          "Effect counters differ");
    check(b[swirl + 8] == s.padding && b[swirl + 9] == s.restore_after,
          "Effect padding/restore differs");
    check(b[repeat] == s.next && b[repeat + 1] == s.repeat_speed &&
              b[repeat + 2] == s.repeats_until_speedup,
          "Effect repeat counters differ");
    const auto pointer = get(swirl + 10) | get(swirl + 12) << 16;
    check(bool(pointer) == s.oval, "Oval enabled state differs");
    if (s.oval) check(pointer == oval_content + s.oval_state.next_step * 22,
                      "Oval step cursor differs");
    const auto &o = s.oval_state;
    const std::array<unsigned, 10> words{o.center_x, o.center_y, o.width, o.height,
        o.center_dx, o.center_dy, o.velocity_x, o.velocity_y,
        o.acceleration_x, o.acceleration_y};
    for (unsigned i = 0; i < words.size(); ++i)
      check(get(oval + i * 2) == words[i], "Oval retained arithmetic differs");
  }
  void seed(const WorldSwirlState &s) {
    auto &b = bus->work_ram;
    b[swirl] = s.update_in; b[swirl + 1] = s.interval;
    b[swirl + 2] = s.frames_left; b[swirl + 3] = s.frame;
    b[swirl + 4] = s.invert; b[swirl + 5] = s.reverse;
    b[swirl + 6] = 0;
    for (unsigned i = 0; i < 6; ++i) b[swirl + 6] |= unsigned(s.masked_layers[i]) << i;
    b[swirl + 8] = s.padding; b[swirl + 9] = s.restore_after;
    const unsigned pointer = s.oval ? oval_content + s.oval_state.next_step * 22 : 0;
    put(swirl + 10, pointer); put(swirl + 12, pointer >> 16);
    b[repeat] = s.next; b[repeat + 1] = s.repeat_speed;
    b[repeat + 2] = s.repeats_until_speedup;
    const auto &o = s.oval_state;
    const std::array<unsigned,10> words{o.center_x,o.center_y,o.width,o.height,
        o.center_dx,o.center_dy,o.velocity_x,o.velocity_y,o.acceleration_x,o.acceleration_y};
    for (unsigned i = 0; i < words.size(); ++i) put(oval + i * 2, words[i]);
  }
  void next_line() {
    const auto line = bus->scanline_index();
    do {
      const auto remain = 1364 - bus->scanline_clock();
      bus->advance_cpu_cycles(std::max(1u, (remain + 5) / 6));
    } while (bus->scanline_index() == line);
  }
  EncounterWindowMask display() {
    // NMI's publication of the configured enable mask. No table/interval
    // content is substituted; the bus reads the real original ROM/WRAM data.
    bus->write_byte(0x420c, bus->work_ram[0x1f]);
    do { next_line(); } while (bus->scanline_index() != 0);
    EncounterWindowMask rows{};
    for (unsigned row = 0; row < rows.size(); ++row) {
      next_line();
      check(bus->scanline_index() == row + 1, "Unexpected source display row");
      const auto view = bus->scene_read_view();
      for (unsigned i = 0; i < 2; ++i)
        rows[row][i] = {view.ppu_registers[0x26 + i * 2],
                        view.ppu_registers[0x27 + i * 2]};
    }
    next_line();
    bus->write_byte(0x420c, 0);
    ++pictures;
    return rows;
  }
  void nmi() {
    // Real interrupt entry/save/restore, fade reducer and window reset. There
    // is no queued artwork/palette and the callback owner is already busy, so
    // no fabricated callback acknowledgment or patched source is involved.
    put(0x22, 1);
    cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00; cpu.service_interrupt(true);
    for (unsigned step = 0; step < 200000; ++step) {
      if (cpu.program_counter == 0xc0ff00 && cpu.stack_pointer == 0x1fff) { ++calls; return; }
      cpu.step_instruction(); ++instructions;
    }
    throw std::runtime_error("Original NMI did not return: " + cpu.describe_registers());
  }
  void prepare_background(BattleBackgroundPair pair) {
    bus->work_ram[0xd] = 0x80;
    bus->work_ram[0x11] = 0x58; bus->work_ram[0x12] = 0x5c;
    bus->work_ram[0x13] = 0x60; bus->work_ram[0x14] = 0x0c;
    bus->work_ram[0x15] = 0x10; bus->work_ram[0x16] = 0x63;
    call(jp ? 0xc0afac : 0xc0afcd, 1);
    call(jp ? 0xc2d0d5 : 0xc2d121, pair.primary, pair.secondary, pair.style);
  }
};

unsigned packed(PaletteColor color) {
  return color.red | unsigned(color.green) << 5 | unsigned(color.blue) << 10;
}
void palette_restoration(const eb::GameAssets &assets) {
  BattleBackgroundScenes catalog(assets.image, assets.version);
  const WorldLayerConfigurations configurations(assets.image, assets.version);
  const auto definitions = import_world_swirl_data(assets.image);
  const auto effect_data = import_world_encounter_effect_data(assets.image, assets.version);
  std::vector<unsigned> four, two;
  for (unsigned id = 1; id < 327; ++id)
    (assets.image[0xadca3 + id * 17] == 4 ? four : two).push_back(id);
  check(four.size() >= 2 && two.size() >= 2, "Missing background depth examples");
  const std::array<BattleBackgroundPair, 4> pairs{{
      {four[0], 0, 0}, {four[0], four[1], 4},
      {two[0], 0, 0}, {two[0], two[1], 0}}};
  for (const auto pair : pairs) {
    context = assets.title + " actual palette restore pair " +
              std::to_string(pair.primary) + "," + std::to_string(pair.secondary);
    Oracle oracle(assets);
    oracle.prepare_background(pair);
    auto background = catalog.prepare(pair);
    const auto record = oracle.jp ? 0xafa9 : 0xadd4;
    ScenePalette colors;
    colors.fill({13, 17, 23});
    for (unsigned i = 0; i < colors.size(); ++i) oracle.put(0x200 + i * 2, packed(colors[i]));
    // Exercise the actual brightness operation before restoring the retained
    // base, without fabricating clock/phase values inside the native layer.
    background.apply_palette_brightness(0);
    // Call the source's public near brightness wrapper through a real JSR.
    oracle.cpu.emulation_mode = false;
    oracle.cpu.status_register = eb::MainCpu65816::InterruptDisable;
    oracle.cpu.data_bank = 0x7e; oracle.cpu.direct_page = 0x1e00;
    oracle.cpu.stack_pointer = 0x1fff; oracle.cpu.program_counter = 0xc2ff00;
    oracle.cpu.accumulator = 0;
    oracle.cpu.execute_instruction<0x20>(oracle.jp ? 0xdfe3 : 0xe08e, 3);
    for (unsigned i = 0; ; ++i) {
      if (oracle.cpu.program_counter == 0xc2ff03 && oracle.cpu.stack_pointer == 0x1fff) { ++calls; break; }
      if (i == 100000) throw std::runtime_error("Brightness wrapper did not return");
      oracle.cpu.step_instruction(); ++instructions;
    }
    // ScenePalette is the publication owner; the layer's own palette can be
    // altered independently before the explicit restoration publishes it.
    for (unsigned i = 0; i < colors.size(); ++i) oracle.put(0x200 + i * 2, packed(colors[i]));
    const auto first_state = background.primary().state();
    const auto second_state = background.secondary()
                                  ? std::optional(background.secondary()->state()) : std::nullopt;
    const auto old_effects = background.effects();
    oracle.call(oracle.jp ? 0xc2de0b : 0xc2de96);
    background.restore_palette(colors);
    check(background.primary().state() == first_state && background.effects() == old_effects &&
              (!second_state || background.secondary()->state() == *second_state),
          "Restoration advanced battle clocks or effects");
    for (unsigned i = 0; i < colors.size(); ++i)
      check((oracle.get(0x200 + i * 2) & 32767) == packed(colors[i]), "Actual palette publication differs slot=" +
          std::to_string(i) + " source=" + std::to_string(oracle.get(0x200 + i * 2)) +
          " native=" + std::to_string(packed(colors[i])));
    const auto first = background.primary().palette_state();
    const auto second = background.retained_secondary_palette();
    for (unsigned i = 0; i < 16; ++i) {
      check((oracle.get(record + 12 + i * 2) & 32767) == packed(first.base[i]) &&
                (oracle.get(record + 44 + i * 2) & 32767) == packed(first.backup[i]),
            "Actual primary retained palette differs");
      check((oracle.get(record + 119 + 12 + i * 2) & 32767) == packed(second.base[i]) &&
                (oracle.get(record + 119 + 44 + i * 2) & 32767) == packed(second.backup[i]),
            "Actual secondary retained palette differs");
    }
    // Exercise the complete C4A7B0 restoration branch with the real native
    // scene owner, not a callback that merely acknowledges the two services.
    WorldEncounterVisualState visual;
    WorldLayerSelection selection;
    WorldScenePresentation presentation(colors, visual, configurations, selection);
    presentation.bind_battle_background(background);
    WorldSwirlState swirl;
    WorldEncounterEffects effect(definitions, effect_data, swirl, colors, visual, presentation);
    for (unsigned config = 0; config < 10; ++config) {
      selection.value = config;
      oracle.put(oracle.jp ? 0xaf5f : 0xad8a, config);
      swirl.update_in = 1; swirl.restore_after = true;
      oracle.bus->work_ram[oracle.swirl] = 1;
      oracle.bus->work_ram[oracle.swirl + 9] = 1;
      visual.fixed_color = {7, 8, 9};
      oracle.bus->write_byte(0x2132, 0x20 | 7);
      oracle.bus->write_byte(0x2132, 0x40 | 8);
      oracle.bus->write_byte(0x2132, 0x80 | 9);
      oracle.call(oracle.jp ? 0xc47c19 : 0xc4a7b0);
      effect.advance();
      check(!swirl.update_in && visual.fixed_color == PaletteColor{},
            "Complete native restore left the clock or fixed color active");
      const auto view = oracle.bus->scene_read_view();
      unsigned main = 0, sub = 0, math = 0;
      for (unsigned i = 0; i < 5; ++i) {
        main |= unsigned(visual.visible_layers[i]) << i;
        sub |= unsigned(visual.subscreen_layers[i]) << i;
      }
      for (unsigned i = 0; i < 6; ++i) math |= unsigned(visual.color_math_layers[i]) << i;
      check(oracle.bus->work_ram[0x1a] == main && oracle.bus->work_ram[0x1b] == sub,
            "Complete effect restored different main/subscreen layers");
      check(view.ppu_registers[0x30] == (unsigned(visual.clip_colors) << 6 |
                unsigned(visual.prevent_math) << 4 | unsigned(visual.use_subscreen) << 1) &&
                view.ppu_registers[0x31] == (math | unsigned(visual.subtract) << 7 |
                unsigned(visual.half_intensity) << 6) && view.fixed_color == 0,
            "Complete effect restored different color math");
      check(view.ppu_registers[0x23] == 0 && view.ppu_registers[0x24] == 0 &&
                view.ppu_registers[0x25] == 0 && visual.window_layers == std::array<bool,6>{},
            "Complete effect retained an enabled window mask");
      for (unsigned i = 0; i < colors.size(); ++i)
        check((oracle.get(0x200 + i * 2) & 32767) == packed(colors[i]),
              "Complete effect restore omitted a published palette color");
    }
    if (pair.secondary) {
      BattleBackgroundStart start;
      start.retained_secondary_palette = background.retained_secondary_palette();
      const BattleBackgroundPair inactive{pair.primary, 0, pair.style};
      oracle.prepare_background(inactive);
      auto next = catalog.prepare(inactive, start);
      check(next.retained_secondary_palette() == start.retained_secondary_palette,
            "Inactive loader discarded the preceding native palette owner");
      colors.fill({9, 1, 5});
      for (unsigned i = 0; i < colors.size(); ++i) oracle.put(0x200 + i * 2, packed(colors[i]));
      oracle.call(oracle.jp ? 0xc2de0b : 0xc2de96);
      next.restore_palette(colors);
      for (unsigned i = 0; i < colors.size(); ++i)
        check((oracle.get(0x200 + i * 2) & 32767) == packed(colors[i]), "Inactive secondary changed published slots");
      const auto retained = next.retained_secondary_palette();
      for (unsigned i = 0; i < 16; ++i)
        check((oracle.get(record + 119 + 12 + i * 2) & 32767) == packed(retained.base[i]),
              "Inactive secondary base was not restored");
    }
  }
  context = assets.title + " actual shared-artwork palette dependency";
  const BattleBackgroundPair shared{four[0], four[1], 0};
  Oracle oracle(assets);
  oracle.prepare_background(shared);
  auto background = catalog.prepare(shared);
  check(background.retained_secondary_palette() == BattleBackgroundPalette{},
        "Distortion-only loader invented a secondary palette");
  check(oracle.get((oracle.jp ? 0xafa9 : 0xadd4) + 119 + 76) == 0,
        "Shared-artwork source did not retain its unset publication destination");
  for (unsigned i = 0; i < 32; ++i) oracle.bus->work_ram[i] = i + 1;
  oracle.call(oracle.jp ? 0xc2de0b : 0xc2de96);
  for (unsigned i = 0; i < 32; ++i)
    check(oracle.bus->work_ram[i] == 0, "Source shared-artwork publication did not reset low scene state");
  ScenePalette colors; colors.fill({4, 5, 6});
  const auto old = colors;
  bool rejected = false;
  try { background.restore_palette(colors); }
  catch (const BattlePaletteRestorationRequired &e) {
    rejected = e.dependency == BattlePaletteDependency::ResetSceneAndFrameState;
  }
  check(rejected && colors == old, "Unowned scene/frame reset was fabricated as a palette restoration");
}

void ellipse(const eb::GameAssets &assets, const WorldEncounterEffectData &data) {
  Oracle oracle(assets);
  for (unsigned x : {0xff80u, 0u, 128u, 255u, 384u})
    for (unsigned y : {0xffc0u, 0u, 1u, 111u, 112u, 223u, 224u, 288u})
      for (unsigned rx : {0u, 1u, 127u, 255u})
        for (unsigned ry : {0u, 1u, 31u, 112u, 127u, 224u, 255u}) {
          context = assets.title + " ellipse " + std::to_string(x) + "," +
                    std::to_string(y) + " radius " + std::to_string(rx) + "," + std::to_string(ry);
          for (unsigned i = 0; i < 224; ++i) oracle.put(oracle.buffer + i * 2, 0x1234);
          oracle.put(0x1e0e, ry);
          oracle.call(oracle.jp ? 0xc0b128 : 0xc0b149, x, y, rx);
          const auto rows = encounter_ellipse(data.ellipse_profile, x, y, rx, ry);
          for (unsigned i = 0; i < rows.size(); ++i)
            check(oracle.get(oracle.buffer + i * 2) ==
                      (rows[i].left | unsigned(rows[i].right) << 8),
                  "Ellipse row " + std::to_string(i) + " differs");
        }
}

void boundaries(const eb::GameAssets &assets, const WorldSwirlData &definitions,
                const WorldEncounterEffectData &data) {
  const auto one = [&](WorldSwirlState initial, bool publish) {
    Oracle oracle(assets);
    WorldSwirlState swirl = initial;
    ScenePalette colors{};
    WorldEncounterVisualState visual;
    visual.window_left = {17, 73}; visual.window_right = {181, 211};
    for (unsigned i = 0; i < 2; ++i) {
      oracle.bus->write_byte(0x2126 + i * 2, visual.window_left[i]);
      oracle.bus->write_byte(0x2127 + i * 2, visual.window_right[i]);
    }
    NoRestoration restoration(colors, visual);
    WorldEncounterEffects effects(definitions, data, swirl, colors, visual, restoration);
    oracle.seed(swirl);
    oracle.call(oracle.jp ? 0xc47c19 : 0xc4a7b0);
    effects.advance(); oracle.same(swirl);
    if (publish) check(oracle.display() == effects.windows(), "Boundary displayed mask differs");
  };
  for (unsigned speed : {0u, 1u, 2u, 3u, 4u, 255u})
    for (unsigned count : {0u, 1u, 2u, 255u})
      for (unsigned pad : {0u, 1u, 255u}) {
        WorldSwirlState swirl;
        swirl.update_in = 1; swirl.interval = 2; swirl.next = 1;
        swirl.repeat_speed = speed; swirl.repeats_until_speedup = count;
        swirl.padding = pad; swirl.masked_layers[5] = true;
        context = assets.title + " repeat boundary speed=" + std::to_string(speed) +
                  " count=" + std::to_string(count) + " padding=" + std::to_string(pad);
        one(swirl, true);
      }
  for (unsigned timer : {0u, 2u, 255u}) {
    WorldSwirlState swirl;
    swirl.update_in = timer; swirl.frames_left = 1;
    context = assets.title + " untouched timer " + std::to_string(timer);
    one(swirl, true);
  }
  for (unsigned interval : {0u, 1u, 255u}) {
    WorldSwirlState swirl;
    swirl.update_in = 1; swirl.interval = interval; swirl.frames_left = 1;
    context = assets.title + " emitted interval " + std::to_string(interval);
    one(swirl, true);
  }
  for (unsigned velocity : {0u,1u,0x100u,0x7fffu,0x8000u,0xff00u,0xffffu})
    for (unsigned value : {0u,1u,0xffu,0x100u,0x7fffu,0x8000u,0xffffu}) {
      WorldSwirlState swirl;
      swirl.update_in = 2; swirl.oval = true;
      auto &o = swirl.oval_state;
      o.center_x = 0xffff; o.center_y = 112;
      o.center_dx = 2; o.center_dy = 0xffff;
      o.width = value; o.height = 0x100;
      o.velocity_x = velocity; o.velocity_y = 0xff00;
      o.acceleration_x = 1;
      context = assets.title + " oval arithmetic value=" + std::to_string(value) +
                " velocity=" + std::to_string(velocity);
      one(swirl, true);
    }
  // Multiple invocations before a display must not commit a merely selected
  // mode4 clip's final second interval into the following mode1 clip.
  for (bool displayed : {false,true}) {
    Oracle oracle(assets);
    WorldSwirlState swirl;
    swirl.update_in = 1; swirl.interval = 1; swirl.frames_left = 2; swirl.frame = 58;
    ScenePalette colors{}; WorldEncounterVisualState visual;
    visual.window_left = {255,255}; visual.window_right = {0,0};
    oracle.bus->write_byte(0x2126,255); oracle.bus->write_byte(0x2128,255);
    NoRestoration restoration(colors,visual);
    WorldEncounterEffects effects(definitions,data,swirl,colors,visual,restoration);
    context = assets.title + " publication ownership displayed=" + std::to_string(displayed);
    oracle.seed(swirl);
    oracle.call(oracle.jp ? 0xc47c19 : 0xc4a7b0); effects.advance();
    if (displayed) {
      check(oracle.display() == effects.windows(), "First displayed mode4 clip differs");
      effects.complete_publication();
    }
    oracle.call(oracle.jp ? 0xc47c19 : 0xc4a7b0); effects.advance();
    check(oracle.display() == effects.windows(), "Mode1 inherited an undisplayed interval");
    check(effects.windows()[0][1] == (displayed ? EncounterWindowInterval{67,255}
                                              : EncounterWindowInterval{255,0}),
          "Retained second interval is not owned by actual publication");
  }
}
void optional_oval_steps(const eb::GameAssets &assets, const WorldSwirlData &definitions,
                         const WorldEncounterEffectData &data) {
  // Original instructions with explicit test-owned step content exercise the
  // retain8000 convention absent from the one shipped expanding-oval step.
  for (unsigned retained = 0; retained < 16; ++retained) {
    auto source_assets = assets;
    const unsigned at = assets.version == eb::GameVersion::JP ? 0x47a37 : 0x4a5ce;
    WorldOvalStep step{2,
      std::uint16_t(retained & 1 ? 0x8000 : 128),
      std::uint16_t(retained & 2 ? 0x8000 : 112),
      std::uint16_t(retained & 4 ? 0x8000 : 0x200),
      std::uint16_t(retained & 8 ? 0x8000 : 0x100),
      1, 0xffff, 0xff00, 0x100, 1, 0xffff};
    source_assets.image[at] = step.duration;
    const std::array<unsigned,10> words{step.center_x,step.center_y,step.width,step.height,
      step.center_dx,step.center_dy,step.velocity_x,step.velocity_y,
      step.acceleration_x,step.acceleration_y};
    for (unsigned i = 0; i < words.size(); ++i) {
      source_assets.image[at + 2 + i * 2] = words[i];
      source_assets.image[at + 3 + i * 2] = words[i] >> 8;
    }
    WorldEncounterEffectData custom{data.clips,data.ellipse_profile,{step,{}}};
    Oracle oracle(source_assets);
    WorldSwirlState swirl;
    swirl.update_in = 1; swirl.oval = true;
    swirl.oval_state.center_x = 123; swirl.oval_state.center_y = 111;
    swirl.oval_state.width = 0x240; swirl.oval_state.height = 0x140;
    ScenePalette colors{}; WorldEncounterVisualState visual;
    NoRestoration restoration(colors,visual);
    WorldEncounterEffects effects(definitions,custom,swirl,colors,visual,restoration);
    oracle.seed(swirl);
    for (unsigned tick = 0; tick < 4; ++tick) {
      context = assets.title + " explicit optional oval content flags=" +
          std::to_string(retained) + " tick=" + std::to_string(tick);
      oracle.call(oracle.jp ? 0xc47c19 : 0xc4a7b0); effects.advance();
      oracle.same(swirl);
      check(oracle.display() == effects.windows(), "Optional oval step picture differs");
      effects.complete_publication();
    }
  }
}

void nmi_stream_lifetime(const eb::GameAssets& assets, const WorldSwirlData& definitions,
                         const WorldEncounterEffectData& data) {
  for (unsigned kind : {0u, 1u, 2u}) {
    Oracle oracle(assets);
    WorldEncounterState state; WorldSwirlState swirl;
    ScenePalette colors{}; PaletteColor backup{}; WorldEncounterVisualState visual;
    NoRestoration restoration(colors, visual);
    WorldEncounter owner(definitions, state, swirl, colors, backup, visual, {});
    WorldEncounterEffects effects(definitions, data, swirl, colors, visual, restoration);
    context = assets.title + " full NMI row lifetime kind=" + std::to_string(kind);
    const unsigned id = kind == 0 ? 0 : 1;
    oracle.call(oracle.jp ? 0xc2e7dd : 0xc2e8c4, id, 2, 0); owner.configure_swirl(id, 2, 0);
    swirl.restore_after = false;
    // Test actual mode4 clip58 followed by first-only clip59, and first-only
    // clip59 on its own, without inventing any interval content.
    if (kind) { swirl.frame = kind == 1 ? 58 : 59; swirl.frames_left = 4; swirl.interval = 2; }
    oracle.seed(swirl);
    for (unsigned tick = 0; tick < 8; ++tick) {
      context = assets.title + " full NMI row lifetime kind=" + std::to_string(kind) +
                " tick=" + std::to_string(tick);
      oracle.call(oracle.jp ? 0xc47c19 : 0xc4a7b0); effects.advance(); oracle.same(swirl);
      check(bool(oracle.bus->work_ram[0x1f] & 0x18) == visual.window_rows_enabled,
            "Source row enable differs after clip/oval advance");
      const auto before = visual;
      const bool fade = tick == 1 || tick == 4;
      const auto expected = effects.windows(true, fade);
      check(visual == before, "NMI preview consumed live state");
      // A negative brightness result completes the actual original fade and
      // disables all row streams; other frames keep their current ownership.
      oracle.bus->work_ram[0xd] = fade ? 0 : 15;
      oracle.bus->work_ram[0x28] = fade ? 255 : 0;
      oracle.bus->work_ram[0x29] = oracle.bus->work_ram[0x2a] = 0;
      oracle.nmi();
      if (fade) check(oracle.bus->work_ram[0xd] == 0x80 && !oracle.bus->work_ram[0x28] &&
                         !oracle.bus->work_ram[0x1f], "Full NMI fade failed to blank/disable rows");
      check(oracle.display() == expected, "Full NMI reset/disable/row publication differs");
      effects.complete_publication(true, fade);
      check(visual.window_pattern == before.window_pattern && visual.window_layers == before.window_layers,
            "NMI publication discarded installed content or mask selection");
      check(bool(oracle.bus->work_ram[0x1f] & 0x18) == visual.window_rows_enabled,
            "NMI row enable commit differs");
      const auto view = oracle.bus->scene_read_view();
      for (unsigned i = 0; i < 2; ++i)
        check(view.ppu_registers[0x26 + i * 2] == visual.window_left[i] &&
                  view.ppu_registers[0x27 + i * 2] == visual.window_right[i],
              "Full NMI terminal interval differs");
    }
  }
}

void sequences(const eb::GameAssets &assets, const WorldSwirlData &definitions,
               const WorldEncounterEffectData &data) {
  for (unsigned id = 0; id < 7; ++id)
    for (unsigned options : {0u, 1u, 2u, 3u, 0x80u, 0x81u}) {
      Oracle oracle(assets);
      WorldEncounterState encounter;
      WorldSwirlState swirl;
      ScenePalette colors{}; PaletteColor backup{};
      WorldEncounterVisualState visual;
      NoRestoration restoration(colors, visual);
      WorldEncounter owner(definitions, encounter, swirl, colors, backup, visual, {});
      WorldEncounterEffects effects(definitions, data, swirl, colors, visual, restoration);
      context = assets.title + " sequence " + std::to_string(id) + " options " + std::to_string(options);
      const unsigned padding = options & 128 ? 0 : 7;
      oracle.call(oracle.jp ? 0xc2e7dd : 0xc2e8c4, id, options, padding);
      owner.configure_swirl(id, options, padding);
      swirl.restore_after = false; oracle.bus->work_ram[oracle.swirl + 9] = 0;
      oracle.same(swirl);
      unsigned tick = 0;
      do {
        context = assets.title + " sequence " + std::to_string(id) + " options " +
                  std::to_string(options) + " tick " + std::to_string(tick);
        oracle.call(oracle.jp ? 0xc47c19 : 0xc4a7b0);
        effects.advance();
        oracle.same(swirl);
        const auto expected = oracle.display();
        const auto actual = effects.windows();
        for (unsigned y = 0; y < 224; ++y)
          check(expected[y] == actual[y], "Published interval row " + std::to_string(y) + " differs");
        effects.complete_publication();
        const auto view = oracle.bus->scene_read_view();
        for (unsigned i = 0; i < 2; ++i)
          check(view.ppu_registers[0x26 + i * 2] == visual.window_left[i] &&
                    view.ppu_registers[0x27 + i * 2] == visual.window_right[i],
                "Published terminal intervals differ");
        if (++tick > 5000) throw std::runtime_error("Unbounded effect sequence: " + context);
      } while (swirl.update_in);
      const auto retained = effects.windows();
      effects.advance();
      oracle.call(oracle.jp ? 0xc47c19 : 0xc4a7b0);
      oracle.same(swirl);
      check(effects.windows() == retained && oracle.display() == retained,
            "Terminated effect erased its retained display");
    }
}
void run(const eb::GameAssets &assets) {
  const auto start_checks = checks, start_calls = calls, start_pictures = pictures;
  const auto definitions = import_world_swirl_data(assets.image);
  const auto data = import_world_encounter_effect_data(assets.image, assets.version);
  palette_restoration(assets);
  ellipse(assets, data);
  boundaries(assets, definitions, data);
  optional_oval_steps(assets, definitions, data);
  sequences(assets, definitions, data);
  nmi_stream_lifetime(assets, definitions, data);
  std::cout << assets.title << ": " << calls - start_calls << " original calls; "
            << pictures - start_pictures << " displayed masks; " << checks - start_checks << " checks\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2) throw std::runtime_error("Provide regional ebpak paths");
    for (int i = 1; i < argc; ++i) run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    std::cout << instructions << " original instructions\n";
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
