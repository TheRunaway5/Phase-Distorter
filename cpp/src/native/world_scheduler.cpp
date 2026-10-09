#include "eb/native/world_scheduler.hpp"
#include "eb/native/world_food_status.hpp"
#include "eb/native/appearance_service.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/npcs/interaction_queue.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/story/source_work.hpp"
#include <algorithm>
#include <vector>
#include <limits>
#include <stdexcept>

namespace eb::native {
namespace {
struct SchedulerAtom {
  story::SourceWorkCost cost;
  // 0 is control work, 1 decrements the phone, 2..5 decrement task slots.
  unsigned effect{};
};
std::vector<SchedulerAtom> source_plan(WorldScheduler::SourceCall call,
    std::uint8_t frame,std::uint16_t phone,const std::array<bool,4> &gates,
    const std::array<WorldScheduledTask,4> &tasks) {
  const bool paused=std::any_of(gates.begin(),gates.end(),[](bool gate){return gate;});
  if(!paused)for(const auto &task:tasks)if(task.frames_left==1)
    throw std::logic_error("Source scheduler expiration requires its actual callback work");
  std::vector<SchedulerAtom> plan;
  const auto work=[&](unsigned cycles,unsigned fetch,unsigned slow=0,unsigned effect=0) {
    plan.push_back({{cycles,call.bank_zero_code?0u:fetch,slow+(call.bank_zero_code?fetch:0u),0},effect});
  };
  const auto dp=[&](unsigned cycles,unsigned slow=2) {work(cycles+unsigned(call.unaligned_direct_page),2,slow);};
  // PROCESS_OVERWORLD_TASKS' near entry. The caller owns JSR/indirect JMP.
  work(3,2);work(4,1,2);work(2,1);work(3,3);work(2,1);
  work(5,3,2);work(3,3);work(frame?3:2,2);
  if(!frame) {
    work(5,3,2);work(phone?2:3,2);
    if(phone)work(8,3,4,1);
  }
  work(5,3,2);work(3,3);work(gates[0]?3:2,2);
  bool stopped=gates[0];
  for(unsigned i=1;i<gates.size()&&!stopped;++i) {
    work(5,3,2);work(gates[i]?3:2,2);stopped=gates[i];
  }
  if(!stopped) {
    work(3,3);dp(4);work(3,3);dp(4);work(3,2);
    for(unsigned i=0;i<=tasks.size();++i) {
      dp(4);work(3,3);work(i<tasks.size()?3:2,2);
      if(i==tasks.size())break;
      // LDA abs,Y with base zero crosses a page for the real WRAM task array.
      work(6,3,2);work(tasks[i].frames_left?2:3,2);
      if(tasks[i].frames_left) {
        work(2,1);work(2,1);work(6,3,2,i+2);work(3,2);
      }
      dp(4);work(2,1);work(2,1);work(3,3);work(2,1);dp(4);dp(7,4);
    }
  }
  work(5,1,2);work(6,1,2); // PLD/RTS
  return plan;
}
}
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
    if(source_work_) {
      const auto plan=source_plan(source_call_,clock_.frame_counter,phone_.timer,
          {!windows_.draw_order().empty(),bool(windows_.prompt_state().battle_mode),
           bool(appearance_.battle_swirl_ticks),bool(maintenance_.enemy_touched)},tasks_);
      ++source_invocations_;
      for(const auto &atom:plan)source_work_->retire_source_work(atom.cost,[&] {
        if(atom.effect==1)--phone_.timer;
        else if(atom.effect>=2)--tasks_[atom.effect-2].frames_left;
      });
      processing_=false;return true;
    }
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
unsigned WorldScheduler::source_master_clocks(SourceCall call,bool fast_rom) const {
  return source_master_clocks(call,fast_rom,clock_.frame_counter);
}
unsigned WorldScheduler::source_master_clocks(SourceCall call,bool fast_rom,std::uint8_t published_frame_counter) const {
  check();
  const auto plan=source_plan(call,published_frame_counter,phone_.timer,
      {!windows_.draw_order().empty(),bool(windows_.prompt_state().battle_mode),
       bool(appearance_.battle_swirl_ticks),bool(maintenance_.enemy_touched)},tasks_);
  std::uint64_t clocks{};
  for(const auto &atom:plan)clocks+=atom.cost.master_clocks(fast_rom);
  if(clocks>std::numeric_limits<unsigned>::max())throw std::overflow_error("Source scheduler work is unbounded");
  return unsigned(clocks);
}
void WorldScheduler::with_source_work(story::SourceWorkService &work,SourceCall call,
    const std::function<void()> &callback) {
  check();
  if(processing_||source_work_||!callback)
    throw std::logic_error("Source scheduler work requires its actual idle callback");
  (void)source_master_clocks(call,false); // Complete admission before owner mutation.
  source_work_=&work;source_call_=call;source_invocations_=0;
  try {
    callback();
    if(source_invocations_!=1)throw std::logic_error("Source scheduler callback did not execute exactly once");
    source_work_=nullptr;
  } catch(...) {source_work_=nullptr;failed_=true;throw;}
}
} // namespace eb::native
