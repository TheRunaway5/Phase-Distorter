#pragma once

#include "eb/native/battle/roster.hpp"
#include "eb/native/story/random.hpp"

namespace eb::native { struct WorldPartyState; }
namespace eb::native::battle::actions {
// Complete arithmetic/status leaves shared by physical, PSI and item actions.
// These functions retain source-width wrapping and consume the real RAND owner.
std::uint16_t variance25(story::RandomState&, std::uint16_t);
bool success255(story::RandomState&, std::uint16_t);
bool success500(story::RandomState&, std::uint16_t);
bool success_speed(story::RandomState&, const Battler& attacker,
                   const Battler& target, std::uint16_t limit);
bool success_luck40(story::RandomState&, const Battler& target);
bool success_luck80(story::RandomState&, const Battler& target);
bool dodge(story::RandomState&, const Battler& attacker, const Battler& target);
std::uint8_t damage_modifier(std::uint16_t level);
std::uint8_t status_modifier(std::uint16_t level);
void increase_offense(Battler&);
void increase_defense(Battler&);
void decrease_offense(Battler&);
void decrease_defense(Battler&);
bool inflict(Battler&, unsigned group, std::uint16_t status);

// SET_HP/SET_PP and their subtracting callers publish to the actual party and
// guest owners. Player current values roll separately; enemies/guests change
// immediately. A battler's source row selects the character record, not its ID.
class Meters {
public:
    Meters(Roster&, party::State&, WorldPartyState&);
    void set_hp(unsigned slot, std::uint16_t value);
    void set_pp(unsigned slot, std::uint16_t value);
    void reduce_hp(unsigned slot, std::uint16_t amount);
    void reduce_pp(unsigned slot, std::uint16_t amount);
    bool uses(const Roster&, const party::State&, const WorldPartyState&) const noexcept;
private:
    void validate(unsigned slot, bool hp) const;
    Roster& roster_;
    party::State& party_;
    WorldPartyState& guests_;
};
} // namespace eb::native::battle::actions
