// Complete original C2E6B6/C2EACF, real queued DMA/NMI, and PSI-plane pixels.
// SHOW_PSI_ANIMATION supplies an explicitly original-only bootstrap. No whole
// native SHOW, battle frame, action caller, audio, or encounter claim is made.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle/psi_resources.hpp"
#include "eb/native/battle/psi_scene.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/world_encounter.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
struct Counts {
  std::uint64_t words{}, bytes{}, pixels{}, immutable{}, instructions{},
      nonblack{};
  unsigned setups{}, advances{}, gates{}, nmis{}, transfers{}, map_frames{},
      clears{}, mode_overwrites{}, scratch_callbacks{}, palette_callbacks{},
      custom{};
  std::uint64_t composed_pixels{}, overlap_high{}, overlap_low{};
  unsigned normal_banks{}, alternate_banks{}, retained_map_inputs{};
  unsigned retained_background_handoffs{};
} counts;
void require(bool ok, const std::string &message) {
  if (!ok)
    throw std::runtime_error(message);
}
void equal(unsigned actual, unsigned expected, const std::string &field) {
  ++counts.words;
  require(actual == expected, field + ": original=" + std::to_string(actual) +
                                  " native=" + std::to_string(expected));
}
struct Layout {
  unsigned state, record, target, battlers, targets, x, y, swirl;
  unsigned show, advance, gate, wait, enable, clear, update;
  unsigned effect_speed, effect_frames, deltas, counters, steps, effects;
  unsigned cfg, pointers, palettes, dma_constant;
};
Layout layout(bool jp) {
  if (jp)
    return {0x1b44,   0xafa9,   0xab74,   0xa1ae,   0xb0bc,
            0xaf6f,   0xaf71,   0xb097,   0xc2e06b, 0xc2e5cb,
            0xc2e9e8, 0xc0874c, 0xc0870e, 0xc088a3, 0xc08b17,
            0xb551,   0xb0c9,   0xb0d1,   0xb251,   0xb3d1,
            0xc2fcb2, 0xcf164,  0xcf6a6,  0xcf596,  0xc2e5c8};
  return {0x1b9e,   0xadd4,   0xa972,   0x9fac,   0xaee7,   0xad9a,   0xad9c,
          0xaec2,   0xc2e116, 0xc2e6b6, 0xc2eacf, 0xc08756, 0xc08715, 0xc088b1,
          0xc08b26, 0xb37c,   0xaef4,   0xaefc,   0xb07c,   0xb1fc,   0xc2fd99,
          0xcf04d,  0xcf58f,  0xcf47f,  0xc2e6b3};
}
class Source {
public:
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Layout p;
  bool jp;
  unsigned nmi_entries{};
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
    bus->write_byte(0x2100, 0x80);
    bus->work_ram[0x11] = 0x58;
    bus->work_ram[0x12] = 0x5c;
    bus->work_ram[0x13] = 0x60;
    bus->work_ram[0x14] = 0x0c;
    bus->work_ram[0x15] = 0x10;
    bus->work_ram[0x16] = 0x63;
  }
  ~Source() {
    counts.instructions += cpu.instruction_count;
    counts.nmis += nmi_entries;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void call(unsigned pc, unsigned a = 0, unsigned x = 0, unsigned y = 0) {
    require(cpu.stack_pointer == 0x1fff && cpu.direct_page == 0x1e00,
            "Original context not restored");
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    cpu.execute_instruction<0x22>(pc, 4);
    for (unsigned i = 0; i < 10000000; ++i) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return;
      if (cpu.program_counter == 0xc08170)
        ++nmi_entries;
      cpu.step_instruction();
    }
    throw std::runtime_error("Original helper did not return: " +
                             cpu.describe_registers());
  }
  void disable_nmi() {
    bus->write_byte(0x4200, 0);
    bus->work_ram[0x1e] = 0;
  }
  void setup(unsigned background, unsigned id, bool objects = false) {
    call(0xc08522);
    if (objects) {
      put(jp ? 0x4e12 : 0x4a8c, 176);
      call(jp ? 0xc2ee00 : 0xc2eee7);
      bus->work_ram[0xe] = 0x61;
      bus->write_byte(0x2101, 0x61);
    }
    call(jp ? 0xc2d0d5 : 0xc2d121, background, 0, 4);
    // Explicit incoming battle context, not an admission/whole encounter claim.
    for (unsigned bank = 0; bank < 4; ++bank) {
      auto at = p.battlers + (8 + bank) * 78;
      bus->work_ram[at + 12] = 1;
      bus->work_ram[at + 14] = 1;
      bus->work_ram[at + 67] = bank;
      bus->work_ram[at + 68] = 80 + bank * 25;
      bus->work_ram[at + 69] = 90 + bank * 5;
      for (unsigned c = 0; c < 16; ++c)
        put(0x300 + bank * 32 + c * 2, (c * 73 + bank * 1721) & 0x7fff);
    }
    put(p.target, p.battlers + 8 * 78);
    for (unsigned i = 0; i < 65536; ++i)
      bus->work_ram[65536 + i] = std::uint8_t(i * 13 + 0x57);
    for (unsigned i = 0; i < 16; ++i)
      put(p.state + 12 + 2 * i, 0x1111 + i * 0x101);
    bus->work_ram[0xd] = 15;
    bus->write_byte(0x2100, 15);
    call(p.enable);
    call(p.show, id);
    ++counts.setups;
    disable_nmi();
    // Explicit empty object display context for the real UPDATE_SCREEN/NMI
    // scroll publication below. OAM_CLEAR owns the actual object buffer.
    bus->work_ram[0x2e] = 1;
  }
  void transfer(bool stage_empty_objects = true) {
    // Real source staging and handler; palette_ram and video_ram are never
    // filled by this fixture. A pending NEW_FRAME_STARTED can make the first
    // WAIT return without a new NMI, so wait for actual queued transfer drain.
    if (stage_empty_objects) {
      call(p.clear);
      call(p.update);
    }
    const auto before = nmi_entries;
    call(p.enable);
    for (unsigned i = 0;; ++i) {
      require(i < 6, "Actual NMI publication did not finish");
      call(p.wait);
      if (nmi_entries > before && word(0x99) == 0 && bus->work_ram[0x30] == 0 &&
          bus->work_ram[0x2c] == 0)
        break;
    }
    disable_nmi();
    ++counts.transfers;
  }
  std::vector<std::uint32_t> pixels(unsigned depth, bool objects = false) {
    // An explicit plane-only display policy isolates PSI pixel decoding. Map,
    // graphics, palettes, and scroll have all reached PPU via real source DMA.
    bus->write_byte(0x2105, depth == 2 ? 0 : 1);
    bus->write_byte(0x2107, 0x58);
    bus->write_byte(0x2108, 0x58);
    bus->write_byte(0x210b, 0);
    bus->write_byte(0x212c, (depth == 2 ? 2 : 1) | (objects ? 16 : 0));
    bus->write_byte(0x212d, 0);
    bus->write_byte(0x2130, 0);
    bus->write_byte(0x2131, 0);
    bus->write_byte(0x212e, 0);
    bus->write_byte(0x212f, 0);
    bus->write_byte(0x420c, 0);
    bus->write_byte(0x2100, 15);
    const auto end = bus->completed_frames + 2;
    while (bus->completed_frames < end)
      bus->advance_cpu_cycles(3000);
    return {bus->native_framebuffer.begin(), bus->native_framebuffer.end()};
  }
};

void bootstrap(Source &source, PsiAnimationState &state, PsiScratch &scratch,
               PsiDisplayState &display, PaletteBankState &colors,
               PaletteEffectState &effects) {
  const auto p = source.p.state;
  auto &ram = source.bus->work_ram;
  state.time_until_next_frame = ram[p];
  state.frame_hold = ram[p + 1];
  state.total_frames = ram[p + 2];
  state.frame_offset = source.word(p + 3);
  equal(source.word(p + 5), 0x7f, "bootstrap frame bank");
  state.palette_lower = ram[p + 7];
  state.palette_upper = ram[p + 8];
  state.palette_index = ram[p + 9];
  state.palette_hold = ram[p + 10];
  state.palette_countdown = ram[p + 11];
  for (unsigned i = 0; i < 16; ++i)
    state.palette[i] = source.word(p + 12 + i * 2);
  state.palette_base = (source.word(p + 44) - 0x200) / 2;
  state.enemy_start = source.word(p + 46);
  state.enemy_end = source.word(p + 48);
  state.enemy_red = source.word(p + 50);
  state.enemy_green = source.word(p + 52);
  state.enemy_blue = source.word(p + 54);
  for (unsigned i = 0; i < 4; ++i)
    state.enemy_targets[i] = source.word(source.p.targets + i * 2);
  state.x_offset = source.word(source.p.x);
  state.y_offset = source.word(source.p.y);
  std::copy_n(ram.begin() + 65536, 65536, scratch.bytes.begin());
  std::copy_n(source.bus->video_ram.begin(), 8192, display.graphics.begin());
  for (unsigned i = 0; i < 1024; ++i)
    display.tilemap[i] = source.bus->video_ram[0xb000 + i * 2] |
                         unsigned(source.bus->video_ram[0xb001 + i * 2]) << 8;
  for (unsigned axis = 0; axis < 2; ++axis) {
    display.staged_scroll[axis] = {std::uint16_t(source.word(0x31 + axis * 4)),
                                   std::uint16_t(source.word(0x33 + axis * 4))};
  }
  for (unsigned bank = 0; bank < 16; ++bank)
    for (unsigned c = 0; c < 16; ++c) {
      colors.staged[bank][c] = source.word(0x200 + bank * 32 + c * 2);
      colors.displayed[bank][c] =
          source.bus->palette_ram[bank * 32 + c * 2] |
          unsigned(source.bus->palette_ram[bank * 32 + c * 2 + 1]) << 8;
    }
  colors.upload_mode = ram[0x30];
  effects.speed = source.word(source.p.effect_speed);
  for (unsigned b = 0; b < 4; ++b) {
    auto &e = effects.banks[b];
    e.frames_left = source.word(source.p.effect_frames + b * 2);
    for (unsigned i = 0; i < 48; ++i) {
      e.deltas[i] = source.word(source.p.deltas + b * 96 + i * 2);
      e.counters[i] = source.word(source.p.counters + b * 96 + i * 2);
      e.steps[i] = source.word(source.p.steps + b * 96 + i * 2);
    }
  }
}
void compare(Source &s, const PsiAnimationState &a,
             const PaletteBankState &colors, const PaletteEffectState &effects,
             const PsiDisplayState &display) {
  const auto p = s.p.state;
  auto &ram = s.bus->work_ram;
  const std::array<unsigned, 12> bytes{a.time_until_next_frame,
                                       a.frame_hold,
                                       a.total_frames,
                                       unsigned(a.frame_offset & 255),
                                       unsigned(a.frame_offset >> 8),
                                       0x7f,
                                       0,
                                       a.palette_lower,
                                       a.palette_upper,
                                       a.palette_index,
                                       a.palette_hold,
                                       a.palette_countdown};
  for (unsigned i = 0; i < 12; ++i)
    equal(ram[p + i], bytes[i], "PSI byte" + std::to_string(i));
  for (unsigned i = 0; i < 16; ++i)
    equal(s.word(p + 12 + i * 2), a.palette[i], "retained PSI palette");
  equal(s.word(p + 44), 0x200 + a.palette_base * 2, "palette destination");
  const std::array<unsigned, 5> enemy{a.enemy_start, a.enemy_end, a.enemy_red,
                                      a.enemy_green, a.enemy_blue};
  for (unsigned i = 0; i < 5; ++i)
    equal(s.word(p + 46 + i * 2), enemy[i], "enemy timer/channel");
  for (unsigned i = 0; i < 4; ++i)
    equal(s.word(s.p.targets + i * 2), a.enemy_targets[i], "enemy target mask");
  equal(s.word(s.p.x), a.x_offset, "X offset");
  equal(s.word(s.p.y), a.y_offset, "Y offset");
  equal(ram[0x30], colors.upload_mode, "shared palette upload mode");
  for (unsigned i = 0; i < 256; ++i)
    equal(s.word(0x200 + i * 2), colors.staged[i / 16][i % 16],
          "staged palette");
  equal(s.word(s.p.effect_speed), effects.speed, "effect speed");
  for (unsigned b = 0; b < 4; ++b) {
    const auto &e = effects.banks[b];
    equal(s.word(s.p.effect_frames + b * 2), e.frames_left, "effect frames");
    for (unsigned i = 0; i < 48; ++i) {
      equal(s.word(s.p.deltas + b * 96 + i * 2), e.deltas[i], "delta");
      equal(s.word(s.p.counters + b * 96 + i * 2), e.counters[i], "counter");
      equal(s.word(s.p.steps + b * 96 + i * 2), e.steps[i], "step");
    }
  }
  auto q = s.bus->work_ram[1];
  unsigned pending = 0;
  for (const auto &command : display.pending()) {
    require(q != ram[0], "Missing original pending DMA");
    const unsigned at = 0x400 + q;
    const bool low = command.kind == PsiTransferKind::FrameLowBytes,
               high = command.kind == PsiTransferKind::FrameHighBytes;
    equal(ram[at], low ? 6 : high ? 15 : 3, "queued DMA mode");
    equal(s.word(at + 1), low || high ? 1024 : 2048, "queued DMA size");
    equal(s.word(at + 6), 0x5800, "queued DMA destination");
    equal(s.word(at + 3) | (unsigned(ram[at + 5]) << 16),
          low    ? 0x7f0000u + command.source_offset
          : high ? s.p.dma_constant
                 : s.p.dma_constant + 1,
          "queued live source");
    q = std::uint8_t(q + 8);
    ++pending;
  }
  equal(q, ram[0], "unmatched original queue entry");
  require(pending <= 2, "Unexpected PSI queue count");
}
void compare_publication(Source &s, const PsiDisplayState &display,
                         const PaletteBankState &colors) {
  for (unsigned i = 0; i < 1024; ++i)
    equal(s.bus->video_ram[0xb000 + i * 2] |
              unsigned(s.bus->video_ram[0xb001 + i * 2]) << 8,
          display.tilemap[i], "published tilemap");
  for (unsigned i = 0; i < 256; ++i)
    equal(s.bus->palette_ram[i * 2] | unsigned(s.bus->palette_ram[i * 2 + 1])
                                          << 8,
          colors.displayed[i / 16][i % 16], "published CGRAM");
}
void pixel_compare(Source &s, unsigned depth, const PsiSceneFrame &frame) {
  const auto native = eb::rasterize_direct_scene({frame.draw(), {}}),
             original = s.pixels(depth);
  require(native.size() == original.size(), "PSI image dimensions differ");
  for (unsigned i = 0; i < native.size(); ++i) {
    ++counts.pixels;
    counts.nonblack += original[i] != 0xff000000;
    require(native[i] == original[i],
            "PSI pixel differs depth=" + std::to_string(depth) + " at=" +
                std::to_string(i) + " original=" + std::to_string(original[i]) +
                " native=" + std::to_string(native[i]));
  }
}

void resource_compare(const eb::GameAssets &assets,
                      const PsiResources &resources) {
  const auto p = layout(assets.version == eb::GameVersion::JP);
  auto word = [&](unsigned at) {
    return unsigned(assets.image.at(at)) | unsigned(assets.image.at(at + 1))
                                               << 8;
  };
  for (unsigned id = 0; id < 34; ++id) {
    const auto &d = resources.definition(id);
    const auto at = p.cfg + id * 12;
    const std::array<unsigned, 8> values{
        d.frame_hold, d.palette_hold, d.palette_lower, d.palette_upper,
        d.frames,     d.target_mode,  d.enemy_start,   d.enemy_end};
    for (unsigned i = 0; i < 8; ++i)
      equal(assets.image[at + 2 + i], values[i], "imported configuration");
    equal(word(at + 10), d.enemy_color, "imported enemy color");
    for (unsigned c = 0; c < 4; ++c)
      equal(word(p.palettes + id * 8 + c * 2), d.palette[c],
            "imported PSI palette");
  }
  for (unsigned i = 0; i < 12; ++i)
    equal(assets.image[p.cfg + 34 * 12 + i],
          resources.alias34().configuration[i], "raw ID34 alias");
  equal(word(p.pointers + 34 * 4) | (word(p.pointers + 34 * 4 + 2) << 16),
        resources.alias34().frame_pointer, "raw ID34 pointer");
}

void sequence(const eb::GameAssets &assets, const PsiResources &resources,
              unsigned depth, unsigned background_id, unsigned id,
              unsigned variant = 0) {
  Source source(assets);
  source.setup(background_id, id);
  BattleBackgroundScenes backgrounds(assets.image, assets.version);
  auto background =
      backgrounds.prepare(BattleBackgroundPair{background_id, 0, 4});
  PaletteBankState colors;
  PaletteEffectState effect_state;
  PaletteEffects effects(colors, effect_state);
  background.halve_palette(colors);
  PsiScratch scratch;
  PsiDisplayState display;
  PsiAnimationState state;
  bootstrap(source, state, scratch, display, colors, effect_state);
  const auto &definition = resources.definition(id);
  const auto graphics = resources.graphics(definition.graphics);
  require(std::equal(definition.frame_data.begin(), definition.frame_data.end(),
                     scratch.bytes.begin()),
          "Imported frame payload differs from complete original DECOMP");
  counts.bytes += definition.frame_data.size();
  for (unsigned i = 0; i < 4096; ++i) {
    const unsigned address = depth == 2 ? i : i / 16 * 32 + i % 16;
    equal(display.graphics[address],
          i < graphics.size() ? graphics[i] : std::uint8_t(i * 13 + 0x57),
          "actual graphics/retained tail");
    if (depth == 4)
      equal(display.graphics[address + 16], 0, "actual expanded high planes");
  }
  auto set_byte = [&](unsigned offset, std::uint8_t &field, unsigned value) {
    source.bus->work_ram[source.p.state + offset] = value;
    field = value;
  };
  auto set_word = [&](unsigned offset, std::uint16_t &field, unsigned value) {
    source.put(source.p.state + offset, value);
    field = value;
  };
  if (variant) {
    ++counts.custom;
    if (variant == 1) {
      set_byte(0, state.time_until_next_frame, 1);
      set_byte(2, state.total_frames, 0);
      set_byte(11, state.palette_countdown, 1);
    }
    if (variant == 2) {
      set_byte(0, state.time_until_next_frame, 0);
      set_byte(11, state.palette_countdown, 1);
      set_word(46, state.enemy_start, 1);
      set_word(48, state.enemy_end, 1);
    }
    if (variant == 3) {
      set_byte(0, state.time_until_next_frame, 1);
      set_byte(1, state.frame_hold, 0);
      set_byte(2, state.total_frames, 1);
      set_word(3, state.frame_offset, 0xfe00);
    }
    if (variant == 4) {
      set_byte(0, state.time_until_next_frame, 1);
      set_byte(2, state.total_frames, 0);
      set_byte(7, state.palette_lower, 0);
      set_byte(8, state.palette_upper, 15);
      set_byte(9, state.palette_index, 15);
      set_byte(11, state.palette_countdown, 1);
    }
  }
  if (variant == 5) {
    set_byte(0, state.time_until_next_frame, 0);
    set_word(46, state.enemy_start, 0);
    set_word(48, state.enemy_end, 0);
    colors.upload_mode = source.bus->work_ram[0x30] = 8;
    colors.staged[3][1] ^= 0x7fff;
    colors.staged[12][1] ^= 0x7fff;
    source.put(0x262, colors.staged[3][1]);
    source.put(0x382, colors.staged[12][1]);
  }
  PsiAnimation animation(state, scratch, display, effects, background);
  WorldSwirlState swirl;
  compare(source, state, colors, effect_state, display);
  unsigned tick = 0;
  bool did_callback = false;
  std::unique_ptr<PsiSceneFrame> prior;
  std::vector<std::uint32_t> prior_pixels;
  do {
    require(tick < 512, "Native/source animation lifetime exceeds bound");
    const auto background_clock = background.primary().state();
    const auto background_effects = background.effects();
    source.call(source.p.advance);
    animation.advance();
    require(background.primary().state() == background_clock &&
                background.effects() == background_effects,
            "PSI advance ticked unrelated background controllers");
    for (unsigned color = 0; color < 16; ++color)
      equal(source.word(source.p.record + 12 + color * 2),
            background.primary().packed_palette_base()[color],
            "raw background palette base");
    ++counts.advances;
    compare(source, state, colors, effect_state, display);
    const bool changed = !display.pending().empty();
    if (changed) {
      if (display.pending()[0].kind == PsiTransferKind::Clear)
        ++counts.clears;
      else
        ++counts.map_frames;
    }
    const unsigned mode = colors.upload_mode;
    source.call(source.p.effects);
    effects.advance();
    if (mode == 24 && colors.upload_mode == 16)
      ++counts.mode_overwrites;
    compare(source, state, colors, effect_state, display);
    // Matched live writer after queueing: DMA owns an offset, not stale bytes.
    if (variant == 3 && changed && !did_callback) {
      const auto at = state.frame_offset - 1024u;
      scratch.bytes[std::uint16_t(at)] ^= 3;
      source.bus->work_ram[65536 + std::uint16_t(at)] ^= 3;
      ++counts.scratch_callbacks;
      did_callback = true;
    }
    // A later external palette writer is observed only for the mode-selected
    // publication range. This is explicit input, not a service success stub.
    if (variant == 4 && tick == 0) {
      colors.staged[3][1] ^= 31;
      source.put(0x262, colors.staged[3][1]);
      ++counts.palette_callbacks;
    }
    for (unsigned busy : {0u, 1u, 255u}) {
      swirl.update_in = busy;
      source.bus->work_ram[source.p.swirl] = busy;
      source.call(source.p.gate);
      equal(source.cpu.accumulator & 65535, animation.busy(swirl),
            "complete busy helper");
      ++counts.gates;
    }
    swirl.update_in = 0;
    source.bus->work_ram[source.p.swirl] = 0;
    source.transfer();
    display.publish_pending(scratch);
    colors.publish_pending();
    display.publish_scroll();
    compare(source, state, colors, effect_state, display);
    compare_publication(source, display, colors);
    if (changed || variant) {
      if (prior) {
        auto unchanged = eb::rasterize_direct_scene({prior->draw(), {}});
        require(unchanged == prior_pixels, "Earlier PSI capture changed");
        counts.immutable += unchanged.size();
      }
      prior = std::make_unique<PsiSceneFrame>(display, colors, depth);
      pixel_compare(source, depth, *prior);
      prior_pixels = eb::rasterize_direct_scene({prior->draw(), {}});
    }
    ++tick;
  } while (variant ? tick < 3
                   : (state.time_until_next_frame || state.enemy_start ||
                      state.enemy_end ||
                      std::any_of(
                          effect_state.banks.begin(), effect_state.banks.end(),
                          [](const auto &b) { return b.frames_left != 0; })));
}
void overlap(const eb::GameAssets &assets, unsigned depth,
             unsigned background_id, bool alternate) {
  Source source(assets);
  source.setup(background_id, 0, true);
  BattleBackgroundScenes backgrounds(assets.image, assets.version);
  auto background =
      backgrounds.prepare(BattleBackgroundPair{background_id, 0, 4});
  PaletteBankState colors;
  PaletteEffectState effect_state;
  PaletteEffects effects(colors, effect_state);
  background.halve_palette(colors);
  PsiScratch scratch;
  PsiDisplayState display;
  PsiAnimationState state;
  bootstrap(source, state, scratch, display, colors, effect_state);
  PsiAnimation animation(state, scratch, display, effects, background);
  BattleCombatants catalog(assets.image, assets.version);
  auto objects = catalog.prepare(176);
  require(objects.resources().size() == 4,
          "Overlap case lost four physical banks");
  for (unsigned b = 0; b < 4; ++b)
    for (unsigned c = 1; c < 16; ++c) {
      colors.staged[12 + b][c] ^= 0x7fff;
      source.put(0x380 + b * 32 + c * 2, colors.staged[12 + b][c]);
    }
  colors.upload_mode = source.bus->work_ram[0x30] = 24;
  dialogue::State text_state;
  auto fonts = dialogue::FontResources::import(assets.image, assets.version);
  auto resources =
      dialogue::WindowResources::import(assets.image, assets.version);
  dialogue::TextOutput output(fonts, text_state);
  dialogue::WindowHost windows(resources, text_state, output);
  eb::DirectSceneFrame::Effects policy;
  policy.main[depth == 2 ? 1 : 0] = true;
  policy.main[4] = true;
  story::BattlePublication publication(colors, scratch, display, background,
                                       objects, windows, policy);
  eb::DirectSceneFrame stamp;
  stamp.width = 256;
  std::vector<BattleCombatantPresentation> actors;
  std::fill_n(source.bus->work_ram.begin() + source.p.battlers, 32 * 78, 0);
  for (unsigned b = 0; b < 4; ++b) {
    BattleCombatantPresentation actor;
    actor.slot = 8 + b;
    actor.resource = b;
    actor.identity = b + 1;
    actor.x = std::uint8_t(82 + b * 30);
    actor.y = std::uint8_t(100 + (b & 1) * 20);
    actor.row = b & 1;
    actor.alternate = alternate;
    actors.push_back(actor);
    const unsigned at = source.p.battlers + actor.slot * 78;
    source.bus->work_ram[at + 2] = 1;
    source.bus->work_ram[at + 12] = 1;
    source.bus->work_ram[at + 14] = 1;
    source.bus->work_ram[at + 16] = actor.row;
    source.bus->work_ram[at + 67] = b;
    source.bus->work_ram[at + 68] = actor.x;
    source.bus->work_ram[at + 69] = actor.y;
    source.bus->work_ram[at + 75] = alternate;
  }
  bool witnessed = false;
  for (unsigned tick = 0; tick < 150 && !witnessed; ++tick) {
    // Original and native row producers run before the late PSI/palette work.
    source.call(source.jp ? 0xc2f812 : 0xc2f8f9);
    objects.publish(actors);
    const auto selected = objects.snapshot();
    for (const auto &command : selected.commands())
      (alternate ? counts.alternate_banks : counts.normal_banks) |=
          1u << command.resource;
    source.call(source.p.advance);
    animation.advance();
    ++counts.advances;
    compare(source, state, colors, effect_state, display);
    const bool new_frame = !display.pending().empty();
    source.call(source.p.effects);
    effects.advance();
    compare(source, state, colors, effect_state, display);
    source.transfer(false);
    display.publish_pending(scratch);
    colors.publish_pending();
    display.publish_scroll();
    objects.publish_palettes();
    compare_publication(source, display, colors);
    if (!new_frame)
      continue;
    auto high = publication.capture(stamp);
    const auto native = eb::rasterize_direct_scene({high, {}});
    const auto original = source.pixels(depth, true);
    const auto psi = eb::rasterize_direct_scene(
        {PsiSceneFrame(display, colors, depth).draw(), {}});
    const auto enemy =
        eb::rasterize_direct_scene({objects.snapshot().draw(), {}});
    for (unsigned i = 0; i < native.size(); ++i) {
      ++counts.composed_pixels;
      require(native[i] == original[i],
              "Actual PSI/object high-priority composite differs at " +
                  std::to_string(i));
      if (psi[i] != 0xff000000 && enemy[i] != 0xff000000 &&
          psi[i] != enemy[i]) {
        require(original[i] == psi[i], "Original high PSI did not cover enemy");
        ++counts.overlap_high;
        witnessed = true;
      }
    }
    if (!witnessed)
      continue;
    // A separate retained-plane renderer input exercises low priority. It is
    // transported by the complete original TRANSFER_TO_VRAM helper, not by an
    // invented PSI command: authored C2E6B6 always emits high-priority0x30.
    for (unsigned i = 0; i < 1024; ++i) {
      display.tilemap[i] &= ~0x2000u;
      source.bus->work_ram[65536 + i * 2] = display.tilemap[i];
      source.bus->work_ram[65537 + i * 2] = display.tilemap[i] >> 8;
    }
    source.put(0x1e0e, 0);
    source.put(0x1e10, 0x7f);
    source.call(source.p.enable);
    source.call(0xc085b7, 0, 2048, 0x5800);
    source.disable_nmi();
    ++counts.retained_map_inputs;
    compare_publication(source, display, colors);
    const auto low = publication.capture(stamp);
    const auto low_native = eb::rasterize_direct_scene({low, {}});
    const auto low_original = source.pixels(depth, true);
    const auto low_psi = eb::rasterize_direct_scene(
        {PsiSceneFrame(display, colors, depth).draw(), {}});
    for (unsigned i = 0; i < low_native.size(); ++i) {
      ++counts.composed_pixels;
      require(low_native[i] == low_original[i],
              "Actual PSI/object low-priority composite differs at " +
                  std::to_string(i));
      if (low_psi[i] != 0xff000000 && enemy[i] != 0xff000000 &&
          low_psi[i] != enemy[i]) {
        require(low_original[i] == enemy[i], "Original low PSI covered enemy");
        ++counts.overlap_low;
      }
    }
    require(
        eb::rasterize_direct_scene({high, {}}) == native,
        "Published high-priority picture changed after retained plane rewrite");
    counts.immutable += native.size();
  }
  require(witnessed, "No non-vacuous PSI/object overlap witness");
}
void retained_background_handoff(const eb::GameAssets &assets) {
  Source source(assets);
  BattleBackgroundScenes backgrounds(assets.image, assets.version);
  const unsigned load = source.jp ? 0xc2d0d5 : 0xc2d121;
  source.call(load, 0, 45, 4);
  auto active = backgrounds.prepare(BattleBackgroundPair{0, 45, 4});
  auto packed = [](PaletteColor c) {
    return unsigned(c.red) | unsigned(c.green) << 5 | unsigned(c.blue) << 10;
  };
  auto compare_retained = [&](const BattleBackgroundPalette &native) {
    for (unsigned i = 0; i < 16; ++i) {
      equal(source.word(source.p.record + 119 + 12 + i * 2),
            packed(native.base[i]) |
                (((native.base_high_bits >> i) & 1u) << 15),
            "retained secondary raw base");
      equal(source.word(source.p.record + 119 + 44 + i * 2),
            packed(native.backup[i]) |
                (((native.backup_high_bits >> i) & 1u) << 15),
            "retained secondary raw backup");
    }
  };
  const auto retained = active.retained_secondary_palette();
  compare_retained(retained);
  require(retained.base_high_bits != 0 && retained.backup_high_bits != 0,
          "Authored secondary background lost the raw high-bit witness");
  source.call(load, 0, 0, 4);
  BattleBackgroundStart start;
  start.retained_secondary_palette = retained;
  auto inactive = backgrounds.prepare(BattleBackgroundPair{0, 0, 4}, start);
  require(!inactive.secondary(),
          "Retained background unexpectedly remained active");
  compare_retained(inactive.retained_secondary_palette());
  // The complete real LOAD helpers supply the publication entry state; the
  // native scene preparation independently supplies the retained raw owner.
  // Subsequent complete halve/restore compare every staged palette word.
  PaletteBankState colors;
  for (unsigned i = 0; i < 256; ++i)
    colors.staged[i / 16][i % 16] = source.word(0x200 + i * 2);
  colors.upload_mode = source.bus->work_ram[0x30];
  auto compare_after = [&] {
    compare_retained(inactive.retained_secondary_palette());
    for (unsigned i = 0; i < 16; ++i)
      equal(source.word(source.p.record + 12 + i * 2),
            inactive.primary().packed_palette_base()[i],
            "handoff primary raw base");
    for (unsigned i = 0; i < 256; ++i)
      equal(source.word(0x200 + i * 2), colors.staged[i / 16][i % 16],
            "handoff staged palettes");
    equal(source.bus->work_ram[0x30], colors.upload_mode,
          "handoff upload intent");
  };
  source.call(source.jp ? 0xc2dd84 : 0xc2de0f);
  inactive.halve_palette(colors);
  compare_after();
  equal(inactive.retained_secondary_palette().base_high_bits, 0,
        "halve clears retained base high bits");
  source.call(source.jp ? 0xc2de0b : 0xc2de96);
  inactive.restore_palette(colors);
  compare_after();
  equal(inactive.retained_secondary_palette().base_high_bits,
        retained.backup_high_bits, "restore returns retained raw high bits");
  ++counts.retained_background_handoffs;
}
void run(const eb::GameAssets &assets) {
  counts = {};
  const auto resources = PsiResources::import(assets.image, assets.version);
  resource_compare(assets, *resources);
  retained_background_handoff(assets);
  BattleBackgrounds backgrounds(assets.image,
                                battle_background_layout(assets.version));
  for (unsigned depth : {2u, 4u}) {
    unsigned background = 0;
    while (background < backgrounds.size() &&
           backgrounds.definition(background).bitdepth != depth)
      ++background;
    require(background < backgrounds.size(),
            "No authored background for pixel depth");
    for (unsigned id = 0; id < 34; ++id)
      sequence(assets, *resources, depth, background, id);
    for (unsigned variant = 1; variant <= 5; ++variant)
      sequence(assets, *resources, depth, background, 1, variant);
    for (bool alternate : {false, true})
      overlap(assets, depth, background, alternate);
  }
  require(counts.setups == 82 && counts.advances > 0 && counts.map_frames > 0 &&
              counts.clears > 0 && counts.mode_overwrites > 0 &&
              counts.scratch_callbacks == 2 && counts.palette_callbacks == 2 &&
              counts.pixels > 0 && counts.nonblack > 0 &&
              counts.overlap_high > 0 && counts.overlap_low > 0 &&
              counts.normal_banks == 15 && counts.alternate_banks == 15 &&
              counts.retained_map_inputs == 4 &&
              counts.retained_background_handoffs == 1,
          "Required PSI coverage absent");
  std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << ": original setup bootstraps=" << counts.setups
            << " complete advances=" << counts.advances
            << " gates=" << counts.gates << " NMI=" << counts.nmis
            << " publications=" << counts.transfers
            << " frame maps=" << counts.map_frames
            << " clears=" << counts.clears
            << " mode24_to16=" << counts.mode_overwrites
            << " words=" << counts.words << " payload_bytes=" << counts.bytes
            << " pixels=" << counts.pixels
            << " immutable_pixels=" << counts.immutable
            << " nonblack=" << counts.nonblack
            << " composed_pixels=" << counts.composed_pixels
            << " high_overlap=" << counts.overlap_high
            << " low_overlap=" << counts.overlap_low
            << " retained_handoffs=" << counts.retained_background_handoffs
            << " instructions=" << counts.instructions << '\n';
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "Local asset packs required\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
  std::cout
      << "Complete PSI advance/gate, actual NMI map/palette publication and "
         "plane pixels passed. Setup is original-only bootstrap; full "
         "SHOW/action/battle-frame/audio integration remains separate.\n";
}
