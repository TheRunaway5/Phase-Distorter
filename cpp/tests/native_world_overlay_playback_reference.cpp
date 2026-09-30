// Complete original overlay loader, animation/draw helper and OAM projection.
// CPU execution is confined to this reference oracle.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_overlay_playback.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb::native;
namespace {
std::uint64_t checks{}, calls{}, instructions{};
std::string context;
void check(bool value, const std::string &message) {
  ++checks;
  if (!value)
    throw std::runtime_error(message + ": " + context);
}
struct Oracle {
  bool jp;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned tracks, surface, width, x, y, flags, priority, queue;
  explicit Oracle(const eb::GameAssets &a)
      : jp(a.version == eb::GameVersion::JP),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    tracks = jp ? 0x32b4 : 0x2eb6;
    surface = jp ? 0x2fa8 : 0x2baa;
    width = jp ? 0x2e7c : 0x2a7e;
    x = jp ? 0xb0c : 0xb16;
    y = jp ? 0xb48 : 0xb52;
    flags = jp ? 0x3278 : 0x2e7a;
    priority = jp ? 0x2800 : 0x2400;
    queue = jp ? 0x2906 : 0x2506;
    bus->work_ram[0xd] = 0x80;
    bus->write_byte(0x2100, 0x80);
    load();
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  unsigned get(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void run(unsigned address, unsigned a = 0, unsigned xx = 0, unsigned yy = 0) {
    ++calls;
    cpu.emulation_mode = false;
    cpu.status_register = 4;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = xx;
    cpu.y_index = yy;
    cpu.execute_instruction<0x22>(address, 4);
    for (unsigned n = 0; n < 100000; ++n) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return;
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Original overlay helper did not return " +
                             cpu.describe_registers() + ": " + context);
  }
  void load() { run(jp ? 0xc486d8 : 0xc4b26b); }
  void draw(unsigned role, unsigned sf, unsigned byte_width, unsigned fl,
            int xx, int yy) {
    put(0x1e88, role * 2);
    put(surface + role * 2, sf);
    put(width + role * 2, byte_width);
    put(flags + role * 2, fl);
    put(x + role * 2, xx);
    put(y + role * 2, yy);
    put(priority, 1);
    put(queue + 256, 0);
    run(jp ? 0xc0ac22 : 0xc0ac43, 0, role * 2);
  }
};
unsigned word(std::span<const std::uint8_t> b, unsigned at) {
  return b[at] | unsigned(b[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> b, unsigned at) {
  return (word(b, at) | unsigned(b[at + 2]) << 16) & 0x3fffff;
}
void run(const eb::GameAssets &a) {
  const bool jp = a.version == eb::GameVersion::JP;
  const auto first_check = checks, first_call = calls;
  const unsigned maps = (jp ? 0x40d7d : 0x40e31) + 17;
  const std::array<unsigned, 4> starts{maps + 162, maps + 110, maps + 174,
                                       maps + 194};
  auto resources = std::make_shared<SpriteResources>(
      a.image, sprite_catalog_layout(a.version));
  OverlaySprites content(a.image, a.version, *resources);
  Oracle o(a);
  auto scripts = std::make_shared<ActionScriptData>(
      std::vector<std::uint8_t>{9}, 0, std::vector<std::uint32_t>{0});
  const auto layout = sprite_catalog_layout(a.version);
  std::array<unsigned, 2> groups{~0u, ~0u};
  for (unsigned group = 0; group < layout.group_count; ++group) {
    auto at = pointer(a.image, layout.groups + group * 4);
    const auto &d = resources->definition(group);
    check(a.image.at(at + 1) * 2 == d.width * 4,
          "Creation pixel width does not encode source byte width");
    if (d.height >= 16 && d.frames >= 8 && (d.width == 16 || d.width == 32) &&
        groups[d.width == 32] == ~0u)
      groups[d.width == 32] = group;
  }
  check(groups[0] != ~0u && groups[1] != ~0u,
        "Missing real small/large creation geometry");
  SpritePalettes palettes{};
  for (unsigned p = 0; p < 8; ++p)
    for (unsigned c = 0; c < 16; ++c)
      palettes[p][c] = 0xff000000 | p * 0x10000 | c * 0x101;
  unsigned cases = 0, passes = 0, projected = 0;
  const auto scenario = [&](unsigned role, unsigned geometry, unsigned sf,
                            unsigned fl, unsigned count) {
    context = std::string(jp ? "JP" : "US") + " role" + std::to_string(role) +
              " width" + std::to_string(geometry) + " surface" +
              std::to_string(sf) + " flags" + std::to_string(fl);
    ++cases;
    ActorWorld world(resources, scripts, a.version);
    WorldOverlayPlayback overlay(world, content);
    world.bind_overlays(overlay);
    WorldActorSpec spec;
    spec.sprite = groups[geometry == 32];
    spec.action.animation = 0;
    spec.action.priority = 1;
    auto id = *world.create_authored(spec, {role, role + 1});
    auto &actor = world.actor(id);
    actor.appearance.select_four(0, 0);
    actor.behavior.projection = ActorProjection::Unchanged;
    for (unsigned kind = 0; kind < 4; ++kind) {
      o.put(o.tracks + kind * 180 + role * 2, starts[kind]);
      o.put(o.tracks + kind * 180 + 60 + role * 2, 0);
      o.put(o.tracks + kind * 180 + 120 + role * 2, 0);
    }
    for (unsigned tick = 0; tick < count; ++tick) {
      // Exercise real inactive intervals without restarting the retained clips.
      const unsigned liveflags = (tick >= 30 && tick < 35) ? 0 : fl;
      const unsigned livesurface = (tick >= 30 && tick < 35) ? 0 : sf;
      const int xx =
                    std::array<int, 7>{
                        -32, -1, 0, 128, 255, 288, 330}[tick % 7],
                yy = 80 + (tick % 3) * 12;
      actor.behavior.surface_flags = livesurface;
      actor.appearance_context.overlay_flags = liveflags;
      actor.behavior.projected_x = xx;
      actor.behavior.projected_y = yy;
      o.draw(role, livesurface, geometry * 4, liveflags, xx, yy);
      check(world.advance_tick() == WorldTickResult::Complete,
            "Overlay source frame requested unrelated actor service");
      ++passes;
      const auto native = overlay.state(id);
      for (unsigned kind = 0; kind < 4; ++kind) {
        check(o.get(o.tracks + kind * 180 + role * 2) ==
                  ((starts[kind] + native[kind].next_step * 8) & 0xffff),
              "Overlay script cursor differs");
        check(o.get(o.tracks + kind * 180 + 60 + role * 2) ==
                  native[kind].remaining,
              "Overlay countdown differs");
        check(o.get(o.tracks + kind * 180 + 120 + role * 2) ==
                  (native[kind].frame ? *native[kind].frame & 0xffff : 0),
              "Overlay selected frame differs");
      }
      auto frame = world.draw(256, palettes, 1, 4096);
      const auto fragments = overlay.fragments(id);
      unsigned part = 0;
      check(o.get(o.queue + 256) <= 6, "Source queued too many overlays");
      for (unsigned q = 0; q < o.get(o.queue + 256); q += 2) {
        unsigned address = 0x40000 + o.get(o.queue + q);
        const auto sx = std::int16_t(o.get(o.queue + 64 + q)),
                   sy = std::int16_t(o.get(o.queue + 128 + q));
        check(o.get(o.queue + 192 + q) == 0xc4,
              "Source overlay content bank differs");
        // Execute the complete original sprite projection on the authored
        // frame.
        o.put(3, 0x600);
        o.put(5, 0x800);
        o.put(7, 0x900);
        o.bus->work_ram[9] = 0x7e;
        o.bus->work_ram[10] = 0x80;
        o.put(11, 0xc4);
        o.run(jp ? 0xc08cc6 : 0xc08cd5, address & 0xffff, std::uint16_t(sx),
              std::uint16_t(sy));
        ++projected;
        unsigned oam = 0x600;
        for (;; address += 5) {
          check(part < fragments.size(),
                "Source emitted an extra overlay fragment");
          const auto &f = fragments[part];
          const auto &quad = frame->quads.at(part);
          const unsigned attr = a.image.at(address + 2),
                         tile = a.image.at(address + 1);
          const int left = std::int8_t(a.image.at(address + 3)),
                    top = std::int8_t(a.image.at(address));
          check(f.left + xx == sx + left && f.top + yy == sy + top,
                "Overlay frame origin differs");
          check(quad.x == sx + left && quad.y == sy + top - 1 &&
                    quad.motion == frame->quads.back().motion,
                "Native draw differs from source overlay projection");
          constexpr std::array<int, 4> layers{2, 5, 7, 10};
          check(f.palette == ((attr >> 1) & 7) &&
                    f.priority == ((attr >> 4) & 3) &&
                    quad.priority == layers[(attr >> 4) & 3],
                "Overlay palette/priority differs");
          if (sx + left >= -256 && sx + left <= 255) {
            check(oam < o.get(3) &&
                      o.bus->work_ram[oam] == std::uint8_t(sx + left) &&
                      o.bus->work_ram[oam + 1] == std::uint8_t(sy + top - 1) &&
                      o.get(oam + 2) == word(a.image, address + 1),
                  "Original OAM pixel registration differs");
            oam += 4;
          }
          for (unsigned y = 0; y < 16; ++y)
            for (unsigned x = 0; x < 16; ++x) {
              const unsigned px = attr & 0x40 ? 15 - x : x,
                             py = attr & 0x80 ? 15 - y : y;
              const unsigned cell = (((tile & 0xf0) + py / 8 * 16) & 0xf0) |
                                    ((tile + px / 8) & 15);
              const unsigned source =
                  0x8000 + ((attr & 1) ? 0x2000 : 0) + cell * 32 + (py & 7) * 2;
              unsigned expected = 0;
              for (unsigned plane = 0; plane < 4; ++plane)
                expected |=
                    ((o.bus->video_ram[source + plane / 2 * 16 + (plane & 1)] >>
                      (7 - (px & 7))) &
                     1)
                    << plane;
              const auto at = (quad.v + y) * frame->atlas_width + quad.u + x;
              check(f.pixels->indices[y * 16 + x] == expected &&
                        frame->palette_indices.at(at) ==
                            128 + f.palette * 16 + expected &&
                        frame->atlas.at(at) ==
                            (expected ? palettes[f.palette][expected] : 0),
                    "Overlay source/upload/presentation pixels differ");
            }
          ++part;
          if (a.image.at(address + 4) & 0x80)
            break;
        }
        check(oam == o.get(3),
              "Original sprite projection emitted extra pieces");
      }
      check(part == fragments.size(), "Native emitted extra overlay fragments");
      const auto saved = overlay.state(id);
      (void)world.draw(522, palettes, 1);
      check(overlay.state(id) == saved,
            "Ultrawide presentation advanced overlay clock");
      if (tick == 19 || tick == 256) {
        o.load();
        overlay.reset_after_map_load();
        for (unsigned r = 0; r < 30; ++r)
          for (unsigned kind = 0; kind < 4; ++kind) {
            check(o.get(o.tracks + kind * 180 + r * 2) ==
                      (starts[kind] & 0xffff),
                  "Original map reset missed vacant role cursor");
            check(!overlay.authored_state(r)[kind].next_step,
                  "Native map reset missed vacant role cursor");
          }
        for (unsigned kind = 0; kind < 4; ++kind)
          check(overlay.state(id)[kind].remaining == saved[kind].remaining &&
                    overlay.state(id)[kind].frame == saved[kind].frame,
                "Map loader erased current timer/frame");
      }
    }
  };
  for (unsigned role : {22, 23, 29})
    for (unsigned width : {16, 32})
      for (unsigned sf : {0, 1, 4, 5, 8, 9, 12, 13})
        for (unsigned fl : {0, 0x4000, 0x8000, 0xc000})
          scenario(role, width, sf, fl, 64);
  for (unsigned width : {16, 32})
    for (unsigned sf : {8, 9})
      scenario(23, width, sf, 0xc000, 520);
  std::cout << (jp ? "JP" : "US") << ": " << cases << " overlay flows, "
            << passes << " complete draw phases, " << projected
            << " original OAM projections, " << calls - first_call
            << " original calls, " << checks - first_check << " comparisons\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    check(argc > 1, "Supply local asset packs");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    std::cout << instructions << " original source instructions\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
