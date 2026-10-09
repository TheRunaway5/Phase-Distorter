#pragma once
#include "eb/native/world_music.hpp"
#include "eb/native/world_runtime.hpp"
namespace eb::native::world::music {
// C03C25, suspended inside the actual EVENT1/C05200 maintenance callback.
// The parent retains its SectorMusic request through the conditional WAIT;
// input, IRQ work and audio use that same runtime's genuine nested child.
class SectorTransition {
public:
  static std::unique_ptr<SectorTransition> begin(WorldRuntime &,WorldMusic &,
      WorldMusicState &,const npcs::InteractionState &,const story::TickState &,
      WorldRuntime::Operation &parent);
  ~SectorTransition();
  SectorTransition(const SectorTransition &)=delete;
  dialogue::Progress advance(unsigned work_budget=256);
  WorldRuntime::Operation *runtime_operation() noexcept {return child_.get();}
  bool uses_parent(const WorldRuntime::Operation &parent) const noexcept {return &parent_==&parent;}
  bool complete() const noexcept {return done_;}
private:
  SectorTransition(WorldRuntime &,WorldMusic &,WorldMusicState &,
      const npcs::InteractionState &,WorldRuntime::Operation &);
  WorldRuntime &runtime_;
  WorldMusic &music_;
  WorldMusicState &state_;
  const npcs::InteractionState &leader_;
  WorldRuntime::Operation &parent_;
  std::unique_ptr<WorldRuntime::Operation> child_;
  unsigned phase_{};
  bool done_{},executing_{};
};
}
