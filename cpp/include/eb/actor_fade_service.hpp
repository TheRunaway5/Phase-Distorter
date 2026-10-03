#pragma once
#include <cstdint>
#include <optional>

namespace eb {
class SnapshotArchive;
class MainCpu65816;
class SnesBus;
enum class FadeClockOwner { HardwareFrame, ActorPass };
// Transitional source boundary. The explicit producer catalog binds authored
// scene/action-script controllers to the typed fade clock before their first
// countdown tick. Unknown controllers preserve the standalone hardware clock.
class ActorFadeService {
  public:
    bool try_execute(MainCpu65816 &cpu, SnesBus &bus);
    FadeClockOwner owner() const { return owner_; }
    std::uint64_t actor_fade_ticks() const { return actor_fade_ticks_; }
    void snapshot_io(SnapshotArchive &archive);

  private:
    FadeClockOwner owner_ = FadeClockOwner::HardwareFrame;
    std::optional<std::uint16_t> actor_entry_stack_;
    std::optional<std::uint16_t> script_fade_stack_;
    std::optional<std::uint64_t> last_actor_fade_frame_;
    std::uint64_t actor_fade_ticks_{};
};
} // namespace eb
