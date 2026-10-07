#include "eb/native/world_screen_transition.hpp"
#include "eb/native/battle/outcomes.hpp"
#include "eb/native/world_map_load.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
int signed_word(std::uint16_t value) {return value<0x8000?int(value):int(value)-65536;}
void pause_actors(ActorWorld &actors,bool pause) {
  // C0943C/C09451 walk the live linked list. They do not restore an old
  // snapshot: actors created between the two calls are unpaused as well.
  for(auto id:actors.actors()) {
    auto &actor=actors.actor(id);
    actor.scripts_and_physics_enabled=!pause;
    actor.tick_callback_enabled=!pause;
  }
}
}
struct WorldScreenTransition::Operation::State final : story::ActorFrameService {
  WorldScreenTransition &owner;
  WorldRuntime::Operation *parent;
  const ScreenTransitionConfig &config;
  bool entering;
  unsigned phase{}, index{}, warmup{};
  bool done{}, body{};
  std::uint64_t blank_receipt{};
  std::unique_ptr<WorldRuntime::Operation> runtime;
  State(WorldScreenTransition &o,WorldRuntime::Operation *p,const ScreenTransitionConfig &c,bool e)
      :owner(o),parent(p),config(c),entering(e) {}
  bool uses(const story::Scene &scene) const noexcept override {return &owner.owners_.runtime.scene()==&scene;}
  void checkpoint(ScreenTransitionCheckpoint value) {
    if(owner.observer_)owner.observer_(value,entering,index);
  }
  void apply(story::ActorFramePhase stage) override {
    auto &w=owner.owners_;
    if(stage==story::ActorFramePhase::ObjectsCleared)checkpoint(ScreenTransitionCheckpoint::ClearObjects);
    if(body && entering && stage==story::ActorFramePhase::ObjectsCleared) {
      auto &s=owner.state_;
      // C4268A adds fractions first, then signed whole velocity with carry.
      // C01731's ring-row uploads are represented by WorldMapArea's complete
      // source map sampling, retaining the active combination border policy.
      const unsigned x=unsigned(s.x_remainder)+s.x_fraction;
      const unsigned y=unsigned(s.y_remainder)+s.y_fraction;
      s.x_remainder=std::uint16_t(x);s.y_remainder=std::uint16_t(y);
      s.x=std::uint16_t(unsigned(s.x)+s.x_velocity+(x>>16));
      s.y=std::uint16_t(unsigned(s.y)+s.y_velocity+(y>>16));
      w.actors.scene().camera_x=s.x;w.actors.scene().camera_y=s.y;
      w.display.staged_scroll[0]=w.display.staged_scroll[1]={s.x,s.y};
      checkpoint(ScreenTransitionCheckpoint::MoveCamera);
      // C426C7 updates actual active-role projections before RUN_ACTIONSCRIPT_FRAME.
      for(auto id:w.actors.actors()) {
        auto &actor=w.actors.actor(id);
        actor.behavior.projected_x=signed_word(std::uint16_t((actor.action().position[0]>>16)-s.x));
        actor.behavior.projected_y=signed_word(std::uint16_t((actor.action().position[1]>>16)-s.y));
      }
      checkpoint(ScreenTransitionCheckpoint::ProjectActors);
    }
    if(stage==story::ActorFramePhase::BeforeScreen)checkpoint(ScreenTransitionCheckpoint::RunActors);
    if(body && !entering && stage==story::ActorFramePhase::BeforeScreen) {
      w.effects.advance();checkpoint(ScreenTransitionCheckpoint::AdvanceEffects);
    }
    if(stage==story::ActorFramePhase::ScreenUpdated) {
      w.display.staged_scroll[0]=w.display.staged_scroll[1]={w.actors.scene().camera_x,w.actors.scene().camera_y};
      w.frames.update_world_screen();
      checkpoint(ScreenTransitionCheckpoint::UpdateScreen);
      if(body && entering) {w.effects.advance();checkpoint(ScreenTransitionCheckpoint::AdvanceEffects);}
      checkpoint(ScreenTransitionCheckpoint::WaitFrame);
    }
  }
  void actors_frame(bool is_body) {
    body=is_body;
    runtime=parent?owner.owners_.runtime.begin_nested_actor_frame(*this,*parent):owner.owners_.runtime.begin_actor_frame(*this);
  }
};
WorldScreenTransition::WorldScreenTransition(const WorldTeleportResources &resources,
    WorldScreenTransitionState &state,WorldScreenTransitionOwners owners)
    :resources_(resources),state_(state),owners_(owners) {
  const auto &w=owners_;
  require(w.actors.version()==resources.version() && w.runtime.scene().uses(w.actors) &&
              w.runtime.scene().uses(w.clock) && w.frames.uses(w.display) &&
              w.frames.peripherals()==w.peripherals && w.effects.uses_visual(w.visual) &&
              w.effects.uses_display(w.frames) && w.runtime.uses(w.effects),
          "Screen transition requires its actual region and stable scene owners");
  const auto *publisher=w.runtime.scene().publication();
  require(publisher && publisher->display_fade()==&w.fade &&
              publisher->uses_frame_display(w.frames) && publisher->uses_visual(w.visual) &&
              publisher->uses_palette_transport(w.colors),
          "Screen transition requires its actual display and palette publisher");
}
bool WorldScreenTransition::uses(const WorldRuntime &runtime,const ActorWorld &actors,
    const WorldDisplayFade &fade,const story::TickState &clock) const noexcept {
  return &owners_.runtime==&runtime && &owners_.actors==&actors &&
      &owners_.fade==&fade && &owners_.clock==&clock;
}
void WorldScreenTransition::observe(std::function<void(ScreenTransitionCheckpoint,bool,unsigned)> observer) {
  require(!failed_&&!active_,"Screen transition observation requires its idle healthy owner");
  observer_=std::move(observer);
}
void WorldScreenTransition::validate_begin(unsigned index,bool entering) const {
  validate_impl(index,entering,nullptr);
}
void WorldScreenTransition::validate_begin(unsigned index,bool entering,WorldRuntime::Operation &parent) const {
  validate_impl(index,entering,&parent);
}
void WorldScreenTransition::validate_impl(unsigned index,bool entering,WorldRuntime::Operation *parent) const {
  (void)entering;
  const auto &w=owners_;
  w.runtime.require_content_boundary(parent);
  require(!failed_ && !active_ && !w.actors.in_tick() && !w.effects.failed(),
          "Screen transition requires healthy idle borrowed owners");
  require(w.clock.effective_interrupt_mask()&0x80,"Screen transition requires actual native NMI publication");
  const auto *publisher=w.runtime.scene().publication();
  require(publisher && publisher->display_fade()==&w.fade &&
              publisher->uses_frame_display(w.frames) && publisher->uses_visual(w.visual) &&
              publisher->uses_palette_transport(w.colors),
          "Screen transition publication owners changed");
  const auto &c=resources_.transition(index);
  if(c.animation || c.secondary_animation) {
    if(!w.swirl_setup)
      throw std::invalid_argument("Animated screen transition requires its actual swirl setup owner");
    require(!w.swirl_setup->failed() && w.effects.uses(*w.swirl_setup),
            "Animated transition swirl setup/playback owners differ");
    if(c.animation>=7 || c.secondary_animation>=7)
      throw std::invalid_argument("Screen transition animation escapes its authored swirl catalog");
  }
  if(c.fade>=50 && !w.map_state)
    throw std::invalid_argument("White screen transition requires its actual map palette target owner");
  require(w.effects.uses_display(w.frames),"Screen transition effect display owner changed");
}
std::unique_ptr<WorldScreenTransition::Operation> WorldScreenTransition::begin(unsigned index,bool entering) {
  return begin_impl(index,entering,nullptr);
}
std::unique_ptr<WorldScreenTransition::Operation> WorldScreenTransition::begin(
    unsigned index,bool entering,WorldRuntime::Operation &parent) {
  return begin_impl(index,entering,&parent);
}
std::unique_ptr<WorldScreenTransition::Operation> WorldScreenTransition::begin_impl(
    unsigned index,bool entering,WorldRuntime::Operation *parent) {
  validate_impl(index,entering,parent);
  auto result=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::State>(
      *this,parent,resources_.transition(index),entering)));
  active_=result.get();return result;
}
WorldScreenTransition::Operation::Operation(std::unique_ptr<State> state):state_(std::move(state)) {}
WorldScreenTransition::Operation::~Operation() {
  if(state_->owner.active_==this) {state_->owner.active_=nullptr;state_->owner.failed_=true;}
}
WorldRuntime::Operation *WorldScreenTransition::Operation::runtime_operation() noexcept {return state_->runtime.get();}
bool WorldScreenTransition::Operation::complete() const noexcept {return state_->done;}
dialogue::Progress WorldScreenTransition::Operation::advance(unsigned budget) {
  auto &s=*state_;auto &o=s.owner;auto &w=o.owners_;
  require(!o.failed_,"Screen transition owner failed");
  if(s.done)return dialogue::Progress::Finished;
  try {while(budget--) {
    if(s.runtime) {
      const auto progress=s.runtime->advance(1);
      if(progress==dialogue::Progress::Suspended)return progress;
      if(progress!=dialogue::Progress::Finished)continue;
      s.runtime.reset();
    }
    w.runtime.require_content_boundary(s.parent);
    switch(s.phase) {
    case 0:
      // C42631 initializes all fractions/velocities even on the return half.
      // In the world owner camera_x/y are the live BG1 origin.
      {const auto motion=o.resources_.motion(s.config.direction,s.config.speed);
      const auto velocity=[](std::uint16_t n){return std::uint16_t((n>>8)|((n&0x8000)?0xff00:0));};
      o.state_={std::uint16_t(motion[0]<<8),velocity(motion[0]),
                std::uint16_t(motion[1]<<8),velocity(motion[1]),
                w.actors.scene().camera_x,w.actors.scene().camera_y,0,0};}
      s.checkpoint(ScreenTransitionCheckpoint::InitializeMotion);
      if(s.entering) {pause_actors(w.actors,true);s.checkpoint(ScreenTransitionCheckpoint::PauseActors);s.phase=1;}
      else {
        if(s.config.fade<50) {w.fade.begin_in(1,1);s.checkpoint(ScreenTransitionCheckpoint::BeginFadeIn);}
        else {
          for(unsigned i=0;i<256;++i) {
            const auto color=w.map_state->map_palette_scratch[i];
            w.scratch.bytes[i*2]=std::uint8_t(color);w.scratch.bytes[i*2+1]=std::uint8_t(color>>8);
          }
          battle::prepare_palette_transition(w.scratch,w.colors,s.config.secondary_duration,0xffff);
          s.checkpoint(ScreenTransitionCheckpoint::PreparePalette);
        }
        if(s.config.secondary_animation) {
          w.swirl_setup->configure_swirl(s.config.secondary_animation,s.config.secondary_flags);
          s.checkpoint(ScreenTransitionCheckpoint::ConfigureSwirl);
        }
        s.phase=8;
      }
      break;
    case 1:
      if(s.warmup<2) {++s.warmup;s.actors_frame(false);break;}
      if(s.config.animation) {
        w.swirl_setup->configure_swirl(s.config.animation,std::uint16_t(s.config.flags+2));
        s.checkpoint(ScreenTransitionCheckpoint::ConfigureSwirl);
      }
      battle::prepare_palette_brightness(w.scratch,w.colors,s.config.fade,w.peripherals);
      s.checkpoint(ScreenTransitionCheckpoint::PrepareBrightness);
      battle::prepare_palette_transition(w.scratch,w.colors,
          std::uint16_t(s.config.effective_duration()),0xffff);
      s.checkpoint(ScreenTransitionCheckpoint::PreparePalette);
      s.phase=2;break;
    case 2:
      if(s.index>=s.config.effective_duration()) {s.phase=5;break;}
      if(w.colors.upload_mode) {
        s.checkpoint(ScreenTransitionCheckpoint::PaletteWait);
        s.runtime=s.parent?w.runtime.begin_nested(story::TickKind::Frame,*s.parent):w.runtime.begin(story::TickKind::Frame);s.phase=3;
      } else s.phase=3;
      break;
    case 3:
      battle::advance_palette_transition(w.scratch,w.colors);
      s.checkpoint(ScreenTransitionCheckpoint::AdvancePalette);
      s.actors_frame(true);s.phase=4;break;
    case 4:++s.index;s.phase=2;break;
    case 5:
      if(s.config.fade>=50) {
        for(unsigned i=0;i<256;++i)w.colors.staged_color(i)=0xffff;
        s.checkpoint(ScreenTransitionCheckpoint::FillWhite);
        w.colors.upload_mode=24;
        s.checkpoint(ScreenTransitionCheckpoint::WhitePalette);
        s.checkpoint(ScreenTransitionCheckpoint::WhiteWait);
        s.runtime=s.parent?w.runtime.begin_nested(story::TickKind::Frame,*s.parent):w.runtime.begin(story::TickKind::Frame);
        s.phase=7;break;
      }
      // Complete C08726 at the real nested boundary; a wrapped pending byte
      // needs another actual interrupt, never a fabricated acknowledgement.
      w.fade.force_blank(o.resources_.version()==GameVersion::US);
      s.checkpoint(ScreenTransitionCheckpoint::ForceBlank);
      w.frames.hdma_enable=0;
      if(w.visual.window_rows_enabled) {w.visual.window_rows_enabled=false;++w.visual.window_revision;}
      w.clock.new_frame_started=0;s.blank_receipt=w.clock.publications;
      s.runtime=s.parent?w.runtime.begin_nested_publication(*s.parent):w.runtime.begin_publication();s.phase=6;break;
    case 6:
      if(w.clock.publications==s.blank_receipt || !w.clock.new_frame_started) {
        s.runtime=s.parent?w.runtime.begin_nested_publication(*s.parent):w.runtime.begin_publication();break;
      }
      w.frames.displayed_hdma_enable=0;
      pause_actors(w.actors,false);s.checkpoint(ScreenTransitionCheckpoint::ResumeActors);s.phase=10;break;
    case 7:
      w.map_state->wipe_palettes=true;
      pause_actors(w.actors,false);s.checkpoint(ScreenTransitionCheckpoint::ResumeActors);s.phase=10;break;
    case 8:
      if(s.index>=s.config.secondary_duration) {s.phase=10;break;}
      if(s.config.fade>=50) {
        if(w.colors.upload_mode) {
          s.checkpoint(ScreenTransitionCheckpoint::PaletteWait);
          s.runtime=s.parent?w.runtime.begin_nested(story::TickKind::Frame,*s.parent):w.runtime.begin(story::TickKind::Frame);
        }
        s.phase=11;break;
      }
      s.actors_frame(true);s.phase=9;break;
    case 9:
      if(s.index==1) {pause_actors(w.actors,true);s.checkpoint(ScreenTransitionCheckpoint::PauseActors);}
      ++s.index;s.phase=8;break;
    case 11:
      battle::advance_palette_transition(w.scratch,w.colors);
      s.checkpoint(ScreenTransitionCheckpoint::AdvancePalette);
      s.actors_frame(true);s.phase=9;break;
    case 10:
      if(!s.entering && s.config.fade>=50) {battle::finish_palette_transition(w.scratch,w.colors);s.checkpoint(ScreenTransitionCheckpoint::FinishPalette);}
      if(w.giygas_phase<4) {w.effects.clear_battle_window();s.checkpoint(ScreenTransitionCheckpoint::ClearWindow);}
      pause_actors(w.actors,false);s.checkpoint(ScreenTransitionCheckpoint::ResumeActors);
      w.navigation.ladder_stairs={0,0};
      s.done=true;o.active_=nullptr;return dialogue::Progress::Finished;
    default:throw std::logic_error("Invalid screen-transition phase");
    }
  }return dialogue::Progress::BudgetExhausted;}
  catch(...) {o.failed_=true;throw;}
}
} // namespace eb::native
