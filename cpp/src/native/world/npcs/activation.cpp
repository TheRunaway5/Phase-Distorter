#include "eb/native/world_activation.hpp"
#include <stdexcept>
namespace eb::native {
std::unique_ptr<WorldActivation::RawOperation> WorldActivation::begin_next(ActorWorld &world,
    const NpcActivationState &state,NpcStripAdmission admission,RawActorCreation &graphics) {
  if(active_||failed_||!request_||request_->service!=CameraRefreshService::Npcs||
      state.camera!=camera_||!graphics.uses(world)||!world.uses(graphics))
    throw std::logic_error("Raw NPC activation requires its actual pending strip and graphics owner");
  if(admission!=NpcStripAdmission::Admitted&&admission!=NpcStripAdmission::Rejected)
    throw std::invalid_argument("Raw NPC activation requires its actual strip admission");
  auto operation=std::unique_ptr<RawOperation>(new RawOperation(*this,world,graphics,state,admission));
  active_=operation.get();return operation;
}
WorldActivation::RawOperation::RawOperation(WorldActivation &owner,ActorWorld &world,
    RawActorCreation &graphics,NpcActivationState state,NpcStripAdmission admission)
    :owner_(owner),world_(world),graphics_(graphics),state_(state) {
  if(state.tileset>=32 || (state.mode!=NpcSpawnMode::Disabled&&state.mode!=NpcSpawnMode::Initial&&
      state.mode!=NpcSpawnMode::Streaming))throw std::invalid_argument("Invalid raw NPC activation state");
  if(admission==NpcStripAdmission::Rejected||state.mode==NpcSpawnMode::Disabled)return;
  const auto &intent=*owner.request_;
  if(intent.axis!=CameraStripAxis::Row&&intent.axis!=CameraStripAxis::Column)
    throw std::invalid_argument("Invalid raw NPC activation strip");
  const bool row=intent.axis==CameraStripAxis::Row;
  const unsigned fixed=std::uint16_t(row?intent.y:intent.x)>>5;
  const auto start=std::uint16_t(row?int(intent.x)-2:int(intent.y));
  unsigned previous=0x8000;
  for(unsigned step=0;step<(row?38u:32u);++step) {
    const auto coordinate=std::uint16_t(start+step);
    if(coordinate>=0x8000)continue;
    const unsigned cell=coordinate>>5;
    if(cell==previous)continue;
    const unsigned x=row?cell:fixed,y=row?fixed:cell;
    if(x<32&&y<40) {
      const auto placements=owner.npcs_->cell(x,y);
      placements_.insert(placements_.end(),placements.begin(),placements.end());
    }
    previous=cell;
  }
}
WorldActivation::RawOperation::~RawOperation() {
  if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}
}
bool WorldActivation::RawOperation::needs_publication() const noexcept {
  return creation_&&creation_->needs_publication();
}
void WorldActivation::RawOperation::respond_publication() {
  if(!needs_publication()||owner_.failed_)throw std::logic_error("NPC creation has no actual publication wait");
  creation_->respond_publication();
}
bool WorldActivation::RawOperation::advance(unsigned budget) {
  if(!budget||executing_||owner_.failed_)throw std::logic_error("Raw NPC activation is failed or reentrant");
  if(done_)return true;
  executing_=true;
  try {
    while(budget--) {
      if(creation_) {
        if(!creation_->advance()){executing_=false;return false;}
        const auto actor=creation_->actor();const auto &live=world_.actor(actor);
        created_.push_back({actor,*candidate_,live.appearance.sprite(),live.behavior.direction});
        creation_.reset();candidate_.reset();
      }
      if(next_==placements_.size()) {
        owner_.complete_request();owner_.active_=nullptr;done_=true;executing_=false;return true;
      }
      const auto &placement=placements_[next_++];
      const auto spec=owner_.prepare_candidate(world_,placement,state_);
      if(!spec)continue;
      candidate_=NpcCandidate{placement,spec->script};
      creation_=graphics_.begin_create(*spec,{0,22});
    }
    executing_=false;return false;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
