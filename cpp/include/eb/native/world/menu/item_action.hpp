#pragma once
#include "eb/native/battle/actions/executor.hpp"
#include "eb/native/world_startup.hpp"
#include "eb/native/world_party_following.hpp"
#include <optional>
namespace eb::native::world::menu {
// The inventory caller has completed the original item gate, target selector,
// removal and window/name/memory prefix before entering this action segment.
struct ItemActionRequest {
    std::uint16_t user{}, slot{};
    std::uint8_t item{}, target{}; // FF targets each currently controlled member.
    dialogue::ReferenceKey description{};
    bool execute=true;
    // PSI supplies its action-table selector and uses the same CITEM byte.
    // Item calls retain their actual item-effect and inventory-slot producers.
    std::optional<std::uint16_t> action{};
    std::optional<std::uint8_t> ability{};
    bool teleport{};
};
struct ItemActionOwners {
    WorldStartupOwners world;
    WorldPartyFollowing &following;
    battle::Roster &roster;
    battle::ActionState &action;
    battle::actions::Executor &executor;
    const battle::actions::Resources &actions;
    const dialogue::SubstitutionResources &items;
    dialogue::PreparedMessage &prepared;
    story::BattleDialogue &dialogue;
    story::Scene &scene;
};
// OVERWORLD_USE_ITEM's real action segment, using the same retained battlers,
// party, action executor and world scene as ordinary encounters. UI gates and
// item transactions have their own original producers; they are not guessed.
class ItemAction {
public:
    class Operation {
    public:
        ~Operation();
        dialogue::Progress advance(unsigned budget=4096);
        story::Scene::Operation *scene() noexcept;
        story::PartyFormation::Operation *party_update() noexcept;
        story::TeddyParty::Operation *teddy_update() noexcept;
        story::PartyMembership::Operation *membership_update() noexcept;
        bool complete() const noexcept;
    private:
        friend class ItemAction;
        struct State;
        explicit Operation(std::unique_ptr<State>);
        std::unique_ptr<State> state_;
    };
    explicit ItemAction(ItemActionOwners);
    std::unique_ptr<Operation> begin(ItemActionRequest);
private:
    ItemActionOwners owners_;
    Operation *active_{};
    bool failed_{};
};
} // namespace eb::native::world::menu
