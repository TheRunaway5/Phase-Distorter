#include "eb/native/story/input.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::story;
unsigned checks{};
void check(bool value,const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
void repeat() {
    InputState input;
    poll_input(input,{0x008f,0},1);
    check(input.state[0] == 0x80 && input.pressed[0] == 0x80 && input.held[0] == 0x80 &&
              input.repeat_timer[0] == 20 && input.player_activity == 1,
          "Initial press did not mask raw nibble and arm source repeat");
    for (unsigned i = 0; i < 20; ++i) {
        poll_input(input,{0x80,0},1);
        check(input.held[0] == 0 && input.pressed[0] == 0 && input.repeat_timer[0] == 19 - i,
              "Repeat fired before its twenty unchanged polls elapsed");
    }
    poll_input(input,{0x80,0},1);
    check(input.held[0] == 0x80 && input.repeat_timer[0] == 3 && input.player_activity == 1,
          "Repeat did not fire on the next poll or was counted as a new press");
    for (unsigned i = 0; i < 3; ++i) {
        poll_input(input,{0x80,0},1);
        check(!input.held[0] && input.repeat_timer[0] == 2 - i,"Short repeat delay differs");
    }
    poll_input(input,{0x80,0},1);
    check(input.held[0] == 0x80 && input.repeat_timer[0] == 3,"Short repeat cadence differs");
    poll_input(input,{0x880,0},1);
    check(input.held[0] == 0x800 && input.pressed[0] == 0x800 && input.repeat_timer[0] == 20,
          "Changed chord replayed old held bits instead of only newly pressed bits");
    poll_input(input,{0x80,0},1);
    check(!input.held[0] && !input.pressed[0] && input.repeat_timer[0] == 20,
          "Release-only change did not restart the long delay with no new press");
    input.repeat_timer[0] = 0xffff;
    poll_input(input,{0x80,0},1);
    check(input.repeat_timer[0] == 0xfffe && !input.held[0],"Repeat timer was narrowed or treated as signed");
}
void merging() {
    InputState input;
    poll_input(input,{0x80,0x8000});
    check(input.state[0] == 0x8080 && input.state[1] == 0x8000 &&
              input.pressed[0] == 0x8080 && input.player_activity == 1,
          "Normal controller merge lost the second pad or double-counted activity");
    for (unsigned i = 0; i < 20; ++i) {
        poll_input(input,{0x80,0x8000});
        check(input.state[0] == 0x8080 && input.repeat_timer[0] == 20 &&
                  input.repeat_timer[1] == 19 - i && !input.held[0],
              "Merged state was discarded before the next physical-pad comparison");
    }
    poll_input(input,{0x80,0x8000});
    check(input.held[0] == 0x8000 && input.held[1] == 0x8000 && input.repeat_timer[0] == 20,
          "Controller-one repeat did not merge after each pad's independent processing");
    poll_input(input,{0x80,0},0x0100);
    check(input.state[0] == 0x80 && input.state[1] == 0 && !input.pressed[0] &&
              !input.held[0] && input.repeat_timer[0] == 20,
          "Full-word debug transition did not expose each physical pad's state");
    poll_input(input,{0,0x8000},0xffff);
    check(input.state[0] == 0 && input.pressed[0] == 0 && input.pressed[1] == 0x8000 &&
              input.player_activity == 1,
          "Debug second-pad-only input was merged or counted as player activity");
    input.player_activity = 0xffff;
    poll_input(input,{0x80,0x8000},0);
    check(input.player_activity == 0 && input.state[0] == 0x8080,
          "Activity counter did not wrap as a source word");
    // A disappearing merged second-pad bit is still a state change, even
    // when no new physical bit rises on the first pad.
    poll_input(input,{0x80,0},0);
    check(!input.pressed[0] && input.repeat_timer[0] == 20 && input.player_activity == 0,
          "Merged-pad release fabricated a press or missed repeat restart");
}
void raw_words() {
    for (unsigned raw = 0; raw <= 0xffff; ++raw) {
        InputState input;
        poll_input(input,{std::uint16_t(raw),0},0x80);
        const auto expected = raw & 0xfff0;
        check(input.state[0] == expected && input.pressed[0] == expected && input.held[0] == expected &&
                  input.repeat_timer[0] == (expected ? 20 : 3) && input.player_activity == (expected ? 1 : 0),
              "Fresh raw word lost a source bit or idle-timer behavior");
    }
    InputState input;
    input.state = {0x008f,0x800f};
    poll_input(input,{0x80,0x8000},1);
    check(input.pressed[0] == 0 && input.pressed[1] == 0 &&
              input.repeat_timer[0] == 20 && input.repeat_timer[1] == 20,
          "Previous raw state was masked before source equality comparison");
}
}
int main() {
    try { repeat(); merging(); raw_words(); std::cout << "PASS native story input: " << checks << " checks\n"; }
    catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
