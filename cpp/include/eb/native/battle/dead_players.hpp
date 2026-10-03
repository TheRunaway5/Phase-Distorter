#pragma once
#include "eb/native/battle/encounter_resources.hpp"
#include "eb/native/battle/names.hpp"
#include "eb/native/story/battle_dialogue.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/story/scene.hpp"

namespace eb::native::battle {
// Complete CHECK_DEAD_PLAYERS. HP/PP are read from the live rolling party
// meters on each visit; newly unconscious players run the real window/text
// sequence, then every eligible player runs actual UPDATE_PARTY.
class DeadPlayers {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        story::Scene::Operation* scene() noexcept { return scene_.get(); }
        // A yielded bicycle service belongs to the actual formation child.
        // The existing movement lifecycle must run before its response.
        story::PartyFormation::Operation* party_update() noexcept { return update_.get(); }
        bool complete() const noexcept { return complete_; }
    private:
        friend class DeadPlayers;
        explicit Operation(DeadPlayers&);
        enum class Child { Window, Dialogue };
        bool pump(unsigned);
        DeadPlayers& owner_;
        unsigned slot_{}, phase_{}, character_{};
        bool close_{}, complete_{};
        std::optional<Child> child_;
        std::unique_ptr<story::Scene::Operation> scene_;
        std::unique_ptr<dialogue::WindowHost::Operation> window_;
        std::unique_ptr<story::BattleDialogue::Operation> dialogue_;
        std::unique_ptr<story::PartyFormation::Operation> update_;
    };
    DeadPlayers(std::shared_ptr<const EncounterResources>, Roster&, party::State&, ActionState&,
                Names&, story::BattleDialogue&, dialogue::WindowHost&, story::Scene&,
                story::PartyFormation&);
    DeadPlayers(const DeadPlayers&) = delete;
    DeadPlayers& operator=(const DeadPlayers&) = delete;
    std::unique_ptr<Operation> begin();
    bool busy() const noexcept { return active_ != nullptr; }
    bool failed() const noexcept { return failed_; }
    bool uses(const Roster&, const party::State&, const ActionState&) const noexcept;
    bool uses(const dialogue::WindowHost&, const story::Scene&,
              const story::BattleDialogue&) const noexcept;
private:
    std::shared_ptr<const EncounterResources> resources_;
    Roster& roster_;
    party::State& party_;
    ActionState& action_;
    Names& names_;
    story::BattleDialogue& dialogue_;
    dialogue::WindowHost& windows_;
    story::Scene& scene_;
    story::PartyFormation& formation_;
    Operation* active_{};
    bool failed_{};
};
} // namespace eb::native::battle
