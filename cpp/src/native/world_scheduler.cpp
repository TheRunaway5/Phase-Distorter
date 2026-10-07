#include "eb/native/world_scheduler.hpp"
#include "eb/native/world_food_status.hpp"
#include "eb/native/appearance_service.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/npcs/interaction_queue.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/world_maintenance.hpp"
#include <stdexcept>

namespace eb::native {
WorldScheduler::WorldScheduler(dialogue::WindowHost &windows,
                               story::TickState &clock, npcs::DadPhoneState &phone,
                               AppearanceSceneContext &appearance,
                               WorldMaintenanceState &maintenance)
    : windows_(windows), clock_(clock), phone_(phone), appearance_(appearance),
      maintenance_(maintenance) {}
void WorldScheduler::check() const {
  if (failed_)
    throw std::logic_error("A failed world scheduler cannot advance");
}
void WorldScheduler::bind_callbacks(WorldSchedulerCallbacks &callbacks) {
  check();
  if (processing_ || (callbacks_ && callbacks_ != &callbacks))
    throw std::logic_error("Another callback owner is bound to the world scheduler");
  callbacks_ = &callbacks;
}
void WorldScheduler::clear_callbacks(const WorldSchedulerCallbacks &callbacks) noexcept {
  if (callbacks_ != &callbacks)
    return;
  callbacks_ = nullptr;
  for (const auto &task : tasks_)
    if (task.frames_left)
      failed_ = true;
  if (processing_)
    failed_ = true;
}
bool WorldScheduler::bound_to(const WorldSchedulerCallbacks &callbacks) const noexcept {
  return callbacks_ == &callbacks;
}
void WorldScheduler::bind_food_status(WorldFoodStatus &food) {
  check();
  if(processing_ || (food_ && food_!=&food))
    throw std::logic_error("World scheduler has another food-status owner");
  food_=&food;
}
void WorldScheduler::clear_food_status(const WorldFoodStatus &food) noexcept {
  if(food_!=&food) return;
  food_=nullptr;
  for(const auto &task:tasks_)
    if(task.frames_left && task.callback==WorldScheduledCallback::FoodStatusReset) failed_=true;
  if(processing_) failed_=true;
}
bool WorldScheduler::uses(const dialogue::WindowHost &windows,
                          const story::TickState &clock,
                          const npcs::DadPhoneState &phone,
                          const AppearanceSceneContext &appearance,
                          const WorldMaintenanceState &maintenance) const noexcept {
  return &windows_ == &windows && &clock_ == &clock && &phone_ == &phone &&
         &appearance_ == &appearance && &maintenance_ == &maintenance;
}
std::optional<unsigned> WorldScheduler::available_slot() const noexcept {
  for (unsigned i = 0; i < tasks_.size(); ++i)
    if (!tasks_[i].frames_left)
      return i;
  return {};
}
std::optional<unsigned> WorldScheduler::schedule(std::uint16_t delay,
                                                WorldScheduledCallback callback) {
  check();
  if (callback == WorldScheduledCallback::FoodStatusReset ? !food_ : !callbacks_)
    throw std::logic_error("World scheduling requires its actual callback owner");
  switch (callback) {
  case WorldScheduledCallback::EscalatorEnter:
  case WorldScheduledCallback::EscalatorExit:
  case WorldScheduledCallback::StairsEnter:
  case WorldScheduledCallback::StairsExit:
  case WorldScheduledCallback::FoodStatusReset:
    break;
  default:
    throw std::invalid_argument("Unsupported world scheduler callback");
  }
  const auto slot = available_slot();
  if (slot)
    tasks_[*slot] = {delay, callback};
  return slot;
}
bool WorldScheduler::process_frame() {
  check();
  if (processing_)
    return false;
  processing_ = true;
  try {
    // Source NMI owns the byte increment. Phone time progresses even when a
    // window/battle/enemy gate suppresses all scheduled tasks below.
    if (clock_.frame_counter == 0 && phone_.timer)
      --phone_.timer;
    if (windows_.draw_order().empty() && !windows_.prompt_state().battle_mode &&
        !appearance_.battle_swirl_ticks && !maintenance_.enemy_touched) {
      for (auto &task : tasks_) {
        if (!task.frames_left || --task.frames_left)
          continue;
        if (task.callback == WorldScheduledCallback::FoodStatusReset ? !food_ : !callbacks_)
          throw std::logic_error("Scheduled task lost its callback owner");
        // Reuse of this freed slot and insertion into later slots take effect
        // immediately. Do not replace this live scan with a snapshot queue.
        switch (task.callback) {
        case WorldScheduledCallback::EscalatorEnter:
          callbacks_->escalator_enter(*this); break;
        case WorldScheduledCallback::EscalatorExit:
          callbacks_->escalator_exit(*this); break;
        case WorldScheduledCallback::StairsEnter:
          callbacks_->stairs_enter(*this); break;
        case WorldScheduledCallback::StairsExit:
          callbacks_->stairs_exit(*this); break;
        case WorldScheduledCallback::FoodStatusReset:
          food_->reset(); break;
        }
        check();
      }
    }
    processing_ = false;
    return true;
  } catch (...) {
    processing_ = false;
    failed_ = true;
    throw;
  }
}
} // namespace eb::native
