#include "eb/native/world_overlay_playback.hpp"
#include "native_overlay_test_assets.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb::native;
namespace {
unsigned checks;
void check(bool b, const char *message) {
  ++checks;
  if (!b)
    throw std::runtime_error(message);
}
template <class F> void rejects(F f, const char *s) {
  bool b = false;
  try {
    f();
  } catch (const std::exception &) {
    b = true;
  }
  check(b, s);
}
void run(eb::GameVersion version) {
  native_sprite_test::Fixture bytes;
  auto sprites = std::make_shared<SpriteResources>(bytes.bytes, bytes.layout);
  auto content = overlay_test::make(*sprites, version);
  auto scripts = std::make_shared<ActionScriptData>(
      std::vector<std::uint8_t>{9}, 0, std::vector<std::uint32_t>{0});
  ActorWorld world(sprites, scripts, version), other(sprites, scripts, version);
  WorldOverlayPlayback overlay(world, content), foreign(other, content);
  rejects([&] { world.bind_overlays(foreign); },
          "Accepted foreign overlay owner");
  world.bind_overlays(overlay);
  WorldActorSpec spec;
  spec.action.animation = 0;
  spec.action.priority = 1;
  spec.action.position = {100u << 16, 100u << 16, 0};
  auto id = *world.create_authored(spec, {23, 24});
  auto &actor = world.actor(id);
  actor.appearance.select_four(0, 0);
  actor.appearance_context.overlay_flags = 0xc000;
  actor.behavior.surface_flags = 8;
  SpritePalettes colors{};
  for (auto &p : colors)
    for (unsigned c = 0; c < 16; ++c)
      p[c] = 0xff000000 | c * 0x111111;
  const auto initial = world.draw(256, colors, 1);
  check(overlay.fragments(id).empty(), "Initial capture advanced overlays");
  for (unsigned tick = 0; tick < 300; ++tick) {
    check(world.advance_tick() == WorldTickResult::Complete,
          "Overlay caused external actor service");
    const auto saved = overlay.state(id);
    const auto fragments = overlay.fragments(id);
    const unsigned sweat = tick % 64;
    check(fragments.size() ==
              (sweat < 16 || (sweat >= 32 && sweat < 48) ? 3u : 2u),
          "Sweat gap or frame cadence differs");
    check(saved[0].remaining == 254 - tick % 255 &&
              saved[2].remaining == 11 - tick % 12,
          "Mushroom/ripple countdown differs");
    auto frame = world.draw(256, colors, 1);
    auto repeated = world.draw(256, colors, 1);
    check(overlay.state(id) == saved &&
              frame->quads.size() == initial->quads.size() + fragments.size(),
          "Capture advanced or dropped overlay fragments");
    check(frame->quads.size() == repeated->quads.size() &&
              frame->atlas == repeated->atlas,
          "Repeated capture changed overlay pixels");
    for (unsigned n = 0; n < fragments.size(); ++n) {
      const auto &q = frame->quads[n];
      check(q.motion == frame->quads.back().motion &&
                q.layer == eb::DirectSceneFrame::Layer::Actors,
            "Overlay lost body motion or semantic layer");
      check(q.color_math_eligible == (fragments[n].palette >= 4),
            "Overlay math eligibility differs");
    }
  }
  auto before = overlay.state(id);
  actor.action().animation = 0x8000;
  world.advance_tick();
  check(overlay.state(id) == before, "Hidden actor advanced overlay clock");
  actor.action().animation = 0;
  actor.behavior.draw_world = false;
  world.advance_tick();
  check(overlay.state(id) == before,
        "Disabled draw callback advanced overlay clock");
  actor.behavior.draw_world = true;
  actor.action().position[0] = 0xffc00000;
  world.advance_tick();
  check(overlay.state(id) != before,
        "Offscreen actor did not advance authored draw clock");
  before = overlay.state(id);
  overlay.reset_after_map_load();
  for (unsigned kind = 0; kind < 4; ++kind)
    check(overlay.state(id)[kind].remaining == before[kind].remaining &&
              overlay.state(id)[kind].frame == before[kind].frame &&
              !overlay.state(id)[kind].next_step,
          "Map reset changed timer/frame");
  before = overlay.state(id);
  world.retire(id);
  auto replacement = *world.create_authored(spec, {23, 24});
  check(overlay.state(replacement) == before,
        "Role reuse lost retained overlay state");
  rejects([&] { (void)overlay.state(id); },
          "Retired host ID accesses replacement overlay");
  auto early = *world.create_authored(spec, {22, 23});
  world.actor(early).appearance_context.overlay_flags = 0xc000;
  world.actor(early).behavior.surface_flags = 4;
  overlay.advance_draw(early);
  check(overlay.fragments(early).empty(),
        "Party-only status effect applied below role23");
  auto &a = world.actor(replacement);
  a.appearance_context.overlay_flags = 0;
  a.behavior.surface_flags = 4;
  overlay.advance_draw(replacement);
  check(overlay.state(replacement)[1].remaining != before[1].remaining,
        "Surface4 did not force sweat");
  auto host = world.create(spec);
  world.actor(host).behavior.surface_flags = 8;
  overlay.advance_draw(host);
  check(overlay.fragments(host).size() == 1,
        "Host actor did not receive water effect");
  world.erase(host);
  rejects([&] { (void)overlay.fragments(host); },
          "Dead host overlay cache remained accessible");
  // Changed scenery priority uses alternate descriptors; presentation freezes
  // the already-selected authored frame and retains visible pixel registration.
  auto active = *world.create_authored(spec, {24, 25});
  world.actor(active).behavior.surface_flags = 9;
  overlay.advance_draw(active);
  check(overlay.fragments(active)[0].priority == 2,
        "Surface alternate priority missing");
  world.clear_overlays(overlay);
  check(!world.uses_overlays(overlay), "Overlay lease did not clear");
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
    std::cout << checks << " native overlay playback checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
