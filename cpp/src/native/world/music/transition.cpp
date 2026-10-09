#include "eb/native/world/music/transition.hpp"
#include "eb/native/npcs/interaction.hpp"
#include <stdexcept>
namespace eb::native::world::music {
namespace {void require(bool ok,const char *message){if(!ok)throw std::logic_error(message);}}
std::unique_ptr<SectorTransition> SectorTransition::begin(WorldRuntime &runtime,
    WorldMusic &music,WorldMusicState &state,const npcs::InteractionState &leader,
    const story::TickState &clock,WorldRuntime::Operation &parent) {
  runtime.require_nested(parent);
  require(!state.continuation_abandoned&&!state.active_sector_transition,
      "Sector music continuation was abandoned or is already active");
  require(music.uses(state,leader,clock)&&runtime.scene().uses(clock),
      "Sector music transition requires its actual music, leader and clock owners");
  require(parent.maintenance_request()&&
      parent.maintenance_request()->kind==WorldMaintenanceService::SectorMusic,
      "Sector music transition requires the actual suspended maintenance request");
  return std::unique_ptr<SectorTransition>(new SectorTransition(runtime,music,state,leader,parent));
}
SectorTransition::SectorTransition(WorldRuntime &runtime,WorldMusic &music,
    WorldMusicState &state,const npcs::InteractionState &leader,WorldRuntime::Operation &parent)
    :runtime_(runtime),music_(music),state_(state),leader_(leader),parent_(parent) {state_.active_sector_transition=this;}
SectorTransition::~SectorTransition(){
  if(!done_)state_.continuation_abandoned=true;
  if(state_.active_sector_transition==this)state_.active_sector_transition=nullptr;
}
dialogue::Progress SectorTransition::advance(unsigned budget) {
  require(!executing_,"Sector music transition is reentrant");
  if(done_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    while(budget--) {
      if(child_) {
        const auto progress=child_->advance(1);
        if(progress==dialogue::Progress::Suspended){executing_=false;return progress;}
        if(progress!=dialogue::Progress::Finished)continue;
        child_.reset();
      }
      runtime_.require_nested(parent_);
      require(state_.active_sector_transition==this,"Sector music lost its continuation reservation");
      require(parent_.maintenance_request()&&
          parent_.maintenance_request()->kind==WorldMaintenanceService::SectorMusic,
          "Sector music transition lost its actual suspended maintenance request");
      switch(phase_) {
      case 0:
        state_.do_map_fade=1;music_.select(leader_.leader_x,leader_.leader_y);phase_=1;break;
      case 1:
        if(state_.next_track!=state_.current_map_track)
          child_=runtime_.begin_nested(story::TickKind::Frame,parent_);
        phase_=2;break;
      case 2:
        if(state_.next_track!=state_.current_map_track)music_.apply_sector();
        state_.do_map_fade=0;state_.active_sector_transition=nullptr;done_=true;executing_=false;return dialogue::Progress::Finished;
      default:throw std::logic_error("Invalid sector music source continuation");
      }
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  }catch(...){executing_=false;throw;}
}
}
