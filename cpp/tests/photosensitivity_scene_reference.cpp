// Opt-in asset-backed flash coverage. Runs original PSI helpers with real
// DMA/NMI and imports the actual battle background patterns. Explicit scene
// inputs isolate effects; this is not a full encounter or cutscene playthrough.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/photosensitivity_filter.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool ok, const std::string &message) {
  if (!ok) throw std::runtime_error(message);
}
struct Coverage {
  eb::PhotosensitivityFilter filter;
  unsigned frames{}, dimmed{}, changed{}, first = ~0u, longest_quiet{}, quiet{};
  void frame(std::span<const std::uint32_t> pixels, unsigned width) {
    const auto output = filter.apply(pixels, width, 224, true);
    if (filter.dimmed()) { ++dimmed; quiet = 0; }
    else longest_quiet = std::max(longest_quiet, ++quiet);
    if (!std::equal(output.begin(), output.end(), pixels.begin())) {
      ++changed;
      first = std::min(first, frames);
    }
    ++frames;
  }
  void report(const std::string &name, unsigned width) const {
    std::cout << name << " width=" << width << " frames=" << frames
              << " dimmed=" << dimmed << " changed=" << changed
              << " first=" << first << " longest_quiet=" << longest_quiet
              << std::endl;
  }
};

class PsiSource {
public:
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool jp;
  unsigned state, advance, effects, nmis{};
  explicit PsiSource(const eb::GameAssets &a)
      : bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus),
        jp(a.version == eb::GameVersion::JP), state(jp ? 0x1b44 : 0x1b9e),
        advance(jp ? 0xc2e5cb : 0xc2e6b6),
        effects(jp ? 0xc2fcb2 : 0xc2fd99) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    bus->work_ram[0xd] = 0x80; bus->write_byte(0x2100, 0x80);
    bus->work_ram[0x11] = 0x58; bus->work_ram[0x12] = 0x5c;
    bus->work_ram[0x13] = 0x60; bus->work_ram[0x14] = 0x0c;
    bus->work_ram[0x15] = 0x10; bus->work_ram[0x16] = 0x63;
    bus->work_ram[0x2e] = 1;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value; bus->work_ram.at(at + 1) = value >> 8;
  }
  void call(unsigned pc, unsigned a = 0, unsigned x = 0, unsigned y = 0,
            bool far = true) {
    require(cpu.stack_pointer == 0x1fff && cpu.direct_page == 0x1e00,
            "Original context not restored");
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = (pc & 0xff0000) | 0xff00;
    const auto finish = cpu.program_counter + (far ? 4 : 3);
    cpu.accumulator = a; cpu.x_index = x; cpu.y_index = y;
    if (far) cpu.execute_instruction<0x22>(pc, 4);
    else cpu.execute_instruction<0x20>(pc & 65535, 3);
    for (unsigned i = 0; i < 10000000; ++i) {
      if (cpu.program_counter == finish && cpu.stack_pointer == 0x1fff) return;
      if (cpu.program_counter == 0xc08170) ++nmis;
      cpu.step_instruction();
    }
    throw std::runtime_error("PSI source did not return: " + cpu.describe_registers());
  }
  void disable_nmi() {
    bus->write_byte(0x4200, 0); bus->work_ram[0x1e] = 0;
  }
  void transfer() {
    call(jp ? 0xc088a3 : 0xc088b1);
    call(jp ? 0xc08b17 : 0xc08b26);
    const auto before = nmis;
    call(jp ? 0xc0870e : 0xc08715);
    for (unsigned i = 0;; ++i) {
      require(i < 6, "NMI publication did not finish");
      call(jp ? 0xc0874c : 0xc08756);
      if (nmis > before && word(0x99) == 0 && !bus->work_ram[0x30] &&
          !bus->work_ram[0x2c]) break;
    }
    disable_nmi();
  }
  void setup(unsigned id, unsigned background) {
    call(0xc08522);
    // Authored two/four-bit base, and explicit ordinary enemy targets.
    call(jp ? 0xc2d0d5 : 0xc2d121, background, 0, 4);
    const unsigned battlers = jp ? 0xa1ae : 0x9fac;
    for (unsigned bank = 0; bank < 4; ++bank) {
      const unsigned at = battlers + (8 + bank) * 78;
      bus->work_ram[at + 12] = 1; bus->work_ram[at + 14] = 1;
      bus->work_ram[at + 67] = bank;
      bus->work_ram[at + 68] = 80 + bank * 25;
      bus->work_ram[at + 69] = 90 + bank * 5;
    }
    put(jp ? 0xab74 : 0xa972, battlers + 8 * 78);
    bus->work_ram[0xd] = 15; bus->write_byte(0x2100, 15);
    call(jp ? 0xc0870e : 0xc08715);
    call(jp ? 0xc2e06b : 0xc2e116, id);
    disable_nmi();
  }
  std::vector<std::uint32_t> pixels(unsigned depth) {
    // Isolate the actual PSI plane, as in native_psi_reference. Source
    // decompression, palette rotation, queued maps and DMA are all real.
    bus->write_byte(0x2105, depth == 2 ? 0 : 1);
    bus->write_byte(0x2107, 0x58); bus->write_byte(0x2108, 0x58);
    bus->write_byte(0x210b, 0);
    bus->write_byte(0x212c, depth == 2 ? 2 : 1);
    bus->write_byte(0x212d, 0); bus->write_byte(0x2130, 0);
    bus->write_byte(0x2131, 0); bus->write_byte(0x212e, 0);
    bus->write_byte(0x212f, 0); bus->write_byte(0x420c, 0);
    bus->write_byte(0x2100, 15);
    const auto end = bus->completed_frames + 2;
    while (bus->completed_frames < end) bus->advance_cpu_cycles(3000);
    return {bus->native_framebuffer.begin(), bus->native_framebuffer.end()};
  }
  void backdrop() {
    call(0xc08522);
    put(0x200, 0x4210);
    bus->work_ram[0xd] = 15;
    bus->work_ram[0x1a] = bus->work_ram[0x1b] = 0;
    bus->write_byte(0x2100, 15);
    call(0xc0856b, 8);
    transfer();
  }
  std::vector<std::uint32_t> raw() {
    const auto end = bus->completed_frames + 2;
    while (bus->completed_frames < end) bus->advance_cpu_cycles(3000);
    return {bus->native_framebuffer.begin(), bus->native_framebuffer.end()};
  }
  void background(eb::native::BattleBackgroundPair pair, unsigned group) {
    call(0xc08522);
    put(jp ? 0x4e12 : 0x4a8c, group);
    call(jp ? 0xc2d0d5 : 0xc2d121, pair.primary, pair.secondary, pair.style);
  }
  std::vector<std::uint32_t> background_pixels(unsigned width) {
    // Same settled source/HDMA composition as the existing background oracle.
    // The original loader retains VRAM bytes outside its authored transfers.
    eb::GameSceneRenderer compositor;
    const unsigned base = jp ? 0xaf5f : 0xad8a;
    const unsigned record = jp ? 0xafa9 : 0xadd4;
    const unsigned rows = jp ? 0x3fcc : 0x3c46;
    std::array<std::uint8_t, 64> regs{};
    std::copy(bus->ppu_registers().begin(), bus->ppu_registers().end(), regs.begin());
    regs[0] = 15;
    for (unsigned i = 5; i <= 12; ++i) regs[i] = bus->work_ram[0xf + i - 5];
    regs[0x2c] = bus->work_ram[0x1a]; regs[0x2d] = bus->work_ram[0x1b];
    const unsigned mask = bus->work_ram[record + 1] == 4 ? 3 : 12;
    std::array<std::uint8_t, 512> palette;
    std::copy_n(bus->work_ram.begin() + 0x200, 512, palette.begin());
    std::array<std::uint16_t, 4> xs{}, ys{};
    auto view = bus->scene_read_view();
    view.ppu_registers = regs; view.palette_ram = palette;
    view.background_scroll_x = xs; view.background_scroll_y = ys;
    std::vector<std::uint32_t> result(width * 224);
    unsigned stream = base + 46, remaining = 0;
    unsigned screen = regs[0x2c] | regs[0x2d] << 8;
    for (unsigned y = 0; y < 224; ++y) {
      if (word(base + 40)) {
        if (!remaining) {
          remaining = bus->work_ram[stream++];
          if (remaining) { screen = word(stream); stream += 2; }
          else remaining = 0xffff;
        }
        --remaining;
      }
      regs[0x2c] = (screen & 255) & mask;
      regs[0x2d] = (screen >> 8) & mask;
      for (unsigned i = 0; i < 4; ++i) {
        xs[i] = word(0x31 + i * 4); ys[i] = word(0x33 + i * 4);
      }
      for (unsigned ordinal = 0; ordinal < 2; ++ordinal) {
        if (!bus->work_ram[record + ordinal * 119]) continue;
        const unsigned address = bus->read_byte(0x4351 + ordinal * 16);
        if (address >= 0x0d && address <= 0x14) {
          const unsigned layer = (address - 0xd) / 2;
          const unsigned offset = word(rows + ordinal * 448 + y * 2);
          if (address & 1) xs[layer] = offset; else ys[layer] = offset;
        }
      }
      for (unsigned x = 0; x < width; ++x)
        result[y * width + x] = compositor.compose_presentation_pixel(
            view, int(x) - int((width - 256) / 2), y, {}, false);
    }
    return result;
  }
};

std::vector<std::uint32_t> centered(std::span<const std::uint32_t> native, unsigned width) {
  // Explicit quiet margins test native-viewport detection and global exposure.
  std::vector<std::uint32_t> result(width * 224, 0xff203040);
  for (unsigned y = 0; y < 224; ++y)
    std::copy_n(native.begin() + y * 256, 256,
                result.begin() + y * width + width / 2 - 128);
  return result;
}
void status_flashes(const eb::GameAssets &assets) {
  struct Case { const char *name; unsigned status, loss; };
  constexpr Case cases[] = {{"Poison",4,10}, {"Nausea",5,10}, {"Sunstroke",6,2}};
  const auto &profile = eb::source_profile(assets.version);
  for (const auto &c : cases) {
    PsiSource source(assets);
    source.backdrop();
    const auto before = source.raw();
    std::array<Coverage, 3> coverage;
    constexpr std::array widths{256u, 398u, 522u};
    for (unsigned i = 0; i < 3; ++i) coverage[i].frame(centered(before, widths[i]), widths[i]);
    const auto &ch = profile.character_layout;
    source.bus->work_ram[profile.party_state.members] = 1;
    source.bus->work_ram[profile.party_state.player_controlled_count] = 1;
    const unsigned game = source.jp ? 0x9aa9 : 0x97f5;
    source.bus->work_ram[game + (source.jp ? 0x93 : 0x96)] = 1;
    source.bus->work_ram[game + (source.jp ? 0x99 : 0x9c)] = 1;
    source.put((source.jp ? 0x514e : 0x4dc8) + 2, ch.table_address);
    source.bus->work_ram[ch.table_address + ch.afflictions] = c.status;
    source.put(ch.table_address + ch.max_hp, 200);
    source.put(ch.table_address + ch.current_hp, 200);
    source.put(ch.table_address + ch.current_hp_target, 200);
    // Explicit just-expiring timer; original status routing and HP changes run.
    source.put(source.jp ? 0x60ec : 0x5d66, 1);
    source.call(source.jp ? 0xc05223 : 0xc04ffe);
    require(source.word(ch.table_address + ch.current_hp) == 200 - c.loss,
            std::string(c.name) + " did not take the original damage route");
    require(source.word(0x200) == 31 && source.bus->work_ram[0x1a] == 0,
            std::string(c.name) + " did not stage the original red flash");
    source.transfer();
    const auto flash = source.raw();
    require(flash[0] == 0xffff0000, "Original status flash was not rendered red");
    for (unsigned i = 0; i < 3; ++i) {
      coverage[i].frame(centered(flash, widths[i]), widths[i]);
      require(coverage[i].filter.dimmed() && coverage[i].first == 1,
              std::string(c.name) + " first flash escaped dimming");
      coverage[i].report(c.name, widths[i]);
    }
    source.call(source.jp ? 0xc05166 : 0xc04f47);
    source.transfer();
    require(source.raw()[0] == before[0], "Original status restoration did not render");
  }
}
void event_flashes(const eb::GameAssets &assets) {
  // Source fixed-color display transport used by EVENT_705_706_COMMON and
  // other event scripts. These are mechanism fixtures, not full story replays.
  struct Case { const char *name; unsigned addition, hold; };
  constexpr Case cases[] = {{"Carpainter lightning",10,4},
    {"Meteorite white burst mechanism",31,1},
    {"Phase Distorter warp flash mechanism",13,7},
    {"Defeat white burst mechanism",31,1}};
  for (const auto &c : cases) {
    PsiSource source(assets);
    source.backdrop();
    std::array<Coverage, 3> coverage;
    constexpr std::array widths{256u, 398u, 522u};
    for (unsigned tick = 0; tick < 4 * c.hold + 1; ++tick) {
      const bool bright = tick && ((tick - 1) / c.hold) % 2 == 0;
      source.call(source.jp ? 0xc423d8 : 0xc4249a, 0x33, bright ? c.addition : 0);
      const auto native = source.raw();
      for (unsigned i = 0; i < 3; ++i) {
        coverage[i].frame(centered(native, widths[i]), widths[i]);
        if (tick) require(coverage[i].filter.dimmed(),
                          std::string(c.name) + " escaped dimming");
      }
    }
    for (unsigned i = 0; i < 3; ++i) coverage[i].report(c.name, widths[i]);
  }
}

void backgrounds(const eb::GameAssets &assets) {
  eb::native::BattleBackgroundScenes catalog(assets.image, assets.version);
  struct Case { const char *name; unsigned group; };
  // ENEMY_BATTLE_GROUPS_TABLE and BATTLE_BG_LAYER_TABLE, both regions.
  constexpr Case cases[] = {{"Kraken",467}, {"Bionic Kraken",412},
    {"Starman",344}, {"Starman Super",357}, {"Ghost of Starman",403},
    {"Starman Deluxe",466}, {"Final Starman",409},
    {"Giygas Devil's Machine",475}, {"Giygas phase 1",476},
    {"Giygas phase 2",477}, {"Giygas prayer",478},
    {"Giygas after prayer 1",479}, {"Giygas after prayer 7",480}};
  for (const auto &c : cases) {
    const bool original = bool(catalog.artwork_dependency(catalog.selection(c.group),
        c.group == 478 ? eb::native::BattleArtworkPublication::GiygasPrayer :
                         eb::native::BattleArtworkPublication::Ordinary));
    for (unsigned width : {256u, 398u, 522u}) {
      std::optional<eb::native::BattleBackgroundScene> scene;
      std::unique_ptr<PsiSource> source;
      if (original) {
        source = std::make_unique<PsiSource>(assets);
        source->background(catalog.selection(c.group), c.group);
      } else scene.emplace(catalog.prepare(c.group));
      Coverage coverage;
      for (unsigned t = 0; t < 600; ++t) {
        std::vector<std::uint32_t> pixels;
        if (original) {
          source->bus->work_ram[2] = t & 1;
          source->call(source->jp ? 0xc2dab4 : 0xc2db3f);
          pixels = source->background_pixels(width);
        } else {
          scene->advance({t & 1, false});
          pixels = scene->snapshot().draw(width)->atlas;
        }
        coverage.frame(pixels, width);
      }
      coverage.report(c.name, width);
      require(coverage.changed > 0, std::string(c.name) + " was never filtered");
    }
  }
}
void psi(const eb::GameAssets &assets) {
  // Test every authored animation, including every Flash/Starstorm tier and
  // both Thunder animation families. Tier action/target logic is separate.
  eb::native::BattleBackgroundScenes catalog(assets.image, assets.version);
  for (unsigned depth : {2u, 4u}) for (unsigned id = 0; id < 34; ++id) {
    unsigned background = 0;
    while (background < catalog.layers().size() &&
           catalog.layers().definition(background).bitdepth != depth) ++background;
    require(background < catalog.layers().size(), "Missing authored background depth");
    PsiSource source(assets);
    source.setup(id, background);
    std::array<Coverage, 3> coverage;
    constexpr std::array widths{256u, 398u, 522u};
    // Seed the empty PSI plane before the first authored frame is published.
    const auto initial = source.pixels(depth);
    for (unsigned i = 0; i < 3; ++i) coverage[i].frame(centered(initial, widths[i]), widths[i]);
    for (unsigned t = 0; t < 420; ++t) {
      source.call(source.advance); source.call(source.effects);
      source.transfer();
      const auto native = source.pixels(depth);
      for (unsigned i = 0; i < 3; ++i) coverage[i].frame(centered(native, widths[i]), widths[i]);
      if (!source.bus->work_ram[source.state] && t > 60) break;
    }
    for (unsigned i = 0; i < 3; ++i) {
      const auto name = [id]() -> std::string {
        switch (id) {
        case 10: return "PSI Flash alpha"; case 11: return "PSI Flash beta";
        case 12: return "PSI Flash gamma"; case 13: return "PSI Flash omega";
        case 30: return "PSI Starstorm alpha"; case 31: return "PSI Starstorm omega";
        case 32: return "PSI Thunder alpha/beta"; case 33: return "PSI Thunder gamma/omega";
        default: return "PSI " + std::to_string(id);
        }
      }();
      coverage[i].report(name + " depth=" + std::to_string(depth), widths[i]);
      if ((id >= 10 && id <= 13) || id >= 30) {
        require(coverage[i].changed > 0, "Required PSI animation was never filtered: " + std::to_string(id));
        if (i) require(coverage[i].first == coverage[0].first && coverage[i].dimmed == coverage[0].dimmed,
                       "Quiet widescreen margins changed native PSI trigger timing");
      }
    }
  }
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2) { std::cout << "Local asset packs required\n"; return 77; }
  try {
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US") << std::endl;
      status_flashes(assets); event_flashes(assets); backgrounds(assets); psi(assets);
      std::cout << "PASS " << (assets.version == eb::GameVersion::JP ? "JP" : "US")
                << ": named backgrounds, PSI, status routing and event flash mechanisms\n";
    }
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
