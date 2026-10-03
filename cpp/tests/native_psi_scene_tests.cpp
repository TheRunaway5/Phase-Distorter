#include "eb/native/battle/psi_scene.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb;
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void require(bool ok, const char *why) {
  ++checks;
  if (!ok)
    throw std::runtime_error(why);
}
template <class F> void rejects(F f, const char *why) {
  bool caught = false;
  try {
    f();
  } catch (const std::exception &) {
    caught = true;
  }
  require(caught, why);
}
std::uint16_t packed(unsigned r, unsigned g, unsigned b) {
  return std::uint16_t(r | (g << 5) | (b << 10));
}
std::uint32_t argb(unsigned word) {
  return palette_argb({std::uint8_t(word & 31), std::uint8_t((word >> 5) & 31),
                       std::uint8_t((word >> 10) & 31)});
}
void tile(PsiDisplayState &display, unsigned depth, unsigned id, unsigned index,
          unsigned row = 8, unsigned mask = 255) {
  for (unsigned plane = 0; plane < depth; ++plane)
    for (unsigned y = 0; y < 8; ++y)
      display.graphics[id * depth * 8 + plane / 2 * 16 + y * 2 + (plane & 1)] =
          (row == 8 || row == y) && (index & (1u << plane)) ? mask : 0;
}
std::vector<std::uint32_t> pixels(const PsiSceneFrame &f,
                                  unsigned width = 256) {
  return rasterize_direct_scene({f.draw(width), {}});
}
void render_modes() {
  for (unsigned depth : {2u, 4u}) {
    PaletteBankState colors;
    PsiDisplayState display;
    for (unsigned i = 0; i < 256; ++i)
      colors.staged_color(i) =
          std::uint16_t(0x8000 | packed(i & 31, (i >> 3) & 31, 11));
    colors.upload_mode = 24;
    colors.publish_pending();
    const unsigned index = depth == 2 ? 3 : 11;
    tile(display, depth, 1, index, 1, 0x80);
    display.tilemap.fill(1 | 0x3000); // Real queued descriptor: palette4, high.
    const PsiSceneFrame first(display, colors, depth);
    const unsigned identity = (depth == 2 ? 48 : 64) + index;
    const auto raw = first.draw(320, 19, 93);
    require(raw->frame == 19 && raw->scene_identity == 93 && raw->width == 320,
            "PSI capture discarded draw identity");
    require(raw->quads[0].layer ==
                    (depth == 2 ? DirectSceneFrame::Layer::Background2
                                : DirectSceneFrame::Layer::Background1) &&
                raw->quads[0].priority == 6 && raw->quads[1].priority == 9,
            "PSI plane or mode priority differs");
    const auto expected =
        argb(colors.displayed_palette(identity / 16)[identity % 16]);
    const auto p = pixels(first);
    require(
        p[0] == expected && p[1] == 0xff000000 && p[256] == 0xff000000,
        "Planar decoding, transparency, or visible row registration differs");
    const auto wide = pixels(first, 320);
    for (unsigned y = 0; y < 224; ++y)
      for (unsigned x : {0u, 1u, 7u, 8u, 255u})
        require(wide[y * 320 + x + 32] == p[y * 256 + x],
                "Wide PSI sampling shifted the canonical screen");
    display.tilemap.fill(1 | 0x3000 | 0xc000);
    auto flipped = pixels(PsiSceneFrame(display, colors, depth));
    require(flipped[5 * 256 + 7] == expected && flipped[0] == 0xff000000,
            "Full tile descriptor flips were lost");
    display.tilemap.fill(1 | 0x3000);
    display.staged_scroll[depth == 2 ? 1 : 0] = {0xffff, 0xffff};
    require(pixels(PsiSceneFrame(display, colors, depth)) == p,
            "Staged scroll bypassed publication");
    display.publish_scroll();
    require(pixels(PsiSceneFrame(display, colors, depth))[257] == expected,
            "Published signed scroll failed word wrap");
    colors.staged_color(identity) = 31;
    colors.upload_mode = 24;
    colors.upload_mode = 16; // Later enemy effect replaces the PSI request.
    colors.publish_pending();
    require(pixels(PsiSceneFrame(display, colors, depth))[257] == expected,
            "Upper-half DMA exposed a pending PSI palette");
    colors.upload_mode = 8;
    colors.publish_pending();
    require(pixels(PsiSceneFrame(display, colors, depth))[257] == argb(31),
            "Lower-half DMA did not expose the PSI palette");
    require(pixels(first) == p,
            "Retained PSI frame aliased live palette or scroll");
    display.tilemap.fill(std::uint16_t(depth == 2 ? 512 : 256));
    rejects([&] { (void)PsiSceneFrame(display, colors, depth).draw(); },
            "Renderer fabricated tile artwork outside the published plane");
    rejects([&] { (void)first.draw(255); }, "Odd or narrow PSI width accepted");
    rejects([&] { (void)first.draw(4098); }, "Oversized PSI width accepted");
  }
}
void queue_and_lifetime() {
  std::optional<PsiSceneFrame> retained;
  std::vector<std::uint32_t> expected;
  {
    PaletteBankState colors;
    PsiDisplayState display;
    PsiScratch scratch;
    colors.staged_palette(4)[1] = packed(7, 9, 11);
    colors.staged_palette(0)[1] = packed(22, 24, 26);
    colors.upload_mode = 24;
    colors.publish_pending();
    tile(display, 4, 0, 1);
    tile(display, 4, 1, 1);
    display.queue_frame(0xfff0);
    scratch.bytes.fill(1); // Live scratch is read at delivery, not enqueue.
    const auto before = display.tilemap;
    auto preview = display.preview_pending(scratch);
    require(preview[0] == 0x3001 && preview[1023] == 0x3001 &&
                display.pending().size() == 2 && display.tilemap == before,
            "Queue preview committed state or lost word-wrapped live scratch");
    auto old = PsiSceneFrame(display, colors, 4);
    require(
        pixels(old)[0] == argb(packed(22, 24, 26)) &&
            display.pending().size() == 2,
        "Pending map was displayed before publication or zero tile was hidden");
    display.publish_pending(scratch);
    retained.emplace(display, colors, 4);
    expected = pixels(*retained);
    require(expected[0] == argb(packed(7, 9, 11)) && display.pending().empty(),
            "Actual tilemap delivery did not reach pixels");
    display.queue_frame(0);
    display.queue_clear();
    display.publish_pending(scratch);
    require(std::all_of(display.tilemap.begin(), display.tilemap.end(),
                        [](auto x) { return x == 0; }) &&
                pixels(PsiSceneFrame(display, colors, 4))[0] ==
                    argb(packed(22, 24, 26)),
            "Terminal clear did not preserve actual tile0/palette0 semantics");
    display.queue_clear();
    display.queue_frame(0);
    display.publish_pending(scratch);
    require(display.tilemap[0] == 0x3001,
            "Multiple transfers changed source queue order");
    display.graphics.fill(0);
    require(pixels(*retained) == expected,
            "Retained PSI frame aliased graphics or map");
  }
  require(pixels(*retained) == expected,
          "Retained PSI frame borrowed destroyed owners");
}
BattleBackgroundSceneFrame background(unsigned depth) {
  BattleBackgroundSceneFrame out;
  out.bitdepth = depth;
  auto image = std::make_shared<BattleBackgroundArtwork>();
  image->indices.fill(1);
  image->opaque.fill(1);
  out.primary.artwork = image;
  out.secondary = out.primary;
  out.blend = BattleBackgroundBlend::HalfAdd;
  return out;
}
void composition() {
  for (unsigned depth : {2u, 4u}) {
    PaletteBankState colors;
    PsiDisplayState display;
    const unsigned primary = depth == 2 ? 4 : 2;
    colors.staged_palette(primary)[1] = packed(20, 8, 4);
    colors.staged_palette(primary + 2)[1] = packed(2, 30, 2);
    colors.staged_palette(depth == 2 ? 3 : 4)[1] = packed(4, 12, 20);
    colors.upload_mode = 24;
    colors.publish_pending();
    auto bg = background(depth);
    tile(display, depth, 1, 1, 8, 0xf0);
    display.tilemap.fill(0x3001);
    const PsiSceneFrame psi(display, colors, depth);
    DirectSceneFrame::Effects policy;
    const unsigned psi_layer = depth == 2 ? 1 : 0;
    const unsigned primary_layer = depth == 2 ? 2 : 1;
    policy.main[psi_layer] = policy.main[primary_layer] = true;
    policy.sub[primary_layer] = true;
    policy.math[psi_layer] = true;
    policy.use_subscreen = policy.half = true;
    auto composed = psi.compose(bg, policy);
    auto p = rasterize_direct_scene({composed, {}});
    require(
        p[0] == argb(packed(12, 10, 12)) && p[4] == argb(packed(20, 8, 4)),
        "PSI was overlaid on a flattened background or color math ran twice");
    unsigned planes = 0;
    for (auto q : composed->quads)
      if (unsigned(q.layer) == psi_layer)
        ++planes;
    require(planes == 2 && composed->quads.size() == (depth == 2 ? 4 : 3),
            "PSI did not replace its physical plane");
    require(composed->palette_indices.empty(),
            "Captured PSI colors depend on a separately staged palette");
    auto mismatch = bg;
    mismatch.bitdepth = depth == 2 ? 4 : 2;
    rejects([&] { (void)psi.compose(mismatch, policy); },
            "Mixed pixel modes composed");
  }
}
struct Content {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x110000);
  void word(unsigned p, unsigned v) {
    bytes.at(p) = std::uint8_t(v);
    bytes.at(p + 1) = std::uint8_t(v >> 8);
  }
  void pointer(unsigned p, unsigned v) {
    word(p, v);
    word(p + 2, 0xc0 + (v >> 16));
  }
  explicit Content(GameVersion version) {
    const auto l = battle_background_layout(version);
    for (unsigned i = 0; i < 327; ++i)
      bytes[l.configurations + i * 17 + 2] = i == 2 || i == 3 ? 2 : 4;
    for (unsigned i = 0; i < 103; ++i) {
      pointer(l.graphics + i * 4, 0x1000);
      pointer(l.arrangements + i * 4, 0x1100);
    }
    for (unsigned i = 0; i < 114; ++i)
      pointer(l.palettes + i * 4, 0x1200);
    bytes[0x1000] = 31;
    for (unsigned i = 0; i < 32; ++i)
      bytes[0x1001 + i] = i < 16 ? 255 : 0;
    bytes[0x1021] = 255;
    const std::array<std::uint8_t, 7> map{0xe7, 255, 0, 0xe7, 255, 0, 255};
    std::copy(map.begin(), map.end(), bytes.begin() + 0x1100);
    for (unsigned i = 0; i < 16; ++i)
      word(0x1200 + i * 2, 0x8000 | packed(i + 1, i + 3, i + 5));
  }
};
void retained_raw_palette_handoff() {
  for (auto region : {GameVersion::US, GameVersion::JP}) {
    Content content(region);
    constexpr std::uint16_t backup_bits = 0xa55a;
    for (unsigned i = 0; i < 16; ++i)
      content.word(0x1200 + i * 2, packed(i + 1, i + 3, i + 5) |
                                       ((backup_bits >> i & 1) << 15));
    BattleBackgroundScenes catalog(content.bytes, region);
    auto active = catalog.prepare(BattleBackgroundPair{2, 3, 0});
    // This actual brightness producer writes rawFFFF for indices1..3 of the
    // two-bit secondary, retaining a distinct immutable raw backup.
    active.apply_palette_brightness(0xffff);
    const auto retained = active.retained_secondary_palette();
    require(retained.backup_high_bits == backup_bits &&
                retained.base_high_bits == (backup_bits | 0x000e),
            "Active palette projection lost complementary raw high bits");
    for (unsigned i = 0; i < 16; ++i) {
      const auto c = retained.base[i];
      const auto word = packed(c.red, c.green, c.blue) |
                        ((retained.base_high_bits >> i & 1) << 15);
      require(word == active.secondary()->packed_palette_base()[i],
              "Retained active palette cannot reconstruct its actual raw word");
    }
    BattleBackgroundStart start;
    start.retained_secondary_palette = retained;
    auto inactive = catalog.prepare(BattleBackgroundPair{0, 0, 0}, start);
    require(inactive.retained_secondary_palette() == retained,
            "Active-to-inactive handoff changed raw base or backup");
    PaletteBankState colors;
    inactive.halve_palette(colors);
    const auto half = inactive.retained_secondary_palette();
    require(half.base_high_bits == 0 && half.backup_high_bits == backup_bits &&
                half.backup == retained.backup,
            "Inactive halving retained bit15 or changed the raw backup");
    for (unsigned i = 0; i < 16; ++i) {
      const auto c = half.base[i];
      require(
          packed(c.red, c.green, c.blue) ==
              ((active.secondary()->packed_palette_base()[i] >> 1) & 0x3def),
          "Inactive halving diverged from the complete original raw word");
    }
    inactive.restore_palette(colors);
    const auto restored = inactive.retained_secondary_palette();
    require(restored.base == retained.backup &&
                restored.base_high_bits == backup_bits &&
                restored.backup_high_bits == backup_bits,
            "Inactive restore failed to recover every raw backup bit");
    start.retained_secondary_palette = restored;
    auto next = catalog.prepare(BattleBackgroundPair{0, 0, 0}, start);
    require(next.retained_secondary_palette() == restored &&
                inactive.retained_secondary_palette() == restored,
            "Repeated inactive handoff aliased or dropped retained raw state");
  }
}
void background_operations() {
  for (auto region : {GameVersion::US, GameVersion::JP}) {
    Content content(region);
    BattleBackgroundScenes catalog(content.bytes, region);
    for (auto pair :
         {BattleBackgroundPair{0, 1, 4}, BattleBackgroundPair{2, 3, 0},
          BattleBackgroundPair{0, 0, 0}}) {
      BattleBackgroundStart start;
      start.retained_secondary_palette.base.fill({31, 29, 27});
      start.retained_secondary_palette.backup.fill({17, 15, 13});
      auto scene = catalog.prepare(pair, start);
      PaletteBankState colors;
      for (auto &p : colors.staged)
        p.fill(0xabcd);
      colors.upload_mode = 16;
      const auto untouched = colors.staged;
      const auto first = scene.primary().definition().bitdepth == 4 ? 2u : 4u;
      const auto state = scene.primary().state();
      const auto other = scene.secondary() ? scene.secondary()->state()
                                           : BattleBackgroundState{};
      const auto backup = scene.primary().palette_state().backup;
      scene.halve_palette(colors);
      for (unsigned i = 0; i < 16; ++i)
        require(colors.staged_palette(first)[i] ==
                    ((packed(i + 1, i + 3, i + 5) >> 1) & 0x3def),
                "Halving failed current raw RGB5, including color0");
      scene.halve_palette(colors);
      for (unsigned i = 0; i < 16; ++i)
        require(colors.staged_palette(first)[i] ==
                    ((packed(i + 1, i + 3, i + 5) >> 2) & 0x1ce7),
                "Repeated halving used backup rather than the current base");
      require(scene.primary().state() == state &&
                  scene.primary().palette_state().backup == backup &&
                  (!scene.secondary() || scene.secondary()->state() == other),
              "Halving advanced clocks or changed immutable backups");
      if (!scene.secondary())
        require(scene.retained_secondary_palette().base[0] ==
                    PaletteColor{7, 7, 6},
                "Inactive secondary working palette was not halved");
      scene.restore_palette(colors);
      for (unsigned i = 0; i < 16; ++i)
        require(colors.staged_palette(first)[i] ==
                    (0x8000 | packed(i + 1, i + 3, i + 5)),
                "Raw restoration lost authored high bits or color0");
      for (unsigned bank = 0; bank < 16; ++bank)
        if (bank != first && !(scene.secondary() && bank == first + 2))
          require(colors.staged_palette(bank) == untouched[bank],
                  "Background operation wrote an unrelated physical bank");
      require(colors.upload_mode == 16 &&
                  colors.displayed == decltype(colors.displayed){},
              "Background operation acknowledged or published palette DMA");
      if (!scene.secondary())
        require(scene.retained_secondary_palette().base[0] ==
                    PaletteColor{17, 15, 13},
                "Inactive secondary backup was not restored");
    }
    auto shared = catalog.prepare(BattleBackgroundPair{0, 1, 0});
    PaletteBankState colors;
    auto before = shared.primary().packed_palette_base();
    rejects([&] { shared.halve_palette(colors); },
            "Shared-artwork frame-reset dependency silently succeeded");
    require(shared.primary().packed_palette_base() == before &&
                colors.staged == decltype(colors.staged){},
            "Rejected background operation mutated its owners");
  }
}
} // namespace
int main() {
  try {
    render_modes();
    queue_and_lifetime();
    composition();
    background_operations();
    retained_raw_palette_handoff();
    std::cout << "Native PSI scene tests passed: " << checks << " checks\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << "Native PSI scene tests failed after " << checks
              << " checks: " << error.what() << '\n';
    return 1;
  }
}
