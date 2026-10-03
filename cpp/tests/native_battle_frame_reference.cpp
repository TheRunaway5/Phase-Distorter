// Complete original C2DB3F and C43568 reference. Original setup, transfer,
// NMI, meter, object and effect bodies execute without completion bypasses.
// Native state and display are produced by the real shared frame/Scene owners.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/action_scripts.hpp"
#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/frame.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle/psi_resources.hpp"
#include "eb/native/battle/psi_scene.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/meter_windows.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/world_encounter.hpp"
#include "eb/native/world_layers.hpp"
#include "eb/native/world_map.hpp"
#include "eb/native/world_palettes.hpp"
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
  std::uint64_t words{}, scratch_bytes{}, roster_bytes{}, pixels{},
      instructions{};
  unsigned setups{}, dispatches{}, wrappers{}, commands{}, nmis{}, polls{},
      waits{}, publications{}, source_publications{}, callbacks{},
      visible_sequences{}, advances{}, setup_polls{}, bodies{}, wrappers_done{},
      meter_pixels{}, queue_cases{}, emitted_banks{}, body_publications{};
  std::uint64_t nonblack{}, immutable_pixels{};
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
  unsigned nmi_entries{}, input_polls{}, explicit_waits{};
  unsigned observed_fixed_color{};
  enum class Boundary { WaitEntry, WaitReturn, InputPoll, NmiEntry };
  std::function<void(Source &, Boundary)> observer;
  struct WaitReturn {
    unsigned pc, stack;
  };
  std::vector<WaitReturn> wait_returns;
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
    bus->work_ram[0x2e] =
        1; // Real OAM buffer selector, whose legal values are 1 and 2.
    bus->write_byte(0x2100, 0x80);
    bus->work_ram[0x11] = 0x58;
    bus->work_ram[0x12] = 0x5c;
    bus->work_ram[0x13] = 0x7c;
    bus->work_ram[0x14] = 0x0c;
    bus->work_ram[0x15] = 0x10;
    bus->work_ram[0x16] = 0x63;
    // The battle caller installs these map registers before LOAD_BATTLE_BG.
    // The 4bpp loader retains them; NMI publishes NBA but not BGxSC.
    for (unsigned i = 0; i < 4; ++i)
      bus->write_byte(0x2107 + i, bus->work_ram[0x11 + i]);
    cpu.observe_memory_write = [&](std::uint32_t address, std::uint8_t value) {
      if ((address & 0x40ffff) == 0x2132) {
        if (value & 0x20)
          observed_fixed_color = (observed_fixed_color & ~31u) | (value & 31u);
        if (value & 0x40)
          observed_fixed_color =
              (observed_fixed_color & ~(31u << 5)) | ((value & 31u) << 5);
        if (value & 0x80)
          observed_fixed_color =
              (observed_fixed_color & ~(31u << 10)) | ((value & 31u) << 10);
      }
    };
  }
  ~Source() {
    counts.instructions += cpu.instruction_count;
    counts.nmis += nmi_entries;
    counts.polls += input_polls;
    counts.waits += explicit_waits;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void call(unsigned pc, unsigned a = 0, unsigned x = 0, unsigned y = 0,
            bool far = true) {
    require(cpu.stack_pointer == 0x1fff && cpu.direct_page == 0x1e00,
            "Original context not restored");
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = (pc & 0xff0000) | 0xff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    const unsigned finish = cpu.program_counter + (far ? 4 : 3);
    if (far)
      cpu.execute_instruction<0x22>(pc, 4);
    else
      cpu.execute_instruction<0x20>(pc & 0xffff, 3);
    for (unsigned i = 0; i < 10000000; ++i) {
      if (!wait_returns.empty() &&
          cpu.program_counter == wait_returns.back().pc &&
          cpu.stack_pointer == wait_returns.back().stack) {
        wait_returns.pop_back();
        if (observer)
          observer(*this, Boundary::WaitReturn);
      }
      if (cpu.program_counter == finish && cpu.stack_pointer == 0x1fff)
        return;
      if (cpu.program_counter == 0xc08170) {
        ++nmi_entries;
        if (observer)
          observer(*this, Boundary::NmiEntry);
      }
      if (cpu.program_counter == 0xc08496) {
        ++input_polls;
        if (observer)
          observer(*this, Boundary::InputPoll);
      }
      if (cpu.program_counter == p.wait) {
        ++explicit_waits;
        const auto sp = cpu.stack_pointer;
        wait_returns.push_back({((word(sp + 1) + 1) & 0xffff) |
                                    (unsigned(bus->work_ram[sp + 3]) << 16),
                                unsigned(sp + 3)});
        if (observer)
          observer(*this, Boundary::WaitEntry);
      }
      cpu.step_instruction();
    }
    throw std::runtime_error("Original helper did not return: " +
                             cpu.describe_registers());
  }
  void disable_nmi() {
    bus->write_byte(0x4200, 0);
    bus->work_ram[0x1e] = 0;
  }
  void prepare(unsigned background, bool blank, unsigned secondary = 0,
               unsigned style = 4) {
    call(0xc08522);
    call(jp ? 0xc2d0d5 : 0xc2d121, background, secondary, style);
    bus->work_ram[0xd] = blank ? 0x80 : 15;
    bus->write_byte(0x2100, blank ? 0x80 : 15);
    call(p.enable);
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
    ++counts.source_publications;
  }
  std::vector<std::uint32_t> pixels() {
    // Every register, OAM entry, palette and graphics word has reached the
    // PPU through the original body/NMI. Sampling does not replace policy.
    const auto end = bus->completed_frames + 2;
    while (bus->completed_frames < end)
      bus->advance_cpu_cycles(3000);
    return {bus->native_framebuffer.begin(), bus->native_framebuffer.end()};
  }
};

using Bytes = std::array<std::uint8_t, 78>;
void put(std::span<std::uint8_t> bytes, unsigned offset, unsigned value) {
  bytes[offset] = std::uint8_t(value);
  bytes[offset + 1] = std::uint8_t(value >> 8);
}
void put32(std::span<std::uint8_t> bytes, unsigned offset,
           std::uint32_t value) {
  put(bytes, offset, value);
  put(bytes, offset + 2, value >> 16);
}
// Independent source offsets from include/structs.asm::battler. Neither packing
// nor conversion routines from the new implementation generate expected bytes.
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

// Native setup/dispatch operation cases follow in this new fixture.

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
    equal(ram[at],
          low                                         ? 6
          : high                                      ? 15
          : command.kind == PsiTransferKind::Graphics ? 0
                                                      : 3,
          "queued DMA mode");
    equal(s.word(at + 1),
          low || high                                 ? 1024
          : command.kind == PsiTransferKind::Graphics ? command.byte_count
                                                      : 2048,
          "queued DMA size");
    equal(s.word(at + 6),
          command.kind == PsiTransferKind::Graphics ? command.destination / 2
                                                    : 0x5800,
          "queued DMA destination");
    equal(s.word(at + 3) | (unsigned(ram[at + 5]) << 16),
          (low || command.kind == PsiTransferKind::Graphics)
              ? 0x7f0000u + command.source_offset
          : high ? s.p.dma_constant
                 : s.p.dma_constant + 1,
          "queued live source");
    q = std::uint8_t(q + 8);
    ++pending;
  }
  equal(q, ram[0], "unmatched original queue entry");
  require(pending <= 31, "Unexpected transport queue count");
  equal(s.word(0x99), display.pending_bytes(), "raw DMA byte counter");
  equal(ram[0], display.producer_index(), "DMA producer");
  equal(ram[1], display.consumer_index(), "DMA consumer");
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

void compare_scratch(Source &source, const PsiScratch &scratch) {
  for (unsigned i = 0; i < scratch.bytes.size(); ++i) {
    ++counts.scratch_bytes;
    require(source.bus->work_ram[65536 + i] == scratch.bytes[i],
            "retained scratch differs at " + std::to_string(i));
  }
}
void compare_graphics(Source &source, const PsiDisplayState &display) {
  for (unsigned i = 0; i < display.graphics.size(); ++i)
    equal(source.bus->video_ram[i], display.graphics[i], "visible graphics");
}
void compare_roster(Source &source, const Roster &roster) {
  for (unsigned slot = 0; slot < 32; ++slot) {
    const auto value = encode(roster.at(slot));
    for (unsigned i = 0; i < value.size(); ++i) {
      ++counts.roster_bytes;
      require(source.bus->work_ram[source.p.battlers + slot * 78 + i] ==
                  value[i],
              "whole battler differs slot=" + std::to_string(slot) +
                  " byte=" + std::to_string(i));
    }
  }
}

// All common entry inputs are established before either setup executes.
// The original LOAD_BATTLE_BG is entry preparation, not the helper under test.
void seed_entry(Source &source, PsiAnimationState &state, PsiScratch &scratch,
                PsiDisplayState &display, PaletteBankState &colors,
                PaletteEffectState &effect_state, Roster &roster,
                ActionState &action) {
  state.time_until_next_frame = 71;
  state.frame_hold = 93;
  state.total_frames = 87;
  state.frame_offset = 0x7400;
  state.palette_lower = 1;
  state.palette_upper = 3;
  state.palette_index = 2;
  state.palette_hold = 53;
  state.palette_countdown = 37;
  state.palette_base = 80;
  state.enemy_start = 0x129;
  state.enemy_end = 0x249;
  state.enemy_red = 13;
  state.enemy_green = 27;
  state.enemy_blue = 19;
  state.x_offset = 0x8357;
  state.y_offset = 0x2468;
  for (unsigned i = 0; i < 16; ++i)
    state.palette[i] = std::uint16_t(0x8111 + i * 0x101);
  for (unsigned i = 0; i < 4; ++i)
    state.enemy_targets[i] = 0x129 + i;
  const auto at = source.p.state;
  const std::array<unsigned, 12> state_bytes{state.time_until_next_frame,
                                             state.frame_hold,
                                             state.total_frames,
                                             state.frame_offset & 255u,
                                             unsigned(state.frame_offset) >> 8u,
                                             0x7f,
                                             0,
                                             state.palette_lower,
                                             state.palette_upper,
                                             state.palette_index,
                                             state.palette_hold,
                                             state.palette_countdown};
  for (unsigned i = 0; i < state_bytes.size(); ++i)
    source.bus->work_ram[at + i] = std::uint8_t(state_bytes[i]);
  for (unsigned i = 0; i < 16; ++i)
    source.put(at + 12 + i * 2, state.palette[i]);
  source.put(at + 44, 0x200 + state.palette_base * 2);
  const std::array<unsigned, 5> channels{state.enemy_start, state.enemy_end,
                                         state.enemy_red, state.enemy_green,
                                         state.enemy_blue};
  for (unsigned i = 0; i < channels.size(); ++i)
    source.put(at + 46 + i * 2, channels[i]);
  for (unsigned i = 0; i < 4; ++i)
    source.put(source.p.targets + i * 2, state.enemy_targets[i]);
  source.put(source.p.x, state.x_offset);
  source.put(source.p.y, state.y_offset);
  for (unsigned i = 0; i < 65536; ++i)
    source.bus->work_ram[65536 + i] = scratch.bytes[i] =
        std::uint8_t(i * 13 + 0x57);
  // Nonzero entry VRAM proves untransferred graphics remain intact. Later
  // changes are made only by actual source DMA and the native transport.
  for (unsigned i = 0; i < 8192; ++i) {
    if (i < (source.bus->work_ram[source.p.record + 1] == 2 ? 4096u : 8192u))
      source.bus->video_ram[i] = display.graphics[i] =
          std::uint8_t(i * 11 + 0x35);
    else
      // In2bpp the upper physical range contains BG4's map at0x1800.
      // Retain that external LOAD entry; the independently imported native
      // background owns its artwork. No frame/setup output is copied here.
      display.graphics[i] = source.bus->video_ram[i];
  }
  for (unsigned i = 0; i < 1024; ++i)
    display.tilemap[i] = source.bus->video_ram[0xb000 + i * 2] |
                         unsigned(source.bus->video_ram[0xb001 + i * 2]) << 8;
  for (unsigned layer = 0; layer < 2; ++layer) {
    const PsiScroll value{std::uint16_t(0x1234 + layer * 11),
                          std::uint16_t(0x3456 + layer * 13)};
    display.staged_scroll[layer] = value;
    source.put(0x31 + layer * 4, value.x);
    source.put(0x33 + layer * 4, value.y);
  }
  for (unsigned bank = 0; bank < 16; ++bank)
    for (unsigned color = 0; color < 16; ++color) {
      const auto v = std::uint16_t(0x8000 + bank * 1721 + color * 73);
      colors.staged[bank][color] = v;
      source.put(0x200 + bank * 32 + color * 2, v);
      // Only pre-entry display state from the background loader is shared.
      colors.displayed[bank][color] =
          source.bus->palette_ram[bank * 32 + color * 2] |
          unsigned(source.bus->palette_ram[bank * 32 + color * 2 + 1]) << 8;
    }
  colors.upload_mode = source.bus->work_ram[0x30] = 0;
  effect_state.speed = 29;
  source.put(source.p.effect_speed, effect_state.speed);
  for (unsigned bank = 0; bank < 4; ++bank) {
    auto &b = effect_state.banks[bank];
    b.frames_left = 0x80 + bank;
    source.put(source.p.effect_frames + bank * 2, b.frames_left);
    for (unsigned i = 0; i < 48; ++i) {
      b.deltas[i] = std::uint16_t(0x8221 + bank * 71 + i * 31);
      b.counters[i] = std::uint16_t(0x9531 + bank * 13 + i * 17);
      b.steps[i] = std::uint16_t(0x4811 + bank * 23 + i * 11);
      source.put(source.p.deltas + bank * 96 + i * 2, b.deltas[i]);
      source.put(source.p.counters + bank * 96 + i * 2, b.counters[i]);
      source.put(source.p.steps + bank * 96 + i * 2, b.steps[i]);
    }
  }
  for (unsigned slot = 0; slot < 32; ++slot) {
    auto &b = roster.at(slot);
    b.id = std::uint16_t(0x7000 + slot);
    b.sprite = std::uint16_t(1 + slot);
    b.action = std::uint16_t(17 + slot);
    b.hp = std::uint16_t(273 + slot);
    b.maximum_hp = std::uint16_t(831 + slot);
    b.pp = std::uint16_t(119 + slot);
    b.money = std::uint16_t(351 + slot);
    b.experience = 0x12678400u + slot;
    b.consciousness = 1;
    b.side = slot < 8 ? 0 : 1;
    b.npc = 0;
    b.afflictions[0] = slot % 7 == 0 ? 1 : 0;
    b.row = std::uint8_t((slot + 1) % 2);
    b.x = std::uint8_t(35 + slot * 17);
    b.y = std::uint8_t(88 + slot % 3 * 12);
    b.resource = std::uint8_t(slot % 4);
    b.alternate = std::uint8_t(slot % 5 == 0 ? 0xa5 : 0);
    b.targeted = 0x7a;
    b.original_enemy = std::uint16_t(119 + slot);
    const auto bytes = encode(b);
    std::copy(bytes.begin(), bytes.end(),
              source.bus->work_ram.begin() + source.p.battlers + slot * 78);
  }
  action.target = 8;
  source.put(source.p.target, source.p.battlers + 8 * 78);
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
  PaletteBankState colors;
  PaletteEffectState effect_state;
  PaletteEffects effects;
  PsiAnimationState state;
  PsiScratch scratch;
  PsiDisplayState display;
  Roster roster;
  ActionState action;
  story::TickState clock;
  story::InputState input;
  WorldDisplayFade fade;
  PsiSetup setup;
  WorldSwirlState swirl;
  WorldEncounterVisualState visual;
  AnimationCommands commands;
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  party::State party;
  party::MeterWindows meters;
  story::RandomState random{1, 2};
  ActorWorld actors;
  WorldMapArea area;
  AreaPalettes area_colors;
  BattleCombatantScene objects;
  FrameState frame_state;
  FrameDisplay frame_display;
  PsiAnimation animation;
  WorldLayerSelection layer;
  std::unique_ptr<Frame> frame;
  std::shared_ptr<dialogue::WindowGraphics> graphics;
  std::unique_ptr<story::BattlePublication> publication;
  std::unique_ptr<story::Scene> scene;
  unsigned depth;
  explicit Pair(Shared &a, unsigned background_id, bool blank,
                unsigned secondary = 0, unsigned style = 4)
      : shared(a), source(a.assets),
        background(a.backgrounds.prepare(
            BattleBackgroundPair{background_id, secondary, style})),
        effects(colors, effect_state), roster(a.enemies),
        fade(WorldDisplayFadeState{std::uint8_t(blank ? 0x80 : 15)}),
        setup(a.psi, state, scratch, display, effects, background, roster,
              action, a.combatants, fade, clock),
        commands(setup, *a.psi, roster, action, background, colors, a.swirl,
                 swirl, visual),
        output(a.fonts, text), windows(a.windows, text, output),
        party(a.assets.version), meters(windows, party, a.meters),
        actors(a.sprites, a.scripts, a.assets.version),
        area(a.map.prepare(0, a.flags)),
        area_colors(a.world_colors.resolve({0, 0}, a.flags)),
        objects(a.combatants.prepare(176)), frame_display(display),
        animation(state, scratch, display, effects, background),
        depth(background.primary().definition().bitdepth) {
    source.prepare(background_id, blank, secondary, style);
    seed_entry(source, state, scratch, display, colors, effect_state, roster,
               action);
    visual.visible_layers[depth == 2 ? 1 : 0] = true;
    publication = std::make_unique<story::BattlePublication>(
        colors, scratch, display, background, objects, windows, visual, fade);
    scene =
        std::make_unique<story::Scene>(windows, party, random, meters, clock,
                                       input, actors, area, area_colors);
    scene->bind_publication(*publication);
    scene->bind_battle_animations(commands);
    publication->bind_frame_display(frame_display);
    frame = std::make_unique<Frame>(
        frame_state, background, roster, objects, animation, effects, colors,
        display, frame_display, fade, clock, windows, party, meters, a.swirl,
        a.encounter, swirl, visual, a.layers, layer);
    // Setup must finish before the battle-body service is bound: SHOW owns
    // a WAIT, but it does not itself call C2DB3F.
  }

  void sync_record(unsigned slot) {
    const auto bytes = encode(roster.at(slot));
    std::copy(bytes.begin(), bytes.end(),
              source.bus->work_ram.begin() + source.p.battlers + slot * 78);
  }
  void target(unsigned slot) {
    action.target = slot;
    source.put(source.p.target, source.p.battlers + slot * 78);
  }
  void compare_final() {
    compare(source, state, colors, effect_state, display);
    compare_scratch(source, scratch);
    compare_graphics(source, display);
    compare_roster(source, roster);
    compare_publication(source, display, colors);
    for (unsigned layer = 0; layer < 4; ++layer) {
      equal(source.word(0x31 + layer * 4), display.staged_scroll[layer].x,
            "staged scroll X");
      equal(source.word(0x33 + layer * 4), display.staged_scroll[layer].y,
            "staged scroll Y");
    }
    auto packed = [](PaletteColor c) {
      return unsigned(c.red) | unsigned(c.green) << 5 | unsigned(c.blue) << 10;
    };
    const auto retained = background.retained_secondary_palette();
    for (unsigned i = 0; i < 16; ++i) {
      equal(source.word(source.p.record + 12 + i * 2),
            background.primary().packed_palette_base()[i], "primary raw base");
      equal(source.word(source.p.record + 119 + 12 + i * 2),
            packed(retained.base[i]) |
                (((retained.base_high_bits >> i) & 1u) << 15),
            "secondary raw base");
      equal(source.word(source.p.record + 119 + 44 + i * 2),
            packed(retained.backup[i]) |
                (((retained.backup_high_bits >> i) & 1u) << 15),
            "secondary raw backup");
    }
  }
  void run_native(std::uint16_t first, std::uint16_t second,
                  const std::function<void()> &after_wait = {}) {
    auto operation = scene->begin_animation(first, second);
    unsigned boundaries = 0;
    while (operation->advance() != dialogue::Progress::Finished) {
      require(++boundaries < 32,
              "Native setup did not finish bounded real services");
      if (operation->service() == story::SceneService::Publication) {
        operation->complete_publication();
        ++counts.publications;
      } else if (operation->service() == story::SceneService::Frame) {
        operation->complete_frame({0x8080, 0});
        if (after_wait)
          after_wait();
      } else {
        throw std::runtime_error("Native setup left an unexpected service");
      }
    }
    require(operation->complete(), "Native setup scene did not complete");
  }
};

unsigned base(const Source &s) { return s.jp ? 0xaf5f : 0xad8a; }
void compare_background(Source &s, const BattleBackground &background,
                        unsigned ordinal) {
  const auto at = s.p.record + ordinal * 119;
  const auto &v = background.state();
  const auto byte = [&](unsigned offset, unsigned value, const char *name) {
    equal(s.bus->work_ram[at + offset], value,
          std::string("background ") + name);
  };
  const auto word = [&](unsigned offset, unsigned value, const char *name) {
    equal(s.word(at + offset), value, std::string("background ") + name);
  };
  byte(8, v.palette_step1, "palette step1");
  byte(9, v.palette_step2, "palette step2");
  byte(11, v.palette_remaining, "palette countdown");
  byte(82, v.scroll_index, "scroll index");
  word(83, v.scroll.duration, "scroll duration");
  word(85, v.horizontal_position, "X position");
  word(87, v.vertical_position, "Y position");
  word(89, v.scroll.horizontal_velocity, "X velocity");
  word(91, v.scroll.vertical_velocity, "Y velocity");
  word(93, v.scroll.horizontal_acceleration, "X acceleration");
  word(95, v.scroll.vertical_acceleration, "Y acceleration");
  byte(101, v.distortion_index, "distortion index");
  word(102, v.distortion.duration, "distortion duration");
  byte(104, v.distortion.style, "distortion style");
  word(105, v.distortion.frequency, "frequency");
  word(107, v.distortion.amplitude, "amplitude");
  byte(109, v.distortion.speed, "speed");
  word(110, v.distortion.compression, "compression");
  word(112, v.distortion.frequency_acceleration, "frequency acceleration");
  word(114, v.distortion.amplitude_acceleration, "amplitude acceleration");
  byte(116, v.distortion.speed_acceleration, "speed acceleration");
  word(117, v.distortion.compression_acceleration, "compression acceleration");
  const auto frame = background.snapshot();
  for (unsigned y = 0; y < 224; ++y)
    equal(s.word((s.jp ? 0x3fcc : 0x3c46) + ordinal * 448 + y * 2),
          frame.offsets[y], "distortion row");
}
void compare_frame(Pair &p) {
  p.compare_final();
  compare_background(p.source, p.background.primary(), 0);
  if (p.background.secondary())
    compare_background(p.source, *p.background.secondary(), 1);
  const auto &e = p.background.effects();
  const auto b = base(p.source);
  const std::array<std::pair<unsigned, unsigned>, 23> words{
      {{2, e.vertical_duration},
       {4, e.vertical_hold},
       {6, e.minimum_wait},
       {8, e.wobble_duration},
       {10, e.shake_duration},
       {12, e.horizontal_offset},
       {14, e.vertical_offset},
       {20, e.green_duration},
       {22, e.red_duration},
       {24, p.frame_state.targeting_flash},
       {26, p.frame_state.hp_pp_blink_duration},
       {28, p.frame_state.hp_pp_blink_target},
       {30, e.reflect_duration},
       {32, e.green_background_duration},
       {34, p.background.alternate_distortion()},
       {40, e.top_end},
       {42, e.bottom_start},
       {44, e.opening_letterbox},
       {66, e.opening_top},
       {68, e.opening_bottom},
       {70, e.darkening},
       {72, e.brightness},
       {0, p.layer.value}}};
  for (const auto &[offset, value] : words)
    equal(p.source.word(b + offset), value,
          "frame effect offset " + std::to_string(offset));
  equal(p.source.bus->work_ram[0x2c], p.frame_display.pending_display_id(),
        "pending OAM selector");
  equal(p.source.bus->work_ram[0x2e], p.frame_display.next_buffer_id(),
        "next OAM selector");
  equal(p.source.bus->work_ram[0x1f], p.frame_display.hdma_enable,
        "HDMA mirror");
  const auto &v = p.visual;
  unsigned main = 0, sub = 0, math = 0;
  for (unsigned i = 0; i < 5; ++i) {
    main |= unsigned(v.visible_layers[i]) << i;
    sub |= unsigned(v.subscreen_layers[i]) << i;
  }
  for (unsigned i = 0; i < 6; ++i)
    math |= unsigned(v.color_math_layers[i]) << i;
  equal(p.source.bus->work_ram[0x1a], main, "live main-screen policy");
  equal(p.source.bus->work_ram[0x1b], sub, "live sub-screen policy");
  const auto hardware = p.source.bus->scene_read_view();
  equal(hardware.ppu_registers[0x30],
        unsigned(v.clip_colors) << 6 | unsigned(v.prevent_math) << 4 |
            unsigned(v.use_subscreen) << 1,
        "live color-window policy");
  equal(hardware.ppu_registers[0x31],
        math | unsigned(v.subtract) << 7 | unsigned(v.half_intensity) << 6,
        "live color math");
  equal(hardware.fixed_color,
        unsigned(v.fixed_color.red) | unsigned(v.fixed_color.green) << 5 |
            unsigned(v.fixed_color.blue) << 10,
        "live fixed color");
  const auto at = p.source.p.swirl;
  const std::array<unsigned, 10> swirl_bytes{p.swirl.update_in,
                                             p.swirl.interval,
                                             p.swirl.frames_left,
                                             p.swirl.frame,
                                             p.swirl.invert,
                                             p.swirl.reverse,
                                             0,
                                             p.swirl.hdma_channel_offset,
                                             p.swirl.padding,
                                             p.swirl.restore_after};
  for (unsigned i = 0; i < swirl_bytes.size(); ++i) {
    unsigned value = swirl_bytes[i];
    if (i == 6)
      for (unsigned layer = 0; layer < 6; ++layer)
        value |= unsigned(p.swirl.masked_layers[layer]) << layer;
    equal(p.source.bus->work_ram[at + i], value,
          "swirl byte" + std::to_string(i));
  }
  const std::array<unsigned, 3> repeat{p.swirl.next, p.swirl.repeat_speed,
                                       p.swirl.repeats_until_speedup};
  for (unsigned i = 0; i < 3; ++i)
    equal(p.source.bus->work_ram[at + 34 + i], repeat[i], "swirl repeat byte");
  const auto pointer = p.source.word(at + 10) | p.source.word(at + 12) << 16;
  equal(pointer,
        p.swirl.oval ? (p.source.jp ? 0xc47a37u : 0xc4a5ceu) +
                           p.swirl.oval_state.next_step * 22
                     : 0,
        "oval source cursor");
  const auto &oval = p.swirl.oval_state;
  const std::array<unsigned, 10> oval_words{
      oval.center_x,       oval.center_y,      oval.width,      oval.height,
      oval.center_dx,      oval.center_dy,     oval.velocity_x, oval.velocity_y,
      oval.acceleration_x, oval.acceleration_y};
  for (unsigned i = 0; i < oval_words.size(); ++i)
    equal(p.source.word(at + 14 + i * 2), oval_words[i], "oval retained word");
  const auto &m = p.meters.state();
  equal(p.source.word(p.source.jp ? 0x993f : 0x9647), m.drawn_mask,
        "meter drawn flags");
  equal(p.source.word(p.source.jp ? 0x9941 : 0x9649), m.area_dirty,
        "meter dirty");
  equal(p.source.word(p.source.jp ? 0x8d08 : 0x89ca), m.selected_phase,
        "meter selected phase");
}
unsigned raster(const Source &s, unsigned descriptor, unsigned x, unsigned y) {
  if (descriptor & 0x4000)
    x = 7 - x;
  if (descriptor & 0x8000)
    y = 7 - y;
  const auto at = (0xc000 + (descriptor & 1023) * 16 + y * 2) & 65535;
  const unsigned color =
      ((s.bus->video_ram[at] >> (7 - x)) & 1) |
      (((s.bus->video_ram[(at + 1) & 65535] >> (7 - x)) & 1) << 1);
  return color ? color + ((descriptor >> 10) & 7) * 4 : 0;
}
void compare_meters(Pair &p) {
  const auto native = p.windows.scene();
  const auto at = p.source.jp ? 0x8176 : 0x7dfe;
  for (unsigned y = 0; y < 224; ++y)
    for (unsigned x = 0; x < 256; ++x) {
      const auto descriptor = p.source.word(at + ((y / 8) * 32 + x / 8) * 2);
      const auto color = raster(p.source, descriptor, x % 8, y % 8);
      equal(color, native->pixels[y * 256 + x], "staged meter pixel");
      equal(color ? bool(descriptor & 0x2000) : false,
            native->priority[y * 256 + x], "staged meter priority");
      ++counts.meter_pixels;
    }
}
void initialize_assets(Pair &p) {
  auto &s = p.source;
  s.disable_nmi();
  s.bus->work_ram[0xd] = 0x80;
  s.bus->write_byte(0x2100, 0x80);
  // Complete original object-group producer; its source count-zero records
  // are intentional and supply all four distinct physical resource banks.
  s.bus->work_ram[0xe] = 0x61;
  s.bus->write_byte(0x2101, 0x61);
  s.put(s.jp ? 0x4e12 : 0x4a8c, 176);
  s.call(s.jp ? 0xc2ee00 : 0xc2eee7);
  const auto catalog = battle_combatant_layout(p.shared.assets.version);
  for (unsigned bank = 0; bank < p.objects.resources().size(); ++bank) {
    const auto &resource = p.objects.resources()[bank];
    for (unsigned i = 0; i < 16; ++i) {
      const auto at = catalog.palettes + resource.palette_id * 32 + i * 2;
      p.colors.staged[8 + bank][i] =
          p.shared.assets.image[at] | unsigned(p.shared.assets.image[at + 1])
                                          << 8;
    }
  }
  for (unsigned slot = 8; slot < 32; ++slot) {
    p.roster.at(slot).consciousness = slot < 12 ? 1 : 0;
    p.sync_record(slot);
  }
  // Actual source meter/window initialization and font transfers. The native
  // equivalent imports the same authored artwork through its real owner.
  const unsigned game = s.jp ? 0x9aa9 : 0x97f5, chars = s.jp ? 0x9c7f : 0x99ce;
  s.bus->work_ram[game + (s.jp ? 0x1d5 : 0x1d8)] = 1;
  s.bus->work_ram[game + (s.jp ? 172 : 175)] = 4;
  s.bus->work_ram[game + (s.jp ? 118 : 121)] = 4;
  std::array<std::uint8_t, 5> name{
      std::uint8_t(s.jp ? 0x41 : 0x71), std::uint8_t(s.jp ? 0x42 : 0x72),
      std::uint8_t(s.jp ? 0x43 : 0x73), std::uint8_t(s.jp ? 0x44 : 0x74), 0};
  p.party.controlled_count = p.party.party_count = 4;
  p.party.party_order = {1, 2, 3, 4, 5, 6};
  p.party.controlled_order = {0, 1, 2, 3, 4, 5};
  for (unsigned i = 0; i < 6; ++i) {
    s.bus->work_ram[game + (s.jp ? 119 : 122) + i] = i + 1;
    s.bus->work_ram[game + (s.jp ? 153 : 156) + i] = i;
    const auto at = chars + i * (s.jp ? 94 : 95), hp = at + (s.jp ? 66 : 67);
    std::copy_n(name.begin(), s.jp ? 4 : 5, s.bus->work_ram.begin() + at);
    s.put(at + (s.jp ? 9 : 10), 200);
    s.put(at + (s.jp ? 11 : 12), 100);
    const std::array<unsigned, 6> values{1, 100 + i, 110 + i,
                                         1, 50 + i,  40 + i};
    for (unsigned j = 0; j < values.size(); ++j)
      s.put(hp + j * 2, values[j]);
    auto field = p.party.name_field(i + 1);
    std::copy_n(name.begin(), field.size(), field.begin());
    auto &v = p.party.character(i + 1);
    v.maximum_hp = 200;
    v.maximum_pp = 100;
    v.hp_fraction = 1;
    v.current_hp = 100 + i;
    v.target_hp = 110 + i;
    v.pp_fraction = 1;
    v.current_pp = 50 + i;
    v.target_pp = 40 + i;
  }
  s.call(0xc200d9);
  s.call(s.jp ? 0xc43090 : 0xc43317);
  s.call(s.jp ? 0xc459ab : 0xc47c3f);
  if (s.jp) {
    s.put(0x1e0e, 0);
    s.put(0x1e10, 0x7f);
    s.call(0xc08616, 0, 0x3800, 0x6000);
  } else
    s.call(0xc44963, 1);
  s.call(s.jp ? 0xc45c1a : 0xc47f87);
  p.graphics = std::make_shared<dialogue::WindowGraphics>(
      dialogue::WindowInitializationResources::import(p.shared.assets.image,
                                                      p.shared.assets.version),
      p.output);
  p.windows.set_graphics(p.graphics);
  dialogue::PartyNameInputs names;
  for (auto &v : names.names)
    v = name;
  p.graphics->prepare(names, 1);
  auto publication = p.graphics->begin_publication(
      s.jp ? dialogue::ArtworkPublication::All
           : dialogue::ArtworkPublication::GeneratedThenCommon);
  while (publication->advance() == dialogue::Progress::Suspended)
    publication->respond();
  require(publication->complete(), "Actual native font publication incomplete");
  p.windows.publish_palette(1, false, false);
  s.put(s.jp ? 0x8d08 : 0x89ca, 0xffff);
  for (unsigned i = 0; i < 65536; ++i)
    s.bus->work_ram[65536 + i] = p.scratch.bytes[i] =
        std::uint8_t(i * 13 + 0x57);
  // A legal explicit battle entry. Prior object/font preparation used forced
  // blank, while all following visible transfers use the real NMI queue.
  s.bus->work_ram[0xd] = 15;
  s.bus->write_byte(0x2100, 15);
  s.put(s.jp ? 0x993b : 0x9643, 1);
  p.windows.prompt_state().battle_mode = 1;
  for (unsigned bank = 0; bank < 4; ++bank) {
    p.effect_state.banks[bank].frames_left = 0;
    s.put(s.p.effect_frames + bank * 2, 0);
  }
  // LOAD_BATTLE_BG's entry policy and installed HDMA streams are external
  // initial state for this frame claim, independently selected by depth.
  p.layer.value = p.depth == 2 ? 7 : 5;
  s.put(base(s), p.layer.value);
  s.call(s.jp ? 0xc0afac : 0xc0afcd, p.layer.value);
  apply_world_layer_configuration(p.shared.layers, p.layer, p.visual);
  p.frame_display.hdma_enable = s.bus->work_ram[0x1f];
  p.frame_display.letterbox = {
      std::uint16_t(p.background.effects().top_end),
      std::uint16_t(p.background.effects().bottom_start),
      std::uint16_t(s.word(base(s) + 36)), std::uint16_t(s.word(base(s) + 38))};
}
void begin_psi(Pair &p, unsigned id) {
  p.source.call(p.source.p.enable);
  p.source.call(p.source.p.show, id);
  p.source.disable_nmi();
  p.run_native(id, id);
  // Setup publication does not change UPDATE_SCREEN's pending selection.
  p.clock.frame_counter = p.source.bus->work_ram[2];
  p.compare_final();
  p.scene->bind_battle_frame(*p.frame);
}
void stage_effects(Pair &p, unsigned mode) {
  auto &s = p.source;
  const auto b = base(s);
  auto set = [&](unsigned offset, unsigned value) { s.put(b + offset, value); };
  if (mode == 1) {
    p.background.quake(16, 2);
    set(2, 16);
    set(4, 2);
    p.background.wobble(17);
    set(8, 17);
    p.background.shake(13);
    set(10, 13);
    p.background.wait(9);
    set(6, 9);
    p.background.reflect(9);
    set(30, 9);
    p.background.green_background(3);
    set(32, 3);
    p.background.flash_red(26);
    set(22, 26);
    p.background.flash_green(14);
    set(20, 14);
    p.frame_state.hp_pp_blink_duration = 13;
    set(26, 13);
    p.frame_state.hp_pp_blink_target = 2;
    set(28, 2);
    p.frame_state.targeting_flash = 0x8000;
    set(24, 0x8000);
  } else if (mode == 2 || mode == 6) {
    p.background.darken();
    set(70, 1);
    p.background.open_letterbox();
    set(44, 1);
    p.background.flash_red(2);
    set(22, 2);
    p.frame_state.hp_pp_blink_duration = 2;
    set(26, 2);
    p.frame_state.hp_pp_blink_target = 0;
    set(28, 0);
  }
}
void publish(Pair &p) {
  p.source.transfer(false);
  const auto before = p.display.publication_serial();
  unsigned waits = 0;
  do {
    require(++waits <= 3,
            "Display publication did not consume its pending receipt");
    auto frame = p.scene->begin(story::TickKind::Frame);
    require(frame->advance() == dialogue::Progress::Suspended &&
                frame->service() == story::SceneService::Frame,
            "Frame publication did not reach actual WAIT");
    frame->complete_frame({0, 0});
    require(frame->advance() == dialogue::Progress::Finished,
            "Display WAIT did not complete");
  } while (p.display.publication_serial() == before);
  ++counts.publications;
}

void body_case(Shared &shared, unsigned primary, unsigned secondary,
               unsigned mode, unsigned animation_id) {
  Pair p(shared, primary, false, secondary,
         mode >= 3 && mode <= 6 ? 4 + (mode - 3) % 3 + 1 : 4);
  initialize_assets(p);
  begin_psi(p, animation_id);
  stage_effects(p, mode);
  if (mode >= 7) {
    const unsigned id = mode == 8 ? 0 : 1;
    p.source.call(p.source.jp ? 0xc47ae7 : 0xc4a67e, id, 0);
    configure_world_swirl(shared.swirl, p.swirl, p.visual, id, 0);
    if (mode == 9) {
      // Actual final-frame entry, with a simultaneous flash before restoration.
      p.swirl.frames_left = p.source.bus->work_ram[p.source.p.swirl + 2] = 0;
      p.background.flash_red(14);
      p.source.put(base(p.source) + 22, 14);
    }
  }

  std::shared_ptr<const eb::DirectSceneFrame> retained;
  std::vector<std::uint32_t> retained_pixels;
  for (unsigned tick = 0; tick < (mode >= 7 ? 400u : 16u); ++tick) {
    p.source.bus->work_ram[2] = p.clock.frame_counter = std::uint8_t(tick);
    p.source.disable_nmi();
    const auto polls = p.source.input_polls;
    p.source.call(p.source.jp ? 0xc2dab4 : 0xc2db3f);
    auto body = p.frame->begin();
    require(body->advance() && body->complete(),
            "Uncontended native body unexpectedly suspended");
    require(p.source.input_polls == polls, "C2DB3F unexpectedly polled input");
    ++counts.bodies;
    compare_frame(p);
    compare_meters(p);
    publish(p);
    compare_frame(p);
    const auto original = p.source.pixels();
    const auto current = p.scene->frame();
    const auto native = eb::rasterize_direct_scene({current, {}});
    require(original.size() == native.size(), "Full-frame image sizes differ");
    if (original != native) {
      std::cerr << "Pixel diagnostic primary=" << primary
                << " secondary=" << secondary << " mode=" << mode
                << " tick=" << tick
                << " letterbox=" << p.frame_display.letterbox.top_end << ","
                << p.frame_display.letterbox.bottom_start
                << " visible=" << p.frame_display.letterbox.visible
                << " nonvisible=" << p.frame_display.letterbox.nonvisible
                << " HDMA=" << unsigned(p.source.bus->work_ram[0x1f])
                << " layers=" << unsigned(p.source.bus->work_ram[0x1a]) << ","
                << unsigned(p.source.bus->work_ram[0x1b]) << "\n";
      for (unsigned y = 0; y < 224; ++y) {
        unsigned differences = 0;
        for (unsigned x = 0; x < 256; ++x)
          differences += original[y * 256 + x] != native[y * 256 + x];
        if (differences)
          std::cerr << " row " << y << " differences=" << differences << "\n";
      }
    }
    for (unsigned i = 0; i < original.size(); ++i) {
      ++counts.pixels;
      counts.nonblack += original[i] != 0xff000000;
      require(
          original[i] == native[i],
          "Full battle PPU pixel differs primary=" + std::to_string(primary) +
              " mode=" + std::to_string(mode) +
              " tick=" + std::to_string(tick) + " pixel=" + std::to_string(i) +
              " source=" + std::to_string(original[i]) +
              " native=" + std::to_string(native[i]));
    }
    // commands() borrows from the value-owned screen snapshot. Keep its owner
    // alive while collecting the four physical object-resource banks.
    const auto displayed_screen = p.frame_display.screen();
    require(displayed_screen.objects.has_value(),
            "Published battle screen has no object snapshot");
    for (const auto &command : displayed_screen.objects->commands()) {
      require(command.resource < 4,
              "Object resource is outside physical banks");
      counts.emitted_banks |= 1u << command.resource;
    }
    if (retained) {
      require(eb::rasterize_direct_scene({retained, {}}) == retained_pixels,
              "Retained frame mutated");
      counts.immutable_pixels += retained_pixels.size();
    }
    retained = current;
    retained_pixels = native;
    if (mode >= 7 && !p.swirl.update_in)
      break;
    require(
        tick < 399,
        "Configured swirl/oval did not finish through complete frame bodies");
  }
  ++counts.visible_sequences;
}

void compare_input(Pair &p) {
  for (unsigned pad = 0; pad < 2; ++pad) {
    equal(p.source.word(0x65 + pad * 2), p.input.state[pad], "raw input state");
    equal(p.source.word(0x69 + pad * 2), p.input.held[pad], "held input");
    equal(p.source.word(0x6d + pad * 2), p.input.pressed[pad], "pressed input");
    equal(p.source.word(0x71 + pad * 2), p.input.repeat_timer[pad],
          "input repeat timer");
  }
}
void queue_graphics(Pair &p, unsigned offset, unsigned count,
                    unsigned destination) {
  p.source.put(0x1e0e, offset);
  p.source.put(0x1e10, 0x7f);
  p.source.call(0xc08616, 0, count, destination / 2);
  auto operation = p.display.begin_transfer(
      {PsiTransferKind::Graphics, std::uint16_t(offset), std::uint16_t(count),
       std::uint16_t(destination)},
      p.scratch, p.fade);
  require(operation->advance() && operation->complete(),
          "Entry queue unexpectedly required publication");
}
void caller_case(Shared &shared, unsigned primary, unsigned secondary,
                 unsigned pressure, bool late) {
  Pair p(shared, primary, false, secondary);
  initialize_assets(p);
  begin_psi(p, 1);
  p.state.time_until_next_frame = p.source.bus->work_ram[p.source.p.state] = 1;
  p.state.total_frames = p.source.bus->work_ram[p.source.p.state + 2] = 4;
  if (pressure == 1)
    queue_graphics(p, 0xc000, 4096, 0);
  if (pressure == 2)
    for (unsigned i = 0; i < 31; ++i)
      queue_graphics(p, 0xc000 + i, 1, 2 * i);
  // Explicit already-delivered WAIT context. The incoming latch is consumed
  // once; subsequent publication is caused only by real queue contention.
  p.input = {};
  for (unsigned i = 0; i < 16; ++i)
    p.source.bus->work_ram[0x65 + i] = 0;
  p.source.bus->work_ram[2] = p.clock.frame_counter = 0x7e;
  p.source.bus->work_ram[0x2b] = p.clock.new_frame_started = 1;
  p.source.bus->set_buttons(0);
  // Start at a fresh physical scanline with NMI disabled. This deterministic
  // legal interrupt schedule distinguishes transfer waits from incidental
  // CPU execution duration; no original instruction or body is skipped.
  do {
    p.source.bus->advance_cpu_cycles(100);
  } while (p.source.bus->scanline_index() != 0);
  const auto source_polls = p.source.input_polls,
             source_nmis = p.source.nmi_entries;
  bool source_changed = false, native_changed = false;
  p.source.observer = [&](Source &s, Source::Boundary boundary) {
    if (late && !source_changed && boundary == Source::Boundary::NmiEntry) {
      s.bus->work_ram[65536 + std::uint16_t(s.word(s.p.state + 3) + 7)] ^= 0x5a;
      s.put(0x3fe, s.word(0x3fe) ^ 0x123);
      s.put(s.p.state + 3, std::uint16_t(s.word(s.p.state + 3) + 1024));
      s.bus->work_ram[s.p.state + 2] = 3;
      s.bus->work_ram[s.p.battlers + 8 * 78 + 72] = 3;
      source_changed = true;
    }
  };
  p.source.call(p.source.p.enable);
  p.source.call(p.source.jp ? 0xc432ea : 0xc43568);
  p.source.disable_nmi();
  p.source.observer = {};
  auto operation = p.scene->begin_battle_frame();
  unsigned inputs = 0, publications = 0;
  while (operation->advance() != dialogue::Progress::Finished) {
    require(inputs + publications < 8,
            "Native C43568 exceeded its bounded real services");
    if (operation->service() == story::SceneService::Frame) {
      operation->complete_frame({0, 0});
      ++inputs;
    } else if (operation->service() == story::SceneService::Publication) {
      if (late && !native_changed) {
        p.scratch.bytes[std::uint16_t(p.state.frame_offset + 7)] ^= 0x5a;
        p.colors.staged[15][15] ^= 0x123;
        p.state.frame_offset = std::uint16_t(p.state.frame_offset + 1024);
        p.state.total_frames = 3;
        p.roster.at(8).blink = 3;
        native_changed = true;
      }
      operation->complete_publication();
      ++publications;
    } else
      throw std::runtime_error("C43568 requested an unowned service");
  }
  require(operation->complete() && inputs == 1 &&
              p.source.input_polls - source_polls == 1,
          "Full C43568 did not perform exactly one actual input poll");
  equal(p.source.nmi_entries - source_nmis, publications,
        "scheduled source/native transfer publication count");
  equal(p.source.bus->work_ram[2], p.clock.frame_counter,
        "scheduled NMI clock");
  equal(p.source.bus->work_ram[0x2b], p.clock.new_frame_started,
        "scheduled pending-frame byte");
  require(source_changed == late && native_changed == late,
          "Late live callback was not exercised");
  compare_frame(p);
  compare_input(p);
  compare_meters(p);
  ++counts.wrappers_done;
  counts.body_publications += publications;
  counts.callbacks += late;
  counts.queue_cases += pressure != 0;
  // Remaining low/high entries must be transported, not acknowledged as done.
  publish(p);
  compare_frame(p);
  const auto original = p.source.pixels();
  const auto native = eb::rasterize_direct_scene({p.scene->frame(), {}});
  require(original.size() == native.size(),
          "Complete C43568 image sizes differ");
  for (unsigned i = 0; i < original.size(); ++i) {
    ++counts.pixels;
    counts.nonblack += original[i] != 0xff000000;
    require(original[i] == native[i],
            "Complete C43568 image differs pressure=" +
                std::to_string(pressure) + " pixel=" + std::to_string(i));
  }
}
void rejected_domain(Shared &shared) {
  Pair p(shared, 0, false, 0);
  initialize_assets(p);
  // This complete original brightness path was separately executed under
  // cold/retained secondary destinations. The current native owner explicitly
  // rejects its low-WRAM restoration frontier before entering C2DB3F.
  p.background.reflect(2);
  const auto before = p.background.effects();
  const auto palettes = p.colors.staged;
  bool rejected = false;
  try {
    auto operation = p.frame->begin();
  } catch (const BattlePaletteRestorationRequired &e) {
    rejected =
        e.dependency == BattlePaletteDependency::InactiveSecondaryDestination;
  }
  require(rejected && p.background.effects() == before &&
              p.colors.staged == palettes,
          "Unsupported secondary-destination frame was not rejected before "
          "mutation");
}
void run(const eb::GameAssets &assets) {
  counts = {};
  Shared shared(assets);
  BattleBackgrounds definitions(assets.image,
                                battle_background_layout(assets.version));
  unsigned four = 0;
  while (definitions.definition(four).bitdepth != 4)
    ++four;
  for (unsigned pressure = 0; pressure < 3; ++pressure) {
    caller_case(shared, 0, 45, pressure, pressure != 0);
    caller_case(shared, four, 0, pressure, pressure != 0);
  }
  for (unsigned mode : {0u, 1u, 2u, 7u, 8u, 9u, 3u, 4u, 5u, 6u}) {
    body_case(shared, 0, 45, mode, 1);
    body_case(shared, four, 0, mode, 6);
  }
  rejected_domain(shared);
  require(counts.bodies == 444 && counts.wrappers_done == 6 &&
              counts.queue_cases == 4 && counts.body_publications == 4 &&
              counts.callbacks == 4 && counts.visible_sequences == 20 &&
              counts.emitted_banks == 15 && counts.pixels && counts.nonblack &&
              counts.immutable_pixels,
          "Required coverage missing: bodies=" + std::to_string(counts.bodies) +
              " callers=" + std::to_string(counts.wrappers_done) +
              " queue=" + std::to_string(counts.queue_cases) +
              " body_publications=" + std::to_string(counts.body_publications) +
              " callbacks=" + std::to_string(counts.callbacks) +
              " sequences=" + std::to_string(counts.visible_sequences) +
              " banks=" + std::to_string(counts.emitted_banks) +
              " pixels=" + std::to_string(counts.pixels) +
              " nonblack=" + std::to_string(counts.nonblack) +
              " immutable=" + std::to_string(counts.immutable_pixels));
  std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP")
            << ": whole_bodies=" << counts.bodies
            << " whole_callers=" << counts.wrappers_done
            << " queue_cases=" << counts.queue_cases
            << " body_publications=" << counts.body_publications
            << " live_callbacks=" << counts.callbacks
            << " sequences=" << counts.visible_sequences
            << " emitted_bank_mask=" << counts.emitted_banks
            << " state_words=" << counts.words
            << " scratch_bytes=" << counts.scratch_bytes
            << " roster_bytes=" << counts.roster_bytes
            << " meter_pixels=" << counts.meter_pixels
            << " pixels=" << counts.pixels << " nonblack=" << counts.nonblack
            << " immutable_pixels=" << counts.immutable_pixels
            << " source_NMI=" << counts.nmis << " input_polls=" << counts.polls
            << " native_publications=" << counts.publications
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
    std::cout << "Complete battle-frame bodies, callers, real publications and "
                 "PPU reference passed within the declared ordinary palette "
                 "domain; crowded SNES tile dropout remains an explicit "
                 "presentation difference.\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
