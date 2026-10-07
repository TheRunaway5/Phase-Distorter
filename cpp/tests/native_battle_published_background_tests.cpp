#include "native_battle_frame_fixture.hpp"
#include "eb/native/battle/background_loader.hpp"

namespace {
using namespace battle_frame_test;
using namespace eb::native::battle;
std::vector<std::uint8_t> retained_image(eb::GameVersion version) {
  std::vector<std::uint8_t> bytes(0x110000);
  const auto layout = battle_background_layout(version);
  for (unsigned i = 0; i < 327; ++i) bytes[layout.configurations + i * 17 + 2] = 2;
  bytes[layout.configurations + 3 * 17] = 1;
  for (unsigned i = 0; i < 103; ++i) {
    pointer(bytes, layout.graphics + i * 4, 0x1000);
    pointer(bytes, layout.arrangements + i * 4, 0x1100);
  }
  for (unsigned i = 0; i < 114; ++i) pointer(bytes, layout.palettes + i * 4, 0x1200);
  unsigned at = 0x1000; zero_run(bytes, at, 0x2000);
  at = 0x1100; zero_run(bytes, at, 0x800);
  pointer(bytes, layout.arrangements + 4, 0x1300);
  // Each tile references384, just beyond LOAD's real secondary copy.
  bytes[0x1300] = 0xeb; bytes[0x1301] = 0xff;
  bytes[0x1302] = 0x80; bytes[0x1303] = 1;
  bytes[0x1304] = 0xff;
  return bytes;
}
std::uint32_t pixel(const eb::DirectSceneFrame &frame, unsigned layer, int priority,
                    unsigned x = 0, unsigned y = 0) {
  for (const auto &quad : frame.quads)
    if (unsigned(quad.layer) == layer && quad.priority == priority && !quad.object)
      return frame.atlas.at((quad.v + y) * frame.atlas_width + quad.u + x);
  throw std::runtime_error("Expected physical background plane is absent");
}
ScenePalette colors() {
  ScenePalette values{};
  values[65] = {0, 0, 31}; values[97] = {31, 0, 0};
  values[98] = {0, 31, 0}; values[105] = {31, 31, 0};
  values[33] = {31, 0, 31};
  return values;
}
void projection() {
  auto frame = battle_background(2).snapshot();
  frame.secondary = frame.primary;
  BackgroundDisplayState layout{0, {0,0,0x40,0x48}, {0,0x31}};
  PsiDisplayState display;
  // BG4 tile384 lives at7800. The catalog has no role in its colors.
  display.set_vram_byte(0x9000, 0x80); display.set_vram_byte(0x9001, 1);
  display.set_vram_byte(0x7802, 0x80);
  const auto first = frame.draw_published_layers(colors(), display.vram(), layout);
  check(pixel(*first, 3, 0) == 0xffff0000 && pixel(*first,3,0,1) == 0,
        "Published retained tile or index-zero transparency differs");
  display.set_vram_byte(0x9001, 0xed); // tile384, palette3, high, H/V flip
  display.set_vram_byte(0x780d, 1); // flipped source(7,6), color2 -> palette110
  auto palette = colors(); palette[110] = {0,31,0};
  const auto flipped = frame.draw_published_layers(palette, display.vram(), layout);
  check(pixel(*flipped,3,3) == 0xff00ff00 && pixel(*flipped,3,0) == 0,
        "Physical palette, flip or tile priority was ignored");
  check(pixel(*first,3,0) == 0xffff0000, "Retained frame changed with physical VRAM");
  // Large maps select a separate32x32 screen; scroll and graphics wrap are
  // actual physical registers, including an address aboveFFFF.
  layout.maps[3] = 0x49; frame.secondary->horizontal_scroll = 256;
  display.set_vram_byte(0x9800, 1); display.set_vram_byte(0x9801, 0);
  layout.graphics[1] = 0x81; // BG4 graphics10000 wraps to0000
  display.set_vram_byte(18, 0x80);
  const auto wrapped = frame.draw_published_layers(colors(), display.vram(), layout);
  check(pixel(*wrapped,3,0) == 0xffff0000, "Physical map screen or VRAM bank wrap differs");
  // BGMODE's16-pixel tile size retains subtile selection and descriptor flips.
  layout.mode = 0x80; layout.maps[3] = 0x48;
  frame.secondary->horizontal_scroll = 8;
  display.set_vram_byte(0x9000, 0); display.set_vram_byte(0x9001, 0);
  const auto large = frame.draw_published_layers(colors(), display.vram(), layout);
  check(pixel(*large,3,0) == 0xffff0000, "Large tile's right subtile was not selected");
  layout.mode = 1;
  rejects([&] { frame.draw_published_layers(colors(), display.vram(), layout); },
          "Wrong actual display mode accepted");
}
void loader_publication(eb::GameVersion version) {
  BattleBackgroundScenes resources(retained_image(version), version);
  BackgroundDisplayState layout{};
  FrameFixture f(version, 2);
  BackgroundLoader loader(resources, f.background, layout, f.colors, f.scratch, f.display,
      f.frame_display, f.fade, f.f.clock, f.frame_state, f.swirl, f.visual, f.layers, f.layer);
  check(resources.artwork_dependency({2,3,0}) == BattleBackgroundArtworkDependency{1,384},
        "Retained artwork case did not exercise the catalog frontier");
  rejects([&] { resources.prepare({2,3,0}); }, "Catalog-only guard was bypassed");
  f.display.set_vram_byte(0x7802, 0x80);
  f.fade.force_blank(); loader.load({2,3,0});
  check(f.background.display_layout(f.display) == &layout &&
        f.display.vram_byte(0x7802) == 0x80 && !loader.failed(),
        "Loader lost its exact display owner or overwrote retained artwork");
  rejects([&] { f.background.snapshot().draw_layers(colors()); },
          "Catalog rendering fabricated retained artwork");
  PsiDisplayState foreign;
  rejects([&] { f.background.display_layout(foreign); }, "Foreign published VRAM accepted");
  f.colors.displayed[6][1] = 31; f.colors.displayed[6][2] = 31 << 5;
  f.colors.upload_mode = 0;
  f.fade.write_brightness(15);
  const eb::DirectSceneFrame stamp{256,256,224,9,27,{}, {}, {}, {}, {}};
  const auto first = f.publication.capture(stamp);
  check(pixel(*first,3,0) == 0xffff0000, "Battle publisher ignored retained physical artwork");
  f.scratch.bytes[0x500] = 0; f.scratch.bytes[0x501] = 0x80;
  auto upload = f.display.begin_transfer({PsiTransferKind::Vram,0x500,2,0x3c01,0}, f.scratch, f.fade);
  check(upload->advance() && f.display.pending().size() == 1, "Real retained-tile upload was not queued");
  const auto serial = f.display.publication_serial();
  const auto before = f.display.vram();
  const auto frame_before = f.frame_display.screen();
  const auto fade = f.fade.state();
  auto bad = stamp; bad.width = 255;
  rejects([&] { f.publication.capture_next(bad); }, "Invalid prospective capture accepted");
  check(f.display.vram() == before && f.display.pending().size() == 1 &&
        f.display.publication_serial() == serial && f.fade.state() == fade &&
        f.frame_display.screen().objects.has_value() == frame_before.objects.has_value() &&
        f.frame_display.screen().scroll == frame_before.scroll,
        "Failed physical capture committed transport or fade");
  check(pixel(*f.publication.capture(stamp),3,0) == 0xffff0000,
        "Read-only capture exposed queued artwork before publication");
  const auto second = f.publication.capture_next(stamp);
  check(pixel(*second,3,0) == 0xff00ff00 && f.display.pending().empty() &&
        f.display.publication_serial() == serial + 1,
        "Prospective full-VRAM capture failed exact queued publication");
  check(pixel(*first,3,0) == 0xffff0000, "A later publication changed the retained first frame");
}
}
int main() {
  try {
    projection(); loader_publication(eb::GameVersion::US); loader_publication(eb::GameVersion::JP);
    std::cout << "Native published battle backgrounds: " << battle_frame_test::checks << " checks passed\n";
    return 0;
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
