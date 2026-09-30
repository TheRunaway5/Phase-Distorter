// Whole original enemy palette helpers plus real NMI palette/OAM DMA and
// emitted object pixels. This is not a whole battle-frame/startup claim.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/battle_combatants.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
using namespace eb::native;
using namespace eb::native::battle;
struct Totals {
  std::uint64_t words{}, instructions{}, pixels{}, immutable_pixels{},
      nonblack_pixels{}, emitted_commands{};
  unsigned helpers{}, palette_set{}, palette_reverse{}, palette_target{},
      palette_advance{}, advances{}, nontermination{}, transfers{}, nmi{},
      draws{}, visible_banks{};
} totals;
void require(bool ok, const std::string &why) {
  if (!ok)
    throw std::runtime_error(why);
}
unsigned pack(PaletteColor c) {
  return c.red | (unsigned(c.green) << 5) | (unsigned(c.blue) << 10);
}
struct Layout {
  unsigned speed, frames, deltas, counters, steps, set, reverse, target,
      advance;
  unsigned group, battlers, selector, draw, enable, wait, horizontal, vertical,
      targeting;
};
Layout layout(bool jp) {
  if (jp)
    return {0xb551,   0xb0c9,   0xb0d1,   0xb251, 0xb3d1, 0xc2f9f1,
            0xc2f9f7, 0xc2fa4e, 0xc2fcb2, 0x4e12, 0xa1ae, 0xc2ee00,
            0xc2f812, 0xc0870e, 0xc0874c, 0xaf6b, 0xaf6d, 0xaf77};
  return {0xb37c,   0xaef4,   0xaefc,   0xb07c, 0xb1fc, 0xc2fad8,
          0xc2fade, 0xc2fb35, 0xc2fd99, 0x4a8c, 0x9fac, 0xc2eee7,
          0xc2f8f9, 0xc08715, 0xc08756, 0xad96, 0xad98, 0xada2};
}
class Source {
public:
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Layout p;
  unsigned nmi_entries{};
  explicit Source(const eb::GameAssets &a)
      : bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus),
        p(layout(a.version == eb::GameVersion::JP)) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    bus->work_ram[0xd] = 0x80;
    bus->write_byte(0x2100, 0x80);
  }
  ~Source() {
    totals.instructions += cpu.instruction_count;
    totals.nmi += nmi_entries;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void start(unsigned pc, unsigned a = 0, unsigned x = 0, unsigned y = 0,
             unsigned fourth = 0) {
    require(cpu.stack_pointer == 0x1fff && cpu.direct_page == 0x1e00,
            "Source caller context not restored");
    put(0x1e0e, fourth);
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    cpu.execute_instruction<0x22>(pc, 4);
  }
  bool run(unsigned limit = 5000000) {
    for (unsigned i = 0; i < limit; ++i) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return true;
      if (cpu.program_counter == 0xc08170)
        ++nmi_entries;
      cpu.step_instruction();
    }
    return false;
  }
  void call(unsigned pc, unsigned a = 0, unsigned x = 0, unsigned y = 0,
            unsigned fourth = 0) {
    start(pc, a, x, y, fourth);
    require(run(),
            "Original helper did not return: " + cpu.describe_registers());
    ++totals.helpers;
    if (pc == p.set)
      ++totals.palette_set;
    else if (pc == p.reverse)
      ++totals.palette_reverse;
    else if (pc == p.target)
      ++totals.palette_target;
    else if (pc == p.advance)
      ++totals.palette_advance;
  }
  void seed(const PaletteBankState &colors, const PaletteEffectState &state) {
    for (unsigned i = 0; i < 256; ++i)
      put(0x200 + i * 2, 0x8000u + i * 137u);
    for (unsigned b = 0; b < 4; ++b) {
      put(p.frames + b * 2, state.banks[b].frames_left);
      for (unsigned c = 0; c < 16; ++c)
        put(0x380 + b * 32 + c * 2, colors.palette(b)[c]);
      for (unsigned i = 0; i < 48; ++i) {
        put(p.deltas + b * 96 + i * 2, state.banks[b].deltas[i]);
        put(p.counters + b * 96 + i * 2, state.banks[b].counters[i]);
        put(p.steps + b * 96 + i * 2, state.banks[b].steps[i]);
      }
    }
    put(p.speed, state.speed);
    bus->work_ram[0x30] = colors.upload_mode;
  }
  void compare(const PaletteBankState &colors, const PaletteEffectState &state,
               const std::string &label, bool compare_upload = true) {
    auto eq = [&](unsigned actual, unsigned expected, const char *field,
                  unsigned index) {
      ++totals.words;
      require(actual == expected, label + " " + field + "[" +
                                      std::to_string(index) +
                                      "] source=" + std::to_string(actual) +
                                      " native=" + std::to_string(expected));
    };
    eq(word(p.speed), state.speed, "speed", 0);
    if (compare_upload)
      eq(bus->work_ram[0x30], colors.upload_mode, "upload", 0);
    for (unsigned b = 0; b < 4; ++b) {
      eq(word(p.frames + b * 2), state.banks[b].frames_left, "frames", b);
      for (unsigned c = 0; c < 16; ++c)
        eq(word(0x380 + b * 32 + c * 2), colors.palette(b)[c], "palette",
           b * 16 + c);
      for (unsigned i = 0; i < 48; ++i) {
        eq(word(p.deltas + b * 96 + i * 2), state.banks[b].deltas[i], "delta",
           b * 48 + i);
        eq(word(p.counters + b * 96 + i * 2), state.banks[b].counters[i],
           "counter", b * 48 + i);
        eq(word(p.steps + b * 96 + i * 2), state.banks[b].steps[i], "step",
           b * 48 + i);
      }
    }
  }
  void unchanged_normal(const std::string &label) {
    for (unsigned i = 0; i < 192; ++i) {
      ++totals.words;
      require(word(0x200 + i * 2) == std::uint16_t(0x8000u + i * 137u),
              label + " changed an unowned palette bank");
    }
  }
  void actors(std::span<const BattleCombatantPresentation> entries,
              BattleCombatantTick tick) {
    std::fill_n(bus->work_ram.begin() + p.battlers, 32 * 78, 0);
    for (auto v : entries) {
      const unsigned at = p.battlers + v.slot * 78;
      bus->work_ram[at + 2] = v.artwork_enabled;
      bus->work_ram[at + 12] = v.conscious;
      bus->work_ram[at + 14] = v.enemy;
      bus->work_ram[at + 16] = v.row;
      bus->work_ram[at + 29] = v.incapacitated;
      bus->work_ram[at + 67] = v.resource;
      bus->work_ram[at + 68] = v.x;
      bus->work_ram[at + 69] = v.y;
      bus->work_ram[at + 72] = v.blink;
      bus->work_ram[at + 73] = v.alternate_flash;
      bus->work_ram[at + 74] = v.targeted;
      bus->work_ram[at + 75] = v.alternate;
    }
    bus->work_ram[2] = tick.frame_phase;
    put(p.horizontal, tick.horizontal_offset);
    put(p.vertical, tick.vertical_offset);
    put(p.targeting, tick.targeting_flash);
  }
  // Run the actual original interrupt handler through a hardware-raised NMI.
  // This consumes its original palette DMA table and the staged OAM buffer.
  void transfer() {
    bus->work_ram[0x2b] = 0;
    const unsigned before = nmi_entries;
    call(0xc08522);
    call(p.enable);
    call(p.wait);
    require(nmi_entries > before, "Original NMI was not delivered");
    require(bus->work_ram[0x30] == 0,
            "NMI did not consume palette upload mode");
    require(bus->work_ram[0x2c] == 0,
            "NMI did not consume staged object display");
    for (unsigned i = 0; i < 256; ++i) {
      const unsigned actual = bus->palette_ram[256 + i];
      const unsigned expected =
          bus->work_ram[0x300 + i] & ((i & 1) ? 0x7f : 0xff);
      require(actual == expected,
              "Actual NMI CGRAM transfer differs at " + std::to_string(i));
    }
    // Keep later pure helper steps outside interrupt delivery. Source NMI has
    // completed and the display state remains in the actual PPU storage.
    bus->write_byte(0x4200, 0);
    bus->work_ram[0x1e] = 0;
    ++totals.transfers;
  }
  std::vector<std::uint32_t> pixels() {
    const auto target = bus->completed_frames + 2;
    while (bus->completed_frames < target)
      bus->advance_cpu_cycles(3000);
    return {bus->native_framebuffer.begin(), bus->native_framebuffer.end()};
  }
};
void pattern(PaletteBankState &colors, PaletteEffectState &state,
             unsigned seed) {
  state = {};
  state.speed = std::uint16_t(seed * 113 + 1);
  colors.upload_mode = std::uint8_t(seed * 7 + 3);
  for (unsigned b = 0; b < 4; ++b) {
    state.banks[b].frames_left = std::uint16_t(17 + b * 3);
    for (unsigned c = 0; c < 16; ++c)
      colors.palette(b)[c] = std::uint16_t(seed * 1297 + b * 431 + c * 1057);
    for (unsigned i = 0; i < 48; ++i) {
      state.banks[b].counters[i] = std::uint16_t(seed * 691 + b * 17 + i * 133);
      state.banks[b].steps[i] = std::uint16_t(0xa000 + b * 59 + i * 71);
      state.banks[b].deltas[i] = std::uint16_t(seed * 719 + b * 47 + i * 107);
    }
  }
}
void helpers(const eb::GameAssets &assets) {
  Source s(assets);
  PaletteBankState colors;
  PaletteEffectState state;
  PaletteEffects effects(colors, state);
  auto compare = [&](const std::string &label) {
    s.compare(colors, state, label);
    s.unchanged_normal(label);
  };
  for (unsigned speed : {0u, 1u, 2u, 10u, 20u, 0x7fffu, 0x8000u, 0xffffu}) {
    pattern(colors, state, speed);
    s.seed(colors, state);
    s.call(s.p.set, speed);
    effects.set_speed(speed);
    compare("set speed");
  }
  for (unsigned bank = 0; bank < 4; ++bank)
    for (unsigned speed : {0u, 1u, 20u, 0x8000u, 0xffffu}) {
      pattern(colors, state, bank + speed);
      s.seed(colors, state);
      s.call(s.p.reverse, speed, bank);
      effects.reverse(bank, speed);
      compare("reverse");
    }
  // Every pair of RGB5 current/target values for each individual component;
  // all flat positions, equal-channel step retention and raw bit15 are
  // included.
  for (unsigned channel = 0; channel < 3; ++channel)
    for (unsigned current = 0; current < 32; ++current)
      for (unsigned desired = 0; desired < 32; ++desired) {
        const unsigned color = (current * 7 + desired * 3 + channel * 11) % 64;
        pattern(colors, state, current * 32 + desired + channel);
        colors.palette(color / 16)[color % 16] =
            std::uint16_t(0x8000 | current | (current << 5) | (current << 10));
        std::array<unsigned, 3> target{current, current, current};
        target[channel] = desired;
        s.seed(colors, state);
        s.call(s.p.target, color, target[0], target[1], target[2]);
        effects.target(color, target[0], target[1], target[2]);
        compare("RGB5 target");
      }
  for (unsigned color = 0; color < 64; ++color)
    for (unsigned raw : {32u, 255u, 0x7fffu, 0x8000u, 0xffe0u, 0xffffu}) {
      pattern(colors, state, color + raw);
      s.seed(colors, state);
      s.call(s.p.target, color, raw, std::uint16_t(raw + 31),
             std::uint16_t(0u - raw));
      effects.target(color, raw, std::uint16_t(raw + 31),
                     std::uint16_t(0u - raw));
      compare("raw target");
    }
  for (unsigned trial = 0; trial < 96; ++trial) {
    pattern(colors, state, trial);
    const std::array<unsigned, 8> speeds{1,   2,     10,    20,
                                         257, 32767, 32768, 65535};
    state.speed = speeds[trial % 8];
    for (unsigned b = 0; b < 4; ++b) {
      auto &v = state.banks[b];
      v.frames_left = (trial + b) % 4;
      v.deltas.fill(0);
      for (unsigned ch = 0; ch < 3; ++ch) {
        unsigned at = 3 + ((trial + b * 3) % 15) * 3 + ch;
        v.steps[at] = std::uint16_t(1 + (trial * 13 + b * 11 + ch) % 97);
        v.counters[at] =
            std::uint16_t(trial % 3 == 0 ? 65530 : trial * 43 + ch);
        v.deltas[at] = std::array<std::uint16_t, 6>{
            1, 0xffff, 32, 0xffe0, 1024, 0x8000}[(trial + ch) % 6];
      }
    }
    s.seed(colors, state);
    for (unsigned tick = 0; tick < 4; ++tick) {
      s.call(s.p.advance);
      effects.advance();
      ++totals.advances;
      compare("raw advance");
    }
  }
  // One maximum quotient, and a counter wrap to zero, exercise the complete
  // original repeated subtraction without making a broad unbounded workload.
  for (unsigned initial : {0u, 1u}) {
    state = {};
    colors.palettes = {};
    state.speed = 1;
    state.banks[2].frames_left = 1;
    state.banks[2].steps[21] = 0xffff;
    state.banks[2].counters[21] = initial;
    state.banks[2].deltas[21] = 0x8000;
    colors.palette(2)[7] = 0x8001;
    s.seed(colors, state);
    s.call(s.p.advance);
    effects.advance();
    ++totals.advances;
    compare("maximum quotient/wrap");
  }
  // The real PSI color-change helper sets a shared speed20, targets each
  // selected resource's colors1..15, then later reverses those same banks.
  // Exercise that helper sequence without claiming the wider PSI caller.
  state = {};
  colors.palettes = {};
  colors.upload_mode = 3;
  for (unsigned bank = 0; bank < 4; ++bank)
    for (unsigned c = 0; c < 16; ++c)
      colors.palette(bank)[c] =
          std::uint16_t(0x8000 | c | (c << 5) | (c << 10));
  s.seed(colors, state);
  s.call(s.p.set, 20);
  effects.set_speed(20);
  compare("PSI speed setup");
  for (unsigned bank : {0u, 2u, 3u})
    for (unsigned c = 1; c < 16; ++c) {
      s.call(s.p.target, bank * 16 + c, 17, 4, 25);
      effects.target(bank * 16 + c, 17, 4, 25);
      compare("PSI target setup");
    }
  for (unsigned tick = 0; tick < 20; ++tick) {
    s.call(s.p.advance);
    effects.advance();
    ++totals.advances;
    compare("PSI target progression");
  }
  for (unsigned bank : {0u, 2u, 3u}) {
    s.call(s.p.reverse, 20, bank);
    effects.reverse(bank, 20);
    compare("PSI reverse setup");
  }
  for (unsigned tick = 0; tick < 20; ++tick) {
    s.call(s.p.advance);
    effects.advance();
    ++totals.advances;
    compare("PSI reverse progression");
  }
  // Zero speed is valid for inactive/equal/color0-only state, but not an active
  // processed delta. The bad original execution is retained as a bounded
  // non-return witness; it is never substituted with successful completion.
  state = {};
  colors.palettes = {};
  state.banks[0].frames_left = 2;
  state.banks[0].deltas[0] = 0xffff;
  s.seed(colors, state);
  s.call(s.p.advance);
  effects.advance();
  ++totals.advances;
  compare("safe zero speed");
  Source stuck(assets);
  state = {};
  colors.palettes = {};
  state.banks[0].frames_left = 1;
  state.banks[0].steps[3] = 1;
  state.banks[0].deltas[3] = 1;
  stuck.seed(colors, state);
  stuck.start(stuck.p.advance);
  require(!stuck.run(10000), "Original zero-speed loop unexpectedly returned");
  require(stuck.word(stuck.p.frames) == 0 &&
              stuck.word(stuck.p.counters + 6) == 1,
          "Nonreturn witness did not enter original subtraction loop");
  const auto before = state;
  bool rejected = false;
  try {
    effects.advance();
  } catch (const std::domain_error &) {
    rejected = true;
  }
  require(rejected && state == before,
          "Native zero-speed rejection was not atomic");
  ++totals.nontermination;
}
void sequence(Source &s, PaletteEffects &effects, unsigned bank, unsigned phase,
              const BattleCombatantResource &resource) {
  const unsigned speed = phase == 0 ? 10 : 20;
  s.call(s.p.set, speed);
  effects.set_speed(speed);
  for (unsigned c = 1; c < 16; ++c) {
    unsigned r = 31, g = 31, b = 31;
    if (phase == 1) {
      r = resource.palette[c].red;
      g = resource.palette[c].green;
      b = resource.palette[c].blue;
    }
    if (phase == 2)
      r = g = b = 0;
    s.call(s.p.target, bank * 16 + c, r, g, b);
    effects.target(bank * 16 + c, r, g, b);
  }
  // Whole setup state is covered independently above. Here the source NMI
  // may already have consumed its upload byte while the native late-palette
  // publication deliberately retains the shared pending upload intent.
}
void visible(const eb::GameAssets &assets) {
  BattleCombatants catalog(assets.image, assets.version);
  unsigned cases = 0, emitted_bank_mask = 0;
  std::uint64_t visible_nonblack = 0, emitted_commands = 0;
  // Group176 prepares all four physical resource banks, including authored
  // count-zero catalog entries. These are renderer inputs, not admission proof.
  for (unsigned group : {0u, 7u, 176u, 475u}) {
    Source s(assets);
    PaletteBankState colors;
    auto scene = catalog.prepare(group);
    PaletteEffectState state;
    PaletteEffects effects(colors, state);
    scene.bind_palette_state(colors);
    s.put(s.p.group, group);
    s.call(s.p.selector);
    require(!scene.resources().empty(), "Pixel case has no resource");
    // Initial alternate colors are explicit live entry-state input. Normal
    // banks were loaded by the actual original group graphics initializer.
    for (unsigned b = 0; b < 4; ++b)
      for (unsigned c = 0; c < 16; ++c) {
        colors.palette(b)[c] = std::uint16_t(0x8000 | ((c * 2 + b) & 31) |
                                             (((c + b * 3) & 31) << 5) |
                                             (((31 - c + b) & 31) << 10));
        s.put(0x380 + b * 32 + c * 2, colors.palette(b)[c]);
      }
    s.put(s.p.speed, 0);
    for (unsigned b = 0; b < 4; ++b)
      s.put(s.p.frames + b * 2, 0);
    s.bus->work_ram[0x30] = 0;
    s.bus->work_ram[0x2e] = 1;
    s.bus->work_ram[0xd] = 15;
    s.bus->work_ram[0xe] = 0x61;
    s.bus->work_ram[0x1a] = 16;
    s.bus->work_ram[0x1b] = 0;
    s.bus->write_byte(0x2100, 15);
    s.bus->write_byte(0x2101, 0x61);
    s.bus->write_byte(0x2105, 1);
    s.bus->write_byte(0x212c, 16);
    for (unsigned phase = 0; phase < 3; ++phase) {
      for (unsigned b = 0; b < scene.resources().size(); ++b)
        sequence(s, effects, b, phase, scene.resources()[b]);
      s.compare(colors, state, "visible setup", phase == 0);
      if (phase)
        require(s.bus->work_ram[0x30] == 0 && colors.upload_mode == 16,
                "Source consumed/native retained publication boundary changed");
      for (unsigned tick = 0; tick < (phase == 0 ? 10u : 20u); ++tick) {
        std::vector<BattleCombatantPresentation> actors;
        for (unsigned b = 0; b < scene.resources().size(); ++b) {
          BattleCombatantPresentation a;
          a.slot = 8 + b;
          a.resource = b;
          a.identity = 100 + b;
          a.row = b & 1;
          a.x = static_cast<std::uint8_t>(64 + b * 34);
          a.y = static_cast<std::uint8_t>(120 + b * 8);
          a.alternate = true;
          a.blink = tick % 5 == 0 ? 2 : 0;
          a.alternate_flash = tick % 7 == 0 ? 2 : 0;
          actors.push_back(a);
        }
        BattleCombatantTick timing{std::uint16_t(tick % 4 == 0 ? 0xfffe : 2), 0,
                                   static_cast<std::uint8_t>(tick & 1), false};
        s.actors(actors, timing);
        s.call(s.p.draw);
        scene.publish(actors, timing);
        ++totals.draws;
        for (const auto &a : actors) {
          require(a.blink == s.bus->work_ram[s.p.battlers + a.slot * 78 + 72] &&
                      a.alternate_flash ==
                          s.bus->work_ram[s.p.battlers + a.slot * 78 + 73],
                  "Original/native row timers differ");
        }
        const auto prior = scene.snapshot();
        const auto earlier = eb::rasterize_direct_scene({prior.draw(), {}});
        const auto timers = actors;
        const auto commands = std::vector<BattleCombatantDraw>(
            prior.commands().begin(), prior.commands().end());
        emitted_commands += commands.size();
        for (const auto &command : commands)
          if (command.alternate)
            emitted_bank_mask |= 1u << command.resource;
        s.call(s.p.advance);
        effects.advance();
        ++totals.advances;
        s.compare(colors, state, "visible advance");
        const auto effects_before = state;
        const auto mode = colors.upload_mode;
        scene.publish_palettes();
        require(actors == timers && state == effects_before &&
                    colors.upload_mode == mode,
                "Late palette publication advanced effects/timers or "
                "acknowledged upload");
        require(std::ranges::equal(scene.snapshot().commands(), commands),
                "Late palette publication reran object selection");
        require(eb::rasterize_direct_scene({prior.draw(), {}}) == earlier,
                "Earlier object snapshot changed after live palette update");
        totals.immutable_pixels += earlier.size();
        // Palette upload mode16 comes from the actual active helper. Original
        // NMI now uploads palettes and OAM; there is no direct palette_ram/OAM
        // copy.
        s.transfer();
        require(colors.upload_mode == mode,
                "Native publication intent was acknowledged by the fixture");
        const auto actual = s.pixels();
        visible_nonblack += std::count_if(
            actual.begin(), actual.end(),
            [](std::uint32_t pixel) { return pixel != 0xff000000u; });
        const auto expected =
            eb::rasterize_direct_scene({scene.snapshot().draw(), {}});
        auto mismatch =
            std::mismatch(actual.begin(), actual.end(), expected.begin());
        require(mismatch.first == actual.end(),
                "Original NMI/object PPU mismatch group=" +
                    std::to_string(group) + " phase=" + std::to_string(phase) +
                    " tick=" + std::to_string(tick) + " pixel=" +
                    std::to_string(mismatch.first - actual.begin()));
        totals.pixels += actual.size();
        ++cases;
      }
    }
  }
  require(cases == 200, "Missing regional visible palette coverage");
  require(emitted_commands != 0 && visible_nonblack != 0,
          "Vacuous emitted-object or visible-pixel comparison");
  require(emitted_bank_mask == 15,
          "Not all four alternate resource banks were emitted");
  totals.nonblack_pixels += visible_nonblack;
  totals.emitted_commands += emitted_commands;
  totals.visible_banks += 4;
}
void run(const char *path) {
  auto assets = eb::load_game_assets(path, eb::asset_profiles());
  auto before = totals;
  helpers(assets);
  visible(assets);
  require(totals.pixels > before.pixels && totals.nmi > before.nmi,
          "Region omitted actual NMI/pixel proof");
  std::cout
      << "PASS " << (assets.version == eb::GameVersion::JP ? "JP" : "US")
      << ": source_calls=" << totals.helpers - before.helpers
      << " palette_set=" << totals.palette_set - before.palette_set
      << " palette_reverse=" << totals.palette_reverse - before.palette_reverse
      << " palette_target=" << totals.palette_target - before.palette_target
      << " palette_advance=" << totals.palette_advance - before.palette_advance
      << " state_words=" << totals.words - before.words
      << " advances=" << totals.advances - before.advances
      << " actual_NMI=" << totals.nmi - before.nmi
      << " palette_transfers=" << totals.transfers - before.transfers
      << " visible_banks=" << totals.visible_banks - before.visible_banks
      << " emitted_commands="
      << totals.emitted_commands - before.emitted_commands
      << " nonblack_pixels=" << totals.nonblack_pixels - before.nonblack_pixels
      << " object_pixels=" << totals.pixels - before.pixels
      << " immutable_pixels="
      << totals.immutable_pixels - before.immutable_pixels
      << " nonreturn_witnesses="
      << totals.nontermination - before.nontermination
      << " instructions=" << totals.instructions - before.instructions << '\n';
}
} // namespace
int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "SKIP: supply locally imported regional packs\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i)
      run(argv[i]);
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
