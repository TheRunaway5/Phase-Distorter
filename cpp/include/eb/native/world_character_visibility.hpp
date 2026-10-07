#pragma once
#include "eb/native/world_party.hpp"
#include <vector>

namespace eb::native {
class WorldSpriteFade;
// The party/member selection and DRAW_DISABLED owner used by CC1FEB/EC.
// Visibility borrows the real authored roles, including released role residue;
// it never removes an actor or substitutes a copied party/graphics model.
class WorldCharacterVisibility {
public:
    WorldCharacterVisibility(const party::State& party, const WorldPartyState& formation,
                             ActorWorld& actors)
        : party_(party), formation_(formation), actors_(actors) {}
    WorldCharacterVisibility(const party::State& party, const WorldPartyState& formation,
                             ActorWorld& actors, WorldSpriteFade& fade);
    bool uses(const ActorWorld& actors) const noexcept { return &actors == &actors_; }
    // Complete C4608C member resolution, with FF selecting the independent
    // current leader role and ordinary lookup scanning all six display slots.
    std::uint16_t role(std::uint16_t member) const;
    // Complete C463F4/C4645A. Both compare00FF (the show source spells it
    // #<-1). Other words resolve through their low-byte member selector.
    void hide(std::uint16_t member);
    void show(std::uint16_t member);
    // CC1FE5 passes one literal byte to C46594. FF pauses role23 and the
    // counted formation; other selector misses leave every actor unchanged.
    void set_player_lock(std::uint8_t member);
    // CC1FE8/C46631 reenables the same real callbacks without changing them.
    void clear_player_lock(std::uint8_t member);
    // CC1FE6/E7/E9/EA use a literal word and the first retained numeric NPC
    // or sprite role. These selectors do not use the party FF convention.
    void set_npc_lock(std::uint16_t npc);
    void clear_npc_lock(std::uint16_t npc);
    void set_sprite_lock(std::uint16_t sprite);
    void clear_sprite_lock(std::uint16_t sprite);
    // The actual shared fade producer runs before changing visibility flags.
    // The helper-only constructor admits modes0/1/6, which return immediately.
    void apply(std::uint8_t member, std::uint8_t effect, bool visible);
private:
    void player_lock(std::uint8_t member, bool paused);
    void entity_lock(std::uint16_t selector, bool sprite, bool paused);
    std::vector<unsigned> targets(std::uint16_t member) const;
    const party::State& party_;
    const WorldPartyState& formation_;
    ActorWorld& actors_;
    WorldSpriteFade* fade_{};
};
} // namespace eb::native
