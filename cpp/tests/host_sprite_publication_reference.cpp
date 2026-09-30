// Opt-in source oracle for artwork visibility. Source allocation alone is
// intercepted; the real loaders, queued/immediate transfers, OAM emitter and
// NMI drain execute through the production bus/bridge integration.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool yes, const std::string &message) {
  if (!yes)
    throw std::runtime_error(message);
}
struct Layout {
  unsigned create, graphics_allocator, map_allocator, first, free_actor,
      free_task, next_actor, next_task, map, direction, second, animation,
      surface, update, four, eight, clear, emit, draw, seal;
};
constexpr Layout us{0xc01e49, 0xc01c52, 0xc01a9d, 0xa50,    0xa52,
                    0xa54,    0xa9e,    0x125a,   0x112e,   0x2af6,
                    0x2892,   0x10f2,   0x2baa,   0x2896,   0xc0a4c4,
                    0xc0a794, 0xc088b1, 0xc08cd5, 0xc0a3a4, 0xc08b83};
constexpr Layout jp{0xc01e5f, 0xc01c68, 0xc01ab3, 0xa46,    0xa48,
                    0xa4a,    0xa94,    0x1250,   0x1124,   0x2ef4,
                    0x2c90,   0x10e8,   0x2fa8,   0x2c94,   0xc0a4a3,
                    0xc0a773, 0xc088a3, 0xc08cc6, 0xc0a383, 0xc08b74};
unsigned word(const eb::SnesBus &bus, unsigned at) {
  return bus.work_ram[at] | unsigned(bus.work_ram[at + 1]) << 8;
}
void word(eb::SnesBus &bus, unsigned at, unsigned value) {
  bus.work_ram[at] = value;
  bus.work_ram[at + 1] = value >> 8;
}
void registers(eb::MainCpu65816 &cpu) {
  cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  cpu.emulation_mode = false;
  cpu.status_register = eb::MainCpu65816::InterruptDisable;
  cpu.data_bank = 0x7e;
  cpu.direct_page = 0x1e00;
  cpu.stack_pointer = 0x1fff;
  cpu.program_counter = 0xc0ff00;
}
// Read indexed pixels directly from the actual source OAM/VRAM, independently
// of SpriteResources, SpriteArtwork and the renderer's host-image selection.
unsigned source_pixel(const eb::SnesBus &bus, unsigned oam, unsigned x,
                      unsigned y) {
  const auto tile = bus.object_attributes[oam * 4 + 2];
  const auto attr = bus.object_attributes[oam * 4 + 3];
  const unsigned sx = attr & 0x40 ? 15 - x : x, sy = attr & 0x80 ? 15 - y : y;
  const unsigned t =
      (((tile & 0xf0) + (sy / 8) * 16) & 0xf0) | ((tile + sx / 8) & 15);
  const unsigned at = 0x8000 + ((attr & 1) ? 8192 : 0) + t * 32 + (sy & 7) * 2;
  unsigned color = 0;
  for (unsigned plane = 0; plane < 4; ++plane)
    color |= ((bus.video_ram[(at + (plane / 2) * 16 + (plane & 1)) & 0xffff] >>
               (7 - (sx & 7))) &
              1)
             << plane;
  return color;
}
struct Fixture {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Layout l;
  unsigned allocation{}, parts{}, group{};
  std::uint64_t generation{};
  std::size_t checks{}, committed_commands{}, partial_frames{};
  std::function<void()> after_step;
  explicit Fixture(const eb::GameAssets &assets, unsigned sprite,
                   unsigned block)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), l(assets.version == eb::GameVersion::JP ? jp : us),
        allocation(block), group(sprite) {
    bus->enable_host_sprite_resources(true);
    registers(cpu);
    word(*bus, l.first, 0xffff);
    word(*bus, l.free_actor, 0);
    word(*bus, l.next_actor, 0xffff);
    word(*bus, l.free_task, 0);
    word(*bus, l.next_task, 0xffff);
    word(*bus, 0x1e0e, 128);
    word(*bus, 0x1e10, 112);
    call(l.create, true, sprite, 1, 0);
    require(bus->host_sprites()->diagnostics().creations == 1,
            "Source actor creation not observed");
    word(*bus, 0x1e88, 0);
    word(*bus, l.update, 0);
    // No gameplay IRQ callback or sound commands are scheduled in this
    // graphics fixture; NMI's original graphics work remains untouched.
    bus->work_ram[0x22] = 1;
    bus->write_byte(0x2101,
                    0x62); // Object base $4000 words, 16x16 small pieces.
    bus->write_byte(0x2105, 1);
    bus->write_byte(0x2107, 0x39);
    bus->write_byte(0x2108, 0x59);
    bus->set_presentation_width(320);
    bus->write_byte(0x212c, 16);
    bus->work_ram[0x19] = 16;
  }
  void step() {
    if (cpu.program_counter == l.graphics_allocator ||
        cpu.program_counter == l.map_allocator) {
      cpu.accumulator =
          cpu.program_counter == l.graphics_allocator ? allocation : 0;
      cpu.execute_instruction<0x6b>(0, 1);
    } else
      cpu.step_instruction();
    if (after_step)
      after_step();
  }
  void call(unsigned address, bool far, unsigned a = 0, unsigned x = 0,
            unsigned y = 0) {
    const unsigned trampoline = (address & 0xff0000) | 0xff00;
    const unsigned stack = cpu.stack_pointer;
    cpu.program_counter = trampoline;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    if (far)
      cpu.execute_instruction<0x22>(address, 4);
    else
      cpu.execute_instruction<0x20>(address & 0xffff, 3);
    unsigned steps = 0;
    while (cpu.program_counter != trampoline + (far ? 4 : 3) ||
           cpu.stack_pointer != stack) {
      require(++steps < 200000,
              "Source graphics call stalled: " + cpu.describe_registers());
      step();
    }
  }
  void load(bool immediate, bool eight, unsigned direction, unsigned phase,
            unsigned surface) {
    bus->work_ram[0x0d] = immediate ? 0x80 : 0;
    word(*bus, l.direction, direction);
    word(*bus, l.second, phase);
    word(*bus, l.animation, phase * 2);
    word(*bus, l.surface, surface);
    call(eight ? l.eight : l.four, !eight);
  }
  static void nmi(eb::SnesBus &bus, eb::MainCpu65816 &cpu,
                  const std::function<void()> &after = {}) {
    const auto pc = cpu.program_counter;
    const auto stack = cpu.stack_pointer;
    cpu.service_interrupt(true);
    unsigned steps = 0;
    while (cpu.program_counter != pc || cpu.stack_pointer != stack) {
      require(++steps < 200000,
              "Source NMI did not return: " + cpu.describe_registers());
      cpu.step_instruction();
      if (after)
        after();
    }
    require(bus.work_ram[0] == bus.work_ram[1],
            "Source NMI did not drain queued artwork");
  }
  void publish() {
    const auto &s = eb::source_profile(bus->game_version());
    const auto &pose = bus->host_sprites()->pose(0);
    require(pose.has_value(), "Initial ordinary pose missing");
    generation = pose->generation;
    parts = pose->image->parts.size();
    word(*bus, s.wram_entity_screen_coordinates.x, 128);
    word(*bus, s.wram_entity_screen_coordinates.y, 112);
    word(*bus, s.wram_entity_draw_callback,
         s.entity_draw_callbacks.screen_space);
    word(*bus, s.wram_entity_animation_frame, 0);
    word(*bus, s.wram_entity_draw_priority, 1);
    word(*bus, 0x2e, 1);
    call(l.clear, true);
    const unsigned map =
        word(*bus, l.map) + ((word(*bus, s.wram_entity_displayed_sprites) & 1)
                                 ? word(*bus, s.wram_entity_spritemap_sizes)
                                 : 0);
    // Source draw preparation normally updates priority bits before the
    // emitter. Configure those bits here; ownership is captured explicitly.
    for (unsigned part = 0; part < parts; ++part)
      bus->work_ram[map + part * 5 + 2] =
          (bus->work_ram[map + part * 5 + 2] & 0xcf) | 0x30;
    bus->capture_game_sprite_instruction(l.draw, 0, 0, 0, cpu.stack_pointer,
                                         cpu.direct_page);
    word(*bus, 0x0b, 0x7e);
    call(l.emit, true, map, 128, 112);
    // All imported ordinary parts in these fixtures are small, positive-X
    // objects. The unfinished high-table byte therefore contains zero bits.
    std::fill_n(bus->work_ram.begin() + 0x700, 32, 0);
    bus->capture_game_sprite_instruction(l.seal, 1, 0, 0, cpu.stack_pointer,
                                         cpu.direct_page);
    bus->work_ram[0x2c] = 1;
    nmi(*bus, cpu);
    // A manually invoked fixture NMI may occur during visible output.
    // Uploaded OAM ownership latches with the next complete picture.
    const auto frame = bus->completed_frames;
    while (bus->completed_frames == frame)
      bus->advance_cpu_cycles(460);
    check(*bus, "initial OAM publication");
  }
  std::vector<std::uint8_t> check(eb::SnesBus &candidate,
                                  const std::string &stage) {
    // Refresh retained OAM images at a real scanline boundary, without
    // another OAM upload or re-reading actor draw descriptors.
    do {
      candidate.advance_cpu_cycles(460);
    } while (candidate.scanline_index() < 2 ||
             candidate.scanline_index() >= 225);
    const auto view = candidate.scene_read_view();
    std::vector<std::uint8_t> pixels;
    for (unsigned part = 0; part < parts; ++part) {
      const unsigned at = part * 4;
      const unsigned extra =
          (candidate.object_attributes[512 + part / 4] >> ((part & 3) * 2)) & 3;
      const int x = candidate.object_attributes[at] - ((extra & 1) ? 256 : 0);
      const int y = candidate.object_attributes[at + 1];
      const auto host = view.object_scene->host_oam_part(
          x, y, candidate.object_attributes[at + 2],
          candidate.object_attributes[at + 3], bool(extra & 2), part);
      if (!host) {
        const auto d = view.object_scene->sprite_snapshot_diagnostics();
        std::cerr << "host missing x=" << x << " y=" << y
                  << " tile=" << unsigned(candidate.object_attributes[at + 2])
                  << " attr=" << unsigned(candidate.object_attributes[at + 3])
                  << " large=" << (extra >> 1) << " builds=" << d.builds
                  << " draw=" << d.queued_draws << " emit=" << d.emit_calls
                  << " match=" << d.matched_draws << " host=" << d.host_parts
                  << " upload=" << d.uploads << " geom="
                  << view.object_scene->host_sprite_geometry_mismatches()
                  << " line=" << candidate.scanline_index() << " revision="
                  << candidate.host_sprites()->artwork_revision() << '\n';
      }
      require(host.has_value(), stage +
                                    ": host OAM ownership missing at part " +
                                    std::to_string(part));
      for (unsigned y = 0; y < 16; ++y)
        for (unsigned x = 0; x < 16; ++x) {
          const auto actual = host->indices[y * 16 + x];
          const auto expected = source_pixel(candidate, part, x, y);
          if (actual != expected) {
            auto ci = candidate.host_sprites()->committed_image(
                generation, eb::native::SpriteOrientation::Normal);
            const auto d = candidate.host_sprites()->diagnostics();
            std::cerr << "revision="
                      << candidate.host_sprites()->artwork_revision()
                      << " queued=" << d.queued_patches
                      << " committed=" << d.committed_patches
                      << " line=" << candidate.scanline_index()
                      << " host generation=" << host->generation
                      << " expected generation=" << generation
                      << " width=" << candidate.presentation_width()
                      << " frame=" << candidate.completed_frames
                      << " direct committed="
                      << (ci ? unsigned(ci->parts[part].indices[y * 16 + x])
                             : 99)
                      << '\n';
          }
          require(actual == expected,
                  stage + ": group=" + std::to_string(group) +
                      " part=" + std::to_string(part) +
                      " pixel=" + std::to_string(x) + "," + std::to_string(y) +
                      " host=" + std::to_string(actual) +
                      " source=" + std::to_string(expected));
          pixels.push_back(actual);
        }
    }
    checks += pixels.size();
    return pixels;
  }
  void drain_checked(const std::string &stage) {
    auto revision = bus->host_sprites()->artwork_revision();
    const auto oam = bus->object_attributes;
    nmi(*bus, cpu, [&] {
      const auto next = bus->host_sprites()->artwork_revision();
      if (next != revision) {
        revision = next;
        ++committed_commands;
        check(*bus, stage);
      }
    });
    require(bus->object_attributes == oam,
            "Artwork-only NMI replaced older OAM");
    check(*bus, stage + " complete");
  }
};

struct Coverage {
  std::size_t pixels{};
  unsigned cases{}, partial_images{}, split_rows{}, zero_commands{},
      fully_submerged{};
};
void exercise(const eb::GameAssets &assets, unsigned group, unsigned block,
              bool eight, unsigned surface, Coverage &coverage) {
  Fixture f(assets, group, block);
  f.load(true, eight, 0, 0, 0);
  f.publish();
  const auto before = f.check(*f.bus, "baseline");
  const auto old_oam = f.bus->object_attributes;
  const auto revision = f.bus->host_sprites()->artwork_revision();
  // A coherent empty queue at its final ring slot forces real wrap-around.
  f.bus->work_ram[0] = f.bus->work_ram[1] = 248;
  const unsigned queued_start = f.bus->work_ram[0];
  f.load(false, eight, 6, 1, surface);
  require(f.bus->work_ram[0] != f.bus->work_ram[1],
          "Queued fixture produced no DMA commands");
  require(f.bus->host_sprites()->diagnostics().queued_patches > 0,
          "Queued source commands had no host patch ownership");
  const unsigned commands =
      std::uint8_t(f.bus->work_ram[0] - f.bus->work_ram[1]) / 8;
  unsigned zero_commands = 0;
  for (unsigned command = 0; command < commands; ++command)
    zero_commands +=
        f.bus->work_ram[0x400 + ((queued_start + command * 8) & 255)] == 3;
  coverage.zero_commands += zero_commands;
  const unsigned tile_rows =
      word(*f.bus, assets.version == eb::GameVersion::JP ? 0x2eb8 : 0x2aba);
  if (block == 7) {
    require(commands > tile_rows,
            "Wide fixture did not exercise physical row splitting");
    coverage.split_rows += commands - tile_rows;
  }
  require(f.bus->host_sprites()->artwork_revision() == revision,
          "Queuing a pose exposed artwork before its DMA executed");
  require(f.check(*f.bus, "queued, not committed") == before,
          "Pending pose changed old OAM pixels");

  // Both pending command ownership and committed tiles are independent after
  // copying a bus. The second copy deliberately keeps the old OAM as well.
  auto copy = std::make_unique<eb::SnesBus>(*f.bus);
  eb::MainCpu65816 copy_cpu(*copy);
  registers(copy_cpu);
  Fixture::nmi(*copy, copy_cpu);
  const auto copied = f.check(*copy, "copied queue committed");
  require(copy->host_sprites()->artwork_revision() > revision,
          "Copied queue lost its native artwork jobs");
  require(f.bus->host_sprites()->artwork_revision() == revision &&
              f.check(*f.bus, "original queue still pending") == before,
          "Bus copy committed artwork into the original bridge");
  f.drain_checked("queued command boundary");
  const auto after = f.check(*f.bus, "all queued commands committed");
  require(after == copied && f.committed_commands > 0,
          "Original and copied queues committed differently");
  require(
      after != before,
      "Fixture artwork did not visibly change; publication proof is vacuous");
  if (tile_rows == 2 && surface == 12 && zero_commands) {
    require(
        zero_commands == commands &&
            std::all_of(after.begin(), after.end(),
                        [](auto color) { return color == 0; }),
        "Fully submerged short sprite did not commit only transparent rows");
    ++coverage.fully_submerged;
  }
  require(f.bus->host_sprites()->diagnostics().committed_patches > 0,
          "No source DMA committed native artwork");
  require(f.bus->object_attributes == old_oam,
          "Queued update changed source draw placement");

  // Immediate transfers must update the same retained OAM without requiring
  // a later NMI, loader return or publication of a new draw buffer.
  auto last_revision = f.bus->host_sprites()->artwork_revision();
  unsigned immediate_commands = 0;
  f.after_step = [&] {
    const auto next = f.bus->host_sprites()->artwork_revision();
    if (next != last_revision) {
      last_revision = next;
      ++immediate_commands;
      f.check(*f.bus, "immediate command boundary");
    }
  };
  f.load(true, eight, 0, 0, 0);
  f.after_step = {};
  require(immediate_commands > 0,
          "Immediate loader did not commit any native artwork");
  require(f.check(*f.bus, "immediate complete") == before,
          "Immediate reload failed to restore artwork");

  // Exhaust exactly the first source command's budget. The next command
  // waits at COPY_TO_VRAM; an NMI then exposes a partially updated image.
  const unsigned first_bytes = word(*f.bus, 0x401 + queued_start);
  require(first_bytes > 0 && first_bytes <= 0x1200,
          "Unexpected fixture first DMA size");
  word(*f.bus, 0x99, 0x1200 - first_bytes);
  bool interrupted = false;
  f.after_step = [&] {
    if (!interrupted && f.cpu.program_counter == 0xc08671) {
      interrupted = true;
      require(f.bus->work_ram[0] != f.bus->work_ram[1],
              "Budget wait occurred before first command");
      f.drain_checked("budget-split first frame");
      const auto partial = f.check(*f.bus, "mixed old/new source rows");
      coverage.partial_images += partial != before && partial != after;
      ++f.partial_frames;
    }
  };
  f.load(false, eight, 6, 1, surface);
  f.after_step = {};
  require(interrupted, "Fixture did not reach the source DMA budget wait");
  f.drain_checked("budget-split second frame");
  require(f.check(*f.bus, "split complete") == after,
          "Split upload differs from uninterrupted queue");
  coverage.pixels += f.checks;
  ++coverage.cases;
}

void retired_allocation(const eb::GameAssets &assets, std::size_t &pixels) {
  Fixture f(assets, 1, 0);
  f.load(true, false, 0, 0, 0);
  f.publish();
  const auto before = f.check(*f.bus, "before release/reuse");
  const auto old_generation = f.generation;
  const auto old_oam = f.bus->object_attributes;
  // Execute actual release and creation; the isolated source allocator then
  // returns the just-freed block to Paula. No new OAM list is published.
  f.call(assets.version == eb::GameVersion::JP ? 0xc0214e : 0xc02140, true, 0);
  require(!f.bus->host_sprites()->pose(0),
          "Released source actor retained its pose");
  word(*f.bus, 0x1e0e, 128);
  word(*f.bus, 0x1e10, 112);
  f.call(f.l.create, true, 2, 1, 0);
  word(*f.bus, 0x1e88, 0);
  word(*f.bus, f.l.update, 0);
  f.load(false, false, 6, 1, 0);
  require(f.bus->host_sprites()->pose(0) &&
              f.bus->host_sprites()->pose(0)->generation != old_generation,
          "Reused actor slot retained the released generation");
  Fixture::nmi(*f.bus, f.cpu);
  require(f.bus->object_attributes == old_oam,
          "Reuse fixture accidentally published replacement OAM");
  do {
    f.bus->advance_cpu_cycles(460);
  } while (f.bus->scanline_index() < 2 || f.bus->scanline_index() >= 225);
  std::vector<std::uint8_t> source_after;
  for (unsigned part = 0; part < f.parts; ++part)
    for (unsigned y = 0; y < 16; ++y)
      for (unsigned x = 0; x < 16; ++x)
        source_after.push_back(source_pixel(*f.bus, part, x, y));
  require(source_after != before,
          "Reused source allocation did not change old OAM pixels");
  if (f.bus->host_sprites()->committed_image(
          old_generation, eb::native::SpriteOrientation::Normal)) {
    f.check(*f.bus, "retired OAM after allocation reuse");
  } else {
    // An unsupported transport alias may explicitly decline ownership,
    // but it must not continue displaying the released actor's stale art.
    auto host = f.bus->scene_read_view(), legacy = host;
    legacy.host_sprites = nullptr;
    for (unsigned part = 0; part < f.parts; ++part) {
      const unsigned at = part * 4;
      require(!host.object_scene->host_oam_part(old_oam[at], old_oam[at + 1],
                                                old_oam[at + 2],
                                                old_oam[at + 3], false, part),
              "Invalidated retired generation remained sampleable");
    }
    for (unsigned y = 0; y < 224; ++y) {
      std::array<eb::PpuPixel, 256> a{}, b{};
      require(host.sample_sprite_pixels(y, a, 0) ==
                  legacy.sample_sprite_pixels(y, b, 0),
              "Retired allocation changed source OAM overflow behavior");
      for (unsigned x = 0; x < 256; ++x)
        require(
            a[x].color == b[x].color && a[x].priority == b[x].priority &&
                a[x].layer == b[x].layer && a[x].math == b[x].math &&
                a[x].palette_index == b[x].palette_index,
            "Retired allocation fallback differs from canonical source pixel");
      f.checks += 256;
    }
  }
  pixels += f.checks;
}
} // namespace

int main(int argc, char **argv) {
  try {
    require(argc >= 2, "host_sprite_publication_reference pack.ebpak ...");
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      eb::native::SpriteResources resources(
          assets.image, eb::native::sprite_catalog_layout(assets.version));
      std::vector<unsigned> groups{1};
      for (const bool short_art : {false, true}) {
        const auto found =
            std::find_if(groups.begin(), groups.end(), [&](unsigned group) {
              const auto &d = resources.definition(group);
              return short_art ? d.height == 16
                               : d.width > 16 && d.height >= 24;
            });
        if (found != groups.end())
          continue;
        unsigned group = 0;
        for (; group < resources.size(); ++group) {
          const auto &d = resources.definition(group);
          if (d.frames >= 16 &&
              (short_art ? d.height == 16 : d.width > 16 && d.height >= 24))
            break;
        }
        require(group < resources.size(),
                "Assets lack required split/fully-submerged fixture geometry");
        groups.push_back(group);
      }
      Coverage coverage;
      for (unsigned group : groups)
        for (bool eight : {false, true})
          for (unsigned surface : {0u, 8u, 12u})
            exercise(assets, group,
                     resources.definition(group).width > 16 ? 7 : 0, eight,
                     surface, coverage);
      retired_allocation(assets, coverage.pixels);
      require(coverage.partial_images && coverage.split_rows &&
                  coverage.zero_commands && coverage.fully_submerged,
              "Publication fixture missed required partial/split/zero-row "
              "coverage");
      std::cout
          << (assets.version == eb::GameVersion::JP ? "JP" : "US") << ": "
          << coverage.cases << " immediate/queued/split publication cases, "
          << coverage.pixels
          << " source OAM pixels; mixed images=" << coverage.partial_images
          << " split rows=" << coverage.split_rows
          << " zero commands=" << coverage.zero_commands
          << " fully submerged=" << coverage.fully_submerged
          << "; copied pending queues and retired allocation parity matched\n";
    }
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
