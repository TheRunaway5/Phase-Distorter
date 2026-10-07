#include "eb/native/world/menu/resources.hpp"
#include "eb/native/character_growth.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::world::menu {
std::shared_ptr<const Resources> Resources::import(std::span<const std::uint8_t> image,GameVersion v) {
    if(v!=GameVersion::US && v!=GameVersion::JP) throw std::invalid_argument("Unsupported world menu region");
    const bool jp=v==GameVersion::JP;
    auto read=[&](unsigned p,unsigned n) {
        if(p>image.size() || n>image.size()-p) throw std::invalid_argument("Truncated world menu content");
        return image.subspan(p,n);
    };
    auto word=[&](unsigned p) { auto s=read(p,2);return std::uint16_t(s[0]|unsigned(s[1])<<8); };
    auto r=std::shared_ptr<Resources>(new Resources(v));
    // CMD_WINDOW_TEXT and C133B0 / OPEN_MENU_BUTTON-jp.
    const unsigned command=jp?0x9dd30:0x2fa37a,stride=jp?5:10;
    for(unsigned i=0;i<6;++i) {
        auto s=read(command+i*stride,stride);r->commands_[i].assign(s.begin(),s.end());
        if(jp) r->positions_[i]={std::uint16_t(i%2*5),std::uint16_t(i/2)};
        else {auto p=read(0x3e964+i*2,2);r->positions_[i]={p[0],p[1]};}
    }
    const unsigned abilities=jp?0x159a06:0x158a50;
    for(unsigned i=0;i<54;++i) {
        auto s=read(abilities+i*15,15);auto &p=r->psi_[i];
        p.name=s[0];p.level=s[1];p.category=s[2];p.usability=s[3];p.action=word(abilities+i*15+4);
        std::copy_n(s.begin()+6,3,p.levels.begin());p.x=s[9];p.y=s[10];std::copy_n(s.begin()+11,4,p.description.begin());
    }
    for(unsigned i=0;i<49;++i) r->restrictions_[i]=word((jp?0x3ec2f:0x3f0b0)+i*2);
    auto reference=[](unsigned p) { dialogue::ReferenceKey key{};for(unsigned i=0;i<4;++i)key[i]=std::uint8_t(p>>(i*8));return key; };
    r->status_text_=reference(jp?0xc9dd4e:0xefa3b6);
    r->psi_no_pp_=reference(jp?0xc738e6:0xc8faaa);
    r->teleport_blocked_=reference(jp?0xc92889:0xc7c850);
    {auto s=read(jp?0x439d9:0x45c87,3);r->teleport_title_.assign(s.begin(),s.end());}
    for(unsigned id=0;id<17;++id){const unsigned at=(jp?0x15899e:0x157880)+id*(jp?16:31);auto s=read(at,jp?10:25);auto &d=r->teleport_destinations_[id];d.name.assign(s.begin(),s.end());d.event_flag=word(at+(jp?10:25));}
    for(unsigned i=0;i<4;++i){auto s=read((jp?0x3ec1b:0x3f090)+i*(jp?5:8),jp?5:8);r->psi_categories_[i].assign(s.begin(),s.end());}
    for(unsigned i=0;i<5;++i){auto s=read((jp?0x3ec91:0x3f112)+i*2,2);r->psi_suffixes_[i].assign(s.begin(),s.end());}
    for(unsigned i=0;i<10;++i){auto s=read((jp?0x3eca3:0x3f124)+i*(jp?9:20),jp?9:20);r->psi_targets_[i].assign(s.begin(),s.end());}
    for(unsigned i=0;i<17;++i){auto s=read((jp?0x159d30:0x158d7a)+i*(jp?10:25),jp?10:25);r->psi_names_[i].assign(s.begin(),s.end());}
    {auto s=read(jp?0x3ec9b:0x3f11c,8);r->psi_cost_.assign(s.begin(),s.end());}
    {auto s=read(jp?0x4392c:0x45b4d,jp?27:35);r->status_instruction_.assign(s.begin(),s.end());}
    for(unsigned i=0;i<10;++i){
        const unsigned at=i==9?(jp?0x439a1:0x45c00):(jp?0x43947:0x45b70)+i*(jp?10:16);
        auto s=read(at,256);r->status_labels_[i].assign(s.begin(),s.end());
    }
    for(unsigned i=0;i<49;++i)r->status_icons_[i]=word((jp?0x43868:0x45a89)+i*2);
    const auto exp=character_growth_layout(v).experience;
    for(unsigned c=0;c<4;++c)for(unsigned l=0;l<100;++l){auto s=read(unsigned(exp)+(c*100+l)*4,4);r->experience_[c][l]=std::uint32_t(s[0])|(std::uint32_t(s[1])<<8)|(std::uint32_t(s[2])<<16)|(std::uint32_t(s[3])<<24);}
    r->no_person_=reference(jp?0xc925a1:0xc7c588);
    r->no_problem_=reference(jp?0xc925b8:0xc7c59e);
    r->drop_=reference(jp?0xc9266a:0xc7c609);
    r->cannot_give_=reference(jp?0xc92725:0xc7c6c9);
    constexpr std::array<unsigned,10> us_give{0xc7e3fa,0xc7e42c,0xc7e468,0xc7e4a4,0xc7e4c3,0xc7e4e9,0xc7e51c,0xc7e559,0xc7e5a1,0xc7e5c2};
    constexpr std::array<unsigned,4> jp_give{0xc925c9,0xc92604,0xc92613,0xc92646};
    for(unsigned i=0;i<10;++i)r->give_[i]=reference(jp?(i<4?jp_give[i]:0):us_give[i]);
    constexpr std::array<unsigned,4> us_use{0xc7c6b6,0xc7c742,0xc77ee8,0xc7c6f1};
    constexpr std::array<unsigned,4> jp_use{0xc92712,0xc9277a,0xc7293a,0xc92747};
    for(unsigned i=0;i<4;++i)r->use_text_[i]=reference(jp?jp_use[i]:us_use[i]);
    r->use_text_[4]=reference(jp?0xc92868:0xc7c833);
    for(unsigned i=0;i<4;++i)r->usable_[i]=read((jp?0x436a9:0x458ab)+i,1)[0];
    for(unsigned i=0;i<4;++i) {
        auto s=read((jp?0x432d6:0x43550)+i*(jp?5:6),jp?5:6);
        r->item_commands_[i].assign(s.begin(),s.end());
    }
    for(unsigned i=0;i<5;++i) {
        auto s=read((jp?0x43761:0x45963)+i*(jp?4:10),jp?4:10);
        r->target_prompts_[i].assign(s.begin(),s.end());
    }
    for(unsigned i=0;i<256;++i) {
        const unsigned at=(jp?0x157000:0x155000)+i*(jp?24:39);
        auto name=read(at,jp?10:25);r->item_names_[i].assign(name.begin(),name.end());
        std::copy_n(read(at+(jp?16:31),4).begin(),4,r->item_parameters_[i].begin());
        auto s=read((jp?0x157000:0x155000)+i*(jp?24:39)+(jp?20:35),4);
        std::copy(s.begin(),s.end(),r->help_[i].begin());
        const auto item=read((jp?0x157000:0x155000)+i*(jp?24:39)+(jp?10:25),6);
        r->items_[i]={item[0],item[3],std::uint16_t(item[4]|unsigned(item[5])<<8)};
    }
    for(unsigned i=0;i<4;++i) {
        const auto s=read((jp?0x439be:0x45c2c)+i*(jp?4:11),jp?4:11);
        r->equipment_text_[i].assign(s.begin(),s.end());
        const auto t=read((jp?0x439be:0x45c58)+i*(jp?4:8),jp?4:8);r->equipment_titles_[i].assign(t.begin(),t.end());
    }
    for(unsigned i=0;i<4;++i) {
        const unsigned at=jp?(i==0?0x439ce:i==1?0x439d2:i==2?0x439b1:0x439b7):(i==0?0x45c78:i==1?0x45c82:i==2?0x45c1c:0x45c24);
        const unsigned length=jp?(i<2?(i?7:4):(i==2?6:7)):(i<2?(i?8:10):8);
        const auto s=read(at,length);r->equipment_text_[4+i].assign(s.begin(),s.end());
    }
    for(unsigned i=0;i<318;++i) {
        const auto s=read((jp?0x158b1e:0x157b68)+i*12,12);auto &a=r->actions_[i];
        a.direction=s[0];a.target=s[1];a.pp_cost=s[3];std::copy_n(s.begin()+4,4,a.description.begin());
        a.function=std::any_of(s.begin()+8,s.end(),[](auto b){return b!=0;});
    }
    return r;
}
std::span<const std::uint8_t> Resources::command(unsigned i) const { return commands_.at(i-1); }
std::array<std::uint16_t,2> Resources::position(unsigned i) const { return positions_.at(i-1); }
unsigned Resources::first_psi_character(const party::State &party) const {
    if(party.version()!=version_) throw std::invalid_argument("World menu party region differs");
    // C1C373 scans party_order and returns its one-based position. C1C165
    // consults only the first nonzero status group's original restriction.
    for(unsigned index=0;index<party.controlled_count;++index) {
        const unsigned who=party.party_order.at(index);
        if(psi_eligible(party,who))return index+1;
    }
    return 0;
}
bool Resources::psi_eligible(const party::State &party,unsigned who) const {
    if(who==3)return false;
    const auto &c=party.character(who);
    for(unsigned group=0;group<7;++group)if(c.afflictions[group]){if(restrictions_.at(group*7+c.afflictions[group]-1))return false;break;}
    for(unsigned i=1;i<psi_.size() && psi_[i].name;++i){const auto &p=psi_[i];const auto level=p.levels.at(who==4?2:who-1);if(level && level<=c.level && (p.usability&1) && (p.category&15))return true;}
    return who==1 && (party.party_psi&1);
}
unsigned Resources::psi_character_count(const party::State &party) const {unsigned count=0;for(unsigned i=0;i<party.controlled_count;++i)count+=psi_eligible(party,party.party_order.at(i));return count;}
std::uint16_t Resources::status_icon(const party::Character &c) const {
    unsigned group=0;if(!c.afflictions[0]){if(c.afflictions[3])group=3;else{for(group=1;group<7 && !c.afflictions[group];++group){}if(group==7)return 32;}}
    return status_icons_.at(group*7+c.afflictions[group]-1);
}
std::uint32_t Resources::required_experience(unsigned who,const party::Character &c) const {return c.level==99?0:experience_.at(who-1).at(c.level+1)-c.experience;}
} // namespace eb::native::world::menu
