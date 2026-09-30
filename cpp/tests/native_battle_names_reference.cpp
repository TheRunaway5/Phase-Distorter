// Complete battle name/selectors and shield caller reference. Actual imported
// authored text, glyphs and prompts execute on the original producer CPU/stack.
// World/frame/audio delivery remains an explicit external service boundary.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle/names.hpp"
#include "eb/native/battle/shields.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "eb/native/dialogue/prompt_host.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "eb/native/saves/session.hpp"
#include "eb/native/story/battle_dialogue.hpp"
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
    call(p.create, false, 14);
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
    return p.windows + get(p.open + 28) * p.record_size;
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
  unsigned window_record(unsigned id = 14) const {
    const unsigned slot = get(p.open + id * 2);
    // This fixture creates battle ID14 in physical slot0. Its metadata remains
    // source-owned after close and is observed by explicit ambient-slot
    // cases; arbitrary invalid open-table values are not normalized.
    if (id == 14 && slot == 0xffff)
      return p.windows;
    require(slot < 8, "Source window not open");
    return p.windows + slot * p.record_size;
  }
  dialogue::TextFrame frame(unsigned id = 14) const {
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
        {dialogue::WindowAction::Open, dialogue::WindowId{14}, {}, 0});
    while (opening->advance() == dialogue::OutputProgress::Suspended)
      opening->respond();
    require(opening->complete(), "Native initial window incomplete");
    windows.metadata({14}).number_padding = 0x80;
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
    auto style = output.window({14}).style;
    style.font = value;
    output.set_style({14}, style);
  }
  void padding(unsigned value) {
    source.bus->work_ram[source.record() + 18] = value;
    windows.metadata({14}).number_padding = value;
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
    require(windows.slot_for({14}).has_value(),
            context + " battle window absent from pixel comparison");
    {
      const auto frame = output.frame({14});
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
      require(
          rgb == original[at],
          context + " real PPU differs pixel=" + std::to_string(at) +
              " native=" + hex(rgb) + " source=" + hex(original[at]) +
              " descriptor=" +
              hex(source.get(
                  (source.version == eb::GameVersion::US ? 0x7dfe : 0x8176) +
                  ((at / 256 / 8) * 32 + (at % 256 / 8)) * 2)));
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

namespace battle = eb::native::battle;
namespace party = eb::native::party;
namespace story = eb::native::story;
namespace saves = eb::native::saves;
using Bytes = std::array<std::uint8_t, 78>;
void put(std::span<std::uint8_t> b, unsigned p, unsigned v) {
  b[p] = std::uint8_t(v);
  b[p + 1] = std::uint8_t(v >> 8);
}
void put32(std::span<std::uint8_t> b, unsigned p, std::uint32_t v) {
  put(b, p, v);
  put(b, p + 2, v >> 16);
}
Bytes encode(const battle::Battler &v) {
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
struct BattleLayout {
  unsigned attacker, target, mask, count, records, highest, scratch, letters,
      fix_attacker, fix_target, swap, select, player, enemy, label, nullify,
      weaken, wrapper, numbered, game, battle_mode, nullified, reflected, bg2,
      action_table, enemy_table, enemy_stride;
};
BattleLayout battle_layout(eb::GameVersion v) {
  if (v == eb::GameVersion::US)
    return {0xa970,   0xa972,   0xa96c,   0x9f8a,   0x9fac,   0xaa0c,
            0xa983,   0xaa98,   0xc23bcf, 0xc23d05, 0xc27e8a, 0xc23e32,
            0xc2b930, 0xc2b6eb, 0xc2b66a, 0xc2941d, 0xc294ce, 0xc1dc1c,
            0xc1dc66, 0x97f5,   0x9643,   0xaa94,   0xaa96,   0x7dfe,
            0x157b68, 0x159589, 94};
  return {0xab72,   0xab74,   0xab6e,   0xa18c,   0xa1ae,   0xabe1,   0xab85,
          0xac6d,   0xc23ab9, 0xc23bf4, 0xc27e21, 0xc23d07, 0xc2b8d9, 0xc2b692,
          0xc2b60f, 0xc293c6, 0xc29477, 0xc1d9ff, 0xc1da49, 0x9aa9,   0x993b,
          0xac69,   0xac6b,   0x8176,   0x158b1e, 0x15a440, 77};
}
struct Proof {
  std::uint64_t helper_calls{}, initializers{}, label_scans{}, record_bytes{},
      scratch_bytes{}, snapshots{}, selector_cases{}, article_cases{},
      resources{}, messages{}, shield_calls{}, wrapper_calls{}, callbacks{},
      auto_cells{}, explicit_inputs{};
  std::set<unsigned> source_commands;
} proof;
struct OwnedSnapshot {
  std::array<Bytes, 32> roster{};
  std::array<unsigned, 6> action{};
  std::vector<std::uint8_t> scratch, party_bytes;
  PreparedSnapshot prepared;
  unsigned highest{}, automatic{};
  bool operator==(const OwnedSnapshot &) const = default;
};
class BattlePair {
public:
  NativePair ui;
  Source &source;
  BattleLayout p;
  std::shared_ptr<const battle::EnemyResources> enemies;
  battle::Roster roster;
  std::shared_ptr<const dialogue::SubstitutionResources> resources;
  battle::ActionState action;
  battle::Names names;
  story::InputState input;
  explicit BattlePair(const eb::GameAssets &a)
      : ui(a), source(ui.source), p(battle_layout(a.version)),
        enemies(battle::EnemyResources::import(a.image, a.version)),
        roster(enemies),
        resources(dialogue::SubstitutionResources::import(a.image, a.version)),
        names(roster, ui.party, ui.prepared, *resources, action) {
    for (unsigned c = 1; c <= 6; ++c) {
      auto n = ui.party.name_field(c);
      for (unsigned i = 0; i < n.size(); ++i)
        n[i] = std::uint8_t((us() ? 0x71 : 0x41) + (c + i) % 20);
      auto &v = ui.party.character(c);
      v.current_hp = v.target_hp = v.maximum_hp = 100 + c;
      v.current_pp = v.target_pp = v.maximum_pp = 30 + c;
      v.offense = v.base_offense = 20 + c;
      v.defense = v.base_defense = 15 + c;
      v.speed = v.base_speed = 10 + c;
    }
    auto pet = ui.party.name_field(party::NameField::Pet);
    for (unsigned i = 0; i < pet.size(); ++i)
      pet[i] = std::uint8_t((us() ? 0x81 : 0x51) + i);
    sync_party();
    clear();
    select(0, 8);
    set_count(2);
    source.put(p.nullified, 0);
    source.put(p.reflected, 0);
    std::fill_n(source.bus->work_ram.begin() + p.scratch, 2 * scratch_size(),
                0);
    for (unsigned side_no = 0; side_no < 2; ++side_no) {
      const auto q = prepared_layout(a.version);
      std::vector<std::uint8_t> retained(q.extent[side_no] - 1);
      for (unsigned i = 0; i < retained.size(); ++i)
        retained[i] = std::uint8_t(0x41 + i % 20);
      ui.prepared.copy_name(side(side_no), retained);
      std::copy(retained.begin(), retained.end(),
                source.bus->work_ram.begin() + q.name[side_no]);
      source.bus->work_ram[q.name[side_no] + retained.size()] = 0;
      ui.prepared.metadata(side(side_no)) = {0x4321,
                                             std::uint8_t(0xa5 + side_no)};
      if (us())
        source.put(q.enemy[side_no], 0x4321);
      source.bus->work_ram[q.article[side_no]] = std::uint8_t(0xa5 + side_no);
    }
    ui.prepared.set_number(0x89abcdef);
    source.put32(prepared_layout(a.version).number, 0x89abcdef);
    ui.prepared.set_item(0xa5);
    source.bus->work_ram[prepared_layout(a.version).item] = 0xa5;
  }
  bool us() const { return source.version == eb::GameVersion::US; }
  unsigned scratch_size() const { return us() ? 27 : 12; }
  unsigned at(unsigned slot) const { return p.records + 78 * slot; }
  unsigned auto_address() const { return p.game + (us() ? 188 : 185); }
  void sync_party() {
    saves::PersistedState seed;
    seed.version = source.version;
    seed = saves::capture_party(ui.party, seed);
    seed.game.text_flavour = 1;
    auto archive = saves::SaveArchive::empty(source.version);
    archive.save(0, seed, 0);
    std::copy_n(archive.bytes().begin() + 32,
                saves::layout(source.version).persisted_bytes(),
                source.bus->work_ram.begin() + p.game);
  }
  void clear() {
    roster.clear();
    std::fill_n(source.bus->work_ram.begin() + p.records, 32 * 78, 0);
    source.put(p.highest, 0);
  }
  void select(unsigned a, unsigned t) {
    action.attacker = a;
    action.target = t;
    source.put(p.attacker, at(a));
    source.put(p.target, at(t));
  }
  void set_count(unsigned n) {
    action.enemy_count = std::uint16_t(n);
    source.put(p.count, n);
  }
  void flags(std::uint32_t n) {
    action.target_flags = n;
    source.put32(p.mask, n);
  }
  void seed(unsigned slot, const battle::Battler &value) {
    roster.at(slot) = value;
    const auto b = encode(value);
    std::copy(b.begin(), b.end(), source.bus->work_ram.begin() + at(slot));
    ++proof.explicit_inputs;
  }
  void player(unsigned slot, unsigned character) {
    source.call(p.player, true, character, at(slot));
    roster.initialize_player(slot, ui.party, character);
    ++proof.initializers;
  }
  void enemy(unsigned slot, unsigned id) {
    source.call(p.enemy, true, id, at(slot));
    roster.initialize_enemy(slot, id);
    ++proof.initializers;
  }
  std::vector<std::uint8_t> native_party_bytes() const {
    saves::PersistedState seed;
    seed.version = source.version;
    seed = saves::capture_party(ui.party, seed);
    seed.game.text_flavour = 1;
    auto archive = saves::SaveArchive::empty(source.version);
    archive.save(0, seed, 0);
    return {archive.bytes().begin() + 32,
            archive.bytes().begin() + 32 +
                saves::layout(source.version).persisted_bytes()};
  }
  OwnedSnapshot original() const {
    OwnedSnapshot s;
    for (unsigned i = 0; i < 32; ++i)
      std::copy_n(source.bus->work_ram.begin() + at(i), 78,
                  s.roster[i].begin());
    s.action = {source.get(p.attacker),  source.get(p.target),
                source.get32(p.mask),    source.get(p.count),
                source.get(p.nullified), source.get(p.reflected)};
    s.scratch.assign(source.bus->work_ram.begin() + p.scratch,
                     source.bus->work_ram.begin() + p.scratch +
                         2 * scratch_size());
    s.party_bytes.assign(source.bus->work_ram.begin() + p.game,
                         source.bus->work_ram.begin() + p.game +
                             saves::layout(source.version).persisted_bytes());
    s.prepared = prepared_snapshot(source);
    s.highest = source.get(p.highest);
    s.automatic = source.bus->work_ram[auto_address()];
    return s;
  }
  OwnedSnapshot native() const {
    OwnedSnapshot s;
    for (unsigned i = 0; i < 32; ++i)
      s.roster[i] = encode(roster.at(i));
    s.action = {action.attacker ? at(*action.attacker) : 0u,
                action.target ? at(*action.target) : 0u,
                action.target_flags,
                action.enemy_count,
                action.shield_nullified,
                action.damage_reflected};
    for (unsigned i = 0; i < 2; ++i) {
      const auto b = names.scratch(side(i));
      s.scratch.insert(s.scratch.end(), b.begin(), b.end());
    }
    s.party_bytes = native_party_bytes();
    s.prepared = prepared_snapshot(ui.prepared);
    s.highest = roster.highest_enemy_level();
    s.automatic = ui.party.auto_fight;
    return s;
  }
  void compare(const OwnedSnapshot &expected, const std::string &where) {
    const auto actual = native();
    require(actual.action == expected.action,
            ui.context + " " + where + " selectors/flags differ");
    require(actual.highest == expected.highest,
            ui.context + " " + where + " highest differs");
    for (unsigned i = 0; i < 32; ++i)
      require(actual.roster[i] == expected.roster[i],
              ui.context + " " + where +
                  " record differs slot=" + std::to_string(i));
    require(actual.scratch == expected.scratch,
            ui.context + " " + where + " scratch differs");
    require(actual.prepared == expected.prepared,
            ui.context + " " + where + " prepared differs");
    require(actual.party_bytes == expected.party_bytes,
            ui.context + " " + where + " persisted party bytes differ");
    require(actual.automatic == expected.automatic,
            ui.context + " " + where + " auto-fight differs");
    proof.record_bytes += 32 * 78;
    proof.scratch_bytes += 2 * scratch_size();
    ++proof.snapshots;
  }
  void compare(const std::string &w) { compare(original(), w); }
  void helper(unsigned kind, unsigned mode = 0) {
    source.at_instruction = [&](unsigned pc) {
      if (pc == p.label)
        ++proof.label_scans;
    };
    if (kind == 0) {
      source.call(p.fix_attacker, true, mode);
      names.fix_attacker(std::uint16_t(mode));
    } else if (kind == 1) {
      source.call(p.fix_target, true);
      names.fix_target();
    } else if (kind == 2) {
      source.call(p.swap, false);
      names.swap_attacker_with_target();
    } else {
      source.call(p.select, true);
      names.select_first_target();
    }
    source.at_instruction = {};
    compare("helper kind=" + std::to_string(kind) +
            " mode=" + std::to_string(mode));
    ++proof.helper_calls;
  }
};
void names_cases(const eb::GameAssets &a) {
  BattlePair p(a);
  for (unsigned id = 0; id < 231; ++id) {
    p.ui.context =
        (p.us() ? "US" : "JP") + std::string(" enemy=") + std::to_string(id);
    p.clear();
    p.enemy(8, id);
    p.select(8, 8);
    p.helper(0);
    p.helper(1);
    p.enemy(9, id);
    p.select(9, 8);
    p.helper(0);
    p.helper(1);
    for (unsigned mode : {1u, 0x100u})
      for (unsigned count : {0u, 1u, 2u, 0xffffu}) {
        p.set_count(count);
        p.helper(0, mode);
      }
  }
  for (unsigned character = 1; character <= 6; ++character)
    for (unsigned slot : {0u, 5u, 17u, 31u}) {
      p.clear();
      p.player(slot, character);
      p.select(slot, slot);
      p.helper(0);
      p.helper(1);
      p.helper(2);
      ++proof.selector_cases;
    }
  p.clear();
  p.enemy(8, 1);
  p.enemy(9, 1);
  p.enemy(10, 1);
  p.player(0, 3);
  p.select(8, 10);
  for (unsigned consciousness : {0u, 2u, 255u}) {
    auto b = p.roster.at(9);
    b.consciousness = std::uint8_t(consciousness);
    p.seed(9, b);
    p.helper(0);
    p.helper(1);
  }
  {
    auto b = p.roster.at(10);
    b.id = 2;
    p.seed(10, b);
    p.helper(1);
    b.original_enemy = 2;
    p.seed(10, b);
    p.helper(1);
  }
  for (unsigned side_value : {0u, 1u, 2u, 255u})
    for (unsigned npc : {0u, 1u, 128u}) {
      auto b = p.roster.at(0);
      b.id = 3;
      b.row = 1;
      b.side = std::uint8_t(side_value);
      b.npc = std::uint8_t(npc);
      b.label = 1;
      b.original_enemy = 3;
      p.seed(0, b);
      p.select(0, 0);
      p.helper(0);
      p.helper(1);
    }
  p.clear();
  for (unsigned i = 0; i < 26; ++i)
    p.enemy(i, 1);
  p.select(0, 25);
  p.helper(0);
  p.helper(1);
  p.clear();
  p.player(0, 1);
  p.enemy(8, 160);
  p.enemy(9, 160);
  p.select(0, 8);
  for (unsigned shape = 0; shape < 3; ++shape) {
    auto pet = p.ui.party.name_field(party::NameField::Pet);
    pet[2] = shape == 1 ? 0 : std::uint8_t(p.us() ? 0x81 : 0x51);
    if (shape == 2)
      pet[0] = 0;
    p.sync_party();
    p.helper(0);
    p.helper(1);
    p.helper(2);
    p.helper(2);
  }
  for (unsigned row = 0; row < 6; ++row)
    for (unsigned id : {0u, 1u, 4u, 5u, 0xffffu}) {
      auto b = p.roster.at(0);
      b.id = std::uint16_t(id);
      b.row = std::uint8_t(row);
      p.seed(0, b);
      p.select(0, 0);
      p.helper(0);
      p.helper(1);
    }
  p.clear();
  for (unsigned i = 0; i < 32; ++i)
    p.player(i, i % 4 + 1);
  for (auto mask : {0u, 1u, 0x80000000u, 0x00050080u, 0xffffffffu}) {
    p.flags(mask);
    p.helper(3);
    ++proof.selector_cases;
  }
  p.select(3, 3);
  p.helper(2);
  p.select(0, 31);
  p.helper(2);
  p.helper(2);
}
void name_scratch_cases(const eb::GameAssets &a) {
  auto input = a;
  const bool us = a.version == eb::GameVersion::US;
  const auto p = battle_layout(a.version);
  const auto start = p.enemy_table + p.enemy_stride + (us ? 1 : 0),
             width = us ? 25u : 10u;
  std::fill_n(input.image.begin() + start, width,
              std::uint8_t(us ? 0x81 : 0x51));
  {
    BattlePair b(input);
    b.ui.context += " explicit full-width catalog scratch";
    b.player(0, 1);
    b.enemy(8, 1);
    b.enemy(9, 1);
    b.select(0, 9);
    b.helper(1);
    if (us) {
      require(b.names.scratch(dialogue::PreparedName::Target)[26] == 0x72,
              "Full-width source suffix did not seed retained byte26");
    }
    b.enemy(9, 2);
    b.helper(1);
    if (us) {
      require(b.ui.prepared.name(dialogue::PreparedName::Target)[26] == 0x72,
              "Short source copy lost prior scratch byte26");
    }
    b.select(9, 9);
    b.helper(0);
    b.helper(1);
  }
  input.image[start] = std::uint8_t(us ? 0xac : 0x3e);
  for (unsigned length = 0; length <= (us ? 5u : 4u); ++length) {
    BattlePair b(input);
    b.ui.context +=
        " explicit Ness placeholder length=" + std::to_string(length);
    auto field = b.ui.party.name_field(1);
    if (length < field.size())
      field[length] = 0;
    b.sync_party();
    b.enemy(8, 1);
    b.select(8, 8);
    b.helper(0, 1);
    // An expanded attacker may touch the adjacent target scratch. A later
    // real target helper must see that retained native owner, not a fresh
    // cache.
    b.enemy(9, 2);
    b.select(8, 9);
    b.helper(1);
  }
}
std::array<unsigned, 4> prompt_snapshot(const Source &s) {
  const auto p = prepared_layout(s.version);
  return {s.get(0x6d), s.get(p.blink), s.bus->work_ram[p.rolling],
          s.bus->work_ram[p.half]};
}
std::array<unsigned, 4> prompt_snapshot(NativePair &p) {
  const auto &v = p.windows.prompt_state();
  return {v.pressed, p.output.policy().prompt_mode, v.rolling_disabled,
          v.half_meter_speed};
}
unsigned effect_address(NativePair &pair,
                        const dialogue::ConversationEvent &event,
                        unsigned argument) {
  const auto p = prepared_layout(pair.source.version);
  if (const auto *e = std::get_if<dialogue::TextEffect>(&event))
    return e->kind == dialogue::TextEffectKind::TextSound ? pair.source.p.sound
                                                          : pair.source.p.tick;
  if (const auto *e = std::get_if<dialogue::WindowEffect>(&event)) {
    require(e->kind == dialogue::WindowEffectKind::WindowTick ||
                e->kind == dialogue::WindowEffectKind::FrameWait,
            "Unexpected window service");
    return e->kind == dialogue::WindowEffectKind::WindowTick
               ? pair.source.p.tick
               : pair.source.p.wait;
  }
  if (std::holds_alternative<dialogue::PromptEffect>(event))
    return p.world;
  if (const auto *e = std::get_if<dialogue::Request>(&event)) {
    require(e->kind == dialogue::RequestKind::ScriptSound ||
                e->kind == dialogue::RequestKind::SoundWorldTick,
            "Unowned authored command " + hex(e->command) + ":" +
                hex(e->selector));
    if (e->kind == dialogue::RequestKind::ScriptSound) {
      require(e->script_sound && e->script_sound->source_value == argument,
              "Script sound argument differs");
      return pair.source.p.sound;
    }
    return p.world;
  }
  throw std::runtime_error("Unowned battle text event");
}
std::vector<unsigned> original_stage(const BattlePair &p) {
  std::vector<unsigned> out;
  for (unsigned cell = 18 * 32 - 8; cell < 18 * 32; ++cell) {
    const auto d = p.source.get(p.p.bg2 + cell * 2);
    for (unsigned y = 0; y < 8; ++y)
      for (unsigned x = 0; x < 8; ++x) {
        const unsigned gx = (d & 0x4000) ? 7 - x : x,
                       gy = (d & 0x8000) ? 7 - y : y;
        const unsigned at = (0xc000 + (d & 1023) * 16 + gy * 2) & 65535;
        const auto color =
            ((p.source.bus->video_ram[at] >> (7 - gx)) & 1) |
            (((p.source.bus->video_ram[(at + 1) & 65535] >> (7 - gx)) & 1)
             << 1);
        out.push_back(color ? (color + ((d >> 10) & 7) * 4) |
                                  (unsigned(bool(d & 0x2000)) << 8)
                            : 0);
      }
  }
  return out;
}
std::vector<unsigned> native_stage(const BattlePair &p) {
  const auto frame = p.ui.windows.scene();
  std::vector<unsigned> out;
  for (unsigned cell = 18 * 32 - 8; cell < 18 * 32; ++cell)
    for (unsigned y = 0; y < 8; ++y)
      for (unsigned x = 0; x < 8; ++x) {
        const auto i = (cell / 32 * 8 + y) * frame->width + cell % 32 * 8 + x;
        out.push_back(frame->pixels[i] | (unsigned(frame->priority[i]) << 8));
      }
  return out;
}
void seed_stage(BattlePair &p) {
  // Use the actual imported battle border as nonempty staged input above the
  // meter area. Both source and native geometry receive the same test position;
  // both real window drawers publish it before the wrapper begins.
  auto &rectangle = p.ui.windows.metadata({14}).rectangle;
  require(rectangle.outer_height <= 11,
          "Battle window too tall for staging fixture");
  rectangle.outer_y = 17;
  p.source.put(p.source.record() + 8, 17);
  p.source.draw_scene();
  p.ui.windows.draw_windows();
  p.ui.windows.publish_scene();
  require(native_stage(p) == original_stage(p),
          p.ui.context + " initial staged auto-fight cells differ");
  const auto pixels = native_stage(p);
  require(std::any_of(pixels.begin() + 2 * 64, pixels.begin() + 6 * 64,
                      [](unsigned v) { return v != 0; }),
          "Auto-fight fixture has no visible cells");
}
struct MessageSample {
  enum class Kind { Begin, End, Effect };
  Kind kind{};
  unsigned effect{}, argument{}, reference{}, returned{}, mutation{};
  Sample rendering;
  OwnedSnapshot owned;
  std::array<unsigned, 4> prompt{};
  std::array<unsigned, 2> input{};
  std::vector<unsigned> stage;
};
struct BodyTrace {
  std::vector<MessageSample> events;
  MessageSample final;
  unsigned returned{};
};
void source_mutation(BattlePair &p, unsigned mutation) {
  if (mutation == 1 || mutation == 2) {
    p.source.put(p.p.attacker, p.at(1));
    p.source.put(p.p.target, p.at(9));
    p.source.nested(p.p.fix_target, true, 0);
  } else if (mutation == 3) {
    p.source.bus->work_ram[p.auto_address()] = 0xff;
    p.source.put(0x65, 0x8000);
    p.source.put(p.p.battle_mode, 0);
  } else if (mutation == 4) {
    const auto at = p.source.p.party;
    p.source.bus->work_ram[at + 1] = std::uint8_t(p.us() ? 0x85 : 0x55);
    p.source.nested(p.p.fix_target, true, 0);
  }
}
void native_mutation(BattlePair &p, unsigned mutation) {
  if (mutation == 1 || mutation == 2) {
    p.action.attacker = 1;
    p.action.target = 9;
    p.names.fix_target();
  } else if (mutation == 3) {
    p.ui.party.auto_fight = 0xff;
    p.input.state[0] = 0x8000;
    p.ui.windows.prompt_state().battle_mode = 0;
  } else if (mutation == 4) {
    p.ui.party.name_field(1)[1] = std::uint8_t(p.us() ? 0x85 : 0x55);
    p.names.fix_target();
  }
  ++proof.callbacks;
}
BodyTrace run_original(BattlePair &p, unsigned entry, bool far,
                       unsigned mutation = 0) {
  const auto q = prepared_layout(p.source.version);
  BodyTrace trace;
  const auto capture = [&](MessageSample::Kind kind, unsigned effect = 0,
                           unsigned ref = 0) {
    MessageSample s;
    s.kind = kind;
    s.effect = effect;
    s.argument = p.source.cpu.accumulator;
    s.reference = ref;
    s.returned = p.source.get32(p.source.cpu.direct_page + 6);
    s.rendering = original_sample(p.source, effect);
    s.owned = p.original();
    s.prompt = prompt_snapshot(p.source);
    s.input = {p.source.get(0x65), p.source.get(0x67)};
    s.stage = original_stage(p);
    return s;
  };
  unsigned return_pc = 0, return_stack = 0;
  bool changed = false;
  const std::array<unsigned, 5> tree =
      p.us()
          ? std::array{0xc1790bu, 0xc179aau, 0xc17c36u, 0xc17d94u, 0xc181bbu}
          : std::array{0xc17b7cu, 0xc17c1bu, 0xc17eabu, 0xc18001u, 0xc1841du};
  const std::array<unsigned, 5> prefix{0x18, 0x19, 0x1b, 0x1c, 0x1f};
  p.source.at_instruction = [&](unsigned pc) {
    if (pc == p.p.label)
      ++proof.label_scans;
    for (unsigned i = 0; i < tree.size(); ++i)
      if (pc == tree[i])
        proof.source_commands.insert(prefix[i] * 256 + p.source.cpu.x_index);
    if (return_pc && pc == return_pc &&
        p.source.cpu.stack_pointer == return_stack) {
      trace.events.push_back(capture(MessageSample::Kind::End));
      return_pc = 0;
    }
    if (pc == q.display && !return_pc) {
      trace.events.push_back(
          capture(MessageSample::Kind::Begin, 0,
                  p.source.get32(p.source.cpu.direct_page + 14)));
      const auto sp = p.source.cpu.stack_pointer;
      return_pc = ((p.source.get(sp + 1) + 1) & 65535) |
                  (unsigned(p.source.bus->work_ram[sp + 3]) << 16);
      return_stack = sp + 3;
    }
  };
  p.source.at_service = [&](unsigned effect) {
    trace.events.push_back(capture(MessageSample::Kind::Effect, effect));
    if (mutation && !changed && effect == p.source.p.tick) {
      require(return_pc != 0, "Live callback outside text body");
      changed = true;
      trace.events.back().mutation = mutation;
      source_mutation(p, mutation);
    }
    if (effect == q.world)
      p.source.put(0x6d, 0x80);
  };
  p.source.begin_trace();
  p.source.call(entry, far);
  p.source.end_trace();
  p.source.at_instruction = {};
  p.source.at_service = {};
  require(!return_pc, "Producer returned inside DISPLAY_TEXT");
  require(!mutation || changed, "Original live mutation absent");
  trace.final = capture(MessageSample::Kind::End);
  trace.returned = p.source.cpu.accumulator;
  return trace;
}
void compare_sample(BattlePair &p, const MessageSample &s,
                    const std::string &where) {
  p.compare(s.owned, where);
  p.ui.compare(s.rendering, where);
  require(prompt_snapshot(p.ui) == s.prompt,
          p.ui.context + " " + where + " prompt differs");
  require(std::array<unsigned, 2>{p.input.state[0], p.input.state[1]} ==
              s.input,
          p.ui.context + " " + where + " held input differs");
  require(native_stage(p) == s.stage,
          p.ui.context + " " + where + " staged auto-fight cells differ");
  proof.auto_cells += 8;
}
template <class Operation>
void run_native_body(BattlePair &p, Operation &operation,
                     const BodyTrace &trace, const dialogue::Program &program) {
  unsigned index = 0;
  for (unsigned outer = 0; outer < 10000; ++outer) {
    const auto progress = operation.advance(1 + outer % 7);
    if (progress == dialogue::Progress::Finished)
      break;
    if (progress == dialogue::Progress::BudgetExhausted)
      continue;
    require(operation.pending() && index < trace.events.size() &&
                trace.events[index].kind == MessageSample::Kind::Begin,
            p.ui.context + " producer message order differs");
    const auto begin = trace.events[index++];
    compare_sample(p, begin, "begin message");
    auto &conversation = operation.conversation();
    const auto loc = program.resolve({std::uint8_t(begin.reference),
                                      std::uint8_t(begin.reference >> 8),
                                      std::uint8_t(begin.reference >> 16), 0});
    require(loc && conversation.snapshot().frames.size() == 1 &&
                conversation.snapshot().frames.front().cursor == loc,
            p.ui.context + " wrong authored message");
    for (unsigned inner = 0; inner < 200000; ++inner) {
      const auto status = conversation.advance(1 + inner % 13);
      if (status == dialogue::Progress::Finished)
        break;
      if (status == dialogue::Progress::BudgetExhausted)
        continue;
      require(index < trace.events.size() &&
                  trace.events[index].kind == MessageSample::Kind::Effect,
              p.ui.context + " child effect order differs");
      const auto &e = trace.events[index++];
      const auto effect =
          effect_address(p.ui, *conversation.event(), e.argument);
      require(effect == e.effect, p.ui.context + " effect kind differs");
      compare_sample(p, e, "text effect");
      if (e.mutation)
        native_mutation(p, e.mutation);
      if (effect == prepared_layout(p.source.version).world)
        conversation.respond({0, 0x80, 0});
      else
        conversation.respond();
      ++totals.native_effects;
    }
    require(conversation.finished() && index < trace.events.size() &&
                trace.events[index].kind == MessageSample::Kind::End,
            p.ui.context + " text did not return");
    const auto &end = trace.events[index++];
    compare_sample(p, end, "end message");
    require(conversation.snapshot().returned_cursor ==
                dialogue::Location{(end.returned - 0xc00000) >> 16,
                                   std::uint16_t(end.returned)},
            p.ui.context + " returned text cursor differs");
    ++proof.messages;
    operation.respond();
  }
  require(operation.complete() && index == trace.events.size(),
          p.ui.context + " producer left source events");
  compare_sample(p, trace.final, "producer final");
}
void prepare_text(BattlePair &p, unsigned battle_mode, unsigned automatic,
                  unsigned held, bool slow) {
  p.ui.state.word_wrap = p.us();
  p.source.put(p.us() ? 0x9623 : 0x991b, p.us());
  p.ui.windows.prompt_state().battle_mode = std::uint16_t(battle_mode);
  p.source.put(p.p.battle_mode, battle_mode);
  p.ui.output.policy().prompt_mode = 9;
  p.source.put(prepared_layout(p.source.version).blink, 9);
  p.ui.windows.prompt_state().pressed = 0;
  p.source.put(0x6d, 0);
  p.ui.party.auto_fight = std::uint8_t(automatic);
  p.source.bus->work_ram[p.auto_address()] = std::uint8_t(automatic);
  p.input.state[0] = std::uint16_t(held);
  p.source.put(0x65, held);
  p.input.state[1] = 0x250;
  p.source.put(0x67, 0x250);
  p.ui.output.policy().instant = !slow;
  p.source.bus->work_ram[p.us() ? 0x9622 : 0x991a] = !slow;
  if (slow) {
    p.ui.output.policy().text_speed = 1;
    p.source.put(p.us() ? 0x9625 : 0x991d, 1);
  }
  seed_stage(p);
}
void resources_cases(const eb::GameAssets &a) {
  const auto p = battle_layout(a.version);
  const auto resource = battle::ActionResources::import(a.image, a.version);
  for (unsigned i = 0; i < 318; ++i) {
    require(resource->type(i) == a.image.at(p.action_table + i * 12 + 2),
            "Action type differs at " + std::to_string(i));
    ++proof.resources;
  }
  const auto refs = a.version == eb::GameVersion::US
                        ? std::array{0xef70d2u, 0xef70fau, 0xef7099u}
                        : std::array{0xc735a8u, 0xc735ceu, 0xc7356eu};
  for (unsigned i = 0; i < 3; ++i) {
    const auto r = resource->message(static_cast<battle::ShieldMessage>(i));
    require((unsigned(r[0]) | (unsigned(r[1]) << 8) | (unsigned(r[2]) << 16) |
             (unsigned(r[3]) << 24)) == refs[i],
            "Action authored reference differs");
  }
}
void wrapper_cases(const eb::GameAssets &a) {
  const auto imported = dialogue::import_program(a.image, a.version);
  const auto resources = battle::ActionResources::import(a.image, a.version);
  for (unsigned mode : {0u, 1u, 0xffffu})
    for (unsigned automatic : {0u, 1u, 0x80u})
      for (unsigned held : {0u, 0x8000u})
        for (unsigned numbered : {0u, 1u}) {
          BattlePair p(a);
          p.ui.context += (" wrapper mode=" + std::to_string(mode) + " auto=" +
                           std::to_string(automatic) + " held=" + hex(held) +
                           " numbered=" + std::to_string(numbered));
          p.player(0, 1);
          p.enemy(8, 1);
          p.select(0, 8);
          p.helper(0);
          p.helper(1);
          prepare_text(p, mode, automatic, held, false);
          const auto ref = resources->message(battle::ShieldMessage::WornOff);
          const auto location = imported.program->resolve(ref);
          require(bool(location), "Wrapper authored text missing");
          const unsigned addr = unsigned(ref[0]) | (unsigned(ref[1]) << 8) |
                                (unsigned(ref[2]) << 16);
          p.source.put32(p.source.cpu.direct_page + 14, addr);
          if (numbered)
            p.source.put32(p.source.cpu.direct_page + 18, 0xfedcba98);
          const auto trace =
              run_original(p, numbered ? p.p.numbered : p.p.wrapper, true);
          dialogue::PromptHost prompts(p.ui.windows);
          story::BattleDialogue owner(imported.program, prompts, p.ui.prepared,
                                      p.ui.party, p.input);
          auto operation = numbered ? owner.begin_number(*location, 0xfedcba98)
                                    : owner.begin_text(*location);
          run_native_body(p, *operation, trace, *imported.program);
          require(!owner.busy() && !owner.failed(),
                  "Wrapper owner not released");
          if (mode == 1 && automatic == 1)
            p.ui.compare_scene();
          ++proof.wrapper_calls;
        }
}
void shield_cases(const eb::GameAssets &a) {
  const auto imported = dialogue::import_program(a.image, a.version);
  const auto resource = battle::ActionResources::import(a.image, a.version);
  unsigned psi = 318;
  for (unsigned i = 0; i < 318; ++i) {
    if (resource->type(i) == 3) {
      psi = i;
      break;
    }
  }
  require(psi < 318, "No actual PSI action");
  const auto prepare = [&](BattlePair &p, unsigned action, unsigned shield,
                           unsigned hp) {
    p.player(0, 1);
    p.player(1, 2);
    p.enemy(8, 1);
    p.enemy(9, 2);
    p.select(0, 8);
    p.flags(1u << 8);
    p.helper(3);
    p.helper(0);
    auto attacker = p.roster.at(0);
    attacker.action = std::uint16_t(action);
    attacker.action_argument = 1;
    p.seed(0, attacker);
    auto other = p.roster.at(1);
    other.action = std::uint16_t(action);
    other.action_argument = 2;
    p.seed(1, other);
    for (unsigned slot : {8u, 9u}) {
      auto target = p.roster.at(slot);
      target.afflictions[6] = std::uint8_t(shield);
      target.shield_hp = std::uint8_t(hp);
      p.seed(slot, target);
    }
    p.action.shield_nullified = 0xa500;
    p.action.damage_reflected = 0;
    p.source.put(p.p.nullified, 0xa500);
    p.source.put(p.p.reflected, 0);
  };
  // Every imported type reaches the real helper's byte predicate; no fake
  // successful return substitutes for the non-PSI or no-shield paths.
  {
    BattlePair p(a);
    prepare(p, 0, 0, 3);
    prepare_text(p, 1, 0, 0, false);
    dialogue::PromptHost prompts(p.ui.windows);
    story::BattleDialogue text(imported.program, prompts, p.ui.prepared,
                               p.ui.party, p.input);
    battle::Shields shields(p.action, p.roster, p.names, text, resource);
    for (unsigned action = 0; action < 318; ++action) {
      auto b = p.roster.at(0);
      b.action = std::uint16_t(action);
      b.action_argument = std::uint8_t(action);
      p.seed(0, b);
      p.ui.context = (p.us() ? "US" : "JP") + std::string(" action type=") +
                     std::to_string(action);
      const auto trace = run_original(p, p.p.nullify, false);
      auto op = shields.begin_nullify();
      run_native_body(p, *op, trace, *imported.program);
      require(op->nullified() == bool(trace.returned & 65535),
              "Nullify return differs");
      ++proof.shield_calls;
    }
  }
  for (unsigned shield : {0u, 1u, 2u, 3u, 4u, 0xffu})
    for (unsigned hp : {0u, 1u, 2u, 3u, 0xffu}) {
      BattlePair p(a);
      p.ui.context +=
          (" shield=" + std::to_string(shield) + " hp=" + std::to_string(hp));
      prepare(p, psi, shield, hp);
      prepare_text(p, 1, 1, 0x8000, false);
      dialogue::PromptHost prompts(p.ui.windows);
      story::BattleDialogue text(imported.program, prompts, p.ui.prepared,
                                 p.ui.party, p.input);
      battle::Shields shields(p.action, p.roster, p.names, text, resource);
      auto trace = run_original(p, p.p.nullify, false);
      auto op = shields.begin_nullify();
      run_native_body(p, *op, trace, *imported.program);
      require(op->nullified() == bool(trace.returned & 65535),
              "Nullify branch return differs");
      ++proof.shield_calls;
      auto weak = run_original(p, p.p.weaken, false);
      auto next = shields.begin_weaken();
      run_native_body(p, *next, weak, *imported.program);
      ++proof.shield_calls;
      p.ui.compare_scene();
      require(!shields.busy() && !shields.failed() && !text.busy(),
              "Shield owners retained completed operation");
    }
  for (unsigned mutation : {1u, 2u, 3u, 4u}) {
    BattlePair p(a);
    p.ui.context += " live callback=" + std::to_string(mutation);
    prepare(p, psi, mutation == 1 ? 1 : 2, 1);
    if (mutation == 4) {
      p.select(8, 0);
      auto attacker = p.roster.at(8);
      attacker.action = std::uint16_t(psi);
      attacker.action_argument = 1;
      p.seed(8, attacker);
      auto target = p.roster.at(0);
      target.afflictions[6] = 2;
      target.shield_hp = 1;
      p.seed(0, target);
      p.helper(0);
      p.helper(1);
    }
    prepare_text(p, 1, 1, 0, false);
    p.ui.output.policy().instant = false;
    p.source.bus->work_ram[p.us() ? 0x9622 : 0x991a] = 0;
    p.ui.output.policy().text_speed = 1;
    p.source.put(p.us() ? 0x9625 : 0x991d, 1);
    dialogue::PromptHost prompts(p.ui.windows);
    story::BattleDialogue text(imported.program, prompts, p.ui.prepared,
                               p.ui.party, p.input);
    battle::Shields shields(p.action, p.roster, p.names, text, resource);
    const auto trace = run_original(p, p.p.nullify, false, mutation);
    auto op = shields.begin_nullify();
    run_native_body(p, *op, trace, *imported.program);
    require(op->nullified() == bool(trace.returned & 65535),
            "Live nullify return differs");
    ++proof.shield_calls;
    const auto weak = run_original(p, p.p.weaken, false);
    auto next = shields.begin_weaken();
    run_native_body(p, *next, weak, *imported.program);
    ++proof.shield_calls;
    p.ui.compare_scene();
  }
}
void initialized_shield_chains(const eb::GameAssets &a) {
  const auto imported = dialogue::import_program(a.image, a.version);
  const auto resources = battle::ActionResources::import(a.image, a.version);
  unsigned psi = 318;
  for (unsigned i = 0; i < 318; ++i) {
    if (resources->type(i) == 3) {
      psi = i;
      break;
    }
  }
  require(psi < 318, "Imported PSI action missing");
  for (unsigned status : {1u, 2u}) {
    BattlePair p(a);
    unsigned enemy = 231;
    for (unsigned id = 0; id < 231; ++id) {
      if (p.enemies->enemy(id).initial_status == status) {
        enemy = id;
        break;
      }
    }
    require(enemy < 231, "No actual catalog initial shield");
    p.ui.context +=
        (" initialized shield chain status=" + std::to_string(status) +
         " enemy=" + std::to_string(enemy));
    p.player(0, 1);
    p.enemy(8, enemy);
    p.enemy(9, enemy);
    p.select(0, 9);
    p.flags((1u << 8) | (1u << 9));
    p.set_count(2);
    p.helper(3);
    p.helper(0);
    auto actor = p.roster.at(0);
    actor.action = std::uint16_t(psi);
    actor.action_argument = 1;
    p.seed(0, actor);
    require(p.roster.at(8).shield_hp == 3,
            "Original initializer did not supply shield HP");
    prepare_text(p, 1, 1, 0x8000, false);
    dialogue::PromptHost prompts(p.ui.windows);
    story::BattleDialogue text(imported.program, prompts, p.ui.prepared,
                               p.ui.party, p.input);
    battle::Shields shields(p.action, p.roster, p.names, text, resources);
    for (unsigned hit = 0; hit < 3; ++hit) {
      const auto original = run_original(p, p.p.nullify, false);
      auto op = shields.begin_nullify();
      run_native_body(p, *op, original, *imported.program);
      require(op->nullified() == bool(original.returned & 65535),
              "Initialized shield return differs");
      ++proof.shield_calls;
      // Real helper order on the reflection branch, with damage/action work
      // between these two entries explicitly outside this proof boundary.
      const auto weakened = run_original(p, p.p.weaken, false);
      auto next = shields.begin_weaken();
      run_native_body(p, *next, weakened, *imported.program);
      ++proof.shield_calls;
    }
    require(p.roster.at(8).shield_hp == 0 && p.roster.at(8).afflictions[6] == 0,
            "Actual shield chain did not wear off");
    p.ui.compare_scene();
  }
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "SKIP battle names original reference: local imported packs "
                 "required\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      resources_cases(assets);
      const auto pixels_before = totals.pixels;
      names_cases(assets);
      name_scratch_cases(assets);
      wrapper_cases(assets);
      shield_cases(assets);
      initialized_shield_chains(assets);
      require(totals.pixels > pixels_before,
              "Region has no indexed canvas comparisons");
      std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP")
                << " complete battle names and shield messages passed\n";
    }
    std::cout << "PASS battle names reference: helpers=" << proof.helper_calls
              << " initializers=" << proof.initializers
              << " label_scans=" << proof.label_scans
              << " record_bytes=" << proof.record_bytes
              << " scratch_bytes=" << proof.scratch_bytes
              << " snapshots=" << proof.snapshots
              << " action_types=" << proof.resources
              << " messages=" << proof.messages
              << " shield_calls=" << proof.shield_calls
              << " wrappers=" << proof.wrapper_calls
              << " live_callbacks=" << proof.callbacks
              << " staged_cells=" << proof.auto_cells
              << " original_instructions=" << totals.instructions
              << " indexed_pixels=" << totals.pixels
              << " brush_pixels=" << totals.brush_pixels
              << " PPU_pixels=" << totals.ppu_pixels << '\n';
    std::cout << "Actual source command union:";
    for (auto command : proof.source_commands)
      std::cout << ' ' << hex(command);
    std::cout
        << "\nScope: complete FIX/COPY/letter scan/selector helpers and "
           "shield/wrapper continuations with real authored glyph/prompt "
           "rendering. Initial action/count handoff and world/frame/audio "
           "services remain explicit; no complete encounter, damage action, "
           "audio playback, GPU or live-gameplay claim. Native Scene "
           "integration is a separate unit proof.\n";
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
