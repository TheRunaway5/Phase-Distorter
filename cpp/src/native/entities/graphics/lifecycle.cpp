#include "eb/native/entities/graphics/lifecycle.hpp"
#include "eb/native/entities/graphics/object_maps.hpp"
#include <stdexcept>
#include <utility>
namespace eb::native::entities::graphics {
namespace {void require(bool value,const char *message){if(!value)throw std::logic_error(message);}}
class Lifecycle::Creation final : public RawActorCreation::Operation {
public:
  Creation(Lifecycle &owner,WorldActorSpec spec,AuthoredActorRoles roles,
      story::SourceWorkService *work,RawActorCreation::SourceCall call)
      :owner_(owner),spec_(std::move(spec)),roles_(roles),work_(work),call_(call) {
    const auto &geometry=owner_.sprites_.definition(spec_.sprite);
    const std::uint16_t tag=roles.end==roles.first+1?std::uint16_t(roles.first):0xffff;
    const auto allocate=[&]{allocation_=owner_.transport_.begin_allocation(geometry.width/8,geometry.height/8,tag);};
    if(work_) {
      // CREATE's49 locals, then C01C52's30US/32JP locals. This is the
      // actual entry D for its nested C01B96; no wrapper cost is invented.
      const unsigned locals=49+(owner_.actors_.version()==GameVersion::JP?32:30);
      owner_.transport_.with_source_work(*work_,owner_.actors_,
          {std::uint8_t(call_.direct_page_low-locals),call_.bank_zero_code,true},allocate);
    }else allocate();
  }
  ~Creation() override {
    if(owner_.active_==this){owner_.active_=nullptr;owner_.state_.continuation_abandoned=true;}
  }
  bool advance() override {
    require(!owner_.failed()&&!executing_,"Raw actor creation is failed or reentrant");
    if(done_)return true;
    executing_=true;
    try {
      if(!allocation_->advance()){executing_=false;return false;}
      const auto cell=allocation_->result();allocation_.reset();
      require(cell<88,"CREATE_ENTITY exhausted raw cells; the original caller would stall");
      // FIND_FREE/C01D38 precede INIT_ENTITY; assigning the resulting map to
      // its actual role happens only after INIT_ENTITY selects that role.
      const auto map=owner_.maps_?std::optional{owner_.maps_->allocate(spec_.sprite,cell)}:std::nullopt;
      const auto id=owner_.actors_.create_authored(spec_,roles_);
      require(bool(id),"Raw actor creation lost its preflight authored role");
      actor_=*id;const auto role=*owner_.actors_.actor(actor_).authored_role();
      if(map)owner_.maps_->attach(role,*map);
      if(roles_.end!=roles_.first+1) {
        const auto remap=[&]{owner_.transport_.remap(0xffff,std::uint16_t(role|0x80));};
        if(work_)owner_.transport_.with_source_work(*work_,owner_.actors_,
            {std::uint8_t(call_.direct_page_low-49),call_.bank_zero_code,true},remap);
        else remap();
      }
      auto &record=owner_.state_.roles[role];
      record.geometry_sprite=std::uint16_t(spec_.sprite);record.allocation_cell=cell;
      record.destination=owner_.transport_.destination(cell,owner_.sprites_.definition(spec_.sprite).height/8);
      const auto upper=owner_.sprites_.definition(spec_.sprite).upper_parts;
      const auto parts=owner_.sprites_.raw_shape(spec_.sprite).size()/10;
      record.body_divide=std::uint16_t(upper<<8|(parts-upper));
      record.allocated=true;
      owner_.created_actors_[role]=actor_;
      done_=true;owner_.active_=nullptr;executing_=false;return true;
    }catch(...){executing_=false;owner_.state_.continuation_abandoned=true;throw;}
  }
  bool needs_publication() const noexcept override {return allocation_&&allocation_->needs_publication();}
  void respond_publication() override {
    require(needs_publication(),"Raw actor creation has no actual display wait");allocation_->respond();
  }
  ActorId actor() const override {require(done_,"Raw actor identity precedes INIT_ENTITY completion");return actor_;}
private:
  Lifecycle &owner_;
  WorldActorSpec spec_;
  AuthoredActorRoles roles_;
  story::SourceWorkService *work_{};
  RawActorCreation::SourceCall call_{};
  std::unique_ptr<Transport::Operation> allocation_;
  ActorId actor_{};
  bool done_{},executing_{};
};
Lifecycle::Lifecycle(LifecycleState &state,ActorWorld &actors,const SpriteResources &sprites,Transport &transport)
    :state_(state),actors_(actors),sprites_(sprites),transport_(transport) {
  require(actors.uses(sprites)&&transport.uses(sprites),"Raw actor lifecycle must use its actual imported sprite owner");idle();
}
Lifecycle::~Lifecycle(){actors_.clear_raw_graphics(*this);if(active_)state_.continuation_abandoned=true;}
bool Lifecycle::uses(const ActorWorld &actors) const noexcept {return &actors_==&actors;}
void Lifecycle::bind_object_maps(ObjectMaps &maps) {
  idle();require(!maps_&&maps.uses(sprites_),"Object maps require the actual unbound creation owner");maps_=&maps;
}
bool Lifecycle::owns(ActorId id) const noexcept {
  try {
    const auto &actor=actors_.actor(id);
    const auto role=actor.authored_role();
    return role&&created_actors_.at(*role)==id&&state_.roles.at(*role).allocated&&actor.has_appearance()&&
        state_.roles.at(*role).geometry_sprite==actor.appearance.geometry_sprite();
  } catch(const std::out_of_range &) {return false;}
}
void Lifecycle::idle() const {require(!busy()&&!failed(),"Raw actor lifecycle is failed or busy");}
std::unique_ptr<RawActorCreation::Operation> Lifecycle::begin_create(const WorldActorSpec &spec,AuthoredActorRoles roles) {
  return create(spec,roles,nullptr,{});
}
std::unique_ptr<RawActorCreation::Operation> Lifecycle::begin_create_with_source_work(
    const WorldActorSpec &spec,AuthoredActorRoles roles,story::SourceWorkService &work,
    RawActorCreation::SourceCall call) {
  return create(spec,roles,&work,call);
}
std::unique_ptr<RawActorCreation::Operation> Lifecycle::create(const WorldActorSpec &spec,
    AuthoredActorRoles roles,story::SourceWorkService *work,RawActorCreation::SourceCall call) {
  idle();require(roles.first<roles.end&&roles.end<=30,"Raw CREATE_ENTITY requires actual authored roles");
  require(roles.end==roles.first+1||(roles.first==0&&roles.end==22),
      "Raw CREATE_ENTITY requires a specified role or the actual automatic range");
  bool available=false;
  for(unsigned role=roles.first;role<roles.end;++role)if(!actors_.actor_for_role(role))available=true;
  require(available,"Raw CREATE_ENTITY's authored role is occupied");
  (void)sprites_.definition(spec.sprite);
  auto operation=std::make_unique<Creation>(*this,spec,roles,work,call);active_=operation.get();return operation;
}
void Lifecycle::reset_allocations() {
  idle();transport_.remap(0x8000,0);for(auto &role:state_.roles)role.allocated=false;
  created_actors_.fill(std::nullopt);
  if(maps_)maps_->reset();
}
void Lifecycle::release(unsigned role) {
  idle();auto &record=state_.roles.at(role);transport_.remap(std::uint16_t(role),0);record.allocated=false;
  created_actors_.at(role).reset();
  if(maps_)maps_->release(role);
}
std::unique_ptr<Transport::Operation> Lifecycle::begin_upload(ActorId id,unsigned direction,
    std::uint16_t animation,SpriteFrameFormat format,std::uint16_t surface) {
  idle();const auto &actor=actors_.actor(id);
  require(owns(id),"Raw selection requires its actual created actor/allocation identity");
  auto &record=state_.roles.at(*actor.authored_role());
  require(record.allocated&&record.geometry_sprite==actor.appearance.geometry_sprite(),
      "Raw selection lacks its actual retained creation geometry/allocation");
  return transport_.begin_upload(actor.appearance.sprite(),record.geometry_sprite,direction,animation,
      format,record.destination,surface,record.displayed_reference);
}
std::unique_ptr<Transport::Operation> Lifecycle::begin_selected_upload(ActorId id,
    const SpriteFrameSelection &selection,std::uint16_t surface) {
  idle();const auto &actor=actors_.actor(id);
  require(owns(id)&&actor.appearance.displayed()&&
      *actor.appearance.displayed()==selection,"Raw selection requires its actual latched authored pose");
  auto &record=state_.roles.at(*actor.authored_role());
  require(record.allocated&&record.geometry_sprite==actor.appearance.geometry_sprite(),
      "Raw selection lacks its actual retained creation geometry/allocation");
  return transport_.begin_upload_pose(selection.sprite,record.geometry_sprite,selection.pose,selection.format,
      record.destination,surface,record.displayed_reference);
}
}
