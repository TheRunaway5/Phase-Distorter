#include "eb/native/entities/graphics/object_maps.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::entities::graphics {
ObjectMaps::ObjectMaps(std::span<const std::uint8_t> assets,GameVersion version,
    ObjectMapState &state,const SpriteResources &sprites):state_(state),sprites_(sprites) {
  if(version!=GameVersion::US&&version!=GameVersion::JP)throw std::invalid_argument("Unknown object map region");
  const unsigned table=version==GameVersion::JP?0x42f7a:0x4303c;origin_=version==GameVersion::JP?0x4a04:0x467e;
  if(assets.size()<table+176)throw std::out_of_range("Truncated object tile table");
  for(unsigned i=0;i<88;++i)tiles_[i]=std::uint16_t(assets[table+i*2]|unsigned(assets[table+i*2+1])<<8);
}
void ObjectMaps::reset() noexcept {
  for(auto &allocation:allocations_)allocation.reset();
  state_.bytes.fill(0xff);for(auto &role:state_.roles)role.allocated=false;
}
void ObjectMaps::attach(unsigned role,ObjectMapRecord record) {
  auto token=std::make_shared<int>(0);
  state_.roles.at(role)=record;allocations_.at(role)=std::move(token);
}
SourceObjectMap ObjectMaps::source_map(unsigned role,bool mirrored) const {
  const auto record=state_.roles.at(role);
  const unsigned begin=std::uint16_t(record.pointer-origin_);
  if(!record.allocated||!allocations_.at(role)||!record.size||begin+unsigned(record.size)*2>state_.bytes.size())
    throw std::logic_error("Source map requires its actual retained creation allocation");
  SourceObjectMap result;result.bank_=0x7e;result.origin_=record.pointer;
  result.pointer_=std::uint16_t(record.pointer+(mirrored?record.size:0));
  result.bytes_=std::span<const std::uint8_t>(state_.bytes).subspan(begin,unsigned(record.size)*2);
  const std::weak_ptr<const void> life=lifetime_,allocation=allocations_.at(role);
  result.validate_=[this,life,allocation,role,record] {
    if(life.expired()||allocation.expired())throw std::logic_error("Source map lost its actual allocation lifetime");
    const auto &live=state_.roles.at(role);
    if(!live.allocated||live.pointer!=record.pointer||live.size!=record.size)
      throw std::logic_error("Source map allocation was replaced");
  };
  const auto validate=result.validate_;
  result.write_=[this,validate,begin,record](std::uint16_t address,std::uint8_t value) {
    validate();const unsigned offset=std::uint16_t(address-record.pointer);
    if(offset>=unsigned(record.size)*2)throw std::logic_error("Source attribute store leaves its actual creation map");
    state_.bytes[begin+offset]=value;
  };
  return result;
}
ObjectMapRecord ObjectMaps::allocate(unsigned sprite,unsigned cell) {
  const auto raw=sprites_.raw_shape(sprite);const unsigned size=unsigned(raw.size());
  if(!size||size%10||cell+size/10>tiles_.size())throw std::out_of_range("Object map lacks actual creation cells/shape");
  unsigned start{};
  for(;;){
    if(start>=896||start+size>=896)throw std::length_error("CREATE_ENTITY exhausted the actual spritemap pool");
    unsigned at=start;
    while(at<start+size&&state_.bytes[at+4]==0xff)at+=5;
    if(at>=start+size)break;
    start+=5;
  }
  const unsigned parts=size/10;const auto palette=sprites_.raw_header(sprite)[3];
  for(unsigned mirror=0;mirror<2;++mirror)for(unsigned part=0;part<parts;++part){
    const auto at=(mirror*parts+part)*5;const auto tile=tiles_[cell+part];
    state_.bytes[start+at]=raw[at];state_.bytes[start+at+1]=std::uint8_t(tile);
    state_.bytes[start+at+2]=std::uint8_t((raw[at+2]&0xfe)|palette|(tile>>8));
    state_.bytes[start+at+3]=raw[at+3];state_.bytes[start+at+4]=raw[at+4];
  }
  return {std::uint16_t(origin_+start),std::uint16_t(parts*5),true};
}
void ObjectMaps::release(unsigned role) {
  allocations_.at(role).reset();
  auto &record=state_.roles.at(role);
  const unsigned begin=std::uint16_t(record.pointer-origin_);
  if(begin>=896)return;
  unsigned ended{};
  for(unsigned at=begin;ended<2;at+=5){
    if(at+5>state_.bytes.size())throw std::out_of_range("Released object map escaped its declared pool");
    const auto flags=state_.bytes[at+4];std::fill_n(state_.bytes.begin()+at,5,0xff);ended+=bool(flags&0x80);
  }
  record.allocated=false;
}
ObjectMap ObjectMaps::prepare(unsigned role,unsigned sprite,bool mirrored,std::uint16_t surface) {
  const auto &record=state_.roles.at(role);if(!record.allocated)throw std::logic_error("Object draw lacks its actual creation map");
  const unsigned start=std::uint16_t(record.pointer-origin_)+(mirrored?record.size:0),parts=record.size/5;
  if(start+record.size>state_.bytes.size())throw std::out_of_range("Object draw escaped its actual map pool");
  const auto upper=sprites_.definition(sprite).upper_parts;
  for(unsigned i=0;i<parts;++i){auto &flags=state_.bytes[start+i*5+2];
    const unsigned priority=surface&(i<upper?2:1)?0x20:0x30;flags=std::uint8_t((flags&0xcf)|priority);}
  return {state_.bytes,origin_,std::uint16_t(origin_+start)};
}
}
