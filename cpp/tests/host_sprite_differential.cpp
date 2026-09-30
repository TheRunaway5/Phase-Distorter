// Opt-in local-asset regression for the read-only host sprite bridge. This
// intentionally compares source transport storage too: allocator cutover needs
// a separately justified contract, not a silently weakened version of this
// test.
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/game_debug.hpp"
#include "eb/input_replay.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"

#include <algorithm>
#include <array>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

namespace {
void require(bool condition, const std::string &message) {
  if (!condition)
    throw std::runtime_error(message);
}
template <class A, class B>
void equal_storage(const A &expected, const B &actual, const char *name,
                   unsigned width = 0) {
  require(expected.size() == actual.size(),
          std::string(name) + " size differs");
  const auto mismatch =
      std::mismatch(expected.begin(), expected.end(), actual.begin());
  if (mismatch.first == expected.end())
    return;
  const auto index = std::size_t(mismatch.first - expected.begin());
  throw std::runtime_error(std::string(name) + " differs at " +
                           (width ? "(" + std::to_string(index % width) + "," +
                                        std::to_string(index / width) + ")"
                                  : std::to_string(index)) +
                           " expected=" + std::to_string(*mismatch.first) +
                           " actual=" + std::to_string(*mismatch.second));
}
auto main_registers(const eb::MainCpu65816 &c) {
  return std::tie(c.accumulator, c.x_index, c.y_index, c.stack_pointer,
                  c.direct_page, c.status_register, c.data_bank,
                  c.program_counter, c.emulation_mode, c.is_stopped,
                  c.is_waiting, c.instruction_count, c.cycle_count);
}
auto audio_registers(const eb::Spc700AudioCpu &c) {
  return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index,
                  c.stack_pointer, c.status_register, c.instruction_count,
                  c.cycle_count, c.is_stopped, c.is_sleeping);
}
bool equal_pixel(const eb::PpuPixel &a, const eb::PpuPixel &b) {
  return std::tie(a.color, a.priority, a.layer, a.math, a.palette_index) ==
         std::tie(b.color, b.priority, b.layer, b.math, b.palette_index);
}

// Prove one actual, visible source OAM object is independent of VRAM. Unrelated
// objects are hidden in a borrowed OAM copy, and only the sprite sampler runs;
// background graphics sharing a VRAM address cannot falsify this experiment.
bool poison_object(const eb::SceneReadView &original, unsigned index) {
  const unsigned at = index * 4;
  const int x =
      original.object_attributes[at] |
      ((original.object_attributes[512 + index / 4] >> ((index & 3) * 2) & 1)
       << 8);
  const unsigned y = original.object_attributes[at + 1];
  if (x > 240 || y > 208)
    return false;
  std::array<std::uint8_t, 544> isolated{};
  // Every small OBJ mode is at most 32 pixels tall: 224..255 stays hidden.
  for (unsigned other = 0; other < 128; ++other)
    isolated[other * 4 + 1] = 224;
  std::copy_n(original.object_attributes.begin() + at, 4,
              isolated.begin() + at);
  isolated[512 + index / 4] =
      original.object_attributes[512 + index / 4] & (3u << ((index & 3) * 2));
  std::array<std::uint8_t, 65536> poisoned{};
  auto baseline = original;
  baseline.object_attributes = isolated;
  auto host_poison = baseline;
  host_poison.video_ram = poisoned;
  auto legacy = baseline;
  legacy.host_sprites = nullptr;
  auto legacy_poison = host_poison;
  legacy_poison.host_sprites = nullptr;
  unsigned visible = 0, changed = 0;
  for (unsigned row = y; row < y + 16; ++row) {
    std::array<eb::PpuPixel, 256> a{}, b{}, c{}, d{};
    const auto sa = baseline.sample_sprite_pixels(row, a, 0);
    const auto sb = host_poison.sample_sprite_pixels(row, b, 0);
    const auto sc = legacy.sample_sprite_pixels(row, c, 0);
    const auto sd = legacy_poison.sample_sprite_pixels(row, d, 0);
    require(sa == sb && sa == sc && sa == sd,
            "poison experiment changed OAM overflow status");
    for (unsigned col = 0; col < 256; ++col) {
      require(equal_pixel(a[col], b[col]),
              "host sprite still reads poisoned source VRAM");
      require(equal_pixel(a[col], c[col]),
              "isolated host sprite differs from source artwork");
      visible += a[col].priority >= 0;
      changed += !equal_pixel(c[col], d[col]);
    }
  }
  return visible && changed;
}

// A controlled render-only fixture derived from a real, currently selected
// actor. This proves graphics ownership in the margins and direct atlas; it
// does not activate an offscreen actor or claim gameplay/readiness coverage.
unsigned poison_extended_paths(const eb::SceneReadView &original,
                               unsigned index, unsigned wanted_edges) {
  const auto word = [&](unsigned at) {
    return original.work_ram[at] | unsigned(original.work_ram[at + 1]) << 8;
  };
  const unsigned at = index * 4;
  const unsigned extra =
      (original.object_attributes[512 + index / 4] >> ((index & 3) * 2)) & 3;
  int object_x = original.object_attributes[at] | ((extra & 1) << 8);
  if (object_x >= 256)
    object_x -= 512;
  const auto part = original.object_scene->host_oam_part(
      object_x, original.object_attributes[at + 1],
      original.object_attributes[at + 2], original.object_attributes[at + 3],
      bool(extra >> 1), index);
  if (!part || (original.ppu_registers[1] & 7) != 2)
    return 0;
  const auto &profile = original.source_profile;
  unsigned slot = 60;
  for (unsigned candidate = 0; candidate < 60; candidate += 2) {
    const auto &pose = original.host_sprites->pose(candidate);
    if (pose && pose->image &&
        word(profile.wram_entity_draw_callback + candidate) ==
            profile.entity_draw_callbacks.screen_space &&
        !(word(profile.wram_entity_animation_frame + candidate) & 0x8000) &&
        !(word(profile.wram_entity_spritemap_pointers.high + candidate) &
          0xc000) &&
        pose->generation == part->generation) {
      slot = candidate;
      break;
    }
  }
  if (slot == 60)
    return 0; // Current logical state need not be the completed OAM snapshot.
  const auto &pose = *original.host_sprites->pose(slot);
  const auto orientation =
      word(profile.wram_entity_displayed_sprites + slot) & 1
          ? eb::native::SpriteOrientation::Mirrored
          : eb::native::SpriteOrientation::Normal;
  const auto committed =
      original.host_sprites->committed_image(pose.generation, orientation);
  if (!committed)
    return 0;
  std::array<std::uint8_t, 0x20000> ram;
  std::copy(original.work_ram.begin(), original.work_ram.end(), ram.begin());
  const auto put = [&](unsigned address, unsigned value) {
    ram[address] = value;
    ram[address + 1] = value >> 8;
  };
  put(profile.wram_first_entity, slot);
  put(profile.wram_entity_next + slot, 0xffff);
  put(profile.wram_battle_mode_flag, 0);
  for (unsigned candidate = 0; candidate < 60; candidate += 2)
    put(profile.wram_entity_script_ids + candidate, 0);
  std::array<std::uint8_t, 64> registers;
  std::copy(original.ppu_registers.begin(), original.ppu_registers.end(),
            registers.begin());
  registers[0] = 15;
  registers[6] = 0;
  registers[0x2c] = 16;
  registers[0x2d] = registers[0x2e] = registers[0x2f] = 0;
  registers[0x30] = registers[0x31] = 0;
  std::array<std::uint8_t, 544> objects{};
  for (unsigned other = 0; other < 128; ++other)
    objects[other * 4 + 1] = 224;
  std::array<std::uint8_t, 512> palette{};
  for (unsigned color = 129; color < 256; ++color) {
    const unsigned value = ((color & 15) + 1) | (31 << 5) | (15 << 10);
    palette[color * 2] = value;
    palette[color * 2 + 1] = value >> 8;
  }
  std::array<std::uint32_t, 256 * 224> native;
  native.fill(0xff000000);
  std::array<std::uint8_t, 65536> poisoned;
  std::copy(original.video_ram.begin(), original.video_ram.end(),
            poisoned.begin());
  // This is the source's ordinary 88-block OBJ graphics range. Background
  // map/graphics bytes remain intact so world-map verification still runs.
  std::fill(poisoned.begin() + 0x8000, poisoned.begin() + 0xac00, 0);
  auto fixture = original;
  fixture.work_ram = ram;
  fixture.ppu_registers = registers;
  fixture.object_attributes = objects;
  fixture.palette_ram = palette;
  fixture.native_framebuffer = native;
  fixture.tile_rows = nullptr;
  struct Picture {
    std::vector<std::uint32_t> pixels;
    std::shared_ptr<const eb::DirectSceneFrame> direct;
  };
  const auto render = [&](bool host, bool corrupt) {
    auto view = fixture;
    if (corrupt)
      view.video_ram = poisoned;
    if (!host)
      view.host_sprites = nullptr;
    eb::GameSceneRenderer renderer;
    view.object_scene = &renderer;
    renderer.set_presentation_width(view, 522);
    renderer.enable_direct_rendering(true);
    // Publish explicit ownership so this fixture uses committed artwork,
    // including the partial image visible in the captured live frame.
    renderer.begin_sprite_frame(1);
    renderer.capture_entity_draw(view, slot);
    const auto current_word = [&](unsigned address) {
      return unsigned(ram[address]) | unsigned(ram[address + 1]) << 8;
    };
    unsigned map =
        current_word(profile.wram_entity_spritemap_pointers.low + slot);
    if (current_word(profile.wram_entity_displayed_sprites + slot) & 1)
      map = (map + current_word(profile.wram_entity_spritemap_sizes + slot)) &
            0xffff;
    map |= current_word(profile.wram_entity_spritemap_pointers.high + slot)
           << 16;
    renderer.capture_sprite_emit(
        view, map,
        std::int16_t(
            current_word(profile.wram_entity_screen_coordinates.x + slot)),
        std::int16_t(
            current_word(profile.wram_entity_screen_coordinates.y + slot)),
        0, 128);
    renderer.capture_oam_upload(view, 1);
    for (unsigned y = 0; y < 224; ++y) {
      renderer.begin_scanline(view, y);
      renderer.render_presentation_margins(view, y);
      renderer.capture_direct_scanline(view, y);
    }
    const auto pixels = renderer.presentation_pixels(native);
    return Picture{{pixels.begin(), pixels.end()}, renderer.direct_scene()};
  };
  unsigned proved = 0;
  for (unsigned edge = 0; edge < 2; ++edge) {
    if (!(wanted_edges & (1u << edge)))
      continue;
    const int left = edge ? 272 : -16 - int(committed->width);
    put(profile.wram_entity_screen_coordinates.x + slot,
        std::uint16_t(left - committed->left));
    put(profile.wram_entity_screen_coordinates.y + slot,
        std::uint16_t(80 - committed->top));
    const auto host = render(true, false), legacy = render(false, false);
    // Live logical fields may already describe the following image/OAM
    // snapshot. Only coherent visible fixtures qualify for ownership proof.
    if (!host.direct || !legacy.direct || host.pixels != legacy.pixels ||
        std::all_of(host.pixels.begin(), host.pixels.end(),
                    [](auto pixel) { return pixel == 0xff000000; }))
      continue;
    unsigned visible = 0;
    bool inside_requested_margin = true;
    for (unsigned y = 0; y < 224; ++y)
      for (unsigned x = 0; x < 522; ++x)
        if (host.pixels[y * 522 + x] != 0xff000000) {
          inside_requested_margin &= edge ? x >= 133 + 256 : x < 133;
          ++visible;
        }
    // Authored narrow-area boundary policy can reposition the copied
    // world. Wait for a fixture whose actor is wholly in the requested
    // margin, rather than counting center pixels as offscreen coverage.
    if (!inside_requested_margin)
      continue;
    require(visible > 0, "margin fixture did not display an object");
    const auto host_poison = render(true, true),
               legacy_poison = render(false, true);
    equal_storage(host.pixels, host_poison.pixels,
                  "poisoned host margin pixels", 522);
    require(host.pixels != legacy_poison.pixels,
            "legacy margin pixels ignored poisoned OBJ VRAM");
    require(bool(host_poison.direct) && bool(legacy_poison.direct),
            "poison fixture lost direct capture");
    const auto direct = eb::rasterize_direct_scene({host.direct, {}});
    const auto direct_poison =
        eb::rasterize_direct_scene({host_poison.direct, {}});
    const auto legacy_direct_poison =
        eb::rasterize_direct_scene({legacy_poison.direct, {}});
    equal_storage(host.pixels, direct, "host direct/margin fixture pixels",
                  522);
    equal_storage(direct, direct_poison, "poisoned host direct pixels", 522);
    require(direct != legacy_direct_poison,
            "legacy direct pixels ignored poisoned OBJ VRAM");
    bool host_quad = false;
    for (const auto &quad : host_poison.direct->quads)
      host_quad |= quad.object &&
                   quad.motion < host_poison.direct->motions.size() &&
                   host_poison.direct->motions[quad.motion].identity ==
                       ((std::uint64_t{1} << 63) | pose.generation) &&
                   bool(original.host_sprites->committed_image(
                       pose.generation, eb::native::SpriteOrientation::Normal));
    require(host_quad,
            "direct poison fixture did not contain host-owned artwork");
    proved |= 1u << edge;
  }
  return proved;
}

struct Coverage {
  struct Phase {
    const char *name;
    unsigned first, last;
    std::uint64_t matched_frames{}, matched_parts{}, direct_frames{},
        poison_frame{};
  };
  std::vector<Phase> phases;
  bool world_replay{}, walking{};
  std::uint64_t matched_frames{}, matched_parts{}, direct_frames{},
      direct_rasters{};
  unsigned extended_poison_edges{};
  std::array<std::uint64_t, 6> matched_intervals{};
  explicit Coverage(eb::GameVersion version, bool world = false)
      : phases{{{"early overworld", 1,
                 version == eb::GameVersion::US ? 4999u : 4924u},
                {"pyramid", version == eb::GameVersion::US ? 5000u : 4925u,
                 version == eb::GameVersion::US ? 5399u : 5324u},
                {"bicycle", 1, std::numeric_limits<unsigned>::max()}}},
        world_replay(world) {
    if (world_replay)
      phases = {{"Twoson walking", 1, std::numeric_limits<unsigned>::max()}};
  }
  void observe(const eb::SnesBus &bus, std::uint64_t frame) {
    const auto view = bus.scene_read_view();
    require(view.host_sprites && view.object_scene,
            "host rendering view is not connected");
    const auto word = [&](unsigned at) {
      return view.work_ram[at] | unsigned(view.work_ram[at + 1]) << 8;
    };
    // GET_ON_BICYCLE sets walking style 3 and creates role 24 with sprite 7.
    // An arbitrary late demo frame is not proof that this sequence ran.
    const unsigned sprite_ids =
        view.game_version == eb::GameVersion::US ? 0x2cd6 : 0x30d4;
    bool bike_active = false;
    std::array<bool, 30> visited{};
    for (unsigned slot = word(view.source_profile.wram_first_entity);
         slot < 60 && !(slot & 1) && !visited[slot / 2];
         slot = word(view.source_profile.wram_entity_next + slot)) {
      visited[slot / 2] = true;
      bike_active |= slot == 48;
    }
    bike_active &= word(view.source_profile.party_state.walking_style) == 3 &&
                   word(sprite_ids + 48) == 7;
    const auto &bike_pose = view.host_sprites->pose(48);
    std::vector<unsigned> matched, bicycle;
    for (unsigned index = 0; index < 128; ++index) {
      const unsigned at = index * 4;
      const auto extra =
          (view.object_attributes[512 + index / 4] >> ((index & 3) * 2)) & 3;
      int x = view.object_attributes[at] | ((extra & 1) << 8);
      if (x >= 256)
        x -= 512;
      const unsigned y = view.object_attributes[at + 1];
      const auto part = view.object_scene->host_oam_part(
          x, y, view.object_attributes[at + 2], view.object_attributes[at + 3],
          bool(extra >> 1), index);
      if (part && x > -16 && x < 256 && (y < 224 || y > 240) &&
          std::any_of(
              part->indices.begin(), part->indices.end(),
              [](auto value) { return value != 0; })) {
        matched.push_back(index);
        if (bike_active && bike_pose &&
            bike_pose->generation == part->generation)
          bicycle.push_back(index);
      }
    }
    bool host_direct = false;
    if (const auto direct = bus.direct_scene())
      for (const auto &quad : direct->quads)
        if (quad.object && quad.motion < direct->motions.size() &&
            (direct->motions[quad.motion].identity &
             (std::uint64_t{1} << 63)) &&
            view.host_sprites->committed_image(
                direct->motions[quad.motion].identity &
                    ~(std::uint64_t{1} << 63),
                eb::native::SpriteOrientation::Normal) &&
            quad.x < direct->width && quad.x + quad.width > 0 && quad.y < 224 &&
            quad.y + quad.height > 0) {
          for (unsigned y = 0; y < quad.height && !host_direct; ++y)
            for (unsigned x = 0; x < quad.width; ++x)
              host_direct |=
                  bool(direct->atlas[(quad.v + y) * direct->atlas_width +
                                     quad.u + x] >>
                       24);
        }
    matched_frames += !matched.empty();
    matched_parts += matched.size();
    direct_frames += host_direct;
    if (world_replay && walking && extended_poison_edges != 3 && host_direct &&
        frame % 30 == 0)
      for (auto index : matched) {
        const auto proved =
            poison_extended_paths(view, index, 3 & ~extended_poison_edges);
        if (proved) {
          extended_poison_edges |= proved;
          std::cout << "  margin/direct VRAM poison proof: frame=" << frame
                    << " object=" << index << " left=" << bool(proved & 1)
                    << " right=" << bool(proved & 2) << '\n'
                    << std::flush;
        }
        if (extended_poison_edges == 3)
          break;
      }
    if (frame && frame <= 9000)
      matched_intervals[(frame - 1) / 1500] += !matched.empty();
    for (unsigned phase_index = 0; phase_index < phases.size(); ++phase_index) {
      auto &phase = phases[phase_index];
      if (frame < phase.first || frame > phase.last)
        continue;
      // The title demo retains raster windows throughout its overworld
      // scenes. Direct capture and both margins are required separately by
      // the live saved-game walking route, after the Twoson teleport.
      if (world_replay && (!walking || !host_direct))
        continue;
      const auto &parts = !world_replay && phase_index == 2 ? bicycle : matched;
      phase.matched_frames += !parts.empty();
      phase.matched_parts += parts.size();
      phase.direct_frames += host_direct;
      if (!phase.poison_frame)
        for (auto index : parts)
          if (poison_object(view, index)) {
            phase.poison_frame = frame;
            std::cout << "  VRAM poison proof: " << phase.name
                      << " frame=" << frame << " object=" << index << '\n'
                      << std::flush;
            break;
          }
    }
  }
  void require_full_run() const {
    require(matched_frames > 0 && matched_parts > 0,
            "host artwork never reached canonical OAM");
    if (world_replay) {
      require(direct_frames > 0 && direct_rasters > 0,
              "host artwork never reached direct capture");
      require(extended_poison_edges == 3,
              "both margins and direct capture require independent VRAM poison "
              "proofs");
    }
    for (const auto &phase : phases) {
      require(phase.matched_frames > 0,
              std::string(phase.name) + " had no host-owned OAM objects");
      require(phase.poison_frame > 0,
              std::string(phase.name) + " had no successful VRAM poison proof");
    }
  }
};

struct CapturedFrame {
  std::uint64_t frame;
  unsigned width;
  double aspect;
  std::vector<std::uint32_t> native, pixels, reference;
  std::vector<std::uint8_t> mask;
  std::shared_ptr<const eb::DirectSceneFrame> direct;
  CapturedFrame(const eb::SnesBus &bus, std::span<const std::uint32_t> picture,
                unsigned w, std::uint64_t f)
      : frame(f), width(w), aspect(bus.presentation_fixed_aspect()),
        native(bus.native_framebuffer.begin(), bus.native_framebuffer.end()),
        pixels(picture.begin(), picture.end()),
        reference(bus.presentation_effect_reference().begin(),
                  bus.presentation_effect_reference().end()),
        mask(bus.presentation_effect_mask().begin(),
             bus.presentation_effect_mask().end()),
        direct(bus.direct_scene()) {}
};
struct Core {
  eb::SnesBus bus;
  eb::Spc700AudioCpu apu;
  eb::SnesAudioDsp dsp;
  eb::MainCpu65816 cpu;
  eb::GameDebug debug;
  std::uint64_t steps{};
  std::vector<CapturedFrame> completed;
  Coverage *coverage{};
  std::unique_ptr<eb::SnesBus> visible_snapshot, row_snapshot;
  std::uint64_t visible_snapshot_frame{}, requested_snapshot_frame{};
  unsigned requested_snapshot_row{223};
  Core(const eb::GameAssets &assets, unsigned width, Coverage *observer,
       std::uint64_t snapshot_frame = 0, unsigned snapshot_row = 223)
      : bus(assets.image, assets.version), apu(bus), dsp(apu), cpu(bus),
        debug(bus, cpu), coverage(observer),
        requested_snapshot_frame(snapshot_frame),
        requested_snapshot_row(snapshot_row) {
    bus.enable_sprite_snapshots();
    bus.enable_host_sprite_resources(coverage != nullptr);
    cpu.reset_from_vector();
    cpu.set_gameplay_timing(true);
    bus.set_presentation_width(width);
    bus.set_presentation_effects_enabled(true);
    bus.set_direct_rendering_enabled(true);
    bus.on_presentation_frame = [this](auto pixels, unsigned w,
                                       std::uint64_t frame) {
      completed.emplace_back(bus, pixels, w, frame);
    };
  }
  std::unique_ptr<eb::SnesBus> snapshot() const {
    auto result = std::make_unique<eb::SnesBus>(bus);
    // Read-only inspection only: copied callbacks must never re-enter live
    // audio/debug/frame owners. SceneReadView binds to the copied storage.
    result->advance_audio_master_clocks = {};
    result->on_presentation_frame = {};
    result->debug_read_wram = {};
    result->debug_write_wram = {};
    result->debug_read_rom = {};
    return result;
  }
  void inspect_visible_boundary(std::uint64_t before_frame,
                                unsigned before_line, unsigned before_clock) {
    if (!coverage || bus.completed_frames != before_frame)
      return;
    const auto crossed = [&](unsigned row) {
      const unsigned line = row + 1;
      const bool before =
          before_line < line || (before_line == line && before_clock < 1112);
      const bool after =
          bus.scanline_index() > line ||
          (bus.scanline_index() == line && bus.scanline_clock() >= 1112);
      // One source instruction may cross multiple lines. Only retain
      // snapshots adjacent to the requested render boundary; skipped
      // large-DMA boundaries never count toward ownership coverage.
      return before && after && bus.scanline_index() <= line + 1;
    };
    const auto frame = before_frame + 1;
    if (requested_snapshot_frame == frame && !row_snapshot &&
        crossed(requested_snapshot_row)) {
      row_snapshot = snapshot();
      std::cout << "  diagnostic sprite snapshot frame=" << frame
                << " row=" << requested_snapshot_row
                << " after_line=" << bus.scanline_index()
                << " clock=" << bus.scanline_clock() << '\n'
                << std::flush;
    }
    if (visible_snapshot_frame != frame && crossed(223)) {
      visible_snapshot = snapshot();
      visible_snapshot_frame = frame;
      // Hardware completes the frame at line262, after NMI at225 has
      // already uploaded next-frame OAM. Inspect this picture's objects
      // after its last visible row, before another CPU/NMI step runs.
      coverage->observe(*visible_snapshot, frame);
    }
  }
  void advance(std::uint16_t buttons = 0) {
    bus.set_buttons(buttons);
    const auto first = bus.completed_frames;
    do {
      require(!cpu.is_stopped, "source CPU stopped during replay");
      debug.before_step();
      const auto before_frame = bus.completed_frames;
      const auto before_line = bus.scanline_index(),
                 before_clock = bus.scanline_clock();
      steps += cpu.advance_gameplay(std::numeric_limits<unsigned>::max());
      inspect_visible_boundary(before_frame, before_line, before_clock);
    } while (bus.completed_frames == first);
  }
};

void compare_state(const Core &a, const Core &b, bool compare_batches = true) {
  require(a.steps == b.steps &&
              a.bus.completed_frames == b.bus.completed_frames,
          "source steps/frame count differ");
  require(main_registers(a.cpu) == main_registers(b.cpu),
          "main CPU registers/counters differ");
  require(a.cpu.timing_snapshot() == b.cpu.timing_snapshot(),
          "main CPU scheduling differs");
  require(!compare_batches || a.cpu.native_gameplay_batches() ==
                                  b.cpu.native_gameplay_batches(),
          "native batch retirement differs");
  require(audio_registers(a.apu) == audio_registers(b.apu),
          "audio CPU registers/counters differ");
  require(eb::RuntimeStateAudit::bus_controls(a.bus) ==
              eb::RuntimeStateAudit::bus_controls(b.bus),
          "hardware clocks/registers/latches/overflow differ");
  require(eb::RuntimeStateAudit::audio_controls(a.apu) ==
              eb::RuntimeStateAudit::audio_controls(b.apu),
          "audio timers/latches differ");
  equal_storage(a.bus.work_ram, b.bus.work_ram, "WRAM");
  equal_storage(a.bus.video_ram, b.bus.video_ram, "VRAM");
  equal_storage(a.bus.palette_ram, b.bus.palette_ram, "CGRAM");
  equal_storage(a.bus.object_attributes, b.bus.object_attributes, "OAM");
  equal_storage(a.bus.save_ram, b.bus.save_ram, "save memory");
  equal_storage(a.bus.main_to_audio_ports, b.bus.main_to_audio_ports,
                "main-to-audio ports");
  equal_storage(a.bus.audio_to_main_ports, b.bus.audio_to_main_ports,
                "audio-to-main ports");
  equal_storage(a.apu.audio_ram, b.apu.audio_ram, "audio RAM");
  equal_storage(a.apu.dsp_registers, b.apu.dsp_registers, "DSP registers");
  require(a.dsp.generated_stereo_frame_count() ==
              b.dsp.generated_stereo_frame_count(),
          "generated audio frame count differs");
}

// Attract-mode motion scripts need not visit the small set of admitted native
// helpers. Separately prove enabling host resources keeps real batching alive,
// using an original NPC-collision iteration and frozen instruction stepping.
void verify_batch_admission(const eb::GameAssets &assets) {
  Coverage coverage(assets.version);
  auto source = std::make_unique<Core>(assets, 256, nullptr);
  auto host = std::make_unique<Core>(assets, 256, &coverage);
  auto frozen = std::make_unique<Core>(assets, 256, nullptr);
  frozen->cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  const bool jp = assets.version == eb::GameVersion::JP;
  for (auto *core : {source.get(), host.get(), frozen.get()}) {
    auto &cpu = core->cpu;
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::Overflow;
    cpu.data_bank = 0x7e;
    cpu.stack_pointer = 0x1ffc;
    cpu.direct_page = 0x1d00;
    cpu.accumulator = 0xdead;
    cpu.x_index = 0xbeef;
    cpu.y_index = 0xcafe;
    cpu.program_counter = jp ? 0xc062a9 : 0xc0607b;
    const auto word = [&](unsigned at, unsigned value) {
      core->bus.work_ram[at] = value;
      core->bus.work_ram[at + 1] = value >> 8;
    };
    word(0x1d02, 7);
    word(0x1d12, 7);
    for (unsigned candidate = 0; candidate < 23; ++candidate)
      word((jp ? 0xa58 : 0xa62) + candidate * 2, 0xffff);
    core->bus.write_byte(0x420d, 0);
    // Past the h=24 HDMA initialization boundary, before h=538 refresh.
    core->bus.advance_master_clocks_with_refresh(32);
  }
  source->steps = source->cpu.advance_gameplay(16);
  host->steps = host->cpu.advance_gameplay(16);
  require(source->steps == 16 && host->steps == 16,
          "host resource batch fixture did not retire 16 source steps");
  for (unsigned step = 0; step < 16; ++step) {
    frozen->cpu.step_instruction();
    ++frozen->steps;
  }
  compare_state(*source, *host);
  compare_state(*frozen, *host, false);
  require(source->cpu.native_gameplay_batches() == 1 &&
              host->cpu.native_gameplay_batches() == 1 &&
              frozen->cpu.native_gameplay_batches() == 0,
          "host resource bridge disabled native batching or the frozen oracle "
          "batched");
  const auto expected = frozen->dsp.take_stereo_samples();
  equal_storage(expected, source->dsp.take_stereo_samples(),
                "batch source PCM");
  equal_storage(expected, host->dsp.take_stereo_samples(), "batch host PCM");
  require(host->cpu.accumulator == 8 && host->cpu.x_index == 14 &&
              host->cpu.program_counter == (jp ? 0xc062a9u : 0xc0607bu),
          "native batch did not advance the authored NPC candidate iteration");
  std::cout << "  " << (jp ? "JP" : "US")
            << " host resource batch proof: 1 native batch = 16 frozen source "
               "steps, exact state/clocks/audio\n"
            << std::flush;
}
void compare_frames(const Core &a, const Core &b, Coverage &coverage) {
  require(a.completed.size() == b.completed.size(),
          "completed-frame callback count differs");
  for (unsigned i = 0; i < a.completed.size(); ++i) {
    const auto &expected = a.completed[i], &actual = b.completed[i];
    require(expected.frame == actual.frame && expected.width == actual.width &&
                expected.aspect == actual.aspect,
            "completed-frame sequence/canvas/aspect differs");
    equal_storage(expected.native, actual.native, "native pixels", 256);
    equal_storage(expected.pixels, actual.pixels, "presentation pixels",
                  expected.width);
    equal_storage(expected.mask, actual.mask, "effect mask", expected.width);
    equal_storage(expected.reference, actual.reference, "effect reference",
                  expected.width);
    require(bool(expected.direct) == bool(actual.direct),
            "direct-capture eligibility differs");
    if (expected.direct &&
        (actual.frame % 30 == 0 || !coverage.direct_rasters)) {
      const auto old_picture =
          eb::rasterize_direct_scene({expected.direct, {}});
      const auto host_picture = eb::rasterize_direct_scene({actual.direct, {}});
      equal_storage(old_picture, host_picture, "direct pixels", expected.width);
      equal_storage(actual.pixels, host_picture, "direct/presentation pixels",
                    actual.width);
      ++coverage.direct_rasters;
    }
  }
}
std::string diagnostics(const Core &host) {
  const auto d = host.bus.host_sprites()->diagnostics();
  const auto snapshots =
      host.bus.scene_read_view().object_scene->sprite_snapshot_diagnostics();
  return " selections=" + std::to_string(d.selections) +
         " unsupported=" + std::to_string(d.unsupported) +
         " creations=" + std::to_string(d.creations) +
         " releases=" + std::to_string(d.releases) +
         " resets=" + std::to_string(d.resets) +
         " live_poses=" + std::to_string(d.live_poses) +
         " queued_patches=" + std::to_string(d.queued_patches) +
         " committed_patches=" + std::to_string(d.committed_patches) +
         " geometry_mismatches=" +
         std::to_string(host.bus.scene_read_view()
                            .object_scene->host_sprite_geometry_mismatches()) +
         " sprite_builds=" + std::to_string(snapshots.builds) +
         " queued_draws=" + std::to_string(snapshots.queued_draws) +
         " emit_calls=" + std::to_string(snapshots.emit_calls) +
         " matched_draws=" + std::to_string(snapshots.matched_draws) +
         " emitted_host_parts=" + std::to_string(snapshots.host_parts) +
         " sprite_uploads=" + std::to_string(snapshots.uploads) +
         " unknown_uploads=" + std::to_string(snapshots.unknown_uploads) +
         " demo_native_batches=" +
         std::to_string(host.cpu.native_gameplay_batches());
}
void write_ppm(const std::string &path, unsigned width,
               std::span<const std::uint32_t> pixels) {
  if (const auto parent = std::filesystem::path(path).parent_path();
      !parent.empty())
    std::filesystem::create_directories(parent);
  std::ofstream out(path, std::ios::binary);
  require(bool(out), "cannot write diagnostic image " + path);
  out << "P6\n" << width << ' ' << pixels.size() / width << "\n255\n";
  for (const auto pixel : pixels) {
    const std::array<char, 3> rgb{char(pixel >> 16), char(pixel >> 8),
                                  char(pixel)};
    out.write(rgb.data(), rgb.size());
  }
  require(bool(out), "failed writing diagnostic image " + path);
  std::cerr << "  saved " << path << '\n';
}
void visual_diagnostics(const Core &source, const Core &host,
                        const std::string &prefix) {
  for (unsigned frame_index = 0;
       frame_index < std::min(source.completed.size(), host.completed.size());
       ++frame_index) {
    const auto &a = source.completed[frame_index],
               &b = host.completed[frame_index];
    const auto mismatch =
        std::mismatch(a.native.begin(), a.native.end(), b.native.begin());
    const bool differs = mismatch.first != a.native.end();
    if (!differs && a.pixels == b.pixels)
      continue;
    const auto *snapshot =
        host.row_snapshot && host.requested_snapshot_frame == a.frame
            ? host.row_snapshot.get()
        : host.visible_snapshot_frame == a.frame ? host.visible_snapshot.get()
                                                 : nullptr;
    const auto view = (snapshot ? *snapshot : host.bus).scene_read_view();
    const bool us = view.game_version == eb::GameVersion::US;
    const auto word = [&](unsigned at) {
      return view.work_ram[at] | unsigned(view.work_ram[at + 1]) << 8;
    };
    std::cerr << "  sprite diagnostic snapshot="
              << (snapshot && snapshot == host.row_snapshot.get()
                      ? "requested row"
                  : snapshot ? "last visible row"
                             : "end of frame (not captured)")
              << " line="
              << (snapshot ? snapshot->scanline_index()
                           : host.bus.scanline_index())
              << '\n';
    if (!prefix.empty()) {
      const auto path =
          prefix + (us ? "-US-" : "-JP-") + std::to_string(a.frame);
      write_ppm(path + "-native-source.ppm", 256, a.native);
      write_ppm(path + "-native-host.ppm", 256, b.native);
      write_ppm(path + "-presentation-source.ppm", a.width, a.pixels);
      write_ppm(path + "-presentation-host.ppm", b.width, b.pixels);
    }
    if (!differs)
      continue;
    const unsigned pixel = mismatch.first - a.native.begin(), px = pixel % 256,
                   py = pixel / 256;
    std::cerr << "  first native difference frame=" << a.frame << " (" << px
              << ',' << py << ")"
              << " OBSEL=" << unsigned(view.ppu_registers[1])
              << " TM=" << unsigned(view.ppu_registers[0x2c]) << '\n';
    constexpr unsigned sizes[8][2][2] = {
        {{8, 8}, {16, 16}},   {{8, 8}, {32, 32}},   {{8, 8}, {64, 64}},
        {{16, 16}, {32, 32}}, {{16, 16}, {64, 64}}, {{32, 32}, {64, 64}},
        {{16, 32}, {32, 64}}, {{16, 32}, {32, 32}}};
    for (unsigned index = 0; index < 128; ++index) {
      const unsigned at = index * 4,
                     extra = (view.object_attributes[512 + index / 4] >>
                              ((index & 3) * 2)) &
                             3;
      int x = view.object_attributes[at] | ((extra & 1) << 8);
      if (x >= 256)
        x -= 512;
      const unsigned y = view.object_attributes[at + 1],
                     tile = view.object_attributes[at + 2],
                     attr = view.object_attributes[at + 3];
      const auto &size = sizes[view.ppu_registers[1] >> 5][extra >> 1];
      unsigned row = (py - y) & 255;
      if (int(px) < x || int(px) >= x + int(size[0]) || row >= size[1])
        continue;
      const unsigned raw_row = row, col = px - x;
      if (attr & 0x80)
        row = size[1] - 1 - row;
      const auto host_part = view.object_scene->host_oam_part(
          x, y, tile, attr, bool(extra >> 1), index);
      const unsigned raw_col = (attr & 0x40) ? size[0] - 1 - col : col;
      const unsigned cell = (((tile & 0xf0) + (row / 8) * 16) & 0xf0) |
                            ((tile + raw_col / 8) & 15);
      const unsigned base =
          (view.ppu_registers[1] & 7) * 16384 +
          ((attr & 1) ? (((view.ppu_registers[1] >> 3) & 3) + 1) * 8192 : 0);
      const unsigned address = base + cell * 32 + (row & 7) * 2;
      unsigned value = 0;
      for (unsigned plane = 0; plane < 4; ++plane)
        value |= ((view.video_ram[(address + plane / 2 * 16 + (plane & 1)) &
                                  0xffff] >>
                   (7 - (raw_col & 7))) &
                  1)
                 << plane;
      std::cerr << "  OAM=" << index << " xy=" << x << ',' << y
                << " tile=" << tile << " attributes=" << attr
                << " size=" << size[0] << 'x' << size[1]
                << " VRAM_index=" << value << " host=" << bool(host_part);
      if (host_part && size[0] == 16 && size[1] == 16)
        std::cerr << " host_index="
                  << unsigned(host_part->indices[raw_row * 16 + col])
                  << " host_palette=" << host_part->palette
                  << " host_generation=" << host_part->generation;
      std::cerr << '\n';
    }
    for (unsigned slot = 0; slot < 60; slot += 2) {
      const auto &pose = view.host_sprites->pose(slot);
      if (!pose || !pose->image)
        continue;
      const int x = std::int16_t(
          word(view.source_profile.wram_entity_screen_coordinates.x + slot));
      const int y = std::int16_t(
          word(view.source_profile.wram_entity_screen_coordinates.y + slot));
      std::cerr << "  pose_slot=" << slot / 2
                << " generation=" << pose->generation
                << " latched_group=" << pose->group
                << " latched_frame=" << pose->frame
                << " latched_format=" << unsigned(pose->format)
                << " latched_surface=" << unsigned(pose->surface)
                << " sprite=" << word((us ? 0x2cd6 : 0x30d4) + slot)
                << " script="
                << word(view.source_profile.wram_entity_script_ids + slot)
                << " xy=" << x << ',' << y
                << " direction=" << word((us ? 0x2af6 : 0x2ef4) + slot)
                << " animation="
                << word(view.source_profile.wram_entity_animation_frame + slot)
                << " surface="
                << word(view.source_profile.wram_entity_surface_flags + slot)
                << " displayed="
                << word(view.source_profile.wram_entity_displayed_sprites +
                        slot)
                << " graphics_table=0x" << std::hex
                << ((word((us ? 0x2a06 : 0x2e04) + slot) << 16) |
                    word((us ? 0x29ca : 0x2dc8) + slot))
                << std::dec << " image=" << pose->image->width << 'x'
                << pose->image->height;
      for (unsigned part = 0; part < pose->image->parts.size(); ++part) {
        const auto &piece = pose->image->parts[part];
        const int left = x + piece.left, top = y + piece.top - 1;
        if (int(px) >= left && int(px) < left + 16 && int(py) >= top &&
            int(py) < top + 16)
          std::cerr << " affected_part=" << part << " index="
                    << unsigned(piece.indices[(py - top) * 16 + px - left]);
      }
      std::cerr << '\n';
    }
    break;
  }
}
void run(const eb::GameAssets &assets, unsigned width, std::uint64_t frames,
         bool probe, const std::string &prefix, std::uint64_t snapshot_frame,
         unsigned snapshot_row, bool world_replay, const std::string &save_path,
         const std::string &input_path) {
  const auto start = std::chrono::steady_clock::now();
  const char *region = assets.version == eb::GameVersion::US ? "US" : "JP";
  Coverage coverage(assets.version, world_replay);
  auto source = std::make_unique<Core>(assets, width, nullptr);
  auto host = std::make_unique<Core>(assets, width, &coverage, snapshot_frame,
                                     snapshot_row);
  std::vector<std::uint8_t> original_save;
  const auto read_save = [&] {
    std::ifstream input(save_path, std::ios::binary | std::ios::ate);
    require(bool(input) &&
                input.tellg() == std::streamoff(source->bus.save_ram.size()),
            "save file must contain exactly one complete save RAM image");
    std::vector<std::uint8_t> bytes(source->bus.save_ram.size());
    input.seekg(0);
    input.read(reinterpret_cast<char *>(bytes.data()), bytes.size());
    require(bool(input), "cannot read save file " + save_path);
    return bytes;
  };
  if (world_replay) {
    original_save = read_save();
    std::copy(original_save.begin(), original_save.end(),
              source->bus.save_ram.begin());
    host->bus.save_ram = source->bus.save_ram;
  }
  std::uint64_t callbacks = 0, audio_frames = 0, phase_start = 0;
  eb::InputReplay bootstrap(eb::input_script(input_path));
  unsigned world_phase = 0;
  std::array<unsigned, 5> walking_frames{}, moving_frames{};
  const auto position = [&] {
    const auto &party =
        source->bus.scene_read_view().source_profile.party_state;
    const auto word = [&](unsigned at) {
      return unsigned(source->bus.work_ram[at]) |
             unsigned(source->bus.work_ram[at + 1]) << 8;
    };
    return std::array<unsigned, 2>{word(party.leader_x), word(party.leader_y)};
  };
  std::cout << region << " replay=" << (world_replay ? "Twoson" : "title-demo")
            << " width=" << width << " target_frames=" << frames << '\n'
            << std::flush;
  try {
    compare_state(*source, *host);
    while (source->bus.completed_frames < frames) {
      const auto frame = source->bus.completed_frames;
      std::uint16_t buttons = 0;
      const auto before_position = position();
      unsigned walking_segment = 5;
      if (world_replay) {
        const auto a = source->debug.snapshot(), b = host->debug.snapshot();
        require(std::tie(a.ready, a.busy, a.party, a.status) ==
                    std::tie(b.ready, b.busy, b.party, b.status),
                "debug route state differs");
        if (world_phase == 0) {
          buttons = input_path.empty()
                        ? (frame > 600 && frame % 60 < 5 ? 0x1080 : 0)
                        : bootstrap.buttons_for_frame(frame);
          if (a.ready) {
            world_phase = 1;
            phase_start = frame;
          }
        } else if (world_phase == 1 && frame >= phase_start + 180) {
          source->debug.configure({true, true, true, true});
          host->debug.configure({true, true, true, true});
          source->debug.request({eb::GameDebugRequest::Kind::Teleport, 2, {}});
          host->debug.request({eb::GameDebugRequest::Kind::Teleport, 2, {}});
          world_phase = 2;
          phase_start = frame;
        } else if (world_phase == 2) {
          buttons =
              a.status.starts_with("Waiting") && frame % 30 < 5 ? 0x80 : 0;
          if (frame > phase_start + 300 && !a.busy) {
            const auto destinations = eb::debug_destinations();
            const auto target =
                std::find_if(destinations.begin(), destinations.end(),
                             [](auto value) { return value.id == 2; });
            require(
                target != destinations.end() &&
                    a.status ==
                        std::string("Teleported to ") + target->name + "." &&
                    before_position ==
                        std::array<unsigned, 2>{target->x, target->y},
                "Twoson teleport did not complete at its authored coordinates");
            world_phase = 3;
            phase_start = frame;
            coverage.walking = true;
            std::cout << "  Twoson walking begins at frame=" << frame << '\n'
                      << std::flush;
          }
        } else if (world_phase == 3) {
          // Same authored gameplay route as presentation_differential:
          // both horizontal directions, both diagonals, then a stop.
          constexpr std::uint16_t walk[] = {0x100, 0x200, 0x900, 0x600, 0};
          const auto segment = ((frame - phase_start) / 180) % 5;
          buttons = walk[segment];
          ++walking_frames[segment];
          walking_segment = segment;
        }
      }
      source->advance(buttons);
      host->advance(buttons);
      compare_state(*source, *host);
      if (walking_segment < 5) {
        const auto after = position();
        const int dx =
            int((after[0] - before_position[0] + 32768) & 65535) - 32768;
        const int dy =
            int((after[1] - before_position[1] + 32768) & 65535) - 32768;
        const bool moved[] = {dx > 0, dx < 0, dx > 0 && dy < 0,
                              dx < 0 && dy > 0, dx == 0 && dy == 0};
        moving_frames[walking_segment] += moved[walking_segment];
      }
      compare_frames(*source, *host, coverage);
      for (const auto &frame : source->completed)
        require(frame.frame == ++callbacks,
                "completed hardware frame was skipped");
      source->completed.clear();
      host->completed.clear();
      const auto expected = source->dsp.take_stereo_samples(),
                 actual = host->dsp.take_stereo_samples();
      equal_storage(expected, actual, "interleaved PCM");
      audio_frames += actual.size() / 2;
      require(audio_frames == host->dsp.generated_stereo_frame_count(),
              "PCM accounting differs");
      if (source->bus.completed_frames % 1500 == 0)
        std::cout << "  verified frame=" << source->bus.completed_frames
                  << diagnostics(*host)
                  << " host_oam_frames=" << coverage.matched_frames
                  << " host_direct_frames=" << coverage.direct_frames << '\n'
                  << std::flush;
    }
    if (world_replay)
      equal_storage(original_save, read_save(), "source save file changed");
    if (!probe) {
      if (world_replay)
        require(world_phase == 3 &&
                    std::all_of(walking_frames.begin(), walking_frames.end(),
                                [](auto count) { return count >= 179; }),
                "Twoson route did not complete both directions, diagonals, and "
                "stop");
      if (world_replay)
        require(std::all_of(moving_frames.begin(), moving_frames.end(),
                            [](auto count) { return count >= 30; }),
                "Twoson route inputs did not produce both directions, "
                "diagonals, and a stop");
      coverage.require_full_run();
    }
    // verify_batch_admission() separately requires a real native batch
    // against the instruction oracle. The title demo need not visit that
    // gameplay helper; its batch counts still compare exactly above.
  } catch (const std::exception &error) {
    visual_diagnostics(*source, *host, prefix);
    std::cerr << "  source " << source->cpu.describe_registers()
              << "\n  host   " << host->cpu.describe_registers() << '\n';
    throw std::runtime_error(std::string(region) + " frame=" +
                             std::to_string(host->bus.completed_frames) +
                             " steps=" + std::to_string(host->steps) +
                             diagnostics(*host) + ": " + error.what());
  }
  std::cout << (probe ? "PARTIAL " : "PASS ") << region
            << " replay=" << (world_replay ? "Twoson" : "title-demo")
            << " frames=" << callbacks << " steps=" << host->steps
            << " audio_frames=" << audio_frames
            << " native_batches=" << host->cpu.native_gameplay_batches()
            << diagnostics(*host)
            << " host_oam_frames=" << coverage.matched_frames
            << " host_oam_parts=" << coverage.matched_parts
            << " host_direct_frames=" << coverage.direct_frames
            << " direct_rasters=" << coverage.direct_rasters
            << " margin_direct_poison_edges=" << coverage.extended_poison_edges
            << " coverage_by_1500_frames=";
  for (auto count : coverage.matched_intervals)
    std::cout << count << ',';
  if (world_replay) {
    std::cout << " movement_frames=";
    for (auto count : moving_frames)
      std::cout << count << ',';
  }
  std::cout << " elapsed_seconds="
            << std::chrono::duration<double>(std::chrono::steady_clock::now() -
                                             start)
                   .count()
            << '\n';
}
} // namespace

int main(int argc, char **argv) {
  try {
    std::vector<std::filesystem::path> packs;
    unsigned width = 522;
    std::uint64_t frames = 9000;
    std::uint64_t snapshot_frame = 0;
    unsigned snapshot_row = 223;
    bool probe = false, world_replay = false;
    std::string prefix, save_path, input_path;
    for (int i = 1; i < argc; ++i) {
      const std::string arg = argv[i];
      if (arg == "--assets" && i + 1 < argc)
        packs.emplace_back(argv[++i]);
      else if (arg == "--frames" && i + 1 < argc)
        frames = std::stoull(argv[++i]);
      else if (arg == "--width" && i + 1 < argc)
        width = std::stoul(argv[++i]);
      else if (arg == "--probe")
        probe = true;
      else if (arg == "--world-replay")
        world_replay = true;
      else if (arg == "--save" && i + 1 < argc)
        save_path = argv[++i];
      else if (arg == "--input-script" && i + 1 < argc)
        input_path = argv[++i];
      else if (arg == "--output-prefix" && i + 1 < argc)
        prefix = argv[++i];
      else if (arg == "--snapshot-frame" && i + 1 < argc)
        snapshot_frame = std::stoull(argv[++i]);
      else if (arg == "--snapshot-row" && i + 1 < argc)
        snapshot_row = std::stoul(argv[++i]);
      else
        throw std::invalid_argument(
            "host_sprite_differential --assets "
            "pack.ebpak [--assets other.ebpak] "
            "[--frames 9000] [--width 522] [--output-prefix path] [--probe] "
            "[--snapshot-frame N --snapshot-row R] [--world-replay --save FILE "
            "[--input-script new_game.input]]");
    }
    require(!packs.empty() && frames > 0 &&
                (frames >= (world_replay ? 3000u : 9000u) || probe),
            "supply local assets and at least 9000 title-demo frames or 3000 "
            "world-replay frames (short diagnostic runs require --probe)");
    require(world_replay ? packs.size() == 1 && !save_path.empty()
                         : save_path.empty(),
            "--world-replay requires one regional asset pack and --save FILE");
    require(world_replay || input_path.empty(),
            "--input-script bootstraps only the world replay; the title demo "
            "uses no input");
    require(width >= 256 && width <= 1024 && !(width & 1),
            "width must be even and within 256..1024");
    require(snapshot_row < 224,
            "diagnostic snapshot row must be within 0..223");
    for (const auto &pack : packs) {
      const auto assets = eb::load_game_assets(pack, eb::asset_profiles());
      verify_batch_admission(assets);
      run(assets, width, frames, probe, prefix, snapshot_frame, snapshot_row,
          world_replay, save_path, input_path);
    }
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
