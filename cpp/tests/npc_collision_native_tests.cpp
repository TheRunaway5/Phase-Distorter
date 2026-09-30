// Full NPC collision search: independent legacy execution at every source
// checkpoint, including active candidates and interrupted/fallback
// continuations. The fixture does not include domain/native timing tables.
// Counts below are counted from original npc_collision_check.asm, and the
// Legacy CPU independently checks every register, byte, clock and APU slice at
// the returned boundary.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace {
unsigned comparisons = 0, admissions = 0, declines = 0;
std::uint64_t source_steps = 0, audio_callbacks = 0;
void require(bool condition, const char *message) {
  if (!condition)
    throw std::runtime_error(message);
}
enum class Phase {
  Input,
  Gates,
  MovingBox,
  Geometry,
  Eligibility,
  CandidateBox,
  VerticalStart,
  VerticalEnd,
  HorizontalStart,
  HorizontalEnd,
  Hit,
  Advance,
  Loop,
  Publish
};
constexpr std::array phases{
    Phase::Input,         Phase::Gates,       Phase::MovingBox,
    Phase::Geometry,      Phase::Eligibility, Phase::CandidateBox,
    Phase::VerticalStart, Phase::VerticalEnd, Phase::HorizontalStart,
    Phase::HorizontalEnd, Phase::Hit,         Phase::Advance,
    Phase::Loop,          Phase::Publish};
constexpr std::array<unsigned, 14> sites{0x6000, 0x6014, 0x6032, 0x605e, 0x607b,
                                         0x60a6, 0x60d2, 0x60e9, 0x60f4, 0x610a,
                                         0x6117, 0x611f, 0x6129, 0x6133};
std::array<unsigned, 14> whole_admissions{};
struct Layout {
  unsigned enabled, direction, horizontal_width, horizontal_height,
      vertical_width, vertical_height;
  unsigned script, collided, intangible, npc_id, x, y, movement, style;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::JP)
    return {0x3728, 0x2ef4, 0x37dc, 0x1a40, 0x3764, 0x37a0, 0x0a58,
            0x2c9c, 0x60de, 0x3098, 0x0b84, 0x0bc0, 0x60dc, 0x9b34};
  return {0x332a, 0x2af6, 0x33de, 0x1a4a, 0x3366, 0x33a2, 0x0a62,
          0x289e, 0x5d58, 0x2c9a, 0x0b8e, 0x0bca, 0x5d56, 0x9883};
}
struct Scenario {
  eb::GameVersion version = eb::GameVersion::US;
  Phase phase = Phase::Eligibility;
  bool enhanced = false, fast = false;
  unsigned direct_page = 0x1d00, candidate = 7, moving_slot = 23;
  unsigned query_x = 100, query_y = 100, moving_width = 8, moving_height = 12;
  unsigned candidate_x = 100, candidate_y = 100, width = 8, height = 12;
  unsigned moving_direction = 0, candidate_direction = 0, moving_enabled = 1,
           enabled = 1;
  unsigned script = 1, marker = 0xffff, intangible = 0, npc_id = 1;
  unsigned movement = 0, style = 0, demo = 0, result = 0xffff, status = 0x45;
};
unsigned code(const Scenario &s, unsigned low) {
  return 0xc00000 + low + (s.version == eb::GameVersion::JP ? 0x22e : 0);
}
unsigned entry(const Scenario &s) { return code(s, sites[unsigned(s.phase)]); }
unsigned wrap(unsigned value) { return std::uint16_t(value); }
auto cpu_state(const eb::MainCpu65816 &c) {
  return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index,
                  c.stack_pointer, c.direct_page, c.status_register,
                  c.data_bank, c.emulation_mode, c.is_stopped, c.is_waiting,
                  c.instruction_count, c.cycle_count);
}
auto audio_state(const eb::Spc700AudioCpu &c) {
  return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index,
                  c.stack_pointer, c.status_register, c.is_stopped,
                  c.is_sleeping, c.instruction_count, c.cycle_count);
}
struct Picture {
  unsigned width;
  std::uint64_t frame, clock;
  double aspect;
  std::vector<std::uint32_t> native, pixels, reference;
  std::vector<std::uint8_t> mask;
  bool operator==(const Picture &) const = default;
};
struct Machine {
  eb::SnesBus bus;
  eb::Spc700AudioCpu audio;
  eb::MainCpu65816 cpu;
  std::vector<std::pair<unsigned, std::uint64_t>> audio_slices;
  std::vector<Picture> pictures;
  std::vector<std::pair<unsigned, unsigned>> writes;
  std::vector<std::tuple<bool, unsigned, unsigned>> accesses;
  Machine(const Scenario &s, eb::MainCpuRuntime runtime)
      : bus(std::span(eb::rom_data(s.version), eb::rom_size(s.version)),
            s.version),
        audio(bus), cpu(bus) {
    cpu.set_runtime(runtime);
    cpu.set_gameplay_timing(s.enhanced);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.stack_pointer = 0x1ffa;
    bus.work_ram.fill(0xa7);
    const auto &queue = eb::source_profile(s.version).dma_queue;
    bus.work_ram[queue.write_index] = bus.work_ram[queue.last_completed_index] =
        0;
    tables(s);
    checkpoint(s);
    bus.write_byte(0x420d, s.fast);
    audio.write_byte(0xfa, 3);
    audio.write_byte(0xfb, 5);
    audio.write_byte(0xfc, 7);
    audio.write_byte(0xf1, 0x87);
    audio.advance_dsp_clocks = [this](unsigned clocks) {
      audio_slices.emplace_back(clocks, bus.master_clocks());
    };
    bus.on_presentation_frame = [this](auto pixels, unsigned width,
                                       std::uint64_t frame) {
      const auto ref = bus.presentation_effect_reference();
      const auto mask = bus.presentation_effect_mask();
      pictures.push_back(
          {width,
           frame,
           bus.master_clocks(),
           bus.presentation_fixed_aspect(),
           {bus.native_framebuffer.begin(), bus.native_framebuffer.end()},
           {pixels.begin(), pixels.end()},
           {ref.begin(), ref.end()},
           {mask.begin(), mask.end()}});
    };
    bus.advance_master_clocks_with_refresh(32);
  }
  void word(unsigned address, unsigned value) {
    bus.work_ram.at(address) = std::uint8_t(value);
    bus.work_ram.at(address + 1) = std::uint8_t(value >> 8);
  }
  unsigned word(unsigned address) const {
    return bus.work_ram.at(address) |
           (unsigned(bus.work_ram.at(address + 1)) << 8);
  }
  void entity(unsigned table, unsigned slot, unsigned value) {
    word(table + slot * 2, value);
  }
  void tables(const Scenario &s) {
    const auto l = layout(s.version);
    for (unsigned slot = 0; slot < 30; ++slot) {
      entity(l.script, slot, 0xffff);
      entity(l.collided, slot, 0xffff);
      entity(l.enabled, slot, 1);
      entity(l.direction, slot, 0);
      entity(l.horizontal_width, slot, 8);
      entity(l.vertical_width, slot, 8);
      entity(l.horizontal_height, slot, 12);
      entity(l.vertical_height, slot, 12);
      entity(l.x, slot, 300);
      entity(l.y, slot, 300);
      entity(l.npc_id, slot, slot);
    }
    entity(l.enabled, s.moving_slot, s.moving_enabled);
    entity(l.direction, s.moving_slot, s.moving_direction);
    entity(l.horizontal_width, s.moving_slot, s.moving_width);
    entity(l.vertical_width, s.moving_slot, s.moving_width);
    entity(l.horizontal_height, s.moving_slot, s.moving_height);
    entity(l.vertical_height, s.moving_slot, s.moving_height);
    if (s.candidate < 23) {
      entity(l.script, s.candidate, s.script);
      entity(l.collided, s.candidate, s.marker);
      entity(l.npc_id, s.candidate, s.npc_id);
      entity(l.enabled, s.candidate, s.enabled);
      entity(l.direction, s.candidate, s.candidate_direction);
      entity(l.horizontal_width, s.candidate, s.width);
      entity(l.vertical_width, s.candidate, s.width);
      entity(l.horizontal_height, s.candidate, s.height);
      entity(l.vertical_height, s.candidate, s.height);
      entity(l.x, s.candidate, s.candidate_x);
      entity(l.y, s.candidate, s.candidate_y);
    }
    word(l.intangible, s.intangible);
    word(l.movement, s.movement);
    word(l.style, s.style);
    word(0x81, s.demo);
  }
  void checkpoint(const Scenario &s) {
    const auto d = s.direct_page;
    cpu.program_counter = entry(s);
    cpu.direct_page = std::uint16_t(d);
    cpu.status_register = std::uint8_t(s.status);
    cpu.accumulator = 0xa55a;
    cpu.x_index = 0x2468;
    cpu.y_index = 0xace0;
    word(d + 2, s.candidate);
    word(d + 4, s.moving_height);
    word(d + 0x0e, wrap(s.candidate_y - s.height));
    word(d + 0x10, s.height);
    word(d + 0x12, s.candidate);
    word(d + 0x14, wrap(s.moving_width * 2));
    word(d + 0x16, wrap(s.query_x - s.moving_width));
    word(d + 0x18, s.moving_width);
    word(d + 0x1a, s.result);
    word(d + 0x1c, wrap(s.query_y - s.moving_height));
    switch (s.phase) {
    case Phase::Input:
      cpu.accumulator = s.query_x;
      cpu.x_index = s.query_y;
      cpu.y_index = s.moving_slot;
      break;
    case Phase::Gates:
    case Phase::MovingBox:
      cpu.x_index = s.moving_slot * 2;
      cpu.y_index = s.moving_slot;
      break;
    case Phase::Geometry:
      cpu.accumulator = s.query_x;
      cpu.x_index = s.moving_slot * 2;
      cpu.y_index = s.moving_width;
      word(d + 0x1c, s.query_y);
      break;
    case Phase::VerticalStart:
      cpu.x_index = s.candidate * 2;
      cpu.y_index = s.width;
      break;
    case Phase::VerticalEnd:
    case Phase::HorizontalStart:
      cpu.x_index = s.candidate * 2;
      cpu.y_index = s.width;
      word(d + 2, s.height);
      break;
    case Phase::HorizontalEnd:
    case Phase::Hit:
      cpu.x_index = wrap(s.width * 2);
      cpu.y_index = s.width;
      word(d + 2, s.width);
      word(d + 0x0e, wrap(s.candidate_x - s.width));
      break;
    default:
      break;
    }
  }
  void clock_position(unsigned target) {
    for (unsigned i = 0; i < 3000 && bus.scanline_clock() != target; ++i)
      bus.advance_master_clocks_with_refresh(1);
    require(bus.scanline_clock() == target, "Could not position clock");
  }
  void prime_budget(const Scenario &s, unsigned target) {
    cpu.program_counter =
        eb::source_profile(s.version).gameplay_timing.entity_update_call;
    cpu.step_instruction();
    require(cpu.timing_snapshot().entity_update_active,
            "Entity timing scope was not entered");
    for (unsigned i = 0;
         cpu.timing_snapshot().entity_update_master_clocks < target; ++i) {
      require(i < 5000, "Could not prime enhanced timing budget");
      cpu.program_counter =
          s.version == eb::GameVersion::JP ? 0xc09445 : 0xc09466;
      cpu.step_instruction();
    }
    checkpoint(s);
    clock_position(32);
  }
};
struct Expected {
  unsigned steps, continuation;
};
Expected expected(const Scenario &s, const Machine &m) {
  const auto d = m.cpu.direct_page;
  const auto candidate = m.word(d + 0x12);
  const auto l = layout(s.version);
  const auto table = [&](unsigned at) { return m.word(at + candidate * 2); };
  switch (s.phase) {
  case Phase::Input:
    return m.word(l.enabled + m.cpu.y_index * 2) ? Expected{9, 0x6014}
                                                 : Expected{10, 0x6133};
  case Phase::Gates:
    if (m.word(l.movement) & 2)
      return {4, 0x6133};
    if (m.word(l.style) == 12)
      return {7, 0x6133};
    return m.word(0x81) ? Expected{9, 0x6133} : Expected{8, 0x6032};
  case Phase::MovingBox: {
    const auto direction = m.word(l.direction + m.cpu.y_index * 2);
    return {direction == 2 ? 11u : direction == 6 ? 13u : 9u, 0x6058};
  }
  case Phase::Geometry:
    return {14, 0x6078};
  case Phase::Eligibility:
    if (table(l.script) == 0xffff)
      return {candidate == 22 ? 15u : 16u, candidate == 22 ? 0x6133u : 0x607bu};
    if (table(l.collided) == 0x8000)
      return {10, 0x611f};
    if (!m.word(l.intangible))
      return {11, 0x60a6};
    return wrap(table(l.npc_id) + 1) >= 0x8001 ? Expected{16, 0x611f}
                                               : Expected{15, 0x60a6};
  case Phase::CandidateBox:
    if (!table(l.enabled))
      return {5, 0x611f};
    return {table(l.direction) == 2   ? 15u
            : table(l.direction) == 6 ? 17u
                                      : 13u,
            0x60d2};
  case Phase::VerticalStart:
    return {13, wrap(wrap(table(l.y) - m.word(d + 0x10)) - m.word(d + 4)) >=
                        m.word(d + 0x1c)
                    ? 0x611fu
                    : 0x60e9u};
  case Phase::VerticalEnd: {
    const auto sum = wrap(m.word(d + 0x10) + m.word(d + 0x0e)),
               moving = m.word(d + 0x1c);
    return {sum < moving ? 5u : 6u, sum <= moving ? 0x611fu : 0x60f4u};
  }
  case Phase::HorizontalStart:
    return {13, wrap(wrap(table(l.x) - m.cpu.y_index) - m.word(d + 0x14)) >=
                        m.word(d + 0x16)
                    ? 0x611fu
                    : 0x610au};
  case Phase::HorizontalEnd: {
    const auto sum = wrap(m.word(d + 0x0e) + m.cpu.x_index),
               moving = m.word(d + 0x16);
    return {sum < moving ? 6u : 7u, sum <= moving ? 0x611fu : 0x6117u};
  }
  case Phase::Hit:
    return {4, 0x6133};
  case Phase::Advance:
    return {candidate == 22 ? 8u : 9u, candidate == 22 ? 0x6133u : 0x607bu};
  case Phase::Loop:
    return {candidate == 23 ? 3u : 4u, candidate == 23 ? 0x6133u : 0x607bu};
  case Phase::Publish:
    return {3, 0x613a};
  }
  throw std::runtime_error("Unknown phase");
}
struct Pair {
  Scenario scenario;
  std::unique_ptr<Machine> legacy, native;
  explicit Pair(Scenario s)
      : scenario(s),
        legacy(std::make_unique<Machine>(s, eb::MainCpuRuntime::Legacy)),
        native(std::make_unique<Machine>(s, eb::MainCpuRuntime::Ported)) {}
  template <class Setup> void configure(Setup setup) {
    setup(*legacy);
    setup(*native);
  }
  void compare() const {
    const auto &a = *legacy;
    const auto &b = *native;
    require(cpu_state(a.cpu) == cpu_state(b.cpu),
            "CPU architectural state differs");
    require(a.cpu.timing_snapshot() == b.cpu.timing_snapshot(),
            "Private CPU timing state differs");
    require(eb::RuntimeStateAudit::bus_controls(a.bus) ==
                eb::RuntimeStateAudit::bus_controls(b.bus),
            "Private hardware clocks/registers/latches/DMA/open bus differ");
    require(a.bus.work_ram == b.bus.work_ram &&
                a.bus.save_ram == b.bus.save_ram,
            "WRAM/SRAM differs");
    require(a.bus.video_ram == b.bus.video_ram &&
                a.bus.palette_ram == b.bus.palette_ram &&
                a.bus.object_attributes == b.bus.object_attributes,
            "PPU memory differs");
    require(a.bus.audio_to_main_ports == b.bus.audio_to_main_ports &&
                a.bus.main_to_audio_ports == b.bus.main_to_audio_ports,
            "Audio mailboxes differ");
    require(a.bus.completed_frames == b.bus.completed_frames &&
                a.bus.native_framebuffer == b.bus.native_framebuffer &&
                a.pictures == b.pictures,
            "Frame count/pixels/callbacks differ");
    const auto ap = a.bus.presentation_pixels(),
               bp = b.bus.presentation_pixels();
    const auto am = a.bus.presentation_effect_mask(),
               bm = b.bus.presentation_effect_mask();
    const auto ar = a.bus.presentation_effect_reference(),
               br = b.bus.presentation_effect_reference();
    require(a.bus.presentation_width() == b.bus.presentation_width() &&
                a.bus.presentation_fixed_aspect() ==
                    b.bus.presentation_fixed_aspect() &&
                std::equal(ap.begin(), ap.end(), bp.begin(), bp.end()) &&
                std::equal(am.begin(), am.end(), bm.begin(), bm.end()) &&
                std::equal(ar.begin(), ar.end(), br.begin(), br.end()),
            "Presentation metadata/canvas differs");
    require(audio_state(a.audio) == audio_state(b.audio) &&
                a.audio.audio_ram == b.audio.audio_ram &&
                a.audio.dsp_registers == b.audio.dsp_registers &&
                eb::RuntimeStateAudit::audio_controls(a.audio) ==
                    eb::RuntimeStateAudit::audio_controls(b.audio) &&
                a.audio_slices == b.audio_slices,
            "APU state or ordered timestamped DSP clock slices differ");
    require(a.writes == b.writes && a.accesses == b.accesses,
            "Fallback memory observers differ");
  }
  unsigned advance(unsigned maximum, int admission, bool check_phase = true) {
    compare();
    const auto before = native->cpu.native_gameplay_batches(),
               instructions = native->cpu.instruction_count;
    const auto audio_before = native->audio_slices.size();
    const auto want = check_phase ? expected(scenario, *legacy) : Expected{};
    const auto retired = native->cpu.advance_gameplay(maximum);
    require(retired <= maximum, "Step quota exceeded");
    for (unsigned i = 0; i < retired; ++i)
      legacy->cpu.step_instruction();
    compare();
    const bool admitted = native->cpu.native_gameplay_batches() != before;
    require(native->cpu.native_gameplay_batches() ==
                before + unsigned(admitted),
            "Invalid admission counter delta");
    require(legacy->cpu.native_gameplay_batches() == 0,
            "Legacy oracle used native runtime");
    if (admission >= 0)
      require(admitted == bool(admission),
              "Unexpected native admission/fallback");
    if (admitted && check_phase) {
      require(retired == want.steps &&
                  native->cpu.instruction_count - instructions == want.steps,
              "Wrong independently counted source steps");
      require(native->cpu.program_counter == code(scenario, want.continuation),
              "Wrong source phase continuation");
    }
    if (!admitted)
      require(retired == (maximum ? 1u : 0u),
              "Fallback did not retire exactly one source step");
    ++comparisons;
    admitted ? ++admissions : ++declines;
    source_steps += retired;
    audio_callbacks += native->audio_slices.size() - audio_before;
    return retired;
  }
};
template <class Work>
void checked(const Scenario &s, const char *label, Work work) {
  try {
    work();
  } catch (const std::exception &e) {
    throw std::runtime_error(
        std::string(s.version == eb::GameVersion::US ? "US " : "JP ") + label +
        " phase=" + std::to_string(unsigned(s.phase)) +
        " D=" + std::to_string(s.direct_page) +
        " candidate=" + std::to_string(s.candidate) +
        " enhanced=" + std::to_string(s.enhanced) +
        " fast=" + std::to_string(s.fast) + ": " + e.what());
  }
}
void phase_matrix() {
  for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (bool enhanced : {false, true})
      for (bool fast : {false, true})
        for (unsigned d : {0x1d00u, 0x1d13u})
          for (auto phase : phases)
            for (unsigned variant = 0; variant < 8; ++variant) {
              Scenario s{.version = version,
                         .phase = phase,
                         .enhanced = enhanced,
                         .fast = fast,
                         .direct_page = d};
              switch (variant) {
              case 1:
                s.candidate_y = 200;
                s.moving_direction = s.candidate_direction = 2;
                break;
              case 2:
                s.candidate_x = 200;
                s.moving_direction = s.candidate_direction = 6;
                break;
              case 3:
                s.script = 0xffff;
                s.candidate = 22;
                s.moving_enabled = 0;
                break;
              case 4:
                s.marker = 0x8000;
                s.movement = 2;
                s.enabled = 0;
                break;
              case 5:
                s.intangible = 1;
                s.npc_id = 0x8000;
                s.style = 12;
                break;
              case 6:
                s.intangible = 0xffff;
                s.npc_id = 0xffff;
                s.demo = 1;
                s.width = 0;
                s.height = 0;
                break;
              case 7:
                s.query_x = 0;
                s.query_y = 0xffff;
                s.candidate_x = 0xffff;
                s.candidate_y = 0;
                s.width = s.moving_width = 0x8000;
                s.height = s.moving_height = 0xffff;
                s.status = 0x86;
                break;
              }
              checked(s, "phase matrix", [&] {
                Pair p(s);
                p.advance(expected(s, *p.legacy).steps, 1);
              });
            }
  for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (auto phase : phases)
      for (unsigned d : {0x1c00u, 0x1ee2u}) {
        Scenario s{.version = version, .phase = phase, .direct_page = d};
        checked(s, "frame boundary", [&] {
          Pair p(s);
          p.advance(64, 1);
        });
      }
}
template <class Setup>
void rejection(Scenario s, const char *label, Setup setup,
               unsigned maximum = 64) {
  checked(s, label, [&] {
    Pair p(s);
    p.configure(setup);
    p.advance(maximum, 0, false);
  });
}
void guards(eb::GameVersion version) {
  for (auto phase : phases) {
    Scenario s{.version = version, .phase = phase};
    rejection(s, "zero quota", [](Machine &) {}, 0);
    Pair measure(s);
    const auto quota = expected(s, *measure.legacy).steps;
    rejection(s, "short quota", [](Machine &) {}, quota - 1);
    rejection(s, "decimal arithmetic", [](Machine &m) {
      m.cpu.status_register |= eb::MainCpu65816::Decimal;
    });
    rejection(s, "M8", [](Machine &m) {
      m.cpu.status_register |= eb::MainCpu65816::Accumulator8Bit;
    });
    rejection(s, "X8", [](Machine &m) {
      m.cpu.status_register |= eb::MainCpu65816::Index8Bit;
    });
    rejection(s, "wrong bank", [](Machine &m) { m.cpu.data_bank = 0; });
    rejection(s, "write observer", [](Machine &m) {
      m.cpu.observe_memory_write = [&m](auto a, auto v) {
        m.writes.emplace_back(a, v);
      };
    });
    rejection(s, "WRAM hook", [](Machine &m) {
      m.bus.debug_read_wram = [](unsigned, std::uint8_t v) {
        return std::uint8_t(v ^ 1);
      };
    });
    rejection(s, "imminent refresh", [](Machine &m) { m.clock_position(530); });
    rejection(s, "line boundary", [](Machine &m) { m.clock_position(1350); });
    rejection(s, "scratch below arena",
              [](Machine &m) { m.cpu.direct_page = 0x1bff; });
    rejection(s, "scratch above arena",
              [](Machine &m) { m.cpu.direct_page = 0x1ee3; });
    rejection(s, "scratch aliases actor table",
              [&](Machine &m) { m.cpu.direct_page = layout(version).x; });
#ifdef EB_GAMEPLAY_AUDIT
    rejection(s, "bus observer", [](Machine &m) {
      m.bus.observe_bus_access = [&m](bool w, auto a, auto v) {
        m.accesses.emplace_back(w, a, v);
      };
    });
#endif
  }
  Scenario s{.version = version, .phase = Phase::Input};
  rejection(s, "moving slot30", [](Machine &m) { m.cpu.y_index = 30; });
  s.phase = Phase::MovingBox;
  rejection(s, "captured moving index mismatch",
            [](Machine &m) { m.cpu.x_index ^= 2; });
  for (auto phase :
       {Phase::Eligibility, Phase::CandidateBox, Phase::VerticalStart}) {
    s.phase = phase;
    rejection(s, "candidate scratch disagreement",
              [](Machine &m) { m.word(m.cpu.direct_page + 2, 6); });
    rejection(s, "candidate outside scan", [](Machine &m) {
      m.word(m.cpu.direct_page + 2, 23);
      m.word(m.cpu.direct_page + 0x12, 23);
    });
  }
  s.phase = Phase::HorizontalStart;
  rejection(s, "candidate X alias mismatch",
            [](Machine &m) { m.cpu.x_index = 0xfffe; });
  s.phase = Phase::Eligibility;
  s.script = 0xffff;
  checked(s, "unused path still permits decimal mode", [&] {
    Pair p(s);
    p.configure([](Machine &m) { m.cpu.status_register |= 8; });
    p.advance(64, 1);
  });
  s.phase = Phase::Loop;
  s.candidate = 23;
  checked(s, "terminal loop counter", [&] {
    Pair p(s);
    p.advance(64, 1);
  });
}
void between_phases(eb::GameVersion version) {
  Scenario s{.version = version, .phase = Phase::Eligibility};
  checked(s, "fresh eligibility/hitbox state", [&] {
    Pair p(s);
    p.advance(64, 1);
    p.scenario.phase = Phase::CandidateBox;
    p.configure([&](Machine &m) {
      m.entity(layout(version).enabled, s.candidate, 0);
      m.clock_position(32);
    });
    p.advance(64, 1);
    require(p.native->cpu.program_counter == code(s, 0x611f),
            "Candidate enable was cached across yield");
  });
  s.phase = Phase::CandidateBox;
  checked(s, "captured extents and fresh horizontal position", [&] {
    Pair p(s);
    p.advance(64, 1);
    p.scenario.phase = Phase::VerticalStart;
    p.configure([&](Machine &m) {
      const auto l = layout(version);
      m.entity(l.vertical_width, s.candidate, 0x7000);
      m.entity(l.vertical_height, s.candidate, 0x7000);
      m.clock_position(32);
    });
    p.advance(64, 1);
    p.scenario.phase = Phase::VerticalEnd;
    p.configure([&](Machine &m) {
      m.entity(layout(version).y, s.candidate, 300);
      m.clock_position(32);
    });
    p.advance(64, 1);
    p.scenario.phase = Phase::HorizontalStart;
    p.configure([&](Machine &m) {
      m.entity(layout(version).x, s.candidate, 200);
      m.clock_position(32);
    });
    p.advance(64, 1);
    require(p.native->cpu.program_counter == code(s, 0x611f),
            "Horizontal phase reused stale actor position");
  });
}
void whole_queries(eb::GameVersion version) {
  for (bool enhanced : {false, true})
    for (bool fast : {false, true})
      for (bool narrow : {false, true})
        for (unsigned initial_clock : {0u, 200u, 580u, 1000u})
          for (unsigned population : {0u, 1u, 7u, 23u}) {
            Scenario s{.version = version,
                       .phase = Phase::Input,
                       .enhanced = enhanced,
                       .fast = fast};
            checked(s, "whole query", [&] {
              Pair p(s);
              p.configure([&](Machine &m) {
                const auto l = layout(version);
                for (unsigned slot = 0; slot < 23; ++slot) {
                  m.entity(l.script, slot, slot < population ? 1 : 0xffff);
                  m.entity(l.x, slot, slot + 1 == population ? 100 : 300);
                  m.entity(l.y, slot, 100);
                }
                m.cpu.direct_page = 0x1e00;
                m.cpu.stack_pointer = 0x1fff;
                m.cpu.accumulator = 100;
                m.cpu.x_index = 100;
                m.cpu.y_index = 23;
                m.cpu.status_register = std::uint8_t(4 | (narrow ? 0x20 : 0));
                m.clock_position(initial_clock);
                m.cpu.program_counter = 0xc0ff00;
                m.cpu.execute_instruction<0x22>(code(s, 0x5ff6), 4);
              });
              unsigned count = 0;
              while (p.native->cpu.program_counter != 0xc0ff04 ||
                     p.native->cpu.stack_pointer != 0x1fff) {
                require(++count < 2000, "Whole source query did not return");
                const auto low = p.native->cpu.program_counter - code(s, 0);
                const auto found = std::find(sites.begin(), sites.end(), low);
                const auto before = p.native->cpu.native_gameplay_batches();
                p.advance(64, -1, false);
                if (p.native->cpu.native_gameplay_batches() != before) {
                  require(found != sites.end(), "Unrecognized native entry");
                  ++whole_admissions[found - sites.begin()];
                }
              }
              require(p.native->cpu.direct_page == 0x1e00,
                      "Whole query failed to restore direct page");
              const auto result = population ? population - 1 : 0xffff;
              require(p.native->cpu.accumulator == result &&
                          p.native->word(layout(version).collided + 46) ==
                              result,
                      "Whole query first hit or result publication differs");
            });
          }
}
void enhanced_thresholds(eb::GameVersion version) {
  for (auto phase : phases)
    for (unsigned target : {1000u, 139990u, 140000u}) {
      Scenario s{.version = version,
                 .phase = phase,
                 .enhanced = true,
                 .direct_page = 0x1d13};
      checked(s, "enhanced threshold", [&] {
        Pair p(s);
        p.configure([&](Machine &m) { m.prime_budget(s, target); });
        const auto before =
            p.native->cpu.timing_snapshot().entity_update_master_clocks;
        p.advance(64, before < 140000 && before >= 139990 ? 0 : 1, false);
      });
    }
}
void negative_control() {
  Pair p(Scenario{});
  p.native->bus.work_ram[0x7000] ^= 1;
  bool caught = false;
  try {
    p.compare();
  } catch (const std::runtime_error &) {
    caught = true;
  }
  require(caught, "Differential comparison accepted deliberate divergence");
}
} // namespace
int main() {
  try {
    negative_control();
    phase_matrix();
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
      guards(version);
      between_phases(version);
      whole_queries(version);
      enhanced_thresholds(version);
    }
    for (auto n : whole_admissions)
      require(n > 0, "Whole-query corpus missed a native phase");
    require(audio_callbacks > 0, "No ordered APU callback exercised");
    std::cout
        << "PASS " << comparisons << " NPC collision comparisons; "
        << admissions << " native admissions, " << declines
        << " bounded/fallback, " << source_steps << " source steps and "
        << audio_callbacks
        << " ordered APU callbacks; all 14 phases admitted in whole queries\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
