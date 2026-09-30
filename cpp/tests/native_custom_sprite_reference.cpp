// Source code and planar memory exist only in this asset oracle.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/custom_sprites.hpp"
#include "eb/overworld_sprite_draw.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool ok, const char *message) {
  if (!ok)
    throw std::runtime_error(message);
}
unsigned word(std::span<const std::uint8_t> data, unsigned at) {
  return data[at] | unsigned(data[at + 1]) << 8;
}
std::uint64_t callbacks(const eb::GameAssets &assets,
                        const eb::native::CustomSprites &sprites) {
  const bool jp = assets.version == eb::GameVersion::JP;
  auto source = std::make_unique<eb::SnesBus>(assets.image, assets.version);
  auto native = std::make_unique<eb::SnesBus>(assets.image, assets.version);
  native->enable_native_sprite_runtime(true);
  source->write_byte(0x2105, 1);
  native->write_byte(0x2105, 1);
  native->video_ram.fill(0xa5);
  const auto &profile = eb::source_profile(assets.version);
  eb::MainCpu65816 original(*source), candidate(*native);
  const auto put = [](eb::SnesBus &bus, unsigned at, unsigned v) {
    bus.work_ram.at(at) = v;
    bus.work_ram.at(at + 1) = v >> 8;
  };
  const auto word = [](const eb::SnesBus &bus, unsigned at) {
    return bus.work_ram.at(at) | unsigned(bus.work_ram.at(at + 1)) << 8;
  };
  eb::GameSceneRenderer renderer;
  std::uint64_t count = 0, opaque = 0;
  for (bool title : {false, true}) {
    const unsigned table =
        title ? (jp ? 0xe1ca4c : 0xe1cf9d) : (jp ? 0xefdee6 : 0xeff5bb);
    for (unsigned frame = 0; frame < (title ? (jp ? 7u : 9u) : 1u); ++frame)
      for (unsigned priority = 0; priority < 4; ++priority) {
        for (auto pair : {std::pair{source.get(), &original},
                          std::pair{native.get(), &candidate}}) {
          auto &bus = *pair.first;
          auto &cpu = *pair.second;
          cpu.set_runtime(eb::MainCpuRuntime::Legacy);
          cpu.emulation_mode = false;
          cpu.status_register = eb::MainCpu65816::InterruptDisable;
          cpu.data_bank = 0x7e;
          cpu.direct_page = 0x1d00;
          cpu.stack_pointer = 0x1fff;
          cpu.x_index = 0;
          cpu.accumulator = frame;
          put(bus, profile.wram_entity_spritemap_pointers.high, table >> 16);
          put(bus, profile.wram_entity_animation_frame, frame);
          put(bus, profile.wram_entity_world_coordinates.x, 128);
          put(bus, profile.wram_entity_world_coordinates.y, 112);
          put(bus, profile.wram_entity_draw_priority, priority);
          put(bus, cpu.direct_page + 0x88, 0);
          put(bus, cpu.direct_page + 0x8c, table);
          put(bus, cpu.direct_page + 0x8e, table >> 16);
        }
        candidate.program_counter = jp ? 0xc09b2c : 0xc09b4d;
        require(
            !native->native_sprite_runtime()->try_execute(candidate, *native),
            "Custom marker unexpectedly retired source instruction");
        renderer.begin_sprite_frame(1);
        for (auto *cpu : {&original, &candidate}) {
          cpu->program_counter = 0xc0ff00;
          cpu->execute_instruction<0x20>(jp ? 0xa0d9 : 0xa0fa, 3);
        }
        require(eb::try_native_sprite_draw(candidate, *native,
                                           *native->native_sprite_runtime(),
                                           renderer),
                "Native custom callback declined");
        unsigned steps = 0;
        while (original.program_counter != 0xc0ff03) {
          require(++steps < 1000, "Source custom callback did not return");
          original.step_instruction();
        }
        require(candidate.program_counter == original.program_counter &&
                    candidate.stack_pointer == original.stack_pointer &&
                    candidate.direct_page == original.direct_page &&
                    candidate.data_bank == original.data_bank &&
                    candidate.status_register == original.status_register,
                "Native custom callback changed source caller state");
        for (unsigned field : {jp ? 0x2800u : 0x2400u, 0x0bu, 0x1d96u})
          require(word(*native, field) == word(*source, field),
                  "Native custom callback changed semantic queue scratch");
        auto view = native->scene_read_view();
        view.object_scene = &renderer;
        renderer.seal_sprite_frame(view);
        renderer.capture_oam_upload(view, 1);
        renderer.begin_scanline(view, 0);
        const auto expected = sprites.frame(table, frame);
        for (unsigned y = 0; y < 224; ++y) {
          std::array<eb::PpuPixel, 256> row{};
          require(
              renderer.try_native_sprite_pixels(view, y, row, 0).has_value(),
              "Native custom art fell back to source OAM");
          for (unsigned x = 0; x < 256; ++x) {
            unsigned palette = 256;
            int depth = -1;
            for (const auto &part : expected) {
              const int px = int(x) - 128 - part.left,
                        py = int(y) - 111 - part.top;
              if (px < 0 || py < 0 || unsigned(px) >= part.pixels->width ||
                  unsigned(py) >= part.pixels->height)
                continue;
              const auto color =
                  part.pixels->indices[unsigned(py) * part.pixels->width +
                                       unsigned(px)];
              if (color) {
                palette = 128 + part.palette * 16 + color;
                const int priorities[] = {1, 3, 7, 10};
                depth = priorities[part.priority];
                break;
              }
            }
            require(row[x].palette_index == palette && row[x].priority == depth,
                    "Native custom callback raster differs from imported art");
            opaque += palette != 256;
          }
        }
        require(std::all_of(native->video_ram.begin(), native->video_ram.end(),
                            [](auto b) { return b == 0xa5; }),
                "Native custom callback modified source OBJ memory");
        ++count;
      }
  }
  require(opaque > 0, "Native custom callback coverage was vacuous");
  return count;
}
void verify(const eb::GameAssets &assets) {
  const bool jp = assets.version == eb::GameVersion::JP;
  eb::native::CustomSprites native(assets.image, assets.version);
  std::vector<std::uint8_t> memory(0x1000000);
  std::copy(assets.image.begin(), assets.image.end(),
            memory.begin() + 0xc00000);
  eb::MainCpu65816 cpu(memory, assets.version);
  cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  cpu.emulation_mode = false;
  cpu.status_register = eb::MainCpu65816::InterruptDisable;
  cpu.data_bank = 0;
  cpu.direct_page = 0x1e00;
  cpu.stack_pointer = 0x1fff;
  const auto put = [&](unsigned at, unsigned value) {
    memory.at(at) = value;
    memory.at(at + 1) = value >> 8;
  };
  put(0x1e0e, jp ? 0xbb01 : 0xc6e5);
  put(0x1e10, 0xe1);
  put(0x1e12, 0);
  put(0x1e14, 0x7f);
  cpu.program_counter = 0xc0ff00;
  cpu.execute_instruction<0x22>(jp ? 0xc419ea : 0xc41a9e, 4);
  unsigned steps = 0;
  while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
    require(++steps < 3000000, "Custom source DECOMP did not return");
    cpu.step_instruction();
  }
  std::uint64_t pixels = 0, parts = 0, frames = 0;
  for (bool title : {false, true}) {
    const unsigned table =
        title ? (jp ? 0xe1ca4c : 0xe1cf9d) : (jp ? 0xefdee6 : 0xeff5bb);
    const unsigned art = title ? 0x7f0000 : (jp ? 0xefd8e2 : 0xefefb7);
    for (unsigned frame = 0; frame < (title ? (jp ? 7u : 9u) : 1u); ++frame) {
      const auto actual = native.frame(table, frame);
      unsigned at = (table & 0xff0000) | word(memory, table + frame * 2),
               part = 0;
      for (;; at += 5, ++part) {
        require(part < actual.size(),
                "Custom native frame dropped an authored part");
        const auto &fragment = actual[part];
        const unsigned attributes = memory[at + 2], flags = memory[at + 4],
                       size = flags & 1 ? 16 : 8;
        require(fragment.left == std::int8_t(memory[at + 3]) &&
                    fragment.top == std::int8_t(memory[at]) &&
                    fragment.palette == ((attributes >> 1) & 7) &&
                    fragment.priority == ((attributes >> 4) & 3) &&
                    fragment.pixels->width == size &&
                    fragment.pixels->height == size,
                "Custom part metadata differs");
        const unsigned tile = memory[at + 1] | ((attributes & 1) << 8);
        for (unsigned y = 0; y < size; ++y)
          for (unsigned x = 0; x < size; ++x) {
            const unsigned sx = attributes & 0x40 ? size - 1 - x : x,
                           sy = attributes & 0x80 ? size - 1 - y : y;
            const unsigned selected = (tile & 0x100) |
                                      (((tile & 0xf0) + (sy / 8) * 16) & 0xf0) |
                                      ((tile + sx / 8) & 15);
            unsigned expected = 0;
            for (unsigned plane = 0; plane < 4; ++plane)
              expected |= ((memory[art + selected * 32 + (sy & 7) * 2 +
                                   (plane / 2) * 16 + (plane & 1)] >>
                            (7 - (sx & 7))) &
                           1)
                          << plane;
            require(fragment.pixels->indices[y * size + x] == expected,
                    "Custom indexed artwork differs from source DECOMP");
            ++pixels;
          }
        ++parts;
        if (flags & 0x80) {
          require(part + 1 == actual.size(),
                  "Custom native frame added a part");
          break;
        }
      }
      ++frames;
    }
  }
  std::cout << (jp ? "JP" : "US")
            << " PASS custom imported sprites: frames=" << frames
            << " parts=" << parts << " exact_source_pixels=" << pixels
            << " native_callbacks=" << callbacks(assets, native) << '\n';
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_custom_sprite_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
