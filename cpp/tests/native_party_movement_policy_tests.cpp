#include "eb/native/party/movement_policy.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::party;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
void run(eb::GameVersion version) {
    State party(version);
    for (unsigned selected = 0; selected < State::character_count; ++selected) {
        party.controlled_order.fill(0xff);
        party.controlled_order[0] = std::uint8_t(selected);
        for (unsigned status = 0; status < 256; ++status) {
            // All other records/groups deliberately disagree with the selected
            // hard-heal group; neither party order nor the last entry selects it.
            for (unsigned id = 1; id <= State::character_count; ++id) {
                party.character(id).afflictions.fill(1);
                party.character(id).afflictions[1] = std::uint8_t(id == selected + 1 ? status : status == 1 ? 0 : 1);
            }
            for (unsigned count : {0u, 1u, 6u, 255u}) {
                party.controlled_count = std::uint8_t(count);
                party.party_count = std::uint8_t(255 - count);
                for (unsigned style : {0u, 2u, 3u, 0x103u, 0xffffu})
                    for (unsigned timer : {0u, 1u, 0x8000u, 0xffffu}) {
                        MovementPolicyState state{0xa5ff, std::uint16_t(timer), 0xfe80};
                        const auto dismount = refresh_movement_policy(party, std::uint16_t(style), state);
                        check(dismount == (status == 1 && style == 3), "Dismount request changed full-word style/status equality");
                        check(state.mushroomized == (status == 1 ? 1 : 0), "Mushroom flag was not normalized as a full word");
                        check(state.timer == (status == 1 && timer == 0 ? 1800 : timer), "Refresh changed a live timer or failed to initialize it");
                        check(state.modifier == (status == 1 && timer == 0 ? 0 : 0xfe80), "Modifier must survive unless a new timer starts");
                    }
            }
        }
    }
    party.controlled_order[0] = 0;
    party.character(1).afflictions[1] = 1;
    // Every raw source timer preserves the zero/nonzero distinction, including
    // high-byte-only words. A resumed dismount must not be polled as a new call.
    for (unsigned timer = 0; timer <= 0xffff; ++timer) {
        MovementPolicyState state{0xffff, std::uint16_t(timer), std::uint16_t(timer ^ 0xa55a)};
        check(refresh_movement_policy(party, 3, state), "Bicycle source continuation missing");
        check(state == MovementPolicyState{1, std::uint16_t(timer ? timer : 1800),
                                          std::uint16_t(timer ? timer ^ 0xa55a : 0)}, "Raw timer/modifier changed");
    }
    for (unsigned record = 6; record < 256; ++record) {
        party.controlled_order[0] = std::uint8_t(record);
        MovementPolicyState state{0x8000, 0, 0xffff};
        const auto before = state;
        bool rejected{};
        try { (void)refresh_movement_policy(party, 3, state); }
        catch (const std::out_of_range&) { rejected = true; }
        check(rejected && state == before, "Unowned record must reject before mutation");
    }
}
}
int main() {
    try {
        run(eb::GameVersion::US); run(eb::GameVersion::JP);
        std::cout << "Native party movement policy: " << checks << " checks\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
