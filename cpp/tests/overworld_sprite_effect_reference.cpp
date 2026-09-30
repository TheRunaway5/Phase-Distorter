// Optional actual-call adapter oracle. Only the reference may touch the source
// graphics allocator, planar scratch canvas, or object VRAM. Both sides execute
// the authored fade scheduler, including its control records and random phase.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>
#include <string>

namespace {
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
struct Fixture {
  std::unique_ptr<eb::SnesBus> hardware;
  eb::SnesBus &bus;
  eb::MainCpu65816 cpu;
  bool jp, native;
  unsigned first, free_actor, free_task, next_actor, next_task, scripts;
  unsigned direction, animation, surface, second, update, fade_actor, count,
      records;
  unsigned create_pc, four_pc, eight_pc, init_pc, show_pc, rows_pc, columns_pc,
      dissolve_pc, reset_dissolve_pc;
  unsigned map_pool, graphics_pool;
  Fixture(const eb::GameAssets &assets, bool enable)
      : hardware(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        bus(*hardware), cpu(bus), jp(assets.version == eb::GameVersion::JP),
        native(enable) {
    first = jp ? 0xa46 : 0xa50;
    free_actor = jp ? 0xa48 : 0xa52;
    free_task = jp ? 0xa4a : 0xa54;
    next_actor = jp ? 0xa94 : 0xa9e;
    next_task = jp ? 0x1250 : 0x125a;
    scripts = jp ? 0xa58 : 0xa62;
    direction = jp ? 0x2ef4 : 0x2af6;
    animation = jp ? 0x10e8 : 0x10f2;
    surface = jp ? 0x2fa8 : 0x2baa;
    second = jp ? 0x2c90 : 0x2892;
    update = jp ? 0x2c94 : 0x2896;
    fade_actor = jp ? 0xb67c : 0xb4a8;
    count = jp ? 0xb67a : 0xb4a6;
    records = jp ? 0xb67e : 0xb4aa;
    create_pc = jp ? 0xc01e5f : 0xc01e49;
    four_pc = jp ? 0xc0a4a3 : 0xc0a4c4;
    eight_pc = jp ? 0xc0a773 : 0xc0a794;
    init_pc = jp ? 0xc49bea : 0xc4c91a;
    show_pc = jp ? 0xc49e1f : 0xc4cb4f;
    rows_pc = jp ? 0xc49eff : 0xc4cc2f;
    columns_pc = jp ? 0xc4a014 : 0xc4cd44;
    dissolve_pc = jp ? 0xc4a1a8 : 0xc4ced8;
    reset_dissolve_pc = jp ? 0xc4a180 : 0xc4ceb0;
    map_pool = jp ? 0x4a04 : 0x467e;
    graphics_pool = jp ? 0x4d86 : 0x4a00;
    if (native)
      bus.enable_native_sprite_runtime(true);
    std::fill_n(bus.work_ram.begin() + map_pool, 0x380, native ? 0xa5 : 0xff);
    std::fill_n(bus.work_ram.begin() + graphics_pool, 88, native ? 0xff : 0);
    bus.work_ram[0x0d] = 0x80;
    bus.video_ram.fill(0);
    if (native) {
      std::fill(bus.work_ram.begin() + 0x10000, bus.work_ram.begin() + 0x17c00,
                0xa5);
      auto guard = [this](unsigned at, std::uint8_t value) {
        if ((at >= map_pool && at < map_pool + 0x380) ||
            (at >= graphics_pool && at < graphics_pool + 88) ||
            (at >= 0x10000 && at < 0x17c00))
          throw std::runtime_error(
              "Native fade accessed source graphics storage at " +
              std::to_string(at) + ": " + cpu.describe_registers());
        return value;
      };
      bus.debug_read_wram = guard;
      bus.debug_write_wram = guard;
    }
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    prepare();
    put(first, 0xffff);
    put(free_actor, 0);
    put(free_task, 0);
    put(fade_actor, 0xffff);
    for (unsigned slot = 0; slot < 30; ++slot) {
      put(next_actor + slot * 2, slot == 29 ? 0xffff : slot * 2 + 2);
      put(scripts + slot * 2, 0xffff);
    }
    for (unsigned task = 0; task < 70; ++task)
      put(next_task + task * 2, task == 69 ? 0xffff : task * 2 + 2);
  }
  void prepare() {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
  }
  void put(unsigned at, unsigned value) {
    bus.work_ram.at(at) = value;
    bus.work_ram.at(at + 1) = value >> 8;
  }
  unsigned get(unsigned at) const {
    return bus.work_ram.at(at) | unsigned(bus.work_ram.at(at + 1)) << 8;
  }
  unsigned call(unsigned entry, bool far = true) {
    const auto end = (entry & 0xff0000) | 0xff00;
    cpu.program_counter = end;
    if (far)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 0xffff, 3);
    for (unsigned steps = 0; steps < 500000; ++steps) {
      if (cpu.program_counter == end + (far ? 4 : 3) &&
          cpu.stack_pointer == 0x1fff)
        return cpu.accumulator;
      cpu.step_instruction();
    }
    throw std::runtime_error("Fade service failed to return: " +
                             cpu.describe_registers());
  }
  void create(unsigned group, unsigned actor, unsigned facing,
              unsigned flags = 8) {
    cpu.accumulator = group;
    cpu.x_index = 1;
    cpu.y_index = actor;
    put(0x1e0e, 100);
    put(0x1e10, 100);
    require(call(create_pc) == actor, "Fade CREATE changed logical actor slot");
    put(direction + actor * 2, facing);
    put(animation + actor * 2, 0);
    put(surface + actor * 2, flags);
    put(second, 0);
    put(update, actor * 2);
    cpu.y_index = actor * 2;
    call(actor >= 24 ? eight_pc : four_pc, actor < 24);
  }
  void fade(unsigned actor, unsigned kind) {
    cpu.accumulator = actor;
    cpu.x_index = kind;
    call(init_pc);
  }
  unsigned record_at(unsigned ordinal = 0) const {
    return (get(records) | (get(records + 2) << 16)) - 0x7e0000 + ordinal * 20;
  }
};
struct Counts {
  std::uint64_t cases{}, ticks{}, pixels{}, copy_cases{};
};
void compare_controls(const Fixture &reference, const Fixture &candidate) {
  require(reference.get(reference.count) == candidate.get(candidate.count),
          "Fade record count diverged");
  require(reference.get(reference.fade_actor) ==
              candidate.get(candidate.fade_actor),
          "Fade scheduling actor diverged");
  const auto length = reference.get(reference.count) * 20;
  for (unsigned i = 0; i < length; ++i)
    if (reference.bus.work_ram.at(reference.record_at() + i) !=
        candidate.bus.work_ram.at(candidate.record_at() + i))
      throw std::runtime_error("Fade control record diverged at byte " +
                               std::to_string(i));
}
void compare_pixels(const Fixture &reference, const Fixture &candidate,
                    unsigned actor, Counts &counts) {
  unsigned record = reference.record_at();
  while (reference.get(record) != actor)
    record += 20;
  const auto width = candidate.bus.native_sprite_runtime()
                         ->snapshot(actor * 2)
                         ->creation.sprite.width,
             height = reference.get(record + 8),
             target = reference.get(record + 12);
  const auto image =
      candidate.bus.native_sprite_runtime()->snapshot(actor * 2)->image;
  require(image && image->canvas, "Fade did not publish host indexed artwork");
  const auto displayed = eb::source_profile(reference.jp ? eb::GameVersion::JP
                                                         : eb::GameVersion::US)
                             .wram_entity_displayed_sprites;
  const auto &display_parts =
      image->layout->parts[reference.get(displayed + actor * 2) & 1];
  require(image->parts.size() == display_parts.size(),
          "Fade displayed part count differs");
  const auto columns = image->layout->canvas_width / 16;
  for (unsigned p = 0; p < display_parts.size(); ++p) {
    const auto &expected = display_parts[p];
    require(image->parts[p].left == expected.left &&
                image->parts[p].top == expected.top,
            "Fade used selected pose position instead of retained displayed "
            "geometry");
    for (unsigned y = 0; y < 16; ++y)
      for (unsigned x = 0; x < 16; ++x) {
        const unsigned sx = (p % columns) * 16 + (expected.flip_x ? 15 - x : x);
        const unsigned sy = (p / columns) * 16 + (expected.flip_y ? 15 - y : y);
        const unsigned expected_pixel =
            sy < image->layout->canvas_height
                ? image->canvas->at(sy * image->layout->canvas_width + sx)
                : 0;
        require(image->parts[p].indices[y * 16 + x] == expected_pixel,
                "Fade used selected pose flip instead of retained displayed "
                "geometry");
      }
  }
  const auto &pixels = *image->canvas;
  for (unsigned y = 0; y < height; ++y)
    for (unsigned x = 0; x < width; ++x) {
      const auto tile = (y / 8) * (width / 8) + x / 8;
      const auto row = 0x10000 + target + tile * 32 + (y & 7) * 2;
      unsigned value = 0;
      for (unsigned bit = 0; bit < 4; ++bit)
        value |=
            ((reference.bus.work_ram.at(row + (bit / 2) * 16 + (bit & 1)) >>
              (7 - (x & 7))) &
             1)
            << bit;
      const auto actual =
          pixels.at((y + (height & 15)) * image->layout->canvas_width + x);
      if (value != actual)
        throw std::runtime_error("Fade native pixel mismatch at " +
                                 std::to_string(x) + "," + std::to_string(y) +
                                 " expected " + std::to_string(value) +
                                 " got " + std::to_string(actual));
      ++counts.pixels;
    }
  require(std::all_of(candidate.bus.video_ram.begin(),
                      candidate.bus.video_ram.end(),
                      [](auto v) { return v == 0; }),
          "Native fade wrote object VRAM");
}
void verify(const eb::GameAssets &assets) {
  Counts counts;
  auto resources = std::make_shared<eb::native::SpriteResources>(
      assets.image, eb::native::sprite_catalog_layout(assets.version));
  std::set<std::pair<unsigned, unsigned>> dimensions;
  for (unsigned group = 0; group < resources->size(); ++group) {
    const auto &shape = resources->definition(group);
    if (!shape.width || !shape.height ||
        !dimensions.emplace(shape.width, shape.height).second)
      continue;
    for (unsigned actor : {0u, 24u})
      for (unsigned kind : {3u, 4u, 5u, 8u, 9u, 10u}) {
        Fixture reference(assets, false), candidate(assets, true);
        for (auto *fixture : {&reference, &candidate}) {
          fixture->create(group, actor, 0);
          fixture->fade(actor, kind);
          fixture->call(fixture->show_pc);
          if (kind == 5 || kind == 10)
            fixture->call(fixture->reset_dissolve_pc);
        }
        compare_controls(reference, candidate);
        const unsigned steps = (kind == 3 || kind == 8) ? shape.height
                               : (kind == 4 || kind == 9)
                                   ? reference.get(reference.record_at() + 6)
                                   : 64;
        const auto entry = [kind](const Fixture &f) {
          return (kind == 3 || kind == 8)   ? f.rows_pc
                 : (kind == 4 || kind == 9) ? f.columns_pc
                                            : f.dissolve_pc;
        };
        for (unsigned tick = 0; tick < steps; ++tick) {
          const auto expected = reference.call(entry(reference)),
                     actual = candidate.call(entry(candidate));
          if (kind != 5 && kind != 10)
            require(expected == actual, "Fade completion predicate diverged");
          compare_controls(reference, candidate);
          compare_pixels(reference, candidate, actor, counts);
          ++counts.ticks;
          if (tick == 0) {
            auto copied = std::make_unique<eb::SnesBus>(candidate.bus);
            const auto retained =
                copied->native_sprite_runtime()->snapshot(actor * 2)->image;
            const auto old_pixels = *retained->canvas;
            const auto prior =
                candidate.bus.native_sprite_effects()->diagnostics();
            // A real subsequent scheduler tick modifies only this copy's
            // fade canvas, and publishes only in this copy's runtime.
            eb::MainCpu65816 cpu(*copied);
            cpu.set_runtime(eb::MainCpuRuntime::Legacy);
            cpu.emulation_mode = false;
            cpu.status_register = eb::MainCpu65816::InterruptDisable;
            cpu.data_bank = 0x7e;
            cpu.direct_page = 0x1e00;
            cpu.stack_pointer = 0x1fff;
            cpu.program_counter = 0xc0ff00;
            cpu.execute_instruction<0x22>(entry(candidate), 4);
            unsigned n = 0;
            while (cpu.program_counter != 0xc0ff04 ||
                   cpu.stack_pointer != 0x1fff) {
              require(++n < 500000, "Copied fade did not return");
              cpu.step_instruction();
            }
            require(*retained->canvas == old_pixels,
                    "Fade mutated a retained immutable image");
            require(*candidate.bus.native_sprite_runtime()
                            ->snapshot(actor * 2)
                            ->image->canvas == old_pixels,
                    "Copied bus fade changed original artwork");
            require(
                candidate.bus.native_sprite_effects()->diagnostics().uploads ==
                    prior.uploads,
                "Copied fade modified original service state");
            require(copied->native_sprite_effects()->diagnostics().uploads ==
                        prior.uploads + 1,
                    "Copied fade did not own its next update");
            ++counts.copy_cases;
          }
        }
        if (kind != 5 && kind != 10) {
          require(reference.call(entry(reference)) == 0 &&
                      candidate.call(entry(candidate)) == 0,
                  "Fade failed to terminate after complete pass");
          compare_controls(reference, candidate);
        }
        const auto stats = candidate.bus.native_sprite_effects()->diagnostics();
        require(stats.seeds == 1 && stats.clears == 1 && stats.uploads == steps,
                "Native fade helper coverage was vacuous");
        require((kind == 3 || kind == 8) ? stats.rows == steps
                : (kind == 4 || kind == 9)
                    ? stats.columns == steps
                    : stats.pixels ==
                          steps * reference.get(reference.record_at() + 6) *
                              shape.height / 64,
                "Native fade patch coverage was incomplete");
        ++counts.cases;
      }
  }
  // A fully submerged selection can be mirrored while the displayed source
  // geometry still faces the old way. Mutable publication must use that latch.
  bool retained_orientation = false;
  for (unsigned group = 0; group < resources->size() && !retained_orientation;
       ++group) {
    const auto &shape = resources->definition(group);
    if (!shape.height || shape.height > 16)
      continue;
    std::optional<unsigned> normal, mirrored;
    for (unsigned direction : {0u, 2u, 4u, 6u}) {
      const auto pose = eb::native::four_direction_pose(direction, 0);
      if (pose >= shape.frames)
        continue;
      const auto image = resources->acquire(group, pose);
      if (image->authored_mirror)
        mirrored = direction;
      else
        normal = direction;
    }
    if (!normal || !mirrored)
      continue;
    Fixture reference(assets, false), candidate(assets, true);
    const auto displayed =
        eb::source_profile(assets.version).wram_entity_displayed_sprites;
    for (auto *fixture : {&reference, &candidate}) {
      fixture->create(group, 0, *normal, 0);
      const auto old_displayed = fixture->get(displayed);
      fixture->put(fixture->direction, *mirrored);
      fixture->put(fixture->surface, 12);
      fixture->cpu.y_index = 0;
      fixture->call(fixture->four_pc);
      require(fixture->get(displayed) == old_displayed,
              "Blank pose changed source displayed latch");
    }
    const auto selected =
        candidate.bus.native_sprite_runtime()->snapshot(0)->image;
    require(
        selected->authored_mirror &&
            std::all_of(selected->canvas->begin(), selected->canvas->end(),
                        [](auto p) { return p == 0; }),
        "Retained-orientation fixture did not select a mirrored blank image");
    for (auto *fixture : {&reference, &candidate}) {
      fixture->fade(0, 3);
      fixture->call(fixture->show_pc);
      fixture->call(fixture->rows_pc);
    }
    compare_controls(reference, candidate);
    compare_pixels(reference, candidate, 0, counts);
    retained_orientation = true;
  }
  require(retained_orientation,
          "Missing retained displayed-orientation fixture");
  require(counts.cases && counts.ticks && counts.pixels && counts.copy_cases,
          "Empty native fade adapter test");
  std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << " PASS live native sprite effects: cases=" << counts.cases
            << " scheduler_ticks=" << counts.ticks
            << " exact_pixels=" << counts.pixels
            << " copied_pending_fades=" << counts.copy_cases << '\n';
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "overworld_sprite_effect_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
