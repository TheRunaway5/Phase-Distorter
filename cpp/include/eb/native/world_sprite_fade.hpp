#pragma once

#include "eb/native/actor_creation.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/sprite_effects.hpp"
#include "eb/native/story/random.hpp"

namespace eb::native {
// Actual Event859 calls. Scheduling, task sleeps and task retirement remain in
// the imported ActionScripts interpreter; this owner only executes each helper.
enum class WorldSpriteFadeTask {
    PauseActors, RestoreActors, ShowSprites, RefreshSprites, HideBlinkSprites,
    Rows, Columns, ResetDissolve, Dissolve, FinishTask, ReleaseController
};
class WorldSpriteFade {
public:
    WorldSpriteFade(const SpriteEffectContent &, ActorWorld &, story::RandomState &,
                    PreparedActorState &, battle::PsiScratch &);
    ~WorldSpriteFade();
    WorldSpriteFade(const WorldSpriteFade &) = delete;
    WorldSpriteFade &operator=(const WorldSpriteFade &) = delete;
    bool uses(const ActorWorld &actors) const noexcept { return &actors_ == &actors; }
    // Complete C4C91A producer. Modes0/1/6 return without touching any owner.
    void apply(std::uint16_t authored_role, std::uint16_t mode);
    // The meaningful row/column result is the number not complete at entry,
    // including the final copying call. Other helper results are incidental.
    std::optional<std::uint16_t> step(WorldSpriteFadeTask, ActorId controller);
    std::optional<ActorId> controller() const noexcept { return controller_; }
    std::uint16_t count() const noexcept { return count_; }
    std::uint16_t allocated_bytes() const noexcept { return allocated_; }
private:
    struct Record;
    WorldActor &target(const Record &);
    void publish(Record &);
    const SpriteEffectContent &content_;
    ActorWorld &actors_;
    story::RandomState &random_;
    PreparedActorState &prepared_;
    battle::PsiScratch &scratch_;
    std::optional<ActorId> controller_;
    std::vector<Record> records_;
    std::uint16_t count_{}, allocated_{};
    std::array<AuthoredActorPause,30> paused_{};
    bool pause_saved_{};
};
} // namespace eb::native
