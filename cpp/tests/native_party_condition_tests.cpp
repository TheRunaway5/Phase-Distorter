#include "eb/native/party/condition.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::party;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
void test(eb::GameVersion region) {
    State state(region);
    state.party_order = {1,2,3,4,5,6};
    state.controlled_order = {5,2,0,4,1,3};
    // Every last-list position and every status byte; unrelated groups/options
    // are deliberately nonzero, including both guest records.
    for (unsigned count = 1; count <= 6; ++count) {
        state.controlled_count = std::uint8_t(count);
        const unsigned selected = unsigned(state.controlled_order[count - 1]) + 1;
        for (unsigned status = 0; status < 256; ++status) {
            for (unsigned id = 1; id <= 6; ++id) {
                auto& c = state.character(id);
                c.afflictions.fill(id == selected ? 0xff : 1);
                c.hp_pp_window_options = 0xffff;
            }
            state.character(selected).afflictions[0] = std::uint8_t(status);
            const auto expected = std::uint16_t(status == 1 || status == 2);
            check(last_controlled_status(state) == expected,"Condition used another group, member or party list");
            for (auto initial : {0,1,2,0x8000,0xffff}) {
                auto cache = std::uint16_t(initial);
                check(refresh_last_controlled_status(state,cache) == (initial != expected) && cache == expected,
                      "Condition cache comparison lost source word width or normalized at the wrong time");
                check(!refresh_last_controlled_status(state,cache) && cache == expected,
                      "Unchanged condition did not preserve its normalized cache");
            }
        }
    }
    state.controlled_count = 1;
    state.controlled_order[0] = 5;
    state.character(6).afflictions[0] = 1;
    std::uint16_t cache = 0;
    check(last_controlled_status(state) == 1 && cache == 0,
          "Read-only palette status query consumed the caller's change cache");
    // Disabled transitions skip refresh in the caller; live health can change
    // repeatedly while the pending cache remains unchanged.
    state.character(6).afflictions[0] = 2;
    check(last_controlled_status(state) == 1 && cache == 0,"Read-only query mutated the skipped cache");
    check(refresh_last_controlled_status(state,cache) && cache == 1,"Reenabled check lost the deferred change");
    state.character(6).afflictions[0] = 1;
    check(!refresh_last_controlled_status(state,cache),"Unconscious-to-diamondized class changed palette status");
    state.character(6).afflictions[0] = 3;
    check(refresh_last_controlled_status(state,cache) && cache == 0,"Paralysis was treated as incapacitation");
    for (auto count : {0,7,255}) {
        state.controlled_count = std::uint8_t(count);
        cache = 0xbeef;
        bool rejected = false;
        try { (void)refresh_last_controlled_status(state,cache); } catch (const std::out_of_range&) { rejected = true; }
        check(rejected && cache == 0xbeef,"Invalid controlled count changed the cache or fabricated health");
    }
    state.controlled_count = 6;
    for (auto index : {6,7,255}) {
        state.controlled_order[5] = std::uint8_t(index);
        cache = 0xbeef;
        bool rejected = false;
        try { (void)refresh_last_controlled_status(state,cache); } catch (const std::out_of_range&) { rejected = true; }
        check(rejected && cache == 0xbeef,"Invalid zero-based record changed the cache");
    }
    state.controlled_order = {255,255,255,255,255,4};
    state.character(5).afflictions[0] = 2;
    check(last_controlled_status(state) == 1,"Condition validated/dereferenced unobserved earlier entries");
}
}
int main() {
    try {
        test(eb::GameVersion::US); test(eb::GameVersion::JP);
        std::cout << "PASS native party condition: " << checks << " checks\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
