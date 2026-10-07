#include "eb/native/world_encounter_effects.hpp"
#include "eb/native/battle/frame_display.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool value, const char *message) {
  ++checks; if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F fn, const char *message) {
  bool rejected = false;
  try { fn(); } catch (const std::exception &) { rejected = true; }
  check(rejected, message);
}
WorldEncounterEffectData content() {
  std::array<WorldEncounterClip, 126> clips{};
  for (unsigned i = 0; i < clips.size(); ++i) {
    clips[i].second_window = !(i & 1);
    for (unsigned y = 0; y < 224; ++y)
      clips[i].rows[y] = {{{std::uint8_t(i), std::uint8_t(i + 20)},
                           {std::uint8_t(y / 2), 240}}};
  }
  std::array<std::uint8_t, 257> profile{};
  profile.fill(255); profile.back() = 0;
  std::vector<WorldOvalStep> steps{
      {2, 0x8000, 0x8000, 0x8000, 0x8000, 1, 0xffff, 0xff00, 0xff00, 0, 0},
      {}};
  return {std::move(clips), std::move(profile), std::move(steps)};
}
struct Restoration final : WorldEncounterRestoration {
  ScenePalette &colors; WorldEncounterVisualState &visual;
  ScenePalette backup{};
  bool bound = true, throw_palette{}, throw_layers{};
  std::vector<unsigned> order;
  Restoration(ScenePalette &c, WorldEncounterVisualState &v) : colors(c), visual(v) {
    backup.fill({19, 8, 3});
  }
  bool uses(const ScenePalette &c, const WorldEncounterVisualState &v) const noexcept override {
    return bound && &c == &colors && &v == &visual;
  }
  void restore_battle_palettes() override {
    order.push_back(1);
    check(!visual.window_rows_enabled && !visual.window_pattern && visual.window_layers == std::array<bool, 6>{},
          "Palette restoration preceded mask disable");
    check(visual.fixed_color == PaletteColor{7, 8, 9}, "Fixed color cleared before palette restoration");
    if (throw_palette) throw std::runtime_error("Palette operation failed");
    colors = backup;
    visual.palette_dirty = true;
  }
  void restore_selected_layer_configuration() override {
    order.push_back(2);
    check(colors == backup && visual.fixed_color == PaletteColor{},
          "Layer restoration preceded palette/fixed-color writes");
    if (throw_layers) throw std::runtime_error("Layer operation failed");
    visual.visible_layers = {true, false, true, false, true};
  }
};
struct Fixture {
  WorldSwirlData definitions{{{{0,0,0}, {2,0,2}, {3,2,2}, {1,4,2},
                               {4,6,2}, {2,8,2}, {3,10,2}}}};
  WorldEncounterEffectData data = content();
  WorldEncounterState encounter;
  WorldSwirlState swirl;
  ScenePalette colors{};
  PaletteColor backdrop{};
  WorldEncounterVisualState visual;
  Restoration restoration{colors, visual};
  WorldEncounter owner{definitions, encounter, swirl, colors, backdrop, visual, {}};
  WorldEncounterEffects effects{definitions, data, swirl, colors, visual, restoration};
  void start() {
    owner.configure_swirl(1, 2, 0);
    visual.fixed_color = {7, 8, 9};
  }
};
void publication() {
  Fixture f;
  f.start();
  f.effects.advance();
  const auto first = f.effects.windows();
  check(first == f.data.clips[0].rows, "First clip content differs");
  check(f.visual.window_right == std::array<std::uint8_t,2>{0,0},
        "Selecting a clip prematurely committed terminal bounds");
  const auto revision = f.visual.window_revision;
  for (unsigned i = 0; i < 20; ++i) check(f.effects.windows() == first, "Sampling changed the display");
  f.effects.advance();
  check(f.visual.window_revision == revision, "Interval wait revised the displayed mask");
  f.effects.advance();
  const auto no_display = f.effects.windows();
  for (const auto &row : no_display)
    check(row[1] == EncounterWindowInterval{255,0}, "Undisplayed second interval leaked into mode1");
  f.start(); f.effects.advance(); f.effects.complete_publication();
  check(f.visual.window_left[1] == 111 && f.visual.window_right[1] == 240,
        "Actual publication did not retain terminal second interval");
  f.effects.advance(); f.effects.advance();
  const auto inherited = f.effects.windows();
  for (const auto &row : inherited)
    check(row[1] == EncounterWindowInterval{111,240}, "Mode1 lost actual displayed interval");
  f.effects.complete_publication();
  check(f.effects.windows() == inherited, "Repeated publication changed settled content");
}
void stream_lifetime() {
  Fixture f; f.start(); f.effects.advance();
  const auto installed = f.visual.window_pattern;
  const auto layers = f.visual.window_layers;
  const auto unpublished = f.visual;
  const auto blank_preview = f.effects.windows(true, true);
  check(f.visual == unpublished, "Fade preview consumed row enable or bounds");
  for (const auto& row : blank_preview)
    check(row == EncounterWindowRow{{{255,0}, {255,0}}}, "Disabled preview leaked undisplayed rows");
  f.effects.disable_row_streams();
  check(!f.visual.window_rows_enabled && f.visual.window_pattern == installed &&
            f.visual.window_layers == layers, "Disable erased installed content or selection");
  f.effects.complete_publication();
  check(f.effects.windows() == blank_preview, "Disabled publication advanced held bounds");
  f.effects.advance();
  check(!f.visual.window_rows_enabled, "Clip interval wait reenabled rows");
  f.effects.advance();
  check(f.visual.window_rows_enabled, "Actual next clip failed to reenable rows");
  f.start(); f.effects.advance(); f.effects.complete_publication();
  check(f.visual.window_left[1] == 111, "Mode4 setup lacks retained second interval");
  check(f.effects.windows(true) == f.effects.windows(), "NMI reset overrode active mode4 rows");
  f.effects.advance(); f.effects.advance();
  check(f.effects.windows()[0][1] == EncounterWindowInterval{111,240}, "Direct mode1 lost held interval");
  check(f.effects.windows(true)[0][1] == EncounterWindowInterval{255,0}, "NMI mode1 kept stale second interval");
  const auto pattern = f.visual.window_pattern;
  f.effects.complete_publication(true, true);
  check(!f.visual.window_rows_enabled && f.visual.window_pattern == pattern &&
            f.visual.window_left[1] == 255 && f.visual.window_right[1] == 0,
        "Black NMI commit lost content or retained second interval");
  f.owner.configure_swirl(0, 0);
  check(!f.visual.window_rows_enabled, "Oval configuration reenabled rows before geometry");
  f.swirl.oval_state = {0,128,112,0x400,0x400};
  f.effects.advance();
  check(f.visual.window_rows_enabled, "Actual oval geometry failed to reenable rows");
  f.effects.disable_row_streams(); f.effects.advance();
  check(f.visual.window_rows_enabled, "Ongoing oval geometry did not run its stream setup");
  f.effects.disable_row_streams(); f.effects.advance();
  check(!f.swirl.oval && !f.visual.window_rows_enabled, "Oval terminator reenabled rows");
}
void restoration() {
  for (unsigned failure = 0; failure < 3; ++failure) {
    Fixture f; f.start(); f.effects.advance(); f.effects.complete_publication();
    f.swirl.frames_left = 0; f.swirl.update_in = 1;
    f.restoration.throw_palette = failure == 1;
    f.restoration.throw_layers = failure == 2;
    if (failure) {
      rejects([&] { f.effects.advance(); }, "Failed scene restoration was acknowledged");
      check(f.effects.failed() && f.swirl.update_in == 0, "Failed restoration stayed resumable");
      const auto operations = f.restoration.order;
      rejects([&] { f.effects.advance(); }, "Failed restoration replayed");
      check(f.restoration.order == operations, "Failed adapter operation was repeated");
    } else {
      f.effects.advance();
      check(f.restoration.order == std::vector<unsigned>{1,2}, "Wrong restoration order");
      check(f.colors == f.restoration.backup && !f.effects.failed(), "Palette restoration was omitted");
      const auto image = f.effects.windows();
      for (const auto &row : image)
        check(row == f.data.clips[0].rows.back(), "Disabled pattern did not retain terminal bounds");
    }
  }
}
void arithmetic() {
  Fixture f;
  f.owner.configure_swirl(0, 0);
  f.swirl.oval_state.center_x = 128;
  f.swirl.oval_state.center_y = 112;
  f.swirl.oval_state.width = 0x180;
  f.swirl.oval_state.height = 0x100;
  f.effects.advance();
  check(f.swirl.oval_state.center_x == 129 && f.swirl.oval_state.center_y == 111 &&
            f.swirl.oval_state.width == 0x80 && f.swirl.oval_state.height == 0 &&
            f.swirl.oval_state.next_step == 1 && f.swirl.update_in == 2,
        "Oval optional state or negative dimension arithmetic differs");
  f.effects.complete_publication();
  const auto last = f.effects.windows();
  f.effects.advance();
  check(!f.swirl.oval && !f.swirl.update_in && !f.swirl.oval_state.width &&
            !f.swirl.oval_state.height && f.effects.windows() == last,
        "Zero dimensions did not stop with the last mask retained");

  Fixture reverse;
  reverse.owner.configure_swirl(1, 1);
  reverse.effects.advance();
  check(reverse.swirl.frame == 1 && reverse.swirl.frames_left == 1 &&
            reverse.effects.windows()[0][0] == reverse.data.clips[1].rows[0][0],
        "Reverse sequence did not decrement before selecting");
  reverse.swirl.frames_left = 0;
  reverse.swirl.update_in = 1;
  reverse.swirl.next = 1;
  reverse.swirl.repeats_until_speedup = 1;
  reverse.swirl.repeat_speed = 0;
  reverse.effects.advance();
  check(reverse.swirl.interval == 3 && reverse.swirl.repeats_until_speedup == 3 &&
            reverse.swirl.repeat_speed == 1 && reverse.swirl.frames_left == 1,
        "Speed-up did not immediately consume its new repeat count");
  reverse.swirl.frames_left = 0;
  reverse.swirl.update_in = 1;
  reverse.swirl.padding = 1;
  reverse.swirl.repeats_until_speedup = 1;
  reverse.swirl.repeat_speed = 3;
  reverse.effects.advance();
  check(reverse.swirl.update_in == 1 && reverse.swirl.padding == 0 &&
            reverse.swirl.repeat_speed == 4 && reverse.swirl.repeats_until_speedup == 0,
        "Final repeat stage did not enter padding");
  reverse.effects.advance();
  check(reverse.swirl.repeats_until_speedup == 255 && reverse.swirl.frames_left == 1,
        "Repeating padded sequence lost source byte-wrap restart");
}
void prayer_windows() {
  auto base=content();
  auto steps=base.oval_steps;
  for(unsigned sequence=1;sequence<5;++sequence) {
    WorldOvalStep step{std::uint8_t(sequence+2),0x8000,0x8000,0x8000,0x8000,0,0,0,0,0,0};
    steps.push_back(step);steps.push_back({});
  }
  WorldEncounterEffectData data{base.clips,base.ellipse_profile,std::move(steps)};
  Fixture f;
  WorldEncounterEffects effects(f.definitions,data,f.swirl,f.colors,f.visual,f.restoration);
  battle::PsiAnimationState psi;
  for(unsigned mode : {0u,1u,2u,3u,255u,256u,257u,258u,0xffffu}) {
    f.swirl.oval_state={1,80,70,0x1100,0x2200,9,8,7,6,5,4};
    f.swirl.repeat_speed=4;f.swirl.repeats_until_speedup=55;
    f.visual.window_pattern=base.clips[4].rows;f.visual.window_rows_enabled=true;
    const auto oval=f.swirl.oval_state;const auto pattern=f.visual.window_pattern;
    const auto colors=f.colors;const auto order=f.restoration.order;
    effects.begin_oval(std::uint16_t(mode));
    auto expected=oval;expected.next_step=data.oval_sequence(mode==2?4:mode==1?1:0);
    check(f.swirl.oval_state==expected && f.swirl.oval && f.swirl.update_in==1 &&
          f.swirl.active_oval_mode==std::uint8_t(mode) &&
          f.swirl.masked_layers==std::array<bool,6>{true,true,false,false,true,false},
          "Prayer open changed full-word choice or actual active oval byte/mask");
    check(f.visual.window_pattern==pattern && f.visual.window_rows_enabled && f.colors==colors &&
          f.restoration.order==order && f.swirl.repeat_speed==4 && f.swirl.repeats_until_speedup==55,
          "Prayer configuration advanced animation/restoration or discarded installed rows");
    effects.close_oval();
    expected.next_step=data.oval_sequence(std::uint8_t(mode)?3:2);
    check(f.swirl.oval_state==expected && f.swirl.active_oval_mode==std::uint8_t(mode),
          "Prayer close used a full-word/constant mode or discarded retained geometry");
    effects.advance();
    check(f.swirl.update_in==(std::uint8_t(mode)?5:4) && f.swirl.oval_state.next_step==expected.next_step+1,
          "Actor effect helper did not execute the actual selected closing sequence");
  }
  for(unsigned swirl=0;swirl<256;++swirl) for(unsigned hold=0;hold<256;++hold) {
    f.swirl.update_in=std::uint8_t(swirl);psi.time_until_next_frame=std::uint8_t(hold);
    check(effects.animation_active(psi)==bool(swirl||hold),
          "Window animation predicate did not read both actual byte counters");
  }
  Fixture missing;
  const auto before_swirl=missing.swirl;const auto before_visual=missing.visual;
  rejects([&]{missing.effects.begin_oval(1);},"Missing imported prayer sequence accepted");
  check(missing.swirl==before_swirl && missing.visual==before_visual,
        "Rejected prayer sequence partially configured actual state");
}
void validation() {
  Fixture f;
  check(f.effects.uses(f.definitions, f.swirl, f.colors, f.visual) &&
            f.effects.uses(f.restoration), "Exact owner identity rejected");
  ScenePalette foreign{};
  check(!f.effects.uses(f.definitions, f.swirl, foreign, f.visual), "Foreign palette accepted");
  rejects([&] {
    WorldEncounterEffects bad(f.definitions, f.data, f.swirl, foreign, f.visual, f.restoration);
  }, "Foreign restoration accepted");
  f.restoration.bound = false;
  rejects([&] { f.effects.advance(); }, "Rebound owner advanced an effect");
  rejects([&] { f.effects.windows(); }, "Rebound owner sampled an effect");
  rejects([&] { import_world_encounter_effect_data({}, eb::GameVersion::US); },
          "Truncated imported effects accepted");
  Fixture invalid;
  invalid.start(); invalid.swirl.frame = 255;
  rejects([&] { invalid.effects.advance(); }, "Unowned clip was silently read");
  check(invalid.effects.failed(), "Invalid content failure stayed resumable");
}
void battle_window_cleanup() {
  Fixture f;
  battle::PsiDisplayState display;
  battle::FrameDisplay frames(display);
  f.swirl.update_in=17;f.swirl.oval=true;
  const auto unbound=f.swirl;
  rejects([&]{f.effects.clear_battle_window();},"Unowned battle display cleanup accepted");
  check(f.swirl==unbound,"Unowned cleanup changed swirl state");
  f.effects.bind_display(frames);
  check(f.effects.uses_display(frames),"Battle cleanup lost exact display identity");
  battle::FrameDisplay foreign(display);
  check(!f.effects.uses_display(foreign),"Battle cleanup accepted foreign display identity");
  for(unsigned bits=0;bits<256;++bits) {
    f.swirl.update_in=std::uint8_t(bits);f.swirl.oval=bool(bits&1);
    f.swirl.interval=91;f.swirl.frame=22;f.swirl.masked_layers.fill(true);
    f.swirl.invert=true;f.swirl.hdma_channel_offset=1;
    f.swirl.oval_state={1,2,3,4,5,6,7,8,9,10,11};
    f.visual.window_pattern=f.data.clips[0].rows;f.visual.window_rows_enabled=bool(bits&2);
    f.visual.writes_second_window=true;f.visual.window_layers.fill(true);f.visual.window_invert=true;
    f.visual.window_left={12,34};f.visual.window_right={56,78};
    frames.hdma_enable=std::uint8_t(bits);frames.displayed_hdma_enable=0xa5;
    auto expected_swirl=f.swirl;expected_swirl.update_in=0;expected_swirl.oval=false;
    auto expected_visual=f.visual;expected_visual.window_layers.fill(false);expected_visual.window_invert=false;
    ++expected_visual.window_revision;
    const auto colors=f.colors;const auto order=f.restoration.order;
    f.effects.clear_battle_window();
    check(f.swirl==expected_swirl&&f.visual==expected_visual,"Cleanup erased retained swirl or window content");
    check(frames.hdma_enable==(bits&~8u)&&frames.displayed_hdma_enable==0xa5,
          "Cleanup disabled unrelated channels or fabricated publication");
    f.effects.advance();
    check(f.swirl==expected_swirl&&f.visual==expected_visual&&f.colors==colors&&f.restoration.order==order,
          "Stopped cleanup advanced another effect or restored palettes/layers");
  }
}
} // namespace
int main() {
  try {
    publication(); stream_lifetime(); restoration(); arithmetic(); validation();battle_window_cleanup();prayer_windows();
    std::cout << checks << " native encounter effect checks passed\n";
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
