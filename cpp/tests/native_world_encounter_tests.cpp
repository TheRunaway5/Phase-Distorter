#include "eb/native/world_encounter.hpp"
#include "eb/native/battle/palette_effects.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool ok, const char *message) {
  ++checks;
  if (!ok) throw std::runtime_error(message);
}
template<class F> void rejects(F fn, const char *message) {
  bool threw = false;
  try { fn(); } catch (const std::exception &) { threw = true; }
  check(threw, message);
}
WorldSwirlData data() {
  return {{{{0,0,0}, {2,0,23}, {4,23,15}, {3,38,22},
             {4,60,21}, {2,81,28}, {3,109,17}}}};
}
void run() {
  const auto definitions = data();
  for (unsigned initiative = 0; initiative < 3; ++initiative)
    for (unsigned group : {0u, 447u, 448u, 65535u}) {
      WorldEncounterState encounter;
      encounter.initiative=WorldBattleInitiative(initiative);encounter.group=std::uint16_t(group);
      WorldSwirlState swirl{};
      swirl.next = 4; swirl.repeat_speed = 7; swirl.repeats_until_speedup = 13;
      const auto old_swirl = swirl;
      ScenePalette colors{};
      colors.fill({1,2,3});
      const auto old_colors = colors;
      PaletteColor backup{30,7,21};
      WorldEncounterVisualState visual{};
      visual.window_left = {17, 53}; visual.window_right = {91, 207};
      const auto old_visual = visual;
      battle::PaletteBankState transport;
      for(unsigned i=0;i<256;++i)transport.staged_color(i)=std::uint16_t(0x8000+i);
      const auto old_staged=transport.staged;
      unsigned calls = 0;
      WorldEncounter owner(definitions, encounter, swirl, colors, backup, visual,
          [&](const WorldEncounterMusicChange &request) {
            ++calls;
            check(transport.staged==old_staged&&!transport.upload_mode,"Palette staging preceded actual music");
            check(swirl == old_swirl && colors == old_colors && visual == old_visual,
                  "Visual mutations preceded the real music boundary");
            check(request.track == (group >= 448 ? 8u : initiative == 2 ? 9u : 176u),
                  "Wrong encounter music");
          });
      owner.bind_palette_transport(transport);
      owner.begin_swirl();
      for(unsigned i=0;i<256;++i)check(transport.staged_color(i)==(i?old_staged[i/16][i%16]:std::uint16_t(30|(7<<5)|(21<<10))),"Encounter backdrop overwrote another raw color");
      check(transport.upload_mode==8&&transport.displayed==decltype(transport.displayed){},"Encounter backdrop published before NMI");
      battle::PaletteBankState foreign_transport;
      rejects([&]{owner.bind_palette_transport(foreign_transport);},"Encounter replaced a bound palette transport");
      owner.bind_palette_transport(transport);
      check(calls == 1 && colors[0] == backup && colors[1] == old_colors[1],
            "Swirl did not restore only the actual backdrop");
      check(visual.window_left == std::array<std::uint8_t, 2>{255, 255} &&
                visual.window_right == std::array<std::uint8_t, 2>{0, 0},
            "Battle swirl retained stale window bounds");
      check(swirl.update_in == 1 && swirl.frames_left == (group >= 448 ? 22 : 23) &&
                swirl.frame == (group >= 448 ? 38 : 0) && swirl.padding == 30 &&
                swirl.invert && !swirl.reverse && !swirl.restore_after && !swirl.oval,
            "Wrong initial native animation state");
      check(swirl.next == 0 && swirl.repeat_speed == 7 && swirl.repeats_until_speedup == 13,
            "Nonrepeating swirl erased retained repeat counters");
      check(visual.fixed_color == (initiative == 0 ? PaletteColor{4,4,0} :
                 initiative == 1 ? PaletteColor{28,5,12} : PaletteColor{0,31,31}) &&
                 visual.half_intensity == (group >= 448 || initiative == 0),
            "Boss/initiative color math changed");
      check(owner.swirl_active() && owner.uses(definitions, encounter, swirl, colors, backup, visual),
            "Borrowed owner identity or active predicate differs");
      WorldEncounterState foreign;
      check(!owner.uses(definitions, foreign, swirl, colors, backup, visual),
            "Encounter accepted foreign state");
    }
  WorldEncounterState encounter;
  WorldSwirlState swirl;
  ScenePalette colors{};
  PaletteColor backup{};
  WorldEncounterVisualState visual;
  battle::PaletteBankState transport;
  WorldEncounter owner(definitions, encounter, swirl, colors, backup, visual, {});
  owner.bind_palette_transport(transport);
  for(unsigned i=0;i<256;++i)transport.staged_color(i)=std::uint16_t(0x8000+i);
  for(unsigned i=0;i<128;++i)colors[i]={std::uint8_t(i&31),std::uint8_t(i&31),std::uint8_t(i&31)};
  owner.palette_changed();
  for(unsigned i=0;i<256;++i)check(transport.staged_color(i)==(i<128?std::uint16_t((i&31)*1057):std::uint16_t(0x8000+i)),"Contact grayscale did not retain actual upper raw palettes");
  check(transport.upload_mode==24&&transport.displayed==decltype(transport.displayed){},"Contact grayscale omitted its staged full upload intent");
  for (unsigned id = 0; id < 7; ++id)
    for (unsigned options = 0; options < 256; ++options) {
      visual.window_left = {17, 53}; visual.window_right = {91, 207};
      owner.configure_swirl(id, options, 17);
      check(visual.window_left == std::array<std::uint8_t, 2>{255, 255} &&
                visual.window_right == std::array<std::uint8_t, 2>{0, 0},
            "General swirl retained stale window bounds");
      const auto &d = definitions.definitions[id];
      check(swirl.frame == d.first_frame + ((options & 1) ? d.frame_count : 0) &&
                swirl.invert == bool(options & 2) && swirl.reverse == bool(options & 1) &&
                swirl.masked_layers[0] == !(options & 4) && swirl.masked_layers[5] == bool(options & 4) &&
                swirl.oval == (id == 0) && swirl.padding == 17,
            "General swirl options differ");
      check(swirl.interval == ((options & 128) ? 4 : d.interval) &&
                swirl.next == ((options & 128) ? id : 0),
            "General swirl repeat initialization differs");
    }
  for (unsigned padding = 0; padding < 256; ++padding) {
    swirl.padding = padding;
    swirl.update_in = 1;
    check(owner.swirl_active() == (padding >= 5), "Active padding boundary differs");
    swirl.update_in = 0;
    check(!owner.swirl_active(), "Inactive timer passed swirl predicate");
  }
  const auto old = swirl;
  rejects([&] { owner.begin_swirl(); }, "Missing audio adapter was acknowledged");
  check(owner.failed() && swirl == old, "Missing adapter changed swirl or stayed resumable");
  WorldEncounter failing(definitions, encounter, swirl, colors, backup, visual,
      [](const auto &) { throw std::runtime_error("Actual adapter failed"); });
  rejects([&] { failing.begin_swirl(); }, "Adapter failure was swallowed");
  check(failing.failed() && swirl == old, "Failed audio callback committed visuals");
  WorldEncounter *active = nullptr;
  WorldEncounter nested(definitions, encounter, swirl, colors, backup, visual,
      [&](const auto &) { active->configure_swirl(1,0); });
  active = &nested;
  rejects([&] { nested.begin_swirl(); }, "Reentrant swirl mutation was accepted");
  check(nested.failed(), "Reentrant failure stayed resumable");
  rejects([&] { import_world_swirl_data({}); }, "Truncated swirl content accepted");
}
} // namespace
int main() {
  try { run(); std::cout << checks << " native encounter checks passed\n"; }
  catch(const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
