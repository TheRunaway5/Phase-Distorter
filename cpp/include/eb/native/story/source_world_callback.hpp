#pragma once
#include "eb/native/story/source_nmi.hpp"
#include "eb/native/world_scheduler.hpp"

namespace eb::native::story {
// PROCESS_OVERWORLD_TASKS runs from NMI's C0 callback with D=0200.
// Its C function reserves16 bytes, so its actual direct page is01F0.
class SourceWorldCallbackWork final : public SourceCallbackWork {
public:
  SourceWorldCallbackWork(WorldRuntime &,WorldScheduler &);
  bool uses(const WorldRuntime &) const noexcept override;
  unsigned maximum_master_clocks(bool fast_rom,std::uint8_t published_frame_counter) const override;
  void execute(SourceWorkClock &,const std::function<void()> &actual_callback) override;
private:
  WorldRuntime &runtime_;
  WorldScheduler &scheduler_;
};
}
