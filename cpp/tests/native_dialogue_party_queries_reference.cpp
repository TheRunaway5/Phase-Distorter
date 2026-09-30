// Independent original DISPLAY_TEXT party-query/meter-show reference. The
// original regional instruction stream computes every expected register and
// image; native query helpers never compute an expected answer. Only copied
// asset-image bytes in test bank EE hold synthetic authored scripts. Real
// C200D9/C43317/LOAD_WINDOW_GFX prepare window records, pointers and artwork.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/meter_windows.hpp"
#include "eb/native/party/queries.hpp"
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

namespace {
namespace dialogue=eb::native::dialogue;
namespace party=eb::native::party;
void require(bool ok,const std::string& why){if(!ok)throw std::runtime_error(why);}
struct Counts {std::uint64_t instructions{},calls{},streams{},cases{},snapshots{},register_words{},effects{},pixels{},ppu_pixels{},nested{},timing_probes{},show_cases{},prefixes{},publication_probes{},read_order_checks{};} counts;
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
enum class Effect {Tick,Frame,Sound,Blink};
class Source {
  public:
    eb::GameVersion version;Layout p;std::unique_ptr<eb::SnesBus> bus;eb::MainCpu65816 cpu;
    bool busy{};std::optional<Effect> pending;unsigned returning{},expected_stack=0x1fff,expected_dp=0x1e00;
    std::function<void(unsigned)> observe;
    struct Saved {unsigned returning,stack,dp,caller_stack,caller_dp;std::vector<std::uint8_t> locals,callers;};
    std::optional<Saved> saved;
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
            if(cpu.program_counter==returning&&cpu.stack_pointer==expected_stack){require(cpu.direct_page==expected_dp&&cpu.data_bank==0x7e,"Original return ABI differs");busy=false;return {};}
            const auto pc=cpu.program_counter;if(observe)observe(pc);
            if(pc==p.tick||pc==p.wait||pc==p.sound||pc==p.blink){pending=pc==p.tick?Effect::Tick:pc==p.wait?Effect::Frame:pc==p.sound?Effect::Sound:Effect::Blink;return pending;}
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
    void enter_child(unsigned offset){
        require(busy&&pending==Effect::Tick&&!saved,"Nested dialogue lacks a real tick parent");
        saved=Saved{returning,expected_stack,expected_dp,cpu.stack_pointer,cpu.direct_page,{},{}};
        saved->locals.assign(bus->work_ram.begin()+cpu.direct_page,bus->work_ram.begin()+0x1e12);
        saved->callers.assign(bus->work_ram.begin()+cpu.stack_pointer+1,bus->work_ram.begin()+0x2000);pending.reset();
        cpu.execute_instruction<0xc2>(0x31,2);cpu.execute_instruction<0x0b>(0,1);cpu.execute_instruction<0x7b>(0,1);cpu.execute_instruction<0x69>(0xffee,3);cpu.execute_instruction<0x5b>(0,1);
        expected_stack=cpu.stack_pointer;expected_dp=cpu.direct_page;put32(cpu.direct_page+14,0xee0000|offset);
        cpu.program_counter=0xc1ff80;returning=0xc1ff84;cpu.execute_instruction<0x22>(p.display,4);
    }
    void leave_child(){
        require(!busy&&!pending&&saved,"Nested source stream did not return");const auto old=std::move(*saved);saved.reset();cpu.execute_instruction<0x2b>(0,1);
        require(cpu.stack_pointer==old.caller_stack&&cpu.direct_page==old.caller_dp,"Child changed caller stack/direct page");
        require(std::equal(old.locals.begin(),old.locals.end(),bus->work_ram.begin()+old.caller_dp)&&std::equal(old.callers.begin(),old.callers.end(),bus->work_ram.begin()+old.caller_stack+1),"Child changed parent live locals/stack");
        returning=old.returning;expected_stack=old.stack;expected_dp=old.dp;cpu.program_counter=p.tick;busy=true;pending=Effect::Tick;
    }
};
struct Script {std::vector<std::uint8_t> bytes;unsigned offset{};};
struct Content {
    std::vector<std::uint8_t> bytes=std::vector<std::uint8_t>(65536,2);unsigned next=0x1000;
    Script add(std::vector<std::uint8_t> text){require(next+text.size()<0xff00,"Synthetic script bank full");Script result{std::move(text),next};std::copy(result.bytes.begin(),result.bytes.end(),bytes.begin()+next);next+=unsigned(result.bytes.size()+8);return result;}
    eb::GameAssets install(const eb::GameAssets& a)const{auto result=a;std::copy(bytes.begin(),bytes.end(),result.image.begin()+0x2e0000);return result;}
    std::shared_ptr<const dialogue::Program> program(eb::GameVersion v)const{return std::make_shared<dialogue::Program>(v,std::vector<dialogue::ContentBlock>{{1,0,bytes}});}
};
unsigned raster(const Source& s,unsigned word,unsigned x,unsigned y){if(word&0x4000)x=7-x;if(word&0x8000)y=7-y;const auto at=(0xc000+(word&1023)*16+y*2)&65535;const unsigned color=((s.bus->video_ram[at]>>(7-x))&1)|(((s.bus->video_ram[(at+1)&65535]>>(7-x))&1)<<1);return color?color+((word>>10)&7)*4:0;}
struct Pair {
    Source source;dialogue::State state;party::State members;
    std::shared_ptr<const dialogue::FontResources> fonts;dialogue::TextOutput output;dialogue::WindowHost host;
    std::shared_ptr<dialogue::WindowGraphics> graphics;party::MeterWindows meters;
    std::shared_ptr<const dialogue::Program> program;std::string context;
    std::function<void(Effect)> at_effect;std::function<void()> source_mutation,native_mutation;
    unsigned mutation_handler{},mutation_consumed{};bool source_changed{},native_changed{};std::vector<char> read_order;
    Pair(const eb::GameAssets& assets,const Content& content):source(assets),members(assets.version),fonts(dialogue::FontResources::import(assets.image,assets.version)),
        output(fonts,state),host(dialogue::WindowResources::import(assets.image,assets.version),state,output),
        meters(host,members,party::MeterWindowResources::import(assets.image,assets.version)),program(content.program(assets.version)),context(assets.version==eb::GameVersion::US?"US":"JP"){
        const bool us=source.version==eb::GameVersion::US;host.bind_party(members);state.unfocused_register_slot=0;
        graphics=std::make_shared<dialogue::WindowGraphics>(dialogue::WindowInitializationResources::import(assets.image,assets.version),output);host.set_graphics(graphics);
        const std::array<std::uint8_t,5> name{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43),std::uint8_t(us?0x74:0x44),0};
        dialogue::PartyNameInputs names;for(auto& n:names.names)n=name;graphics->prepare(names,1);
        auto publication=graphics->begin_publication(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
        while(publication->advance()==dialogue::Progress::Suspended)publication->respond();
        require(publication->complete(),"Native artwork publication unfinished");host.publish_palette(1,false,false);
        members.party_order={1,2,3,4,5,6};members.controlled_order={0,1,2,3,4,5};members.party_count=4;members.controlled_count=4;
        for(unsigned i=0;i<6;++i){auto field=members.name_field(i+1);std::copy_n(name.begin(),field.size(),field.begin());auto& c=members.character(i+1);c.maximum_hp=200;c.maximum_pp=100;c.current_hp=c.target_hp=100+i;c.current_pp=c.target_pp=50+i;}
        synchronize_party();
    }
    void synchronize_party(){
        const bool us=source.version==eb::GameVersion::US;const auto game=source.p.game;
        source.byte(game+(us?174:171),members.party_count);source.byte(game+(us?175:172),members.controlled_count);source.byte(game+(us?75:72),members.party_status);
        for(unsigned i=0;i<6;++i){source.byte(game+(us?122:119)+i,members.party_order[i]);source.byte(game+(us?150:147)+i,members.display_order[i]);source.byte(game+(us?156:153)+i,members.controlled_order[i]);
            for(unsigned g=0;g<7;++g)source.byte(source.p.characters+i*source.p.stride+(us?14:13)+g,members.character(i+1).afflictions[g]);}
    }
    void open(unsigned id){source.call(source.p.create,false,id);dialogue::WindowCommand command;command.action=dialogue::WindowAction::Open;command.id=dialogue::WindowId{id};auto operation=host.begin(command);while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();require(operation->complete(),"Native open unfinished");}
    void close(unsigned id){source.call(source.p.close,source.version==eb::GameVersion::US,id);dialogue::WindowCommand command;command.action=dialogue::WindowAction::Close;command.id=dialogue::WindowId{id};auto operation=host.begin(command);while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();require(operation->complete(),"Native close unfinished");}
    void focus(unsigned id){source.put(source.p.focus,id);state.focus=dialogue::WindowId{id};}
    void absent(unsigned slot){source.put(source.p.focus,65535);source.put(source.p.open+0xfffe,slot);state.focus.reset();state.unfocused_register_slot=slot;}
    void bank(unsigned slot,std::uint32_t working,std::uint32_t argument,unsigned secondary=0x9876){
        auto& regs=slot==8?state.dummy.active:state.registers_at(slot).active;regs={working,argument,std::uint16_t(secondary)};
        const auto at=slot==8?source.p.dummy:source.record(slot);source.put32(at+23,working);source.put32(at+27,argument);source.put(at+31,secondary);
    }
    void seed_banks(std::uint32_t working,std::uint32_t argument){for(unsigned i=0;i<9;++i)bank(i,working,argument,0x1200+i);}
    void compare(const std::string& where){
        const auto label=context+" "+where;
        require((state.focus?state.focus->value:65535)==source.get(source.p.focus),label+" focus differs");
        require(state.stream_slot==source.get(source.p.stream_count),label+" stream counter differs");
        for(unsigned i=0;i<9;++i){const auto& r=i==8?state.dummy.active:state.registers_at(i).active;const auto at=i==8?source.p.dummy:source.record(i);
            require(r.working==source.get32(at+23)&&r.argument==source.get32(at+27)&&r.secondary==source.get(at+31),label+" bank="+std::to_string(i)+" native="+std::to_string(r.working)+" original="+std::to_string(source.get32(at+23)));counts.register_words+=5;}
        const auto& m=meters.state();require(m.render==source.bus->work_ram[source.p.render]&&m.drawn_mask==source.get(source.p.mask)&&m.selected_phase==source.get(source.p.selected)&&m.area_dirty==source.get(source.p.dirty)&&m.upload==source.bus->work_ram[source.p.upload],label+" meter flags differ");
        require(output.redraw_pending()==bool(source.bus->work_ram[source.p.redraw]),label+" redraw differs");++counts.snapshots;
    }
    void final_image(){
        source.call(source.p.draw_all,true);if(meters.state().render)meters.draw_all();host.draw_windows();
        source.put32(source.cpu.direct_page+14,0x7e0000|source.p.scene);source.call(0xc08616,true,0,0x700,0x7c00);host.publish_scene();
        const auto frame=host.frame();require(frame->width==256&&frame->height==224,"Published dimensions differ");
        for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x){const unsigned cell=(y/8)*32+x/8,at=0xf800+cell*2,word=source.bus->video_ram[at]|unsigned(source.bus->video_ram[at+1])<<8,color=raster(source,word,x%8,y%8),pixel=y*256+x;
            require(frame->pixels[pixel]==color&&frame->priority[pixel]==(color?bool(word&0x2000):false),context+" source-derived scene pixel differs at "+std::to_string(pixel));++counts.pixels;}
        auto display=std::make_unique<eb::SnesBus>(std::span(eb::rom_data(source.version),eb::rom_size(source.version)),source.version);display->video_ram=source.bus->video_ram;std::copy_n(source.bus->work_ram.begin()+0x200,64,display->palette_ram.begin());
        display->write_byte(0x2100,15);display->write_byte(0x2105,1);display->write_byte(0x2109,0x7c);display->write_byte(0x210c,6);display->write_byte(0x212c,4);display->write_byte(0x2112,255);display->write_byte(0x2112,255);while(display->completed_frames<2)display->advance_cpu_cycles(1000);
        const auto expand=[](unsigned c){return(c<<3)|(c>>2);};unsigned ink=0;
        for(unsigned i=0;i<256*224;++i){const unsigned color=host.palette()[frame->pixels[i]],rgba=0xff000000u|(expand(color&31)<<16)|(expand((color>>5)&31)<<8)|expand((color>>10)&31);require(display->native_framebuffer[i]==rgba,context+" original PPU differs");ink+=color!=0;++counts.ppu_pixels;}require(ink,"Published meter/window image comparison is blank");
    }
    void run(const Script& script,const Script* child=nullptr,unsigned budget=1){
        dialogue::Conversation parent(program,host);source.put32(0x1e0e,0xee0000|script.offset);source.begin(source.p.display,true);parent.start(dialogue::Location{1,std::uint16_t(script.offset)});
        source_changed=native_changed=false;read_order.clear();source.observe=[&](unsigned pc){if(pc==source.p.get_argument)read_order.push_back('A');if(pc==source.p.get_working)read_order.push_back('W');if(source_mutation&&!source_changed&&pc==mutation_handler){source_mutation();source_changed=true;}};
        bool entered=false;
        std::function<void(dialogue::Conversation&,const Script&,bool)> drive=[&](dialogue::Conversation& current,const Script& active,bool nested){
            std::optional<Effect> expected;bool fetched=false;
            const auto next_original=[&](){if(!fetched){expected=source.advance();fetched=true;}return expected;};
            for(unsigned n=0;n<100000;++n){
                if(native_mutation&&!native_changed&&current.snapshot().consumed_bytes==mutation_consumed){native_mutation();native_changed=true;}
                const auto progress=current.advance(budget);if(progress==dialogue::Progress::BudgetExhausted)continue;
                if(progress==dialogue::Progress::Finished){require(!next_original()&&!source.busy,context+" native finished before original effect");
                    require(current.snapshot().returned_cursor==dialogue::Location{1,std::uint16_t(active.offset+active.bytes.size())}&&source.get32(source.expected_dp+6)==(0xee0000|std::uint16_t(active.offset+active.bytes.size())),context+" returned stream cursor differs");compare("whole DISPLAY return");++counts.streams;return;}
                require(bool(current.event()),"Suspended conversation lost event");const auto event=*current.event();
                if(const auto* request=std::get_if<dialogue::Request>(&event);request&&request->kind==dialogue::RequestKind::ShowMeters){
                    auto operation=meters.begin_show();while(operation->advance()==dialogue::OutputProgress::Suspended){require(operation->effect()->kind==dialogue::WindowEffectKind::FrameWait&&next_original()==Effect::Frame,context+" SHOW meter frame order differs");compare("meter selection clear wait");if(at_effect)at_effect(Effect::Frame);source.respond();fetched=false;operation->respond();++counts.effects;}
                    require(operation->complete(),"Native show did not finish");current.respond();continue;
                }
                if(const auto* window=std::get_if<dialogue::WindowEffect>(&event);window&&window->kind==dialogue::WindowEffectKind::HideMeters){
                    auto operation=meters.begin_hide(host.prompt_state().battle_mode!=0);while(operation->advance()==dialogue::OutputProgress::Suspended){require(operation->effect()->kind==dialogue::WindowEffectKind::FrameWait&&next_original()==Effect::Frame,context+" HIDE meter frame order differs");if(at_effect)at_effect(Effect::Frame);source.respond();fetched=false;operation->respond();++counts.effects;}
                    require(operation->complete(),"Native hide did not finish");current.respond();continue;
                }
                const auto wanted=next_original();require(bool(wanted),context+" native produced extra external effect");
                if(const auto* e=std::get_if<dialogue::TextEffect>(&event))require((*wanted==Effect::Tick&&e->kind==dialogue::TextEffectKind::WindowTick)||(*wanted==Effect::Sound&&e->kind==dialogue::TextEffectKind::TextSound),context+" text effect order differs");
                else if(const auto* e=std::get_if<dialogue::WindowEffect>(&event))require((*wanted==Effect::Tick&&e->kind==dialogue::WindowEffectKind::WindowTick)||(*wanted==Effect::Frame&&e->kind==dialogue::WindowEffectKind::FrameWait)||(*wanted==Effect::Blink&&e->kind==dialogue::WindowEffectKind::ClearPartyBlink),context+" window effect order differs");
                else throw std::runtime_error(context+" query or other authored request remained unresolved");
                compare("external boundary");require(current.advance(1)==dialogue::Progress::Suspended&&current.event()==event,"Pending external effect repeated work");
                if(at_effect)at_effect(*wanted);
                if(child&&!nested&&!entered&&*wanted==Effect::Tick){
                    entered=true;source.enter_child(child->offset);dialogue::Conversation nested_text(program,host);nested_text.start_nested(dialogue::Location{1,std::uint16_t(child->offset)},current);drive(nested_text,*child,true);source.leave_child();compare("restored caller");require(current.event()==event,"Child lost parent's pending tick");++counts.nested;
                }
                source.respond();fetched=false;current.respond();++counts.effects;
            }throw std::runtime_error(context+" native stream exceeded bound");
        };drive(parent,script,false);source.observe={};require(!child||entered,"Nested corpus never entered child");
        if(source_mutation||native_mutation){require(source_changed&&native_changed,"Late-sampling probe did not exercise both hooks");++counts.timing_probes;}
        if(script.bytes.size()>=3 && (script.bytes[0]==0x19||script.bytes[0]==0x1d)){
            std::vector<char> expected;
            if(script.bytes[0]==0x19&&script.bytes[1]==0x10&&script.bytes[2]==0)expected.push_back('A');
            if((script.bytes[0]==0x19&&script.bytes[1]==0x16)||(script.bytes[0]==0x1d&&script.bytes[1]==0x0d)){
                if(script.bytes[3]==0)expected.push_back('A');
                if(script.bytes[2]==0)expected.push_back('W');
            }
            require(read_order==expected,context+" original register fallback access order differs");++counts.read_order_checks;
        }
        ++counts.cases;
    }
};
struct QueryCase {Script script;std::uint32_t working{},argument{};unsigned raw{},count=6;};
void seed_query_party(Pair& pair,unsigned raw,unsigned count=6){
    pair.members.party_order={6,2,5,1,3,4};pair.members.display_order={255,0,6,2,1,4};pair.members.party_count=std::uint8_t(count);pair.members.controlled_count=std::uint8_t(raw);pair.members.party_status=std::uint8_t(raw);
    for(unsigned id=1;id<=6;++id)for(auto& group:pair.members.character(id).afflictions)group=std::uint8_t(raw);
    pair.synchronize_party();
}
void query_cases(const eb::GameAssets& original){
    Content content;std::vector<QueryCase> cases;
    for(unsigned position=1;position<=6;++position)for(bool fallback:{false,true})cases.push_back({content.add({0x19,0x10,std::uint8_t(fallback?0:position),2}),0xdeadbeef,0xabcd0000u|position,255});
    for(unsigned raw:{0u,1u,2u,127u,255u}){
        cases.push_back({content.add({0x19,0x20,2}),0xffffffff,0x12345678,raw});
        for(unsigned character:{1u,2u,5u,6u,7u,255u})for(unsigned group=1;group<=8;++group)for(bool fallback:{false,true}){
            const auto a=std::uint8_t(fallback?0:character),b=std::uint8_t(fallback?0:group);
            cases.push_back({content.add({0x19,0x16,a,b,2}),0xbeef0000u|character,0xcafe0000u|group,raw,3});
            if(group==1||group==8)for(unsigned expected:{0u,1u,2u,255u})cases.push_back({content.add({0x1d,0x0d,a,b,std::uint8_t(expected),2}),0xbeef0000u|character,0xcafe0000u|group,raw,3});
        }
    }
    for(unsigned raw:{0u,255u})for(unsigned character:{1u,6u})for(unsigned group:{1u,8u}){
        cases.push_back({content.add({0x19,0x16,0,std::uint8_t(group),2}),0xaaaa0000u|character,0xbbbb0007,raw,6});
        cases.push_back({content.add({0x19,0x16,std::uint8_t(character),0,2}),0xaaaa0005,0xbbbb0000u|group,raw,6});
    }
    // Malformed count bytes still allow a source-owned early membership hit:
    // character6 is the first list byte, so neither implementation overreads.
    for(unsigned count:{7u,255u})for(unsigned group:{1u,8u})cases.push_back({content.add({0x19,0x16,6,std::uint8_t(group),2}),0xaaaaaaaa,0xbbbbbbbb,255,count});
    // Fullword fallbacks retain identity, including group8's unconditional path.
    for(unsigned character:{0u,0x100u,0xffffu})for(unsigned group:{1u,8u})cases.push_back({content.add({0x19,0x16,0,0,2}),0x12340000u|character,0xabcd0000u|group,255,6});
    Pair pair(content.install(original),content);pair.open(1);pair.open(2);pair.focus(1);
    unsigned index=0;for(const auto& c:cases){pair.context=(original.version==eb::GameVersion::US?"US":"JP")+std::string(" query=")+std::to_string(index);seed_query_party(pair,c.raw,c.count);pair.seed_banks(c.working,c.argument);pair.run(c.script,nullptr,index%2?1:4096);++index;}
    std::cout<<(original.version==eb::GameVersion::US?"US":"JP")<<" complete query streams="<<cases.size()<<'\n';
}
void bank_cases(const eb::GameAssets& original){
    Content content;const auto query=content.add({0x19,0x16,0,0,2});
    for(unsigned mode=0;mode<5;++mode){Pair pair(content.install(original),content);pair.context+=" bank-mode="+std::to_string(mode);seed_query_party(pair,255);pair.seed_banks(0xbeef0001,0xcafe0008);
        if(mode){pair.open(1);pair.open(2);pair.seed_banks(0xbeef0001,0xcafe0008);}
        if(mode==1)pair.focus(1);
        if(mode==2)pair.focus(2);
        if(mode==3)pair.absent(0);
        if(mode==4){pair.close(1);pair.absent(0);}
        pair.run(query);const unsigned changed=mode==0?8:mode==2?1:0;
        for(unsigned i=0;i<9;++i){const auto& r=i==8?pair.state.dummy.active:pair.state.registers_at(i).active;require(r.working==(i==changed?256u:0xbeef0001u),"Query wrote an inactive or wrong ambient register bank");}
    }
}
void timing_cases(const eb::GameAssets& original){
    Content content;const auto number=content.add({0x19,0x10,0,2}),status=content.add({0x19,0x16,0,0,2}),test=content.add({0x1d,0x0d,0,0,255,2});
    for(unsigned kind=0;kind<3;++kind){Pair pair(content.install(original),content);pair.context+=" diagnostic late fallback="+std::to_string(kind);pair.open(1);pair.open(2);pair.focus(1);seed_query_party(pair,254);pair.seed_banks(0xffff0001,0xabcd0001);
        pair.mutation_handler=kind==0?pair.source.p.number:kind==1?pair.source.p.status:pair.source.p.test_status;pair.mutation_consumed=kind==0?2:3;
        pair.source_mutation=[&]{pair.source.put(pair.source.p.focus,2);pair.source.put32(pair.source.record(1)+23,0xaaaa0006);pair.source.put32(pair.source.record(1)+27,0xbbbb0006);};
        pair.native_mutation=[&]{pair.state.focus=dialogue::WindowId{2};pair.state.registers_at(1).active.working=0xaaaa0006;pair.state.registers_at(1).active.argument=0xbbbb0006;};
        pair.run(kind==0?number:kind==1?status:test);require(pair.state.registers_at(0).active.working==0xffff0001,"Late fallback probe changed old focus bank");
    }
}
// Unbound Runtime's explicit request/response boundary permits a service
// owner to publish after state changes. The source instruction hook below is
// diagnostic only: original query helpers contain no world callback here.
void publication_cases(const eb::GameAssets& original){
    Content content;const auto script=content.add({0x19,0x16,0,0,2});
    for(bool ambient:{false,true}){
        Pair pair(content.install(original),content);pair.context+=" diagnostic late publication";pair.open(1);pair.open(2);pair.focus(1);seed_query_party(pair,255);pair.seed_banks(0xaaaa0001,0xbbbb0008);
        // This diagnostic isolates the request/publication seam, so both
        // originals disable the independent US automatic word-lookahead owner.
        pair.state.word_wrap=false;if(original.version==eb::GameVersion::US)pair.source.put(0x5e6e,0);
        dialogue::Runtime runtime(pair.program,pair.state);runtime.start(dialogue::Location{1,std::uint16_t(script.offset)});
        while(runtime.advance(1)==dialogue::Progress::BudgetExhausted){}
        require(runtime.request()&&runtime.request()->kind==dialogue::RequestKind::PartyQuery&&runtime.request()->party_query,"Direct query did not retain typed service");
        const auto value=pair.host.query_party(*runtime.request()->party_query);require(value.has_value(),"Bound party owner did not answer query");
        bool changed=false;pair.source.observe=[&](unsigned pc){if(!changed&&pc==(original.version==eb::GameVersion::US?0xc1045du:0xc10660u)){
            pair.source.put(pair.source.p.focus,ambient?65535:2);pair.source.put(pair.source.p.open+0xfffe,1);changed=true;
        }};
        pair.source.put32(0x1e0e,0xee0000|script.offset);pair.source.call(pair.source.p.display,true);pair.source.observe={};require(changed,"Source publication hook was not reached");
        if(ambient){pair.state.focus.reset();pair.state.unfocused_register_slot=1;}else pair.state.focus=dialogue::WindowId{2};
        runtime.respond({*value});while(runtime.advance(1)==dialogue::Progress::BudgetExhausted){}
        require(!runtime.request()&&runtime.returned_cursor()==dialogue::Location{1,std::uint16_t(script.offset+script.bytes.size())},"Runtime publication stream did not return");
        require(pair.source.get32(0x1e06)==(0xee0000|std::uint16_t(script.offset+script.bytes.size())),"Original publication stream cursor differs");
        pair.compare("result after service response");require(pair.state.registers_at(0).active.working==0xaaaa0001&&pair.state.registers_at(1).active.working==256,"Response used stale focus or narrowed result");
        ++counts.publication_probes;++counts.streams;++counts.cases;
    }
}
void nested_cases(const eb::GameAssets& original){
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned mode=0;mode<4;++mode){Content content;
        const auto parent=content.add({std::uint8_t(us?(mode&1?0x2f:0x71):0x41),0x19,0x16,0,0,2});
        const auto child=mode<2?content.add({0x18,3,2,0x19,0x10,6,2}):mode==2?content.add({0x18,0,0x19,0x20,2}):content.add({0x18,4,0x19,0x20,2});
        Pair pair(content.install(original),content);pair.context+=" nested-focus="+std::to_string(mode);pair.open(1);pair.open(2);pair.focus(1);seed_query_party(pair,6);pair.seed_banks(0xface0001,0xbeef0008);pair.output.policy().instant=false;pair.source.byte(pair.source.p.instant,0);pair.run(parent,&child);if(!pair.host.draw_order().empty())pair.final_image();
    }
}
void staged_image(Pair& pair){
    const auto image=pair.host.scene();require(image->width==256&&image->height==224,"Staged image dimensions differ");
    for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x){const auto word=pair.source.get(pair.source.p.scene+((y/8)*32+x/8)*2),color=raster(pair.source,word,x%8,y%8),at=y*256+x;require(image->pixels[at]==color&&image->priority[at]==(color?bool(word&0x2000):false),pair.context+" staged SHOW image differs");++counts.pixels;}
}
void show_cases(const eb::GameAssets& original){
    Content content;const auto script=content.add({0x1c,4,0x19,0x20,2});
    for(unsigned count:{1u,4u})for(unsigned selection:{0xffffu,0u,3u})for(bool instant:{false,true}){
        if(count==1&&selection==3)continue;
        Pair pair(content.install(original),content);pair.context+=" show count="+std::to_string(count)+" selection="+std::to_string(selection)+" instant="+std::to_string(instant);pair.open(1);pair.seed_banks(0xffffffff,0x12345678);
        pair.members.party_order={1,2,3,4,5,6};pair.members.party_count=std::uint8_t(count);pair.members.controlled_count=std::uint8_t(count);pair.synchronize_party();
        pair.meters.state().render=1;pair.meters.state().drawn_mask=15;pair.meters.state().selected_phase=std::uint16_t(selection);
        pair.source.byte(pair.source.p.render,1);pair.source.put(pair.source.p.mask,15);pair.source.put(pair.source.p.selected,selection);pair.source.call(pair.source.p.draw_all,true);pair.meters.draw_all();pair.host.draw_windows();
        pair.output.policy().instant=instant;pair.source.byte(pair.source.p.instant,instant);staged_image(pair);
        unsigned frame_changes=0;pair.at_effect=[&](Effect event){if(event==Effect::Frame){++frame_changes;pair.members.controlled_count=4;pair.synchronize_party();pair.meters.state().selected_phase=3;pair.source.put(pair.source.p.selected,3);}};
        pair.run(script);require(frame_changes==unsigned(original.version==eb::GameVersion::US&&selection!=65535),"SHOW regional frame-only wait changed");staged_image(pair);pair.final_image();++counts.show_cases;
    }
}
void prefix(const eb::GameAssets& assets){const auto offset=assets.version==eb::GameVersion::US?0x74e8fu:0x58288u;require(assets.image.at(offset)==0x19&&assets.image.at(offset+1)==0x10&&assets.image.at(offset+2)==1,"Imported MSG_ONET_DRUG_BOY prefix differs");++counts.prefixes;}
} // namespace
int main(int argc,char**argv){try{
    if(argc<2){std::cout<<"SKIP: local US/JP asset packs are required for original instruction/artwork comparison\n";return 77;}
    for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());prefix(assets);query_cases(assets);bank_cases(assets);timing_cases(assets);publication_cases(assets);nested_cases(assets);show_cases(assets);}
    std::cout<<"PASS native party-query source reference: "<<counts.cases<<" cases, "<<counts.streams<<" whole DISPLAY streams, "<<counts.nested<<" actual child returns, "<<counts.timing_probes<<" test-only late-sampling probes, "<<counts.publication_probes<<" diagnostic live publications, "<<counts.show_cases<<" meter-show cases, "<<counts.prefixes<<" verified imported entry prefixes\n";
    std::cout<<"Native/original: "<<counts.snapshots<<" register/meter snapshots, "<<counts.register_words<<" register words, "<<counts.read_order_checks<<" original fallback-order checks, "<<counts.effects<<" matched external effects, "<<counts.pixels<<" source-derived indexed pixels, "<<counts.ppu_pixels<<" original software-PPU pixels\n";
    std::cout<<"Original: "<<counts.instructions<<" retired instructions including real initialization, helper calls, nested streams and final drawing\n";
    std::cout<<"Scope: actual original DISPLAY_TEXT/query/show/window/artwork execution. Glyph WindowTick and sound are explicit external seams; frame waits are serviced externally. Meter show calls real native MeterWindows; separate Scene integration owns its bridge. Operand-budget/instruction-hook mutations are diagnostics, not game callbacks. Synthetic scripts only; two unchanged imported prefixes checked, no imported dialogue playback, DSP/PCM, scheduler, GPU or whole-game parity claim.\n";return 0;
}catch(const std::exception& e){std::cerr<<"FAIL: "<<e.what()<<'\n';return 1;}}
