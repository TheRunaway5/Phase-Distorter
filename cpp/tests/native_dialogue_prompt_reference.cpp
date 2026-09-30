// Independent source prompt oracle. Expected state, blink publication and
// native comparisons execute the original linked regional routines.
// Only explicitly listed world-owned inner helpers are outside this fixture.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/prompt_host.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
void require(bool ok,const std::string& message) {if(!ok)throw std::runtime_error(message);}
struct Layout {
    unsigned count,record_size,windows,dummy,open,titles,head,tail,focus,scene,tilemaps,menus;
    unsigned create,close,draw,draw_all,load_gfx,tick,wait,hppp,world,reset,dma_done;
    unsigned instant,redraw,suppress_close_tick,pagination,pagination_frame,game,flavor,party,party_size;
    unsigned intangible,sprite_high;
};
Layout layout(eb::GameVersion version) {
    // Independently read from both linked earthbound.dbg files and the shared
    // include/structs.asm::window_stats. These addresses are oracle-only.
    if(version==eb::GameVersion::US)return {
        53,82,0x8650,0x85fe,0x88e4,0x894e,0x88e0,0x88e2,0x8958,0x7dfe,0x5e7e,0x89d4,
        0xc104ee,0xc3e521,0xc107af,0xc2087c,0xc47c3f,0xc12dd5,0xc08756,0xc2077d,0xc07c5b,0xc45e96,0x9e2b,
        0x9622,0x9623,0x5e70,0x5e7a,0x5e7c,0x97f5,0x1d8,0x99ce,95,0x5d58,0x116a};
    return {
        52,76,0x89c2,0x8976,0x8c26,0x8c8e,0x8c22,0x8c24,0x8c96,0x8176,0x61f6,0x8d12,
        0xc106e4,0xc10141,0xc10996,0xc2081d,0xc459ab,0xc13502,0xc0874c,0xc2071e,0xc07eab,0xc43be8,0xa031,
        0x991a,0x991b,0x61e8,0x61f2,0x61f4,0x9aa9,0x1d5,0x9c7f,94,0x60de,0x1160};
}
enum class Service { WindowTick, WaitFrame, HpPp, ClearPartyBlink, Sound, HideMeters, Input, Callback, Money, Unlock };
struct Counts {
    std::uint64_t instructions{},calls{},world_calls{},ticks{},waits{},hp_pp{},dma_acknowledgements{};
    unsigned configurations{},reopens{},closes{},draws{},resource_pixels{},palettes{},pagination_cells{};
    std::uint64_t host_comparisons{},scene_pixels{},content_pixels{},host_operations{},world_effects{},ppu_pixels{};
    unsigned conversations{},nested_closes{},restored_ticks{},sounds{},hidden_meters{};
} counts;

class Source {
  public:
    eb::GameVersion version;
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::optional<Service> pending;
    unsigned returning{}, expected_stack=0x1fff, expected_direct_page=0x1e00;
    bool busy{};
    struct SuspendedCall {
        unsigned returning,expected_stack,expected_direct_page,caller_stack,caller_direct_page,pc;
        Service service;
        std::vector<std::uint8_t> locals,stack;
    };
    std::vector<SuspendedCall> suspended;

    struct Input {unsigned press{},held{};};
    std::vector<Input> inputs;
    unsigned input_index{},callback_count{};
    std::vector<unsigned> frame_inputs;
    unsigned frame_input_index{};
    std::optional<unsigned> callback_focus;
    unsigned selection_window=1;
    std::vector<unsigned> sounds,callbacks,pages;
    bool real_ticks=false;
    unsigned input_ticks{},window_ticks{},frame_waits{},unlock_boundaries{};
    bool expose_locked_wait=false,retain_next_input=false;

    Source(const eb::GameAssets& assets,unsigned flavor=1)
        :version(assets.version),p(layout(version)),bus(std::make_unique<eb::SnesBus>(assets.image,version)),cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);cpu.emulation_mode=false;
        cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.data_bank=0x7e;
        bus->work_ram[0x0d]=0x80;bus->write_byte(0x2100,0x80); // actual immediate DMA
        // These are external game inputs, not window records or frame art.
        // US names are four valid letters + terminator; JP names are four
        // fixed encoded letters. LOAD_WINDOW_GFX really renders these names.
        bus->work_ram[p.game+p.flavor]=flavor;
        for(unsigned member=0;member<4;++member)for(unsigned i=0;i<4;++i)
            bus->work_ram[p.party+member*p.party_size+i]=(version==eb::GameVersion::US?0x71:0x41)+i;
        put(version==eb::GameVersion::US?0xb4b6:0xb68a,1); // external palette transitions disabled
        initialize();
        call(p.load_gfx,true);
        if(version==eb::GameVersion::US)call(0xc44963,true,1);
        else {
            // Original COPY_TO_VRAM1 BUFFER,$6000,$3800,0 expansion. The
            // source helper performs the transfer through hardware DMA.
            put32(cpu.direct_page+14,0x7f0000);call(0xc08616,true,0,0x3800,0x6000);
        }
    }
    unsigned get(unsigned address) const {
        return bus->work_ram.at(address)|(unsigned(bus->work_ram.at(address+1))<<8);
    }
    unsigned get32(unsigned address) const {return get(address)|(get(address+2)<<16);}
    void put(unsigned address,unsigned value) {bus->work_ram.at(address)=value;bus->work_ram.at(address+1)=value>>8;}
    void put32(unsigned address,unsigned value) {put(address,value);put(address+2,value>>16);}
    unsigned record(unsigned slot) const {require(slot<8,"Source slot out of range");return p.windows+slot*p.record_size;}
    unsigned slot(unsigned id) const {require(id<p.count,"Source logical ID out of range");return get(p.open+id*2);}
    std::vector<unsigned> order() const {
        std::vector<unsigned> result;
        for(unsigned slot=get(p.head);slot!=0xffff;slot=get(record(slot)+2)) {
            require(result.size()<8 && std::find(result.begin(),result.end(),slot)==result.end(),"Source draw list cycle");
            result.push_back(slot);
        }
        require((result.empty()?0xffff:result.back())==get(p.tail),"Source tail disagrees with list");return result;
    }
    void begin(unsigned entry,bool far,unsigned a=0,unsigned x=0,unsigned y=0) {
        require(!busy && !pending,"Source window call already pending");
        const auto trampoline=(entry&0xff0000)|0xff00;
        cpu.program_counter=trampoline;cpu.accumulator=a;cpu.x_index=x;cpu.y_index=y;
        cpu.status_register=eb::MainCpu65816::InterruptDisable;
        if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry&0xffff,3);
        returning=trampoline+(far?4:3);busy=true;++counts.calls;
    }
    std::optional<Service> advance() {
        require(!pending,"Source window service needs acknowledgement");
        for(unsigned steps=0;steps<5'000'000 && busy;++steps) {
            if(cpu.program_counter==returning && cpu.stack_pointer==expected_stack) {
                require(cpu.direct_page==expected_direct_page && cpu.data_bank==0x7e,"Original window call changed caller ABI");busy=false;break;
            }
            const auto pc=cpu.program_counter;
            const bool us=version==eb::GameVersion::US;
            // A declared external lifecycle boundary at the original busy
            // poll. No WindowTick/world update is invented for this loop.
            if(expose_locked_wait && (pc==(us?0xc1018cu:0xc10391u) || pc==(us?0xc10138u:0xc1033du)) &&
                    get(us?0x9645:0x993d) && !(get(us?0x436c:0x46f2) && (get(0x6d)&0x8010)==0x8010)) {
                pending=Service::Unlock;return pending;
            }
            if(pc==p.tick || pc==p.wait || pc==p.hppp) {
                pending=pc==p.tick?Service::WindowTick:pc==p.wait?Service::WaitFrame:Service::HpPp;return pending;
            }
            if(pc==(version==eb::GameVersion::US?0xc12e42u:0xc1355eu)) {pending=Service::Input;return pending;}
            if(pc==(version==eb::GameVersion::US?0xc09279u:0xc0925bu)) {pending=Service::Callback;return pending;}
            if(pc==(version==eb::GameVersion::US?0xc1134bu:0xc11900u)) {pending=Service::Money;return pending;}
            if(pc==p.world) {pending=Service::ClearPartyBlink;return pending;}
            if(pc==(version==eb::GameVersion::US?0xc0abe0u:0xc0abbfu)) {pending=Service::Sound;return pending;}
            if(pc==(version==eb::GameVersion::US?0xc10a1du:0xc10e72u)) {pending=Service::HideMeters;return pending;}
            if(version==eb::GameVersion::JP && (pc==p.reset || pc==0xc439e2) && get(p.dma_done)) {
                put(p.dma_done,0);++counts.dma_acknowledgements;
            }
            cpu.step_instruction();++counts.instructions;
        }
        require(!busy,"Original window routine did not return: "+cpu.describe_registers());return std::nullopt;
    }
    void respond() {
        require(bool(pending),"No source window service pending");
        if(*pending==Service::Unlock) {
            put(version==eb::GameVersion::US?0x9645:0x993d,0);++unlock_boundaries;pending.reset();return;
        }
        if(*pending==Service::Input || (*pending==Service::WindowTick && real_ticks)) {
            const bool input=*pending==Service::Input;
            if(input && !retain_next_input) {
                require(input_index<inputs.size(),"Source prompt exhausted explicit input trace: "+cpu.describe_registers());
                const auto next=inputs[input_index++];put(0x6d,next.press);put(0x69,next.held);
                if(slot(selection_window)!=0xffff)pages.push_back(get(record(slot(selection_window))+51));
            }
            if(input){++input_ticks;retain_next_input=false;}else{++counts.ticks;++window_ticks;}
            // Execute the actual C12E42/WINDOW_TICK wrapper, including all
            // menu-layer drawing, marker upload, RNG and return instructions.
            // Only world-owned HP/PP/audio/actor pumping is a declared seam.
            const unsigned stack=cpu.stack_pointer;
            const unsigned target=((get(stack+1)+1)&65535)|(unsigned(bus->work_ram.at(stack+3))<<16);
            for(unsigned n=0;n<100000;++n) {
                const auto pc=cpu.program_counter;const bool us=version==eb::GameVersion::US;
                if(pc==(us?0xc2109fu:0xc20f3bu) || pc==(us?0xc213acu:0xc2124cu) || pc==(us?0xc1004eu:0xc100c4u))
                    cpu.execute_instruction<0x6b>(0,1);
                else {cpu.step_instruction();++counts.instructions;}
                if(cpu.program_counter==target && cpu.stack_pointer==stack+3) {pending.reset();return;}
            }
            throw std::runtime_error("Original prompt frame service did not return");
        }
        if(*pending==Service::Callback) {
            callbacks.push_back(cpu.accumulator);++callback_count;if(callback_focus)put(p.focus,*callback_focus);cpu.execute_instruction<0x6b>(0,1);pending.reset();return;
        }
        if(*pending==Service::Money) {cpu.execute_instruction<0x60>(0,1);pending.reset();return;}
        if(*pending==Service::Sound)sounds.push_back(cpu.accumulator);
        if(*pending==Service::ClearPartyBlink || *pending==Service::HideMeters) {
            // The native host exposes a world-owned operation. Its source
            // counterpart is NOT replaced: execute the entire original
            // helper to the real JSL return and compare all sprite writes.
            const auto stack=cpu.stack_pointer;
            const bool far=*pending==Service::ClearPartyBlink;
            const auto target=((get(stack+1)+1)&65535)|(far?unsigned(bus->work_ram.at(stack+3))<<16:cpu.program_counter&0xff0000);
            for(unsigned steps=0;steps<1000;++steps) {
                cpu.step_instruction();++counts.instructions;
                if(cpu.program_counter==target && cpu.stack_pointer==stack+(far?3:2)) {
                    if(far)++counts.world_calls;else ++counts.hidden_meters;pending.reset();return;
                }
            }
            throw std::runtime_error("Original sprite-unhide helper did not return");
        }
        if(*pending==Service::WindowTick)++counts.ticks;
        else if(*pending==Service::WaitFrame){
            ++counts.waits;++frame_waits;
            if(!frame_inputs.empty()) {require(frame_input_index<frame_inputs.size(),"Frame-only wait exhausted route");put(0x6d,frame_inputs.at(frame_input_index++));}
        }
        else if(*pending==Service::Sound)++counts.sounds;
        else ++counts.hp_pp;
        // C2077D is called with JSR; the two world/frame seams use JSL.
        if(*pending==Service::HpPp)cpu.execute_instruction<0x60>(0,1);
        else cpu.execute_instruction<0x6b>(0,1);
        pending.reset();
    }
    void enter_child(unsigned entry,bool far,unsigned a=0,unsigned x=0,std::optional<unsigned> pointer={}) {
        require(busy && (pending==Service::WindowTick || pending==Service::Input),"Source child needs world callback");
        SuspendedCall saved{returning,expected_stack,expected_direct_page,cpu.stack_pointer,cpu.direct_page,cpu.program_counter,*pending,{},{}};
        saved.locals.assign(bus->work_ram.begin()+cpu.direct_page,bus->work_ram.begin()+0x1e12);
        saved.stack.assign(bus->work_ram.begin()+cpu.stack_pointer+1,bus->work_ram.begin()+0x2000);
        suspended.push_back(std::move(saved));pending.reset();
        // A real C-style callback frame borrows deeper direct-page and hardware
        // stack storage. Parent bytes remain live and are never restored.
        cpu.execute_instruction<0xc2>(0x31,2);cpu.execute_instruction<0x0b>(0,1);
        cpu.execute_instruction<0x7b>(0,1);cpu.execute_instruction<0x69>(0xffee,3);cpu.execute_instruction<0x5b>(0,1);
        expected_stack=cpu.stack_pointer;expected_direct_page=cpu.direct_page;
        if(pointer)put32(cpu.direct_page+14,*pointer);
        cpu.accumulator=a;cpu.x_index=x;cpu.program_counter=(entry&0xff0000)|0xff80;
        returning=cpu.program_counter+(far?4:3);
        if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry&65535,3);
    }
    void leave_child() {
        require(!busy && !pending && !suspended.empty(),"Source child has not returned");
        const auto saved=std::move(suspended.back());suspended.pop_back();cpu.execute_instruction<0x2b>(0,1);
        require(cpu.stack_pointer==saved.caller_stack && cpu.direct_page==saved.caller_direct_page,"Child changed parent stacks");
        require(std::equal(saved.locals.begin(),saved.locals.end(),bus->work_ram.begin()+saved.caller_direct_page) &&
                std::equal(saved.stack.begin(),saved.stack.end(),bus->work_ram.begin()+saved.caller_stack+1),"Child overwrote parent locals or return stack");
        returning=saved.returning;expected_stack=saved.expected_stack;expected_direct_page=saved.expected_direct_page;
        cpu.program_counter=saved.pc;busy=true;pending=saved.service;
    }
    void call(unsigned entry,bool far,unsigned a=0,unsigned x=0,unsigned y=0) {
        begin(entry,far,a,x,y);while(advance())respond();
    }
    void initialize() {
        call(0xc200d9,true);
        require(order().empty() && get(p.focus)==0xffff,"Original initializer retained open windows");
        for(unsigned id=0;id<p.count;++id)require(slot(id)==0xffff,"Original initializer missed open-ID entry");
        for(unsigned slot=0;slot<8;++slot)require(get(record(slot)+4)==0xffff,"Original initializer missed slot ID");
    }
    void create(unsigned id) {call(p.create,false,id);}
    void close(unsigned id) {call(p.close,version==eb::GameVersion::US,id);++counts.closes;}
    void draw(unsigned slot) {call(p.draw,true,slot);++counts.draws;}
    void draw_all() {call(p.draw_all,true);++counts.draws;}
    std::array<std::uint16_t,896> scene() const {
        std::array<std::uint16_t,896> result{};
        for(unsigned i=0;i<result.size();++i)result[i]=get(p.scene+i*2);return result;
    }
};


struct PromptLayout {
    unsigned delay,cc10,prompt,timed,wait_count,blink,locked,disable_rolling,half_speed,debug,battle;
};
PromptLayout prompt_layout(eb::GameVersion version) {
    // Verified independently against the linked development-source symbols.
    if(version==eb::GameVersion::US)return {0xc100d6,0xc14eab,0xc10166,0xc100fe,
        0x964b,0x964d,0x9645,0x9697,0x9695,0x436c,0x4dc2};
    return {0xc102dc,0xc152ab,0xc1036b,0xc10303,
        0x9943,0x9945,0x993d,0x994b,0x9949,0x46f2,0x5148};
}
struct PromptCounts {unsigned cases{},ticks{},inputs{},frames{},blink_changes{};} prompt_counts;
struct Observation {
    Service service;
    unsigned instant,disabled,half,marker;
};
std::vector<Observation> run_prompt(Source& source) {
    std::vector<Observation> observations;
    const auto p=prompt_layout(source.version);
    const auto record=source.record(source.slot(1));
    const auto x=source.get(record+6),y=source.get(record+8);
    const auto width=source.get(record+10),height=source.get(record+12);
    const auto marker_address=((0x7c00+32*(y+height)+(x+width)+32)*2)&0xffff;
    while(const auto service=source.advance()) {
        const unsigned marker=source.bus->video_ram[marker_address]|(unsigned(source.bus->video_ram[(marker_address+1)&65535])<<8);
        observations.push_back({*service,source.bus->work_ram[source.p.instant],
            source.bus->work_ram[p.disable_rolling],source.bus->work_ram[p.half_speed],marker});
        source.respond();
    }
    unsigned previous=0;bool have_previous=false;
    for(const auto& observation:observations) {
        if(have_previous && observation.marker!=previous)++prompt_counts.blink_changes;
        previous=observation.marker;have_previous=true;
    }
    prompt_counts.ticks+=source.window_ticks;prompt_counts.inputs+=source.input_ticks;
    prompt_counts.frames+=source.frame_waits;++prompt_counts.cases;
    return observations;
}
void source_delay_cases(const eb::GameAssets& assets) {
    for(bool cc10:{false,true})for(unsigned duration:{0u,1u,2u,15u,255u}) {
        Source source(assets);source.create(1);source.real_ticks=true;
        source.bus->work_ram[source.p.instant]=1;
        const auto p=prompt_layout(assets.version);
        source.inputs.assign(duration,{});
        source.begin(cc10?p.cc10:p.delay,false,cc10?0:duration,cc10?duration:0);
        const auto observations=run_prompt(source);
        require(source.window_ticks==1 && source.input_ticks==duration && !source.frame_waits,
                "Source delay tick distinction differs");
        require(!source.bus->work_ram[source.p.instant],"Source delay did not clear instant");
        if(cc10)require(source.cpu.accumulator==0,"CC10 did not return null handler");
        require(!observations.empty() && observations.front().service==Service::WindowTick,"Delay initial publication missing");
    }
}
void source_prompt_cases(const eb::GameAssets& assets) {
    struct Case {unsigned show,force,blink,wait,initial_press,idle,disabled=2,half=7;};
    const std::vector<Case> cases{
        {0,0,0,0,0x80,0},{0,0,0,0,0x8000,0},{0,0,0,0,0x2000,0},{0,0,0,0,0x20,0},
        {0,0,0,0,0,1},{0,0,1,0,0,1},{1,0,0,0,0,1},{1,0,1,0,0,1},
        {1,0,1,0,0,14},{1,0,1,0,0,15},{1,0,1,0,0,24},{1,0,1,0,0,25},{1,0,1,0,0,26},
        {1,1,1,3,0,1},{1,2,3,3,0,1},{2,0,3,0,0,26},{0xffff,0,0,0,0,26},
        {1,0,1,3,0,9},{1,0,1,3,0x80,0},{0,0,1,3,0,9},
    };
    for(unsigned index=0;index<cases.size();++index) {
        const auto c=cases[index];Source source(assets);source.create(1);source.real_ticks=true;
        const auto p=prompt_layout(assets.version);
        source.bus->work_ram[source.p.instant]=1;source.put(p.blink,c.blink);source.put(p.wait_count,c.wait);
        source.bus->work_ram[p.disable_rolling]=c.disabled;source.bus->work_ram[p.half_speed]=c.half;
        source.put(0x6d,c.initial_press);source.inputs.assign(c.idle,{});source.inputs.push_back({0x80,0});
        source.begin(p.prompt,false,c.show,c.force);
        const auto observations=run_prompt(source);
        const bool timed=!c.force && c.blink && c.wait;
        require(source.window_ticks==1 && !source.frame_waits,"Prompt window/frame tick contract differs");
        require(!source.bus->work_ram[source.p.instant],"Prompt failed to clear instant");
        require(source.bus->work_ram[p.disable_rolling]==(timed?c.disabled:0) &&
                source.bus->work_ram[p.half_speed]==(timed?c.half:0),"Prompt HP/PP rolling flag lifecycle differs");
        std::cout<<(assets.version==eb::GameVersion::US?"US":"JP")<<" prompt "<<index<<" show="<<c.show<<" force="<<c.force
                 <<" blink="<<c.blink<<" wait="<<c.wait<<" polls="<<source.input_ticks<<" markers=";
        for(unsigned i=0;i<observations.size();++i)if(!i || observations[i].marker!=observations[i-1].marker)
            std::cout<<std::hex<<observations[i].marker<<','<<std::dec;
        std::cout<<'\n';
    }
}
void source_timed_and_locked_cases(const eb::GameAssets& assets) {
    const auto p=prompt_layout(assets.version);
    for(unsigned scenario=0;scenario<10;++scenario) {
        Source source(assets);source.create(1);source.real_ticks=true;source.expose_locked_wait=true;
        source.bus->work_ram[source.p.instant]=1;
        source.put(p.wait_count,3);source.put(p.locked,scenario>=4?1:0);
        source.put(p.debug,scenario>=5?1:0);source.put(p.battle,scenario==8?1:0);
        source.put(0x6d,scenario==6 || scenario==8?0x8010:0);
        source.inputs.assign(2,{});source.inputs.push_back({0x80,0});
        const bool prompt=scenario>=7;
        source.begin(prompt?p.prompt:p.timed,false,prompt?1:scenario==0?0:scenario==1?1:scenario==2?0xffff:3,1);
        run_prompt(source);
        if(prompt)require(source.window_ticks==1,"Locked prompt lost initial window publication");
        else require(!source.window_ticks && source.bus->work_ram[source.p.instant]==1,
                     "Timed helper invented window publication or instant clear");
        if(scenario==4 || scenario==7 || scenario==9)require(source.unlock_boundaries==1,"Explicit outside-host unlock was not exercised");
        if(scenario==5 || scenario==6)require(source.get(p.locked)==1 && !source.unlock_boundaries,
                     "Debug outside-battle timed wait should bypass locked flag");
        if(scenario==8)require(!source.get(p.locked) && !source.unlock_boundaries,"Debug B+R did not perform original unlock");
    }
}

namespace dialogue=eb::native::dialogue;
struct NativeCounts {std::uint64_t boundaries{},scene_pixels{},published_pixels{},ppu_pixels{};unsigned cases{},events{},unlocks{},children{},conversations{},window_ticks{},world_ticks{},frame_waits{},blink_ppu_samples{};} native_counts;
unsigned raster(const Source& source,unsigned descriptor,unsigned x,unsigned y) {
    if(descriptor&0x4000)x=7-x;if(descriptor&0x8000)y=7-y;
    const auto address=(0xc000+(descriptor&1023)*16+y*2)&65535;
    const auto color=((source.bus->video_ram[address]>>(7-x))&1)|(((source.bus->video_ram[(address+1)&65535]>>(7-x))&1)<<1);
    return color?color+((descriptor>>10)&7)*4:0;
}
struct Pair {
    Source source;
    dialogue::State state;
    std::shared_ptr<const dialogue::FontResources> fonts;
    dialogue::TextOutput output;
    dialogue::WindowHost windows;
    dialogue::PromptHost prompts;
    std::string label;
    std::shared_ptr<const dialogue::Program> program;
    Pair(const eb::GameAssets& assets)
        :source(assets),fonts(dialogue::FontResources::import(assets.image,assets.version)),output(fonts,state),
         windows(dialogue::WindowResources::import(assets.image,assets.version),state,output),prompts(windows),
         label(assets.version==eb::GameVersion::US?"US":"JP") {
        state.unfocused_register_slot=0;
        open(2);open(1);source.real_ticks=true;
        const bool us=source.version==eb::GameVersion::US;
        source.bus->work_ram[source.p.game+(us?0xafu:0xacu)]=1;
        source.bus->work_ram[source.p.game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);
        source.call(us?0xc47f87:0xc45c1a,true);windows.publish_palette(1,false,true);
        // Publish the real original windows before tests that intentionally do
        // not redraw (TimedWait/FrameDelay), so final PPU checks are nonblank.
        source.bus->work_ram[source.p.instant]=0;output.policy().instant=false;
        source.call(source.p.tick,true);windows.draw_tick();windows.publish_scene();
    }
    void open(unsigned id) {
        source.create(id);auto operation=windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{id}});
        while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();
    }
    void configure(unsigned mode,unsigned wait,unsigned press=0,unsigned lock=0,unsigned debug=0,unsigned battle=0) {
        const auto p=prompt_layout(source.version);output.policy().instant=true;output.policy().prompt_mode=mode;
        source.bus->work_ram[source.p.instant]=1;source.put(p.blink,mode);source.put(p.wait_count,wait);
        source.put(0x6d,press);source.put(p.locked,lock);source.put(p.debug,debug);source.put(p.battle,battle);
        source.bus->work_ram[p.disable_rolling]=2;source.bus->work_ram[p.half_speed]=7;
        prompts.state()={std::uint16_t(press),std::uint16_t(lock),std::uint16_t(debug),std::uint16_t(battle),std::uint16_t(wait),2,7};
        source.expose_locked_wait=true;
    }
    void compare(const std::string& where) {
        const auto context=label+" "+where;const auto p=prompt_layout(source.version);const auto& shared=prompts.state();
        require((state.focus?state.focus->value:0xffff)==source.get(source.p.focus),context+" focus differs");
        require(output.policy().instant==bool(source.bus->work_ram[source.p.instant]) &&
                output.policy().prompt_mode==source.get(p.blink) && output.redraw_pending()==bool(source.bus->work_ram[source.p.redraw]),
                context+" print policy differs");
        require(shared.pressed==source.get(0x6d) && shared.input_lock==source.get(p.locked) && shared.debug==source.get(p.debug) &&
                shared.battle_mode==source.get(p.battle) && shared.text_speed_based_wait==source.get(p.wait_count),context+" prompt shared words differ");
        require(shared.rolling_disabled==source.bus->work_ram[p.disable_rolling] && shared.half_meter_speed==source.bus->work_ram[p.half_speed],
                context+" HP/PP rolling flags differ");
        for(unsigned id=0;id<source.p.count;++id) {
            const auto slot=source.slot(id);require(windows.slot_for({id})==(slot==0xffff?std::nullopt:std::optional<unsigned>{slot}),context+" window slot differs");
            if(slot==0xffff)continue;
            const auto at=source.record(slot);const auto& w=output.window({id});
            require(w.cursor.column==source.get(at+14) && w.cursor.line==source.get(at+16),context+" text cursor differs");
            const auto& bank=state.windows.at({id}).active;
            require(bank.working==source.get32(at+23) && bank.argument==source.get32(at+27) && bank.secondary==source.get(at+31),context+" text registers differ");
        }
        const auto scene=windows.scene(),published=windows.frame();
        for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x) {
            const auto cell=(y/8)*32+x/8,index=y*256+x;
            const auto descriptor=source.get(source.p.scene+cell*2),color=raster(source,descriptor,x%8,y%8);
            require(scene->pixels[index]==color && scene->priority[index]==(color?bool(descriptor&0x2000):false),context+" composed pixels differ");++native_counts.scene_pixels;
            const auto at=0xf800+cell*2;const auto visible=source.bus->video_ram[at]|unsigned(source.bus->video_ram[at+1])<<8;
            const auto visible_color=raster(source,visible,x%8,y%8);
            require(published->pixels[index]==visible_color && published->priority[index]==(visible_color?bool(visible&0x2000):false),
                    context+" actual published pixels differ xy="+std::to_string(x)+","+std::to_string(y));++native_counts.published_pixels;
        }
        ++native_counts.boundaries;
    }
    void frame(Service service) {
        if(service==Service::Input)++native_counts.world_ticks;
        if(service==Service::WaitFrame)++native_counts.frame_waits;
        if(service==Service::WindowTick)++native_counts.window_ticks;
        if(service==Service::WindowTick) {
            if(source.version==eb::GameVersion::US && windows.menu_state().early_tick_exit)windows.menu_state().early_tick_exit=false;
            else if(!output.policy().instant){windows.draw_tick();windows.publish_scene();}
        }
        source.respond();
    }
    void compare_ppu() {
        eb::SnesBus display(std::span(eb::rom_data(source.version),eb::rom_size(source.version)),source.version);
        display.video_ram=source.bus->video_ram;std::copy_n(source.bus->work_ram.begin()+0x200,64,display.palette_ram.begin());
        display.write_byte(0x2100,15);display.write_byte(0x2105,1);display.write_byte(0x2109,0x7c);
        display.write_byte(0x210c,6);display.write_byte(0x212c,4);display.write_byte(0x2112,0xff);display.write_byte(0x2112,0xff);
        while(display.completed_frames<2)display.advance_cpu_cycles(1000);
        const auto frame=windows.frame();unsigned visible=0;
        for(unsigned i=0;i<256*224;++i) {
            const auto color=windows.palette().at(frame->pixels[i]);const auto expand=[](unsigned n){return(n<<3)|(n>>2);};
            const auto rgb=0xff000000u|(expand(color&31)<<16)|(expand((color>>5)&31)<<8)|expand((color>>10)&31);
            require(display.native_framebuffer[i]==rgb,label+" actual source PPU differs");visible+=rgb!=0xff000000u;++native_counts.ppu_pixels;
        }
        require(visible!=0,label+" source PPU comparison was blank");
    }
    void window_child(dialogue::PromptHost::Operation& parent,dialogue::WindowCommand command) {
        const auto id=command.id->value;const bool us=source.version==eb::GameVersion::US;
        const auto entry=command.action==dialogue::WindowAction::Open?source.p.create:command.action==dialogue::WindowAction::Close?source.p.close:us?0xc1007e:0xc1013b;
        source.enter_child(entry,command.action==dialogue::WindowAction::Close && us,id);
        auto child=prompts.begin_window(command,parent);
        for(unsigned n=0;n<10000;++n) {
            const auto progress=child->advance();const auto expected=source.advance();compare("window child");
            if(progress==dialogue::OutputProgress::Complete) {
                require(!expected && !source.busy,label+" window child source incomplete");source.leave_child();++native_counts.children;return;
            }
            require(expected && child->effect(),label+" window child lost effect");
            const auto kind=child->effect()->kind;
            require((*expected==Service::WindowTick && kind==dialogue::WindowEffectKind::WindowTick) ||
                    (*expected==Service::ClearPartyBlink && kind==dialogue::WindowEffectKind::ClearPartyBlink) ||
                    (*expected==Service::WaitFrame && kind==dialogue::WindowEffectKind::FrameWait),label+" window child effect differs");
            frame(*expected);child->respond();++native_counts.events;
        }
        throw std::runtime_error(label+" window child did not finish");
    }
    void delay_child(dialogue::PromptHost::Operation& parent) {
        source.enter_child(prompt_layout(source.version).delay,false,2);
        auto child=prompts.begin_nested({dialogue::PromptAction::Delay,2},parent);
        for(unsigned n=0;n<10000;++n) {
            const auto progress=child->advance(1+n%5);if(progress==dialogue::Progress::BudgetExhausted)continue;
            const auto expected=source.advance();compare("delay child");
            if(progress==dialogue::Progress::Finished) {
                require(!expected && !source.busy,label+" delay child source incomplete");source.leave_child();++native_counts.children;return;
            }
            require(expected && child->event(),label+" delay child lost effect");
            require((*expected==Service::WindowTick && std::holds_alternative<dialogue::WindowEffect>(*child->event())) ||
                    (*expected==Service::Input && std::holds_alternative<dialogue::PromptEffect>(*child->event())),label+" delay child effect differs");
            std::optional<std::uint16_t> press;if(*expected==Service::Input)press=source.inputs.at(source.input_index).press;
            frame(*expected);child->respond(press);++native_counts.events;
        }
        throw std::runtime_error(label+" delay child did not finish");
    }
    void conversation_run(dialogue::Conversation& conversation,bool child=false) {
        unsigned silent=0;
        for(unsigned n=0;n<100000;++n) {
            const auto progress=conversation.advance(1+n%7);
            if(progress==dialogue::Progress::BudgetExhausted) {
                if(++silent==64 && prompts.state().input_lock) {
                    require(source.advance()==Service::Unlock,label+" DISPLAY_TEXT missing original busy-lock boundary");
                    compare("DISPLAY_TEXT locked wait");source.respond();prompts.state().input_lock=0;++native_counts.unlocks;
                }
                continue;
            }
            silent=0;
            const auto expected=source.advance();compare("DISPLAY_TEXT stage "+std::to_string(n));
            if(progress==dialogue::Progress::Finished) {
                require(!expected && !source.busy,label+" native DISPLAY_TEXT finished before source");
                require(conversation.snapshot().returned_cursor==dialogue::Location{1,std::uint16_t(source.get32(source.cpu.direct_page+6))},
                        label+" DISPLAY_TEXT return cursor differs");
                const auto us=source.version==eb::GameVersion::US;
                require(state.stream_slot==source.get(us?0x97b8:0x9a6c),label+" DISPLAY_TEXT stream counter differs");
                for(unsigned i=0;i<10;++i) {
                    const auto pointer=source.get32((us?0x96aa:0x995e)+i*27);
                    require(state.streams[i].cursor==(pointer?std::optional<dialogue::Location>{{1,std::uint16_t(pointer)}}:std::nullopt),label+" DISPLAY_TEXT retained cursor differs");
                }
                if(child){source.leave_child();++native_counts.children;}else compare_ppu();
                ++native_counts.conversations;return;
            }
            require(expected && conversation.event(),label+" DISPLAY_TEXT effect count differs");
            const auto event=*conversation.event();bool matches=false;
            if(const auto* world=std::get_if<dialogue::PromptEffect>(&event))matches=*expected==Service::Input && world->kind==dialogue::PromptEffectKind::WorldTick;
            else if(const auto* window=std::get_if<dialogue::WindowEffect>(&event))
                matches=(*expected==Service::WindowTick && window->kind==dialogue::WindowEffectKind::WindowTick) ||
                        (*expected==Service::WaitFrame && window->kind==dialogue::WindowEffectKind::FrameWait);
            else if(const auto* text=std::get_if<dialogue::TextEffect>(&event))
                matches=(*expected==Service::WindowTick && text->kind==dialogue::TextEffectKind::WindowTick) ||
                        (*expected==Service::Sound && text->kind==dialogue::TextEffectKind::TextSound);
            require(matches,label+" DISPLAY_TEXT ordered effect differs source="+std::to_string(unsigned(*expected)));
            require(conversation.advance(1)==dialogue::Progress::Suspended && conversation.event()==event,label+" DISPLAY_TEXT event changed before ack");
            std::optional<std::uint16_t> pressed;
            if(*expected==Service::Input && !source.retain_next_input)pressed=source.inputs.at(source.input_index).press;
            if(*expected==Service::WaitFrame && !source.frame_inputs.empty())pressed=source.frame_inputs.at(source.frame_input_index);
            frame(*expected);if(pressed)conversation.respond({0,*pressed,0});else conversation.respond();++native_counts.events;
        }
        throw std::runtime_error(label+" DISPLAY_TEXT did not finish");
    }
    void conversation_child(dialogue::PromptHost::Operation& parent) {
        require(bool(program),label+" child program missing");
        source.enter_child(source.version==eb::GameVersion::US?0xc186b1:0xc18913,true,0,0,0xee8000);
        dialogue::Conversation child(program,prompts);child.start_nested(dialogue::EntryId{0},parent);
        conversation_run(child,true);
    }
    void run(dialogue::PromptCommand command,unsigned entry,unsigned a,unsigned x=0,std::optional<unsigned> callback={}) {
        auto operation=prompts.begin(command);source.begin(entry,false,a,x);bool invoked=false;unsigned parent_world_ticks=0;
        for(unsigned n=0;n<100000;++n) {
            const auto progress=operation->advance(1+n%7);
            if(progress==dialogue::Progress::BudgetExhausted) {
                if(command.action!=dialogue::PromptAction::Delay && prompts.state().input_lock && n>30) {
                    const auto expected=source.advance();require(expected==Service::Unlock,label+" missing original locked wait");
                    compare("locked wait");source.respond();prompts.state().input_lock=0;++native_counts.unlocks;
                }
                continue;
            }
            const auto expected=source.advance();compare("prompt stage "+std::to_string(n));
            if(progress==dialogue::Progress::Finished) {
                require(!expected && !source.busy,label+" native completed before source");
                require(!callback || invoked,label+" callback was not exercised");
                if(command.action==dialogue::PromptAction::FrameDelay)require(operation->result()==source.cpu.accumulator,label+" frame-only delay return differs");
                compare_ppu();++native_counts.cases;return;
            }
            require(expected && operation->event(),label+" native/source effect count differs");
            const auto event=*operation->event();
            if(const auto* world=std::get_if<dialogue::PromptEffect>(&event))
                require(*expected==Service::Input && world->kind==dialogue::PromptEffectKind::WorldTick,label+" world/input tick differs");
            else {
                const auto kind=std::get<dialogue::WindowEffect>(event).kind;
                require((*expected==Service::WindowTick && kind==dialogue::WindowEffectKind::WindowTick) ||
                        (*expected==Service::WaitFrame && kind==dialogue::WindowEffectKind::FrameWait),label+" window/frame-only effect differs");
            }
            require(operation->advance(1)==dialogue::Progress::Suspended && operation->event()==event,label+" unacknowledged effect changed");
            if(*expected==Service::Input) {
                const bool manual_blink=command.action==dialogue::PromptAction::Prompt && command.show_prompt &&
                    (command.force_wait || !output.policy().prompt_mode || !prompts.state().text_speed_based_wait);
                if(manual_blink && (parent_world_ticks==0 || parent_world_ticks==15)) {
                    compare_ppu();++native_counts.blink_ppu_samples;
                }
                ++parent_world_ticks;
            }
            if(callback && !invoked && ((*callback==0 && *expected==Service::WindowTick) || (*callback!=0 && *expected==Service::Input))) {
                if(*callback<=4) {
                    if(*callback==0 || *callback==1)window_child(*operation,{dialogue::WindowAction::Focus,dialogue::WindowId{2}});
                    else if(*callback==2)window_child(*operation,{dialogue::WindowAction::Close,dialogue::WindowId{1}});
                    else if(*callback==3) {
                        window_child(*operation,{dialogue::WindowAction::Close,dialogue::WindowId{1}});
                        window_child(*operation,{dialogue::WindowAction::Open,dialogue::WindowId{7}});
                    } else window_child(*operation,{dialogue::WindowAction::Open,dialogue::WindowId{1}});
                } else if(*callback==5 || *callback==7) {
                    delay_child(*operation);
                    if(*callback==7) {
                        require(prompts.state().pressed==0x80 && source.get(0x6d)==0x80,label+" child did not update pressed snapshot");
                        source.retain_next_input=true;
                    }
                } else {
                    if(*callback==8){prompts.state().input_lock=1;source.put(prompt_layout(source.version).locked,1);}
                    conversation_child(*operation);
                    if(*callback==8)require(!prompts.state().input_lock && !source.get(prompt_layout(source.version).locked),label+" nested authored unlock did not run");
                }
                require(operation->event()==event,label+" child failed to restore exact parent event");invoked=true;
            }
            std::optional<std::uint16_t> pressed;
            if(*expected==Service::Input && !source.retain_next_input)pressed=source.inputs.at(source.input_index).press;
            if(*expected==Service::WaitFrame && !source.frame_inputs.empty())pressed=source.frame_inputs.at(source.frame_input_index);
            frame(*expected);operation->respond(pressed);++native_counts.events;
        }
        throw std::runtime_error(label+" native prompt exceeded bound");
    }
};
std::shared_ptr<const dialogue::Program> install_program(eb::GameAssets& assets,const std::vector<std::uint8_t>& script) {
    std::copy(script.begin(),script.end(),assets.image.begin()+0x2e8000);
    return std::make_shared<dialogue::Program>(assets.version,std::vector<dialogue::ContentBlock>{{1,0x8000,script}},
        std::vector<dialogue::Location>{{1,0x8000}},std::vector<dialogue::ReferenceBinding>{},std::vector<dialogue::Location>{},
        std::vector<dialogue::ReferenceRange>{{{0,0x80,0xee,0},{1,0x8000},unsigned(script.size())}});
}
void native_conversation_cases(const eb::GameAssets& original) {
    for(unsigned scenario=0;scenario<19;++scenario) {
        auto assets=original;const auto glyph=std::uint8_t(assets.version==eb::GameVersion::US?0x7a:0x4a);
        std::vector<std::uint8_t> script{glyph,0x0f};
        if(scenario<3){script.push_back(0x10);script.push_back(scenario==0?0:scenario==1?2:255);}
        else script.push_back(scenario<6?3:scenario<9?0x13:0x14);
        script.push_back(0x0f);script.push_back(glyph);script.push_back(2);
        if(scenario==12)script={0x1f,0x50,0x1f,0x51,0x0f,2};
        if(scenario==13)script={0x1f,0x50,3,0x1f,0x51,0x0f,2};
        if(scenario==14)script={0x1f,0x50,0x1f,0x60,0,0x1f,0x51,0x0f,2};
        if(scenario>=15)script={0x1f,0x62,std::uint8_t(scenario>=17?255:0),0x1f,0x60,std::uint8_t(scenario%2?0:255),0x0f,2};
        auto program=install_program(assets,script);Pair pair(assets);pair.program=program;pair.label+=" full DISPLAY_TEXT="+std::to_string(scenario);
        const auto mode=scenario%4;pair.configure(mode,scenario%2?3:0);pair.source.inputs.assign(scenario==2 || scenario>=15?255:26,{});pair.source.inputs.push_back({0x80,0});
        pair.source.put32(pair.source.cpu.direct_page+14,0xee8000);
        pair.source.begin(assets.version==eb::GameVersion::US?0xc186b1:0xc18913,true);
        dialogue::Conversation conversation(program,pair.prompts);conversation.start(dialogue::EntryId{0});pair.conversation_run(conversation);
    }
    for(bool unlock:{false,true}) {
        auto assets=original;const auto glyph=std::uint8_t(assets.version==eb::GameVersion::US?0x7a:0x4a);
        auto program=install_program(assets,unlock?std::vector<std::uint8_t>{0x1f,0x51,0x0f,glyph,0x10,2,glyph,0x1f,0x50,0x1f,0x51,0x0f,2}:
                                                       std::vector<std::uint8_t>{0x0f,glyph,0x10,2,glyph,0x0f,2});
        Pair pair(assets);pair.program=program;pair.label+=" nested DISPLAY_TEXT";pair.configure(1,0);
        pair.source.inputs.assign(26,{});pair.source.inputs.push_back({0x80,0});
        pair.run({dialogue::PromptAction::Prompt,0,1,1},prompt_layout(assets.version).prompt,1,1,unlock?8:6);
    }
}

void native_prompt_cases(const eb::GameAssets& assets) {
    const auto p=prompt_layout(assets.version);
    for(unsigned duration:{0u,1u,2u,15u,255u}) {
        Pair pair(assets);pair.label+=" delay="+std::to_string(duration);pair.configure(0,0);pair.source.inputs.assign(duration,{});
        pair.run({dialogue::PromptAction::Delay,std::uint16_t(duration)},p.delay,duration);
    }
    for(unsigned show:{0u,1u,2u,0xffffu})for(unsigned scenario=0;scenario<8;++scenario) {
        Pair pair(assets);pair.label+=" show="+std::to_string(show)+" scenario="+std::to_string(scenario);
        const unsigned force=scenario==5?2:scenario==4?1:0,mode=scenario==1?0:scenario==5?0xffff:scenario==6?3:scenario==7?2:1;
        const unsigned wait=scenario==3 || scenario==4 || scenario==5?3:0,press=scenario==2?0x80:0;
        pair.configure(mode,wait,press,scenario==7?1:0);pair.source.inputs.assign(scenario==6?26:scenario==0?15:1,{});pair.source.inputs.push_back({0x80,0});
        pair.run({dialogue::PromptAction::Prompt,0,std::uint16_t(show),std::uint16_t(force)},p.prompt,show,force);
    }
    for(unsigned callback=0;callback<6;++callback) {
        Pair pair(assets);pair.label+=" callback="+std::to_string(callback);pair.configure(1,0);
        pair.source.inputs.assign(26,{});pair.source.inputs.push_back({0x80,0});
        pair.run({dialogue::PromptAction::Prompt,0,1,1},p.prompt,1,1,callback);
    }
    {
        Pair pair(assets);pair.label+=" retained child input";pair.configure(1,0);pair.source.inputs={{0,0},{0x80,0}};
        pair.run({dialogue::PromptAction::Prompt,0,1,1},p.prompt,1,1,7);
        require(pair.source.input_index==2,"Parent omitted response incorrectly consumed fresh input");
    }
    for(unsigned duration:{0u,1u,2u,15u})for(unsigned scenario=0;scenario<4;++scenario) {
        Pair pair(assets);pair.label+=" frame-only count="+std::to_string(duration)+" scenario="+std::to_string(scenario);
        pair.configure(0,0,scenario==1?0x400:0);pair.source.frame_inputs.assign(duration,0);
        if(duration && scenario==2)pair.source.frame_inputs.back()=0x400;
        if(duration && scenario==3)pair.source.frame_inputs.front()=0x400;
        pair.run({dialogue::PromptAction::FrameDelay,std::uint16_t(duration)},assets.version==eb::GameVersion::US?0xc4c567:0xc4983f,duration);
    }
    for(unsigned scenario=0;scenario<10;++scenario) {
        Pair pair(assets);pair.label+=" timed="+std::to_string(scenario);
        pair.configure(1,3,scenario==6 || scenario==8?0x8010:0,scenario>=4?1:0,scenario>=5?1:0,scenario==8?1:0);
        pair.source.inputs.assign(2,{});pair.source.inputs.push_back({0x80,0});
        const bool prompt=scenario>=7;const unsigned amount=prompt?1:scenario==0?0:scenario==1?1:scenario==2?0xffff:3;
        pair.run({prompt?dialogue::PromptAction::Prompt:dialogue::PromptAction::TimedWait,std::uint16_t(amount),1,1},prompt?p.prompt:p.timed,amount,1);
    }
}

}
int main(int argc,char** argv) {
    try {
        if(argc<2){std::cout<<"SKIP native prompt source reference: local packs required\n";return 77;}
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
            source_delay_cases(assets);source_prompt_cases(assets);source_timed_and_locked_cases(assets);
            native_prompt_cases(assets);native_conversation_cases(assets);
        }
        std::cout<<"PASS source prompt pilot: "<<prompt_counts.cases<<" cases, "<<prompt_counts.ticks<<" actual WINDOW_TICK calls, "
                 <<prompt_counts.inputs<<" actual input/world ticks, "<<prompt_counts.frames<<" frame-only waits, "
                 <<prompt_counts.blink_changes<<" blink publication changes, "<<counts.instructions<<" original instructions\n";
        std::cout<<"PASS native prompt comparison: "<<native_counts.cases<<" cases, "<<native_counts.events<<" ordered effects ("<<native_counts.window_ticks<<" WindowTick, "<<native_counts.world_ticks<<" WorldTick, "<<native_counts.frame_waits<<" frame-only), "<<native_counts.unlocks
                 <<" external unlocks, "<<native_counts.children<<" completed children, "<<native_counts.conversations<<" complete DISPLAY_TEXT calls, "<<native_counts.boundaries<<" state/image boundaries, "<<native_counts.scene_pixels<<" composed pixels, "
                 <<native_counts.published_pixels<<" actual published pixels, "<<native_counts.ppu_pixels<<" actual source PPU pixels ("<<native_counts.blink_ppu_samples<<" active blink samples)\n";
        std::cout<<"Scope: original source routines, complete DISPLAY_TEXT, captured physical-slot lifecycle and caller stacks, real publication and PPU pixels; "
                 <<"input snapshots, HP/PP inner animation, actor/world pumping and audio are explicit outside-host seams. Busy input locks release only through declared external mutation. No PCM or whole-game claim.\n";
        return 0;
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
