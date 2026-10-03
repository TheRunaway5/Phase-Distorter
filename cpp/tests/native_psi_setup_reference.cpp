// Complete original SHOW, effect dispatch, and DISPLAY_TEXT/CC1C13 reference.
// All source bodies execute with real DMA and hardware-delivered NMI. Native
// setup and dialogue run through the actual Scene publication/input services.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/action_scripts.hpp"
#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle/psi_resources.hpp"
#include "eb/native/battle/psi_scene.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/party/meter_windows.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/world_encounter.hpp"
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
      visible_sequences{}, advances{}, setup_polls{};
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
    bus->work_ram[0x13] = 0x60;
    bus->work_ram[0x14] = 0x0c;
    bus->work_ram[0x15] = 0x10;
    bus->work_ram[0x16] = 0x63;
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
  void prepare(unsigned background, bool blank) {
    call(0xc08522);
    call(jp ? 0xc2d0d5 : 0xc2d121, background, 0, 4);
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
  for (unsigned i = 0; i < 8192; ++i)
    source.bus->video_ram[i] = display.graphics[i] =
        std::uint8_t(i * 11 + 0x35);
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
        swirl(import_world_swirl_data(a.image)) {}
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
  eb::DirectSceneFrame::Effects policy;
  std::unique_ptr<story::BattlePublication> publication;
  std::unique_ptr<story::Scene> scene;
  unsigned depth;
  explicit Pair(Shared &a, unsigned background_id, bool blank,
                bool text_ready = false)
      : shared(a), source(a.assets),
        background(
            a.backgrounds.prepare(BattleBackgroundPair{background_id, 0, 4})),
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
        objects(a.combatants.prepare(176)),
        depth(background.primary().definition().bitdepth) {
    if (text_ready) {
      source.call(0xc200d9);
      for (unsigned id : {14u, 1u})
        source.call(source.jp ? 0xc106e4 : 0xc104ee, id, 0, 0, false);
    }
    source.prepare(background_id, blank);
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
    if (text_ready) {
      for (unsigned id : {14u, 1u}) {
        auto opening = windows.begin(
            {dialogue::WindowAction::Open, dialogue::WindowId{id}, {}, 0});
        while (opening->advance() != dialogue::OutputProgress::Complete) {
          auto effect = scene->begin(*opening->effect());
          require(effect->advance() == dialogue::Progress::Finished,
                  "Real initial window effect unexpectedly suspended");
          opening->respond();
        }
        require(opening->succeeded(), "Native initial window was not created");
      }
    }
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
    for (unsigned layer = 0; layer < 2; ++layer) {
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

void input_compare(const Pair &pair) {
  for (unsigned pad = 0; pad < 2; ++pad) {
    equal(pair.source.word(0x65 + pad * 2), pair.input.state[pad],
          "input state");
    equal(pair.source.word(0x69 + pad * 2), pair.input.held[pad], "input held");
    equal(pair.source.word(0x6d + pad * 2), pair.input.pressed[pad],
          "input pressed");
    equal(pair.source.word(0x71 + pad * 2), pair.input.repeat_timer[pad],
          "input repeat");
  }
  equal(pair.source.word(pair.source.jp ? 0xa2a : 0xa34),
        pair.input.player_activity, "input activity");
}

void playback(Pair &pair) {
  const auto starting_pixels = counts.pixels;
  const auto starting_nonblack = counts.nonblack;
  PsiAnimation animation(pair.state, pair.scratch, pair.display, pair.effects,
                         pair.background);
  std::shared_ptr<const eb::DirectSceneFrame> prior;
  std::vector<std::uint32_t> prior_pixels;
  unsigned iterations = 0;
  do {
    require(++iterations < 400, "Setup-to-playback lifetime did not terminate");
    const auto old_timer = pair.state.time_until_next_frame;
    pair.source.call(pair.source.p.advance);
    animation.advance();
    pair.source.call(pair.source.p.effects);
    pair.effects.advance();
    pair.source.transfer();
    // Original UPDATE_SCREEN plus its actual OAM/NMI latch supplies source
    // scroll; this is the matching explicit native display-scroll transport.
    pair.display.publish_scroll();
    auto frame = pair.scene->begin(story::TickKind::Frame);
    require(frame->advance() == dialogue::Progress::Suspended &&
                frame->service() == story::SceneService::Frame,
            "Native playback did not reach its real display boundary");
    frame->complete_frame({0x8080, 0});
    require(frame->advance() == dialogue::Progress::Finished,
            "Native playback frame did not finish");
    ++counts.publications;
    ++counts.advances;
    pair.compare_final();
    if (old_timer == 1) {
      const auto original = pair.source.pixels(pair.depth);
      const auto current = pair.scene->frame();
      const auto native = eb::rasterize_direct_scene({current, {}});
      require(native.size() == original.size(), "Playback image sizes differ");
      for (unsigned i = 0; i < native.size(); ++i) {
        ++counts.pixels;
        counts.nonblack += original[i] != 0xff000000;
        require(native[i] == original[i],
                "Setup-to-playback pixel differs at " + std::to_string(i));
      }
      if (prior) {
        const auto retained = eb::rasterize_direct_scene({prior, {}});
        require(retained == prior_pixels, "Old setup/playback capture changed");
        counts.immutable_pixels += retained.size();
      }
      prior = current;
      prior_pixels = native;
    }
  } while (pair.state.time_until_next_frame);
  require(counts.pixels > starting_pixels &&
              counts.nonblack > starting_nonblack,
          "Setup-to-playback sequence had no visible nonblack pixel witness");
  ++counts.visible_sequences;
}
void show_case(Shared &shared, unsigned background, bool blank, unsigned id,
               unsigned variant = 0) {
  Pair pair(shared, background, blank);
  auto &s = pair.source;
  auto &target = pair.roster.at(8);
  const bool follow =
      !blank && !variant && (id == 1 || id == 6 || id == 10 || id == 32);
  if (follow)
    for (unsigned bank = 0; bank < 4; ++bank) {
      pair.effect_state.banks[bank].frames_left = 0;
      s.put(s.p.effect_frames + bank * 2, 0);
    }
  if (variant == 1)
    target.consciousness = 0;
  if (variant == 2)
    target.side = 0;
  if (variant == 3)
    target.side = 2;
  if (variant == 4) {
    target.afflictions[0] = 1;
    target.sprite = 0;
  }
  if (variant == 5) {
    pair.target(31);
    pair.roster.at(31).y = 255;
    pair.sync_record(31);
  }
  if (variant == 6) {
    pair.target(0);
    pair.roster.at(0).side = 1;
    pair.sync_record(0);
  }
  pair.sync_record(8);
  const bool mutate = variant == 7;
  bool original_mutated = false, native_mutated = false;
  if (mutate) {
    s.observer = [&](Source &original, Source::Boundary boundary) {
      if (boundary == Source::Boundary::WaitReturn && !original_mutated) {
        original.put(original.p.target, original.p.battlers + 31 * 78);
        original.bus->work_ram[original.p.battlers + 31 * 78 + 68] = 231;
        original.bus->work_ram[original.p.battlers + 31 * 78 + 69] = 49;
        original_mutated = true;
      }
    };
  }
  s.bus->set_buttons(0x8080);
  const auto polls = s.input_polls, waits = s.explicit_waits;
  s.call(s.p.show, id);
  s.disable_nmi();
  s.observer = {};
  pair.run_native(std::uint16_t(id), std::uint16_t(id), [&] {
    if (mutate && !native_mutated) {
      pair.action.target = 31;
      pair.roster.at(31).x = 231;
      pair.roster.at(31).y = 49;
      native_mutated = true;
    }
  });
  equal(s.input_polls - polls, 1, "complete SHOW real input polls");
  equal(s.explicit_waits - waits, 1, "complete SHOW explicit WAIT calls");
  equal(pair.clock.input_polls, 1, "native SHOW input polls");
  if (mutate) {
    require(original_mutated && native_mutated,
            "live target callback did not run on both sides");
    ++counts.callbacks;
  }
  pair.compare_final();
  input_compare(pair);
  counts.setup_polls += s.input_polls - polls;
  ++counts.setups;
  if (follow)
    playback(pair);
}
void effect_case(Shared &shared, unsigned background, unsigned id,
                 unsigned side, bool ghost = false) {
  Pair pair(shared, background, true);
  auto &s = pair.source;
  pair.roster.at(8).side = std::uint8_t(side);
  pair.roster.at(8).npc = ghost ? 213 : 0;
  pair.sync_record(8);
  s.disable_nmi();
  const unsigned swirl = s.jp ? 0xb097 : 0xaec2;
  pair.swirl.repeat_speed = 77;
  pair.swirl.repeats_until_speedup = 91;
  s.bus->work_ram[swirl + 35] = 77;
  s.bus->work_ram[swirl + 36] = 91;
  const auto before = s.input_polls;
  // Whole original wrapper calls the whole original dispatcher, including all
  // actual fixed-color and window writes. No subhelper returns are fabricated.
  s.call(s.jp ? 0xc3f60e : 0xc3fac9, side ? 34 : id, side ? id : 34);
  const auto result = s.cpu.accumulator & 0xffff;
  auto operation = pair.commands.begin(std::uint16_t(side ? 34 : id),
                                       std::uint16_t(side ? id : 34));
  require(operation->advance() && operation->complete(),
          "Synchronous source effect unexpectedly requested a setup service");
  equal(result, operation->result(), "full wrapper Boolean");
  equal(s.input_polls, before, "effect dispatcher polled input");
  pair.compare_final();
  equal(s.word(s.jp ? 0xaf67 : 0xad92),
        pair.background.effects().wobble_duration, "wobble duration");
  equal(s.word(s.jp ? 0xaf69 : 0xad94),
        pair.background.effects().shake_duration, "shake duration");
  equal(s.bus->work_ram[swirl], pair.swirl.update_in, "swirl update");
  equal(s.bus->work_ram[swirl + 1], pair.swirl.interval, "swirl interval");
  equal(s.bus->work_ram[swirl + 2], pair.swirl.frames_left, "swirl frames");
  equal(s.bus->work_ram[swirl + 3], pair.swirl.frame, "swirl frame ID");
  equal(s.bus->work_ram[swirl + 4], pair.swirl.invert, "swirl invert");
  equal(s.bus->work_ram[swirl + 5], pair.swirl.reverse, "swirl reverse");
  unsigned mask = 0;
  for (unsigned i = 0; i < 6; ++i)
    mask |= unsigned(pair.swirl.masked_layers[i]) << i;
  equal(s.bus->work_ram[swirl + 6], mask, "swirl layer mask");
  equal(s.bus->work_ram[swirl + 8], pair.swirl.padding, "swirl padding");
  equal(s.bus->work_ram[swirl + 9], pair.swirl.restore_after, "swirl restore");
  equal(s.bus->work_ram[swirl + 34], pair.swirl.next, "swirl next");
  equal(s.bus->work_ram[swirl + 35], pair.swirl.repeat_speed,
        "retained repeat speed");
  equal(s.bus->work_ram[swirl + 36], pair.swirl.repeats_until_speedup,
        "retained repeats");
  const bool changed =
      !ghost && ((id >= 35 && id <= 45) || (id >= 49 && id <= 53));
  if (changed) {
    equal(s.observed_fixed_color,
          unsigned(pair.visual.fixed_color.red) |
              (unsigned(pair.visual.fixed_color.green) << 5) |
              (unsigned(pair.visual.fixed_color.blue) << 10),
          "fixed RGB");
    equal(s.bus->ppu_registers()[0x30], 0x10, "source CGWSEL");
    equal(s.bus->ppu_registers()[0x31], 0x3f, "source CGADSUB");
    require(!pair.visual.use_subscreen &&
                pair.visual.clip_colors == ColorWindowPolicy::Never &&
                pair.visual.prevent_math == ColorWindowPolicy::Outside &&
                !pair.visual.subtract && !pair.visual.half_intensity &&
                std::all_of(pair.visual.color_math_layers.begin(),
                            pair.visual.color_math_layers.end(),
                            [](bool value) { return value; }),
            "native source color-math policy differs");
    for (unsigned i = 0; i < 2; ++i) {
      equal(s.bus->ppu_registers()[0x26 + i * 2], pair.visual.window_left[i],
            "window left");
      equal(s.bus->ppu_registers()[0x27 + i * 2], pair.visual.window_right[i],
            "window right");
    }
  }
  ++counts.wrappers;
  counts.dispatches += !ghost;
}
// These explicit command streams exercise the complete original DISPLAY_TEXT
// caller and real windows. They are test inputs, not authored battle actions.
void command_case(Shared &shared, unsigned background, std::uint8_t first,
                  std::uint8_t second, unsigned side, unsigned prompt,
                  bool ghost = false, bool change_focus = false) {
  Pair pair(shared, background, false, true);
  auto &s = pair.source;
  pair.roster.at(8).side = std::uint8_t(side);
  pair.roster.at(8).npc = ghost ? 213 : 0;
  pair.sync_record(8);
  const unsigned focus = s.jp ? 0x8c96 : 0x8958;
  const unsigned table = s.jp ? 0x8c26 : 0x88e4;
  const unsigned stats = s.jp ? 0x89c2 : 0x8650;
  const unsigned stride = s.jp ? 76 : 82;
  auto record = [&](unsigned id) {
    return stats + s.word(table + id * 2) * stride;
  };
  for (unsigned id : {1u, 14u}) {
    auto &r = pair.text.windows.at(dialogue::WindowId{id}).active;
    r.working = 0xabcdef00u + id;
    r.argument = 0x98765400u + id;
    r.secondary = 0xa0 + id;
    const auto at = record(id);
    s.put(at + 23, r.working);
    s.put(at + 25, r.working >> 16);
    s.put(at + 27, r.argument);
    s.put(at + 29, r.argument >> 16);
    s.put(at + 31, r.secondary);
  }
  s.put(s.jp ? 0x9945 : 0x964d, prompt);
  pair.output.policy().prompt_mode = std::uint16_t(prompt);
  pair.text.word_wrap = !s.jp;
  s.observer = [&](Source &source, Source::Boundary boundary) {
    if (change_focus && boundary == Source::Boundary::WaitReturn) {
      source.put(focus, 14);
      ++counts.callbacks;
    }
  };
  const std::vector<std::uint8_t> bytes{0x1c, 0x13, first, second, 2};
  std::copy(bytes.begin(), bytes.end(), s.bus->work_ram.begin() + 0x6000);
  s.put(0x1e0e, 0x6000);
  s.put(0x1e10, 0x7e);
  const auto waits = s.explicit_waits;
  s.call(s.jp ? 0xc18913 : 0xc186b1);
  s.disable_nmi();
  auto program = std::make_shared<dialogue::Program>(
      shared.assets.version,
      std::vector<dialogue::ContentBlock>{{0, 0, bytes}});
  dialogue::Conversation conversation(program, pair.windows);
  conversation.start(dialogue::Location{0, 0});
  auto operation = pair.scene->begin(conversation);
  unsigned boundaries = 0;
  while (operation->advance() != dialogue::Progress::Finished) {
    require(++boundaries < 32, "Full command did not finish bounded services");
    if (operation->service() == story::SceneService::Publication) {
      operation->complete_publication();
      ++counts.publications;
    } else if (operation->service() == story::SceneService::Frame) {
      operation->complete_frame({0x8080, 0});
      if (change_focus) {
        pair.text.focus = dialogue::WindowId{14};
        ++counts.callbacks;
      }
    } else {
      throw std::runtime_error(
          "Full command left an unexpected real Scene service");
    }
  }
  require(conversation.finished(), "Command caller did not finish");
  equal(unsigned(conversation.snapshot().consumed_bytes), bytes.size(),
        "command bytes consumed");
  equal(s.word(focus), pair.text.focus->value, "command current focus");
  equal(s.word(s.jp ? 0x9a6c : 0x97b8), pair.text.stream_slot,
        "returned stream slot");
  for (unsigned id : {1u, 14u}) {
    const auto &r = pair.text.windows.at(dialogue::WindowId{id}).active;
    const auto at = record(id);
    equal(s.word(at + 23) | (s.word(at + 25) << 16), r.working,
          "command working");
    equal(s.word(at + 27) | (s.word(at + 29) << 16), r.argument,
          "command argument");
    equal(s.word(at + 31), r.secondary, "command secondary");
  }
  if (change_focus) {
    equal(s.explicit_waits - waits, 1, "command real WAIT callback count");
    equal(pair.text.windows.at(dialogue::WindowId{1}).active.working,
          0xabcdef01, "command retained old focus working");
    equal(pair.text.windows.at(dialogue::WindowId{14}).active.working,
          unsigned(side != 0),
          "command writes result after callback to current focus");
  }
  pair.compare_final();
  ++counts.commands;
}
void run(const eb::GameAssets &assets) {
  counts = {};
  Shared shared(assets);
  BattleBackgrounds definitions(assets.image,
                                battle_background_layout(assets.version));
  for (unsigned index = 0; index < 2; ++index) {
    const unsigned depth = index ? 4 : 2;
    unsigned id = 0;
    while (id < definitions.size() &&
           definitions.definition(id).bitdepth != depth)
      ++id;
    require(id < definitions.size(), "Missing authored depth fixture");
    for (bool blank : {true, false})
      for (unsigned animation = 0; animation < 34; ++animation)
        show_case(shared, id, blank, animation);
    for (unsigned animation : {1u, 6u, 10u, 32u})
      for (unsigned variant = 1; variant <= 7; ++variant)
        show_case(shared, id, false, animation, variant);
    for (unsigned effect = 35; effect < 54; ++effect)
      for (unsigned side : {0u, 1u, 2u, 255u})
        effect_case(shared, id, effect, side);
    for (unsigned effect : {54u, 255u, 65535u})
      effect_case(shared, id, effect, 1);
    effect_case(shared, id, 34, 1, true);
    command_case(shared, id, 0, 0, 1, 1);
    command_case(shared, id, 35, 35, 1, 0);
    command_case(shared, id, 35, 35, 1, 1, true);
    command_case(shared, id, 49, 35, 0, 0xffff);
    command_case(shared, id, 35, 49, 2, 1);
    command_case(shared, id, 35, 49, 255, 1);
    command_case(shared, id, 2, 35, 0, 1, false, true);
  }
  require(counts.commands == 14 && counts.visible_sequences == 8 &&
              counts.immutable_pixels,
          "Required complete command/playback coverage was not exercised");
  std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP")
            << ": full SHOW=" << counts.setups
            << " dispatcher=" << counts.dispatches
            << " wrapper=" << counts.wrappers
            << " full_DISPLAY_TEXT_CC=" << counts.commands
            << " state_words=" << counts.words
            << " scratch_bytes=" << counts.scratch_bytes
            << " roster_bytes=" << counts.roster_bytes
            << " native_publications=" << counts.publications
            << " source_frame_publications=" << counts.source_publications
            << " callbacks=" << counts.callbacks
            << " source_NMI=" << counts.nmis
            << " source_input_polls=" << counts.polls
            << " setup_input_polls=" << counts.setup_polls
            << " playback_advances=" << counts.advances
            << " playback_sequences=" << counts.visible_sequences
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
    std::cout
        << "Complete SHOW, effect dispatch, DISPLAY_TEXT/CC1C13 and "
           "setup-to-playback passed; no full battle-frame or audio claim.\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
