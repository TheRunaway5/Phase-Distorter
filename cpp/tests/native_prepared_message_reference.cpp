// Prepared-message oracle. Complete original copy/value helpers and authored
// DISPLAY_TEXT streams run with imported US/JP data. Rendering and prompts
// execute original code; world/frame/audio callbacks are explicit boundaries.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "eb/native/dialogue/prompt_host.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "eb/native/saves/session.hpp"
#include "eb/native/story/growth_dialogue.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <memory>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
namespace dialogue = eb::native::dialogue;
void require(bool value, const std::string &reason) {
  if (!value)
    throw std::runtime_error(reason);
}
std::string hex(unsigned value) {
  std::ostringstream out;
  out << std::hex << value;
  return out.str();
}
struct Layout {
  unsigned load, create, party, stride, flavor, windows, record_size, open,
      focus, buffer, helper, number, money, string, letter, tick, sound, wait,
      divide, modulus;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {0xc47c3f, 0xc104ee, 0x99ce,   95,       0x99cd,
            0x8650,   82,       0x88e4,   0x8958,   0x895a,
            0xc10d7c, 0xc10df6, 0xc4507a, 0xc10efc, 0xc10cb6,
            0xc12dd5, 0xc0abe0, 0xc08756, 0xc091a6, 0xc09237};
  return {0xc459ab, 0xc106e4, 0x9c7f,   94,       0x9c7e,   0x89c2,   76,
          0x8c26,   0x8c96,   0x8c98,   0xc112ca, 0xc11344, 0xc11404, 0xc114dd,
          0xc111ec, 0xc13502, 0xc0abbf, 0xc0874c, 0xc09188, 0xc09219};
}
struct Write {
  unsigned address, value;
};
struct Glyph {
  unsigned value;
  bool fixed;
};
struct Totals {
  std::uint64_t instructions{}, writes{}, glyphs{}, pixels{}, ppu_pixels{},
      brush_pixels{};
  unsigned cases{}, effects{}, native_cases{}, native_effects{}, snapshots{},
      jp_acknowledgements{};
} totals;
class Source {
public:
  eb::GameVersion version;
  Layout p;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  std::vector<Write> writes;
  std::vector<Glyph> glyphs;
  std::vector<unsigned> string_reads;
  bool trace{}, glyph_seam = true;
  unsigned money_frame{}, money_measured_width{};
  std::vector<unsigned> money_measurement;
  std::function<void(unsigned)> at_instruction;
  std::function<void(unsigned)> at_service;
  explicit Source(const eb::GameAssets &assets)
      : version(assets.version), p(layout(version)),
        bus(std::make_unique<eb::SnesBus>(assets.image, version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.data_bank = 0x7e;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    bus->work_ram[0xd] = 0x80;
    bus->write_byte(0x2100, 0x80);
    call(0xc200d9, true);
    if (version == eb::GameVersion::US)
      call(0xc43f53, true);
    else
      call(0xc43be8, true);
    bus->work_ram[p.flavor] = 1;
    for (unsigned member = 0; member < 4; ++member)
      for (unsigned i = 0; i < 4; ++i)
        bus->work_ram[p.party + member * p.stride + i] =
            (version == eb::GameVersion::US ? 0x71 : 0x41) + i;
    call(p.load, true);
    if (version == eb::GameVersion::US)
      call(0xc44963, true, 1);
    else {
      put32(0x1e0e, 0x7f0000);
      call(0xc08616, true, 0, 0x3800, 0x6000);
    }
    call(p.create, false, 1);
    bus->work_ram[record() + 18] = 0x80;
    bus->work_ram[version == eb::GameVersion::US ? 0x9622 : 0x991a] = 1;
    cpu.observe_memory_write = [&](std::uint32_t address, std::uint8_t value) {
      if (!trace)
        return;
      if ((address >> 16) == 0x7e)
        writes.push_back({address & 65535, value});
      else if ((address & 0x40e000) == 0)
        writes.push_back({address & 8191, value});
    };
    bus->debug_read_wram = [&](unsigned address, std::uint8_t value) {
      if (trace && address >= 0x5000 && address < 0x5040)
        string_reads.push_back(address);
      return value;
    };
  }
  unsigned get(unsigned at) const {
    return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8);
  }
  unsigned get32(unsigned at) const { return get(at) | (get(at + 2) << 16); }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void put32(unsigned at, unsigned value) {
    put(at, value);
    put(at + 2, value >> 16);
  }
  unsigned record() const {
    return p.windows + get(p.open + 2) * p.record_size;
  }
  void call(unsigned entry, bool far, unsigned a = 0, unsigned x = 0,
            unsigned y = 0) {
    const unsigned d = cpu.direct_page, s = cpu.stack_pointer,
                   db = cpu.data_bank, trampoline = (entry & 0xff0000) | 0xff00;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = trampoline;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    if (far)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 65535, 3);
    for (unsigned n = 0; n < 30'000'000; ++n) {
      if (cpu.program_counter == trampoline + (far ? 4 : 3) &&
          cpu.stack_pointer == s) {
        require(cpu.direct_page == d && cpu.data_bank == db,
                "Original substitution changed caller ABI");
        return;
      }
      const auto pc = cpu.program_counter;
      if (at_instruction)
        at_instruction(pc);
      if (pc == p.letter ||
          (version == eb::GameVersion::US && pc == 0xc43f77)) {
        if (trace)
          glyphs.push_back({cpu.accumulator, pc != p.letter});
        if (glyph_seam) {
          if (pc == p.letter)
            cpu.execute_instruction<0x60>(0, 1);
          else
            cpu.execute_instruction<0x6b>(0, 1);
          continue;
        }
      }
      if (pc == p.tick || pc == p.sound || pc == p.wait ||
          pc == (version == eb::GameVersion::US ? 0xc12e42u : 0xc1355eu)) {
        if (at_service)
          at_service(pc);
        cpu.execute_instruction<0x6b>(0, 1);
        ++totals.effects;
        continue;
      }
      if (version == eb::GameVersion::JP &&
          (pc == 0xc439e2 || pc == 0xc43be8) && get(0xa031)) {
        put(0xa031, 0);
        ++totals.jp_acknowledgements;
      }
      cpu.step_instruction();
      ++totals.instructions;
    }
    throw std::runtime_error("Original substitution did not return: " +
                             cpu.describe_registers());
  }
  void begin_trace() {
    writes.clear();
    glyphs.clear();
    string_reads.clear();
    money_frame = 0;
    trace = true;
  }
  void end_trace() {
    trace = false;
    totals.writes += writes.size();
    totals.glyphs += glyphs.size();
    ++totals.cases;
  }
  void nested(unsigned entry, bool far, unsigned parameter,
              unsigned argument = 0, unsigned index = 0) {
    const unsigned pc = cpu.program_counter, d = cpu.direct_page,
                   s = cpu.stack_pointer;
    require(pc == p.tick, "Original nested substitution needs WindowTick");
    const std::vector<std::uint8_t> locals(bus->work_ram.begin() + d,
                                           bus->work_ram.begin() + 0x1e12),
        stack(bus->work_ram.begin() + s + 1, bus->work_ram.begin() + 0x2000);
    // Original C callback ABI: PHD and a separate18-byte argument frame.
    // The pending parent JSL stays on the hardware stack throughout.
    cpu.execute_instruction<0xc2>(0x31, 2);
    cpu.execute_instruction<0x0b>(0, 1);
    cpu.execute_instruction<0x7b>(0, 1);
    cpu.execute_instruction<0x69>(0xffee, 3);
    cpu.execute_instruction<0x5b>(0, 1);
    put32(cpu.direct_page + 14, parameter);
    call(entry, far, argument, index);
    cpu.execute_instruction<0x2b>(0, 1);
    require(
        cpu.direct_page == d && cpu.stack_pointer == s &&
            std::equal(locals.begin(), locals.end(),
                       bus->work_ram.begin() + d) &&
            std::equal(stack.begin(), stack.end(),
                       bus->work_ram.begin() + s + 1),
        "Original nested substitution corrupted caller locals/return stack");
    cpu.program_counter = pc;
  }
  unsigned window_record(unsigned id = 1) const {
    const unsigned slot = get(p.open + id * 2);
    // This fixture creates ID1 in physical slot0. Its metadata remains
    // source-owned after close and is observed by explicit ambient-slot
    // cases; arbitrary invalid open-table values are not normalized.
    if (id == 1 && slot == 0xffff)
      return p.windows;
    require(slot < 8, "Source window not open");
    return p.windows + slot * p.record_size;
  }
  dialogue::TextFrame frame(unsigned id = 1) const {
    const auto at = window_record(id), columns = get(at + 10),
               rows = get(at + 12), tilemap = get(at + 53);
    dialogue::TextFrame result{columns * 8, rows * 8, {}, {}};
    result.pixels.resize(result.width * result.height);
    result.priority.resize(result.pixels.size());
    for (unsigned y = 0; y < result.height; ++y)
      for (unsigned x = 0; x < result.width; ++x) {
        const auto descriptor = get(tilemap + ((y / 8) * columns + x / 8) * 2),
                   gx = (descriptor & 0x4000) ? 7 - x % 8 : x % 8,
                   gy = (descriptor & 0x8000) ? 7 - y % 8 : y % 8;
        const auto location =
            (0xc000 + (descriptor & 1023) * 16 + gy * 2) & 65535;
        const unsigned
            color = ((bus->video_ram[location] >> (7 - gx)) & 1) |
                    (((bus->video_ram[(location + 1) & 65535] >> (7 - gx)) & 1)
                     << 1),
            index = y * result.width + x;
        result.pixels[index] = color ? color + ((descriptor >> 10) & 7) * 4 : 0;
        result.priority[index] = color ? bool(descriptor & 0x2000) : false;
      }
    return result;
  }
  dialogue::TextCompositionSnapshot composition() const {
    const bool us = version == eb::GameVersion::US;
    dialogue::TextCompositionSnapshot result;
    result.columns.resize(us ? 52 : 4);
    const unsigned buffer = us ? 0x3492 : 0x3918;
    for (unsigned column = 0; column < result.columns.size(); ++column)
      for (unsigned y = 0; y < 16; ++y)
        for (unsigned x = 0; x < 8; ++x) {
          const unsigned at = buffer + column * 32 + y * 2;
          result.columns[column][y * 8 + x] =
              ((bus->work_ram[at] >> (7 - x)) & 1) |
              (((bus->work_ram[at + 1] >> (7 - x)) & 1) << 1);
        }
    result.brush_column = get(us ? 0x9e25 : 0xa02b);
    result.fractional_offset = get(us ? 0x9e23 : 0xa029) & 7;
    if (us) {
      result.publication_position = get(0x9652);
      result.partial_publication = get(0x9654) != 0;
    }
    return result;
  }
  void draw_scene() {
    call(version == eb::GameVersion::US ? 0xc2087c : 0xc2081d, true);
    put32(cpu.direct_page + 14,
          version == eb::GameVersion::US ? 0x7e7dfe : 0x7e8176);
    call(0xc08616, true, 0, 0x800, 0x7c00);
  }
  std::vector<std::uint32_t> ppu() const {
    auto display = std::make_unique<eb::SnesBus>(
        std::span(eb::rom_data(version), eb::rom_size(version)), version);
    display->video_ram = bus->video_ram;
    for (unsigned i = 0; i < 32; ++i) {
      const unsigned color = (i * 0x421) & 0x7fff;
      display->palette_ram[i * 2] = color;
      display->palette_ram[i * 2 + 1] = color >> 8;
    }
    display->write_byte(0x2100, 15);
    display->write_byte(0x2105, 1);
    display->write_byte(0x2109, 0x7c);
    display->write_byte(0x210c, 6);
    display->write_byte(0x212c, 4);
    display->write_byte(0x2112, 0xff);
    display->write_byte(0x2112, 0xff);
    while (display->completed_frames < 2)
      display->advance_cpu_cycles(1000);
    return {display->native_framebuffer.begin(),
            display->native_framebuffer.end()};
  }
};
struct Sample {
  unsigned effect{};
  std::array<unsigned, 13> state{};
  dialogue::TextFrame frame;
  dialogue::TextCompositionSnapshot brush;
};
Sample original_sample(const Source &source, unsigned effect = 0) {
  const bool us = source.version == eb::GameVersion::US;
  const unsigned at = source.window_record();
  Sample result;
  result.effect = effect;
  result.frame = source.frame();
  result.brush = source.composition();
  result.state = {source.get(at + 14),
                  source.get(at + 16),
                  source.get(at + 21),
                  source.get(at + 19),
                  source.get32(at + 23),
                  source.get32(at + 27),
                  source.get(at + 31),
                  source.bus->work_ram[us ? 0x9622 : 0x991a],
                  source.bus->work_ram[us ? 0x5e6d : 0x61e5],
                  source.bus->work_ram[us ? 0x5e75 : 0x61ed],
                  source.bus->work_ram[us ? 0x5e76 : 0x61ee],
                  us ? source.bus->work_ram[0x5e73] : 0u,
                  source.get(source.p.focus)};
  return result;
}
class NativePair {
public:
  Source source;
  dialogue::PreparedMessage prepared;
  eb::native::party::State party;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::WindowResources> resources;
  dialogue::State state;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  std::shared_ptr<dialogue::WindowGraphics> graphics;
  std::vector<Sample> samples;
  std::string context;
  explicit NativePair(const eb::GameAssets &assets)
      : source(assets), prepared(assets.version), party(assets.version),
        fonts(dialogue::FontResources::import(assets.image, assets.version)),
        resources(
            dialogue::WindowResources::import(assets.image, assets.version)),
        output(fonts, state), windows(resources, state, output),
        context(assets.version == eb::GameVersion::US ? "US" : "JP") {
    graphics = std::make_shared<dialogue::WindowGraphics>(
        dialogue::WindowInitializationResources::import(assets.image,
                                                        assets.version),
        output);
    windows.set_graphics(graphics);
    std::array<std::uint8_t, 5> name{
        std::uint8_t(assets.version == eb::GameVersion::US ? 0x71 : 0x41),
        std::uint8_t(assets.version == eb::GameVersion::US ? 0x72 : 0x42),
        std::uint8_t(assets.version == eb::GameVersion::US ? 0x73 : 0x43),
        std::uint8_t(assets.version == eb::GameVersion::US ? 0x74 : 0x44), 0};
    dialogue::PartyNameInputs names;
    for (auto &member : names.names)
      member = name;
    graphics->prepare(names, 1);
    auto publication = graphics->begin_publication(
        assets.version == eb::GameVersion::US
            ? dialogue::ArtworkPublication::GeneratedThenCommon
            : dialogue::ArtworkPublication::All);
    while (publication->advance() == dialogue::Progress::Suspended)
      publication->respond();
    require(publication->complete(), "Native initial publication incomplete");
    auto opening = windows.begin(
        {dialogue::WindowAction::Open, dialogue::WindowId{1}, {}, 0});
    while (opening->advance() == dialogue::OutputProgress::Suspended)
      opening->respond();
    require(opening->complete(), "Native initial window incomplete");
    windows.metadata({1}).number_padding = 0x80;
    output.policy().instant = true;
    windows.substitutions().configure(
        dialogue::SubstitutionResources::import(assets.image, assets.version));
    windows.bind_party(party);
    windows.bind_prepared_message(prepared);
    windows.substitutions().configure(
        dialogue::SubstitutionResources::import(assets.image, assets.version),
        eb::native::party::dialogue_values(party));
    for (unsigned id = 1; id <= 4; ++id)
      std::copy_n(name.begin(), party.name_field(id).size(),
                  party.name_field(id).begin());
    auto favourite =
        party.name_field(eb::native::party::NameField::FavouriteThing);
    for (unsigned i = 0; i < favourite.size(); ++i)
      favourite[i] = i < 4 ? name[i] : 0;
    const unsigned descriptor =
        (assets.version == eb::GameVersion::US ? 0x4550f : 0x43305) + 5 * 3;
    const unsigned favourite_address =
        unsigned(assets.image[descriptor + 1]) |
        (unsigned(assets.image[descriptor + 2]) << 8);
    std::copy(favourite.begin(), favourite.end(),
              source.bus->work_ram.begin() + favourite_address);
    source.glyph_seam = false;
  }
  void font(unsigned value) {
    source.put(source.record() + 21, value);
    auto style = output.window({1}).style;
    style.font = value;
    output.set_style({1}, style);
  }
  void padding(unsigned value) {
    source.bus->work_ram[source.record() + 18] = value;
    windows.metadata({1}).number_padding = value;
  }
  void compare(const Sample &expected, const std::string &where) {
    const auto &window = windows.slot_output(0);
    const auto style = window.style;
    const auto &registers = state.registers_at(0).active;
    const unsigned attributes = (style.palette << 10) |
                                (style.priority ? 0x2000 : 0) |
                                (style.flip_horizontal ? 0x4000 : 0) |
                                (style.flip_vertical ? 0x8000 : 0);
    const std::array<unsigned, 13> actual{
        window.cursor.column,
        window.cursor.line,
        style.font,
        attributes,
        registers.working,
        registers.argument,
        registers.secondary,
        unsigned(output.policy().instant),
        output.policy().character_padding,
        unsigned(output.indent_pending()),
        output.last_character(),
        source.version == eb::GameVersion::US ? output.last_pixel_offset_set()
                                              : 0u,
        state.focus ? state.focus->value : 0xffffu};
    for (unsigned i = 0; i < actual.size(); ++i)
      require(actual[i] == expected.state[i],
              context + " " + where + " state[" + std::to_string(i) +
                  "] expected=" + hex(expected.state[i]) +
                  " actual=" + hex(actual[i]));
    if (windows.slot_for({1})) {
      const auto frame = output.frame({1});
      require(frame->width == expected.frame.width &&
                  frame->height == expected.frame.height,
              context + " " + where + " window extent differs");
      for (unsigned i = 0; i < frame->pixels.size(); ++i) {
        require(frame->pixels[i] == expected.frame.pixels[i] &&
                    frame->priority[i] == expected.frame.priority[i],
                context + " " + where +
                    " indexed canvas differs pixel=" + std::to_string(i) +
                    " expected=" + hex(expected.frame.pixels[i]) +
                    " actual=" + hex(frame->pixels[i]));
        ++totals.pixels;
      }
    }
    const auto brush = output.composition_snapshot();
    if (source.version == eb::GameVersion::US) {
      require(brush.brush_column == expected.brush.brush_column &&
                  brush.fractional_offset == expected.brush.fractional_offset &&
                  brush.publication_position ==
                      expected.brush.publication_position &&
                  brush.partial_publication ==
                      expected.brush.partial_publication,
              context + " " + where + " brush cursor differs");
      require(brush.columns == expected.brush.columns,
              context + " " + where + " brush pixels differ");
      totals.brush_pixels += 52 * 128;
    }
    ++totals.snapshots;
  }
  void compare_scene() {
    source.draw_scene();
    windows.draw_windows();
    windows.publish_scene();
    const auto frame = windows.frame();
    const auto original = source.ppu();
    require(frame->width == 256 && frame->height == 224,
            "Native scene extent differs");
    for (unsigned at = 0; at < frame->pixels.size(); ++at) {
      const unsigned palette = (frame->pixels[at] * 0x421) & 0x7fff;
      const auto expand = [](unsigned v) { return (v << 3) | (v >> 2); };
      const auto rgb = 0xff000000u | (expand(palette & 31) << 16) |
                       (expand((palette >> 5) & 31) << 8) |
                       expand((palette >> 10) & 31);
      require(rgb == original[at],
              context + " real PPU differs pixel=" + std::to_string(at));
      ++totals.ppu_pixels;
    }
  }
  void run(dialogue::SubstitutionCommand command, unsigned entry, bool far,
           unsigned argument = 0, bool scene = false) {
    samples.clear();
    source.at_service = [&](unsigned effect) {
      samples.push_back(original_sample(source, effect));
    };
    source.call(entry, far, argument);
    source.at_service = {};
    const auto final = original_sample(source);
    auto operation = windows.substitutions().begin(std::move(command));
    unsigned index = 0;
    for (unsigned n = 0; n < 100000; ++n) {
      dialogue::Progress status;
      try {
        status = operation->advance(17);
      } catch (const std::exception &e) {
        throw std::runtime_error(context + " " + e.what());
      }
      if (status == dialogue::Progress::Finished)
        break;
      if (status == dialogue::Progress::BudgetExhausted)
        continue;
      require(index < samples.size(),
              context + " extra native substitution effect");
      const auto effect =
          operation->effect()->kind == dialogue::TextEffectKind::TextSound
              ? source.p.sound
              : source.p.tick;
      require(effect == samples[index].effect,
              context + " substitution effect order differs");
      compare(samples[index], "effect " + std::to_string(index));
      ++index;
      operation->respond();
    }
    require(operation->complete() && index == samples.size(),
            context + " substitution ended early");
    compare(final, "final");
    totals.native_effects += index;
    ++totals.native_cases;
    if (scene)
      compare_scene();
  }
};
struct PreparedLayout {
  std::array<unsigned, 2> name, extent, copy, enemy, article;
  unsigned number, item, set_number, get_number, set_item, get_item, display,
      world, blink, rolling, half;
};
PreparedLayout prepared_layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {{0x9cd7, 0x9cf5},
            {30, 28},
            {0xc1ac4a, 0xc1aca1},
            {0x9658, 0x965a},
            {0x5e77, 0x5e78},
            0x9d12,
            0x9d11,
            0xc1ad0a,
            0xc1ad26,
            0xc1acf8,
            0xc1ad02,
            0xc186b1,
            0xc12e42,
            0x964d,
            0x9697,
            0x9695};
  return {{0x9f82, 0x9f90},
          {14, 12},
          {0xc1ab12, 0xc1ab63},
          {0, 0},
          {0x61ef, 0x61f0},
          0x9f9d,
          0x9f9c,
          0xc1abc6,
          0xc1abe2,
          0xc1abb4,
          0xc1abbe,
          0xc18913,
          0xc1355e,
          0x9945,
          0x994b,
          0x9949};
}
auto side(unsigned n) {
  return n ? dialogue::PreparedName::Target : dialogue::PreparedName::Attacker;
}
struct PreparedSnapshot {
  std::array<std::vector<std::uint8_t>, 2> names;
  std::array<unsigned, 2> enemy, article;
  std::uint32_t number{};
  unsigned item{};
  bool operator==(const PreparedSnapshot &) const = default;
};
PreparedSnapshot prepared_snapshot(const Source &s) {
  const auto p = prepared_layout(s.version);
  PreparedSnapshot result;
  for (unsigned n = 0; n < 2; ++n) {
    result.names[n].assign(s.bus->work_ram.begin() + p.name[n],
                           s.bus->work_ram.begin() + p.name[n] + p.extent[n]);
    result.enemy[n] = s.version == eb::GameVersion::US ? s.get(p.enemy[n]) : 0;
    result.article[n] = s.bus->work_ram[p.article[n]];
  }
  result.number = s.get32(p.number);
  result.item = s.bus->work_ram[p.item];
  return result;
}
PreparedSnapshot prepared_snapshot(const dialogue::PreparedMessage &s) {
  PreparedSnapshot result;
  for (unsigned n = 0; n < 2; ++n) {
    const auto name = s.name(side(n));
    result.names[n].assign(name.begin(), name.end());
    result.enemy[n] =
        s.version() == eb::GameVersion::US ? s.metadata(side(n)).enemy_id : 0;
    result.article[n] = s.metadata(side(n)).article;
  }
  result.number = s.number();
  result.item = s.item();
  return result;
}
struct ProofCounts {
  unsigned copies{}, overlaps{}, number_helpers{}, item_helpers{}, synthetic{},
      authored{}, article_cases{}, live_names{}, captured_numbers{},
      prompt_worlds{};
  std::set<unsigned> source_commands;
} proof;
void same_prepared(const Source &source,
                   const dialogue::PreparedMessage &native,
                   const std::string &where) {
  require(prepared_snapshot(source) == prepared_snapshot(native),
          where + " shared prepared state differs");
}
void copy_name(Source &source, dialogue::PreparedMessage &native,
               unsigned which, std::span<const std::uint8_t> bytes) {
  std::copy(bytes.begin(), bytes.end(), source.bus->work_ram.begin() + 0x5000);
  source.call(prepared_layout(source.version).copy[which], false, 0x5000,
              unsigned(bytes.size()));
  native.copy_name(side(which), bytes);
  ++proof.copies;
}
void set_number(Source &source, dialogue::PreparedMessage &native,
                std::uint32_t number) {
  source.put32(source.cpu.direct_page + 14, number);
  source.call(prepared_layout(source.version).set_number, false);
  native.set_number(number);
}
void set_item(Source &source, dialogue::PreparedMessage &native,
              unsigned item) {
  source.call(prepared_layout(source.version).set_item, false, item);
  native.set_item(std::uint8_t(item));
}
void helper_cases(const eb::GameAssets &assets) {
  Source source(assets);
  dialogue::PreparedMessage native(assets.version);
  const auto p = prepared_layout(assets.version);
  source.put(p.name[0] - 2, 0x4567);
  source.put(p.number + 4, 0x89ab);
  for (unsigned which = 0; which < 2; ++which)
    for (unsigned count = 0; count < p.extent[which]; ++count)
      for (unsigned nul : {0u, 2u, 99u}) {
        std::vector<std::uint8_t> full(p.extent[which] - 1);
        for (unsigned i = 0; i < full.size(); ++i)
          full[i] = std::uint8_t(0x41 + i);
        copy_name(source, native, which, full);
        for (unsigned n = 0; n < 2; ++n) {
          native.metadata(side(n)) = {std::uint16_t(0x1234 + n),
                                      std::uint8_t(0xa5 + n)};
          source.bus->work_ram[p.article[n]] = std::uint8_t(0xa5 + n);
          if (assets.version == eb::GameVersion::US)
            source.put(p.enemy[n], 0x1234 + n);
        }
        std::vector<std::uint8_t> bytes(count);
        for (unsigned i = 0; i < count; ++i)
          bytes[i] = std::uint8_t(0x61 + i);
        if (nul < count)
          bytes[nul] = 0;
        copy_name(source, native, which, bytes);
        same_prepared(source, native, "copy count=" + std::to_string(count));
        require(native.metadata(side(which)).enemy_id ==
                    (assets.version == eb::GameVersion::US ? 0xffff
                                                           : 0x1234 + which),
                "Regional copy enemy metadata differs");
        require(source.get(p.name[0] - 2) == 0x4567 &&
                    source.get(p.number + 4) == 0x89ab,
                "Copy changed adjacent fields");
      }
  for (unsigned which = 0; which < 2; ++which)
    for (unsigned offset = 0; offset < p.extent[which]; ++offset)
      for (unsigned count = 0;
           count < std::min(p.extent[which], p.extent[which] - offset + 1);
           ++count) {
        std::vector<std::uint8_t> full(p.extent[which] - 1);
        for (unsigned i = 0; i < full.size(); ++i)
          full[i] = std::uint8_t(1 + i);
        copy_name(source, native, which, full);
        source.call(p.copy[which], false, p.name[which] + offset, count);
        native.copy_name(side(which),
                         native.name(side(which)).subspan(offset, count));
        same_prepared(source, native,
                      "descending overlap offset=" + std::to_string(offset) +
                          " count=" + std::to_string(count));
        ++proof.overlaps;
      }
  for (std::uint32_t value : {0u, 1u, 255u, 256u, 65535u, 65536u, 9999999u,
                              10000000u, 0x80000000u, 0xffffffffu}) {
    set_number(source, native, value);
    source.call(p.get_number, false);
    require(source.get32(source.cpu.direct_page + 6) == native.number(),
            "Full CNUM getter differs");
    same_prepared(source, native, "number helper");
    ++proof.number_helpers;
  }
  for (unsigned value = 0; value < 65536; value += 127) {
    set_item(source, native, value);
    source.call(p.get_item, false);
    require((source.cpu.accumulator & 255) == native.item(),
            "CITEM getter differs");
    same_prepared(source, native, "item helper");
    ++proof.item_helpers;
  }
}
struct StreamInput {
  std::shared_ptr<const dialogue::Program> program;
  dialogue::Location location;
  unsigned reference{};
};
StreamInput synthetic(eb::GameAssets &assets, std::vector<std::uint8_t> bytes) {
  std::copy(bytes.begin(), bytes.end(), assets.image.begin() + 0x2e8000);
  return {std::make_shared<dialogue::Program>(
              assets.version,
              std::vector<dialogue::ContentBlock>{
                  {0x2e, 0x8000, std::move(bytes)}}),
          {0x2e, 0x8000},
          0xee8000};
}
void seed_message(NativePair &pair, std::uint32_t number, unsigned item) {
  const bool us = pair.source.version == eb::GameVersion::US;
  const std::array<std::uint8_t, 5> name{
      std::uint8_t(us ? 0x71 : 0x41), std::uint8_t(us ? 0x72 : 0x42),
      std::uint8_t(us ? 0x73 : 0x43), std::uint8_t(us ? 0x74 : 0x44),
      std::uint8_t(us ? 0x75 : 0)};
  copy_name(pair.source, pair.prepared, 0, name);
  copy_name(pair.source, pair.prepared, 1, name);
  set_number(pair.source, pair.prepared, number);
  set_item(pair.source, pair.prepared, item);
  same_prepared(pair.source, pair.prepared, pair.context + " initial");
}
std::array<unsigned, 4> prompt_snapshot(const Source &source) {
  const auto p = prepared_layout(source.version);
  return {source.get(0x6d), source.get(p.blink),
          source.bus->work_ram[p.rolling], source.bus->work_ram[p.half]};
}
std::array<unsigned, 4> prompt_snapshot(NativePair &pair) {
  const auto &p = pair.windows.prompt_state();
  return {p.pressed, pair.output.policy().prompt_mode, p.rolling_disabled,
          p.half_meter_speed};
}
void stream_case(NativePair &pair, const StreamInput &stream,
                 unsigned prompt_mode = 0, unsigned mutation = 0,
                 bool scene = false) {
  const bool us = pair.source.version == eb::GameVersion::US;
  const auto p = prepared_layout(pair.source.version);
  pair.state.word_wrap = us;
  pair.source.put(us ? 0x9623 : 0x991b, us);
  pair.output.policy().prompt_mode = std::uint16_t(prompt_mode);
  pair.source.put(p.blink, prompt_mode);
  pair.source.put(0x6d, 0);
  pair.windows.prompt_state().pressed = 0;
  if (mutation) {
    pair.source.bus->work_ram[us ? 0x9622 : 0x991a] = 0;
    pair.output.policy().instant = false;
    pair.source.put(us ? 0x9625 : 0x991d, 1);
    pair.output.policy().text_speed = 1;
  }
  const std::array<std::uint8_t, 5> replacement{
      std::uint8_t(us ? 0x78 : 0x48), std::uint8_t(us ? 0x79 : 0x49),
      std::uint8_t(us ? 0x7a : 0x4a), 0, 0};
  std::copy(replacement.begin(), replacement.end(),
            pair.source.bus->work_ram.begin() + 0x5100);
  std::vector<PreparedSnapshot> prepared_samples;
  std::vector<std::array<unsigned, 4>> prompts;
  std::vector<unsigned> arguments;
  bool started = false, changed = false;
  unsigned mutation_event = 0;
  const std::array<unsigned, 5> tree =
      us ? std::array{0xc1790bu, 0xc179aau, 0xc17c36u, 0xc17d94u, 0xc181bbu}
         : std::array{0xc17b7cu, 0xc17c1bu, 0xc17eabu, 0xc18001u, 0xc1841du};
  const std::array<unsigned, 5> prefix{0x18, 0x19, 0x1b, 0x1c, 0x1f};
  pair.source.at_instruction = [&](unsigned pc) {
    for (unsigned i = 0; i < tree.size(); ++i)
      if (pc == tree[i])
        proof.source_commands.insert(prefix[i] * 256 + pair.source.cpu.x_index);
    if (mutation == 1 && pc == pair.source.p.string &&
        pair.source.get32(pair.source.cpu.direct_page + 14) ==
            0x7e0000 + p.name[1])
      started = true;
    if (mutation == 2 && pc == pair.source.p.number)
      started = true;
  };
  pair.source.at_service = [&](unsigned effect) {
    pair.samples.push_back(original_sample(pair.source, effect));
    prepared_samples.push_back(prepared_snapshot(pair.source));
    prompts.push_back(prompt_snapshot(pair.source));
    arguments.push_back(pair.source.cpu.accumulator);
    if (mutation && started && !changed && effect == pair.source.p.tick) {
      changed = true;
      mutation_event = unsigned(pair.samples.size());
      if (mutation == 1)
        pair.source.nested(p.copy[1], false, 0, 0x5100, replacement.size());
      else
        pair.source.nested(p.set_number, false, 890);
    }
    if (effect == p.world)
      pair.source.put(0x6d, 0x80);
  };
  pair.source.begin_trace();
  pair.source.put32(pair.source.cpu.direct_page + 14, stream.reference);
  pair.source.call(p.display, true);
  pair.source.end_trace();
  pair.source.at_service = {};
  pair.source.at_instruction = {};
  const auto final = original_sample(pair.source);
  const auto final_prepared = prepared_snapshot(pair.source);
  const auto final_prompt = prompt_snapshot(pair.source);
  const auto returning = pair.source.get32(pair.source.cpu.direct_page + 6);
  require(!mutation || changed,
          pair.context + " original mutation callback absent");
  dialogue::PromptHost prompt(pair.windows);
  dialogue::Conversation conversation(stream.program, prompt);
  conversation.start(stream.location);
  unsigned index = 0;
  for (unsigned n = 0; n < 200000; ++n) {
    dialogue::Progress progress;
    try {
      progress = conversation.advance(1 + n % 13);
    } catch (const std::exception &e) {
      throw std::runtime_error(pair.context + " " + e.what());
    }
    if (progress == dialogue::Progress::Finished)
      break;
    if (progress == dialogue::Progress::BudgetExhausted)
      continue;
    require(index < pair.samples.size(),
            pair.context + " extra native message effect");
    const auto &event = *conversation.event();
    unsigned effect = 0;
    if (const auto *text = std::get_if<dialogue::TextEffect>(&event))
      effect = text->kind == dialogue::TextEffectKind::TextSound
                   ? pair.source.p.sound
                   : pair.source.p.tick;
    else if (const auto *window = std::get_if<dialogue::WindowEffect>(&event)) {
      require(window->kind == dialogue::WindowEffectKind::WindowTick ||
                  window->kind == dialogue::WindowEffectKind::FrameWait,
              pair.context + " unexpected window service");
      effect = window->kind == dialogue::WindowEffectKind::WindowTick
                   ? pair.source.p.tick
                   : pair.source.p.wait;
    } else if (std::holds_alternative<dialogue::PromptEffect>(event))
      effect = p.world;
    else if (const auto *request = std::get_if<dialogue::Request>(&event)) {
      require(request->kind == dialogue::RequestKind::ScriptSound ||
                  request->kind == dialogue::RequestKind::SoundWorldTick,
              pair.context + " remaining authored command=" +
                  hex(request->command) + ":" + hex(request->selector) +
                  " kind=" + std::to_string(unsigned(request->kind)));
      effect = request->kind == dialogue::RequestKind::ScriptSound
                   ? pair.source.p.sound
                   : p.world;
      if (request->kind == dialogue::RequestKind::ScriptSound)
        require(request->script_sound &&
                    request->script_sound->source_value == arguments[index],
                pair.context + " source sound argument differs");
    } else
      require(false, pair.context + " unsupported authored event variant");
    require(effect == pair.samples[index].effect,
            pair.context + " authored effect order expected=" +
                hex(pair.samples[index].effect) + " actual=" + hex(effect));
    pair.compare(pair.samples[index],
                 "message effect " + std::to_string(index));
    require(prepared_snapshot(pair.prepared) == prepared_samples[index],
            pair.context + " prepared state at effect differs");
    require(prompt_snapshot(pair) == prompts[index],
            pair.context + " prompt state at effect differs");
    ++index;
    if (mutation && index == mutation_event) {
      if (mutation == 1)
        pair.prepared.copy_name(dialogue::PreparedName::Target, replacement);
      else
        pair.prepared.set_number(890);
    }
    if (effect == p.world) {
      conversation.respond({0, 0x80, 0});
      ++proof.prompt_worlds;
    } else
      conversation.respond();
  }
  require(conversation.finished() && index == pair.samples.size(),
          pair.context + " complete message did not return");
  require(conversation.snapshot().returned_cursor ==
              dialogue::Location{(returning - 0xc00000) >> 16,
                                 std::uint16_t(returning)},
          pair.context + " message returned cursor differs");
  require(pair.state.stream_slot == pair.source.get(us ? 0x97b8 : 0x9a6c),
          pair.context + " stream slot differs");
  pair.compare(final, "message final");
  require(prepared_snapshot(pair.prepared) == final_prepared,
          pair.context + " final prepared state differs");
  require(prompt_snapshot(pair) == final_prompt,
          pair.context + " final prompt state differs");
  if (scene)
    pair.compare_scene();
  ++totals.native_cases;
  totals.native_effects += index;
  if (mutation == 1)
    ++proof.live_names;
  if (mutation == 2)
    ++proof.captured_numbers;
}
void synthetic_cases(const eb::GameAssets &assets) {
  const bool us = assets.version == eb::GameVersion::US;
  for (std::uint32_t number :
       {0u, 1u, 65535u, 65536u, 9999999u, 10000000u, 0x80000000u, 0xffffffffu})
    for (unsigned item : {0u, 1u, 127u, 255u}) {
      auto data = assets;
      const auto stream = synthetic(data, {0x19, 0x1e, 0x1b, 4, 0x19, 0x1f, 2});
      NativePair pair(data);
      pair.context += " captured registers=" + std::to_string(number);
      seed_message(pair, number, item);
      stream_case(pair, stream);
      ++proof.synthetic;
    }
  for (unsigned which : {0u, 1u})
    for (unsigned flag : {0u, 1u, 0x80u, 255u})
      for (unsigned bullet : {0u, 1u})
        for (unsigned enemy : {0u, 1u, 0xffffu}) {
          auto data = assets;
          const auto stream = synthetic(
              data,
              {std::uint8_t(bullet ? (us ? 0x70 : 0x20) : (us ? 0x71 : 0x41)),
               0x1c, std::uint8_t(0xd + which), 0x1c, std::uint8_t(0xd + which),
               2});
          NativePair pair(data);
          pair.context += " article side=" + std::to_string(which) +
                          " flag=" + std::to_string(flag) +
                          " enemy=" + std::to_string(enemy);
          seed_message(pair, 123, 1);
          const auto p = prepared_layout(data.version);
          pair.prepared.metadata(side(which)) = {std::uint16_t(enemy),
                                                 std::uint8_t(flag)};
          pair.source.bus->work_ram[p.article[which]] = std::uint8_t(flag);
          if (us)
            pair.source.put(p.enemy[which], enemy);
          stream_case(pair, stream, 0, 0, bullet && flag == 0);
          ++proof.article_cases;
        }
  for (unsigned mutation : {1u, 2u}) {
    auto data = assets;
    const auto stream =
        synthetic(data, {0x1c, std::uint8_t(mutation == 1 ? 0x0e : 0x0f), 2});
    NativePair pair(data);
    pair.context += " live callback=" + std::to_string(mutation);
    seed_message(pair, 1234567, 1);
    stream_case(pair, stream, 0, mutation, true);
    ++proof.synthetic;
  }
}
void authored_cases(const eb::GameAssets &assets) {
  const bool jp = assets.version == eb::GameVersion::JP;
  const auto imported = dialogue::import_program(assets.image, assets.version);
  const auto refs = jp ? std::array{0xc747d7u, 0xc747ebu, 0xc74801u, 0xc74818u,
                                    0xc7482du, 0xc74841u, 0xc74858u, 0xc7486bu,
                                    0xc7487fu, 0xc74896u, 0xc748adu}
                       : std::array{0xef7a66u, 0xef7a7du, 0xef7a97u, 0xef7ab1u,
                                    0xef7ac9u, 0xef7ae0u, 0xef7afbu, 0xef7b11u,
                                    0xef7b28u, 0xef7b46u, 0xef7b64u};
  for (unsigned m = 0; m < refs.size(); ++m)
    for (unsigned number : {1u, 3u, 4u, 8u, 9u, 20u, 21u, 99u}) {
      if (m == 10 && number != 1)
        continue;
      for (unsigned item = 1; item <= (m == 10 ? 52u : 1u); ++item) {
        const auto ref = refs[m];
        const auto location = imported.program->resolve(
            {std::uint8_t(ref), std::uint8_t(ref >> 8), std::uint8_t(ref >> 16),
             0});
        require(bool(location), "Actual authored growth message unresolved");
        require(assets.image.at(ref - 0xc00000) != 0,
                "Actual imported growth message empty");
        NativePair pair(assets);
        pair.context += " authored message=" + std::to_string(m) +
                        " number=" + std::to_string(number) +
                        " item=" + std::to_string(item);
        seed_message(pair, number, item);
        stream_case(pair, {imported.program, *location, ref}, m == 0 ? 1 : 2, 0,
                    number == 1 && item == 1);
        ++proof.authored;
      }
    }
}
namespace saves = eb::native::saves;
namespace story = eb::native::story;
struct GrowthCounts {
  unsigned operations{}, messages{}, psi{}, music{}, mutations{}, payloads{};
} growth_counts;
unsigned effect_address(NativePair &pair,
                        const dialogue::ConversationEvent &event,
                        unsigned argument) {
  const auto p = prepared_layout(pair.source.version);
  if (const auto *text = std::get_if<dialogue::TextEffect>(&event))
    return text->kind == dialogue::TextEffectKind::TextSound
               ? pair.source.p.sound
               : pair.source.p.tick;
  if (const auto *window = std::get_if<dialogue::WindowEffect>(&event)) {
    require(window->kind == dialogue::WindowEffectKind::WindowTick ||
                window->kind == dialogue::WindowEffectKind::FrameWait,
            pair.context + " growth unexpected window service");
    return window->kind == dialogue::WindowEffectKind::WindowTick
               ? pair.source.p.tick
               : pair.source.p.wait;
  }
  if (std::holds_alternative<dialogue::PromptEffect>(event))
    return p.world;
  if (const auto *request = std::get_if<dialogue::Request>(&event)) {
    require(request->kind == dialogue::RequestKind::ScriptSound ||
                request->kind == dialogue::RequestKind::SoundWorldTick,
            pair.context + " growth unowned command=" + hex(request->command) +
                ":" + hex(request->selector));
    if (request->kind == dialogue::RequestKind::ScriptSound) {
      require(request->script_sound &&
                  request->script_sound->source_value == argument,
              pair.context + " growth sound intent differs");
      return pair.source.p.sound;
    }
    return p.world;
  }
  throw std::runtime_error(pair.context + " growth unowned event");
}
struct GrowthSample {
  enum class Kind { BeginMessage, EndMessage, Effect, Music };
  Kind kind{};
  unsigned effect{}, argument{}, reference{}, returned{};
  bool mutate{};
  Sample rendering;
  PreparedSnapshot prepared;
  std::array<unsigned, 4> prompt;
  std::vector<std::uint8_t> payload;
  story::RandomState random;
};
void growth_case(const eb::GameAssets &assets, unsigned character,
                 unsigned level, std::optional<unsigned> experience_level = {},
                 bool mutate = false) {
  const bool jp = assets.version == eb::GameVersion::JP;
  NativePair pair(assets);
  const auto p = prepared_layout(assets.version);
  pair.context += " full growth character=" + std::to_string(character) +
                  " level=" + std::to_string(level) + " experience=" +
                  std::to_string(experience_level.value_or(0)) +
                  " mutate=" + std::to_string(mutate);
  seed_message(pair, 0xabcdef12, 0x67);
  std::vector<std::uint8_t> retained(p.extent[1] - 1);
  for (unsigned i = 0; i < retained.size(); ++i)
    retained[i] = std::uint8_t((jp ? 0x41 : 0x71) + i % 8);
  copy_name(pair.source, pair.prepared, 1, retained);
  pair.prepared.metadata(dialogue::PreparedName::Target).article = 0xa5;
  pair.source.bus->work_ram[p.article[1]] = 0xa5;
  auto growth = std::make_shared<eb::native::CharacterGrowth>(assets.image,
                                                              assets.version);
  saves::PersistedState initial;
  initial.version = assets.version;
  initial = saves::capture_party(pair.party, initial);
  initial.game.text_flavour = 1;
  initial.game.party_count = initial.game.controlled_count = 4;
  for (unsigned i = 0; i < 4; ++i) {
    initial.game.party_order[i] = std::uint8_t(i + 1);
    initial.game.display_order[i] = std::uint8_t(i + 1);
    initial.game.controlled_order[i] = std::uint8_t(i);
  }
  auto &c = initial.characters[character - 1].values;
  c = {};
  c.level = std::uint8_t(level);
  c.experience = growth->experience_for_level(character, level);
  c.base_offense = c.base_defense = c.base_speed = c.base_guts = c.base_luck =
      c.base_vitality = c.base_iq = 2;
  c.offense = c.defense = c.speed = c.guts = c.luck = c.vitality = c.iq = 2;
  c.maximum_hp = c.current_hp = c.target_hp = 30;
  c.maximum_pp = c.current_pp = c.target_pp = 10;
  saves::restore_party(initial, pair.party);
  const unsigned game = jp ? 0x9aa9 : 0x97f5;
  const auto payload_bytes = saves::layout(assets.version).persisted_bytes();
  auto encoded = saves::SaveArchive::empty(assets.version);
  encoded.save(0, initial, 0);
  std::copy_n(encoded.bytes().begin() + 32, payload_bytes,
              pair.source.bus->work_ram.begin() + game);
  story::RandomState random{std::uint16_t(level * 191),
                            std::uint16_t(level * 373)};
  pair.source.put(0x24, random.primary_word);
  pair.source.put(0x26, random.secondary_word);
  pair.state.word_wrap = !jp;
  pair.source.put(jp ? 0x991b : 0x9623, !jp);
  pair.source.put(0x6d, 0);
  pair.output.policy().prompt_mode = 9;
  pair.source.put(p.blink, 9);
  std::optional<std::uint32_t> amount;
  if (experience_level)
    amount = growth->experience_for_level(character, *experience_level) -
             c.experience;
  std::vector<GrowthSample> records;
  const auto capture = [&](GrowthSample::Kind kind, unsigned effect = 0,
                           unsigned reference = 0) {
    GrowthSample result;
    result.kind = kind;
    result.effect = effect;
    result.argument = pair.source.cpu.accumulator;
    result.reference = reference;
    result.returned = pair.source.get32(pair.source.cpu.direct_page + 6);
    result.rendering = original_sample(pair.source, effect);
    result.prepared = prepared_snapshot(pair.source);
    result.prompt = prompt_snapshot(pair.source);
    result.payload.assign(pair.source.bus->work_ram.begin() + game,
                          pair.source.bus->work_ram.begin() + game +
                              payload_bytes);
    result.random = {std::uint16_t(pair.source.get(0x24)),
                     std::uint16_t(pair.source.get(0x26))};
    return result;
  };
  unsigned message_return = 0, message_stack = 0;
  bool changed = false;
  const unsigned music = jp ? 0xc4cf5c : 0xc4fbbd,
                 random_entry = jp ? 0xc08e8b : 0xc08e9a;
  pair.source.at_instruction = [&](unsigned pc) {
    if (message_return && pc == message_return &&
        pair.source.cpu.stack_pointer == message_stack) {
      records.push_back(capture(GrowthSample::Kind::EndMessage));
      message_return = 0;
    }
    if (pc == p.display && !message_return) {
      records.push_back(
          capture(GrowthSample::Kind::BeginMessage, 0,
                  pair.source.get32(pair.source.cpu.direct_page + 14)));
      const auto stack = pair.source.cpu.stack_pointer;
      message_return = ((pair.source.get(stack + 1) + 1) & 65535) |
                       (unsigned(pair.source.bus->work_ram[stack + 3]) << 16);
      message_stack = stack + 3;
    }
    if (pc == music) {
      require(pair.source.cpu.accumulator == 6,
              pair.context + " unexpected original music");
      records.push_back(capture(GrowthSample::Kind::Music));
      pair.source.cpu.execute_instruction<0x6b>(0, 1);
    }
  };
  pair.source.at_service = [&](unsigned effect) {
    records.push_back(capture(GrowthSample::Kind::Effect, effect));
    if (mutate && !changed && effect == pair.source.p.tick) {
      require(message_return != 0,
              pair.context + " growth mutation outside real text callback");
      changed = true;
      records.back().mutate = true;
      pair.source.nested(random_entry, true, 0);
      const unsigned at =
          pair.source.p.party + (character - 1) * pair.source.p.stride;
      const unsigned delta = jp ? 1 : 0;
      ++pair.source.bus->work_ram[at + 34 - delta];
      ++pair.source.bus->work_ram[at + 90 - delta];
    }
    if (effect == p.world)
      pair.source.put(0x6d, 0x80);
  };
  pair.source.begin_trace();
  if (amount)
    pair.source.put32(pair.source.cpu.direct_page + 14, *amount);
  pair.source.call(amount ? (jp ? 0xc1d7e4 : 0xc1d9e9)
                          : (jp ? 0xc1cef2 : 0xc1d109),
                   bool(amount), character, 1);
  pair.source.end_trace();
  pair.source.at_service = {};
  pair.source.at_instruction = {};
  require(!message_return,
          pair.context + " original returned inside DISPLAY_TEXT");
  require(!mutate || changed, pair.context + " growth mutation not reached");
  const auto final = capture(GrowthSample::Kind::EndMessage);
  const auto compare = [&](const GrowthSample &expected,
                           const std::string &where) {
    pair.compare(expected.rendering, where);
    require(prepared_snapshot(pair.prepared) == expected.prepared,
            pair.context + " " + where + " prepared producer state differs");
    require(prompt_snapshot(pair) == expected.prompt,
            pair.context + " " + where + " prompt producer state differs");
    const auto current = saves::capture_party(pair.party, initial);
    auto archive = saves::SaveArchive::empty(assets.version);
    archive.save(0, current, 0);
    for (unsigned i = 0; i < payload_bytes; ++i)
      require(archive.bytes()[32 + i] == expected.payload[i],
              pair.context + " " + where + " party byte=" + std::to_string(i));
    require(random == expected.random,
            pair.context + " " + where + " growth RNG differs");
    ++growth_counts.payloads;
  };
  auto context = [&](unsigned id) {
    const auto &extra = initial.characters[id - 1];
    return eb::native::CharacterGrowthContext{
        extra.boosted_speed,    extra.boosted_guts,
        extra.boosted_vitality, extra.boosted_iq,
        extra.boosted_luck,     bool(initial.event_flags[9] & 2)};
  };
  eb::native::VisibleCharacterGrowth visible(growth, assets.image, pair.party,
                                             random, context);
  const auto imported = dialogue::import_program(assets.image, assets.version);
  dialogue::PromptHost prompts(pair.windows);
  story::GrowthDialogue coordinator(visible, imported.program, prompts,
                                    pair.prepared, pair.party, random);
  auto operation = amount ? coordinator.begin_experience(character, *amount)
                          : coordinator.begin_level_up(character);
  unsigned index = 0;
  for (unsigned outer = 0; outer < 10000; ++outer) {
    const auto progress = operation->advance(1 + outer % 5);
    if (progress == dialogue::Progress::Finished)
      break;
    if (progress == dialogue::Progress::BudgetExhausted)
      continue;
    require(index < records.size(),
            pair.context + " extra native growth service");
    const auto &expected = records[index++];
    if (*operation->service() == story::GrowthDialogueService::LevelUpMusic) {
      require(expected.kind == GrowthSample::Kind::Music,
              pair.context + " source/native music order differs");
      compare(expected, "music");
      operation->respond();
      ++growth_counts.music;
      continue;
    }
    require(expected.kind == GrowthSample::Kind::BeginMessage,
            pair.context + " source/native message order differs");
    compare(expected, "begin message");
    auto &conversation = operation->conversation();
    const auto entry =
        imported.program->resolve({std::uint8_t(expected.reference),
                                   std::uint8_t(expected.reference >> 8),
                                   std::uint8_t(expected.reference >> 16), 0});
    require(entry && conversation.snapshot().frames.size() == 1 &&
                conversation.snapshot().frames.front().cursor == entry,
            pair.context + " coordinator selected wrong authored message");
    for (unsigned inner = 0; inner < 200000; ++inner) {
      const auto status = conversation.advance(1 + inner % 13);
      if (status == dialogue::Progress::Finished)
        break;
      if (status == dialogue::Progress::BudgetExhausted)
        continue;
      require(index < records.size() &&
                  records[index].kind == GrowthSample::Kind::Effect,
              pair.context + " native growth effect order differs");
      const auto &e = records[index++];
      const auto effect =
          effect_address(pair, *conversation.event(), e.argument);
      require(effect == e.effect, pair.context + " growth effect kind differs");
      compare(e, "growth text effect");
      if (e.mutate) {
        ++pair.party.character(character).base_iq;
        ++initial.characters[character - 1].boosted_iq;
        story::next_random(random);
        ++growth_counts.mutations;
      }
      if (effect == p.world)
        conversation.respond({0, 0x80, 0});
      else
        conversation.respond();
      ++totals.native_effects;
    }
    require(conversation.finished() && index < records.size() &&
                records[index].kind == GrowthSample::Kind::EndMessage,
            pair.context + " original/native growth text return differs");
    const auto &end = records[index++];
    compare(end, "end message");
    require(conversation.snapshot().returned_cursor ==
                dialogue::Location{(end.returned - 0xc00000) >> 16,
                                   std::uint16_t(end.returned)},
            pair.context + " growth text return cursor differs");
    ++growth_counts.messages;
    if (expected.reference == (jp ? 0xc748adu : 0xef7b64u))
      ++growth_counts.psi;
    operation->respond();
  }
  require(operation->complete() && index == records.size(),
          pair.context + " complete growth left source events");
  require(!coordinator.busy() && !coordinator.failed() && !visible.busy(),
          pair.context + " growth owner retained completed operation");
  compare(final, "growth final");
  pair.compare_scene();
  ++growth_counts.operations;
}
void growth_cases(const eb::GameAssets &assets) {
  for (unsigned character = 1; character <= 4; ++character)
    growth_case(assets, character, 7);
  growth_case(assets, 1, 7, 10);
  growth_case(assets, 1, 7, {}, true);
  require(growth_counts.psi > 0 && growth_counts.mutations > 0,
          "Actual producer did not exercise PSI or live context/RNG callback");
}

} // namespace
int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "SKIP prepared-message original reference: local imported "
                 "packs required\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      helper_cases(assets);
      synthetic_cases(assets);
      authored_cases(assets);
      growth_cases(assets);
      std::cout
          << (assets.version == eb::GameVersion::US ? "US" : "JP")
          << " prepared helpers and actual authored growth messages passed\n";
    }
    std::cout << "PASS prepared reference: copies=" << proof.copies
              << " overlaps=" << proof.overlaps
              << " CNUM=" << proof.number_helpers
              << " CITEM=" << proof.item_helpers
              << " synthetic=" << proof.synthetic
              << " articles=" << proof.article_cases
              << " authored=" << proof.authored
              << " live_names=" << proof.live_names
              << " captured_numbers=" << proof.captured_numbers
              << " world_input_boundaries=" << proof.prompt_worlds
              << " original_instructions=" << totals.instructions
              << " effects=" << totals.native_effects
              << " snapshots=" << totals.snapshots
              << " indexed_pixels=" << totals.pixels
              << " brush_pixels=" << totals.brush_pixels
              << " PPU_pixels=" << totals.ppu_pixels << '\n';
    std::cout << "Real growth producer: " << growth_counts.operations
              << " operations, " << growth_counts.messages
              << " complete authored messages, " << growth_counts.psi
              << " PSI messages, " << growth_counts.music
              << " music boundaries, " << growth_counts.mutations
              << " live context/RNG callbacks, " << growth_counts.payloads
              << " full party/RNG checkpoints.\n";
    std::cout << "Actual source command union: ";
    for (auto command : proof.source_commands)
      std::cout << hex(command) << ',';
    std::cout
        << "\nScope: complete helpers and original/native message rendering "
           "and prompt continuations; external world/frame/audio callbacks and "
           "completed JP DMA are explicit seams. No playback, full battle "
           "startup, or live gameplay claim.\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
