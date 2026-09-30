// Independent complete CHECK, including original C04116/C4334A and gift
// register publication. Expected results come only from the original machine.
#include "native_interaction_reference_fixture.hpp"

namespace {
using namespace interaction_reference;
struct CheckCase { InteractionCase call;std::optional<std::uint16_t> gift; };
std::uint64_t gifts{},objects{},people{},map_selections{},retained_register_checks{};

unsigned first_npc(const eb::GameAssets& assets,unsigned type,bool money=false) {
    const auto base=actor_layout(assets.version).npc_table&0x3fffff;
    for(unsigned i=1;i<1584;++i) {
        const auto at=base+i*17;
        if(assets.image[at]!=type || !image_word(assets.image,at+1))continue;
        if(type==2 && (image_word(assets.image,at+13)>=0x100)!=money)continue;
        if(!image_pointer(assets.image,at+9))continue;
        return i;
    }
    throw std::runtime_error("No source NPC record for Check corpus");
}
ActorInput actor(const eb::GameAssets& assets,unsigned npc,unsigned direction=0) {
    ActorInput a;a.npc=npc;a.sprite=image_word(assets.image,(actor_layout(assets.version).npc_table&0x3fffff)+npc*17+1);
    const std::array<int,8>x{0,0,10,0,0,0,-10,0},y{-5,-5,0,5,5,5,0,-5};a.x=128+x[direction];a.y=128+y[direction];return a;
}
std::vector<CheckCase> corpus(const eb::GameAssets& assets) {
    const unsigned box=first_npc(assets,2),money=first_npc(assets,2,true),object=first_npc(assets,3);
    std::vector<CheckCase> result;
    for(unsigned npc:{163u,object,box,money})for(unsigned direction=0;direction<8;++direction) {
        CheckCase c;c.call.name="type/npc="+std::to_string(npc)+" direction="+std::to_string(direction);
        c.call.global_direction=direction;c.call.leader_direction=direction&6;c.call.leader_phase=2;
        c.call.actors={actor(assets,npc,direction&6)};c.call.actors[0].animation=2;result.push_back(c);
    }
    for(unsigned direction:{0u,2u,4u,6u})for(unsigned facing:{0u,2u,4u,6u}) {
        CheckCase c;c.call.name="probe="+std::to_string(direction)+" facing="+std::to_string(facing);
        c.call.leader_direction=facing;c.call.actors={actor(assets,object,direction)};result.push_back(c);
    }
    for(unsigned value:{0u,0xffu,0x100u,0x101u,0xffffu})for(unsigned window=0;window<3;++window) {
        CheckCase c;c.call.name="gift-word="+std::to_string(value)+" window="+std::to_string(window);c.gift=std::uint16_t(value);
        c.call.actors={actor(assets,box)};c.call.preopen=window==1;c.call.full_windows=window==2;result.push_back(c);
    }
    for(unsigned gate=0;gate<9;++gate) {
        CheckCase c;c.call.name="precedence/gate="+std::to_string(gate);c.call.actors={actor(assets,163),actor(assets,box)};c.call.actors[1].slot=1;
        if(gate==1)c.call.actors[0].script=0xffff;
        if(gate==2)c.call.actors[0].enabled=0;
        if(gate==3)c.call.actors[0].marker=0x8000;
        if(gate==4)c.call.actors[0].npc=0;
        if(gate==5)c.call.actors[0].npc=0xffff;
        if(gate==6)c.call.movement=2;
        if(gate==7)c.call.walking=12;
        if(gate==8)c.call.demo=1;
        result.push_back(c);
    }
    // Original door records choose test inputs only. Expected matching,
    // counter adjustment, neighbor retry and returned text execute in C4334A.
    for(unsigned type:{5u,6u}) {
        unsigned found=0;
        for(unsigned section=0;section<1280&&found<8;++section) {
            const auto list=image_pointer(assets.image,0x100000+section*4)&0x3fffff;
            for(unsigned i=0,n=image_word(assets.image,list);i<n&&found<8;++i) {
                const auto at=list+2+i*5;if(assets.image[at+2]!=type)continue;
                const auto x=(section%32)*32+assets.image[at+1],y=(section/32)*32+assets.image[at];
                if(y>=1278)continue;
                CheckCase c;c.call.name="authored map type="+std::to_string(type)+" input="+std::to_string(found++);
                c.call.x=x*8;c.call.y=(y+1)*8;c.call.movement=2;
                c.call.combination=assets.image[0x17a800+(c.call.y/128)*32+c.call.x/256]>>3;result.push_back(c);
            }
        }
        require(found==8,"Insufficient original map records for Check corpus");
    }
    {CheckCase c;c.call.name="original counter chain";c.call.x=1408;c.call.y=573;c.call.actors={actor(assets,box)};
        c.call.actors[0].x=1408;c.call.actors[0].y=560;c.call.combination=assets.image[0x17a800+(c.call.y/128)*32+c.call.x/256]>>3;result.push_back(c);}
    {CheckCase c;c.call.name="empty/odd direction";c.call.global_direction=3;c.call.leader_direction=6;result.push_back(c);}
    return result;
}
void seed_banks(Pair& pair) {
    auto& s=pair.original.source;
    for(unsigned i=0;i<8;++i) {
        auto& bank=pair.state.registers_at(i).active;bank={0x12340000u+i,0x89ab0000u+i,std::uint16_t(0x7650+i)};
        const auto at=s.record(i);s.put32(at+23,bank.working);s.put32(at+27,bank.argument);s.put(at+31,bank.secondary);
    }
    pair.state.dummy.active={0xabcdef01,0x76543210,0x2468};
    s.put32(s.p.dummy+23,0xabcdef01);s.put32(s.p.dummy+27,0x76543210);s.put(s.p.dummy+31,0x2468);
    pair.talk.state().current_event_flag=0xface;s.put(s.version==eb::GameVersion::US?0x9c88:0x9f33,0xface);
}
void compare_banks(Pair& pair) {
    const auto& s=pair.original.source;
    require(pair.talk.state().current_event_flag==s.get(s.version==eb::GameVersion::US?0x9c88:0x9f33),pair.context+" gift event flag differs");
    for(unsigned i=0;i<9;++i) {
        const auto& b=i==8?pair.state.dummy.active:pair.state.registers_at(i).active;
        const auto at=i==8?s.p.dummy:s.record(i);
        require(b.working==s.get32(at+23)&&b.argument==s.get32(at+27)&&b.secondary==s.get(at+31),pair.context+" live/retained/dummy register bank differs slot="+std::to_string(i));++retained_register_checks;
    }
}
void run(const eb::GameAssets& original_assets) {
    const auto tests=corpus(original_assets);const auto counters_before=counts.counter_steps,maps_before=map_selections;
    for(unsigned i=0;i<tests.size();++i) {
        auto assets=original_assets;const auto& test=tests[i];
        if(test.gift) {
            // Only immutable fixture NPC payload bytes13/14 are varied; all
            // executable instructions, primary text keys and other data remain original.
            const auto at=(actor_layout(assets.version).npc_table&0x3fffff)+test.call.actors[0].npc*17+13;
            assets.image[at]=std::uint8_t(*test.gift);assets.image[at+1]=std::uint8_t(*test.gift>>8);
        }
        try {
            Resources resources(assets);Pair pair(resources,test.call,npcs::InteractionAction::Check);seed_banks(pair);
            const auto before=counts.counter_steps;const auto selected=pair.run(i&1?1:4096);compare_banks(pair);
            const auto id=pair.original.source.get(pair.original.a.interaction_npc);
            if(id<1584&&id){const auto type=assets.image[(pair.original.a.npc_table&0x3fffff)+id*17];gifts+=type==2;objects+=type==3;people+=type==1;}
            map_selections+=id==0xfffe;
            if(test.call.name=="original counter chain")require(counts.counter_steps>before&&id==test.call.actors[0].npc,"Complete CHECK failed to reach counter actor");
            if(test.call.full_windows||test.call.preopen||test.call.name.starts_with("authored map")||i<4)pair.image();
            (void)selected;
        } catch(const std::exception& e) {throw std::runtime_error(test.call.name+": "+e.what());}
    }
    require(counts.counter_steps>counters_before&&map_selections>maps_before,"Original Check map/counter paths were not exercised");
    std::cout<<(original_assets.version==eb::GameVersion::US?"US":"JP")<<" complete Check cases="<<tests.size()<<'\n';
}
}
int main(int argc,char**argv) {
    if(argc<2){std::cout<<"SKIP: local US/JP packs required for original Check reference\n";return 77;}
    try {
        for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
        std::cout<<"PASS complete original/native Check: "<<counts.cases<<" calls, "<<gifts<<" gifts, "<<objects<<" objects, "<<people<<" person refusals, "<<map_selections<<" map text selections, "<<retained_register_checks<<" register-bank comparisons.\n";
        std::cout<<"Original: "<<counts.instructions<<" instructions including initialization/cache/pose, "<<counts.surface_calls<<" surface calls, "<<counts.map_calls<<" C4334A calls, "<<counts.counter_steps<<" counter extensions, "<<counts.caller_stack_checks<<" preserved caller-stack checks.\n";
        std::cout<<"Native: "<<counts.effects<<" ordered window effects, "<<counts.state_checks<<" state checks, "<<counts.pixels<<" indexed pixels, "<<counts.ppu_pixels<<" original software PPU pixels.\n";
        std::cout<<"Scope: explicitly active actors, real original collision/map/pose/window/register routines; declared NPC payload13/14 varied for numeric edges. WindowTick/world/frame/audio remain named services. No dialogue item effects, natural spawning, fade, PCM or GPU claim.\n";
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
