// US1C11 source differential. Complete original DISPLAY_TEXT, CC_1C_11,
// EF01D2, REDIRECT_PRINT_NEWLINE, PRINT_NEWLINE and scroll bodies execute.
// Expected state and indexed pixels come only from original RAM/VRAM. Font
// metrics are imported; explicit content/window/cursor inputs are synthetic.
// Pause, glyph sound and window tick are named host boundaries, never
// substitutes for command, width calculation, newline, scroll or glyph
// rendering. JP1C11 remains its separate operandless party-formation operation.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <optional>
#include <span>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
namespace dialogue = eb::native::dialogue;
std::string context;
void require(bool okay, const std::string &why) {
  if (!okay)
    throw std::runtime_error(context + ": " + why);
}
struct Counts {
  std::uint64_t instructions{}, calls{}, helpers{}, commands{}, newline{},
      scroll{}, snapshots{}, pixels{}, command_cases{}, helper_cases{},
      pauses{}, sounds{}, ticks{}, operand_reads{}, font0_distinctions{},
      returned_cursors{}, registers{}, immutable_frames{};
} counts;
enum class Effect { Pause, Sound, Tick };
constexpr unsigned command = 0xc140cf, helper = 0xef01d2, newline = 0xc438b1,
                   scroll = 0xc437b8, display = 0xc186b1, argument = 0xc103dc;
class Source {
public:
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool busy{};
  unsigned returning{}, helper_argument{}, helpers{}, commands{}, newlines{},
      scrolls{}, arguments{};
  std::optional<Effect> pending;
  static constexpr unsigned stack = 0x1fdf, direct = 0x1e00;
  std::array<std::uint8_t, 32> caller;
  explicit Source(std::span<const std::uint8_t> image)
      : bus(std::make_unique<eb::SnesBus>(image, eb::GameVersion::US)),
        cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.direct_page = direct;
    cpu.stack_pointer = stack;
    cpu.data_bank = 0x7e;
    for (unsigned i = 0; i < caller.size(); ++i) {
      caller[i] = std::uint8_t(0xa5 ^ (37 * i));
      byte(stack + 1 + i, caller[i]);
    }
    byte(0xd, 0x80);
    bus->write_byte(0x2100,
                    0x80); // Actual immediate DMA, no semaphore fabrication.
    byte(0x9622, 1);
    put(0x88e0, 0);
    put(0x88e2, 1);
    put(0x8958, 0);
    put32(direct + 14, 0xe00000);
    put32(direct + 18, 0x7f0000);
    call(0xc41a9e, true); // Genuine fixed-font decompression.
    std::copy_n(bus->work_ram.begin() + 0x10000, 0x3800,
                bus->video_ram.begin() + 0xc000);
    call(0xc43f53, true); // Real reserved-tile allocation map.
    call(0xc45e96, true);
  }
  void byte(unsigned a, unsigned v) { bus->work_ram.at(a) = std::uint8_t(v); }
  unsigned get(unsigned a) const {
    return bus->work_ram.at(a) | (unsigned(bus->work_ram.at(a + 1)) << 8);
  }
  unsigned get32(unsigned a) const { return get(a) | (get(a + 2) << 16); }
  void put(unsigned a, unsigned v) {
    byte(a, v);
    byte(a + 1, v >> 8);
  }
  void put32(unsigned a, unsigned v) {
    put(a, v);
    put(a + 2, v >> 16);
  }
  static unsigned record(unsigned slot) { return 0x8650 + slot * 82; }
  static unsigned tilemap(unsigned slot) { return 0x6800 + slot * 0x800; }
  void define(unsigned id, unsigned slot, unsigned width, unsigned font) {
    put(0x88e4 + id * 2, slot);
    const auto at = record(slot);
    put(at + 4, id);
    put(at + 10, width);
    put(at + 12, 6);
    put(at + 21, font);
    put(at + 53, tilemap(slot));
    for (unsigned i = 0; i < width * 6; ++i)
      put(tilemap(slot) + i * 2, 64);
  }
  void begin(unsigned entry, bool far, unsigned a = 0, unsigned x = 0) {
    require(!busy && !pending, "overlapping original call");
    require(cpu.stack_pointer == stack && cpu.direct_page == direct,
            "original caller frame changed");
    cpu.program_counter = (entry & 0xff0000) | 0xff00;
    returning = cpu.program_counter + (far ? 4 : 3);
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    if (far)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 65535, 3);
    busy = true;
    ++counts.calls;
  }
  std::optional<Effect> advance() {
    require(!pending, "pending original host boundary");
    for (unsigned i = 0; i < 3'000'000 && busy; ++i) {
      if (cpu.program_counter == returning && cpu.stack_pointer == stack) {
        require(cpu.direct_page == direct && cpu.data_bank == 0x7e,
                "original return ABI changed");
        require(std::equal(caller.begin(), caller.end(),
                           bus->work_ram.begin() + stack + 1),
                "caller stack bytes changed");
        busy = false;
        return {};
      }
      const auto pc = cpu.program_counter;
      if (pc == command) {
        ++commands;
        ++counts.commands;
      }
      if (pc == helper) {
        helper_argument = cpu.accumulator;
        ++helpers;
        ++counts.helpers;
      }
      if (pc == newline) {
        ++newlines;
        ++counts.newline;
      }
      if (pc == scroll) {
        ++scrolls;
        ++counts.scroll;
      }
      if (pc == argument) {
        ++arguments;
        ++counts.operand_reads;
      }
      if (pc == 0xc100d6 || pc == 0xc0abe0 || pc == 0xc12dd5) {
        pending = pc == 0xc100d6   ? Effect::Pause
                  : pc == 0xc0abe0 ? Effect::Sound
                                   : Effect::Tick;
        return pending;
      }
      cpu.step_instruction();
      ++counts.instructions;
    }
    require(!busy, "original instruction bound: " + cpu.describe_registers());
    return {};
  }
  void respond() {
    require(bool(pending), "missing source host request");
    if (*pending == Effect::Pause) {
      require(cpu.accumulator == 0, "unexpected pause operand");
      cpu.execute_instruction<0x60>(0, 1);
      ++counts.pauses;
    } else {
      cpu.execute_instruction<0x6b>(0, 1);
      if (*pending == Effect::Sound)
        ++counts.sounds;
      else
        ++counts.ticks;
    }
    pending.reset();
  }
  void call(unsigned entry, bool far, unsigned value = 0, unsigned x = 0) {
    begin(entry, far, value, x);
    require(!advance(), "unexpected service in source helper");
  }
  std::vector<std::uint8_t> pixels(unsigned slot) const {
    const auto width = get(record(slot) + 10) * 8;
    std::vector<std::uint8_t> result(width * 48);
    for (unsigned y = 0; y < 48; ++y)
      for (unsigned x = 0; x < width; ++x) {
        const auto descriptor =
            get(tilemap(slot) + ((y / 8) * (width / 8) + x / 8) * 2);
        const auto gx = descriptor & 0x4000 ? 7 - x % 8 : x % 8,
                   gy = descriptor & 0x8000 ? 7 - y % 8 : y % 8;
        const auto at = (0xc000 + (descriptor & 1023) * 16 + gy * 2) & 65535;
        const auto color =
            ((bus->video_ram[at] >> (7 - gx)) & 1) |
            (((bus->video_ram[(at + 1) & 65535] >> (7 - gx)) & 1) << 1);
        result[y * width + x] =
            std::uint8_t(color ? color + ((descriptor >> 10) & 7) * 4 : 0);
      }
    return result;
  }
};
struct Pair {
  Source source;
  dialogue::State state;
  dialogue::TextOutput output;
  // Remapped slots ensure width/layout and fallback argument resolution use
  // the active authored window rather than accidentally assuming id==slot.
  static constexpr std::array<unsigned, 2> slots{1, 0};
  Pair(std::span<const std::uint8_t> image,
       std::shared_ptr<const dialogue::FontResources> fonts, unsigned width,
       unsigned font)
      : source(image), output(std::move(fonts), state) {
    for (unsigned id = 0; id < 2; ++id) {
      state.windows.emplace(dialogue::WindowId{id}, dialogue::WindowState{});
      dialogue::TextStyle style;
      style.font = std::uint16_t(font);
      style.priority = false;
      output.define_window({id}, {std::uint16_t(width), 6}, style);
      source.define(id, slots[id], width, font);
      auto &w = state.windows.at({id});
      w.active = {0x12345678 + id, 0xabcd0166 + id, 0x3579};
      w.saved = {0xfedcba98, 0x76543210, 0x2468};
      const auto at = Source::record(slots[id]);
      source.put32(at + 23, w.active.working);
      source.put32(at + 27, w.active.argument);
      source.put(at + 31, w.active.secondary);
      source.put32(at + 33, w.saved.working);
      source.put32(at + 37, w.saved.argument);
      source.put(at + 41, w.saved.secondary);
    }
    state.upcoming_word_length = 0x1357;
    source.put(0x9660, state.upcoming_word_length);
    source.put(0x88e2, slots[1]);
    focus(0);
    compare();
  }
  void focus(unsigned id) {
    state.focus = dialogue::WindowId{id};
    source.put(0x8958, id);
  }
  void position(unsigned column, unsigned line, unsigned offset) {
    const unsigned id = state.focus->value;
    output.set_cursor({id}, {std::uint16_t(column), std::uint16_t(line)},
                      offset);
    // Source and native positioning both terminate partial-column reuse.
    source.call(0xc43d75, true, column * 8 + offset, line);
  }
  void padding(unsigned value) {
    output.policy().character_padding = std::uint8_t(value);
    source.byte(0x5e6d, value);
  }
  void arg(unsigned id, std::uint32_t value) {
    state.windows.at({id}).active.argument = value;
    source.put32(Source::record(slots[id]) + 27, value);
  }
  void compare() {
    for (unsigned id = 0; id < 2; ++id) {
      const auto at = Source::record(slots[id]);
      const auto &actual = output.window({id});
      require(actual.cursor.column == source.get(at + 14) &&
                  actual.cursor.line == source.get(at + 16),
              "cursor mismatch");
      const auto expected = source.pixels(slots[id]);
      const auto frame = output.frame({id});
      require(expected == frame->pixels, "indexed canvas mismatch");
      require(std::all_of(frame->priority.begin(), frame->priority.end(),
                          [](auto p) { return !p; }),
              "priority mismatch");
      const auto &w = state.windows.at({id});
      require(source.get32(at + 23) == w.active.working &&
                  source.get32(at + 27) == w.active.argument &&
                  source.get(at + 31) == w.active.secondary &&
                  source.get32(at + 33) == w.saved.working &&
                  source.get32(at + 37) == w.saved.argument &&
                  source.get(at + 41) == w.saved.secondary,
              "window registers changed");
      counts.registers += 6;
      counts.pixels += expected.size();
    }
    require(output.fractional_offset() == (source.get(0x9e23) & 7),
            "fraction mismatch");
    require(output.indent_pending() == bool(source.bus->work_ram[0x5e75]),
            "indent mismatch");
    require(output.last_character() == source.bus->work_ram[0x5e76],
            "last character mismatch");
    require(output.saturn_composition_active() == bool(source.get(0x9e29)),
            "Saturn composition mismatch");
    require(output.redraw_pending() == bool(source.bus->work_ram[0x9623]),
            "redraw mismatch");
    require(state.upcoming_word_length == source.get(0x9660),
            "upcoming-word counter changed");
    ++counts.snapshots;
  }
  void glyph(unsigned code) {
    output.begin_glyph(std::uint16_t(code));
    source.begin(0xc10cb6, false, code);
    while (true) {
      const auto expected = source.advance();
      const auto progress = output.advance();
      require(bool(expected) ==
                  (progress == dialogue::OutputProgress::Suspended),
              "glyph effect extent mismatch");
      compare();
      if (!expected)
        break;
      require(
          *expected != Effect::Pause && output.effect() &&
              (output.effect()->kind == dialogue::TextEffectKind::TextSound) ==
                  (*expected == Effect::Sound),
          "glyph effect order mismatch");
      source.respond();
      output.respond();
    }
  }
  void seed_art() {
    // Genuine source and native glyph bodies establish distinct rows. This
    // makes scroll observable in pixels, not only its cursor coordinates.
    for (unsigned row = 0; row < 3; ++row) {
      position(0, row, 0);
      glyph(0x71 + row);
      glyph(0x78 + row);
    }
  }
  void hint(unsigned value) {
    const auto held = output.frame(*state.focus);
    const auto held_pixels = held->pixels;
    const auto composition = output.composition_snapshot();
    const auto lines = source.newlines;
    dialogue::Request request;
    request.kind = dialogue::RequestKind::WidthHint;
    request.count = value;
    // High VWF_X bits are a matched source-only storage input: the helper
    // masks them and native owns only the semantic subcolumn offset.
    source.put(0x9e23, 0xa5f8 | output.fractional_offset());
    output.begin(request);
    source.call(helper, true, value);
    require(output.advance() == dialogue::OutputProgress::Complete &&
                !output.effect(),
            "width helper invented host effect");
    compare();
    if (source.newlines == lines)
      require(output.composition_snapshot() == composition,
              "fit changed composition");
    require(held->pixels == held_pixels, "previously sampled frame changed");
    ++counts.immutable_frames;
    ++counts.helper_cases;
  }
};
unsigned metric(std::span<const std::uint8_t> image, unsigned value,
                unsigned font = 0) {
  const auto table = 0x3f054 + 12 * font;
  const unsigned pointer = image[table] | (unsigned(image[table + 1]) << 8) |
                           (unsigned(image[table + 2]) << 16);
  return image[(pointer & 0x3fffff) + ((value - 0x50) & 127)];
}
void helpers(const eb::GameAssets &assets,
             std::shared_ptr<const dialogue::FontResources> fonts) {
  for (unsigned font = 0; font < 5; ++font) {
    context = "helper font=" + std::to_string(font);
    Pair pair(assets.image, fonts, 64, font);
    for (unsigned index = 0; index < 128; ++index)
      for (unsigned edge = 0; edge < 3; ++edge) {
        const unsigned value = 0x150 + index,
                       width = metric(assets.image, value),
                       used = 512 - width - 2;
        context = "helper index=" + std::to_string(index) +
                  " font=" + std::to_string(font) +
                  " edge=" + std::to_string(edge);
        pair.position(used / 8 + 1, edge == 2 ? 2 : 0, used & 7);
        pair.padding(1 + edge);
        const auto before = pair.source.newlines;
        pair.hint(value);
        require(pair.source.newlines - before == (edge == 2),
                "source boundary selection differs from constructed input");
        if (font && metric(assets.image, value, font) != width)
          ++counts.font0_distinctions;
      }
    for (unsigned column : {0u, 1u, 63u, 64u})
      for (unsigned offset : {0u, 7u})
        for (unsigned pad : {0u, 1u, 255u})
          for (unsigned value : {0u, 0x2fu, 0x4fu, 0x50u, 0xffffu}) {
            context = "helper edge font=" + std::to_string(font) +
                      " column=" + std::to_string(column) +
                      " offset=" + std::to_string(offset) +
                      " pad=" + std::to_string(pad) +
                      " value=" + std::to_string(value);
            pair.position(column, 0, offset);
            pair.padding(pad);
            pair.hint(value);
          }
  }
}
std::shared_ptr<const dialogue::Program>
program(std::vector<std::uint8_t> bytes) {
  return std::make_shared<dialogue::Program>(
      eb::GameVersion::US,
      std::vector<dialogue::ContentBlock>{{1, 0x8000, std::move(bytes)}});
}
void command_case(const eb::GameAssets &assets,
                  std::shared_ptr<const dialogue::FontResources> fonts,
                  unsigned font, unsigned operand, std::uint32_t arg,
                  unsigned line, unsigned offset, bool change_focus) {
  context = "stream font=" + std::to_string(font) +
            " operand=" + std::to_string(operand) +
            " argument=" + std::to_string(arg) +
            " line=" + std::to_string(line) +
            " offset=" + std::to_string(offset) +
            " refocus=" + std::to_string(change_focus);
  const auto following = std::array<std::uint8_t, 3>{
      0x50, 0x70, 0x71}[(font + operand + line + offset) % 3];
  const std::vector<std::uint8_t> bytes{
      0x10, 0, 0x1c, 0x11, std::uint8_t(operand), 0x10, 0, following,
      0x10, 0, 0x71, 2};
  auto image = assets.image;
  std::copy(bytes.begin(), bytes.end(), image.begin() + 0x2e8000);
  Pair pair(image, fonts, 12, font);
  pair.seed_art();
  pair.position(12, line, offset);
  pair.padding(line ? 3 : 0);
  pair.arg(0, arg);
  pair.arg(1, arg ^ 0x12345678u);
  auto &source = pair.source;
  const auto commands_before = source.commands, helpers_before = source.helpers,
             reads_before = source.arguments;
  dialogue::Conversation conversation(program(bytes), pair.state, pair.output);
  conversation.start(dialogue::Location{1, 0x8000});
  source.put32(Source::direct + 14, 0xee8000);
  source.begin(display, true);
  unsigned pauses = 0;
  for (unsigned n = 0; n < 10000; ++n) {
    const auto progress = conversation.advance(1 + n % 5);
    if (progress == dialogue::Progress::BudgetExhausted)
      continue;
    const auto expected = source.advance();
    pair.compare();
    require(pair.state.stream_slot == source.get(0x97b8),
            "stream counter mismatch");
    if (progress == dialogue::Progress::Finished) {
      require(!expected && !source.busy,
              "native stream completed before source");
      const auto end =
          dialogue::Location{1, std::uint16_t(0x8000 + bytes.size())};
      require(conversation.snapshot().returned_cursor == end &&
                  source.get32(Source::direct + 6) == 0xee8000 + bytes.size(),
              "returned stream extent mismatch");
      require(conversation.snapshot().consumed_bytes == bytes.size(),
              "consumed byte extent mismatch");
      require(source.commands - commands_before == 1 &&
                  source.helpers - helpers_before == 1 && pauses == 3,
              "complete command extent mismatch");
      require(source.arguments - reads_before == (operand == 0),
              "literal/fallback register read mismatch");
      const unsigned resolved =
          operand ? operand
                  : std::uint16_t(pair.state.window().active.argument);
      require(source.helper_argument == resolved,
              "command operand differs from original low word");
      ++counts.command_cases;
      ++counts.returned_cursors;
      return;
    }
    require(expected && conversation.event(), "missing stream host request");
    const auto event = *conversation.event();
    if (*expected == Effect::Pause) {
      const auto *request = std::get_if<dialogue::Request>(&event);
      require(request && request->kind == dialogue::RequestKind::Pause &&
                  request->count == 0,
              "pause request differs");
      if (pauses++ == 0 && change_focus) {
        pair.focus(1);
        pair.arg(1, arg);
      }
    } else {
      const auto *request = std::get_if<dialogue::TextEffect>(&event);
      require(request &&
                  (request->kind == dialogue::TextEffectKind::TextSound) ==
                      (*expected == Effect::Sound),
              "glyph host effect differs");
    }
    require(conversation.advance(3) == dialogue::Progress::Suspended &&
                conversation.event() == event,
            "pending event changed");
    source.respond();
    conversation.respond();
  }
  throw std::runtime_error(context + ": native stream bound");
}
void commands(const eb::GameAssets &assets,
              std::shared_ptr<const dialogue::FontResources> fonts) {
  for (unsigned font = 0; font < 5; ++font)
    for (unsigned operand : {0u, 0x2fu, 0x50u, 0x80u, 0xcfu, 0xe0u, 0xffu})
      for (unsigned line : {0u, 2u})
        for (unsigned offset : {0u, 7u})
          command_case(assets, fonts, font, operand, 0xdead0166, line, offset,
                       false);
  for (unsigned font : {0u, 1u, 4u})
    for (auto value : {0xdead0000u, 0xbeef0050u, 0xabcdffffu, 0x12340166u})
      command_case(assets, fonts, font, 0, value, 2, 7, true);
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "SKIP: local US pack required for the width-hint reference\n";
    return 77;
  }
  try {
    unsigned us = 0;
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      if (assets.version != eb::GameVersion::US) {
        std::cout << "JP: separate operandless formation command; not a "
                     "width-hint case\n";
        continue;
      }
      ++us;
      auto fonts =
          dialogue::FontResources::import(assets.image, assets.version);
      helpers(assets, fonts);
      commands(assets, fonts);
    }
    if (!us) {
      std::cout
          << "SKIP: supplied packs contain no US width-hint implementation\n";
      return 77;
    }
    std::cout << "PASS US width hint: " << counts.helper_cases
              << " paired complete helpers, " << counts.command_cases
              << " complete DISPLAY_TEXT commands, "
              << counts.font0_distinctions
              << " alternate-font metric distinctions, "
              << counts.returned_cursors << " returned cursors.\n";
    std::cout << "Original: " << counts.instructions << " instructions, "
              << counts.calls << " calls, " << counts.commands
              << " command handlers, " << counts.helpers << " EF01D2 bodies, "
              << counts.newline << " newlines, " << counts.scroll
              << " scrolls, " << counts.operand_reads << " argument reads.\n";
    std::cout << "Compared: " << counts.snapshots << " snapshots, "
              << counts.pixels << " indexed pixels, " << counts.registers
              << " window registers, " << counts.immutable_frames
              << " retained immutable samples. Host boundaries: "
              << counts.pauses << " pauses, " << counts.sounds << " sounds, "
              << counts.ticks << " window ticks.\n";
    std::cout
        << "Scope: actual original command/helper/newline/scroll/glyph "
           "execution; native Runtime/Conversation/TextOutput. Imported fonts "
           "and synthetic content/windows. JP meaning unchanged; no natural "
           "activation, borders, world frames, PCM or GPU claim.\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
