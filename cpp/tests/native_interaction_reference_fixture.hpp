#pragma once
// Test-only independent original-machine adapter, copied from the frozen Talk
// oracle for the new Check and caller references. The old fixture is unchanged.
// Original regional machine execution generates expected state and pictures.
// Explicit active actor records are input, not a natural-spawn claim. Services
// are configurable so the caller fixture executes the real tick wrappers.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/state.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <iostream>
#include <memory>
#include <optional>
#include <span>
#include <stdexcept>
#include <string>
#include <vector>

namespace interaction_reference {
namespace native=eb::native;
namespace dialogue=eb::native::dialogue;
namespace npcs=eb::native::npcs;
namespace party=eb::native::party;
void require(bool ok,const std::string& why){if(!ok)throw std::runtime_error(why);}
struct Counts {std::uint64_t instructions{},calls{},cases{},talks{},streams{},effects{},state_checks{},pixels{},ppu_pixels{},source_diagnostics{},surface_calls{},map_calls{},counter_steps{},caller_pause_calls{},cursor_checks{},caller_stack_checks{};} counts;
struct Layout {
    unsigned record_size,windows,dummy,open,head,tail,focus,scene,game,characters,stride;
    unsigned create,close,draw_all,load,chosen,palette,display,tick,wait,blink,sound;
    unsigned instant,redraw,render,mask,selected,dirty,upload,stream_count,streams;
    unsigned number,status,test_status,get_argument,get_working;
};
Layout layout(eb::GameVersion v){
    if(v==eb::GameVersion::US)return {82,0x8650,0x85fe,0x88e4,0x88e0,0x88e2,0x8958,0x7dfe,0x97f5,0x99ce,95,
        0xc104ee,0xc3e521,0xc2087c,0xc47c3f,0xc43317,0xc47f87,0xc186b1,0xc12dd5,0xc08756,0xc07c5b,0xc0abe0,
        0x9622,0x9623,0x89c9,0x9647,0x89ca,0x9649,0x9624,0x97b8,0x96aa,0xc14723,0xc15007,0xc150e4,0xc103dc,0xc1040a};
    return {76,0x89c2,0x8976,0x8c26,0x8c22,0x8c24,0x8c96,0x8176,0x9aa9,0x9c7f,94,
        0xc106e4,0xc10141,0xc2081d,0xc459ab,0xc43090,0xc45c1a,0xc18913,0xc13502,0xc0874c,0xc07eab,0xc0abbf,
        0x991a,0x991b,0x8d07,0x993f,0x8d08,0x9941,0x991c,0x9a6c,0x995e,0xc14b23,0xc153e3,0xc154c0,0xc105df,0xc1060d};
}
enum class Effect {Tick,Frame,Sound,Blink,World};
class Source {
  public:
    eb::GameVersion version;Layout p;std::unique_ptr<eb::SnesBus> bus;eb::MainCpu65816 cpu;
    bool busy{}, real_ticks{};std::optional<Effect> pending;unsigned returning{},expected_stack=0x1fff,expected_dp=0x1e00;
    std::function<void(unsigned)> observe;
    std::function<bool(unsigned)> external;
    bool guarded_caller{};
    std::array<std::uint8_t,32> caller_stack{};
    explicit Source(const eb::GameAssets& a):version(a.version),p(layout(version)),bus(std::make_unique<eb::SnesBus>(a.image,version)),cpu(*bus){
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.direct_page=expected_dp;cpu.stack_pointer=expected_stack;cpu.data_bank=0x7e;
        bus->work_ram[0xd]=0x80;bus->write_byte(0x2100,0x80);const bool us=version==eb::GameVersion::US;
        byte(p.game+(us?0x1d8:0x1d5),1);byte(p.game+(us?175:172),4);byte(p.game+(us?174:171),4);
        for(unsigned i=0;i<6;++i){byte(p.game+(us?122:119)+i,i+1);byte(p.game+(us?156:153)+i,i);
            for(unsigned n=0;n<4;++n)byte(p.characters+i*p.stride+n,(us?0x71:0x41)+n);
            const auto at=p.characters+i*p.stride;put(at+(us?10:9),200);put(at+(us?12:11),100);
            put(at+(us?69:68),100+i);put(at+(us?71:70),100+i);put(at+(us?75:74),50+i);put(at+(us?77:76),50+i);
        }
        call(0xc200d9,true);call(p.chosen,true);call(p.load,true);
        if(us)call(0xc44963,true,1);else{put32(cpu.direct_page+14,0x7f0000);call(0xc08616,true,0,0x3800,0x6000);}
        put(us?0xb4b6:0xb68a,1);call(p.palette,true);put(p.selected,65535);
        // Ambient OPEN_WINDOW_TABLE[-1] uses full24-bit absolute-index carry.
        put(p.open+0xfffe,0);
        // Preserve a real caller frame above S across all subsequent nested
        // original helpers, rather than always invoking with an empty stack.
        expected_stack=0x1fdf;cpu.stack_pointer=expected_stack;
        for(unsigned i=0;i<caller_stack.size();++i){caller_stack[i]=std::uint8_t(0xa5^(i*37));byte(expected_stack+1+i,caller_stack[i]);}
        guarded_caller=true;
    }
    unsigned get(unsigned at)const{return bus->work_ram.at(at)|(unsigned(bus->work_ram.at(at+1))<<8);}
    std::uint32_t get32(unsigned at)const{return get(at)|(std::uint32_t(get(at+2))<<16);}
    void byte(unsigned at,unsigned value){bus->work_ram.at(at)=std::uint8_t(value);}
    void put(unsigned at,unsigned value){byte(at,value);byte(at+1,value>>8);}
    void put32(unsigned at,std::uint32_t value){put(at,value);put(at+2,value>>16);}
    unsigned slot(unsigned id)const{return get(p.open+id*2);}
    unsigned record(unsigned i)const{return p.windows+i*p.record_size;}
    void begin(unsigned entry,bool far,unsigned a=0,unsigned x=0,unsigned y=0){
        require(!busy&&!pending,"Original call overlaps an active frame");cpu.program_counter=(entry&0xff0000)|0xff00;
        returning=cpu.program_counter+(far?4:3);cpu.accumulator=a;cpu.x_index=x;cpu.y_index=y;cpu.status_register=eb::MainCpu65816::InterruptDisable;
        require(cpu.stack_pointer==expected_stack&&cpu.direct_page==expected_dp,"Original caller frame changed");
        if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry&65535,3);busy=true;++counts.calls;
    }
    std::optional<Effect> advance(){
        require(!pending,"Original effect needs acknowledgement");
        for(unsigned n=0;n<3000000&&busy;++n){
            if(cpu.program_counter==returning&&cpu.stack_pointer==expected_stack){require(cpu.direct_page==expected_dp&&cpu.data_bank==0x7e,"Original return ABI differs");if(guarded_caller){require(std::equal(caller_stack.begin(),caller_stack.end(),bus->work_ram.begin()+expected_stack+1),"Original changed caller stack contents");++counts.caller_stack_checks;}busy=false;return {};}
            const auto pc=cpu.program_counter;if(observe)observe(pc);
            if(external && external(pc)) continue;
            if(!real_ticks && pc==(version==eb::GameVersion::US?0xc12e42u:0xc1355eu)){pending=Effect::World;return pending;}
            if((!real_ticks&&pc==p.tick)||pc==p.wait||pc==p.sound||pc==p.blink){pending=pc==p.tick?Effect::Tick:pc==p.wait?Effect::Frame:pc==p.sound?Effect::Sound:Effect::Blink;return pending;}
            if(version==eb::GameVersion::JP&&(pc==0xc439e2||pc==0xc43be8)&&get(0xa031))put(0xa031,0);
            cpu.step_instruction();++counts.instructions;
        }require(!busy,"Original call exceeded bound: "+cpu.describe_registers());return {};
    }
    void respond(){
        require(bool(pending),"No original effect to answer");
        if(*pending==Effect::Blink){ // Run actual sprite-flag helper, outside native UI state.
            const unsigned stack=cpu.stack_pointer,target=((get(stack+1)+1)&65535)|(unsigned(bus->work_ram[stack+3])<<16);
            for(unsigned i=0;i<2000;++i){cpu.step_instruction();++counts.instructions;if(cpu.program_counter==target&&cpu.stack_pointer==stack+3)break;}
            require(cpu.program_counter==target&&cpu.stack_pointer==stack+3,"Original sprite flag helper did not return");
        }else cpu.execute_instruction<0x6b>(0,1);pending.reset();
    }
    void call(unsigned entry,bool far,unsigned a=0,unsigned x=0,unsigned y=0){begin(entry,far,a,x,y);while(advance())respond();}

};
struct ActorLayout {
    unsigned talk,find,probe,surface,map,collision,sprite_groups,npc_table,shape_table,shapes,make_spritemap,tileset_table,load_collision,event_changes,map_row,collision_row,script,x,y,z,xf,yf,zf,vx,vy,vz,vxf,vyf,vzf,npc,direction,collided,enabled,lrwidth,lrheight,udwidth,udheight,shape,graphics_low,graphics_high,graphics_bank,height,width,vram,displayed,animation,surface_flags,fingerprint,interaction_npc,interaction_entity,text,movement,intangible,demo,door,door_type,unread,combo,checked_flags,checked_x,checked_y,events;
};
ActorLayout actor_layout(eb::GameVersion v){
    if(v==eb::GameVersion::US)return {
        0xc13187, 0xc04452, 0xc042ef, 0xc05cd7, 0xc065c2, 0xc05ff6, 0xef133f, 0xcf8985, 0xc42aeb, 0xc42b0d, 0xc01d38, 0xef101b, 0xc0062a, 0xc006f2, 0xc00ac5, 0xc00cf3, 0xa62, 0xb8e, 0xbca, 0xc06, 0xc42, 0xc7e, 0xcba, 0xcf6, 0xd32, 0xd6e, 0xdaa, 0xde6, 0xe22, 0x2c9a, 0x2af6, 0x289e, 0x332a, 0x33de, 0x1a4a, 0x3366, 0x33a2, 0x2b6e, 0x29ca, 0x2a06, 0x2a42, 0x2aba, 0x2a7e, 0x298e, 0x341a, 0x10f2, 0x2baa, 0x3456, 0x5d62, 0x5d64, 0x5dde, 0x5d56, 0x5d58, 0x81, 0x5dbc, 0x5dbe, 0x5ddc, 0x436e, 0x5da4, 0x5dac, 0x5dae, 0x9c08};
    return {
        0xc13864, 0xc046d9, 0xc04576, 0xc05f05, 0xc067f0, 0xc06224, 0xef6541, 0xcf89c1, 0xc42a29, 0xc42a4b, 0xc01d4e, 0xef621d, 0xc0063a, 0xc00702, 0xc00ad7, 0xc00d05, 0xa58, 0xb84, 0xbc0, 0xbfc, 0xc38, 0xc74, 0xcb0, 0xcec, 0xd28, 0xd64, 0xda0, 0xddc, 0xe18, 0x3098, 0x2ef4, 0x2c9c, 0x3728, 0x37dc, 0x1a40, 0x3764, 0x37a0, 0x2f6c, 0x2dc8, 0x2e04, 0x2e40, 0x2eb8, 0x2e7c, 0x2d8c, 0x1ab8, 0x10e8, 0x2fa8, 0x1af4, 0x60e8, 0x60ea, 0x6164, 0x60dc, 0x60de, 0x81, 0x6142, 0x6144, 0x6162, 0x46f4, 0x612a, 0x6132, 0x6134, 0x9eb3};
}
unsigned image_word(std::span<const std::uint8_t> image,unsigned at){return image[at]|(unsigned(image[at+1])<<8);}
unsigned image_pointer(std::span<const std::uint8_t> image,unsigned at){return image_word(image,at)|(unsigned(image[at+2])<<16)|(unsigned(image[at+3])<<24);}
struct ActorInput {
    unsigned slot{},npc=163,sprite{},script=8,x=128,y=123,direction=4,animation{},surface{},marker=0xffff;
    unsigned enabled=1,lrwidth=2,lrheight=3,udwidth=2,udheight=3;
    std::array<std::uint32_t,3> velocity{0x12345678u,0xffff9876u,0x0001abcd};
};
struct InteractionCase {
    std::string name;
    unsigned x=128,y=128,global_direction{},leader_direction{},leader_phase{},movement{},walking{},demo{},intangibility=7,combination{},party_count=4;
    bool full_windows{},preopen{},display{};
    std::vector<ActorInput> actors;
};
// Source setup imports creation geometry directly from the original asset
// image. These are explicitly active records, not calls to CREATE_ENTITY or a
// claim about map-driven spawning. Pose helpers and DMA are never intercepted.
class OriginalInteractions {
  public:
    const eb::GameAssets& assets;Source source;ActorLayout a;std::vector<unsigned> directions;unsigned probe_collisions{};
    explicit OriginalInteractions(const eb::GameAssets& input,npcs::InteractionAction action):assets(input),source(input),a(actor_layout(input.version)){
        if(action==npcs::InteractionAction::Check){const bool us=input.version==eb::GameVersion::US;
            a.talk=us?0xc1323b:0xc13918;a.find=us?0xc04279:0xc04500;a.probe=us?0xc04116:0xc0439d;a.map=us?0xc4334a:0xc430c3;
        }
    }
    unsigned rom(unsigned address)const{return image_word(assets.image,(address&0x3fffff));}
    unsigned pointer(unsigned address)const{return image_pointer(assets.image,address&0x3fffff);}
    unsigned game(unsigned us_offset)const{return source.p.game+us_offset-(source.version==eb::GameVersion::JP?3:0);}
    void cache(unsigned combination,unsigned x,unsigned y){
        source.put(a.combo,combination);const unsigned tileset=rom(a.tileset_table+2*combination);
        source.call(a.load_collision,false,tileset);source.call(a.event_changes,true,tileset);
        // Execute the original loaders over one coherent 512px cache window;
        // no WorldMapArea/native collision data enters expected storage.
        const auto left=std::uint16_t(x/8-32),top=std::uint16_t(y/8-32);
        for(unsigned i=0;i<64;++i)source.call(a.map_row,false,left,std::uint16_t(top+i));
        for(unsigned i=0;i<64;++i)source.call(a.collision_row,false,left,std::uint16_t(top+i));
    }
    void actor(const ActorInput& in){
        const unsigned s=in.slot*2,group=pointer(a.sprite_groups+in.sprite*4),at=group&0x3fffff;
        source.put(a.script+s,in.script);source.put(a.npc+s,in.npc);source.put(a.direction+s,in.direction);source.put(a.animation+s,in.animation);
        source.put(a.x+s,in.x);source.put(a.y+s,in.y);source.put(a.z+s,17);
        source.put(a.xf+s,0x1234);source.put(a.yf+s,0x5678);source.put(a.zf+s,0xabcd);
        const std::array<unsigned,3> integers{a.vx,a.vy,a.vz},fractions{a.vxf,a.vyf,a.vzf};
        for(unsigned axis=0;axis<3;++axis){source.put(integers[axis]+s,in.velocity[axis]>>16);source.put(fractions[axis]+s,in.velocity[axis]);}
        source.put(a.enabled+s,in.enabled);source.put(a.lrwidth+s,in.lrwidth);source.put(a.lrheight+s,in.lrheight);source.put(a.udwidth+s,in.udwidth);source.put(a.udheight+s,in.udheight);
        source.put(a.collided+s,in.marker);source.put(a.surface_flags+s,in.surface);source.put(a.fingerprint+s,0x8bad);
        source.put(a.shape+s,assets.image[at+2]);source.put(a.graphics_low+s,group+9);source.put(a.graphics_high+s,group>>16);
        source.put(a.graphics_bank+s,assets.image[at+8]);source.put(a.height+s,assets.image[at]);source.put(a.width+s,assets.image[at+1]*2);
        // Distinct, explicitly assigned scratch allocations for at most three
        // visible source actors. They are oracle-only, never a native API.
        source.put(a.vram+s,0x4000+(in.slot==23?0:in.slot+1)*0x400+((assets.image[at]&1)?0x100:0));source.put(a.displayed+s,0xbeef);
    }
    void seed(const InteractionCase& c){
        for(unsigned i=0;i<30;++i){source.put(a.script+i*2,0xffff);source.put(a.collided+i*2,0xffff);source.put(a.enabled+i*2,0);}
        source.put(game(130),c.x);source.put(game(134),c.y);source.put(game(138),c.global_direction);source.put(game(148),23);
        source.byte(game(174),c.party_count);source.byte(game(175),c.party_count);
        source.put(game(142),c.walking);source.put(a.movement,c.movement);source.put(a.demo,c.demo);source.put(a.intangible,c.intangibility);
        source.put(a.interaction_npc,0x2345);source.put(a.interaction_entity,0x1234);source.put(a.collided+46,0x4321);
        source.put(a.door,0x8888);source.put(a.door_type,0x9999);source.put(a.unread,0xabcd);source.put32(a.text,0x12345678);
        source.put(a.checked_flags,0x4567);source.put(a.checked_x,0x6789);source.put(a.checked_y,0x89ab);
        ActorInput leader;leader.slot=23;leader.npc=0x8000;leader.sprite=1;leader.x=c.x;leader.y=c.y;leader.direction=c.leader_direction;leader.animation=c.leader_phase;actor(leader);
        for(const auto& person:c.actors)actor(person);
        cache(c.combination,c.x,c.y);
        if(c.full_windows)for(unsigned i=0;i<8;++i)source.call(source.p.create,false,i==1?9:i);
        else if(c.preopen)source.call(source.p.create,false,1);
        source.observe=[&](unsigned pc){if(pc==a.probe){directions.push_back(source.cpu.accumulator);probe_collisions=0;}if(pc==a.collision&&probe_collisions++)++counts.counter_steps;if(pc==a.surface)++counts.surface_calls;if(pc==a.map)++counts.map_calls;};
    }
    std::uint32_t result()const{return source.get32(source.expected_dp+6);}
    void call(){source.call(a.talk,true);++counts.talks;}
};
dialogue::ReferenceKey key(std::uint32_t value){return {std::uint8_t(value),std::uint8_t(value>>8),std::uint8_t(value>>16),std::uint8_t(value>>24)};}
std::uint32_t reference_value(dialogue::ReferenceKey value){return value[0]|(std::uint32_t(value[1])<<8)|(std::uint32_t(value[2])<<16)|(std::uint32_t(value[3])<<24);}
struct Resources {
    const eb::GameAssets& assets;
    std::shared_ptr<native::SpriteResources> sprites;
    std::shared_ptr<const native::ActionScriptData> scripts;
    std::shared_ptr<const dialogue::Program> program;
    std::shared_ptr<const npcs::InteractionResources> interactions;
    std::shared_ptr<const npcs::MapTextResources> maps;
    native::ActorCreationData creation;
    native::WorldMap map;
    native::WorldCollision collision;
    explicit Resources(const eb::GameAssets& a):assets(a),sprites(std::make_shared<native::SpriteResources>(a.image,native::sprite_catalog_layout(a.version))),
        scripts(native::import_action_scripts(a.image,a.version)),program(dialogue::import_program(a.image,a.version).program),
        interactions(npcs::InteractionResources::import(a.image,a.version)),maps(npcs::MapTextResources::import(a.image,a.version)),
        creation(native::import_actor_creation_data(a.image,a.version)),map(a.image,native::world_map_layout(a.version)),collision(a.image,native::world_collision_layout(a.version)){}
};
unsigned raster(const Source& source,unsigned word,unsigned x,unsigned y){
    if(word&0x4000)x=7-x;
    if(word&0x8000)y=7-y;
    const auto at=(0xc000+(word&1023)*16+y*2)&65535;
    const unsigned color=((source.bus->video_ram[at]>>(7-x))&1)|(((source.bus->video_ram[(at+1)&65535]>>(7-x))&1)<<1);
    return color?color+((word>>10)&7)*4:0;
}
struct Pair {
    Resources& resources;OriginalInteractions original;dialogue::State state;party::State party;
    std::shared_ptr<const dialogue::FontResources> fonts;dialogue::TextOutput output;dialogue::WindowHost windows;dialogue::PromptHost prompts;
    std::shared_ptr<dialogue::WindowGraphics> graphics;native::WorldMapArea area;native::ActorWorld world;npcs::Interactions talk;
    npcs::InteractionAction action;
    std::array<std::optional<native::ActorId>,30> ids;std::array<unsigned,30> sprites{};std::string context;
    explicit Pair(Resources& r,const InteractionCase& c,npcs::InteractionAction kind=npcs::InteractionAction::Talk):resources(r),original(r.assets,kind),party(r.assets.version),fonts(dialogue::FontResources::import(r.assets.image,r.assets.version)),
        output(fonts,state),windows(dialogue::WindowResources::import(r.assets.image,r.assets.version),state,output),prompts(windows),
        area(r.map.prepare(c.combination,state.event_flags)),world(r.sprites,r.scripts,r.assets.version),
        talk(r.interactions,r.maps,r.program,windows,world,r.collision,area),action(kind),context((r.assets.version==eb::GameVersion::US?"US ":"JP ")+c.name){
        const bool us=r.assets.version==eb::GameVersion::US;state.unfocused_register_slot=0;windows.bind_party(party);
        graphics=std::make_shared<dialogue::WindowGraphics>(dialogue::WindowInitializationResources::import(r.assets.image,r.assets.version),output);windows.set_graphics(graphics);
        const std::array<std::uint8_t,5> name{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43),std::uint8_t(us?0x74:0x44),0};
        dialogue::PartyNameInputs names;for(auto& n:names.names)n=name;graphics->prepare(names,1);
        auto publication=graphics->begin_publication(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
        while(publication->advance()==dialogue::Progress::Suspended)publication->respond();
        require(publication->complete(),context+" artwork publication unfinished");windows.publish_palette(1,false,false);
        party.party_order={1,2,3,4,5,6};party.controlled_order={0,1,2,3,4,5};party.party_count=std::uint8_t(c.party_count);party.controlled_count=std::uint8_t(c.party_count);
        for(unsigned i=0;i<6;++i){auto field=party.name_field(i+1);std::copy_n(name.begin(),field.size(),field.begin());}
        original.seed(c);
        ActorInput leader;leader.slot=23;leader.npc=0x8000;leader.sprite=1;leader.x=c.x;leader.y=c.y;leader.direction=c.leader_direction;leader.animation=c.leader_phase;attach(leader);
        // Reverse creation to prove explicit precedence, not allocation order.
        for(auto i=c.actors.rbegin();i!=c.actors.rend();++i)attach(*i);
        auto& s=talk.state();s.leader=*ids[23];s.leader_x=c.x;s.leader_y=c.y;s.leader_direction=c.global_direction;s.movement_flags=c.movement;s.walking_style=c.walking;s.demo_frames=c.demo;
        s.interacting_npc=0x2345;s.checked_surface_origin={0x6789,0x89ab};s.surface_flags=0x4567;s.map_text={0x8888,0x9999,0xabcd,key(0x12345678)};
        world.appearance_scene().intangibility_ticks=c.intangibility;
        if(c.full_windows)for(unsigned i=0;i<8;++i)open(i==1?9:i);else if(c.preopen)open(1);
    }
    void attach(const ActorInput& input){
        native::WorldActorSpec spec;spec.sprite=input.sprite;spec.script=input.script==0xffff?8:input.script;
        spec.action.position={std::uint32_t((input.x<<16)|0x1234),std::uint32_t((input.y<<16)|0x5678),0x0011abcd};spec.action.velocity=input.velocity;spec.action.animation=input.animation;spec.action.alive=true;
        spec.behavior.direction=input.direction;spec.behavior.surface_flags=input.surface;spec.behavior.collision_object=input.marker==0x8000?-32768:-1;
        spec.appearance_context.shape=resources.sprites->definition(input.sprite).shape;
        const auto id=world.create(spec);world.actor(id).action().alive=input.script!=0xffff;ids[input.slot]=id;sprites[input.slot]=input.sprite;
        talk.attach(id,input.slot,native::actor_creation_metadata(*resources.sprites,resources.creation,input.sprite),std::uint16_t(input.npc));
        auto& shape=talk.body(id);shape.hitbox_enabled=input.enabled;shape.lateral={std::uint16_t(input.lrwidth),std::uint16_t(input.lrheight)};shape.vertical={std::uint16_t(input.udwidth),std::uint16_t(input.udheight)};
    }
    void open(unsigned id){auto operation=windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{id},{},0});while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();require(operation->complete(),"Initial native window did not open");}
    std::optional<native::ActorId> source_actor(unsigned slot)const{return slot==0xffff?std::nullopt:ids.at(slot);}
    void compare_windows(){
        auto& source=original.source;require((state.focus?state.focus->value:65535)==source.get(source.p.focus),context+" focus differs");
        std::vector<unsigned> order;for(unsigned slot=source.get(source.p.head);slot!=0xffff;slot=source.get(source.record(slot)+2)){require(order.size()<8,"Source window list cycle");order.push_back(slot);}
        const auto native_order=windows.draw_order();require(order.size()==native_order.size(),context+" window count differs");
        for(unsigned i=0;i<order.size();++i)require(windows.slot_for(native_order[i])==order[i],context+" window order differs");
        for(unsigned slot:order){const auto at=source.record(slot);const auto& n=windows.slot(slot);const auto& text=windows.slot_output(slot);const auto& regs=state.registers_at(slot).active;
            require(n.id&&n.id->value==source.get(at+4),context+" window identity differs");
            require(text.cursor.column==source.get(at+14)&&text.cursor.line==source.get(at+16),context+" cursor differs");
            require(regs.working==source.get32(at+23)&&regs.argument==source.get32(at+27)&&regs.secondary==source.get(at+31),context+" text registers differ");
            require(text.style.font==source.get(at+21),context+" font differs");++counts.state_checks;
        }
        require(output.redraw_pending()==bool(source.bus->work_ram[source.p.redraw]),context+" redraw differs");
    }
    void compare(){
        auto& source=original.source;const auto& p=original.a;const auto& s=talk.state();
        require(s.interacting_npc==source.get(p.interaction_npc),context+" interacting NPC differs");
        require(s.interacting_actor==source_actor(source.get(p.interaction_entity)),context+" interacting actor differs");
        require(s.collision_actor==source_actor(source.get(p.collided+46)),context+" collision result differs");
        require(s.leader_direction==source.get(original.game(138)),context+" global leader direction differs");
        require(world.appearance_scene().intangibility_ticks==source.get(p.intangible),context+" intangibility restore differs");
        require(s.checked_surface_origin.x==source.get(p.checked_x)&&s.checked_surface_origin.y==source.get(p.checked_y)&&s.surface_flags==source.get(p.checked_flags),context+" checked surface differs");
        require(s.map_text.door_found==source.get(p.door)&&s.map_text.door_found_type==source.get(p.door_type)&&s.map_text.unread_type==source.get(p.unread)&&reference_value(s.map_text.text)==source.get32(p.text),context+" map lookup residue differs");
        for(unsigned slot=0;slot<ids.size();++slot)if(ids[slot]){const unsigned off=slot*2;const auto& actor=world.actor(*ids[slot]);
            require(actor.behavior.direction==source.get(p.direction+off)&&actor.action().animation==source.get(p.animation+off),context+" actor facing/phase differs slot="+std::to_string(slot));
            for(unsigned axis=0;axis<3;++axis){const std::array<unsigned,3> pos{p.x,p.y,p.z},frac{p.xf,p.yf,p.zf},vel{p.vx,p.vy,p.vz},vf{p.vxf,p.vyf,p.vzf};
                require(actor.action().position[axis]==((std::uint32_t(source.get(pos[axis]+off))<<16)|source.get(frac[axis]+off))&&actor.action().velocity[axis]==((std::uint32_t(source.get(vel[axis]+off))<<16)|source.get(vf[axis]+off)),context+" fixed-point actor state differs");}
            if(actor.appearance.displayed()){const auto pose=*actor.appearance.displayed();const auto group=original.pointer(p.sprite_groups+sprites[slot]*4);require(source.get(p.displayed+off)==original.rom(group+9+pose.pose*2),context+" original displayed pose differs");}
            else require(source.get(p.displayed+off)==0xbeef,context+" source refreshed an unrefreshed native actor");
            require(source.get(p.fingerprint+off)==0x8bad,context+" Interaction unexpectedly changed animation fingerprint");++counts.state_checks;
        }
        compare_windows();
    }
    void respond(Effect effect){
        if(effect==Effect::World||effect==Effect::Tick||effect==Effect::Frame){original.source.put(0x6d,0x80);prompts.state().pressed=0x80;}
        original.source.respond();++counts.effects;
    }
    static bool matches(const dialogue::WindowEffect& effect,Effect source){return (effect.kind==dialogue::WindowEffectKind::ClearPartyBlink&&source==Effect::Blink)||(effect.kind==dialogue::WindowEffectKind::WindowTick&&source==Effect::Tick)||(effect.kind==dialogue::WindowEffectKind::FrameWait&&source==Effect::Frame);}
    npcs::InteractionSelection run(unsigned budget){
        original.source.begin(original.a.talk,true);auto operation=talk.begin(action);
        for(unsigned n=0;n<100000;++n){const auto progress=operation->advance(budget);if(progress==dialogue::Progress::BudgetExhausted)continue;
            const auto expected=original.source.advance();
            if(progress==dialogue::Progress::Finished){require(!expected&&!original.source.busy,context+" native returned before original");
                require(reference_value(operation->selection().reference)==original.result(),context+" returned authored reference differs");compare();++counts.talks;++counts.cases;return operation->selection();}
            require(expected&&operation->effect()&&matches(*operation->effect(),*expected),context+" interaction window effect order differs");
            compare_windows();require(original.directions.empty()&&talk.state().interacting_npc==0x2345&&original.source.get(original.a.interaction_npc)==0x2345,context+" search ran before window effect completed");require(operation->advance(1)==dialogue::Progress::Suspended,context+" pending window effect advanced");respond(*expected);operation->respond();
        }throw std::runtime_error(context+" interaction did not finish bounded valid case");
    }
    void display(const npcs::InteractionSelection& selection){
        require(selection.text.has_value(),context+" selected NPC has no authored text");auto& source=original.source;
        source.put32(source.expected_dp+14,reference_value(selection.reference));source.begin(source.p.display,true);dialogue::Conversation conversation(resources.program,prompts);conversation.start(*selection.text);
        for(unsigned n=0;n<500000;++n){const auto progress=conversation.advance(n&1?1:4096);if(progress==dialogue::Progress::BudgetExhausted)continue;const auto expected=source.advance();
            if(progress==dialogue::Progress::Finished){require(!expected&&!source.busy,context+" native dialogue finished before original");compare_windows();require(conversation.snapshot().returned_cursor==resources.program->resolve(key(source.get32(source.expected_dp+6))),context+" returned original dialogue cursor differs");
                require(state.stream_slot==source.get(source.p.stream_count),context+" returned stream nesting counter differs");
                require(std::equal(state.event_flags.begin(),state.event_flags.end(),source.bus->work_ram.begin()+original.a.events),context+" authored event flags differ");++counts.cursor_checks;++counts.streams;return;}
            require(expected&&conversation.event(),context+" dialogue event count differs");bool match=false;
            if(const auto* e=std::get_if<dialogue::TextEffect>(&*conversation.event()))match=(*expected==Effect::Tick&&e->kind==dialogue::TextEffectKind::WindowTick)||(*expected==Effect::Sound&&e->kind==dialogue::TextEffectKind::TextSound);
            else if(const auto* e=std::get_if<dialogue::WindowEffect>(&*conversation.event()))match=matches(*e,*expected);
            else if(const auto* e=std::get_if<dialogue::PromptEffect>(&*conversation.event()))match=*expected==Effect::World&&e->kind==dialogue::PromptEffectKind::WorldTick;
            require(match,context+" imported dialogue requires an unimplemented or mismatched service");compare_windows();respond(*expected);conversation.respond({0,0x80,0});
        }throw std::runtime_error(context+" imported dialogue did not return");
    }
    void caller_pause_resume(){
        auto& source=original.source;const unsigned delta=source.version==eb::GameVersion::JP?10:0;
        std::vector<unsigned> slots;for(unsigned i=0;i<ids.size();++i)if(ids[i])slots.push_back(i);
        const auto link=[&]{source.put(0x0a50-delta,slots.empty()?0xffff:slots.front()*2);for(unsigned i=0;i<slots.size();++i)source.put(0x0a9e - delta+slots[i]*2,i+1==slots.size()?0xffff:slots[i+1]*2);};
        link();for(unsigned i=0;i<slots.size();++i){const unsigned flags=0x00c0|(i&1?0x4000:0x8000);source.put(0x10b6-delta+slots[i]*2,flags);auto& actor=world.actor(*ids[slots[i]]);actor.scripts_and_physics_enabled=!(flags&0x4000);actor.tick_callback_enabled=!(flags&0x8000);}
        source.call(source.version==eb::GameVersion::US?0xc0943c:0xc0941b,true);talk.set_actors_paused(true);++counts.caller_pause_calls;
        for(unsigned slot:slots){const auto& actor=world.actor(*ids[slot]);require(source.get(0x10b6-delta+slot*2)==0xc0c0&&!actor.scripts_and_physics_enabled&&!actor.tick_callback_enabled,context+" caller pause differs");}
        // Current traversal, not a saved mask: remove the first candidate and
        // append an explicitly paused newcomer before the real resume helper.
        const unsigned removed=slots.front();world.erase(*ids[removed]);ids[removed].reset();slots.erase(slots.begin());
        ActorInput newcomer;newcomer.slot=2;newcomer.npc=0x8000;newcomer.sprite=1;original.actor(newcomer);attach(newcomer);slots.push_back(2);link();
        source.put(0x10b6-delta+4,0xc0c0);world.actor(*ids[2]).scripts_and_physics_enabled=false;world.actor(*ids[2]).tick_callback_enabled=false;
        source.call(source.version==eb::GameVersion::US?0xc09451:0xc09430,true);talk.set_actors_paused(false);++counts.caller_pause_calls;
        for(unsigned slot:slots){const auto& actor=world.actor(*ids[slot]);require(source.get(0x10b6-delta+slot*2)==0x00c0&&actor.scripts_and_physics_enabled&&actor.tick_callback_enabled,context+" caller resume did not use current actor traversal");}
        require(source.get(0x10b6-delta+removed*2)==0xc0c0,context+" original resume changed removed actor");
    }
    void image(bool require_ink=true){
        auto& source=original.source;source.call(source.p.draw_all,true);windows.draw_windows();source.put32(source.cpu.direct_page+14,0x7e0000|source.p.scene);source.call(0xc08616,true,0,0x700,0x7c00);windows.publish_scene();
        const auto frame=windows.frame();require(frame->width==256&&frame->height==224,context+" scene dimensions differ");
        for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x){const unsigned at=0xf800+((y/8)*32+x/8)*2,word=source.bus->video_ram[at]|unsigned(source.bus->video_ram[at+1])<<8,color=raster(source,word,x%8,y%8),pixel=y*256+x;
            require(frame->pixels[pixel]==color&&frame->priority[pixel]==(color?bool(word&0x2000):false),context+" original scene pixels differ at "+std::to_string(pixel));++counts.pixels;}
        auto display=std::make_unique<eb::SnesBus>(std::span(eb::rom_data(source.version),eb::rom_size(source.version)),source.version);display->video_ram=source.bus->video_ram;std::copy_n(source.bus->work_ram.begin()+0x200,64,display->palette_ram.begin());
        display->write_byte(0x2100,15);display->write_byte(0x2105,1);display->write_byte(0x2109,0x7c);display->write_byte(0x210c,6);display->write_byte(0x212c,4);display->write_byte(0x2112,255);display->write_byte(0x2112,255);while(display->completed_frames<2)display->advance_cpu_cycles(1000);
        unsigned ink=0;const auto expand=[](unsigned c){return(c<<3)|(c>>2);};
        for(unsigned i=0;i<256*224;++i){const unsigned color=windows.palette()[frame->pixels[i]],rgba=0xff000000u|(expand(color&31)<<16)|(expand((color>>5)&31)<<8)|expand((color>>10)&31);require(display->native_framebuffer[i]==rgba,context+" original software PPU differs");ink+=color!=0;++counts.ppu_pixels;}require(!require_ink||ink,context+" final image proof is blank");
    }
};

} // namespace interaction_reference
