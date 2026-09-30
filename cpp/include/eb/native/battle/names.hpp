#pragma once

#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "eb/native/dialogue/substitution_resources.hpp"

namespace eb::native::battle {
// Complete synchronous FIX_ATTACKER_NAME/FIX_TARGET_NAME and their small
// selector-changing callers. This stable owner retains the adjacent source
// scratch fields; it neither renders text nor creates an action/encounter.
// All borrowed owners must outlive it and any coordinator borrowing it.
class Names {
public:
    Names(const Roster&, const party::State&, dialogue::PreparedMessage&,
          const dialogue::SubstitutionResources&, ActionState&);
    Names(const Names&) = delete;
    Names& operator=(const Names&) = delete;
    Names(Names&&) = delete;
    Names& operator=(Names&&) = delete;
    GameVersion version() const { return roster_.version(); }
    bool uses(const Roster&, const party::State&, const dialogue::PreparedMessage&,
              const ActionState&) const noexcept;
    void fix_attacker(std::uint16_t mode);
    void fix_target();
    void swap_attacker_with_target();
    // C23E32: zero flags do nothing; otherwise select the first set physical
    // slot and execute FIX_TARGET_NAME. No consciousness/side filter is added.
    void select_first_target();
    std::span<const std::uint8_t> scratch(dialogue::PreparedName) const;

private:
    using Scratch = std::array<std::uint8_t, 54>;
    struct Publication {
        dialogue::PreparedName side;
        dialogue::NameMetadata metadata;
        std::array<std::uint8_t, 27> bytes{};
        unsigned count{};
        bool copied{};
    };
    unsigned scratch_size() const;
    unsigned selected(const std::optional<unsigned>&) const;
    Publication prepare(dialogue::PreparedName, unsigned slot, std::uint16_t mode, Scratch&) const;
    void publish(const Publication&);
    const Roster& roster_;
    const party::State& party_;
    dialogue::PreparedMessage& prepared_;
    const dialogue::SubstitutionResources& resources_;
    ActionState& action_;
    Scratch scratch_{};
};
} // namespace eb::native::battle
