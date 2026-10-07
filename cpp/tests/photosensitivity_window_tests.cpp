#include "eb/asset_store.hpp"
#include "eb/presentation_pipeline.hpp"
#include "eb/snapshot_archive.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "native_encounter_source_fixture.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
void require(bool ok, const char *message) {
  if (!ok)
    throw std::runtime_error(message);
}
void word(eb::SnesBus &bus, unsigned address, unsigned value) {
  bus.video_ram[address] = value;
  bus.video_ram[address + 1] = value >> 8;
}
void draw(eb::SnesBus &bus) {
  const auto end = bus.completed_frames + 2;
  while (bus.completed_frames < end)
    bus.advance_cpu_cycles(1000);
}
eb::PresentationFrame picture(const eb::SnesBus &bus, unsigned frame) {
  return {bus.presentation_pixels(),
          bus.presentation_width(),
          0,
          frame,
          {},
          {},
          {},
          {true, false, 0},
          bus.presentation_unfiltered_mask()};
}
void window(eb::GameVersion version, unsigned layout, unsigned width, int fps) {
  const bool battle = layout != 0;
  auto bus =
      std::make_unique<eb::SnesBus>(std::array<std::uint8_t, 1>{0}, version);
  bus->set_presentation_width(width);
  bus->set_presentation_effects_enabled(true);
  bus->write_byte(0x2100, 15);
  // The source window page is BG1 in battle and BG3 in the overworld.
  // Both use the same two-bit artwork at VRAM word $6000, map $7c00.
  const unsigned layer = layout == 1 ? 0 : 2;
  bus->write_byte(0x2105, layout == 1 ? 0 : 9);
  bus->write_byte(0x2107 + layer, 0x7c);
  bus->write_byte(layer == 0 ? 0x210b : 0x210c, 6);
  bus->write_byte(0x212c, 1u << layer);
  // Two-bit white ink / solid window fill.
  for (unsigned row = 0; row < 8; ++row)
    word(*bus, 0xc010 + row * 2, 0xff00);
  word(*bus, 0xf800 + (1 * 32 + 1) * 2, 0x2001);
  const unsigned color = 2;
  bus->palette_ram[color * 2] = 0xff;
  bus->palette_ram[color * 2 + 1] = 0x7f;
  const auto battle_at = eb::source_profile(version).wram_battle_mode_flag;
  bus->work_ram[battle_at] = battle;
  draw(*bus);
  const auto raw = bus->presentation_pixels();
  const unsigned margin = (width - 256) / 2;
  const unsigned text_at = 8 * width + margin + 10;
  require(raw[text_at] == 0xffffffff,
          "Window fixture failed to display white ink");
  require(bus->presentation_unfiltered_mask()[text_at],
          "Window artwork lost its presentation mask");
  eb::GameSceneRenderer overlay;
  auto view = bus->scene_read_view();
  std::array<std::uint8_t, 0x40> registers;
  std::copy(view.ppu_registers.begin(), view.ppu_registers.end(), registers.begin());
  registers[0x2c] |= 16;
  view.ppu_registers = registers;
  overlay.set_presentation_width(view, width);
  overlay.set_presentation_effects_enabled(view, true);
  overlay.begin_scanline(view, 8);
  require(overlay.compose_presentation_pixel(
              view, 10, 8, {0x03e0, 12, 4, false, 129}, false) == 0xff00ff00 &&
              overlay.presentation_unfiltered_mask()[text_at],
          "Prompt drawn on a text box lost its color exemption");
  if (fps == 60) {
    eb::SnapshotArchive archive;
    archive(*bus);
    auto saved = archive.release_bytes();
    auto restored =
        std::make_unique<eb::SnesBus>(std::array<std::uint8_t, 1>{0}, version);
    eb::SnapshotArchive loading(saved);
    loading(*restored);
    loading.finish();
    require(std::equal(bus->presentation_unfiltered_mask().begin(),
                       bus->presentation_unfiltered_mask().end(),
                       restored->presentation_unfiltered_mask().begin(),
                       restored->presentation_unfiltered_mask().end()),
            "Snapshot lost the visible window mask");
  }
  eb::DisplaySettings settings;
  settings.frame_limit = fps;
  settings.reduce_flashing = true;
  settings.interpolate_frames = true;
  eb::PresentationPipeline pipeline({}, settings, 60, fps, true,
                                    picture(*bus, 1));
  require(pipeline.current_picture().pixels[text_at] == raw[text_at],
          "Photosensitivity filter dimmed the text box");
  // Changing letters must be immediate even while the background has feedback.
  bus->palette_ram[color * 2] = 0;
  bus->palette_ram[color * 2 + 1] = 0x7c;
  bus->palette_ram[0] = 0xff;
  bus->palette_ram[1] = 0x7f;
  draw(*bus);
  pipeline.completed_frame(picture(*bus, 2));
  pipeline.simulation_finished(picture(*bus, 2), 1, {});
  const auto changed = bus->presentation_pixels()[text_at];
  require(changed == 0xff0000ff, "Window fixture failed to change ink");
  require(pipeline.current_picture().pixels[text_at] == changed &&
              pipeline.picture({}).pixels[text_at] == changed,
          "Photosensitivity feedback smeared changing text");
  require(pipeline.current_picture().pixels[0] == 0xff181818,
          "Excluding text disabled the Giygas background filter");
  if (!battle) {
    // The lightning scripts reuse the window's page for a screen effect.
    // A text-layer exemption must not reopen this source of flashes.
    const auto &source = eb::source_profile(version);
    const unsigned event = source.lightning_scripts.franklin_badge_reflection;
    bus->work_ram[source.wram_entity_script_ids] = event;
    bus->work_ram[source.wram_entity_script_ids + 1] = event >> 8;
    bus->work_ram[source.wram_entity_script_variable0] = 1;
    draw(*bus);
    require(!bus->presentation_unfiltered_mask()[text_at],
            "Lightning on the text page bypassed photosensitivity filtering");
  }
  bus->write_byte(0x212c, 0);
  draw(*bus);
  require(std::all_of(bus->presentation_unfiltered_mask().begin(),
                      bus->presentation_unfiltered_mask().end(),
                      [](auto pixel) { return !pixel; }),
          "Hidden window retained an exemption over the battle picture");
}
void enemy(eb::GameVersion version, unsigned mode, unsigned palette, unsigned width, int fps) {
  auto bus = std::make_unique<eb::SnesBus>(std::array<std::uint8_t, 1>{0}, version);
  bus->set_presentation_width(width);
  bus->set_presentation_effects_enabled(true);
  // LOAD_ENEMY_BATTLE_SPRITES: OBJ at word $2000, 16/32-pixel
  // pieces; LOAD_BATTLE_SPRITE uses priority 2 for normal/alternate art.
  bus->write_byte(0x2100, 15); bus->write_byte(0x2101, 0x61);
  const unsigned ui_layer = mode == 0 ? 0 : 2, ui_bit = 1u << ui_layer;
  bus->write_byte(0x2105, mode); bus->write_byte(0x212c, 16 | ui_bit);
  bus->write_byte(0x2107 + ui_layer, 0x7c);
  bus->write_byte(ui_layer == 0 ? 0x210b : 0x210c, 6);
  for (unsigned row = 0; row < 8; ++row) word(*bus, 0xc010 + row * 2, 0xff00);
  word(*bus, 0xf800 + (1 * 32 + 1) * 2, 0x2001);
  bus->palette_ram[4] = 0xff; bus->palette_ram[5] = 0x7f;
  const unsigned battle_at = eb::source_profile(version).wram_battle_mode_flag;
  bus->work_ram[battle_at] = 1;
  for (unsigned slot = 0; slot < 128; ++slot) bus->object_attributes[slot * 4 + 1] = 240;
  bus->object_attributes[0] = 72; bus->object_attributes[1] = 80;
  bus->object_attributes[3] = 0x20 | palette * 2;
  for (unsigned row = 0; row < 8; ++row) bus->video_ram[0x4000 + row * 2] = 0xee;
  const unsigned color_at = (129 + palette * 16) * 2;
  bus->palette_ram[color_at] = 0xff; bus->palette_ram[color_at + 1] = 0x7f;
  draw(*bus);
  const unsigned at = 80 * width + (width - 256) / 2 + 72;
  const unsigned text_at = 8 * width + (width - 256) / 2 + 10;
  require(bus->presentation_pixels()[at] == 0xffffffff, "Enemy fixture failed to display opaque artwork");
  require(bus->presentation_pixels()[at + 3] == 0xff000000 &&
          !bus->presentation_unfiltered_mask()[at + 3], "Transparent enemy pixel exempted its background");
  const auto memory = bus->work_ram;
  const auto vram = bus->video_ram;
  const auto colors = bus->palette_ram;
  const auto oam = bus->object_attributes;
  const auto native = bus->native_framebuffer;
  eb::DisplaySettings settings; settings.frame_limit = fps; settings.reduce_flashing = true;
  settings.direct_rendering = true;
  eb::PresentationPipeline pipeline({}, settings, 60, fps, true, picture(*bus, 1));
  require(pipeline.current_picture().pixels[at] == 0xffffffff,
          "Photosensitivity feedback faded in the enemy sprite");
  require(pipeline.current_picture().pixels[text_at] == 0xffffffff,
          "Enemy exemption lost the text box exemption");
  require(bus->work_ram == memory && bus->video_ram == vram && bus->palette_ram == colors &&
          bus->object_attributes == oam && bus->native_framebuffer == native,
          "Enemy exemption changed original game storage or pixels");
  for (unsigned i = 0; i < 5; ++i)
    require(pipeline.picture({}).pixels[at] == 0xffffffff, "Host redraw faded the enemy sprite");
  // Palette changes are immediate, including the alternate targeting palette.
  bus->palette_ram[color_at] = 0; bus->palette_ram[color_at + 1] = 0x7c;
  bus->palette_ram[0] = 0xff; bus->palette_ram[1] = 0x7f;
  draw(*bus); pipeline.completed_frame(picture(*bus, 2)); pipeline.simulation_finished(picture(*bus, 2), 1, {});
  require(pipeline.current_picture().pixels[at] == 0xff0000ff,
          "Enemy palette change faded through photosensitivity history");
  require(pipeline.current_picture().pixels[at + 3] == 0xff181818,
          "Enemy transparency bypassed background feedback");
  // Moving/removing artwork must not leave its previous colors behind.
  bus->object_attributes[0] = 96;
  draw(*bus); pipeline.completed_frame(picture(*bus, 3)); pipeline.simulation_finished(picture(*bus, 3), 1, {});
  require(pipeline.current_picture().pixels[at + 24] == 0xff0000ff &&
          pipeline.current_picture().pixels[at] == 0xff181818 && !bus->presentation_unfiltered_mask()[at],
          "Moving enemy left a color trail or a stale exemption");
  bus->object_attributes[1] = 240;
  bus->palette_ram[0] = 0xe0; bus->palette_ram[1] = 3;
  draw(*bus); pipeline.completed_frame(picture(*bus, 4)); pipeline.simulation_finished(picture(*bus, 4), 1, {});
  require(!bus->presentation_unfiltered_mask()[at + 24] &&
          pipeline.current_picture().pixels[at + 24] == 0xff001800,
          "Removed enemy faded out through photosensitivity history");
  require(pipeline.current_picture().pixels[text_at] == 0xffffffff,
          "Removing enemy artwork changed the text box");
  // A non-window BG hiding the enemy owns this pixel; it must stay filtered.
  bus->object_attributes[1] = 80;
  bus->write_byte(0x2107 + ui_layer, 0x38);
  word(*bus, 0x7000 + (10 * 32 + 12) * 2, 0x2001);
  draw(*bus);
  require(bus->presentation_pixels()[at + 24] == 0xffffffff &&
          !bus->presentation_unfiltered_mask()[at + 24], "Hidden enemy exempted the foreground BG");
  // BATTLE_ROUTINE clears its flag before the original fade completes.
  bus->write_byte(0x2107 + ui_layer, 0x7c);
  draw(*bus);
  bus->work_ram[battle_at] = 0; bus->write_byte(0x2100, 7);
  draw(*bus); pipeline.completed_frame(picture(*bus, 5)); pipeline.simulation_finished(picture(*bus, 5), 1, {});
  require(bus->presentation_unfiltered_mask()[at + 24] &&
          pipeline.current_picture().pixels[at + 24] == bus->presentation_pixels()[at + 24],
          "Battle exit reintroduced feedback on the enemy's authored fade");
  bus->write_byte(0x2100, 0x80); draw(*bus);
  require(std::none_of(bus->presentation_unfiltered_mask().begin(), bus->presentation_unfiltered_mask().end(),
                       [](auto value) { return value != 0; }), "Forced blank retained enemy/text exemptions");
  bus->write_byte(0x2100, 15); bus->write_byte(0x2105, 1);
  bus->write_byte(0x2107, 0x39); bus->write_byte(0x2108, 0x59); bus->write_byte(0x212c, 16);
  draw(*bus);
  require(!bus->presentation_unfiltered_mask()[at + 24], "Battle sprite exemption leaked into the overworld");
}
void source_enemies(const char *path) {
  const auto assets = eb::load_game_assets(path, eb::asset_profiles());
  encounter_reference::Source source(assets);
  source.initialize();
  auto &bus = *source.bus;
  bus.set_presentation_width(522); bus.set_presentation_effects_enabled(true);
  eb::DisplaySettings settings; settings.frame_limit = 144; settings.reduce_flashing = true;
  eb::PresentationPipeline pipeline({}, settings, 60, 144, true);
  std::uint64_t enemies = 0, windows = 0, changed = 0;
  unsigned frames = 0, enemy_frames = 0, alternate_frames = 0;
  bus.on_presentation_frame = [&](auto pixels, unsigned width, auto number) {
    const eb::PresentationFrame raw{pixels, width, bus.presentation_fixed_aspect(), number,
        bus.presentation_effect_mask(), bus.presentation_effect_reference(), {},
        bus.flashing_context(), bus.presentation_unfiltered_mask()};
    pipeline.completed_frame(raw);
    const auto output = pipeline.current_picture().pixels;
    const auto view = bus.scene_read_view();
    const auto &regs = view.ppu_registers;
    if ((regs[0] & 0x80) || !bus.work_ram[eb::source_profile(assets.version).wram_battle_mode_flag]) return;
    ++frames;
    unsigned visible = 0, alternate = 0;
    for (unsigned y = 0; y < 224; ++y) {
      std::array<eb::PpuPixel, 256> objects{};
      view.sample_sprite_pixels(y, objects, 0);
      for (unsigned x = 0; x < 256; ++x) {
        const auto &object = objects[x];
        bool enemy_wins = object.priority >= 0 && (regs[0x2c] & 16) &&
            !((regs[0x2e] & 16) && view.layer_window_contains(4, x));
        for (unsigned layer = 0; layer < 4 && enemy_wins; ++layer)
          if ((regs[0x2c] & (1u << layer)) &&
              !((regs[0x2e] & (1u << layer)) && view.layer_window_contains(layer, x)))
            enemy_wins = view.sample_background_pixel(layer, x, y + 1).priority < object.priority;
        const auto index = y * width + (width - 256) / 2 + x;
        // A fade can enable OBJ partway through a frame: current OAM cannot
        // establish ownership of earlier black scanlines. Check visible art.
        if (enemy_wins && pixels[index] != 0xff000000) {
          require(raw.unfiltered_mask[index] && output[index] == pixels[index],
                  "Original source enemy artwork received photosensitivity filtering");
          ++enemies; ++visible;
          alternate += object.palette_index >= 192;
        } else if (raw.unfiltered_mask[index]) {
          require(output[index] == pixels[index], "Original battle text received photosensitivity filtering");
          ++windows;
        }
        changed += !raw.unfiltered_mask[index] && output[index] != pixels[index];
      }
    }
    enemy_frames += visible != 0; alternate_frames += alternate != 0;
  };
  // Execute the complete BATTLE_ROUTINE opening and first command window.
  source.start_main(); source.until(source.jp ? 0xc24f02 : 0xc24fcf);
  source.until(source.jp ? 0xc23040 : 0xc2311b);
  source.fixed_buttons = 0;
  const auto &layout = eb::source_profile(assets.version).battler_layout;
  // Explicit incoming effect state, rendered by the original alternate-map
  // path; no renderer commands or outgoing OAM are replaced by the fixture.
  bus.work_ram[layout.table_address + 8 * layout.entry_size + 75] = 1;
  const auto finish = bus.completed_frames + 30;
  for (unsigned i = 0; bus.completed_frames < finish; ++i) {
    require(i < 30000000, "Source command window did not advance");
    source.step();
  }
  require(enemies > 1000 && windows > 1000 && changed > 1000 && enemy_frames > 10 && alternate_frames > 3,
          "Source replay did not cover enemy, alternate palette, text and filtered background");
  std::cout << assets.title << " source battle frames=" << frames << " enemy pixels=" << enemies
            << " text pixels=" << windows << " alternate frames=" << alternate_frames
            << "; foreground colors exact, background filtered\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc > 1) {
      for (int i = 1; i < argc; ++i) source_enemies(argv[i]);
      return 0;
    }
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
      for (unsigned layout : {0u, 1u, 2u})
        for (unsigned width : {256u, 398u, 522u, 1024u})
          for (int fps : {60, 144, 300})
            window(version, layout, width, fps);
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
      for (unsigned mode : {0u, 9u})
        for (unsigned palette : {0u, 4u})
          for (unsigned width : {256u, 398u, 522u, 1024u})
            for (int fps : {60, 144, 300}) enemy(version, mode, palette, width, fps);
    std::cout << "Regional enemies and text boxes stay unfiltered at native, wide, and "
                 "ultrawide widths\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
