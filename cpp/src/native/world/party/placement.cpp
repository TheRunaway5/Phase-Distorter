#include "eb/native/world/party/placement.hpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include <stdexcept>

namespace eb::native::world {
namespace {
void require(bool value,const char *message) {
  if(!value)throw std::logic_error(message);
}
}
PartyPlacement::PartyPlacement(WorldPartyFollowing &following,ActorWorld &actors,
                               WorldRuntime &runtime,WorldRuntime::Operation *parent)
    :actors_(actors),runtime_(runtime),parent_(parent) {
  runtime_.require_content_boundary(parent_);
  require(following.uses(actors_)&&runtime_.uses(actors_),
          "Party placement requires its actual following, actor and Runtime owners");
  const auto *graphics=runtime_.actor_graphics();
  require(!graphics || (graphics->uses(actors_)&&!graphics->busy()&&!graphics->failed()),
          "Party placement requires its healthy idle raw graphics owner");
  for(unsigned role=24;role<30;++role) {
    const auto actor=actors_.actor_for_role(role);
    require(!actor || !actors_.raw_graphics_owns(*actor) || (graphics&&graphics->owns(*actor)),
            "Party placement cannot replace a missing raw graphics continuation");
  }
  placement_=following.begin_position_after_pause();
}
PartyPlacement::~PartyPlacement()=default;
dialogue::Progress PartyPlacement::advance(unsigned budget) {
  require(!failed_&&!executing_,"Party placement is failed or reentrant");
  if(done_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    while(budget--) {
      if(publication_) {
        const auto progress=publication_->advance(1);
        if(progress==dialogue::Progress::Suspended) {
          executing_=false;return progress;
        }
        if(progress!=dialogue::Progress::Finished)continue;
        publication_.reset();
        require(upload_&&upload_->needs_publication(),
                "Party placement publication lost its actual upload");
        upload_->respond();
      }
      if(upload_) {
        if(!upload_->advance()) {
          require(upload_->needs_publication(),"Party placement upload lost its DMA continuation");
          publication_=parent_?runtime_.begin_nested_publication(*parent_):runtime_.begin_publication();
          continue;
        }
        require(upload_->complete(),"Party placement upload lacks its actual result");
        upload_.reset();placement_->respond_upload();
      }
      if(placement_->advance()) {
        placement_.reset();done_=true;executing_=false;return dialogue::Progress::Finished;
      }
      const auto selected=placement_->selected_actor();
      require(selected.has_value(),"Party placement lost its real selected actor");
      const auto &actor=actors_.actor(*selected);
      require(actor.appearance.displayed().has_value(),"Party placement lost its real selected pose");
      auto *graphics=runtime_.actor_graphics();
      require(graphics&&graphics->owns(*selected),"Party placement lost its actual raw allocation");
      upload_=graphics->begin_selected_upload(*selected,*actor.appearance.displayed(),actor.behavior.surface_flags);
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  } catch(...) {executing_=false;failed_=true;throw;}
}
}
