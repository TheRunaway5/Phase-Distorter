#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/overlay_sprites.hpp"
#include <algorithm>
#include <stdexcept>
#include <unordered_set>
namespace eb::native::entities::graphics {
void SourceObjectMap::validate() const {
  if(!validate_||!display_||bytes_.empty())throw std::logic_error("Source map lacks its actual owned content extent");
  if(bytes_.size()>65536u-origin_)throw std::logic_error("Source map extent crosses its actual retained bank");
  validate_();
}
std::uint8_t SourceObjectMap::read(std::uint16_t address) const {
  validate();const unsigned offset=std::uint16_t(address-origin_);
  if(offset>=bytes_.size())throw std::logic_error("Source spritemap read leaves its owned extent");
  return bytes_[offset];
}
void SourceObjectMap::validate_path(unsigned maximum_entries) const {
  validate();std::unordered_set<std::uint16_t> visited;auto at=pointer_;unsigned entries{};
  for(;;) {
    if(!visited.insert(at).second)throw std::logic_error("Source map has an unowned cyclic record path");
    const auto y=read(at);
    if(y==0x80) {
      if(unsigned(at)+2>0xffff)throw std::logic_error("Source linked record crosses its actual bank");
      const auto low=read(std::uint16_t(at+1)),high=read(std::uint16_t(at+2));
      at=std::uint16_t(low|unsigned(high)<<8);continue;
    }
    if(unsigned(at)+4>0xffff)throw std::logic_error("Source ordinary record crosses its actual bank");
    // All five bytes belong to this real record, even if clipping would skip
    // some literal reads. This bounds capacity without predicting clipping.
    for(unsigned byte=1;byte<5;++byte)read(std::uint16_t(at+byte));
    if(++entries>maximum_entries)throw std::logic_error("Source map path reaches the unowned full-capacity high byte");
    if(read(std::uint16_t(at+4))&0x80)return;
    at=std::uint16_t(at+5);
  }
}
ObjectDisplay::ObjectDisplay(ObjectDisplayState &state,ActorWorld &actors,Lifecycle &lifecycle,ObjectMaps &maps)
    :state_(state),actors_(actors),lifecycle_(lifecycle),maps_(maps) {
  if(!lifecycle.uses(actors)||!lifecycle.uses(maps))throw std::logic_error("Object display requires the actual created-map owner");
}
void ObjectDisplay::source_clear_completed(std::uint8_t buffer) {
  auto generation=std::make_shared<SourceGeneration>();generation->buffer=buffer;
  source_generation_=std::move(generation);
}
SourceObjectMap ObjectDisplay::source_actor_map(ActorId id,bool mirrored) const {
  if(!lifecycle_.owns(id)||lifecycle_.failed())throw std::logic_error("Source map requires the actual healthy created actor");
  const auto &actor=actors_.actor(id);const auto role=actor.authored_role();
  if(!role)throw std::logic_error("Source map lacks its actual authored role");
  auto result=maps_.source_map(*role,mirrored);const auto validate=result.validate_;
  const std::weak_ptr<const void> life=lifetime_;
  result.validate_=[life,validate] {if(life.expired())throw std::logic_error("Source map lost its actual display owner");validate();};
  result.display_=this;result.identity_=id;
  result.anchor_={std::int16_t(actor.behavior.projected_x),std::int16_t(actor.behavior.projected_y),true};
  return result;
}
SourceObjectMap ObjectDisplay::source_overlay_map(ActorId id,unsigned index) const {
  if(!lifecycle_.owns(id)||lifecycle_.failed())throw std::logic_error("Source overlay requires its actual healthy created actor");
  const auto overlays=actors_.object_overlays(id);
  if(index>=overlays.size())throw std::logic_error("Source overlay lacks its actual retained draw selection");
  const auto &overlay=overlays[index];const auto &actor=actors_.actor(id);
  if(overlay.lifetime.expired())throw std::logic_error("Source overlay lost its actual imported content owner");
  SourceObjectMap result;result.display_=this;result.pointer_=result.origin_=std::uint16_t(overlay.identity);
  result.bank_=std::uint8_t(overlay.identity>>16);result.bytes_=overlay.bytes;result.identity_=id;
  result.anchor_={std::int16_t(actor.behavior.projected_x),std::int16_t(actor.behavior.projected_y),true};
  const std::weak_ptr<const void> life=lifetime_;const auto content=overlay.lifetime;
  const auto allocation=maps_.source_map(*actor.authored_role(),false);
  result.validate_=[life,content,allocation] {
    if(life.expired()||content.expired())throw std::logic_error("Source overlay lost its actual display/content lifetime");
    allocation.validate_();
  };
  return result;
}
std::uint16_t ObjectDisplay::word(unsigned at) const noexcept {return std::uint16_t(state_.working[at]|unsigned(state_.working[at+1])<<8);}
void ObjectDisplay::put(unsigned at,std::uint16_t value) noexcept {state_.working[at]=std::uint8_t(value);state_.working[at+1]=std::uint8_t(value>>8);}
void ObjectDisplay::clear_photograph_prefix() noexcept {source_clear_started();std::fill_n(state_.working.begin(),1024,0);}
std::shared_ptr<const ObjectFrame> ObjectDisplay::snapshot_objects(std::uint8_t buffer) const {
  if(buffer<1||buffer>2||actors_.in_tick()||lifecycle_.failed())
    throw std::logic_error("Object snapshot requires its complete healthy actual descriptor owner");
  return std::make_shared<const ObjectFrame>(state_.buffers[buffer-1]);
}
std::shared_ptr<const ObjectFrame> ObjectDisplay::capture_objects(std::uint8_t buffer) {
  if(buffer<1||buffer>2||actors_.in_tick()||lifecycle_.failed())throw std::logic_error("Object selection requires a complete healthy actual actor frame");
  if(source_generation_ && source_generation_->phase!=SourceGeneration::Phase::Cleared &&
      source_generation_->phase!=SourceGeneration::Phase::Emitted)
    throw std::logic_error("Eager object capture cannot overwrite an active source descriptor");
  // Even completely clipped eager emission consumes this generation.
  if(source_generation_)source_generation_->phase=SourceGeneration::Phase::Emitted;
  const auto commands=actors_.object_draws();
  // A logical software actor has no original map/tile allocation. Its
  // existing presentation remains explicit and cannot borrow a raw role.
  for(const auto &draw:commands)if(!lifecycle_.owns(draw.actor))return {};
  for(unsigned priority=0;priority<4;++priority)put(4+priority*258+256,0);
  struct Command {ObjectMap map;std::uint16_t x{},y{};std::uint64_t identity{};ObjectAnchor anchor;};
  std::array<std::vector<Command>,4> queued;
  const auto enqueue=[&](unsigned priority,ObjectMap map,std::uint16_t bank,std::uint16_t x,std::uint16_t y,ActorId id,ObjectAnchor anchor){
    const unsigned queue=4+priority*258,offset=word(queue+256);
    if(offset>=64)throw std::length_error("Object drawing exceeded its declared32-entry queue");
    put(0,std::uint16_t(priority));put(queue+offset,map.start);put(queue+64+offset,x);put(queue+128+offset,y);
    put(queue+192+offset,bank);put(queue+256,std::uint16_t(offset+2));queued[priority].push_back({map,x,y,id,anchor});
  };
  for(const auto &draw:commands){
    const auto &actor=actors_.actor(draw.actor);const auto role=*actor.authored_role();const auto &record=lifecycle_.role(role);
    if(draw.priority>3)throw std::out_of_range("Object draw has no source priority queue");
    const auto map=maps_.prepare(role,record.geometry_sprite,record.displayed_reference&1,actor.behavior.surface_flags);
    const auto x=std::uint16_t(actor.behavior.projected_x),y=std::uint16_t(actor.behavior.projected_y);
    const ObjectAnchor anchor{std::int16_t(x),std::int16_t(y),true};
    for(const auto &overlay:actors_.object_overlays(draw.actor)){
      const auto pointer=std::uint16_t(overlay.identity);enqueue(draw.priority,{overlay.bytes,pointer,pointer},
          std::uint16_t(overlay.identity>>16),x,std::uint16_t(y+overlay.vertical),draw.actor,anchor);
    }
    enqueue(draw.priority,map,0x7e,x,y,draw.actor,anchor);
  }
  auto &objects=state_.buffers[buffer-1];ObjectEmitter emitter(objects);emitter.clear();
  for(const auto &priority:queued)for(const auto &command:priority)emitter.append(command.map,command.x,command.y,command.identity,command.anchor);
  emitter.finish();
  const auto base=std::uint16_t(buffer==1?0x500:0x800);
  state_.builder={std::uint16_t(base+emitter.count()*4),std::uint16_t(base+512),
      std::uint16_t(base+512+emitter.high_count()),emitter.high_buffer()};
  return std::make_shared<const ObjectFrame>(objects);
}
}
