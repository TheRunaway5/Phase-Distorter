#pragma once
#include "eb/native/world_startup.hpp"
#include "eb/native/world_party_relocation.hpp"
#include "eb/native/world_fade_out.hpp"
#include "eb/native/world_teleport_resources.hpp"
#include "eb/native/world_npc_commands.hpp"
#include "eb/native/world_music.hpp"
#include <functional>

namespace eb::native {
class WorldScreenTransition;
// The source's persistent teleport callback and movement counter; coordinates,
// map selection, navigation and prepared NPC values retain their existing owners.
struct WorldScriptTeleportState {
    std::uint32_t post_callback{};
    std::uint16_t moved_since_map_load{};
};
struct WorldScriptTeleportOwners {
    WorldStartupOwners world;
    WorldScriptTeleportState &state;
    const WorldTeleportResources &content;
    const WorldStartupData &startup_data;
    std::shared_ptr<const dialogue::Program> program;
    dialogue::MenuHost &menus;
    WorldMapLoad &map_load;
    WorldMapLoadState &map_state;
    WorldPartyRelocation &relocation;
    WorldNpcCommands &npc_commands;
    WorldScreenTransition &transition;
    WorldFadeOut &fade_out;
    WorldDisplayFade &fade;
    WorldNavigationState &navigation;
    WorldMusic &music;
    std::function<void(std::uint16_t)> play_sound;
};
// CC1F21's synchronous TELEPORT. The actual dialogue parent remains suspended
// through transition, map preparation, party placement and nested BuzzBuzz text.
class WorldScriptTeleport {
public:
    class Operation {
    public:
        ~Operation();
        dialogue::Progress advance(unsigned work_budget=4096);
        WorldRuntime::Operation *runtime_operation() noexcept;
        bool complete() const noexcept;
    private:
        friend class WorldScriptTeleport;
        struct State;
        explicit Operation(std::unique_ptr<State>);
        std::unique_ptr<State> state_;
    };
    explicit WorldScriptTeleport(WorldScriptTeleportOwners);
    std::unique_ptr<Operation> begin(unsigned destination,WorldRuntime::Operation &parent);
    bool busy() const noexcept { return active_!=nullptr; }
    bool failed() const noexcept { return failed_; }
private:
    WorldScriptTeleportOwners owners_;
    Operation *active_{};
    bool failed_{};
};
} // namespace eb::native
