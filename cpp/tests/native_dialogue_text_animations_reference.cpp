// Independent original DISPLAY_TEXT animation/comparison reference. Expected
// state and pixels come from imported original execution, never native assets.
// Original window initialization, fixed art, drawing and WINDOW_TICK execute;
// world-owned inner services are explicit seams, recorded below.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/window_resources.hpp"
#include "eb/native/dialogue/text_animation_resources.hpp"
#include "eb/native/dialogue/text_animations.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/menu_resources.hpp"
#include "eb/native/dialogue/menu_printer.hpp"
#include "eb/native/dialogue/menu_host.hpp"
#include <functional>
#include <sstream>
#include "eb/native/dialogue/window_graphics.hpp"
#include <iomanip>
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <optional>
#include <span>
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
enum class Service { WindowTick, WaitFrame, HpPp, ClearPartyBlink, Sound, HideMeters, Input, WorldTick, Callback, Money };
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
        unsigned returning, expected_stack, expected_direct_page, caller_stack, caller_direct_page; Service boundary;
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
    bool real_ticks=false,selection_input=false; unsigned random_calls{},world_ticks{},fixed_calls{}; std::vector<unsigned> fixed_glyphs;
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
            const auto pc=cpu.program_counter;if(pc==(version==eb::GameVersion::US?0xc10d60u:0xc112aeu)){++fixed_calls;fixed_glyphs.push_back(cpu.accumulator);}if(observe_instruction)observe_instruction(pc);
            if(pc==p.tick || pc==p.wait || pc==p.hppp) {
                pending=pc==p.tick?Service::WindowTick:pc==p.wait?Service::WaitFrame:Service::HpPp;return pending;
            }
            if(pc==(version==eb::GameVersion::US?0xc12e42u:0xc1355eu)) {pending=selection_input?Service::Input:Service::WorldTick;return pending;}
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
        if(*pending==Service::Input || *pending==Service::WorldTick || (*pending==Service::WindowTick && real_ticks)) {
            const bool input=*pending==Service::Input;
            if(input) {
                require(input_index<inputs.size(),"Source selection exhausted explicit input trace: "+cpu.describe_registers());
                const auto next=inputs[input_index++];put(0x6d,next.press);put(0x69,next.held);
                if(slot(selection_window)!=0xffff)pages.push_back(get(record(slot(selection_window))+51));
            } else if(*pending==Service::WorldTick)++world_ticks;else ++counts.ticks;
            // Execute the actual C12E42/WINDOW_TICK wrapper, including all
            // menu-layer drawing, marker upload, RNG and return instructions.
            // Only world-owned HP/PP/audio/actor pumping is a declared seam.
            const unsigned stack=cpu.stack_pointer;
            const unsigned target=((get(stack+1)+1)&65535)|(unsigned(bus->work_ram.at(stack+3))<<16);
            for(unsigned n=0;n<100000;++n) {
                const auto pc=cpu.program_counter;const bool us=version==eb::GameVersion::US;if(pc==(us?0xc08e9au:0xc08e8bu))++random_calls;
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
    void enter_nested_display(unsigned pointer,unsigned entry=0) {
        require(busy && (pending==Service::WindowTick || pending==Service::WorldTick) && !parent_call,"Nested DISPLAY requires a real WindowTick");
        parent_call=NestedCall{returning,expected_stack,expected_direct_page,cpu.stack_pointer,cpu.direct_page,*pending,{},{}};
        auto& saved=*parent_call;saved.locals.assign(bus->work_ram.begin()+cpu.direct_page,bus->work_ram.begin()+0x1e12);
        saved.stack.assign(bus->work_ram.begin()+cpu.stack_pointer+1,bus->work_ram.begin()+0x2000);pending.reset();
        cpu.execute_instruction<0xc2>(0x31,2);cpu.execute_instruction<0x0b>(0,1);cpu.execute_instruction<0x7b>(0,1);cpu.execute_instruction<0x69>(0xffee,3);cpu.execute_instruction<0x5b>(0,1);
        expected_stack=cpu.stack_pointer;expected_direct_page=cpu.direct_page;put32(cpu.direct_page+14,pointer);
        cpu.program_counter=0xc1ff80;returning=0xc1ff84;cpu.execute_instruction<0x22>(entry?entry:(version==eb::GameVersion::US?0xc186b1:0xc18913),4);
    }
    void leave_nested_display() {
        require(!busy && !pending && parent_call,"Nested DISPLAY did not return");const auto saved=std::move(*parent_call);parent_call.reset();
        cpu.execute_instruction<0x2b>(0,1);require(cpu.stack_pointer==saved.caller_stack && cpu.direct_page==saved.caller_direct_page,"Nested DISPLAY changed parent frame");
        require(std::equal(saved.locals.begin(),saved.locals.end(),bus->work_ram.begin()+saved.caller_direct_page) && std::equal(saved.stack.begin(),saved.stack.end(),bus->work_ram.begin()+saved.caller_stack+1),"Nested DISPLAY changed parent live locals/stack");
        returning=saved.returning;expected_stack=saved.expected_stack;expected_direct_page=saved.expected_direct_page;cpu.program_counter=saved.boundary==Service::WindowTick?p.tick:(version==eb::GameVersion::US?0xc12e42:0xc1355e);busy=true;pending=saved.boundary;
    }
    void nested_far(unsigned entry,unsigned a=0,unsigned x=0,unsigned y=0,unsigned parameter=0) {
        enter_nested_display(parameter,entry);cpu.accumulator=a;cpu.x_index=x;cpu.y_index=y;
        while(advance())respond();leave_nested_display();
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
struct SourceCounts {unsigned streams{},effects{},animations{},noops{},comparisons{},ticks{},world_ticks{},random_calls{},fixed_glyphs{};} source_counts;
struct Script {std::vector<std::uint8_t> bytes;unsigned start=0x8000;std::vector<std::uint8_t> child;std::vector<std::uint8_t> dictionary;std::optional<unsigned> returned_offset;};
eb::GameAssets install(const eb::GameAssets& original,const Script& script) {
    auto result=original;for(unsigned i=0;i<script.bytes.size();++i)result.image.at(0x2e0000|((script.start+i)&65535))=script.bytes[i];
    if(!script.child.empty())std::copy(script.child.begin(),script.child.end(),result.image.begin()+0x2e9000);
    if(!script.dictionary.empty()) {
        require(original.version==eb::GameVersion::US,"Dictionary fixture must be US");std::copy(script.dictionary.begin(),script.dictionary.end(),result.image.begin()+0x2ea000);
        const std::array<std::uint8_t,4> pointer{0,0xa0,0xee,0};std::copy(pointer.begin(),pointer.end(),result.image.begin()+0x8cded);
    }return result;
}
unsigned backup(const MenuSource& s){return s.version==eb::GameVersion::US?0x9c8a:0x9f35;}
unsigned money(const MenuSource& s){return s.p.game+(s.version==eb::GameVersion::US?60:57);}
unsigned font_limit(const MenuSource& s){return s.version==eb::GameVersion::US?5:2;}
void absent(MenuSource& source,unsigned slot=0){source.put(source.p.focus,65535);source.put(source.p.open+65534,slot);}
void execute(MenuSource& source,const Script& script,std::function<void(Service)> seam={}) {
    source.put32(source.cpu.direct_page+14,0xee0000|script.start);source.begin(source.version==eb::GameVersion::US?0xc186b1:0xc18913,true);
    while(const auto event=source.advance()){++source_counts.effects;if(seam)seam(*event);source.respond();}
    require(source.get32(0x1e06)==(0xee0000|((script.returned_offset.value_or(script.start+script.bytes.size()))&65535)),"Original window-command stream cursor differs");++source_counts.streams;
}

std::vector<unsigned> expected_sequence(const eb::GameAssets& assets,unsigned selector) {
    const unsigned at=(assets.version==eb::GameVersion::US?0x3e84e:0x3e432)+(selector==2?20:0);
    std::vector<unsigned> result;for(unsigned i=0;i<9;++i)result.push_back(assets.image.at(at+i*2)|(unsigned(assets.image.at(at+i*2+1))<<8));return result;
}
void source_animations(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned selector:{0u,1u,2u,3u,255u})for(unsigned instant:{0u,1u})for(unsigned font:{0u,1u}) {
        Script script{{0x1c,8,std::uint8_t(selector),0x0f,2}};MenuSource source(install(original,script));source.create(1);source.real_ticks=true;
        source.put(source.record(0)+21,font);source.put(source.record(0)+19,0xe400);source.bus->work_ram[source.p.instant]=instant;
        const auto fixed_before=source.fixed_calls,random_before=source.random_calls;const auto tick_before=counts.ticks;std::vector<Service> events;
        execute(source,script,[&](Service event){events.push_back(event);});
        require(source.get(source.record(0)+31)==1,"Animation selector consumed continuation byte");
        if(selector==1 || selector==2) {
            std::vector<Service> expected(selector==1?9:4,Service::WindowTick);if(selector==2){expected.insert(expected.end(),8,Service::WorldTick);expected.insert(expected.end(),5,Service::WindowTick);}
            require(events==expected,"Original animation effect sequence differs from source control flow");
            require(source.fixed_calls-fixed_before==9 && source.random_calls-random_before==9 && counts.ticks-tick_before==9,"Original fixed/tick/RAND count differs");
            require(source.fixed_glyphs==expected_sequence(original,selector),"Original glyph operands differ from imported sequence");
            require(source.get(source.record(0)+19)==0,"Animation restored instead of clearing full attributes");++source_counts.animations;source_counts.fixed_glyphs+=9;source_counts.ticks+=9;source_counts.random_calls+=9;source_counts.world_ticks+=selector==2?8:0;
        } else {require(events.empty() && source.fixed_calls==fixed_before && source.get(source.record(0)+19)==0xe400,"Unknown selector was not a complete no-op");++source_counts.noops;}
    }
}
std::vector<std::uint8_t> compare_command(std::uint32_t value,unsigned selector) {
    std::vector<std::uint8_t> code{0x18,7};for(unsigned i=0;i<4;++i)code.push_back(value>>(8*i));code.push_back(selector);return code;
}
void source_comparisons(const eb::GameAssets& original) {
    const std::array<std::uint32_t,8> values{0,1,0xffff,0x10000,0x7fffffff,0x80000000,0xffff0000,0xffffffff};
    for(unsigned selector:{0u,1u,2u,255u})for(unsigned i=0;i<values.size();++i) {
        const auto literal=values[i],selected=values[(i+3)%values.size()];Script script{compare_command(literal,selector)};script.bytes.push_back(2);MenuSource source(install(original,script));source.create(1);
        source.put32(source.record(0)+23,selected);source.put32(source.record(0)+27,selected);source.put(source.record(0)+31,selected);execute(source,script);
        const auto compared=selector<2?selected:selected&65535;const unsigned expected=compared<literal?0:compared==literal?1:2;
        require(source.get32(source.record(0)+23)==expected && source.get32(source.record(0)+27)==selected && source.get(source.record(0)+31)==(selected&65535),"Original unsigned comparison/register selection differs");++source_counts.comparisons;
    }
}
struct NativeCounts {unsigned cases{},streams{},effects{},polls{},callbacks{},child_streams{},nested{},provider_reads{},rejected_wallets{},held_frames{},window_ticks{},world_ticks{},rand_calls{},comparison_cases{},animation_cases{},noops{},fixed_source_calls{},reload_callbacks{};std::uint64_t snapshots{},menu_bytes{},canvas_pixels{},scene_pixels{},ppu_pixels{},brush_pixels{};} native_counts;
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
    MenuSource source;dialogue::State state;std::shared_ptr<const dialogue::FontResources> fonts;dialogue::TextOutput output;
    dialogue::WindowHost host;dialogue::MenuModel model;std::shared_ptr<const dialogue::MenuResources> menu_resources;std::shared_ptr<dialogue::WindowGraphics> graphics;
    std::array<bool,70> constructed{};std::array<bool,8> defined{};std::string context;std::function<void(Pair&,dialogue::Conversation&,Service,unsigned)> callback;std::function<void(Pair&,const dialogue::Snapshot&)> budget_callback;std::function<void(unsigned)> source_instruction_hook;unsigned nested_at{},child_calls{};bool nested_requested{},nested_entered{},nested_input{},mutate_money_on_create{};std::uint32_t live_money{},replacement_money{};unsigned source_money_reads{},native_money_reads{};
    Pair(const eb::GameAssets& assets,unsigned flavor=1):source(assets,flavor),fonts(dialogue::FontResources::import(assets.image,assets.version)),output(fonts,state),
        host(dialogue::WindowResources::import(assets.image,assets.version),state,output),model(host,*fonts),menu_resources(dialogue::MenuResources::import(assets.image,assets.version)),context(assets.version==eb::GameVersion::US?"US":"JP") {
        const bool us=assets.version==eb::GameVersion::US;graphics=std::make_shared<dialogue::WindowGraphics>(dialogue::WindowInitializationResources::import(assets.image,assets.version),output);host.set_graphics(graphics);
        std::array<std::uint8_t,5> name{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43),std::uint8_t(us?0x74:0x44),0};dialogue::PartyNameInputs names;for(auto& entry:names.names)entry=name;
        graphics->prepare(names,flavor);auto publish=graphics->begin_publication(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
        while(publish->advance()==dialogue::Progress::Suspended)publish->respond();require(publish->complete(),"Native matched artwork loading incomplete");
        state.unfocused_register_slot=0;source.put(source.p.open+0xfffe,0);source.real_ticks=true;
        source.bus->work_ram[source.p.game+(us?0xafu:0xacu)]=1;source.bus->work_ram[source.p.game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);source.call(us?0xc47f87:0xc45c1a,true);host.publish_palette(flavor,false,true);
        host.animations().configure(dialogue::TextAnimationResources::import(assets.image,assets.version));
        source.cpu.observe_memory_write=[this](std::uint32_t address,std::uint8_t value) {
            if((address>>16)!=0x7e || value!=1)return;const unsigned at=address&65535,stride=source.version==eb::GameVersion::US?45:44;
            if(at>=source.p.menus && at<source.p.menus+70*stride && (at-source.p.menus)%stride==0)constructed[(at-source.p.menus)/stride]=true;
        };
    }
    static std::optional<unsigned> optional(unsigned value){return value==65535?std::nullopt:std::optional<unsigned>{value};}
    void compare(const std::string& where) {
        const auto label=context+" "+where;const bool us=source.version==eb::GameVersion::US;
        require((state.focus?state.focus->value:65535)==source.get(source.p.focus),label+" focus differs");
        require(state.dummy.active.working==source.get32(source.p.dummy+23) && state.dummy.active.argument==source.get32(source.p.dummy+27) && state.dummy.active.secondary==source.get(source.p.dummy+31),label+" dummy registers differ");
        for(unsigned id=0;id<source.p.count;++id) {
            const auto physical=source.slot(id);require(host.slot_for({id})==optional(physical),label+" open mapping differs");if(physical<8)defined[physical]=true;
        }
        for(unsigned index=0;index<8;++index)if(defined[index]) {
            const auto base=source.record(index);const auto& meta=host.slot(index);const auto& window=host.slot_output(index);const auto& regs=state.registers_at(index).active;require(meta.number_padding==source.bus->work_ram[base+18],label+" number-padding byte differs");
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
        require(host.prompt_state().pressed==source.get(0x6d),label+" shared pressed snapshot differs");
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
        const auto rand_before=source.random_calls,fixed_before=source.fixed_calls;unsigned actual_ticks=0;
        auto program=program_for(source.version,script);dialogue::MenuHost menus(program,host,menu_resources);dialogue::Conversation conversation(program,menus);
        source.observe_instruction=[&](unsigned pc) {
            if(pc==(source.version==eb::GameVersion::US?0xc186b1u:0xc18913u) && source.get32(source.cpu.direct_page+14)==0xee9000){++child_calls;++native_counts.child_streams;}
            if(source_instruction_hook)source_instruction_hook(pc);
            if(pc==(source.version==eb::GameVersion::US?0xc1aa3au:0xc1a920u)){++source_money_reads;require(source.bus->work_ram[source.p.instant]==1,"Source wallet value read before preparation");}
        };
        source.put32(0x1e0e,0xee0000|script.start);source.begin(source.version==eb::GameVersion::US?0xc186b1:0xc18913,true);conversation.start(dialogue::EntryId{0});
        std::function<void(dialogue::Conversation&,bool)> drive=[&](dialogue::Conversation& current,bool nested) {
            unsigned event_index=0;
            for(unsigned n=0;n<200000;++n) {
                dialogue::Progress status;try{status=current.advance(budget);}catch(const std::exception& error){throw std::runtime_error(context+" native advance: "+error.what());}if(status==dialogue::Progress::BudgetExhausted){if(budget_callback)budget_callback(*this,current.snapshot());continue;}const auto expected=source.advance();compare(std::string(nested?"child ":"parent ")+"event "+std::to_string(event_index));
                if(status==dialogue::Progress::Finished) {
                    require(!expected && !source.busy,context+" native stream finished early");const unsigned finish=(nested?0x9000+script.child.size():script.returned_offset.value_or(script.start+script.bytes.size()))&65535;
                    require(current.snapshot().returned_cursor==dialogue::Location{1,std::uint16_t(source.get32(source.cpu.direct_page+6))},context+" final stream cursor differs");
                    require(source.get32(source.cpu.direct_page+6)==(0xee0000|finish),context+" source caller cursor differs");++native_counts.streams;return;
                }
                require(expected && current.event(),context+" effect count differs");const auto event=*current.event();dialogue::Response response;
                if(const auto* effect=std::get_if<dialogue::TextEffect>(&event))require((*expected==Service::Sound && effect->kind==dialogue::TextEffectKind::TextSound)||(*expected==Service::WindowTick && effect->kind==dialogue::TextEffectKind::WindowTick),context+" text effect order differs");
                else if(const auto* effect=std::get_if<dialogue::WindowEffect>(&event))require((*expected==Service::WindowTick && effect->kind==dialogue::WindowEffectKind::WindowTick)||(*expected==Service::WaitFrame && effect->kind==dialogue::WindowEffectKind::FrameWait)||(*expected==Service::ClearPartyBlink && effect->kind==dialogue::WindowEffectKind::ClearPartyBlink)||(*expected==Service::HideMeters && effect->kind==dialogue::WindowEffectKind::HideMeters),context+" window effect order differs");
                else if(const auto* effect=std::get_if<dialogue::MenuEffect>(&event)) {
                    if(*expected==Service::Input){require(effect->kind==dialogue::MenuEffectKind::Input,context+" input effect differs");const auto input=source.inputs.at(source.input_index);response.pressed=input.press;response.held=input.held;++native_counts.polls;}
                    else if(*expected==Service::Sound)require(effect->kind==dialogue::MenuEffectKind::Sound && effect->value==source.cpu.accumulator,context+" menu sound ID differs");
                    else if(*expected==Service::Callback){require(effect->kind==dialogue::MenuEffectKind::Callback && effect->value==source.cpu.accumulator,context+" callback value differs");++native_counts.callbacks;}
                    else require(*expected==Service::Money && effect->kind==dialogue::MenuEffectKind::ShowMoneyMeters,context+" unexpected menu event");
                } else if(const auto* effect=std::get_if<dialogue::PromptEffect>(&event))require(*expected==Service::WorldTick && effect->kind==dialogue::PromptEffectKind::WorldTick,context+" world tick confused with window tick");
                else throw std::runtime_error(context+" authored command left native service");
                require(current.advance(1)==dialogue::Progress::Suspended && current.event()==event,context+" pending effect changed");
                if((*expected==Service::WindowTick || *expected==Service::WorldTick) && !nested && nested_requested && !nested_entered && event_index==nested_at) {
                    const auto held=host.frame();const auto held_pixels=held->pixels;const auto held_priority=held->priority;
                    nested_entered=true;source.enter_nested_display(0xee9000);dialogue::Conversation child(program,menus);child.start_nested(dialogue::Location{1,0x9000},current);
                    drive(child,true);source.leave_nested_display();require(held->pixels==held_pixels && held->priority==held_priority,context+" held scene changed during nested output");++native_counts.held_frames;require(current.event()==event,context+" nested operation lost parent pending tick");compare("parent restored after actual child return");++native_counts.nested;
                }
                if(!nested && callback)callback(*this,current,*expected,event_index);
                if(*expected==Service::ClearPartyBlink && mutate_money_on_create){live_money=replacement_money;source.put32(money(source),replacement_money);mutate_money_on_create=false;}
                if(*expected==Service::WorldTick)++native_counts.world_ticks;
                if(*expected==Service::WindowTick){++actual_ticks;++native_counts.window_ticks;if(source.version==eb::GameVersion::US && host.menu_state().early_tick_exit)host.menu_state().early_tick_exit=false;else if(!output.policy().instant){host.draw_tick();host.publish_scene();}}
                if(nested && nested_input && *expected==Service::WindowTick){response.pressed=std::uint16_t(0x120+event_index);source.put(0x6d,response.pressed);}
                source.respond();if(*expected==Service::Input || (nested && nested_input && *expected==Service::WindowTick))current.respond(response);else current.respond();++event_index;++native_counts.effects;
            }throw std::runtime_error(context+" native stream exceeded bound");
        };
        drive(conversation,false);require(source.random_calls-rand_before==actual_ticks,context+" original RAND was not called once per window tick");native_counts.rand_calls+=actual_ticks;native_counts.fixed_source_calls+=source.fixed_calls-fixed_before;++native_counts.cases;final_scene();
    }
};
void set_font(Pair& pair,unsigned font) {const auto id=*pair.state.focus;const auto slot=*pair.host.slot_for(id);pair.source.put(pair.source.record(slot)+21,font);auto style=pair.output.window(id).style;style.font=font;pair.output.set_style(id,style);}
void instant(Pair& pair,bool enabled){pair.source.bus->work_ram[pair.source.p.instant]=enabled;pair.output.policy().instant=enabled;}
void partial(Pair& pair,unsigned font) {
    set_font(pair,font);instant(pair,true);const unsigned glyph=pair.source.version==eb::GameVersion::US?0x77:0x63;
    pair.source.call(pair.source.version==eb::GameVersion::US?0xc10cb6:0xc111ec,false,glyph);pair.output.begin_glyph(glyph);
    while(pair.output.advance()==dialogue::OutputProgress::Suspended)pair.output.respond();require(pair.output.complete(),"Native partial glyph setup incomplete");pair.compare("matched partial glyph");
}
void make_menu(Pair& pair,unsigned id) {
    pair.open(id);const auto letter=std::uint8_t(pair.source.version==eb::GameVersion::US?0x71:0x41);for(unsigned i=0;i<3;++i)pair.append(std::array<std::uint8_t,2>{std::uint8_t(letter+i),letter});
    pair.source.arrange(1);pair.model.layout({1,0,false},pair.menu_resources->next_page_label());pair.source.print_items();dialogue::MenuPrinter printer(pair.host,pair.menu_resources);
    auto operation=printer.begin({dialogue::MenuPrintAction::Page});while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();require(operation->complete(),"Native initial page incomplete");pair.compare("actual prebuilt menu");
}
void set_focus(Pair& pair,unsigned id){pair.source.put(pair.source.p.focus,id);pair.state.focus=dialogue::WindowId{id};}
void set_money(Pair& pair,unsigned value){pair.live_money=value;pair.source.put32(money(pair.source),value);}

void style(Pair& pair,unsigned attributes,unsigned font) {
    const auto id=*pair.state.focus;const auto slot=*pair.host.slot_for(id);pair.source.put(pair.source.record(slot)+19,attributes);pair.source.put(pair.source.record(slot)+21,font);
    pair.output.set_style(id,{std::uint16_t(font),std::uint8_t((attributes>>10)&7),bool(attributes&0x2000),bool(attributes&0x4000),bool(attributes&0x8000)});
}
void native_animations(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned selector:{1u,2u})for(unsigned policy=0;policy<4;++policy)for(unsigned font=0;font<(us?5u:2u);++font) {
        Script script{{0x1c,8,std::uint8_t(selector),0x0f,2}};Pair pair(install(original,script));pair.context+=" animation="+std::to_string(selector)+" policy="+std::to_string(policy)+" font="+std::to_string(font);pair.open(1);style(pair,0xe400,font);instant(pair,policy&1);
        if(us && policy>=2){pair.source.bus->work_ram[0x968c]=1;pair.host.menu_state().early_tick_exit=true;}
        const auto effects=native_counts.effects,ticks=native_counts.window_ticks,world=native_counts.world_ticks,fixed=pair.source.fixed_calls;pair.run(script,policy&1?4096:1);
        require(native_counts.window_ticks-ticks==9 && native_counts.world_ticks-world==(selector==2?8u:0u) && pair.source.fixed_calls-fixed==9 && native_counts.effects-effects==(selector==2?17u:9u),"Native animation omitted a source tick/placement or added audio");
        require(pair.output.window({1}).style==dialogue::TextStyle{std::uint16_t(font),0,false,false,false},"Native animation did not replace exit attributes");++native_counts.animation_cases;
    }
    Script noops;for(unsigned selector=0;selector<256;++selector)if(selector!=1 && selector!=2){noops.bytes.insert(noops.bytes.end(),{0x1c,8,std::uint8_t(selector),0x0f});}noops.bytes.push_back(2);
    Pair pair(install(original,noops));pair.context+=" every no-op animation selector";pair.open(1);style(pair,0xe400,1);const auto effects=native_counts.effects;pair.run(noops,1);
    require(native_counts.effects==effects && pair.state.registers_at(0).active.secondary==254 && pair.output.window({1}).style.palette==1,"No-op selector altered output or consumed next command");native_counts.noops+=254;
}
void seed_registers(Pair& pair,unsigned mode,std::uint32_t working,std::uint32_t argument,std::uint16_t secondary) {
    if(mode==3){pair.source.put32(pair.source.p.dummy+23,working);pair.source.put32(pair.source.p.dummy+27,argument);pair.source.put(pair.source.p.dummy+31,secondary);pair.state.dummy.active={working,argument,secondary};return;}
    pair.source.put32(pair.source.record(0)+23,working);pair.source.put32(pair.source.record(0)+27,argument);pair.source.put(pair.source.record(0)+31,secondary);pair.state.registers_at(0).active={working,argument,secondary};
}
void native_comparison_case(const eb::GameAssets& original,unsigned selector,std::uint32_t literal,std::uint32_t value,unsigned mode=0) {
    Script script{compare_command(literal,selector),selector%2?0xfffdu:0x8000u};script.bytes.push_back(2);Pair pair(install(original,script));pair.context+=" unsigned compare selector="+std::to_string(selector)+" literal="+std::to_string(literal)+" value="+std::to_string(value)+" mode="+std::to_string(mode);
    if(mode!=3)pair.open(1);if(mode==1)pair.absent(0);if(mode==2){pair.open(2);pair.close(1);pair.absent(0);}if(mode==3)pair.absent(65535);
    seed_registers(pair,mode,value,value,std::uint16_t(value));pair.run(script,selector%2?1:4096);const auto& regs=mode==3?pair.state.dummy.active:pair.state.registers_at(0).active;const auto compared=selector<2?value:value&65535;
    require(regs.working==(compared<literal?0:compared==literal?1:2) && regs.argument==value && regs.secondary==(value&65535),"Unsigned selector/zero extension/unchanged register contract differs");++native_counts.comparison_cases;
}
void native_comparisons(const eb::GameAssets& original) {
    constexpr std::array<std::uint32_t,8> values{0,1,0xffff,0x10000,0x7fffffff,0x80000000,0xffff0000,0xffffffff};
    for(unsigned selector=0;selector<256;++selector)native_comparison_case(original,selector,values[selector%8],values[(selector+3)%8]);
    for(unsigned selector:{0u,1u,2u})for(auto literal:values)for(auto value:values)native_comparison_case(original,selector,literal,value);
    for(unsigned mode:{1u,2u,3u})for(unsigned selector:{0u,1u,2u,255u})native_comparison_case(original,selector,0x80000000,0xffff0000,mode);
}

void native_lifecycle(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned mode=0;mode<11;++mode) {
        Script script{{0x1c,8,2,2}};
        if(mode==4)script.child={0x18,0,2};
        if(mode==5)script.child={0x18,4,2};
        if(mode==6)script.child={0x18,0,0x18,1,3,2};
        if(mode==7)script.child={0x1c,8,1,2};
        if(mode==8)script.child={0x1f,0x31,std::uint8_t(us?0x77:0x63),2};
        Pair pair(install(original,script));pair.context+=" live animation callback/lifecycle="+std::to_string(mode);pair.open(1);style(pair,0xe400,1);
        if(mode==0){pair.open(2);pair.absent(0);}
        if(mode==1){pair.close(1);pair.absent(0);}
        if(mode==2){const auto& window=pair.output.window({1});pair.position(window.geometry.columns-1,window.geometry.tile_rows/2-1);}
        if(mode==3){pair.open(2);set_focus(pair,1);pair.callback=[](Pair& at,dialogue::Conversation&,Service,unsigned event){if(event==0){set_focus(at,2);style(at,0x7400,1);}if(event==2)style(at,0x8400,0);};}
        if(mode>=4 && mode<=8){pair.nested_requested=true;pair.nested_at=mode==7?6:mode==8?16:0;pair.nested_input=mode==7;}
        if(mode==9)pair.callback=[us](Pair& at,dialogue::Conversation&,Service,unsigned event){
            if(event==0)instant(at,true);if(event==4)instant(at,false);
            if(us && event==12){at.source.bus->work_ram[0x968c]=1;at.host.menu_state().early_tick_exit=true;}
            const auto pressed=std::uint16_t(event*17);at.source.put(0x6d,pressed);at.host.prompt_state().pressed=pressed;
        };
        if(mode==10)pair.callback=[us](Pair& at,dialogue::Conversation& parent,Service,unsigned event){if(event!=1)return;
            const auto held=at.host.frame();const auto old=held->pixels;
            std::array<std::uint8_t,5> name{std::uint8_t(us?0x75:0x45),std::uint8_t(us?0x76:0x46),std::uint8_t(us?0x77:0x47),std::uint8_t(us?0x78:0x48),0};
            for(unsigned member=0;member<4;++member)std::copy_n(name.begin(),4,at.source.bus->work_ram.begin()+at.source.p.party+member*at.source.p.party_size);
            at.source.bus->work_ram[at.source.p.game+at.source.p.flavor]=2;at.source.nested_far(at.source.p.load_gfx);
            if(us)at.source.nested_far(0xc44963,1);else at.source.nested_far(0xc08616,0,0x3800,0x6000,0x7f0000);
            dialogue::PartyNameInputs names;for(auto& member:names.names)member=name;at.graphics->prepare_nested(names,2,parent);
            auto publication=at.graphics->begin_publication_nested(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All,parent);
            while(publication->advance()==dialogue::Progress::Suspended)publication->respond();require(publication->complete(),"Live artwork publication did not complete");
            require(held->pixels==old,"Live artwork reload mutated immutable frame");++native_counts.held_frames;++native_counts.reload_callbacks;if(us)require(at.host.frame()->pixels!=old,"US live border artwork alias did not observe reload");at.compare("source and native live initialization callback");
        };
        pair.run(script,1);if(mode>=4 && mode<=8)require(pair.nested_entered,"Animation callback did not enter complete child");if(mode==7)require(pair.host.prompt_state().pressed==0x128,"Parent acknowledgement discarded child input snapshot");++native_counts.animation_cases;
    }
}

void native_comparison_continuations(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned condition:{2u,3u})for(unsigned value:{0u,1u,2u}) {
        Script script{compare_command(1,1)};script.bytes.insert(script.bytes.end(),{0x1b,std::uint8_t(condition),0,0x90,0xee,0,0x1c,8,1,2});script.child={0x1c,8,2,0x0f,2};
        const auto expected=value<1?0:value==1?1:2;const bool taken=(expected==0)==(condition==2);if(taken)script.returned_offset=0x9005;
        Pair pair(install(original,script));pair.context+=" comparison/conditional/animation value="+std::to_string(value)+" condition="+std::to_string(condition);pair.open(1);seed_registers(pair,0,0x12345678,value,0);const auto world=native_counts.world_ticks;pair.run(script,1);
        require(pair.state.registers_at(0).active.working==expected && pair.state.registers_at(0).active.secondary==unsigned(taken) && native_counts.world_ticks-world==(taken?8u:0u),"Comparison conditional chose wrong animation continuation");++native_counts.comparison_cases;
    }
    if(us) {
        Script script{{0x15,0,2},0xfffe,{}, {0x18,7,0x15,0x16,0x17,0x18,1,0}};Pair pair(install(original,script));pair.context+=" dictionary comparison literals";pair.open(1);seed_registers(pair,0,0xffffffff,0x18171615,0x4321);pair.run(script,1);require(pair.state.registers_at(0).active.working==1,"Dictionary operand prefix expanded recursively");++native_counts.comparison_cases;
    }
    Script script{compare_command(0x80000000,1)};script.bytes.push_back(2);Pair pair(install(original,script));pair.context+=" comparison reads live register at fifth operand";pair.open(1);seed_registers(pair,0,0x12345678,0,0x4321);bool native_mutated=false,source_mutated=false;
    pair.budget_callback=[&](Pair& at,const dialogue::Snapshot& snapshot){if(!native_mutated && snapshot.consumed_bytes==6){at.state.registers_at(0).active.argument=0xffffffff;native_mutated=true;}};
    pair.source_instruction_hook=[&](unsigned pc){if(pc==(us?0xc1528du:0xc15547u) && pair.source.get(us?0x97ca:0x9a7e)==4){pair.source.put32(pair.source.record(0)+27,0xffffffff);source_mutated=true;}};
    pair.run(script,1);require(native_mutated && source_mutated && pair.state.registers_at(0).active.working==2,"Comparison captured register before final operand");++native_counts.comparison_cases;
}

}
int main(int argc,char**argv){try{
    if(argc<2){std::cout<<"SKIP text-animation source reference: local packs required\n";return 77;}
    for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());source_animations(assets);source_comparisons(assets);native_animations(assets);native_comparisons(assets);native_lifecycle(assets);native_comparison_continuations(assets);}
    std::cout<<"PASS original animation pilot: "<<source_counts.streams<<" full streams, "<<source_counts.animations<<" animations, "<<source_counts.noops<<" no-ops, "<<source_counts.comparisons<<" comparisons, "<<source_counts.fixed_glyphs<<" fixed glyphs, "<<source_counts.ticks<<" real window ticks, "<<source_counts.random_calls<<" actual RAND calls, "<<source_counts.world_ticks<<" distinct world ticks, "<<counts.instructions<<" original instructions\n";
    std::cout<<"PASS native animation/comparison: "<<native_counts.cases<<" parents, "<<native_counts.streams<<" explicit streams, "<<native_counts.nested<<" nested children, "<<native_counts.held_frames<<" immutable held frames, "<<native_counts.reload_callbacks<<" live artwork reloads, "<<native_counts.animation_cases<<" dedicated animation cases, "<<native_counts.noops<<" no-op selectors, "<<native_counts.comparison_cases<<" comparisons, "<<native_counts.fixed_source_calls<<" source direct-fixed calls, "<<native_counts.effects<<" effects, "<<native_counts.window_ticks<<" window ticks, "<<native_counts.world_ticks<<" world ticks, "<<native_counts.rand_calls<<" source RAND calls, "<<native_counts.snapshots<<" states, "<<native_counts.canvas_pixels<<" canvas pixels, "<<native_counts.brush_pixels<<" brush pixels, "<<native_counts.scene_pixels<<" scene pixels, "<<native_counts.ppu_pixels<<" PPU pixels\n";
    std::cout<<"Scope: full original/native DISPLAY, live/retired/dummy register and canvas state, exact fixed-art sequences, real source window/world wrappers and software PPU. RAND executes only in the source adapter and is counted once per window tick; native exposes typed world boundaries, not native RNG/HP/actor simulation. Matched fifth-operand mutation is test instrumentation, not a callback at budget exhaustion. Setup/source-only/matched rendering all contribute to original instruction totals.\n";return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
