#include "eb/native/party/meters.hpp"
#include <array>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::party;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
void cases(eb::GameVersion version) {
    State state(version);
    state.party_order = {2,4,1,3,5,6};
    state.controlled_order = {1,2,3,4,0,0}; // Intentionally different.
    auto& member = state.character(2);
    member.current_hp = 100; member.target_hp = 110;
    member.current_pp = 50; member.target_pp = 40;
    member.items[0] = 91; member.maximum_hp = 180;
    MeterPolicy policy{0,0,0,0,0x00008000};
    advance_meters(state,0x0100,policy);
    check(member.current_hp == 100 && member.hp_fraction == 1 &&
              member.current_pp == 50 && member.pp_fraction == 1,
          "Inactive meters did not arm without rolling on their first call");
    advance_meters(state,0,policy);
    check(member.current_hp == 100 && member.hp_fraction == 0x8001 &&
              member.current_pp == 48 && member.pp_fraction == 0x7001,
          "HP fractional accumulation or fixed PP subtraction differs");
    advance_meters(state,4,policy);
    check(member.current_hp == 101 && member.hp_fraction == 1,
          "FRAME_COUNTER low-two-bit cadence or fractional carry differs");
    check(member.items[0] == 91 && member.maximum_hp == 180 && state.character(1).current_hp == 0,
          "Roller modified inventory, maxima or a character outside party-order cadence");

    policy.rolling_disabled = 0xff;
    advance_meters(state,0,policy);
    check(member.current_hp == 101 && member.hp_fraction == 1,"Disabled rolling changed a meter");
    policy.rolling_disabled = 0;
    for (auto id : {0,5,6,255}) {
        state.party_order[0] = std::uint8_t(id);
        advance_meters(state,0,policy);
        check(member.current_hp == 101 && member.hp_fraction == 1,
              "Empty/guest/nonplayer order entry was treated as a chosen character");
    }
    state.party_order[0] = 2;
    policy.hp_speed = 0x00018000;
    member.current_hp = 109; member.hp_fraction = 0xffff;
    advance_meters(state,0,policy);
    check(member.current_hp == 110 && member.hp_fraction == 1,"Upward target clamp differs");
    advance_meters(state,0,policy);
    check(member.current_hp == 110 && member.hp_fraction == 0,"Settled sentinel did not clear");
    member.hp_fraction = 2;
    advance_meters(state,0,policy);
    check(member.hp_fraction == 2,"Inactive equal meter normalized a retained even fraction");
    member.current_hp = 0; member.target_hp = 0; member.hp_fraction = 3;
    advance_meters(state,0,policy);
    check(member.current_hp == 0 && member.hp_fraction == 1,"Wrapped downward underflow was not clamped");

    member.current_hp = 100; member.target_hp = 80; member.hp_fraction = 1;
    policy.fastest_hp_increase = 0xff; policy.hp_speed = 0x10000;
    advance_meters(state,0,policy);
    check(member.current_hp == 99 && member.hp_fraction == 1,"Fastest flag incorrectly accelerated damage");
    member.target_hp = 120;
    advance_meters(state,0,policy);
    check(member.current_hp == 105 && member.hp_fraction == 0x4001,
          "Fastest healing did not use6.25HP per selected call");
    policy.fastest_hp_increase = 0;
    policy.half_speed = 0x80;
    policy.hp_speed = 0x80000001;
    check(effective_hp_speed(policy) == 0xc0000000,
          "Half speed lost arithmetic sign extension of the source32-bit field");
    policy.hp_speed = 0xffffffff;
    check(effective_hp_speed(policy) == 0xffffffff,"Negative odd speed did not round as ASR32");
    policy.hp_speed = 0x00010001;
    check(effective_hp_speed(policy) == 0x8000,"Positive odd speed did not truncate its low bit");

    policy.flipout = 0x8000;
    member.current_hp = 999; member.target_hp = 999; member.hp_fraction = 1;
    member.current_pp = 0; member.target_pp = 0; member.pp_fraction = 1;
    advance_meters(state,0,policy);
    check(member.hp_fraction == 0 && member.target_hp == 1 &&
              member.pp_fraction == 0 && member.target_pp == 999,
          "Flipout endpoints did not retarget after settling both fractions");
    advance_meters(state,0,policy);
    check(member.current_hp == 992 && member.hp_fraction == 0xc000 &&
              member.current_pp == 6 && member.pp_fraction == 0x4000,
          "Flipout did not bypass fraction activation/half-speed controls");
    member.current_hp = 1; member.target_hp = 1; member.hp_fraction = 1;
    member.current_pp = 999; member.target_pp = 999; member.pp_fraction = 1;
    advance_meters(state,0,policy);
    check(member.target_hp == 999 && member.target_pp == 0,"Opposite flipout endpoints differ");
}
}
int main() {
    try {
        cases(eb::GameVersion::US);
        cases(eb::GameVersion::JP);
        std::cout << "native party meters: " << checks << " checks passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
