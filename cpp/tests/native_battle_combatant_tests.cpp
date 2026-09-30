#include "eb/native/battle_combatants.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
using namespace eb::native;
void require(bool v, const char *why) {
  if (!v)
    throw std::runtime_error(why);
}
template <class F> void rejects(F f) {
  bool failed = false;
  try {
    f();
  } catch (const std::exception &) {
    failed = true;
  }
  require(failed, "Invalid input accepted");
}
struct Fixture {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(500);
  BattleCombatantLayout layout{0, 64, 128, 256, 320, 400, 4, 0, 2, 6, 2, 6, 2};
  void word(unsigned at, unsigned v) {
    bytes.at(at) = v;
    bytes.at(at + 1) = v >> 8;
  }
  void pointer(unsigned at, unsigned v) {
    word(at, v);
    word(at + 2, 0xc0);
  }
  Fixture() {
    for (unsigned shape = 1; shape <= 6; ++shape) {
      pointer((shape - 1) * 5, bytes.size());
      bytes[(shape - 1) * 5 + 4] = shape;
      const unsigned cols = shape == 1 || shape == 3 ? 1
                            : shape < 5              ? 2
                                                     : 4,
                     rows = shape < 3   ? 1
                            : shape < 6 ? 2
                                        : 4;
      std::vector<std::uint8_t> planar(cols * rows * 512);
      for (unsigned tile = 0; tile < cols * rows * 16; ++tile)
        for (unsigned plane = 0; plane < 4; ++plane)
          for (unsigned y = 0; y < 8; ++y)
            planar[tile * 32 + plane / 2 * 16 + y * 2 + (plane & 1)] =
                ((tile % 15 + 1) >> plane & 1) ? 255 : 0;
      for (unsigned at = 0; at < planar.size(); at += 32) {
        bytes.push_back(31);
        bytes.insert(bytes.end(), planar.begin() + at,
                     planar.begin() + at + 32);
      }
      bytes.push_back(255);
      word(128 + (shape - 1) * 4, shape);
      bytes[130 + (shape - 1) * 4] = (shape - 1) % 2;
    }
    for (unsigned c = 0; c < 16; ++c) {
      word(64 + c * 2, c);
      word(96 + c * 2, c << 5);
    }
    pointer(256, 320);
    pointer(264, 340);
    for (unsigned i = 0; i < 4; ++i) {
      bytes[320 + i * 3] = i;
      word(321 + i * 3, i);
    }
    bytes[332] = 255;
    bytes[340] = 1;
    word(341, 4);
    bytes[343] = 1;
    word(344, 5);
    bytes[346] = 255;
  }
};
void retained_publication() {
  Fixture input;
  auto content = std::make_unique<BattleCombatants>(input.bytes, input.layout);
  std::optional<BattleCombatantScene> scene(content->prepare(0));
  std::vector<BattleCombatantPresentation> actors{{8, 0, 0, 100, 100, 100}};
  scene->publish(actors);
  // A by-value snapshot extends the temporary's lifetime here. A reference to
  // the scene's mutable publication instead aliases its next publish/reset.
  const auto &retained = scene->snapshot();
  const auto before = retained.draw();
  const auto pixels = eb::rasterize_direct_scene({before, {}});
  const auto command = retained.commands().front();
  BattleCombatantPalette white{};
  for (auto &color : white)
    color = {31, 31, 31};
  scene->set_alternate_palette(0, white);
  actors[0].x += 40;
  actors[0].alternate = true;
  scene->publish(actors);
  require(eb::rasterize_direct_scene({scene->snapshot().draw(), {}}) != pixels,
          "Retained-publication test did not change the next frame");
  require(retained.commands().size() == 1 &&
              retained.commands()[0] == command &&
              eb::rasterize_direct_scene({retained.draw(), {}}) == pixels,
          "Const-reference snapshot aliases the next scene publication");
  scene.reset();
  content.reset();
  std::fill(input.bytes.begin(), input.bytes.end(), 0);
  require(retained.commands()[0] == command &&
              eb::rasterize_direct_scene({retained.draw(), {}}) == pixels,
          "Retained snapshot depends on destroyed scene or content owner");
}

void test() {
  Fixture f;
  BattleCombatants catalog(f.bytes, f.layout);
  require(catalog.size() == 2 && catalog.prepare(0).resources().size() == 4,
          "Authored count0 resource disappeared");
  for (unsigned shape = 1; shape <= 6; ++shape) {
    auto image = catalog.artwork(shape);
    for (unsigned y = 0; y < image->height; ++y)
      for (unsigned x = 0; x < image->width; ++x) {
        unsigned block = y / 32 * (image->width / 32) + x / 32,
                 tile = block * 16 + (y % 32) / 8 * 4 + (x % 32) / 8;
        require(image->indices[y * image->width + x] == tile % 15 + 1,
                "Block/tile artwork order differs");
      }
  }
  require(catalog.artwork(6)->top == -96,
          "128px authored registration differs");
  auto scene = catalog.prepare(0);
  auto copy = scene;
  for (unsigned i = 0; i < 4; ++i)
    scene.set_alternate_palette(i, catalog.enemy(i).palette);
  std::vector<BattleCombatantPresentation> actors{
      {10, 0, 1, 10, 128, 100}, {9, 1, 0, 9, 128, 100}, {8, 2, 0, 8, 128, 100}};
  scene.publish(actors);
  auto first = scene.snapshot();
  require(first.commands().size() == 3 && first.commands()[0].slot == 8 &&
              first.commands()[1].slot == 9 && first.commands()[2].slot == 10,
          "Row/slot draw ordering differs");
  auto frame = first.draw(256, 1, 4);
  require(frame->quads.front().y == 35, "Final Y registration differs");
  const auto raster = eb::rasterize_direct_scene({frame, {}});
  for (unsigned i = 0; i < 30; ++i)
    require(eb::rasterize_direct_scene({first.draw(256, 1, 4), {}}) == raster,
            "Draw mutated published frame");
  auto saved = actors;
  actors[0].alternate = true;
  actors[0].blink = 2;
  rejects([&] { copy.publish(actors); });
  require(actors[0].blink == 2 && copy.snapshot().commands().empty(),
          "Missing alternate palette partially committed");
  saved = actors;
  actors[2].slot = 7;
  const auto invalid_input = actors;
  rejects([&] { scene.publish(actors); });
  require(actors == invalid_input, "Invalid later actor advanced timer");
  require(scene.snapshot().commands().size() == 3,
          "Invalid publish replaced frame");
  actors = saved;
  for (unsigned blink = 0; blink < 256; ++blink)
    for (unsigned flash = 0; flash < 256; flash += 17) {
      actors.resize(1);
      auto &a = actors[0];
      a.slot = 8;
      a.row = 0;
      a.resource = 0;
      a.alternate = false;
      a.blink = blink;
      a.alternate_flash = flash;
      scene.publish(actors);
      const unsigned next = blink ? blink - 1 : 0;
      const bool skipped = blink && ((next / 3) & 1);
      require(a.blink == next && a.alternate_flash == (skipped ? flash
                                                       : flash ? flash - 1
                                                               : 0),
              "Blink countdown/short circuit differs");
      require(scene.snapshot().commands().empty() == skipped,
              "Blink visibility differs");
      if (!skipped)
        require(scene.snapshot().commands()[0].alternate ==
                    (flash && !((flash - 1) & 4)),
                "Alternate flash phase differs");
    }
  actors[0].blink = 5;
  actors[0].alternate_flash = 4;
  actors[0].conscious = false;
  scene.publish(actors);
  require(actors[0].blink == 5 && actors[0].alternate_flash == 4,
          "Invisible actor advanced timers");
  std::fill(f.bytes.begin(), f.bytes.end(), 0);
  require(first.draw()->atlas == frame->atlas,
          "Frame borrowed mutable input content");
  auto alias_fixture = Fixture{};
  std::copy_n(alias_fixture.bytes.begin(), 5, alias_fixture.bytes.begin() + 5);
  BattleCombatants aliases(alias_fixture.bytes, alias_fixture.layout);
  require(aliases.artwork(1) == aliases.artwork(2),
          "Identical artwork aliases were duplicated");
  auto invalid = Fixture{};
  invalid.bytes[4] = 7;
  rejects([&] { BattleCombatants bad(invalid.bytes, invalid.layout); });
  invalid = Fixture{};
  invalid.bytes[332] = 0;
  rejects([&] { BattleCombatants bad(invalid.bytes, invalid.layout); });
  invalid = Fixture{};
  invalid.bytes[130] = 2;
  rejects([&] { BattleCombatants bad(invalid.bytes, invalid.layout); });
  invalid = Fixture{};
  invalid.bytes[500] = 255;
  rejects([&] { BattleCombatants bad(invalid.bytes, invalid.layout); });
  invalid = Fixture{};
  invalid.word(128, 0);
  BattleCombatants absent(invalid.bytes, invalid.layout);
  auto empty_art = absent.prepare(0);
  require(!empty_art.resources()[0].artwork,
          "Absent authored artwork was fabricated");
  BattleCombatantPresentation hidden{8, 0, 0, 0, 128, 144};
  hidden.artwork_enabled = false;
  hidden.blink = 3;
  empty_art.publish(std::span(&hidden, 1));
  require(empty_art.snapshot().commands().empty() && hidden.blink == 3,
          "Absent hidden image affected presentation");
  auto empty_frame = empty_art.snapshot().draw();
  require(empty_frame->quads.empty() && empty_frame->atlas_height &&
              !empty_frame->atlas.empty(),
          "Empty object frame cannot be uploaded");
  hidden.artwork_enabled = true;
  rejects([&] { empty_art.publish(std::span(&hidden, 1)); });
  require(hidden.blink == 3 && empty_art.snapshot().commands().empty(),
          "Missing visible image partially committed");
  auto changed = scene;
  BattleCombatantPalette colors{};
  colors[1] = {31, 31, 31};
  changed.set_alternate_palette(0, colors);
  actors[0].conscious = true;
  actors[0].alternate = true;
  actors[0].blink = actors[0].alternate_flash = 0;
  scene.publish(actors);
  changed.publish(actors);
  require(scene.snapshot().draw()->atlas != changed.snapshot().draw()->atlas,
          "Copied palette ownership was shared mutable");
  require(first.draw()->atlas == frame->atlas,
          "Later publications changed an earlier snapshot");
  const auto before_colors = changed.snapshot().draw()->atlas;
  colors[0].red = 32;
  rejects([&] { changed.set_alternate_palette(0, colors); });
  require(changed.snapshot().draw()->atlas == before_colors,
          "Invalid colors changed published artwork");
  rejects([&] { catalog.artwork(0); });
  rejects([&] { catalog.prepare(2); });
  rejects([&] { first.draw(255); });
}
} // namespace
int main() {
  try {
    test();
    retained_publication();
    std::cout << "PASS native battle combatant content, row timers, ownership "
                 "and validation\n";
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
