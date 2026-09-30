// Original routines are linked only into this optional verification executable.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_palette_animation.hpp"
#include "eb/native/world_scene.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
std::uint32_t argb(unsigned value) {
  const auto byte = [](unsigned v) { return (v << 3) | (v >> 2); };
  return 0xff000000u | byte(value & 31) << 16 | byte((value >> 5) & 31) << 8 |
         byte((value >> 10) & 31);
}
struct Reference {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool jp;
  explicit Reference(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), jp(assets.version == eb::GameVersion::JP) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void call(unsigned target, bool near = false, unsigned a = 0,
            unsigned x = 0) {
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    if (near)
      cpu.execute_instruction<0x20>(target & 0xffff, 3);
    else
      cpu.execute_instruction<0x22>(target, 4);
    for (unsigned steps = 0; steps < 1000000; ++steps) {
      if (cpu.program_counter == (near ? 0xc0ff03 : 0xc0ff04) &&
          cpu.stack_pointer == 0x1fff)
        return;
      cpu.step_instruction();
    }
    throw std::runtime_error("Source palette animation did not return: " +
                             cpu.describe_registers());
  }
  AreaPalettes base(unsigned id) {
    AreaPalettes colors;
    colors.selected = {4, 1};
    colors.animation_id = id;
    for (unsigned p = 0; p < 16; ++p)
      for (unsigned i = 0; i < 16; ++i) {
        const unsigned value = ((p * 83 + i * 117) ^ 0x1357) & 0x7fff;
        put(0x200 + (p * 16 + i) * 2, value);
        if (p >= 2 && p < 8)
          colors.scenery[p - 2][i] = i ? argb(value) : 0;
        if (p >= 8)
          colors.sprites[p - 8][i] = i ? argb(value) : 0;
      }
    put(0x2a0, id);
    return colors;
  }
  void compare(const AreaPaletteAnimation &native) const {
    const auto &colors = native.colors();
    for (unsigned p = 0; p < 14; ++p)
      for (unsigned i = 1; i < 16; ++i) {
        const auto actual =
            p < 6 ? colors.scenery[p][i] : colors.sprites[p - 6][i];
        require(actual == argb(word(0x240 + (p * 16 + i) * 2)),
                "Source/native palette colors differ");
      }
    if (native.active()) {
      const unsigned state = jp ? 0x47e2 : 0x445c;
      require(native.ticks_until_change() == word(state) &&
                  native.next_frame_index() == word(state + 2),
              "Source/native palette timer/frame differs");
    }
  }
};
unsigned compare_rendered(const WorldMap &map, const Reference &reference,
                          const AreaPaletteAnimation &animation) {
  // Use the authored map combination associated with this animation track.
  constexpr std::array<unsigned, 8> combinations{26, 4, 26, 26, 27, 22, 29, 29};
  const unsigned group = combinations.at(animation.colors().animation_id - 1);
  const std::vector<std::uint8_t> flags(128);
  auto area = map.prepare(group, flags);
  auto colors = animation.colors();
  colors.selected.group = group;
  unsigned origin_x = 0, origin_y = 0;
  bool found = false;
  for (unsigned y = 0; y < 80 && !found; ++y)
    for (unsigned x = 0; x < 32 && !found; ++x)
      if (map.sector(x, y).combination == group) {
        origin_x = x * 256;
        origin_y = y * 128;
        found = true;
      }
  require(found, "Animated scenery test has no authored map sector");
  unsigned covered = 0;
  for (unsigned width : {256u, 398u, 522u}) {
    const WorldSceneView view{float(origin_x), float(origin_y), width, 0, 1, 1};
    const auto frame = draw_world_scene(area, colors, view);
    const auto pixels = eb::rasterize_direct_scene({frame, {}});
    for (unsigned y = 0; y < 224; ++y)
      for (unsigned x = 0; x < width; ++x) {
        int priority = -1;
        std::uint32_t expected = 0xff000000;
        for (const auto layer : {MapLayer::Base, MapLayer::Foreground}) {
          const auto pixel =
              area.pixel(int(origin_x) - int(width - 256) / 2 + int(x),
                         int(origin_y + y + 1), layer);
          if (!pixel.index)
            continue;
          require(pixel.palette >= 2 && pixel.palette < 8,
                  "Animated map uses an unported reserved palette");
          const int depth = layer == MapLayer::Base ? (pixel.priority ? 9 : 6)
                                                    : (pixel.priority ? 8 : 5);
          if (depth > priority) {
            expected = argb(
                reference.word(0x200 + (pixel.palette * 16 + pixel.index) * 2));
            priority = depth;
          }
        }
        require(pixels[y * width + x] == expected,
                "Native animated scenery pixel differs from source palette "
                "publication");
      }
    ++covered;
  }
  return covered;
}
void verify(const eb::GameAssets &assets) {
  WorldPaletteAnimations native(assets.image,
                                world_palette_animation_layout(assets.version));
  WorldPalettes palettes(assets.image, world_palette_layout(assets.version));
  Reference reference(assets);
  const WorldMap map(assets.image, world_map_layout(assets.version));
  unsigned rendered_views = 0;
  unsigned updates = 0, publications = 0, pixels = 0, active = 0;
  for (unsigned id = 0; id <= native.size(); ++id) {
    auto colors = reference.base(id);
    reference.call(0xc0023f, true);
    auto state = native.prepare(colors);
    require(state.active() ==
                (reference.word(reference.jp ? 0x47fa : 0x4474) != 0),
            "Source/native animation load gate differs");
    reference.compare(state);
    if (state.active()) {
      ++active;
      const auto &track = native.track(id);
      const unsigned control = reference.jp ? 0x47e2 : 0x445c;
      for (unsigned f = 0; f < track.frames.size(); ++f) {
        require(track.frames[f].delay == reference.word(control + 4 + f * 2),
                "Imported source frame delay differs");
        for (unsigned p = 0; p < 6; ++p)
          for (unsigned i = 1; i < 16; ++i) {
            require(
                track.frames[f].scenery[p][i] ==
                    argb(reference.word(0xb800 + f * 192 + (p * 16 + i) * 2)),
                "Native decoded frame differs from source DECOMP");
            ++pixels;
          }
      }
    }
    // Several wraps of all authored tracks, including long/unequal delays.
    bool rendered = false;
    for (unsigned tick = 0; tick < 600; ++tick) {
      reference.bus->work_ram[0x30] = 0;
      if (state.active())
        reference.call(reference.jp ? 0xc00317 : 0xc0030f);
      const bool changed = state.advance();
      require(changed == (reference.bus->work_ram[0x30] != 0),
              "Native publication tick differs from source upload request");
      reference.compare(state);
      if (changed && !rendered) {
        rendered_views += compare_rendered(map, reference, state);
        rendered = true;
      }
      ++updates;
      publications += changed;
    }
  }
  require(active == 8 && publications > 300,
          "Palette animation coverage was vacuous");
  // The selector belongs to the resolved event branch, not the requested
  // group's nominal record. Read the actual LOAD_MAP_PAL result for all areas.
  unsigned resolutions = 0;
  std::vector<std::uint8_t> flags(128);
  for (unsigned pattern : {0u, 255u, 85u, 170u}) {
    std::fill(flags.begin(), flags.end(), pattern);
    std::copy(flags.begin(), flags.end(),
              reference.bus->work_ram.begin() +
                  (reference.jp ? 0x9eb3 : 0x9c08));
    for (unsigned group = 0; group < 32; ++group)
      for (unsigned variant = 0; variant < palettes.variants(group);
           ++variant) {
        reference.call(reference.jp ? 0xc007c6 : 0xc007b6, false, group,
                       variant);
        const auto colors = palettes.resolve({group, variant}, flags);
        require(colors.animation_id == reference.word(0x2a0),
                "Resolved area's animation selector differs");
        native.prepare(colors);
        ++resolutions;
      }
  }
  std::cout << "PASS " << assets.title << ": tracks=31 active=" << active
            << " decoded_colors=" << pixels << " ticks=" << updates
            << " publications=" << publications
            << " resolved_selectors=" << resolutions
            << " rendered_views=" << rendered_views
            << "; exact source load/timer/frame/scenery and unchanged sprite "
               "palettes\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_palette_animation_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
