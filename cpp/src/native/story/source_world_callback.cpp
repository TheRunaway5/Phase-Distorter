#include "eb/native/story/source_world_callback.hpp"
#include "eb/native/world_runtime.hpp"
#include <stdexcept>

namespace eb::native::story {
SourceWorldCallbackWork::SourceWorldCallbackWork(WorldRuntime &runtime,WorldScheduler &scheduler)
    :runtime_(runtime),scheduler_(scheduler) {
  if(!runtime.uses_world_interrupt_callback(scheduler))
    throw std::invalid_argument("Source world callback requires its actual runtime scheduler");
}
bool SourceWorldCallbackWork::uses(const WorldRuntime &runtime) const noexcept {
  return &runtime_==&runtime&&runtime.uses_world_interrupt_callback(scheduler_);
}
unsigned SourceWorldCallbackWork::maximum_master_clocks(bool fast_rom,std::uint8_t published_frame_counter) const {
  if(!uses(runtime_))throw std::logic_error("Source world callback lost its actual installed owner");
  return scheduler_.source_master_clocks({false,true},fast_rom,published_frame_counter);
}
void SourceWorldCallbackWork::execute(SourceWorkClock &clock,const std::function<void()> &actual_callback) {
  if(!uses(runtime_))throw std::logic_error("Source world callback lost its actual installed owner");
  scheduler_.with_source_work(clock,{false,true},actual_callback);
}
}
