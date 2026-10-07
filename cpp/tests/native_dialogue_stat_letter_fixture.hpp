#pragma once
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "native_dialogue_test_assets.hpp"
#include <iostream>

namespace stat_letter_test {
namespace d = eb::native::dialogue;
inline unsigned checks{};
inline void check(bool value, const char *message) {
  ++checks;
  if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char *message) {
  bool failed{};
  try { operation(); } catch (const std::exception &) { failed = true; }
  check(failed, message);
}
inline std::shared_ptr<const d::Program> program(eb::GameVersion version,
                                               std::vector<std::uint8_t> bytes) {
  return std::make_shared<d::Program>(version,
      std::vector<d::ContentBlock>{{0,0,std::move(bytes)}}, std::vector<d::Location>{{0,0}});
}
inline std::vector<std::uint8_t> content(eb::GameVersion version,
                                       std::span<const std::uint8_t> image) {
  if (!image.empty()) return {image.begin(), image.end()};
  dialogue_test_assets::WindowInput input(version);
  dialogue_test_assets::add_text_fonts(input);
  input.put(input.configs + 6, 6);
  dialogue_substitution_test_assets::Input stats(version);
  stats.overlay(input.image);
  return input.image;
}
struct Fixture {
  eb::GameVersion version;
  std::vector<std::uint8_t> image;
  std::shared_ptr<const d::FontResources> fonts;
  std::shared_ptr<const d::SubstitutionResources> catalog;
  eb::native::party::State party;
  d::State state;
  d::TextOutput output;
  d::WindowHost windows;
  explicit Fixture(eb::GameVersion v, std::span<const std::uint8_t> bytes = {})
      : version(v), image(content(v, bytes)), fonts(d::FontResources::import(image,v)),
        catalog(d::SubstitutionResources::import(image,v)), party(v), output(fonts,state),
        windows(d::WindowResources::import(image,v),state,output) {
    windows.bind_party(party);
    windows.substitutions().configure(catalog, eb::native::party::dialogue_values(party));
    // Declared incoming focused-window state. This byte-query fixture does
    // not claim CREATE_WINDOW or acknowledge its ClearPartyBlink callback.
    state.windows.emplace(d::WindowId{0}, d::WindowState{});
    state.focus = d::WindowId{0};
    output.define_window(d::WindowId{0}, {16,6});
    state.word_wrap = false;
  }
  std::uint32_t run(unsigned descriptor, std::uint16_t index, unsigned budget = 1) {
    auto &registers = state.window();
    registers.active = {0xa5b6c7d8,0x89abcdef,index};
    registers.saved = {0x10203040,0x50607080,0x90a0};
    const auto before = registers;
    const auto cursor = output.window(*state.focus).cursor;
    auto code = program(version,{0x19,0x28,std::uint8_t(descriptor),2});
    d::Conversation conversation(code,windows);
    conversation.start(d::EntryId{0});
    for(unsigned n=0;n<1000;++n) {
      const auto progress=conversation.advance(budget);
      check(progress!=d::Progress::Suspended && !conversation.event(),
            "Stat letter query fabricated a glyph, frame, or external service");
      if(progress==d::Progress::Finished) {
        check(state.window().active.argument==before.active.argument &&
              state.window().active.secondary==before.active.secondary &&
              state.window().saved==before.saved && output.window(*state.focus).cursor==cursor,
              "Stat letter changed another register or text cursor");
        check(conversation.snapshot().returned_cursor==d::Location{0,4},
              "Stat letter consumed the wrong number of authored bytes");
        return state.window().active.working;
      }
    }
    throw std::runtime_error("Stat letter conversation did not finish");
  }
};
}
