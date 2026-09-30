#include "eb/native/party/name_inputs.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <utility>

namespace {
using namespace eb::native::party;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class T> concept RvalueInputs = requires(T value) { std::move(value).inputs(); };
static_assert(!RvalueInputs<PartyNameSnapshot>);
void seed(State& state) {
    for (unsigned id = 1; id <= 4; ++id) {
        auto name = state.name_field(id);
        for (unsigned i = 0; i < name.size(); ++i) name[i] = std::uint8_t(0x61 + i + id);
        auto& c = state.character(id);
        c.level = 5; c.experience = 0x09080706;
        c.maximum_hp = 0x0b0a; c.maximum_pp = 0x0d0c;
        for (unsigned i = 0; i < 7; ++i) c.afflictions[i] = std::uint8_t(14 + i);
        c.offense = 21; c.defense = 22; c.speed = 23; c.guts = 24; c.luck = 25; c.vitality = 26; c.iq = 27;
        c.base_offense = 28; c.base_defense = 29; c.base_speed = 30; c.base_guts = 31;
        c.base_luck = 32; c.base_vitality = 33; c.base_iq = 34;
        for (unsigned i = 0; i < 14; ++i) c.items[i] = std::uint8_t(35 + i);
        c.equipment = {49,50,51,0};
        c.hp_pp_window_options = 0xffff; // Beyond the serialized known prefix.
    }
}
void us() {
    State state(eb::GameVersion::US); seed(state);
    const PartyNameSnapshot capture(state);
    const auto inputs = capture.inputs();
    for (unsigned member = 0; member < 4; ++member) {
        const auto name = inputs.names[member];
        check(name.size() == 53,"US known field boundary differs");
        for (unsigned at = 0; at < name.size(); ++at) {
            const auto expected = at < 5 ? 0x62 + member + at : at == 52 ? 0 : at;
            check(name[at] == expected,"Source contiguous name/stat/equipment byte order differs");
        }
    }
    state.name_field(1)[0] = 0;
    state.character(4).level = 0x7f;
    const PartyNameSnapshot updated(state);
    check(inputs.names[0][0] == 0x62 && inputs.names[3][5] == 5 &&
              updated.inputs().names[0][0] == 0 && updated.inputs().names[3][5] == 0x7f,
          "Captured preparation was live/mutable or fresh capture ignored owner changes");
    state.character(4).experience = 0x00434241;
    const PartyNameSnapshot terminated_stats(state);
    check(terminated_stats.inputs().names[3][6] == 0x41 && terminated_stats.inputs().names[3][8] == 0x43 &&
              terminated_stats.inputs().names[3][9] == 0,
          "Full name continuation lost real experience bytes or fabricated an early NUL");
    seed(state);
    state.character(2).equipment[3] = 52;
    bool rejected = false;
    try { (void)PartyNameSnapshot(state); } catch (const std::out_of_range&) { rejected = true; }
    check(rejected,"Unterminated source prefix invented a value for unowned unknown53");
    state.name_field(2)[0] = 0;
    const PartyNameSnapshot early_zero(state);
    check(early_zero.inputs().names[1][52] == 52,
          "Embedded terminator discarded retained suffix from the captured source fields");
}
void jp() {
    State state(eb::GameVersion::JP); seed(state);
    state.name_field(1)[1] = 0;
    for (unsigned id = 1; id <= 4; ++id) state.character(id).equipment[3] = 52;
    const PartyNameSnapshot capture(state);
    for (unsigned id = 1; id <= 4; ++id) {
        const auto name = capture.inputs().names[id - 1];
        check(name.size() == 4 && std::equal(name.begin(),name.end(),state.name_field(id).begin()),
              "JP snapshot scanned past four bytes or stopped at an embedded zero");
    }
    check(capture.inputs().names[0][2] != 0,"JP zero hole truncated later artwork input");
}
}
int main() {
    try {
        us(); jp();
        std::cout << "PASS native party name input: " << checks << " checks\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
