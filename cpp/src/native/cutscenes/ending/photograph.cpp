#include "eb/native/cutscenes/ending/photograph.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
#include <stdexcept>
namespace eb::native::cutscenes::ending {
namespace {void require(bool ok,const char *message){if(!ok)throw std::logic_error(message);}}
PhotographDisplay::PhotographDisplay(const Resources &resources,PhotographState &state,Display &display,
    WorldStartupOwners world,RawActorCreation &graphics)
    :resources_(resources),state_(state),display_(display),world_(world),graphics_(graphics) {
  const auto &o=display_.owners();
  require(resources.version()==display.version()&&graphics.uses(world.actors)&&
      &world.actors==&o.actors&&&world.runtime==&o.runtime&&&world.windows==&o.windows&&
      &world.party==&o.party&&&world.clock==&o.clock&&&world.interactions==&o.interactions&&
      o.map_load.uses(world.runtime,world.actors,world.enemies,world.interactions,world.spawn,
          world.windows,world.scene_colors)&&o.map_load.uses(world.random)&&
      o.map_load.uses_display_transport(o.scratch,o.video,o.fade),
      "Photographs require the actual regional map, saved records and raw actor owners");
}
void PhotographDisplay::bind_object_display(entities::graphics::ObjectDisplay &objects) {
  require(!active_&&!failed_&&!objects_&&objects.uses(world_.actors,graphics_)&&
      display_.owners().frames.uses_object_source(objects),
      "Photographs require their actual bound object publication and raw actor owners");
  objects_=&objects;
}
bool PhotographDisplay::uses(const Resources &resources,const Display &display,
    const ActorWorld &actors,const WorldRuntime &runtime) const noexcept {
  return &resources_==&resources&&&display_==&display&&&world_.actors==&actors&&&world_.runtime==&runtime;
}
bool PhotographDisplay::supports_current_photographs() const {
  if(failed_||active_)return false;
  const auto &o=display_.owners();
  for(const auto &photo:resources_.photographs()) {
    if(!photo_flag(world_.windows.state().event_flags,photo.event_flag))continue;
    if(resources_.version()==GameVersion::US&&!objects_)return false;
    if(objects_&&(!objects_->uses(world_.actors,graphics_)||!o.frames.uses_object_source(*objects_)))return false;
    const auto bytes=resources_.photo_palettes();
    const unsigned offset=photo.palette_offset;
    if(offset>bytes.size()||192>bytes.size()-offset)return false;
    const auto selector=std::uint16_t(bytes[offset+64]|(unsigned(bytes[offset+65])<<8));
    if(selector>=16) {
      try {(void)o.video.transient_memory().read_words16(std::uint16_t(0x200u+unsigned(selector)*32));}
      catch(const std::out_of_range &) {return false;}
    }
  }
  return true;
}
std::unique_ptr<PhotographDisplay::Operation> PhotographDisplay::begin(unsigned index,WorldRuntime::Operation *parent) {
  require(index<resources_.photographs().size(),"Photograph index exceeds its actual authored table");
  require(!active_&&!failed_&&!display_.busy()&&!display_.failed(),"Photograph owner is failed or busy");
  world_.runtime.require_content_boundary(parent);
  const bool enabled=photo_flag(world_.windows.state().event_flags,resources_.photographs()[index].event_flag);
  if(enabled) {
    require(resources_.version()==GameVersion::JP||objects_,
        "US photograph entry requires its real working-priority storage clear");
    require(!objects_||(objects_->uses(world_.actors,graphics_)&&display_.owners().frames.uses_object_source(*objects_)),
        "Photograph object publication binding changed before its actual caller");
    require(!world_.actors.in_tick()&&!world_.enemies.busy()&&!display_.owners().map_load.busy()&&
        !world_.spawn.photograph&&!world_.windows.prompt_state().battle_mode&&
        world_.clock.disabled_transitions&&(display_.owners().layout.mode&7)==1,
        "Photograph entry requires its actual idle credits display caller");
  }
  auto operation=std::unique_ptr<Operation>(new Operation(*this,index,parent));
  operation->enabled_=enabled;active_=operation.get();return operation;
}
PhotographDisplay::Operation::Operation(PhotographDisplay &owner,unsigned index,WorldRuntime::Operation *parent)
    :owner_(owner),parent_(parent),index_(index) {}
PhotographDisplay::Operation::~Operation(){if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}}
WorldRuntime::Operation *PhotographDisplay::Operation::runtime_operation() noexcept {
  return map_&&map_->runtime_operation()?map_->runtime_operation():runtime_.get();
}
std::uint16_t PhotographDisplay::Operation::result() const {
  require(done_,"Photograph result precedes actual map/actor completion");return enabled_?1:0;
}
void PhotographDisplay::Operation::create(unsigned sprite,unsigned script,PhotoPoint point,std::uint8_t encoded) {
  auto &w=owner_.world_;
  w.spawn.prepared.variables[0]=std::uint16_t(ordinal_++);
  w.spawn.prepared.priority=1;
  auto prepared=w.spawn.prepared;prepared.x=std::uint16_t(point.x*8);prepared.y=std::uint16_t(point.y*8);
  prepared.direction=0;
  const auto spec=w.actors.prepare_actor(sprite,script,prepared);
  creation_=owner_.graphics_.begin_create(spec,{0,22});encoded_=encoded;
}
dialogue::Progress PhotographDisplay::Operation::advance(unsigned budget) {
  require(!executing_&&!owner_.failed_,"Photograph owner is failed or reentrant");
  if(done_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    auto &w=owner_.world_;auto &o=owner_.display_.owners();
    const auto &photo=owner_.resources_.photographs()[index_];
    while(budget--) {
      if(!map_&&!runtime_)w.runtime.require_content_boundary(parent_);
      if(runtime_) {
        const auto p=runtime_->advance(1);
        if(p==dialogue::Progress::Suspended){executing_=false;return p;}
        if(p!=dialogue::Progress::Finished)continue;
        runtime_.reset();
        if(creation_publication_){creation_->respond_publication();creation_publication_=false;}
      }
      if(map_) {
        if(!map_->advance(1)) {
          if(map_->runtime_operation()){executing_=false;return dialogue::Progress::Suspended;}
          continue;
        }
        map_.reset();w.spawn.enemies=enemy_enable_;
        o.video.staged_scroll[1]={};w.spawn.photograph=false;phase_=2;
      }
      if(creation_) {
        if(!creation_->advance()) {
          if(creation_->needs_publication()) {
            runtime_=owner_.display_.begin_publication(parent_);creation_publication_=true;
          }
          continue;
        }
        const auto id=creation_->actor();
        if(encoded_&0x80)w.actors.actor(id).appearance_context.overlay_flags|=0x4000;
        created_[slot_]=id;creation_.reset();++slot_;
      }
      switch(phase_) {
      case 0:
        if(!enabled_){done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;}
        w.spawn.photograph=true;owner_.state_.current_photo=std::uint16_t(index_);
        enemy_enable_=w.spawn.enemies;w.spawn.enemies=0;
        if(owner_.resources_.version()==GameVersion::US)owner_.objects_->clear_photograph_prefix();
        o.palette.upload_mode=0;
        for(unsigned i=0;i<16;++i)o.palette.staged_color(16+i)=owner_.resources_.frame_palette()[i];
        map_=o.map_load.begin_photograph({std::uint16_t(photo.map.x*8),std::uint16_t(photo.map.y*8)},
            owner_.resources_.photo_palettes(),photo.palette_offset,parent_);phase_=1;break;
      case 1:throw std::logic_error("Photograph map child vanished before source return");
      case 2:
        if(slot_==4){phase_=3;break;}
        if(const auto &object=photo.objects[slot_];object.sprite)
          create(object.sprite,npc_catalog_layout(owner_.resources_.version()).photograph_script,object.position);
        else ++slot_;
        break;
      case 3:
        if(slot_==10){done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;}
        if(const auto encoded=w.session.photos[index_].party[slot_-4];(encoded&31)&&(encoded&31)<18)
          create(owner_.resources_.photograph_sprite(encoded),
              npc_catalog_layout(owner_.resources_.version()).photograph_script+1,photo.party[slot_-4],encoded);
        else ++slot_;
        break;
      default:throw std::logic_error("Invalid photograph source continuation phase");
      }
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
