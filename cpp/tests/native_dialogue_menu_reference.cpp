// Independent original-source menu oracle. Geometry, slot/list transitions,
// border composition and expected artwork come from complete original routines
// and local imported packs, never the native configuration/resource decoder.
// The source-only setup phase executes C200D9, LOAD_WINDOW_GFX and its original
// upload ABI; CREATE_WINDOW, CLOSE_WINDOW and frame drawers are not intercepted.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/window_resources.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/menu_resources.hpp"
#include "eb/native/dialogue/menu_printer.hpp"
#include "eb/native/dialogue/menu_host.hpp"
#include <iomanip>
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
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
        else if(*pending==Service::WaitFrame)++counts.waits;
        else if(*pending==Service::Sound)++counts.sounds;
        else ++counts.hp_pp;
        // C2077D is called with JSR; the two world/frame seams use JSL.
        if(*pending==Service::HpPp)cpu.execute_instruction<0x60>(0,1);
        else cpu.execute_instruction<0x6b>(0,1);
        pending.reset();
    }
    // A real WindowTick host callback invokes CLOSE_WINDOW with its own
    // compiler C frame while keeping the original DISPLAY_TEXT/PRINT_LETTER
    // hardware return stack and direct-page locals live. No parent byte is
    // restored from a snapshot; snapshots below are assertions only.
    void enter_nested_close() {
        require(busy && pending==Service::WindowTick && !parent_call,"Nested close needs source tick");
        parent_call=NestedCall{returning,expected_stack,expected_direct_page,cpu.stack_pointer,cpu.direct_page,{},{}};
        auto& saved=*parent_call;
        saved.locals.assign(bus->work_ram.begin()+cpu.direct_page,bus->work_ram.begin()+0x1e12);
        saved.stack.assign(bus->work_ram.begin()+cpu.stack_pointer+1,bus->work_ram.begin()+0x2000);
        pending.reset();
        cpu.execute_instruction<0xc2>(0x31,2);cpu.execute_instruction<0x0b>(0,1);
        cpu.execute_instruction<0x7b>(0,1);cpu.execute_instruction<0x69>(0xffee,3);cpu.execute_instruction<0x5b>(0,1);
        expected_stack=cpu.stack_pointer;expected_direct_page=cpu.direct_page;
        cpu.accumulator=get(p.focus);cpu.program_counter=(p.close&0xff0000)|0xff80;
        const bool far=version==eb::GameVersion::US;returning=cpu.program_counter+(far?4:3);
        if(far)cpu.execute_instruction<0x22>(p.close,4);else cpu.execute_instruction<0x20>(p.close&65535,3);
    }
    void leave_nested_close() {
        require(!busy && !pending && parent_call,"Nested source close did not return");
        const auto saved=std::move(*parent_call);parent_call.reset();cpu.execute_instruction<0x2b>(0,1);
        require(cpu.stack_pointer==saved.caller_stack && cpu.direct_page==saved.caller_direct_page,
                "Nested close changed caller stacks");
        require(std::equal(saved.locals.begin(),saved.locals.end(),bus->work_ram.begin()+saved.caller_direct_page) &&
                std::equal(saved.stack.begin(),saved.stack.end(),bus->work_ram.begin()+saved.caller_stack+1),
                "Nested close overwrote live parent locals/return stack");
        returning=saved.returning;expected_stack=saved.expected_stack;expected_direct_page=saved.expected_direct_page;
        cpu.program_counter=p.tick;busy=true;pending=Service::WindowTick;
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
struct MenuCounts {unsigned calls{},polls{},callbacks{},sounds{},pool{},page_changes{};std::uint64_t raster_nonzero{};} menu_counts;
void source_pool_probe(const eb::GameAssets& assets) {
    MenuSource source(assets);source.create(1);
    const std::vector<std::uint8_t> label{std::uint8_t(assets.version==eb::GameVersion::US?0x71:0x41)};
    for(unsigned i=0;i<70;++i) {
        require(source.append(label)==source.option(i),"Source pool did not allocate first free option");++menu_counts.pool;
    }
    require(source.chain(1).size()==70,"Source full chain lost options");
    const auto before=source.bus->work_ram;
    require(source.append(label)==source.option(69),"Source full pool did not return final-record fallback");
    for(unsigned i=0;i<70*(assets.version==eb::GameVersion::US?45u:44u);++i)
        require(source.bus->work_ram[source.p.menus+i]==before[source.p.menus+i],"Base full-pool append mutated option pool");
    source.append(label,0,0xfedc,7,2);
    require(source.get(source.option(69))==2 && source.get(source.option(69)+8)==7 && source.get(source.option(69)+10)==2 &&
            source.get(source.option(69)+12)==0xfedc,"Source full-pool wrapper did not mutate fallback record");
    source.create(1);require(source.chain(1).empty(),"Reopen failed to release source option chain");
    require(source.append(label)==source.option(0),"Source pool was not reusable after close/reopen");
    source.call(assets.version==eb::GameVersion::US?0xc1007e:0xc1013b,false,0xffff);
    require(source.append(label)==source.option(69),"Source no-focus append did not return fallback record");
    source.append(label,0,0,0xabcd,0xfffe);
    require(source.get(source.option(69))==2 && source.get(source.option(69)+8)==0xabcd &&
            source.get(source.option(69)+10)==0xfffe && source.get(source.option(69)+12)==0,
            "Source no-focus wrapper fallback effects differ");
}
void source_selection_probe(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    const std::vector<std::vector<Source::Input>> traces{
        {{0x80,0}},{{0x400,0},{0x80,0}},{{0x800,0},{0x80,0}},{{0x100,0},{0x80,0}},
        {{0x200,0},{0x80,0}},{{0,0x800},{0x80,0}},{{0,0x400},{0x80,0}},{{0,0x200},{0x80,0}},
        {{0,0x100},{0x80,0}},{{0x8000,0}},{{0x2000,0}},{{0x880,0},{0x80,0}},{{0x20,0}},
        {{0x8000,0},{0x80,0}}};
    for(unsigned test=0;test<traces.size();++test) {
        MenuSource source(assets);source.create(1);
        for(unsigned i=0;i<4;++i) {
            std::vector<std::uint8_t> label{std::uint8_t(us?0x71+i:0x41+i),std::uint8_t(us?0x77:0x47)};
            source.append(label,0,test%2?std::optional<unsigned>{0xfffcu+i}:std::nullopt);
        }
        source.arrange(2);source.print_items();source.install_callback();
        const auto result=source.select(test==13?0:1,traces[test]);
        ++menu_counts.calls;menu_counts.polls+=source.input_index;menu_counts.callbacks+=source.callbacks.size();menu_counts.sounds+=source.sounds.size();
        const auto base=source.record(source.slot(1));
        std::cout<<(us?"US":"JP")<<" selection "<<test<<" result="<<result<<" selected="<<source.get(base+47)
                 <<" polls="<<source.input_index<<" callbacks=";for(auto value:source.callbacks)std::cout<<value<<',';
        std::cout<<" sounds=";for(auto value:source.sounds)std::cout<<value<<',';std::cout<<'\n';
        for(auto pixel:source.bus->video_ram)menu_counts.raster_nonzero+=pixel!=0;
    }
}
void source_page_probe(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    auto assets=original;
    // These are explicitly synthetic selected-text scripts, executed by the
    // complete original DISPLAY_TEXT interpreter and glyph routines.
    const std::array<std::uint8_t,4> script{0x0f,std::uint8_t(us?0x7a:0x4a),2,0};
    std::copy(script.begin(),script.end(),assets.image.begin()+0x2e8000);
    for(unsigned scenario=0;scenario<4;++scenario) {
        MenuSource source(assets);source.create(2);source.create(1);
        const unsigned amount=scenario<2?12:4;
        for(unsigned i=0;i<amount;++i) {
            const std::array<std::uint8_t,2> label{std::uint8_t(us?0x71+i%26:0x41+i%26),std::uint8_t(us?0x77:0x47)};
            source.append(label,0xee8000);
        }
        source.arrange(scenario==3?4:2,0,scenario==3);source.print_items();source.install_callback();
        if(scenario==2)source.callback_focus=2;
        const auto chain=source.chain(1);const auto base=source.record(source.slot(1));
        std::vector<Source::Input> trace;
        if(scenario<2) {
            const auto last=source.option(chain.back());require(source.get(last+6)==0,"Source paginated layout omitted page control");
            // Seed only the persisted selected ordinal to the actual chain's
            // navigation entry. Coordinates/pages remain actual layout output;
            // the current page retains its initialized source value1.
            source.put(base+47,chain.size()-1);
            // Selection walks captured list ordinal, not a duplicated layout.
            trace={{0x80,0},{0x80,0},{0x80,0},{0x8000,0}};
        } else trace={{0x400,0},{0x80,0}};
        const auto result=source.select(1,std::move(trace));
        if(scenario>=2)require(source.get(source.record(source.slot(1))+31)>0,"Selected DISPLAY_TEXT script did not execute");
        require(!source.callbacks.empty(),"Original selected callback was not invoked");
        if(scenario==2)require(source.get(source.p.focus)==1,"Source callback did not restore captured focus");
        std::cout<<(us?"US":"JP")<<" page/script "<<scenario<<" result="<<result<<" chain="<<chain.size()<<" pages=";
        for(auto page:source.pages)std::cout<<page<<',';std::cout<<" callbacks="<<source.callbacks.size()<<" secondary="<<source.get(base+31)<<'\n';
        ++menu_counts.calls;menu_counts.polls+=source.input_index;menu_counts.callbacks+=source.callbacks.size();menu_counts.sounds+=source.sounds.size();
    }
}

struct ModelPair {
    MenuSource source;
    dialogue::State state;
    std::shared_ptr<const dialogue::FontResources> fonts;
    dialogue::TextOutput output;
    dialogue::WindowHost host;
    dialogue::MenuModel model;
    std::shared_ptr<const dialogue::MenuResources> menu_resources;
    std::array<bool,70> constructed{};
    std::string label;
    ModelPair(const eb::GameAssets& assets)
        :source(assets),fonts(dialogue::FontResources::import(assets.image,assets.version)),output(fonts,state),
         host(dialogue::WindowResources::import(assets.image,assets.version),state,output),model(host,*fonts),
         menu_resources(dialogue::MenuResources::import(assets.image,assets.version)),label(assets.version==eb::GameVersion::US?"US":"JP") {
        state.unfocused_register_slot=0;
    }
    static std::optional<unsigned> index(unsigned value){return value==0xffff?std::nullopt:std::optional<unsigned>{value};}
    void compare(const std::string& where) {
        const auto context=label+" model "+where;
        require((state.focus?state.focus->value:0xffff)==source.get(source.p.focus),context+" focus differs");
        for(unsigned id=0;id<source.p.count;++id) {
            const auto slot=source.slot(id);require(host.slot_for({id})==index(slot),context+" slot differs");
            if(slot==0xffff)continue;
            const auto base=source.record(slot);const auto& w=host.metadata({id});
            require(w.first_option==source.get(base+43) && w.last_option==source.get(base+45) &&
                    w.selected_option==source.get(base+47) && w.layout_columns==source.get(base+49) &&
                    w.page_number==source.get(base+51),context+" window menu metadata differs");
            require(model.chain(index(w.first_option))==source.chain(id),context+" linked order differs");
        }
        for(unsigned i=0;i<70;++i) {
            const auto at=source.option(i);const auto& option=host.menu_options()[i];
            require(option.flags==source.get(at),context+" allocation/result word differs at "+std::to_string(i));
            if(!constructed[i])continue; // initially unused retained bytes have no native meaning
            require(option.next==index(source.get(at+2)) && option.previous==index(source.get(at+4)) &&
                    option.page==source.get(at+6) && option.x==source.get(at+8) && option.y==source.get(at+10) &&
                    option.userdata==source.get(at+12) && option.sound_effect==source.bus->work_ram[at+14],
                    context+" option fields differ at "+std::to_string(i)+" xy native="+std::to_string(option.x)+","+std::to_string(option.y)+
                    " source="+std::to_string(source.get(at+8))+","+std::to_string(source.get(at+10)));
            require(std::equal(option.label.begin(),option.label.end(),source.bus->work_ram.begin()+at+19),context+" retained label bytes differ");
            const auto pointer=source.get32(at+15);
            require(option.selected_text==(pointer?std::optional<dialogue::Location>{{1,std::uint16_t(pointer)}}:std::nullopt),context+" selected-text binding differs");
            if(source.version==eb::GameVersion::US)require(option.pixel_align==source.bus->work_ram[at+44],context+" fractional alignment differs");
        }
    }
    void open(unsigned id) {
        source.create(id);auto operation=host.begin({dialogue::WindowAction::Open,dialogue::WindowId{id}});
        while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();compare("open");
    }
    unsigned append(std::span<const std::uint8_t> label,std::optional<unsigned> data={},unsigned x=0,unsigned y=0,
                    bool coordinates=false,bool pixels=false,unsigned script=0) {
        source.bus->work_ram[source.version==eb::GameVersion::US?0x5e71:0x61e9]=pixels;
        const auto expected=source.append(label,script,data,x,y,coordinates);
        const auto location=script?std::optional<dialogue::Location>{{1,std::uint16_t(script)}}:std::nullopt;
        const auto actual=data?model.append_value(label,location,*data,x,y,pixels):coordinates?model.append_at(label,location,x,y,pixels):model.append(label,location);
        require(source.option(actual)==expected,this->label+" append return record differs");
        if(source.get(expected))constructed[actual]=true;
        compare("append");return actual;
    }
    void arrange(unsigned columns,unsigned gap=0,bool centered=false) {
        source.arrange(columns,gap,centered);model.layout({std::uint16_t(columns),std::uint16_t(gap),centered},menu_resources->next_page_label());
        for(unsigned i=0;i<70;++i)if(source.get(source.option(i)))constructed[i]=true;
        compare("layout columns="+std::to_string(columns)+" centered="+std::to_string(centered));
    }
};
struct RenderCounts {std::uint64_t boundaries{},content_pixels{},scene_pixels{},published_pixels{},ppu_pixels{};unsigned pages{};} render_counts;
unsigned raster(const MenuSource& source,unsigned descriptor,unsigned x,unsigned y) {
    if(descriptor&0x4000)x=7-x;if(descriptor&0x8000)y=7-y;
    const auto address=(0xc000+(descriptor&1023)*16+y*2)&65535;
    const auto color=((source.bus->video_ram[address]>>(7-x))&1)|(((source.bus->video_ram[(address+1)&65535]>>(7-x))&1)<<1);
    return color?color+((descriptor>>10)&7)*4:0;
}
struct RenderPair : ModelPair {
    dialogue::MenuPrinter printer;
    RenderPair(const eb::GameAssets& assets):ModelPair(assets),printer(host,menu_resources){
        source.real_ticks=true;
        const bool us=source.version==eb::GameVersion::US;
        source.bus->work_ram[source.p.game+(us?0xafu:0xacu)]=1;
        source.bus->work_ram[source.p.game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);
        source.call(us?0xc47f87:0xc45c1a,true);host.publish_palette(1,false,true);
    }
    void compare_render(const std::string& where) {
        compare(where);const auto context=label+" menu render "+where;const bool us=source.version==eb::GameVersion::US;
        for(auto id:host.draw_order()) {
            const auto base=source.record(source.slot(id.value));const auto& window=output.window(id);
            const auto attrs=(window.style.palette<<10)|(window.style.priority?0x2000:0)|
                (window.style.flip_horizontal?0x4000:0)|(window.style.flip_vertical?0x8000:0);
            require(window.cursor.column==source.get(base+14) && window.cursor.line==source.get(base+16) &&
                    attrs==source.get(base+19) && window.style.font==source.get(base+21),context+" cursor/style differs");
            const auto frame=output.frame(id);const auto tilemap=source.get(base+53);
            for(unsigned y=0;y<frame->height;++y)for(unsigned x=0;x<frame->width;++x) {
                const auto descriptor=source.get(tilemap+((y/8)*window.geometry.columns+x/8)*2);const auto color=raster(source,descriptor,x%8,y%8);
                const auto index=y*frame->width+x;
                require(frame->pixels[index]==color && frame->priority[index]==(color?bool(descriptor&0x2000):false),
                        context+" content pixel differs id="+std::to_string(id.value)+" xy="+std::to_string(x)+","+std::to_string(y)+
                        " actual="+std::to_string(frame->pixels[index])+" expected="+std::to_string(color));++render_counts.content_pixels;
            }
            require(state.windows.at(id).active.secondary==source.get(base+31),context+" selected script secondary differs");
        }
        require(output.policy().instant==bool(source.bus->work_ram[source.p.instant]) &&
                output.redraw_pending()==bool(source.bus->work_ram[source.p.redraw]),context+" instant/redraw differs");
        require(output.fractional_offset()==(source.get(us?0x9e23:0xa029)&7) &&
                output.indent_pending()==bool(source.bus->work_ram[us?0x5e75:0x61ed]) &&
                output.last_character()==source.bus->work_ram[us?0x5e76:0x61ee] &&
                output.saturn_composition_active()==bool(source.get(us?0x9e29:0xa02f)),context+" shared composition differs");
        if(us)require(host.menu_state().early_tick_exit==bool(source.bus->work_ram[0x968c]),context+" early tick flag differs");
        const auto scene=host.scene(),published=host.frame();
        for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x) {
            const auto cell=(y/8)*32+x/8,index=y*256+x;
            const auto descriptor=source.get(source.p.scene+cell*2);const auto color=raster(source,descriptor,x%8,y%8);
            require(scene->pixels[index]==color && scene->priority[index]==(color?bool(descriptor&0x2000):false),context+" composed scene differs");++render_counts.scene_pixels;
            const auto at=0xf800+cell*2;const auto visible=source.bus->video_ram[at]|unsigned(source.bus->video_ram[at+1])<<8;
            const auto visible_color=raster(source,visible,x%8,y%8);
            require(published->pixels[index]==visible_color && published->priority[index]==(visible_color?bool(visible&0x2000):false),
                    context+" published scene differs xy="+std::to_string(x)+","+std::to_string(y));++render_counts.published_pixels;
        }
        ++render_counts.boundaries;
    }
    void respond_frame(Service service) {
        if(service==Service::WindowTick) {
            if(source.version==eb::GameVersion::US && host.menu_state().early_tick_exit)host.menu_state().early_tick_exit=false;
            else if(!output.policy().instant){host.draw_tick();host.publish_scene();}
        }
        source.respond();
    }
    void compare_ppu() {
        eb::SnesBus display(std::span(eb::rom_data(source.version),eb::rom_size(source.version)),source.version);
        display.video_ram=source.bus->video_ram;
        std::copy_n(source.bus->work_ram.begin()+0x200,64,display.palette_ram.begin());
        display.write_byte(0x2100,15);display.write_byte(0x2105,1);display.write_byte(0x2109,0x7c);
        display.write_byte(0x210c,6);display.write_byte(0x212c,4);
        display.write_byte(0x2112,0xff);display.write_byte(0x2112,0xff);
        while(display.completed_frames<2)display.advance_cpu_cycles(1000);
        const auto frame=host.frame();unsigned visible=0;
        for(unsigned i=0;i<256*224;++i) {
            const auto color=host.palette().at(frame->pixels[i]);const auto expand=[](unsigned n){return(n<<3)|(n>>2);};
            const auto rgb=0xff000000u|(expand(color&31)<<16)|(expand((color>>5)&31)<<8)|expand((color>>10)&31);
            require(display.native_framebuffer[i]==rgb,label+" actual source PPU differs xy="+std::to_string(i%256)+","+std::to_string(i/256));
            visible+=rgb!=0xff000000u;++render_counts.ppu_pixels;
        }
        require(visible!=0,label+" original menu PPU comparison was blank");
        // Use the actual selection-window artwork produced by the original
        // routines. Expanding world/battle scenery must neither stretch these
        // windows nor reveal repeated copies in the new margins.
        for (bool battle : {false, true}) for (unsigned width : {360u, 400u, 522u, 1024u}) {
            eb::SnesBus wide(display);
            wide.set_presentation_width(width);
            const auto &profile = eb::source_profile(source.version);
            wide.work_ram[profile.wram_battle_mode_flag] = battle;
            wide.work_ram[profile.wram_battle_mode_flag + 1] = 0;
            if (battle) {
                wide.work_ram[profile.wram_battle_backgrounds.layer1] = 1;
                wide.work_ram[profile.wram_battle_backgrounds.layer1 + 1] = 4;
            }
            const auto ram = wide.work_ram;
            const auto vram = wide.video_ram;
            const auto end = wide.completed_frames + 2;
            while (wide.completed_frames < end) wide.advance_cpu_cycles(1000);
            const auto pixels = wide.presentation_pixels();
            const unsigned margin = (width - 256) / 2;
            require(wide.presentation_width() == width, label + " menu changed requested viewport");
            for (unsigned y = 0; y < 224; ++y) for (unsigned x = 0; x < width; ++x) {
                const auto expected = x >= margin && x < margin + 256
                    ? display.native_framebuffer[y * 256 + x - margin] : 0xff000000u;
                require(pixels[y * width + x] == expected,
                    label + " selection window lost centered placement, width=" + std::to_string(width) +
                    (battle ? " battle" : " overworld") + " xy=" + std::to_string(x) + "," + std::to_string(y));
            }
            require(wide.work_ram == ram && wide.video_ram == vram, label + " menu presentation mutated game data");
        }
    }
    void establish_composition_history() {
        if(source.version!=eb::GameVersion::US)return;
        // Original LOAD_WINDOW_GFX renders dynamic party names into shared
        // brush history. Native dynamic name loading is not implemented yet.
        // Establish equal live history via actual normal glyph operations,
        // exceeding all52 brush columns; never seed expected scratch pixels.
        output.policy().instant=true;source.bus->work_ram[source.p.instant]=1;
        for(unsigned n=0;n<160;++n) {
            source.call(0xc10cb6,false,0x77);output.begin_glyph(0x77);
            require(output.advance()==dialogue::OutputProgress::Complete,"Instant history glyph unexpectedly suspended");
        }
        source.call(0xc10fa3,false);auto clear=host.begin({dialogue::WindowAction::ClearFocus});
        while(clear->advance()==dialogue::OutputProgress::Suspended)clear->respond();
        compare_render("established full-height history");
    }
    void print_page(std::optional<unsigned> initial={}) {
        if(initial){source.begin(source.version==eb::GameVersion::US?0xc11887:0xc12022,false,*initial);model.select_initial(*initial);}
        else source.begin(source.version==eb::GameVersion::US?0xc1163c:0xc11bf0,false);
        auto operation=printer.begin({dialogue::MenuPrintAction::Page});
        for(unsigned n=0;n<10000;++n) {
            const auto expected=source.advance();const auto progress=operation->advance();compare_render("print page boundary="+std::to_string(n));
            require((progress==dialogue::OutputProgress::Suspended)==bool(expected),label+" page print effect count differs");
            if(!expected){require(operation->complete(),label+" page print not complete");++render_counts.pages;return;}
            const auto event=operation->effect();require(bool(event),label+" page printer lacks event");
            if(const auto* effect=std::get_if<dialogue::TextEffect>(&*event))
                require((*expected==Service::Sound && effect->kind==dialogue::TextEffectKind::TextSound) ||
                        (*expected==Service::WindowTick && effect->kind==dialogue::TextEffectKind::WindowTick),label+" page text effect differs");
            else {
                const auto& window_effect=std::get<dialogue::WindowEffect>(*event);
                require((*expected==Service::WaitFrame && window_effect.kind==dialogue::WindowEffectKind::FrameWait) ||
                        (*expected==Service::WindowTick && window_effect.kind==dialogue::WindowEffectKind::WindowTick),label+" page window effect differs");
            }
            respond_frame(*expected);operation->respond();
        }
        throw std::runtime_error(label+" page printer exceeded bound");
    }
};
void native_print_cases(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned count:{0u,4u,12u}) {
        RenderPair pair(assets);pair.label+=" font="+std::to_string(font)+" count="+std::to_string(count);pair.open(1);pair.establish_composition_history();
        auto style=pair.output.window({1}).style;style.font=font;pair.output.set_style({1},style);
        pair.source.put(pair.source.record(pair.source.slot(1))+21,font);
        for(unsigned i=0;i<count;++i) {
            std::vector<std::uint8_t> label(1+i%4,std::uint8_t(us?0x71+i%26:0x41+i%26));pair.append(label);
        }
        pair.arrange(2);pair.print_page();
        if(count>4) {
            const auto last=pair.host.metadata({1}).last_option;
            const auto prior=*pair.host.menu_options()[last].previous;
            for(unsigned page=2;page<=pair.host.menu_options()[prior].page;++page) {
                pair.host.metadata({1}).page_number=page;pair.source.put(pair.source.record(pair.source.slot(1))+51,page);pair.print_page();
            }
        }
    }
}

struct SelectionCounts {unsigned cases{},polls{},callbacks{},sounds{},whole_cc11{},write_order_checks{};} selection_counts;
void native_selection_case(const eb::GameAssets& original,unsigned scenario,bool whole=false) {
    const bool us=original.version==eb::GameVersion::US;const unsigned menu_id=scenario==19?19:scenario==20?0:1;
    auto assets=original;std::vector<std::uint8_t> content(0x200);
    content[0]=0x0f;content[1]=us?0x7a:0x4a;content[2]=2;
    content[0x100]=0x11;content[0x101]=2;
    std::copy(content.begin(),content.end(),assets.image.begin()+0x2e8000);
    auto program=std::make_shared<dialogue::Program>(assets.version,std::vector<dialogue::ContentBlock>{{1,0x8000,content}},
        std::vector<dialogue::Location>{{1,0x8100}},std::vector<dialogue::ReferenceBinding>{},std::vector<dialogue::Location>{},
        std::vector<dialogue::ReferenceRange>{{{0,0x80,0xee,0},{1,0x8000},unsigned(content.size())}});
    RenderPair pair(assets);pair.label+=" selection="+std::to_string(scenario)+(whole?" CC11":" direct");
    pair.open(2);pair.open(menu_id);pair.source.selection_window=menu_id;pair.establish_composition_history();
    const bool selected_scripts=scenario>=14;const unsigned count=scenario==14?12:4;
    for(unsigned i=0;i<count;++i) {
        const std::array<std::uint8_t,2> label{std::uint8_t(us?0x71+i%26:0x41+i%26),std::uint8_t(us?0x77:0x47)};
        pair.append(label,scenario==25?std::optional<unsigned>{0}:((scenario%2 || scenario==24)?std::optional<unsigned>{0xfffcu+i}:std::nullopt),0,0,false,false,selected_scripts?0xee8000:0);
    }
    pair.arrange(2);pair.print_page(scenario==23?std::optional<unsigned>{3}:std::nullopt);
    if(us && scenario==17){pair.state.word_wrap=false;pair.source.put(0x5e6e,0);}
    if(us && (scenario==18 || scenario==19)){pair.output.policy().allow_overflow=true;pair.source.bus->work_ram[0xb49d]=1;}pair.source.install_callback();pair.host.metadata({menu_id}).cursor_callback=dialogue::MenuCallbackId{menu_id};
    const std::vector<std::vector<Source::Input>> traces{
        {{0x80,0}},{{0x400,0},{0x80,0}},{{0x800,0},{0x80,0}},{{0x100,0},{0x80,0}},{{0x200,0},{0x80,0}},
        {{0,0x800},{0x80,0}},{{0,0x400},{0x80,0}},{{0,0x200},{0x80,0}},{{0,0x100},{0x80,0}},
        {{0x8000,0}},{{0x2000,0}},{{0x880,0},{0x80,0}},{{0x20,0}},{{0x8000,0},{0x80,0}}};
    auto inputs=scenario<traces.size()?traces[scenario]:std::vector<Source::Input>{{0x400,0},{0x80,0}};
    const auto base=pair.source.record(pair.source.slot(menu_id));
    if(scenario==14) {
        const auto chain=pair.source.chain(menu_id);pair.source.put(base+47,chain.size()-1);pair.host.metadata({menu_id}).selected_option=chain.size()-1;
        const auto final_page=pair.source.get(pair.source.option(chain[chain.size()-2])+6);
        inputs.assign(final_page,Source::Input{0x80,0});inputs.push_back({0x8000,0});
    }
    if(scenario==15)pair.source.callback_focus=2;
    if(scenario==16) {inputs.assign(23,{});inputs.push_back({0x80,0});}
    if(scenario==20) {inputs.assign(61,{});inputs.push_back({0x80,0});}
    if(scenario>=21)inputs={{0x80,0}};
    if(scenario==24)inputs={{0x400,0},{0x100,0},{0x80,0}};
    if(us && (scenario==21 || scenario==22)) {
        auto& shared=pair.host.menu_state();shared.restore_backup=true;
        shared.backup_first_option=scenario==21?1:0;shared.backup_selected_option=scenario==21?1:0xffff;
        shared.backup_x=1;shared.backup_y=1;
        pair.source.bus->work_ram[0x5e79]=1;pair.source.put(0x9688,shared.backup_first_option);
        pair.source.put(0x968a,shared.backup_selected_option);pair.source.put(0x9684,1);pair.source.put(0x9686,1);
    }
    pair.source.inputs=inputs;pair.source.input_index=0;
    dialogue::MenuHost menus(program,pair.host,pair.menu_resources);
    std::unique_ptr<dialogue::MenuHost::Operation> menu;
    std::unique_ptr<dialogue::Conversation> conversation;
    std::vector<char> source_write_order;
    if(whole) {
        pair.source.cpu.observe_memory_write=[&](std::uint32_t address,std::uint8_t value) {
            if((address>>16)!=0x7e)return;const auto low=address&65535;
            if(low>=base+23 && low<base+27)source_write_order.push_back('w');
            if(!value)for(auto index:pair.source.chain(menu_id))if(low==pair.source.option(index))source_write_order.push_back('c');
        };
        conversation=std::make_unique<dialogue::Conversation>(program,menus);
        conversation->observe([&](const dialogue::Event& event){
            if(event.kind==dialogue::EventKind::RegisterChanged && event.reg==dialogue::RegisterKind::Working) {
                require(pair.host.metadata({menu_id}).first_option!=0xffff && pair.host.menu_options()[0].flags!=0,
                        pair.label+" native CC11 cleaned options before writing working result");++selection_counts.write_order_checks;
            }
        });
        pair.source.put32(0x1e0e,0xee8100);pair.source.begin(us?0xc186b1:0xc18913,true);conversation->start(dialogue::EntryId{0});
    } else {pair.source.begin(us?0xc1196a:0xc12109,false,scenario==13?0:1);menu=menus.begin(scenario==13?0:1);}
    const auto advance=[&](unsigned budget){return whole?conversation->advance(budget):menu->advance(budget);};
    const auto current_event=[&]() -> const std::optional<dialogue::MenuEvent>& {return whole?conversation->event():menu->event();};
    const auto respond=[&](dialogue::MenuResponse response){if(whole)conversation->respond({response.value,response.pressed,response.held});else menu->respond(response);};
    unsigned events=0;
    for(unsigned n=0;n<200000;++n) {
        const auto progress=advance(1+n%7);if(progress==dialogue::Progress::BudgetExhausted)continue;
        const auto expected=pair.source.advance();pair.compare_render("selection event="+std::to_string(events));
        if(progress==dialogue::Progress::Finished) {
            require(!expected && !pair.source.busy,pair.label+" finished before original selection");
            if(!whole)require(menu->result()==pair.source.cpu.accumulator,pair.label+" result differs");
            else {
                require(pair.state.windows.at({menu_id}).active.working==pair.source.get32(base+23),pair.label+" CC11 working result differs");
                const auto clear=std::find(source_write_order.begin(),source_write_order.end(),'c');
                require(clear!=source_write_order.end() && std::count(source_write_order.begin(),clear,'w')>=4,
                        pair.label+" original CC11 result/cleanup order was not exercised");++selection_counts.whole_cc11;
            }
            require(pair.source.input_index==inputs.size(),pair.label+" input route was not completely exercised");
            const auto counter=pair.source.get(us?0x97b8:0x9a6c);
            require(counter==pair.state.stream_slot,pair.label+" final nested stream counter differs");
            for(unsigned i=0;i<10;++i) {
                const auto pointer=pair.source.get32((us?0x96aa:0x995e)+i*27);
                require(pair.state.streams[i].cursor==(pointer?std::optional<dialogue::Location>{{1,std::uint16_t(pointer)}}:std::nullopt),
                        pair.label+" final selected-text stream cursor differs");
            }
            if(whole)require(conversation->snapshot().returned_cursor==dialogue::Location{1,std::uint16_t(pair.source.get32(0x1e06))},
                             pair.label+" CC11 caller cursor differs");
            if(us)require(pair.host.menu_state().restore_backup==bool(pair.source.bus->work_ram[0x5e79]),pair.label+" backup flag clearing differs");
            if(scenario==14)require(pair.source.pages.back()==1,pair.label+" actual last-page wrap was not exercised");
            pair.compare_ppu();++selection_counts.cases;return;
        }
        require(expected && current_event(),pair.label+" effect count differs");
        const auto event=*current_event();dialogue::MenuResponse response;
        if(const auto* effect=std::get_if<dialogue::MenuEffect>(&event)) {
            switch(*expected) {
            case Service::Input: {
                require(effect->kind==dialogue::MenuEffectKind::Input,pair.label+" expected input effect");
                const auto input=inputs.at(pair.source.input_index);response.pressed=input.press;response.held=input.held;++selection_counts.polls;break;
            }
            case Service::Sound:require(effect->kind==dialogue::MenuEffectKind::Sound && effect->value==pair.source.cpu.accumulator,
                    pair.label+" ordered sound ID differs");++selection_counts.sounds;break;
            case Service::Callback:
                require(effect->kind==dialogue::MenuEffectKind::Callback && effect->value==pair.source.cpu.accumulator && effect->callback==dialogue::MenuCallbackId{menu_id},
                        pair.label+" callback identity/argument differs");
                if(pair.source.callback_focus)pair.state.focus=dialogue::WindowId{*pair.source.callback_focus};++selection_counts.callbacks;break;
            case Service::Money:require(effect->kind==dialogue::MenuEffectKind::ShowMoneyMeters,pair.label+" expected money service");break;
            default:throw std::runtime_error(pair.label+" unexpected native menu effect for source service="+std::to_string(unsigned(*expected)));
            }
        } else if(const auto* effect=std::get_if<dialogue::WindowEffect>(&event)) {
            require((*expected==Service::WindowTick && effect->kind==dialogue::WindowEffectKind::WindowTick) ||
                    (*expected==Service::WaitFrame && effect->kind==dialogue::WindowEffectKind::FrameWait) ||
                    (*expected==Service::ClearPartyBlink && effect->kind==dialogue::WindowEffectKind::ClearPartyBlink),pair.label+" window effect order differs");
        } else if(const auto* effect=std::get_if<dialogue::TextEffect>(&event)) {
            require((*expected==Service::WindowTick && effect->kind==dialogue::TextEffectKind::WindowTick) ||
                    (*expected==Service::Sound && effect->kind==dialogue::TextEffectKind::TextSound),pair.label+" text effect order differs");
        } else throw std::runtime_error(pair.label+" unported UI request");
        require(advance(1)==dialogue::Progress::Suspended && current_event()==event,pair.label+" pending menu event changed");
        pair.respond_frame(*expected);respond(response);++events;
    }
    throw std::runtime_error(pair.label+" native menu did not complete within bound");
}
void native_selection_cases(const eb::GameAssets& assets) {
    for(unsigned scenario=0;scenario<26;++scenario)if(assets.version==eb::GameVersion::US || (scenario!=21 && scenario!=22))native_selection_case(assets,scenario);
    for(unsigned scenario:{0u,1u,9u,15u,24u,25u})native_selection_case(assets,scenario,true);
}

void native_model_cases(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;unsigned comparisons=0;
    {
        ModelPair pair(assets);pair.open(1);
        for(unsigned i=0;i<70;++i) {
            const std::array<std::uint8_t,3> label{std::uint8_t(us?0x71+i%26:0x41+i%26),std::uint8_t(us?0x77:0x47),std::uint8_t(us?0x78:0x48)};
            pair.append(label,i%2?std::optional<unsigned>{0xffff-i}:std::nullopt,3*i,i,true,i%3==0,0xee8000);
        }
        const std::array<std::uint8_t,1> short_label{std::uint8_t(us?0x71:0x41)};
        pair.append(short_label);pair.append(short_label,0xfedc,15,2,true,true);pair.open(1);
        for(unsigned i=0;i<12;++i)pair.append(short_label);
        pair.arrange(2);pair.open(1);pair.compare("retained slots after second release");++comparisons;
    }
    for(unsigned count:{1u,2u,3u,4u,8u,12u})for(unsigned columns:{1u,2u,4u})for(bool center:{false,true}) {
        if(us && center && count>4)continue;
        ModelPair pair(assets);pair.open(1);
        for(unsigned i=0;i<count;++i) {
            std::vector<std::uint8_t> label(1+i%4,std::uint8_t(us?0x71+i%26:0x41+i%26));pair.append(label);
        }
        pair.arrange(columns,1,center);++comparisons;
    }
    std::cout<<"PASS "<<(us?"US":"JP")<<" native model whole-source states "<<comparisons<<'\n';
}

}
int main(int argc,char**argv) {
    try {
        if(argc<2){std::cout<<"SKIP native menu source reference: local packs required\n";return 77;}
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
            source_pool_probe(assets);
            source_selection_probe(assets);
            source_page_probe(assets);
            native_model_cases(assets);
            native_print_cases(assets);
            native_selection_cases(assets);
        }
        std::cout<<"PASS source menu pilot: "<<menu_counts.pool<<" allocated options, "<<menu_counts.calls<<" complete selections, "
                 <<menu_counts.polls<<" actual input-wrapper polls, "<<menu_counts.callbacks<<" callback seams, "<<menu_counts.sounds
                 <<" sound seams, "<<counts.instructions<<" original instructions\n";
        std::cout<<"PASS native menu full-source comparison: "<<selection_counts.cases<<" selections, "<<selection_counts.whole_cc11
                 <<" complete CC11 calls, "<<selection_counts.write_order_checks<<" result-before-cleanup observations, "
                 <<selection_counts.polls<<" input polls, "<<selection_counts.callbacks<<" ordered callbacks, "<<selection_counts.sounds<<" ordered sound IDs\n";
        std::cout<<"PASS native menu rendering: "<<render_counts.pages<<" complete PRINT_MENU_ITEMS calls, "<<render_counts.boundaries
                 <<" state/image boundaries, "<<render_counts.content_pixels<<" content pixels, "<<render_counts.scene_pixels
                 <<" composed pixels, "<<render_counts.published_pixels<<" actual published pixels, "<<render_counts.ppu_pixels<<" actual source PPU pixels\n";
        std::cout<<"Scope: real original input/frame wrappers, constructors, layout, printing, selected DISPLAY_TEXT and CC11 cleanup; "
                 <<"HP/PP/world pumping, input, audio and native callbacks are explicit host seams. Tiny-font comparisons start after real matched "
                 <<"full-height glyph history; native dynamic party-name font-loader history remains unported. No PCM or whole-game claim.\n";
        return 0;
    }catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}
}
