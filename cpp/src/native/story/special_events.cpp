#include "eb/native/story/special_events.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::story {
namespace {
void require(bool condition,const char *message) {
  if(!condition)throw std::logic_error(message);
}
}
SpecialEvents::SpecialEvents(std::span<const std::uint8_t> image,GameVersion version,
                             SpecialEventOwners owners):owners_(owners) {
  require(version==GameVersion::US||version==GameVersion::JP,"Unsupported special event region");
  const unsigned offset=version==GameVersion::US?0x45c8a:0x439dc;
  require(offset<=image.size()&&image.size()-offset>=probabilities_.size(),
          "Truncated imported homesickness probabilities");
  std::copy_n(image.begin()+offset,probabilities_.size(),probabilities_.begin());
  auto &o=owners_;
  require(o.party.version()==version && o.event_flags.size()==128 &&
          o.event_flags.data()==o.interactions.windows().state().event_flags.data() &&
          o.actors.scene().event_flags.data()==o.event_flags.data() &&
          o.formation.uses(o.party) && o.formation.uses(o.actors) && o.formation.uses(o.interactions) &&
          o.following.uses(o.actors,o.party,o.interactions.state(),o.interactions.windows().prompt_state()) && &o.interactions.actors()==&o.actors &&
          o.scene.uses(o.interactions.windows(),o.party) && o.scene.uses(o.formation) &&
          o.scene.uses(o.random) && o.scene.uses(o.actors) && o.scene.uses(o.clock) &&
          o.meter_flipout.uses(o.party,o.clock.flipout,o.interactions.windows().prompt_state().half_meter_speed,
                              o.interactions.windows().prompt_state().rolling_disabled),
          "Special events require the actual story, party and scene owners");
}
void SpecialEvents::bind_town_map(world::townmap::Scene &scene) {
  require(!active_&&!failed_&&(!town_map_||town_map_==&scene)&&scene.uses(owners_.scene),
          "Special event town map requires its actual idle shared scene owner");
  town_map_=&scene;
}
std::unique_ptr<SpecialEvents::Operation> SpecialEvents::begin(std::uint8_t event,Scene::Operation &parent,
                                                            WorldRuntime::Operation *runtime_parent) {
  require(!failed_&&!active_,"Special event owner is failed or busy");
  owners_.scene.require_nested(parent);
  require(!(event>=1&&event<=16&&event!=5&&event!=6&&event!=7&&event!=8&&event!=13&&event!=14&&event!=15),
          "Special event requires its complete authored cinematic owner");
  if(event==7)require(town_map_&&runtime_parent,"Special event7 requires its actual town map and runtime parent");
  if(event==8) {
    require(owners_.action.attacker.has_value(),"Attacker-side special event lacks its live selector");
    (void)owners_.roster.at(*owners_.action.attacker);
  }
  if(event==17) {
    require(owners_.party.party_count<=owners_.party.party_order.size(),
            "Homesickness party membership exceeds its owner");
    owners_.formation.validate_begin();
  }
  auto operation=std::unique_ptr<Operation>(new Operation(*this,event,parent,runtime_parent));
  active_=operation.get();return operation;
}
SpecialEvents::Operation::Operation(SpecialEvents &owner,std::uint8_t event,Scene::Operation &parent,
                                  WorldRuntime::Operation *runtime_parent)
    :owner_(owner),parent_(parent),event_(event),runtime_parent_(runtime_parent) {}
SpecialEvents::Operation::~Operation() {
  if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}
}
std::uint16_t SpecialEvents::Operation::result() const {
  require(done_,"Special event result requested before actual completion");return result_;
}
void SpecialEvents::Operation::respond_bicycle_dismount() {
  require(bicycle_&&!done_&&!executing_,"No pending special-event bicycle lifecycle");
  bicycle_=false;result_=1;phase_=99;
}
dialogue::Progress SpecialEvents::Operation::advance(unsigned budget) {
  require(!owner_.failed_&&!executing_,"Special event is failed or reentrant");
  if(done_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    auto &o=owner_.owners_;
    while(budget--) {
      if(bicycle_){executing_=false;return dialogue::Progress::Suspended;}
      if(town_map_) {
        const auto progress=town_map_->advance(1);
        if(progress==dialogue::Progress::Suspended){executing_=false;return progress;}
        if(progress!=dialogue::Progress::Finished)continue;
        result_=town_map_->result();town_map_.reset();
      }
      if(party_) {
        const auto progress=party_->advance(1);
        if(progress==dialogue::Progress::Suspended){executing_=false;return progress;}
        if(progress!=dialogue::Progress::Finished)continue;
        party_.reset();
      }
      if(scene_) {
        const auto progress=scene_->advance(1);
        if(progress==dialogue::Progress::Suspended){executing_=false;return progress;}
        if(progress!=dialogue::Progress::Finished)continue;
        scene_.reset();
      }
      switch(phase_) {
      case 0:
        // C1BEFC's 5/6 branches only call C43344. The flag query returns
        // exactly 0/1; suppression is a word and must replace both bytes.
        if(event_==7){town_map_=owner_.town_map_->begin(runtime_parent_);phase_=99;break;}
        if(event_==5)o.maintenance.overworld_status_suppression=1;
        else if(event_==6)o.maintenance.overworld_status_suppression=o.interactions.windows().state().flag(73)?1:0;
        else if(event_==8)result_=o.roster.at(*o.action.attacker).side ? 1 : 0;
        else if(event_==13 || event_==14)o.meter_flipout.apply(event_==13?1:0);
        else if(event_==15)std::fill(o.event_flags.begin(),o.event_flags.end(),0);
        else if(event_==18 && o.interactions.state().walking_style==3) {
          bicycle_=true;executing_=false;return dialogue::Progress::Suspended;
        } else if(event_==17 && o.party.character(1).afflictions[0]!=1) {
          const unsigned level=o.party.character(1).level;
          unsigned bucket=0;
          while(bucket<6&&level>(bucket+1)*15)++bucket;
          if(bucket<6 && owner_.probabilities_[bucket] &&
             (unsigned(next_random(o.random)) % (unsigned(owner_.probabilities_[bucket])+1))==0) {
            const auto last=o.party.party_order.begin()+o.party.party_count;
            if(std::find(o.party.party_order.begin(),last,1)!=last) {
              o.party.character(1).afflictions[5]=1;
              party_=o.formation.begin();phase_=1;break;
            }
          }
        }
        phase_=99;break;
      case 1:
        o.following.position_after_pause();
        scene_=o.scene.begin_nested(TickKind::WorldFrame,parent_);phase_=2;break;
      case 2:
        o.interactions.set_actors_paused(true);
        if(o.session.fading_actor) {
          if(const auto *role=std::get_if<AuthoredRoleRef>(&*o.session.fading_actor))
            o.actors.set_authored_pause(role->value(),true,true);
          else {
            auto &actor=o.actors.actor(std::get<ActorId>(*o.session.fading_actor));
            actor.scripts_and_physics_enabled=actor.tick_callback_enabled=true;
          }
        }
        result_=1;phase_=99;break;
      case 99:
        done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;
      default:throw std::logic_error("Invalid special event phase");
      }
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
