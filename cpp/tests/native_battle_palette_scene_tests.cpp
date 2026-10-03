#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/battle_combatants.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void require(bool value, const char *why) {
  ++checks;
  if (!value)
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
std::uint32_t argb(std::uint16_t value) {
  const auto channel = [&](unsigned shift) {
    const unsigned c = (value >> shift) & 31;
    return (c << 3) | (c >> 2);
  };
  return 0xff000000u | (channel(0) << 16) | (channel(5) << 8) | channel(10);
}
// One real compressed 32x32 sprite, with one tile of each palette index.
// Enemy IDs, resource order and catalog palette IDs deliberately disagree.
struct Content {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(160);
  BattleCombatantLayout layout{0, 16, 80, 112, 128, 160, 4, 0, 2, 1, 2, 4, 2};
  std::array<PackedPalette, 2> normal{};
  void word(unsigned at, unsigned value) {
    bytes.at(at) = std::uint8_t(value);
    bytes.at(at + 1) = std::uint8_t(value >> 8);
  }
  void pointer(unsigned at, unsigned offset) {
    word(at, offset);
    word(at + 2, 0xc0);
  }
  Content() {
    pointer(0, 160);
    bytes[4] = 1;
    for (unsigned tile = 0; tile < 16; ++tile) {
      std::array<std::uint8_t, 32> planar{};
      for (unsigned plane = 0; plane < 4; ++plane)
        for (unsigned y = 0; y < 8; ++y)
          planar[plane / 2 * 16 + y * 2 + (plane & 1)] =
              ((tile >> plane) & 1) ? 255 : 0;
      bytes.push_back(31);
      bytes.insert(bytes.end(), planar.begin(), planar.end());
    }
    bytes.push_back(255);
    for (unsigned bank = 0; bank < 2; ++bank)
      for (unsigned color = 0; color < 16; ++color) {
        normal[bank][color] = packed(color, 20 + bank, 30 - color);
        word(16 + bank * 32 + color * 2, normal[bank][color]);
      }
    for (unsigned enemy = 0; enemy < 4; ++enemy) {
      word(80 + enemy * 4, 1);
      bytes[82 + enemy * 4] = std::uint8_t(enemy / 2);
    }
    pointer(112, 128);
    pointer(120, 144);
    constexpr std::array<unsigned, 4> order{2, 0, 3, 1};
    for (unsigned resource = 0; resource < 4; ++resource) {
      bytes[128 + resource * 3] = std::uint8_t(resource); // Includes count0.
      word(129 + resource * 3, order[resource]);
    }
    bytes[140] = 255;
    bytes[144] = 1;
    word(145, 1);
    bytes[147] = 1;
    word(148, 0);
    bytes[150] = 255;
  }
};
void initialize(PaletteBankState &palettes) {
  for (unsigned bank = 0; bank < 4; ++bank) {
    for (unsigned color = 0; color < 16; ++color)
      palettes.palette(bank)[color] =
          std::uint16_t(packed(bank + color, 3, 4) | 0x8000);
    palettes.palette(bank)[1] = std::uint16_t(packed(2 + bank, 3, 4) | 0x8000);
    palettes.palette(bank)[2] = std::uint16_t(packed(31, 3 + bank, 4) | 0x8000);
  }
  palettes.upload_mode = 7;
}
void publish_initial(PaletteBankState &palettes,
                     std::span<const BattleCombatantResource> resources) {
  for (unsigned bank = 0; bank < resources.size(); ++bank)
    for (unsigned color = 0; color < 16; ++color) {
      const auto c = resources[bank].palette[color];
      palettes.staged_palette(8 + bank)[color] = packed(c.red, c.green, c.blue);
    }
  palettes.upload_mode = 24;
  require(palettes.publish_pending(),
          "Initial palette publication did not run");
  palettes.upload_mode = 7; // Invalid sentinel: capture must not consume it.
}
std::vector<BattleCombatantDraw> commands(const BattleCombatantFrame &frame) {
  return {frame.commands().begin(), frame.commands().end()};
}
void check_colors(const BattleCombatantFrame &frame,
                  const std::array<PackedPalette, 16> &displayed) {
  const auto draw = frame.draw();
  require(draw->quads.size() == frame.commands().size(),
          "Synthetic sprite was not emitted as one object");
  require(draw->palette_indices.size() == draw->atlas.size(),
          "Bound combatant capture lost physical palette identities");
  for (unsigned i = 0; i < frame.commands().size(); ++i) {
    const auto &command = frame.commands()[i];
    const auto &quad = draw->quads[i];
    require(quad.priority == 7 &&
                quad.layer == eb::DirectSceneFrame::Layer::Actors &&
                quad.color_math_eligible == command.alternate,
            "Object layer or source palette color-math eligibility differs");
    const auto &colors = command.alternate ? displayed[12 + command.resource]
                                           : displayed[8 + command.resource];
    for (unsigned color = 0; color < 16; ++color) {
      const unsigned x = color % 4 * 8, y = color / 4 * 8;
      const auto at = (quad.v + y) * draw->atlas_width + quad.u + x;
      require(
          draw->palette_indices[at] ==
              (color ? ((command.alternate ? 12 : 8) + command.resource) * 16 +
                           color
                     : 256),
          "Object palette identity differs from actual physical bank");
      require(draw->atlas[at] == (color ? argb(colors[color]) : 0),
              "Object used a wrong physical palette bank or color index");
    }
  }
}
void same_geometry(const BattleCombatantFrame &a,
                   const BattleCombatantFrame &b) {
  require(commands(a) == commands(b),
          "Palette publication selected objects again");
  const auto first = a.draw(320, 9, 42), next = b.draw(320, 9, 42);
  require(first->width == next->width && first->frame == next->frame &&
              first->scene_identity == next->scene_identity &&
              first->atlas_width == next->atlas_width &&
              first->atlas_height == next->atlas_height &&
              first->motions.size() == next->motions.size() &&
              first->quads.size() == next->quads.size(),
          "Late palette publication changed frame geometry");
  for (unsigned i = 0; i < first->motions.size(); ++i) {
    const auto &x = first->motions[i], &y = next->motions[i];
    require(x.identity == y.identity && x.x == y.x && x.y == y.y,
            "Late palette publication changed motion identity or position");
  }
  for (unsigned i = 0; i < first->quads.size(); ++i) {
    const auto &x = first->quads[i], &y = next->quads[i];
    require(x.u == y.u && x.v == y.v && x.width == y.width &&
                x.height == y.height && x.x == y.x && x.y == y.y &&
                x.priority == y.priority && x.motion == y.motion &&
                x.object == y.object && x.layer == y.layer &&
                x.color_math_eligible == y.color_math_eligible,
            "Late palette publication changed emitted object attributes");
  }
}
void actual_effect_after_objects() {
  Content content;
  BattleCombatants catalog(content.bytes, content.layout);
  PaletteBankState palettes;
  initialize(palettes);
  auto scene = catalog.prepare(0);
  publish_initial(palettes, scene.resources());
  PaletteEffectState state;
  PaletteEffects effects(palettes, state);
  BattleCombatantPalette stale{};
  scene.set_alternate_palette(0, stale);
  scene.bind_palette_state(palettes);
  require(scene.resources().size() == 4 && scene.resources()[0].enemy == 2 &&
              scene.resources()[0].palette_id == 1 &&
              scene.resources()[2].palette_id == 1,
          "Fixture failed to separate physical banks from catalog palette IDs");
  std::vector<BattleCombatantPresentation> actors;
  for (unsigned bank = 0; bank < 4; ++bank) {
    BattleCombatantPresentation normal{
        8 + bank, bank, bank & 1, 100 + bank, std::uint8_t(32 + bank * 56), 70};
    normal.blink = 2;
    actors.push_back(normal);
    auto alternate = normal;
    alternate.slot += 4;
    alternate.identity += 4;
    alternate.y = 150;
    alternate.alternate = true;
    alternate.alternate_flash = 9;
    actors.push_back(alternate);
  }
  auto hidden = actors.front();
  hidden.slot = 20;
  hidden.identity = 200;
  hidden.blink = 4;
  hidden.alternate_flash = 9;
  actors.push_back(hidden);
  auto inactive = hidden;
  inactive.slot = 21;
  inactive.identity = 201;
  inactive.incapacitated = true;
  actors.push_back(inactive);
  std::reverse(actors.begin(), actors.end());
  scene.publish(actors, {3, 2, 7, false});
  const auto before = scene.snapshot();
  const auto initial = palettes.staged;
  const auto initial_pixels = eb::rasterize_direct_scene({before.draw(), {}});
  require(before.commands().size() == 8,
          "Initial row publication ignored visibility gates");
  require(before.commands()[0].slot == 8 && before.commands()[1].slot == 10 &&
              before.commands()[4].slot == 9,
          "Initial row publication changed source row and slot order");
  for (const auto &actor : actors) {
    require(actor.blink == (actor.slot == 21   ? 4
                            : actor.slot == 20 ? 3
                                               : 1),
            "Initial object pass did not advance blink exactly once");
    require(actor.alternate_flash == (actor.slot >= 20  ? 9
                                      : actor.alternate ? 8
                                                        : 0),
            "Initial object pass did not preserve timer short circuit");
  }
  require(palettes.upload_mode == 7 && state == PaletteEffectState{},
          "Object publication advanced or acknowledged palette effects");
  check_colors(before, initial);
  effects.set_speed(2);
  for (unsigned bank = 0; bank < 4; ++bank) {
    effects.target(bank * 16, 31, 31, 31); // Color0 remains unprocessed.
    effects.target(bank * 16 + 1, 10 + bank, 15, 20);
    effects.target(bank * 16 + 2, 33, 3 + bank, 4); // Packed carry into green.
  }
  effects.advance();
  require(palettes.upload_mode == 16,
          "Real palette effect did not stage the source upload request");
  for (unsigned bank = 0; bank < 4; ++bank) {
    require(palettes.palette(bank)[0] == initial[12 + bank][0],
            "Real palette effect changed transparent color0");
    require(palettes.palette(bank)[1] ==
                std::uint16_t(packed(6 + bank, 9, 12) | 0x8000),
            "Actual first effect step differs from the known target");
    require(palettes.palette(bank)[2] ==
                std::uint16_t(initial[12 + bank][2] + 1),
            "Raw packed carry was replaced by per-channel clamping");
  }
  require(scene.snapshot().draw()->atlas == before.draw()->atlas,
          "Effect mutation bypassed the explicit publication boundary");
  // These are live gameplay inputs, not an object-command cache. A late
  // capture must not re-read them or reveal an actor skipped by the first pass.
  for (auto &actor : actors) {
    actor.x = 1;
    actor.y = 1;
    actor.conscious = false;
    actor.blink = 19;
  }
  const auto borrowed = actors;
  const auto progressed = state;
  const auto staged = palettes.staged;
  scene.publish_palettes();
  require(scene.snapshot().draw()->atlas == before.draw()->atlas &&
              palettes.upload_mode == 16,
          "Late capture exposed staged colors before the actual DMA boundary");
  require(palettes.publish_pending(), "Object palette DMA was not published");
  scene.publish_palettes();
  const auto after = scene.snapshot();
  require(actors == borrowed && state == progressed &&
              palettes.staged == staged && palettes.upload_mode == 0,
          "Late publication replayed logic or consumed upload intent");
  same_geometry(before, after);
  check_colors(after, palettes.displayed);
  require(eb::rasterize_direct_scene({after.draw(), {}}) != initial_pixels,
          "Late effect colors did not reach emitted combatant pixels");
  require(eb::rasterize_direct_scene({before.draw(), {}}) == initial_pixels,
          "Late palette capture mutated an earlier snapshot");
  scene.publish_palettes();
  require(scene.snapshot().draw()->atlas == after.draw()->atlas &&
              state == progressed && palettes.upload_mode == 0,
          "Repeated capture advanced a palette effect");
  effects.advance();
  palettes.publish_pending();
  scene.publish_palettes();
  check_colors(scene.snapshot(), palettes.displayed);
  require(after.draw()->atlas != scene.snapshot().draw()->atlas,
          "A second real effect step did not publish distinct colors");
  for (unsigned bank = 0; bank < 4; ++bank)
    effects.reverse(bank, 2);
  effects.advance();
  effects.advance();
  require(palettes.staged == initial,
          "Actual reversed effect did not restore raw starting colors");
  palettes.publish_pending();
  scene.publish_palettes();
  require(eb::rasterize_direct_scene({scene.snapshot().draw(), {}}) ==
              initial_pixels,
          "Reversed effect did not restore original emitted pixels");
  same_geometry(before, scene.snapshot());
  palettes.staged_palette(8)[1] ^= 31;
  palettes.upload_mode = 8;
  palettes.publish_pending();
  scene.publish_palettes();
  require(scene.snapshot().draw()->atlas == before.draw()->atlas,
          "Lower-half DMA incorrectly published an object normal bank");
  palettes.upload_mode = 16;
  palettes.publish_pending();
  scene.publish_palettes();
  check_colors(scene.snapshot(), palettes.displayed);
  require(scene.snapshot().draw()->atlas != before.draw()->atlas,
          "Bound normal colors remained tied to immutable imported palettes");
  same_geometry(before, scene.snapshot());
}
void owner_and_rejection() {
  Content content;
  BattleCombatants catalog(content.bytes, content.layout);
  PaletteBankState palettes, other;
  initialize(palettes);
  initialize(other);
  auto scene =
      catalog.prepare(1); // Two resources, same normal catalog palette.
  publish_initial(palettes, scene.resources());
  scene.bind_palette_state(palettes);
  scene.bind_palette_state(palettes);
  scene.publish_palettes();
  require(scene.snapshot().commands().empty(),
          "Palette capture invented objects before the first row pass");
  std::array<BattleCombatantPresentation, 2> actors{
      BattleCombatantPresentation{8, 0, 0, 1, 48, 80},
      BattleCombatantPresentation{9, 1, 1, 2, 150, 160}};
  for (auto &actor : actors)
    actor.alternate = true;
  scene.publish(actors);
  const auto retained = scene.snapshot();
  const auto retained_pixels = retained.draw()->atlas;
  rejects([&] { scene.bind_palette_state(other); },
          "Scene accepted a competing palette owner");
  BattleCombatantPalette replacement{};
  rejects([&] { scene.set_alternate_palette(0, replacement); },
          "Legacy setter bypassed the bound palette owner");
  require(scene.snapshot().draw()->atlas == retained_pixels &&
              palettes.upload_mode == 7,
          "Rejected owner operation partially changed publication");
  palettes.palette(0)[1] = 0xffff;
  auto invalid = actors;
  invalid[0].blink = 2;
  invalid[1].resource = 2;
  const auto bad_input = invalid;
  rejects([&] { scene.publish(invalid); },
          "Invalid actor resource accepted during palette capture");
  require(invalid == bad_input &&
              scene.snapshot().draw()->atlas == retained_pixels,
          "Failed row publication committed timers or newly staged colors");
  palettes.upload_mode = 16;
  palettes.publish_pending();
  scene.publish_palettes();
  check_colors(scene.snapshot(), palettes.displayed);
  require(scene.snapshot().draw()->atlas != retained_pixels,
          "Rejected rebind lost the original live palette owner");
  const auto main_before = scene.snapshot();
  auto copy = scene;
  palettes.palette(1)[1] = 0;
  palettes.palette(3)[1] =
      0xffff; // Valid physical bank without a resource here.
  palettes.upload_mode = 16;
  palettes.publish_pending();
  copy.publish_palettes();
  require(
      copy.snapshot().draw()->atlas != main_before.draw()->atlas &&
          scene.snapshot().draw()->atlas == main_before.draw()->atlas,
      "Scene copies aliased immutable publications or lost shared ownership");
  check_colors(copy.snapshot(), palettes.displayed);
  require(retained.draw()->atlas == retained_pixels,
          "Raw bank mutation changed a retained snapshot");
}
void unbound_and_lifetime() {
  BattleCombatantFrame retained;
  std::vector<std::uint32_t> retained_pixels;
  {
    Content content;
    BattleCombatants catalog(content.bytes, content.layout);
    PaletteBankState palettes;
    initialize(palettes);
    auto scene = catalog.prepare(0);
    publish_initial(palettes, scene.resources());
    BattleCombatantPresentation actor{8, 3, 0, 99, 128, 100};
    actor.alternate = true;
    rejects([&] { scene.publish(std::span(&actor, 1)); },
            "Unbound scene silently fabricated an alternate palette");
    BattleCombatantPalette colors{};
    colors.fill({3, 4, 5});
    scene.set_alternate_palette(3, colors);
    scene.publish(std::span(&actor, 1));
    const auto unbound = scene.snapshot();
    const auto old_pixels = unbound.draw()->atlas;
    colors.fill({6, 7, 8});
    scene.set_alternate_palette(3, colors);
    require(scene.snapshot().draw()->atlas == old_pixels,
            "Legacy setter bypassed explicit palette publication");
    scene.publish_palettes();
    require(scene.snapshot().draw()->atlas != old_pixels &&
                unbound.draw()->atlas == old_pixels,
            "Unbound late capture failed immutable staging semantics");
    const auto before_bind = scene.snapshot().draw()->atlas;
    scene.bind_palette_state(palettes);
    require(scene.snapshot().draw()->atlas == before_bind,
            "Binding bypassed explicit palette publication");
    scene.publish_palettes();
    retained = scene.snapshot();
    retained_pixels = eb::rasterize_direct_scene({retained.draw(), {}});
    palettes.staged = {};
    palettes.upload_mode = 24;
    palettes.publish_pending();
    scene.publish_palettes();
    std::fill(content.bytes.begin(), content.bytes.end(), 0);
    require(eb::rasterize_direct_scene({retained.draw(), {}}) ==
                retained_pixels,
            "Retained frame depends on raw palette or content mutation");
  }
  require(retained.commands().size() == 1 &&
              retained.commands()[0].identity == 99 &&
              eb::rasterize_direct_scene({retained.draw(), {}}) ==
                  retained_pixels,
          "Retained frame borrowed a destroyed scene or palette owner");
}
} // namespace
int main() {
  try {
    actual_effect_after_objects();
    owner_and_rejection();
    unbound_and_lifetime();
    std::cout << "Native battle palette scene tests passed: " << checks
              << " checks\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << "Native battle palette scene tests failed after " << checks
              << " checks: " << error.what() << '\n';
    return 1;
  }
}
