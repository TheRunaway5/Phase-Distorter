#include "eb/native/world_character_visibility.hpp"
#include "eb/native/world_sprite_fade.hpp"
#include <stdexcept>

namespace eb::native {
WorldCharacterVisibility::WorldCharacterVisibility(
    const party::State& party, const WorldPartyState& formation,
    ActorWorld& actors, WorldSpriteFade& fade)
    : party_(party), formation_(formation), actors_(actors), fade_(&fade) {
    if (!fade.uses(actors))
        throw std::invalid_argument("Character visibility requires the actual actor fade owner");
}

std::uint16_t WorldCharacterVisibility::role(std::uint16_t member) const {
    const auto byte = std::uint8_t(member);
    if (byte == 0xff) return formation_.current_leader_role;
    for (unsigned i = 0; i < party_.display_order.size(); ++i)
        if (party_.display_order[i] == byte) return formation_.roles[i];
    return 0xffff;
}
std::vector<unsigned> WorldCharacterVisibility::targets(std::uint16_t member) const {
    std::vector<unsigned> result;
    if (member == 0xff) {
        if (party_.party_count > formation_.roles.size())
            throw std::domain_error("Character visibility exceeds the owned party role list");
        for (unsigned i = 0; i < party_.party_count; ++i) result.push_back(formation_.roles[i]);
    } else if (const auto selected = role(member); selected != 0xffff) result.push_back(selected);
    for (const auto selected : result)
        if (selected >= 30) throw std::domain_error("Character visibility leaves the authored role table");
    return result;
}
void WorldCharacterVisibility::hide(std::uint16_t member) {
    const auto selected = targets(member);
    // C07C5B visits the physical six party roles even when a role is released.
    auto& scene = actors_.appearance_scene();
    if (scene.intangibility_ticks)
        for (unsigned i = 24; i < 30; ++i) actors_.set_authored_sprite_hidden(i, false);
    scene.intangibility_ticks = 0;
    for (const auto selected_role : selected) actors_.set_authored_sprite_hidden(selected_role, true);
}
void WorldCharacterVisibility::show(std::uint16_t member) {
    const auto selected = targets(member);
    for (const auto selected_role : selected) actors_.set_authored_sprite_hidden(selected_role, false);
}
void WorldCharacterVisibility::player_lock(std::uint8_t member, bool paused) {
    // The source spells CMP #<-1, a 16-bit immediate00FF. This differs from
    // the independent FF leader lookup inside C4608C itself.
    auto selected = targets(member);
    if (member == 0xff) selected.insert(selected.begin(), 23);
    for (const auto role : selected) actors_.set_authored_pause(role, !paused, !paused);
}
void WorldCharacterVisibility::set_player_lock(std::uint8_t member) {
    player_lock(member, true);
}
void WorldCharacterVisibility::clear_player_lock(std::uint8_t member) {
    player_lock(member, false);
}
void WorldCharacterVisibility::entity_lock(std::uint16_t selector, bool sprite, bool paused) {
    const auto selected=sprite ? actors_.first_authored_role_with_sprite(selector)
                               : actors_.first_authored_role_with_npc(selector);
    if (selected) actors_.set_authored_pause(*selected,!paused,!paused);
}
void WorldCharacterVisibility::set_npc_lock(std::uint16_t npc) { entity_lock(npc,false,true); }
void WorldCharacterVisibility::clear_npc_lock(std::uint16_t npc) { entity_lock(npc,false,false); }
void WorldCharacterVisibility::set_sprite_lock(std::uint16_t sprite) { entity_lock(sprite,true,true); }
void WorldCharacterVisibility::clear_sprite_lock(std::uint16_t sprite) { entity_lock(sprite,true,false); }
void WorldCharacterVisibility::apply(std::uint8_t member, std::uint8_t effect, bool visible) {
    // Validate the later visibility destination before the fade producer can
    // publish artwork or allocate its genuine Event859 controller.
    (void)targets(member);
    if (fade_) fade_->apply(role(member), effect);
    else if (effect != 0 && effect != 1 && effect != 6)
        throw std::domain_error("Animated character visibility requires the actual entity fade owner");
    if (visible) show(member); else hide(member);
}
} // namespace eb::native
