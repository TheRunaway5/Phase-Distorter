#include "eb/native/dialogue/ambient/layout.hpp"
#include <stdexcept>

namespace eb::native::dialogue::ambient {
namespace {
constexpr unsigned trail_begin=0x54dc,trail_size=256*12;
constexpr unsigned menus_begin=0x8d12,menu_size=44;
constexpr unsigned actor_variables_begin=0x0e54,actor_table_size=30*2,actor_variables_size=8*actor_table_size;
std::uint16_t &trail_field(PartyTrailPoint &p,unsigned field) {
    switch(field) {
    case 0:return p.x;
    case 1:return p.y;
    case 2:return p.surface_flags;
    case 3:return p.walking_style;
    case 4:return p.direction;
    case 5:return p.reserved;
    default:throw std::out_of_range("Ambient follower field leaves its actual point");
    }
}
std::uint16_t menu_word(const WindowMenuOption &p,unsigned field) {
    switch(field) {
    case 0:return p.flags;
    case 1:return std::uint16_t(p.next.value_or(0xffff));
    case 2:return std::uint16_t(p.previous.value_or(0xffff));
    case 3:return p.page;
    case 4:return p.x;
    case 5:return p.y;
    case 6:return p.userdata;
    default:throw std::out_of_range("Ambient menu word leaves its actual fields");
    }
}
void store_menu_word(WindowMenuOption &p,unsigned field,std::uint16_t value) {
    switch(field) {
    case 0:p.flags=value;break;
    case 1:p.next=value==0xffff?std::nullopt:std::optional<unsigned>(value);break;
    case 2:p.previous=value==0xffff?std::nullopt:std::optional<unsigned>(value);break;
    case 3:p.page=value;break;
    case 4:p.x=value;break;
    case 5:p.y=value;break;
    case 6:p.userdata=value;break;
    default:throw std::out_of_range("Ambient menu write leaves its actual fields");
    }
}
}
void Layout::bind(PartyTrail &trail) {
    if(trail_&&trail_!=&trail)throw std::logic_error("Ambient layout has another follower trail owner");
    trail_=&trail;
}
void Layout::bind(ActorVariables actors) {
    if(!actors.owner||!actors.read||!actors.write)
        throw std::invalid_argument("Ambient layout requires its actual actor-variable owner");
    if(actors_&&(actors_->owner!=actors.owner||actors_->read!=actors.read||actors_->write!=actors.write))
        throw std::logic_error("Ambient layout has another actor-variable owner");
    actors_=actors;
}
bool Layout::contains_byte(std::uint16_t address) const noexcept {
    if(actors_&&address>=actor_variables_begin&&address<actor_variables_begin+actor_variables_size)return true;
    if(trail_&&address>=trail_begin&&address<trail_begin+trail_size)return true;
    if(address<menus_begin||address>=menus_begin+menus_.size()*menu_size)return false;
    const unsigned field=(address-menus_begin)%menu_size;
    // A native Location is not a raw processor pointer. Never manufacture
    // its four source bytes or admit writes through that separate owner.
    return field<15||field>=19;
}
bool Layout::contains_word(std::uint16_t address) const noexcept {
    return contains_byte(address)&&contains_byte(std::uint16_t(address+1));
}
std::uint8_t Layout::byte(std::uint16_t address) const {
    if(!contains_byte(address))throw std::out_of_range("Ambient layout byte has no typed owner");
    if(address>=actor_variables_begin&&address<actor_variables_begin+actor_variables_size) {
        const unsigned offset=address-actor_variables_begin;
        return std::uint8_t(actors_->read(actors_->owner,offset%actor_table_size/2,offset/actor_table_size)>>(offset%2*8));
    }
    if(address>=trail_begin&&address<trail_begin+trail_size) {
        const unsigned offset=address-trail_begin;
        return std::uint8_t(trail_field(trail_->points[offset/12],offset%12/2)>>(offset%2*8));
    }
    const unsigned offset=address-menus_begin,field=offset%menu_size;
    const auto &option=menus_[offset/menu_size];
    if(field<14)return std::uint8_t(menu_word(option,field/2)>>(field%2*8));
    if(field==14)return option.sound_effect;
    return option.label[field-19];
}
void Layout::store_byte(std::uint16_t address,std::uint8_t value) {
    if(!contains_byte(address))throw std::out_of_range("Ambient layout write has no typed owner");
    if(address>=actor_variables_begin&&address<actor_variables_begin+actor_variables_size) {
        const unsigned offset=address-actor_variables_begin,role=offset%actor_table_size/2,variable=offset/actor_table_size;
        const unsigned shift=offset%2*8;
        const auto previous=actors_->read(actors_->owner,role,variable);
        actors_->write(actors_->owner,role,variable,std::uint16_t((previous&~(0xffu<<shift))|(unsigned(value)<<shift)));
        return;
    }
    if(address>=trail_begin&&address<trail_begin+trail_size) {
        const unsigned offset=address-trail_begin;
        auto &field=trail_field(trail_->points[offset/12],offset%12/2);
        const unsigned shift=offset%2*8;
        field=std::uint16_t((field&~(0xffu<<shift))|(unsigned(value)<<shift));
        return;
    }
    const unsigned offset=address-menus_begin,field=offset%menu_size;
    auto &option=menus_[offset/menu_size];
    if(field<14) {
        const unsigned shift=field%2*8;
        store_menu_word(option,field/2,std::uint16_t((menu_word(option,field/2)&~(0xffu<<shift))|(unsigned(value)<<shift)));
    } else if(field==14)option.sound_effect=value;
    else option.label[field-19]=value;
}
std::uint16_t Layout::word(std::uint16_t address) const {
    if(!contains_word(address))throw std::out_of_range("Ambient layout word has no complete typed owner");
    return std::uint16_t(unsigned(byte(address))|unsigned(byte(std::uint16_t(address+1)))<<8);
}
void Layout::store_word(std::uint16_t address,std::uint16_t value) {
    if(!contains_word(address))throw std::out_of_range("Ambient layout word write has no complete typed owner");
    store_byte(address,std::uint8_t(value));
    store_byte(std::uint16_t(address+1),std::uint8_t(value>>8));
}
}
