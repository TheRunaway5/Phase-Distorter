#pragma once

#include "eb/native/actor_creation.hpp"
#include <array>
#include <span>

namespace eb::native {
class WorldSpriteFade;
struct QueuedActorCreation {
    std::uint16_t sprite{}, script{};
    bool operator==(const QueuedActorCreation &) const = default;
};

// The prepared actor globals, imported NPC/script catalogs and real actor
// lifetime remain borrowed. CC1F15's FF branch owns only a retained pair queue;
// teleport/door completion drains it in reverse order with live prepared state.
class WorldNpcCommands {
public:
    WorldNpcCommands(const NpcCatalog &, const ActionScriptData &, ActorWorld &,
                     PreparedActorState &, WorldSpriteFade &);
    WorldNpcCommands(const WorldNpcCommands &) = delete;
    WorldNpcCommands &operator=(const WorldNpcCommands &) = delete;
    bool uses(const ActorWorld &) const noexcept;
    // Queueing returns FFFF diagnostically; the source text command discards
    // the helper return. Immediate creation returns its actual authored role.
    std::uint16_t create_sprite(std::uint16_t sprite, std::uint16_t script, std::uint8_t effect);
    std::uint16_t create_npc(std::uint16_t npc, std::uint16_t script, std::uint8_t effect);
    void set_direction(std::uint16_t npc, std::uint16_t direction);
    void set_sprite_direction(std::uint16_t sprite, std::uint16_t direction);
    void set_script(std::uint16_t npc, std::uint16_t script);
    void set_sprite_script(std::uint16_t sprite, std::uint16_t script);
    std::span<const QueuedActorCreation> pending() const noexcept { return {queue_.data(),count_}; }
    void drain_created();
private:
    std::uint16_t create(std::uint16_t sprite, std::uint16_t script, std::optional<NpcId>);
    const NpcCatalog &catalog_;
    const ActionScriptData &scripts_;
    ActorWorld &actors_;
    PreparedActorState &prepared_;
    WorldSpriteFade &fade_;
    std::array<QueuedActorCreation,12> queue_{};
    std::uint16_t count_{};
};
} // namespace eb::native
