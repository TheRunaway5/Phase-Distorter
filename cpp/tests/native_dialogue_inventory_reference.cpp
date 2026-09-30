// Independent original DISPLAY_TEXT inventory-command oracle. Expected
// labels, records, title artwork and rendering come from Legacy source code.
// Local packs stay immutable; copied image script/catalog fixtures are explicit.
// Source diagnostics cover failed CREATE/title pools, 69/70 allocated options,
// MEMCPY16 odd-size truncation and nested shared footer scratch. Native corpus
// compares full DISPLAY calls, all six character records, equipment positions,
// input selection/cleanup, exact semantic state, source canvases and software PPU.
// Actor pumping/HP-PP/audio and frame-wait completion are declared services.
// JP C439E2/C43BE8 completed-DMA acknowledgements are explicit below; no live
// scheduler, DSP/PCM or GPU proof is inferred. Older reference files stay frozen.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/menu_printer.hpp"
#include "eb/native/dialogue/menu_host.hpp"
#include "eb/native/dialogue/inventory.hpp"
#include "eb/native/party/view.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <memory>
#include <optional>
#include <span>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
namespace dialogue=eb::native::dialogue;
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
enum class Service { WindowTick, WaitFrame, HpPp, ClearPartyBlink, Sound, HideMeters, Input, Callback, Money };
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
    struct NestedCall {
        unsigned returning, expected_stack, expected_direct_page, caller_stack, caller_direct_page;
        std::vector<std::uint8_t> locals, stack;
    };
    std::optional<NestedCall> parent_call;
    bool busy{};
    struct Input {unsigned press{},held{};};
    std::vector<Input> inputs;
    unsigned input_index{},callback_count{};
    std::optional<unsigned> callback_focus;
    unsigned selection_window=1;
    std::vector<unsigned> sounds,callbacks,pages;
    bool real_ticks=false;
    std::function<void(unsigned)> observe_instruction;

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
            const auto pc=cpu.program_counter;if(observe_instruction)observe_instruction(pc);
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
        if(*pending==Service::Input || (*pending==Service::WindowTick && real_ticks)) {
            const bool input=*pending==Service::Input;
            if(input) {
                require(input_index<inputs.size(),"Source selection exhausted explicit input trace: "+cpu.describe_registers());
                const auto next=inputs[input_index++];put(0x6d,next.press);put(0x69,next.held);
                if(slot(selection_window)!=0xffff)pages.push_back(get(record(slot(selection_window))+51));
            } else ++counts.ticks;
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
            throw std::runtime_error("Original menu frame service did not return");
        }
        if(*pending==Service::Callback) {
            callbacks.push_back(cpu.accumulator);++callback_count;if(callback_focus)put(p.focus,*callback_focus);cpu.execute_instruction<0x6b>(0,1);pending.reset();return;
        }
        if(*pending==Service::Money) {cpu.execute_instruction<0x60>(0,1);pending.reset();return;}
        if(*pending==Service::Sound)sounds.push_back(cpu.accumulator);
        if(*pending==Service::ClearPartyBlink || *pending==Service::HideMeters) {
            // The native host exposes a world-owned operation. Its source
            // counterpart is NOT replaced: execute the entire original
            // helper to its real return. Its world-owned sprite state is outside
            // the native dialogue-state comparison.
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
        else if(*pending==Service::WaitFrame)++counts.waits;
        else if(*pending==Service::Sound)++counts.sounds;
        else ++counts.hp_pp;
        // C2077D is called with JSR; the two world/frame seams use JSL.
        if(*pending==Service::HpPp)cpu.execute_instruction<0x60>(0,1);
        else cpu.execute_instruction<0x6b>(0,1);
        pending.reset();
    }
    void enter_nested_display(unsigned pointer) {
        require(busy && pending==Service::WindowTick && !parent_call,"Nested DISPLAY requires a real WindowTick");
        parent_call=NestedCall{returning,expected_stack,expected_direct_page,cpu.stack_pointer,cpu.direct_page,{},{}};
        auto& saved=*parent_call;saved.locals.assign(bus->work_ram.begin()+cpu.direct_page,bus->work_ram.begin()+0x1e12);
        saved.stack.assign(bus->work_ram.begin()+cpu.stack_pointer+1,bus->work_ram.begin()+0x2000);pending.reset();
        cpu.execute_instruction<0xc2>(0x31,2);cpu.execute_instruction<0x0b>(0,1);cpu.execute_instruction<0x7b>(0,1);cpu.execute_instruction<0x69>(0xffee,3);cpu.execute_instruction<0x5b>(0,1);
        expected_stack=cpu.stack_pointer;expected_direct_page=cpu.direct_page;put32(cpu.direct_page+14,pointer);
        cpu.program_counter=0xc1ff80;returning=0xc1ff84;cpu.execute_instruction<0x22>(version==eb::GameVersion::US?0xc186b1:0xc18913,4);
    }
    void leave_nested_display() {
        require(!busy && !pending && parent_call,"Nested DISPLAY did not return");const auto saved=std::move(*parent_call);parent_call.reset();
        cpu.execute_instruction<0x2b>(0,1);require(cpu.stack_pointer==saved.caller_stack && cpu.direct_page==saved.caller_direct_page,"Nested DISPLAY changed parent frame");
        require(std::equal(saved.locals.begin(),saved.locals.end(),bus->work_ram.begin()+saved.caller_direct_page) && std::equal(saved.stack.begin(),saved.stack.end(),bus->work_ram.begin()+saved.caller_stack+1),"Nested DISPLAY changed parent live locals/stack");
        returning=saved.returning;expected_stack=saved.expected_stack;expected_direct_page=saved.expected_direct_page;cpu.program_counter=p.tick;busy=true;pending=Service::WindowTick;
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


struct MenuSource : Source {
    using Source::Source;
    unsigned option(unsigned index)const {require(index<70,"Source menu pool index out of range");return p.menus+index*(version==eb::GameVersion::US?45:44);}
    unsigned append(std::span<const std::uint8_t> label,unsigned script=0,std::optional<unsigned> data={},unsigned x=0,unsigned y=0,bool coordinates=false) {
        require(label.size()<25,"Fixture label exceeds declared source storage");
        std::copy(label.begin(),label.end(),bus->work_ram.begin()+0x5000);bus->work_ram[0x5000+label.size()]=0;
        put32(cpu.direct_page+14,0x7e5000);put32(cpu.direct_page+18,script);
        const bool us=version==eb::GameVersion::US;
        if(data)call(us?0xc1153b:0xc11b27,false,*data,x,y);
        else if(coordinates)call(us?0xc114b1:0xc11ae6,false,x,y);
        else call(us?0xc113d1:0xc11a00,false);
        return cpu.accumulator;
    }
    void arrange(unsigned columns=1,unsigned gap=0,bool centered=false) {
        call(version==eb::GameVersion::US?0xc451fa:0xc11dea,version==eb::GameVersion::US,columns,gap,centered);
    }
    void print_items(){call(version==eb::GameVersion::US?0xc1163c:0xc11bf0,false);}
    std::vector<unsigned> chain(unsigned id) const {
        std::vector<unsigned> result;
        for(unsigned i=get(record(slot(id))+43);i!=0xffff;i=get(option(i)+2)) {
            require(result.size()<70 && std::find(result.begin(),result.end(),i)==result.end(),"Original menu list is cyclic");result.push_back(i);
        }
        return result;
    }
    void install_callback() {
        put32(cpu.direct_page+14,0xee7000);call(version==eb::GameVersion::US?0xc11f5a:0xc1267b,false);
    }
    unsigned select(unsigned mode,std::vector<Input> trace) {
        real_ticks=true;inputs=std::move(trace);input_index=0;
        begin(version==eb::GameVersion::US?0xc1196a:0xc12109,false,mode);
        while(advance())respond();return cpu.accumulator;
    }
};

struct Diagnostics {unsigned cases{},appends{},failed_windows{},full_pools{},max_labels{},streams{},nested_parents{},nested_streams{};std::uint64_t instructions{};} diagnostics;
struct Script {std::vector<std::uint8_t> bytes;unsigned start=0x8000;std::vector<std::uint8_t> child;std::vector<std::uint8_t> dictionary;};
eb::GameAssets install(const eb::GameAssets& original,const Script& script,bool maximum_name=false) {
    auto result=original;for(unsigned i=0;i<script.bytes.size();++i)result.image.at(0x2e0000|((script.start+i)&65535))=script.bytes[i];
    if(!script.child.empty())std::copy(script.child.begin(),script.child.end(),result.image.begin()+0x2e9000);
    if(maximum_name) {
        const bool us=original.version==eb::GameVersion::US;
        // Deliberate copied-image catalog fixture: item1's exact raw name field.
        // All code, other item fields, font and window artwork stay original.
        const unsigned at=(us?0x155000:0x157000)+(us?39:24);
        std::fill_n(result.image.begin()+at,us?25:10,us?0x71:0x41);
    }return result;
}
std::string bytes(std::span<const std::uint8_t> data) {std::ostringstream out;for(auto b:data)out<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(b);return out.str();}
std::string words(const MenuSource& s,unsigned at,unsigned n) {std::ostringstream out;for(unsigned i=0;i<n;++i){if(i)out<<',';out<<std::hex<<s.get(at+2*i);}return out.str();}
void title(MenuSource& s,unsigned id) {
    s.bus->work_ram[0x5100]=s.version==eb::GameVersion::US?0x71:0x41;s.bus->work_ram[0x5101]=0;
    s.put32(s.cpu.direct_page+14,0x7e5100);s.call(s.version==eb::GameVersion::US?0xc2032b:0xc2030c,true,id,1);
}
void inventory_inputs(MenuSource& s,bool equipped) {
    const bool us=s.version==eb::GameVersion::US;const auto member=s.p.party;
    std::fill_n(s.bus->work_ram.begin()+member,us?5:4,0);s.bus->work_ram[member]=us?0x71:0x41;
    std::fill_n(s.bus->work_ram.begin()+member+(us?35:34),18,0);
    s.bus->work_ram[member+(us?35:34)]=1;s.bus->work_ram[member+(us?49:48)]=equipped?1:0;
    s.bus->work_ram[s.p.game+(us?0xaf:0xac)]=2;
}
struct AppendCapture {unsigned address{},focus{};std::array<std::uint8_t,26> temporary{};std::array<std::uint8_t,45> before{},after{};};
struct RunCapture {std::vector<AppendCapture> appends;unsigned tick_count{},wait_count{},glyph_count{};std::vector<unsigned> glyphs;};
RunCapture execute(MenuSource& s,const Script& script) {
    const bool us=s.version==eb::GameVersion::US;const unsigned append=us?0xc113d1:0xc11a00,temp=us?0x9c9f:0x9f4a;
    RunCapture result;unsigned append_return=0,append_stack=0;AppendCapture capture;
    s.observe_instruction=[&](unsigned pc){
        if(pc==append){
            require(!append_return,"Recursive append capture");append_stack=s.cpu.stack_pointer;
            append_return=(pc&0xff0000)|((s.get(append_stack+1)+1)&65535);capture={};capture.focus=s.get(s.p.focus);
            std::copy_n(s.bus->work_ram.begin()+temp,26,capture.temporary.begin());
            std::copy_n(s.bus->work_ram.begin()+s.option(69),us?45:44,capture.before.begin());
        } else if(append_return && pc==append_return && s.cpu.stack_pointer==append_stack+2){
            capture.address=s.cpu.accumulator;require(capture.address>=s.p.menus && capture.address<=s.option(69),"Append returned invalid record");
            std::copy_n(s.bus->work_ram.begin()+capture.address,us?45:44,capture.after.begin());result.appends.push_back(capture);append_return=0;
        }
        if(pc==(us?0xc10cb6u:0xc111ecu)){++result.glyph_count;result.glyphs.push_back(s.cpu.accumulator);}
    };
    s.put32(s.cpu.direct_page+14,0xee0000|script.start);s.begin(us?0xc186b1:0xc18913,true);
    while(const auto event=s.advance()) {
        if(*event==Service::WindowTick)++result.tick_count;if(*event==Service::WaitFrame)++result.wait_count;s.respond();
    }
    require(!append_return,"Append trace did not retire");s.observe_instruction={};
    require(s.get32(0x1e06)==(0xee0000|((script.start+script.bytes.size())&65535)),"Inventory DISPLAY returned wrong cursor");
    ++diagnostics.streams;diagnostics.appends+=result.appends.size();return result;
}
void probe(const eb::GameAssets& original,unsigned mode,bool equipped=false) {
    const bool us=original.version==eb::GameVersion::US;const bool failed=mode==1 || mode==2;const bool maximum=mode==3 || mode==6;
    Script script{{0x1a,5,std::uint8_t(failed?9:2),1,2}};MenuSource s(install(original,script,maximum));s.real_ticks=true;
    s.create(1);inventory_inputs(s,equipped);
    if(maximum && us && mode==3)s.bus->work_ram[0x9c9f+24]=0x71; // retained byte not written by odd MEMCPY16
    if(failed){for(unsigned id=2;id<=8;++id)s.create(id);s.put(s.p.focus,8);if(mode==2)for(unsigned id=1;id<=(us?5u:4u);++id)title(s,id);}
    if(mode==4 || mode==5)for(unsigned i=0;i<(mode==4?69u:70u);++i)s.append(std::array<std::uint8_t,1>{std::uint8_t(us?0x71:0x41)});
    const auto before_titles=words(s,s.p.titles,us?5:4),before_dummy=bytes(std::span(s.bus->work_ram).subspan(s.p.dummy,s.p.record_size));
    const auto fallback_before=bytes(std::span(s.bus->work_ram).subspan(s.option(69),us?45:44));const auto ticks=counts.ticks,waits=counts.waits;
    const auto trace=execute(s,script);
    const auto fallback_after=bytes(std::span(s.bus->work_ram).subspan(s.option(69),us?45:44));
    std::cout<<(us?"US":"JP")<<" mode="<<mode<<" equipped="<<equipped<<" target_slot="<<s.slot(failed?9:2)<<" focus="<<s.get(s.p.focus)<<" dummy_owner="<<unsigned(s.bus->work_ram[s.p.dummy+59])
        <<" titles_before="<<before_titles<<" titles_after="<<words(s,s.p.titles,us?5:4)<<" dummy_title="<<bytes(std::span(s.bus->work_ram).subspan(s.p.dummy+60,us?22:16))
        <<" appends="<<trace.appends.size()<<" ticks="<<counts.ticks-ticks<<" waits="<<counts.waits-waits<<" glyphs="<<trace.glyph_count<<" fallback_changed="<<(fallback_before!=fallback_after)<<'\n';
    for(const auto& a:trace.appends)std::cout<<" append slot="<<(a.address-s.p.menus)/(us?45:44)<<" focus="<<a.focus<<" temp="<<bytes(a.temporary)<<" record="<<bytes(std::span(a.after).first(us?45:44))<<'\n';
    if(failed) {
        require(s.slot(9)==65535 && s.get(s.p.focus)==8 && s.order().size()==8,"Failed CREATE unexpectedly changed focus/open mapping");
        require(s.bus->work_ram[s.p.dummy+60]==(us?0x71:0x41) && s.bus->work_ram[s.p.dummy+61]==0,"Failed CREATE did not write copied title into dummy record");
        require(words(s,s.p.titles,us?5:4)==before_titles,"Failed CREATE changed title owner table");
        require(s.bus->work_ram[s.p.dummy+59]==(mode==1?1:0),"Failed CREATE title allocation differs");++diagnostics.failed_windows;
    }
    if(maximum){
        require(!trace.appends.empty(),"Maximum label missing append");const auto& a=trace.appends.front();const unsigned length=us?(equipped || mode==3?25:24):equipped?11:10;
        require(a.temporary[length]==0,"Maximum source label lacks terminator");
        for(unsigned i=0;i<length;++i)require(a.temporary[i]==(equipped && (us?i==0:i==10)?0x22:us?0x71:0x41),"Maximum source label wrong bytes");
        require(std::equal(a.temporary.begin(),a.temporary.begin()+length+1,a.after.begin()+19),"Appended label differs from prepared temporary");
        if(us && length==25)require(a.after[44]==0,"US25 label NUL did not zero pixel_align");++diagnostics.max_labels;
    }
    if(mode==5){require(fallback_before==fallback_after,"Exhausted inventory unexpectedly mutated fallback69");require(!trace.appends.empty() && trace.appends.front().address==s.option(69),"Full pool did not return fallback69");++diagnostics.full_pools;}
    ++diagnostics.cases;
}

void source_nested_footer(const eb::GameAssets& original) {
    if(original.version!=eb::GameVersion::US)return;
    Script script{{0x1a,5,1,1,2},0x8000,{0x18,2,0x1a,5,2,2,2}};auto assets=install(original,script);assets.image[0x155000+39]=0x71;assets.image[0x155000+40]=0;MenuSource source(assets);source.real_ticks=true;source.create(0);inventory_inputs(source,false);
    std::fill_n(source.bus->work_ram.begin()+source.p.party+35,14,1);
    source.bus->work_ram[source.p.party+source.p.party_size+35]=1;
    bool prefix=false,nested=false;unsigned prefix_return=0,prefix_stack=0,waits=0,ticks=0;
    source.observe_instruction=[&](unsigned pc){
        if(pc==0xc10efc && source.get32(source.cpu.direct_page+14)==0x7e9c9f){prefix=true;prefix_stack=source.cpu.stack_pointer;prefix_return=0xc10000|((source.get(prefix_stack+1)+1)&65535);}
        if(prefix && pc==prefix_return && source.cpu.stack_pointer==prefix_stack+2)prefix=false;
    };
    source.put32(source.cpu.direct_page+14,0xee8000);source.begin(0xc186b1,true);
    while(const auto event=source.advance()) {
        if(*event==Service::WaitFrame){++waits;if(waits==4)source.bus->work_ram[source.p.instant]=0;}
        if(*event==Service::WindowTick){++ticks;if(prefix && !nested){
            const auto before=bytes(std::span(source.bus->work_ram).subspan(0x9c9f,49));nested=true;
            source.enter_nested_display(0xee9000);while(source.advance())source.respond();source.leave_nested_display();
            const auto after=bytes(std::span(source.bus->work_ram).subspan(0x9c9f,49));require(before!=after,"Nested inventory did not change parent shared prefix scratch");
            std::cout<<"US nested footer scratch_before="<<before<<" scratch_after="<<after<<'\n';
        }}source.respond();
    }
    require(nested,"Original inventory page did not reach nested prefix glyph tick waits="+std::to_string(waits)+" ticks="+std::to_string(ticks)+" geometry="+std::to_string(source.get(source.record(source.slot(1))+10))+","+std::to_string(source.get(source.record(source.slot(1))+12))+" chain="+std::to_string(source.chain(1).size()));require(source.get32(0x1e06)==0xee8005,"Nested inventory parent returned wrong cursor");
    ++diagnostics.nested_parents;diagnostics.nested_streams+=2;
    std::cout<<"US nested footer completed parent and child, waits="<<waits<<" ticks="<<ticks<<" parent_chain="<<source.chain(1).size()<<" child_chain="<<source.chain(2).size()<<'\n';
}
struct NativeCounts {unsigned cases{},streams{},effects{},polls{},callbacks{},child_streams{},nested{},provider_reads{},rejected_wallets{},held_frames{};std::uint64_t snapshots{},menu_bytes{},canvas_pixels{},scene_pixels{},ppu_pixels{},brush_pixels{};} native_counts;
std::shared_ptr<const dialogue::Program> program_for(eb::GameVersion version,const Script& script) {
    std::vector<dialogue::ContentBlock> blocks;const auto length=std::min<unsigned>(script.bytes.size(),65536-script.start);
    blocks.push_back({1,std::uint16_t(script.start),{script.bytes.begin(),script.bytes.begin()+length}});
    if(length<script.bytes.size())blocks.push_back({1,0,{script.bytes.begin()+length,script.bytes.end()}});
    blocks.push_back({1,0x9000,script.child.empty()?std::vector<std::uint8_t>{2}:script.child});
    std::vector<dialogue::Location> dictionary;if(!script.dictionary.empty()){blocks.push_back({1,0xa000,script.dictionary});dictionary.push_back({1,0xa000});}
    return std::make_shared<dialogue::Program>(version,std::move(blocks),std::vector<dialogue::Location>{{1,std::uint16_t(script.start)}},
        std::vector<dialogue::ReferenceBinding>{{{0,0x90,0xee,0},dialogue::Location{1,0x9000}}},std::move(dictionary));
}
unsigned raster(const MenuSource& source,unsigned descriptor,unsigned x,unsigned y) {
    if(descriptor&0x4000)x=7-x;if(descriptor&0x8000)y=7-y;const auto address=(0xc000+(descriptor&1023)*16+y*2)&65535;
    const auto color=((source.bus->video_ram[address]>>(7-x))&1)|(((source.bus->video_ram[(address+1)&65535]>>(7-x))&1)<<1);return color?color+((descriptor>>10)&7)*4:0;
}
struct Pair {
    MenuSource source;dialogue::State state;eb::native::party::State party;std::shared_ptr<const dialogue::FontResources> fonts;dialogue::TextOutput output;
    dialogue::WindowHost host;dialogue::MenuModel model;std::shared_ptr<const dialogue::MenuResources> menu_resources;std::shared_ptr<const dialogue::SubstitutionResources> substitution_resources;std::shared_ptr<dialogue::WindowGraphics> graphics;
    // One immutable content identity survives repeated calls on the same pool.
    std::shared_ptr<const dialogue::Program> bound_program;
    std::array<bool,10> attributes_written{};std::array<bool,70> constructed{};std::array<bool,8> defined{};std::string context;unsigned child_calls{};bool nested_requested{},nested_entered{},mutate_money_on_create{};std::uint32_t live_money{},replacement_money{};unsigned source_money_reads{},native_money_reads{};std::function<void(Service,unsigned,bool)> on_event;std::function<void(unsigned)> on_instruction;std::function<bool()> nested_ready;
    Pair(const eb::GameAssets& assets,unsigned flavor=1):source(assets,flavor),party(assets.version),fonts(dialogue::FontResources::import(assets.image,assets.version)),output(fonts,state),
        host(dialogue::WindowResources::import(assets.image,assets.version),state,output),model(host,*fonts),menu_resources(dialogue::MenuResources::import(assets.image,assets.version)),context(assets.version==eb::GameVersion::US?"US":"JP") {
        substitution_resources=dialogue::SubstitutionResources::import(assets.image,assets.version);
        const bool us=assets.version==eb::GameVersion::US;graphics=std::make_shared<dialogue::WindowGraphics>(dialogue::WindowInitializationResources::import(assets.image,assets.version),output);host.set_graphics(graphics);
        std::array<std::uint8_t,5> name{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43),std::uint8_t(us?0x74:0x44),0};dialogue::PartyNameInputs names;for(auto& entry:names.names)entry=name;
        graphics->prepare(names,flavor);auto publish=graphics->begin_publication(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
        while(publish->advance()==dialogue::Progress::Suspended)publish->respond();require(publish->complete(),"Native matched artwork loading incomplete");
        state.unfocused_register_slot=0;source.put(source.p.open+0xfffe,0);source.real_ticks=true;
        source.bus->work_ram[source.p.game+(us?0xafu:0xacu)]=1;source.bus->work_ram[source.p.game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);source.call(us?0xc47f87:0xc45c1a,true);host.publish_palette(flavor,false,true);
        source.cpu.observe_memory_write=[this](std::uint32_t address,std::uint8_t value) {
            if((address>>16)!=0x7e || value!=1)return;const unsigned at=address&65535,stride=source.version==eb::GameVersion::US?45:44;
            if(at>=source.p.menus && at<source.p.menus+70*stride && (at-source.p.menus)%stride==0)constructed[(at-source.p.menus)/stride]=true;
        };
    }
    static std::optional<unsigned> optional(unsigned value){return value==65535?std::nullopt:std::optional<unsigned>{value};}
    void compare(const std::string& where) {
        const auto label=context+" "+where;const bool us=source.version==eb::GameVersion::US;
        require((state.focus?state.focus->value:65535)==source.get(source.p.focus),label+" focus differs native="+std::to_string(state.focus?state.focus->value:65535)+" source="+std::to_string(source.get(source.p.focus))+" PC="+std::to_string(source.cpu.program_counter));
        require(state.stream_slot==source.get(us?0x97b8:0x9a6c),label+" stream ring counter differs");
        for(unsigned stream=0;stream<10;++stream) {
            const auto at=(us?0x96aa:0x995e)+27*stream;const auto& saved=state.streams[stream].saved_window;
            require(bool(saved)==bool(source.get(at+4)),label+" stream restore-enable differs");
            if(attributes_written[stream]) {
                const auto& value=saved.attributes();const auto& style=value.style;const unsigned attrs=(style.palette<<10)|(style.priority?0x2000:0)|(style.flip_horizontal?0x4000:0)|(style.flip_vertical?0x8000:0);
                require((value.id?value.id->value:65535)==source.get(at+6) && value.cursor.column==source.get(at+8) && value.cursor.line==source.get(at+10) && value.number_padding==source.bus->work_ram[at+12] && attrs==source.get(at+13) && style.font==source.get(at+15),label+" retained stream attributes differ");
            }
        }
        const auto scratch=host.text_scratch();require(std::equal(scratch.begin(),scratch.end(),source.bus->work_ram.begin()+(us?0x9c9f:0x9f4a)),label+" shared text scratch differs");
        const auto& dummy=host.dummy_window();const unsigned dummy_owner=source.bus->work_ram[source.p.dummy+59];
        require(dummy.title_owner==(dummy_owner?std::optional<unsigned>{dummy_owner-1}:std::nullopt),label+" dummy title owner differs");
        for(unsigned i=0;i<dummy.title.size();++i)require(dummy.title[i]==source.bus->work_ram[source.p.dummy+60+i],label+" dummy title bytes differ");
        require(source.bus->work_ram[source.p.dummy+60+dummy.title.size()]==0,label+" dummy title length differs");
        require(host.pagination_window()==(source.get(source.p.pagination)==65535?std::optional<dialogue::WindowId>{}:std::optional<dialogue::WindowId>{dialogue::WindowId{source.get(source.p.pagination)}}),label+" pagination target differs");

        for(unsigned id=0;id<source.p.count;++id) {
            const auto physical=source.slot(id);require(host.slot_for({id})==optional(physical),label+" open mapping differs");if(physical<8)defined[physical]=true;
        }
        for(unsigned index=0;index<8;++index)if(defined[index]) {
            const auto base=source.record(index);const auto& meta=host.slot(index);
            const unsigned owner=source.bus->work_ram[base+59];require(meta.title_owner==(owner?std::optional<unsigned>{owner-1}:std::nullopt),label+" title owner differs");
            for(unsigned i=0;i<meta.title.size();++i)require(meta.title[i]==source.bus->work_ram[base+60+i],label+" title bytes differ");require(source.bus->work_ram[base+60+meta.title.size()]==0,label+" title length differs");
const auto& window=host.slot_output(index);const auto& regs=state.registers_at(index).active;require(meta.number_padding==source.bus->work_ram[base+18],label+" number-padding byte differs");
            require(meta.first_option==source.get(base+43) && meta.last_option==source.get(base+45) && meta.selected_option==source.get(base+47) && meta.layout_columns==source.get(base+49) && meta.page_number==source.get(base+51),label+" menu metadata differs slot="+std::to_string(index));
            require(regs.working==source.get32(base+23) && regs.argument==source.get32(base+27) && regs.secondary==source.get(base+31),label+" register bank differs");
            const auto attrs=(window.style.palette<<10)|(window.style.priority?0x2000:0)|(window.style.flip_horizontal?0x4000:0)|(window.style.flip_vertical?0x8000:0);
            require(window.cursor.column==source.get(base+14) && window.cursor.line==source.get(base+16) && attrs==source.get(base+19) && window.style.font==source.get(base+21),label+" cursor/style differs");
            const auto frame=host.slot_frame(index);const auto tilemap=source.get(base+53);require(frame->width==source.get(base+10)*8 && frame->height==source.get(base+12)*8,label+" canvas geometry differs");
            for(unsigned y=0;y<frame->height;++y)for(unsigned x=0;x<frame->width;++x) {
                const auto desc=source.get(tilemap+((y/8)*window.geometry.columns+x/8)*2),color=raster(source,desc,x%8,y%8),pixel=y*frame->width+x;
                require(frame->pixels[pixel]==color && frame->priority[pixel]==(color?bool(desc&0x2000):false),label+" canvas pixel differs slot="+std::to_string(index)+" pixel="+std::to_string(pixel));++native_counts.canvas_pixels;
            }
        }
        for(unsigned i=0;i<70;++i) {
            const auto at=source.option(i);const auto& option=host.menu_options()[i];const auto flags=source.get(at);
            require(option.flags==flags,label+" pool flags differ at "+std::to_string(i));
            require((!constructed[i] || (option.next==optional(source.get(at+2)) && option.previous==optional(source.get(at+4)))) && option.page==source.get(at+6) && option.x==source.get(at+8) && option.y==source.get(at+10) && option.userdata==source.get(at+12) && option.sound_effect==source.bus->work_ram[at+14],label+" option fields differ at "+std::to_string(i)+" native next/prev/page/x/y/data/sound="+std::to_string(option.next.value_or(65535))+","+std::to_string(option.previous.value_or(65535))+","+std::to_string(option.page)+","+std::to_string(option.x)+","+std::to_string(option.y)+","+std::to_string(option.userdata)+","+std::to_string(option.sound_effect)+" source="+std::to_string(source.get(at+2))+","+std::to_string(source.get(at+4))+","+std::to_string(source.get(at+6))+","+std::to_string(source.get(at+8))+","+std::to_string(source.get(at+10))+","+std::to_string(source.get(at+12))+","+std::to_string(source.bus->work_ram[at+14]));
            require(std::equal(option.label.begin(),option.label.end(),source.bus->work_ram.begin()+at+19),label+" retained label bytes differ");
            const auto ptr=source.get32(at+15);require(option.selected_text==(ptr?std::optional<dialogue::Location>{{1,std::uint16_t(ptr)}}:std::nullopt),label+" stored reference differs");
            if(us)require(option.pixel_align==source.bus->work_ram[at+44],label+" fractional alignment differs");native_counts.menu_bytes+=(us?45:44)-(constructed[i]?0:4);
        }
        require(output.policy().instant==bool(source.bus->work_ram[source.p.instant]) && output.redraw_pending()==bool(source.bus->work_ram[source.p.redraw]),label+" instant/redraw differs");
        require(output.fractional_offset()==(source.get(us?0x9e23:0xa029)&7) && output.saturn_composition_active()==bool(source.get(us?0x9e29:0xa02f)),label+" composition flags differ");
        const auto brush=output.composition_snapshot();const unsigned columns=us?52:4,brush_base=us?0x3492:0x9fa9;
        require(brush.columns.size()==columns && brush.brush_column==source.get(us?0x9e25:0xa02b),label+" composition column differs");
        if(us)require(brush.publication_position==source.get(0x9652) && brush.partial_publication==bool(source.get(0x9654)) && output.last_pixel_offset_set()==source.bus->work_ram[0x5e73],label+" US publication/saved-offset differs");
        for(unsigned col=0;col<columns;++col)for(unsigned y=0;y<16;++y)for(unsigned x=0;x<8;++x) {
            const unsigned at=brush_base+col*32+y*2,color=((source.bus->work_ram[at]>>(7-x))&1)|(((source.bus->work_ram[at+1]>>(7-x))&1)<<1);
            require(brush.columns[col][y*8+x]==color,label+" composition pixel differs");++native_counts.brush_pixels;
        }
        if(us)require(host.menu_state().early_tick_exit==bool(source.bus->work_ram[0x968c]),label+" early-tick flag differs");
        const auto scene=host.scene(),published=host.frame();
        for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x) {
            const auto cell=(y/8)*32+x/8,index=y*256+x,desc=source.get(source.p.scene+cell*2),color=raster(source,desc,x%8,y%8);
            require(scene->pixels[index]==color && scene->priority[index]==(color?bool(desc&0x2000):false),label+" composed scene differs");
            const auto at=0xf800+cell*2,visible=source.bus->video_ram[at]|unsigned(source.bus->video_ram[at+1])<<8,visible_color=raster(source,visible,x%8,y%8);
            require(published->pixels[index]==visible_color && published->priority[index]==(visible_color?bool(visible&0x2000):false),label+" published scene differs");native_counts.scene_pixels+=2;
        }++native_counts.snapshots;
    }
    void open(unsigned id) {
        source.create(id);auto operation=host.begin({dialogue::WindowAction::Open,dialogue::WindowId{id}});while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();
        defined[source.slot(id)]=true;compare("create");
    }
    void close(unsigned id) {
        source.close(id);auto operation=host.begin({dialogue::WindowAction::Close,dialogue::WindowId{id}});
        while(operation->advance()==dialogue::OutputProgress::Suspended){if(operation->effect()->kind==dialogue::WindowEffectKind::WindowTick){host.draw_tick();host.publish_scene();}operation->respond();}compare("close");
    }
    void append(std::span<const std::uint8_t> label) {const auto expected=source.append(label);const auto actual=model.append(label);require(expected==source.option(actual),context+" setup append allocation differs");constructed[actual]=true;}
    void absent(unsigned selected) {source.put(source.p.focus,65535);source.put(source.p.open+0xfffe,selected);state.focus.reset();state.unfocused_register_slot=selected;}
    void position(unsigned x,unsigned y) {source.call(source.version==eb::GameVersion::US?0xc438a5:0xc11169,source.version==eb::GameVersion::US,x,y);output.set_cursor(*state.focus,{std::uint16_t(x),std::uint16_t(y)});}
    void final_scene() {
        source.draw_all();source.put32(source.cpu.direct_page+14,0x7e0000|source.p.scene);source.call(0xc08616,true,0,0x800,0x7c00);host.draw_windows();host.publish_scene();compare("published final scene");
        auto display=std::make_unique<eb::SnesBus>(std::span(eb::rom_data(source.version),eb::rom_size(source.version)),source.version);display->video_ram=source.bus->video_ram;
        std::copy_n(source.bus->work_ram.begin()+0x200,64,display->palette_ram.begin());display->write_byte(0x2100,15);display->write_byte(0x2105,1);display->write_byte(0x2109,0x7c);display->write_byte(0x210c,6);display->write_byte(0x212c,4);display->write_byte(0x2112,255);display->write_byte(0x2112,255);
        while(display->completed_frames<2)display->advance_cpu_cycles(1000);const auto frame=host.frame();unsigned nonzero=0;
        for(unsigned i=0;i<256*224;++i){const auto color=host.palette().at(frame->pixels[i]);const auto expand=[](unsigned v){return(v<<3)|(v>>2);};const auto rgb=0xff000000u|(expand(color&31)<<16)|(expand((color>>5)&31)<<8)|expand((color>>10)&31);require(display->native_framebuffer[i]==rgb,context+" source PPU differs");nonzero+=rgb!=0xff000000;++native_counts.ppu_pixels;}
        if(!host.draw_order().empty())require(nonzero,context+" source PPU comparison was blank");
    }
    void run(const Script& script,unsigned budget=7) {
        if(!bound_program)bound_program=program_for(source.version,script);auto program=bound_program;dialogue::MenuHost menus(program,host,menu_resources);menus.inventory().configure(substitution_resources,eb::native::party::View(party));dialogue::Conversation conversation(program,menus);
        source.observe_instruction=[&](unsigned pc) {
            if(on_instruction)on_instruction(pc);
            const bool us=source.version==eb::GameVersion::US;const unsigned base=us?0x96aa:0x995e;
            if(pc==(us?0xc20a20u:0xc208b1u) && source.cpu.accumulator>=base+6 && source.cpu.accumulator<base+276 && (source.cpu.accumulator-base-6)%27==0)attributes_written[(source.cpu.accumulator-base-6)/27]=true;

            if(pc==(source.version==eb::GameVersion::US?0xc186b1u:0xc18913u) && source.get32(source.cpu.direct_page+14)==0xee9000){++child_calls;++native_counts.child_streams;}
        };
        source.put32(0x1e0e,0xee0000|script.start);source.begin(source.version==eb::GameVersion::US?0xc186b1:0xc18913,true);conversation.start(dialogue::EntryId{0});
        std::function<void(dialogue::Conversation&,bool)> drive=[&](dialogue::Conversation& current,bool nested) {
            unsigned event_index=0;
            for(unsigned n=0;n<200000;++n) {
                dialogue::Progress status;try{status=current.advance(budget);}catch(const std::exception& error){throw std::runtime_error(context+" native advance: "+error.what());}if(status==dialogue::Progress::BudgetExhausted)continue;const auto expected=source.advance();compare(std::string(nested?"child ":"parent ")+"event "+std::to_string(event_index));
                if(status==dialogue::Progress::Finished) {
                    require(!expected && !source.busy,context+" native stream finished early");const unsigned finish=(nested?0x9000+script.child.size():script.start+script.bytes.size())&65535;
                    require(current.snapshot().returned_cursor==dialogue::Location{1,std::uint16_t(source.get32(source.cpu.direct_page+6))},context+" final stream cursor differs");
                    require(source.get32(source.cpu.direct_page+6)==(0xee0000|finish),context+" source caller cursor differs");++native_counts.streams;return;
                }
                require(expected && current.event(),context+" effect count differs");const auto event=*current.event();dialogue::Response response;
                if(const auto* effect=std::get_if<dialogue::TextEffect>(&event))require((*expected==Service::Sound && effect->kind==dialogue::TextEffectKind::TextSound)||(*expected==Service::WindowTick && effect->kind==dialogue::TextEffectKind::WindowTick),context+" text effect order differs");
                else if(const auto* effect=std::get_if<dialogue::WindowEffect>(&event))require((*expected==Service::WindowTick && effect->kind==dialogue::WindowEffectKind::WindowTick)||(*expected==Service::WaitFrame && effect->kind==dialogue::WindowEffectKind::FrameWait)||(*expected==Service::ClearPartyBlink && effect->kind==dialogue::WindowEffectKind::ClearPartyBlink),context+" window effect order differs");
                else if(const auto* effect=std::get_if<dialogue::MenuEffect>(&event)) {
                    if(*expected==Service::Input){require(effect->kind==dialogue::MenuEffectKind::Input,context+" input effect differs");const auto input=source.inputs.at(source.input_index);response.pressed=input.press;response.held=input.held;++native_counts.polls;}
                    else if(*expected==Service::Sound)require(effect->kind==dialogue::MenuEffectKind::Sound && effect->value==source.cpu.accumulator,context+" menu sound ID differs");
                    else if(*expected==Service::Callback){require(effect->kind==dialogue::MenuEffectKind::Callback && effect->value==source.cpu.accumulator,context+" callback value differs");++native_counts.callbacks;}
                    else require(*expected==Service::Money && effect->kind==dialogue::MenuEffectKind::ShowMoneyMeters,context+" unexpected menu event");
                } else throw std::runtime_error(context+" authored command left native service");
                require(current.advance(1)==dialogue::Progress::Suspended && current.event()==event,context+" pending effect changed");
                if(on_event)on_event(*expected,event_index,nested);
                if(*expected==Service::WindowTick && !nested && nested_requested && !nested_entered && (!nested_ready || nested_ready())) {
                    const auto held=host.frame();const auto held_pixels=held->pixels;const auto held_priority=held->priority;
                    nested_entered=true;source.enter_nested_display(0xee9000);dialogue::Conversation child(program,menus);child.start_nested(dialogue::Location{1,0x9000},current);
                    drive(child,true);source.leave_nested_display();require(held->pixels==held_pixels && held->priority==held_priority,context+" held scene changed during nested output");++native_counts.held_frames;require(current.event()==event,context+" nested operation lost parent pending tick");compare("parent restored after actual child return");++native_counts.nested;
                }
                if(*expected==Service::WindowTick){if(source.version==eb::GameVersion::US && host.menu_state().early_tick_exit)host.menu_state().early_tick_exit=false;else if(!output.policy().instant){host.draw_tick();host.publish_scene();}}
                source.respond();current.respond(response);++event_index;++native_counts.effects;
            }throw std::runtime_error(context+" native stream exceeded bound");
        };
        drive(conversation,false);source.observe_instruction={};++native_counts.cases;final_scene();
    }
};

void seed_party(Pair& pair,unsigned character=1,bool equipped=false) {
    const bool us=pair.source.version==eb::GameVersion::US;
    auto& actor=pair.party.character(character);actor.items.fill(0);actor.equipment.fill(0);actor.items[0]=1;actor.equipment[0]=equipped?1:0;
    const unsigned base=pair.source.p.party+(character-1)*pair.source.p.party_size;
    std::copy(actor.items.begin(),actor.items.end(),pair.source.bus->work_ram.begin()+base+(us?35:34));
    std::copy(actor.equipment.begin(),actor.equipment.end(),pair.source.bus->work_ram.begin()+base+(us?49:48));
    auto name=pair.party.name_field(character);std::fill(name.begin(),name.end(),0);name[0]=us?0x71:0x41;std::copy(name.begin(),name.end(),pair.source.bus->work_ram.begin()+base);
    pair.party.controlled_count=2;pair.source.bus->work_ram[pair.source.p.game+(us?0xaf:0xac)]=2;
}
void set_title(Pair& pair,unsigned id) {
    title(pair.source,id);dialogue::WindowCommand command;command.action=dialogue::WindowAction::Title;command.id=dialogue::WindowId{id};command.title={std::uint8_t(pair.source.version==eb::GameVersion::US?0x71:0x41)};command.title_limit=1;
    auto operation=pair.host.begin(command);while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();pair.compare("matched title");
}
void native_primary(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned mode=0;mode<7;++mode)for(unsigned equipped:{0u,1u}) {
        const bool failed=mode==1 || mode==2,maximum=mode==3 || mode==6;
        Script script{{0x1a,5,std::uint8_t(failed?9:2),1,2}};Pair pair(install(original,script,maximum));pair.context+=" inventory mode="+std::to_string(mode)+" equipped="+std::to_string(equipped);pair.open(1);seed_party(pair,1,equipped);
        if(maximum && us && mode==3 && !equipped){seed_party(pair,1,true);pair.run(script,1);seed_party(pair,1,false);require(pair.host.text_scratch()[24]==0x71,"Prior equipped inventory did not establish retained byte24");}
        if(failed){for(unsigned id=2;id<=8;++id)pair.open(id);pair.source.put(pair.source.p.focus,8);pair.state.focus=dialogue::WindowId{8};if(mode==2)for(unsigned id=1;id<=(us?5u:4u);++id)set_title(pair,id);}
        if(mode==4 || mode==5)for(unsigned i=0;i<(mode==4?69u:70u);++i)pair.append(std::array<std::uint8_t,1>{std::uint8_t(us?0x71:0x41)});
        pair.run(script,mode%2?1:4096);
    }
}

void sync_actor(Pair& pair,unsigned character) {
    const bool us=pair.source.version==eb::GameVersion::US;const unsigned base=pair.source.p.party+(character-1)*pair.source.p.party_size;const auto& actor=pair.party.character(character);
    std::copy(actor.items.begin(),actor.items.end(),pair.source.bus->work_ram.begin()+base+(us?35:34));std::copy(actor.equipment.begin(),actor.equipment.end(),pair.source.bus->work_ram.begin()+base+(us?49:48));
    const auto name=pair.party.name_field(character);std::copy(name.begin(),name.end(),pair.source.bus->work_ram.begin()+base);
    pair.source.bus->work_ram[pair.source.p.game+(us?0xaf:0xac)]=pair.party.controlled_count;
}
void native_members(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned member=1;member<=6;++member)for(unsigned equipment=0;equipment<4;++equipment)for(unsigned argument:{0u,1u}) {
        const bool save=equipment&1;const auto selector=std::uint8_t(argument?0:member);
        Script script{save?std::vector<std::uint8_t>{0x18,2,0x1a,5,2,selector,0x0f,2}:std::vector<std::uint8_t>{0x1a,5,2,selector,0x0f,2}};script.start=argument?0xfffc:0x8000;
        Pair pair(install(original,script));pair.context+=" member="+std::to_string(member)+" equipment="+std::to_string(equipment)+" arg="+std::to_string(argument);pair.open(1);seed_party(pair,member);
        auto& actor=pair.party.character(member);actor.items.fill(0);actor.items[0]=1;actor.items[7]=2;actor.items[13]=1;actor.equipment.fill(0);actor.equipment[equipment]=equipment%2?14:8;
        auto name=pair.party.name_field(member);std::fill(name.begin(),name.end(),std::uint8_t(us?0x71+member:0x41+member));pair.party.controlled_count=equipment==0?1:equipment==3?255:2;sync_actor(pair,member);
        pair.source.put(pair.source.p.pagination,1);pair.host.set_pagination(dialogue::WindowId{1},pair.host.pagination_frame());
        pair.source.put32(pair.source.record(0)+27,0xabcd0000|member);pair.state.registers_at(0).active.argument=0xabcd0000|member;
        pair.position(3,1);pair.run(script,argument?1:4096);
        require(pair.model.chain(pair.host.metadata({2}).first_option).size()==3,pair.context+" inventory holes did not compact into three records");
        if(us)require(pair.state.focus==dialogue::WindowId{save?1u:2u},pair.context+" inventory save did not preserve restore-enable distinction");
    }
    for(unsigned mode=0;mode<3;++mode) {
        Script script{{0x1a,5,2,0,2}};Pair pair(install(original,script));pair.context+=" absent/dummy mode="+std::to_string(mode);seed_party(pair,6);
        if(mode<2){pair.open(1);pair.absent(0);pair.source.put32(pair.source.record(0)+27,6);pair.state.registers_at(0).active.argument=6;}
        else {pair.source.put32(pair.source.p.dummy+27,6);pair.state.dummy.active.argument=6;}
        if(mode==1){pair.party.character(6).items.fill(0);sync_actor(pair,6);}pair.run(script,1);
    }
}
void native_live_inputs(const eb::GameAssets& original) {
    if(original.version!=eb::GameVersion::US)return;
    for(unsigned change:{0u,1u,2u}) {
        Script script{{0x1a,5,2,1,2}};Pair pair(install(original,script));pair.context+=" live title-wait update="+std::to_string(change);pair.open(1);seed_party(pair,1);bool changed=false;unsigned waits=0;
        pair.on_event=[&](Service event,unsigned,bool){if(event==Service::WaitFrame && ++waits==1){changed=true;auto& actor=pair.party.character(1);actor.items[0]=change?2:0;actor.items[13]=1;actor.equipment[3]=14;auto name=pair.party.name_field(1);name[0]=0x72;pair.party.controlled_count=1;sync_actor(pair,1);}};
        pair.run(script,1);require(changed,pair.context+" never reached title frame boundary");require(pair.host.metadata({2}).title==std::vector<std::uint8_t>{0x71},pair.context+" later live name changed captured title");require(pair.host.pagination_window()==dialogue::WindowId{2},pair.context+" later controlled count changed earlier pagination decision");
    }
}
void native_nested_footer(const eb::GameAssets& original) {
    if(original.version!=eb::GameVersion::US)return;
    Script script{{0x1a,5,1,1,2},0x8000,{0x18,2,0x1a,5,2,2,2}};auto assets=install(original,script);assets.image[0x155000+39]=0x71;assets.image[0x155000+40]=0;
    Pair pair(assets);pair.context+=" nested inventory during live footer prefix";pair.open(0);seed_party(pair,1);seed_party(pair,2);pair.party.character(1).items.fill(1);sync_actor(pair,1);
    bool prefix=false;unsigned prefix_return=0,prefix_stack=0,waits=0;pair.nested_requested=true;
    pair.on_instruction=[&](unsigned pc){if(pc==0xc10efc && pair.source.get32(pair.source.cpu.direct_page+14)==0x7e9c9f){prefix=true;prefix_stack=pair.source.cpu.stack_pointer;prefix_return=0xc10000|((pair.source.get(prefix_stack+1)+1)&65535);}if(prefix && pc==prefix_return && pair.source.cpu.stack_pointer==prefix_stack+2)prefix=false;};
    pair.on_event=[&](Service event,unsigned,bool child){if(!child && event==Service::WaitFrame && ++waits==4){pair.source.bus->work_ram[pair.source.p.instant]=0;pair.output.policy().instant=false;}};
    pair.nested_ready=[&]{return prefix;};pair.run(script,1);require(pair.nested_entered && pair.child_calls==1,"Native nested footer fixture failed to execute real child");
}

void native_selection(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    const std::vector<std::vector<Source::Input>> traces{{{0x80,0}},{{0x400,0},{0x80,0}},{{0,0x100},{0x80,0}},{{0x8000,0}}};
    for(unsigned scenario=0;scenario<traces.size();++scenario) {
        Script script{{0x1a,5,2,1,0x11,0x0f,2}};Pair pair(install(original,script));pair.context+=" inventory construction/selection trace="+std::to_string(scenario);pair.open(0);seed_party(pair,1);
        auto& actor=pair.party.character(1);actor.items[4]=2;actor.items[13]=1;actor.equipment[2]=14;sync_actor(pair,1);pair.source.inputs=traces[scenario];pair.source.selection_window=2;pair.run(script,scenario?1:4096);
        require(pair.host.metadata({2}).first_option==65535 && pair.host.metadata({2}).last_option==65535 && pair.host.metadata({2}).selected_option==65535,pair.context+" CC11 failed cleanup");
        require(pair.state.windows.at({2}).active.secondary==1,pair.context+" following command was not executed");
        (void)us;
    }
}
} // namespace
int main(int argc,char**argv){try {
    if(argc<2){std::cout<<"SKIP inventory reference: local packs required\n";return 77;}
    for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());const auto before_source=counts.instructions;for(unsigned mode=0;mode<7;++mode)probe(assets,mode);probe(assets,3,true);source_nested_footer(assets);diagnostics.instructions+=counts.instructions-before_source;native_primary(assets);native_members(assets);native_live_inputs(assets);native_nested_footer(assets);native_selection(assets);}
    std::cout<<"PASS original inventory diagnostics: "<<diagnostics.cases<<" cases, "<<diagnostics.streams<<" complete DISPLAY streams, "<<diagnostics.failed_windows<<" failed-window/title cases, "<<diagnostics.full_pools<<" full-pool cases, "<<diagnostics.max_labels<<" maximum-label cases, "<<diagnostics.appends<<" observed original append calls, plus "<<diagnostics.nested_parents<<" nested-footer parent / "<<diagnostics.nested_streams<<" streams, "<<diagnostics.instructions<<" source-only instructions\n";
    std::cout<<"Native inventory: "<<native_counts.cases<<" parent cases, "<<native_counts.streams<<" streams, "<<native_counts.nested<<" nested children, "<<native_counts.held_frames<<" held immutable frames, "<<native_counts.polls<<" input polls, "<<native_counts.effects<<" effects, "<<native_counts.snapshots<<" snapshots, "<<native_counts.menu_bytes<<" menu bytes, "<<native_counts.canvas_pixels<<" canvas pixels, "<<native_counts.brush_pixels<<" brush pixels, "<<native_counts.scene_pixels<<" scene pixels, "<<native_counts.ppu_pixels<<" PPU pixels\n";
    std::cout<<"Original execution: "<<counts.instructions<<" instructions across source-only diagnostics, matched cases, setup, nested calls and rendering; "<<counts.dma_acknowledgements<<" JP completed-DMA acknowledgements\n";
    std::cout<<"Scope: complete original/native DISPLAY inventory streams, real CREATE/title/equipment/copy/menu/glyph/frame wrappers, independent canvas and software-PPU expectations. Shared-scratch child returns preserve original stack/DP locals. World/HP-PP/audio and frame-wait completion are explicit seams; no full scheduler, PCM or GPU proof. All six source character records are covered; imported item IDs0..253 and six typed characters bound supported data. Virgin uninitialized menu links are excluded until constructed; retained initialized fields, shared scratch, saved attributes and restoration-enable are compared.\n";return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
