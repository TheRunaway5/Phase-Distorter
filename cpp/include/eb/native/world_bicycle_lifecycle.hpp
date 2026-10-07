#pragma once
#include "eb/native/world_startup.hpp"
#include "eb/native/world_music.hpp"
namespace eb::native {
struct WorldBicycleLifecycleOwners {
    WorldStartupOwners world;
    WorldMusic &music;
    SpriteResources &sprites;
    const ActorCreationData &creation;
};
// C03CFD dismount, including actual role24 replacement, source audio policy,
// raw ActorFrame/WAIT children and the final input-disable publication.
class WorldBicycleLifecycle {
public:
    class Operation {
    public:
        ~Operation();
        dialogue::Progress advance(unsigned budget=4096);
        WorldRuntime::Operation *runtime_operation() noexcept { return runtime_.get(); }
        bool complete() const noexcept { return complete_; }
    private:
        friend class WorldBicycleLifecycle;
        Operation(WorldBicycleLifecycle &,WorldRuntime::Operation *);
        WorldBicycleLifecycle &owner_;
        WorldRuntime::Operation *parent_{};
        std::unique_ptr<WorldRuntime::Operation> runtime_;
        unsigned phase_{};
        bool complete_{}, queued_branch_{};
    };
    explicit WorldBicycleLifecycle(WorldBicycleLifecycleOwners);
    std::unique_ptr<Operation> begin(WorldRuntime::Operation *parent=nullptr);
    bool failed() const noexcept { return failed_; }
private:
    WorldBicycleLifecycleOwners owners_;
    Operation *active_{};
    bool failed_{};
};
} // namespace eb::native
