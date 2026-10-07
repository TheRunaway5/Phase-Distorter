#pragma once
#include "eb/native/world_script_teleport.hpp"
#include "eb/native/world_doors.hpp"
#include "eb/native/world_sprite_fade.hpp"
#include "eb/native/story/interaction_calls.hpp"

namespace eb::native {
// Stable native owners used by the queued DOOR_TRANSITION consumer. The queue
// continuation remains suspended until this operation completes; every actor,
// story flag and destination continues to belong to its existing world owner.
struct WorldDoorEntryOwners {
    WorldStartupOwners world;
    WorldScriptTeleportState &counters;
    const WorldDoorResources &doors;
    const WorldTeleportResources &transitions;
    const WorldStartupData &startup_data;
    std::shared_ptr<const dialogue::Program> program;
    dialogue::MenuHost &menus;
    WorldMapLoad &map_load;
    WorldPartyRelocation &relocation;
    WorldNpcCommands &npc_commands;
    WorldScreenTransition &transition;
    WorldFadeOut &fade_out;
    WorldDisplayFade &fade;
    WorldNavigationState &navigation;
    story::InputState &input;
    WorldMusic &music;
    WorldSpriteFade &sprite_fade;
    std::function<void(std::uint16_t)> play_sound;
};
class WorldDoorEntry {
public:
    class Operation {
    public:
        ~Operation();
        dialogue::Progress advance(unsigned work_budget=4096);
        WorldRuntime::Operation *runtime_operation() noexcept;
        bool complete() const noexcept;
        bool entered() const noexcept;
    private:
        friend class WorldDoorEntry;
        struct State;
        explicit Operation(std::unique_ptr<State>);
        std::unique_ptr<State> state_;
    };
    explicit WorldDoorEntry(WorldDoorEntryOwners);
    std::unique_ptr<Operation> begin(dialogue::ReferenceKey);
    bool busy() const noexcept { return active_!=nullptr; }
    bool failed() const noexcept { return failed_; }
private:
    WorldDoorEntryOwners owners_;
    std::unique_ptr<story::InteractionCalls> text_;
    Operation *active_{};
    bool failed_{};
};
} // namespace eb::native
