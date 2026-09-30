// Source: misc/hp_pp_roller.asm, unknown/C2/C20F58.asm, system/math/asr32.asm.
// The US/JP layout differences are represented by the same typed party owner.
#include "eb/native/party/meters.hpp"

namespace eb::native::party {
namespace {
constexpr std::uint32_t flipout_step = 0x00064000;
constexpr std::uint32_t ordinary_pp_step = 0x00019000;
void roll(std::uint16_t& current, std::uint16_t& fraction, std::uint16_t target,
          bool flipout, std::uint32_t increase, std::uint32_t decrease) {
    if (!flipout && !(fraction & 1)) {
        // Arming does not change the integer value until a later selected call.
        if (current != target) fraction = 1;
        return;
    }
    if (current == target && fraction == 1) {
        fraction = 0;
        return;
    }
    const bool increasing = current < target;
    const auto before = (std::uint32_t(current) << 16) | fraction;
    const std::uint32_t after = increasing ? before + increase : before - decrease;
    current = std::uint16_t(after >> 16);
    fraction = std::uint16_t(after);
    // The downward1000 check is unsigned and inclusive on the retained side;
    // it catches wrapped underflow without inventing a modern saturating add.
    if (increasing ? current >= target : current < target || current > 1000) {
        current = target;
        fraction = 1;
    }
}
} // namespace
std::uint32_t effective_hp_speed(const MeterPolicy& policy) {
    if (!policy.half_speed) return policy.hp_speed;
    return (policy.hp_speed >> 1) | (policy.hp_speed & 0x80000000u);
}
void advance_meters(State& party, std::uint16_t frame_counter, const MeterPolicy& policy) {
    if (policy.rolling_disabled) return;
    const auto member = party.party_order[frame_counter & 3];
    if (!member || member > State::chosen_character_count) return;
    auto& character = party.character(member);
    const auto ordinary_hp = effective_hp_speed(policy);
    const bool flipout = policy.flipout != 0;
    roll(character.current_hp, character.hp_fraction, character.target_hp, flipout,
         flipout || policy.fastest_hp_increase ? flipout_step : ordinary_hp,
         flipout ? flipout_step : ordinary_hp);
    roll(character.current_pp, character.pp_fraction, character.target_pp, flipout,
         flipout ? flipout_step : ordinary_pp_step,
         flipout ? flipout_step : ordinary_pp_step);
    if (flipout) {
        if (character.current_hp == 999) character.target_hp = 1;
        else if (character.current_hp == 1) character.target_hp = 999;
        if (character.current_pp == 999) character.target_pp = 0;
        else if (!character.current_pp) character.target_pp = 999;
    }
}
} // namespace eb::native::party
