#include "eb/native/world_npc_commands.hpp"
#include "eb/native/world_sprite_fade.hpp"
#include <stdexcept>

namespace eb::native {
WorldNpcCommands::WorldNpcCommands(const NpcCatalog &catalog, const ActionScriptData &scripts,
    ActorWorld &actors, PreparedActorState &prepared, WorldSpriteFade &fade)
    : catalog_(catalog), scripts_(scripts), actors_(actors), prepared_(prepared), fade_(fade) {
    if (!fade.uses(actors)) throw std::invalid_argument("NPC commands require the actual actor fade owner");
}
bool WorldNpcCommands::uses(const ActorWorld &actors) const noexcept { return &actors_==&actors; }
std::uint16_t WorldNpcCommands::create(std::uint16_t sprite, std::uint16_t script,
                                      std::optional<NpcId> npc) {
    auto spec=actors_.prepare_actor(sprite,script,prepared_);
    spec.npc=npc;
    // CREATE_ENTITY writes the shared NEW_ENTITY_PRIORITY before INIT_ENTITY;
    // a subsequent real fade controller may overwrite it again.
    prepared_.priority=1;
    const auto id=npc?actors_.create_prepared_npc(spec):actors_.create_authored(spec);
    if (!id) throw std::runtime_error("Prepared actor creation exhausted its authored roles");
    return std::uint16_t(*actors_.actor(*id).authored_role());
}
std::uint16_t WorldNpcCommands::create_sprite(std::uint16_t sprite,std::uint16_t script,std::uint8_t effect) {
    if (effect==0xff) {
        if (count_==queue_.size()) throw std::out_of_range("Actor creation queue exceeds its owned twelve records");
        queue_[count_++]={sprite,script};
        return 0xffff;
    }
    const auto role=create(sprite,script,std::nullopt);
    fade_.apply(role,effect);
    return role;
}
std::uint16_t WorldNpcCommands::create_npc(std::uint16_t npc,std::uint16_t script,std::uint8_t effect) {
    const auto role=create(std::uint16_t(catalog_.definition(npc).sprite),script,npc);
    fade_.apply(role,effect);
    return role;
}
void WorldNpcCommands::set_direction(std::uint16_t npc,std::uint16_t direction) {
    for (unsigned role=0;role<30;++role) {
        if (actors_.authored_npc_selector(role)!=npc) continue;
        actors_.refresh_authored_direction(role,direction);
        return;
    }
}
void WorldNpcCommands::set_sprite_direction(std::uint16_t sprite,std::uint16_t direction) {
    if (const auto role=actors_.first_authored_role_with_sprite(sprite))
        actors_.refresh_authored_direction(*role,direction);
}
void WorldNpcCommands::set_script(std::uint16_t npc,std::uint16_t script) {
    for (unsigned role=0;role<30;++role) {
        if (actors_.authored_npc_selector(role)!=npc) continue;
        const auto id=actors_.actor_for_role(role);
        // INIT_ENTITY_UNKNOWN2 loops forever on a released script slot.
        if (!id) throw std::logic_error("NPC script replacement selected a released source script slot");
        actors_.replace_script(*id,scripts_.entry(script));
        return;
    }
}
void WorldNpcCommands::set_sprite_script(std::uint16_t sprite,std::uint16_t script) {
    actors_.replace_sprite_script(sprite,script);
}
void WorldNpcCommands::drain_created() {
    while (count_) {
        const auto pair=queue_[--count_];
        (void)create(pair.sprite,pair.script,std::nullopt);
    }
}
} // namespace eb::native
