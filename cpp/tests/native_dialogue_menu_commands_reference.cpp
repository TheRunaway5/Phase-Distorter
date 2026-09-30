// Independent original-source authored menu-command oracle. Geometry, slot/list transitions,
// border composition and expected artwork come from complete original routines
// and local imported packs, never the native configuration/resource decoder.
// The source-only setup phase executes C200D9, LOAD_WINDOW_GFX and its original
// upload ABI; CREATE_WINDOW, CLOSE_WINDOW and frame drawers are not intercepted.
// Full DISPLAY_TEXT executes original CC19_02/04 and CC1C07/0C handlers.
// Labels include literal first delimiters, embedded NUL, the complete declared
// 30-byte gathering extent, wrapped references and a live US dictionary tail.
// No-focus layout reads the actual next-bank OPEN_WINDOW_TABLE[-1] lookup.
// Original source supplies expected option bytes and indexed/PPU pixels.
// Native virgin optional links have no initialized source meaning; after an
// actual source constructor all retained fields are compared exactly. Fresh
// fallback writes additionally preserve each side's own untouched link state.
// Input/frame wrappers execute real original drawing. Their inner world,
// HP/PP and audio services are explicit seams; JP already-completed DMA is
// acknowledged at compose/reset. This is domain/CPU-PPU proof, not a complete
// game scheduler, physical controller, PCM or GPU presentation test.
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
struct AuditCounts {unsigned streams{},gathering{},fallback{},reset{},layout{},selection{},dictionary{};std::uint64_t menu_bytes{},effects{};} audit;
struct Script {
    std::vector<std::uint8_t> bytes;
    unsigned start=0x8000;
    std::vector<std::uint8_t> dictionary;
    std::vector<std::uint8_t> child;
};
eb::GameAssets install(const eb::GameAssets& original,const Script& script) {
    auto assets=original;
    for(unsigned i=0;i<script.bytes.size();++i)assets.image.at(0x2e0000|((script.start+i)&65535))=script.bytes[i];
    if(!script.child.empty())std::copy(script.child.begin(),script.child.end(),assets.image.begin()+0x2e9000);
    if(!script.dictionary.empty()) {
        require(original.version==eb::GameVersion::US,"Dictionary fixture is US only");
        std::copy(script.dictionary.begin(),script.dictionary.end(),assets.image.begin()+0x2ea000);
        const std::array<std::uint8_t,4> pointer{0,0xa0,0xee,0};std::copy(pointer.begin(),pointer.end(),assets.image.begin()+0x8cded);
    }
    return assets;
}
std::vector<std::uint8_t> label_command(std::span<const std::uint8_t> raw,unsigned delimiter=2,unsigned target=0) {
    std::vector<std::uint8_t> result{0x19,2};result.insert(result.end(),raw.begin(),raw.end());result.push_back(delimiter);
    if(delimiter==1)for(unsigned i=0;i<4;++i)result.push_back(target>>(i*8));return result;
}
void append_bytes(std::vector<std::uint8_t>& to,std::span<const std::uint8_t> from){to.insert(to.end(),from.begin(),from.end());}
std::vector<std::uint8_t> pool(const MenuSource& source) {
    const unsigned size=70*(source.version==eb::GameVersion::US?45:44);return {source.bus->work_ram.begin()+source.p.menus,source.bus->work_ram.begin()+source.p.menus+size};
}
std::vector<std::uint8_t> record_bytes(const MenuSource& source,unsigned slot) {
    const auto begin=source.bus->work_ram.begin()+source.record(slot);return {begin,begin+source.p.record_size};
}
unsigned execute(MenuSource& source,const Script& script) {
    const bool us=source.version==eb::GameVersion::US;unsigned effects=0;
    source.put32(source.cpu.direct_page+14,0xee0000|script.start);source.begin(us?0xc186b1:0xc18913,true);
    while(source.advance()){++effects;source.respond();}
    require(source.get32(0x1e06)==(0xee0000|((script.start+script.bytes.size())&65535)),"Original authored stream final cursor differs");
    ++audit.streams;audit.effects+=effects;return effects;
}
void check_collected(const MenuSource& source,std::span<const std::uint8_t> raw) {
    const auto buffer=source.version==eb::GameVersion::US?0x97d7:0x9a8b;
    require(raw.size()<30,"Fixture crossed declared gathering extent");
    for(unsigned i=0;i<raw.size();++i)require(source.bus->work_ram[buffer+i]==raw[i],"Original raw label collection differs");
    require(source.bus->work_ram[buffer+raw.size()]==0,"Original gathering delimiter did not append NUL");
}
void check_label(const MenuSource& source,unsigned slot,std::span<const std::uint8_t> raw,unsigned target=0) {
    const auto nul=std::find(raw.begin(),raw.end(),0);const auto length=std::distance(raw.begin(),nul);require(length<25,"Fixture exceeds successful label extent");
    const unsigned at=source.option(slot);
    require(source.get(at)==1 && source.get(at+6)==1 && source.bus->work_ram[at+14]==1,"Original append defaults differ");
    require(std::equal(raw.begin(),nul,source.bus->work_ram.begin()+at+19) && source.bus->work_ram[at+19+length]==0,"Original option copied label differs");
    require(source.get32(at+15)==target,"Original stored selected reference differs");
}
void source_gathering(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;const auto letter=std::uint8_t(us?0x71:0x41);
    std::vector<std::vector<std::uint8_t>> labels;
    for(unsigned first:{0u,1u,2u,0x15u,0x16u,0x17u})labels.push_back({std::uint8_t(first),letter,std::uint8_t(letter+1)});
    labels.push_back({letter,0,letter,0x15,0x16,0x17});labels.emplace_back(24,letter);
    labels.emplace_back(29,letter);labels.back()[3]=0;
    for(unsigned variant=0;variant<labels.size();++variant)for(unsigned delimiter:{1u,2u}) {
        const auto target=delimiter==1?0xee9000u:0;Script script{label_command(labels[variant],delimiter,target)};script.bytes.push_back(2);
        if(variant%3==0)script.start=0xfffb;
        MenuSource source(install(original,script));source.create(1);const auto before=source.scene();
        require(execute(source,script)==0,"Original append unexpectedly emitted a host effect");check_collected(source,labels[variant]);check_label(source,0,labels[variant],target);
        require(source.chain(1)==std::vector<unsigned>{0} && source.scene()==before,"Original append changed scene or wrong chain");++audit.gathering;
    }
    {
        Script script{label_command(std::array<std::uint8_t,1>{letter},1,0)};script.bytes.push_back(2);MenuSource source(install(original,script));source.create(1);
        execute(source,script);check_label(source,0,std::array<std::uint8_t,1>{letter});++audit.gathering;
    }
    if(us) {
        Script script{{0x15,0,2},0xfffe,{0x19,2,letter,0x15,0x16,0x17,2,0}};MenuSource source(install(original,script));source.create(1);
        require(execute(source,script)==0,"US dictionary argument gathering emitted effects");check_label(source,0,std::array<std::uint8_t,4>{letter,0x15,0x16,0x17});++audit.dictionary;
    }
    for(unsigned nofocus:{0u,1u})for(unsigned amount:{24u,29u}) {
        std::vector<std::uint8_t> raw(amount,letter);Script script{label_command(raw,1,0x12abcdef)};script.bytes.push_back(2);
        MenuSource source(install(original,script));source.create(1);
        if(nofocus)source.put(source.p.focus,0xffff);else for(unsigned i=0;i<70;++i)source.append(std::array<std::uint8_t,1>{letter});
        const auto old_pool=pool(source),old_window=record_bytes(source,0);require(execute(source,script)==0,"Ignored append yielded a host effect");check_collected(source,raw);
        require(pool(source)==old_pool && record_bytes(source,0)==old_window,"Full/no-focus authored append mutated menu");audit.menu_bytes+=old_pool.size()+old_window.size();++audit.fallback;
    }
}
void source_resets(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;const auto letter=std::uint8_t(us?0x71:0x41);
    for(unsigned mode=0;mode<4;++mode) {
        Script script{{0x19,4,2}};MenuSource source(install(original,script));source.create(1);
        if(mode!=0)for(unsigned i=0;i<3;++i)source.append(std::array<std::uint8_t,4>{letter,std::uint8_t(letter+1),std::uint8_t(letter+2),std::uint8_t(letter+3)});
        if(mode==2)source.put(source.p.focus,0xffff);
        const auto old_pool=pool(source),old_record=record_bytes(source,0);const auto old_video=source.bus->video_ram;
        require(execute(source,script)==0,"Authored reset emitted a host effect");
        for(unsigned i=0;i<old_pool.size();++i) {
            const bool clear=mode!=0 && mode!=2 && i/(us?45:44)<3 && i%(us?45:44)<2;
            require(source.bus->work_ram[source.p.menus+i]==(clear?0:old_pool[i]),"Reset changed retained option bytes");++audit.menu_bytes;
        }
        if(mode==0 || mode==2)require(record_bytes(source,0)==old_record,"Empty/no-focus reset changed window metadata");
        else {const auto base=source.record(0);require(source.get(base+43)==65535 && source.get(base+45)==65535 && source.get(base+47)==65535 && source.get(base+49)==1 && source.get(base+51)==1,"Reset window fields differ");}
        require(source.bus->video_ram==old_video,"Reset modified original art");++audit.reset;
    }
    Script script;const std::vector<std::uint8_t> long_label(24,letter);append_bytes(script.bytes,label_command(long_label));append_bytes(script.bytes,std::array<std::uint8_t,2>{0x19,4});
    append_bytes(script.bytes,label_command(std::array<std::uint8_t,1>{std::uint8_t(letter+1)}));script.bytes.push_back(2);MenuSource source(install(original,script));source.create(1);execute(source,script);
    check_label(source,0,std::array<std::uint8_t,1>{std::uint8_t(letter+1)});for(unsigned i=2;i<24;++i)require(source.bus->work_ram[source.option(0)+19+i]==letter,"Shorter authored label erased retained suffix");++audit.reset;
}struct NativeCounts {unsigned cases{},streams{},effects{},polls{},callbacks{},child_streams{};std::uint64_t snapshots{},menu_bytes{},canvas_pixels{},scene_pixels{},ppu_pixels{};} native_counts;
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
    std::array<bool,70> constructed{};std::array<bool,8> defined{};std::string context;unsigned child_calls{};
    Pair(const eb::GameAssets& assets):source(assets),fonts(dialogue::FontResources::import(assets.image,assets.version)),output(fonts,state),
        host(dialogue::WindowResources::import(assets.image,assets.version),state,output),model(host,*fonts),menu_resources(dialogue::MenuResources::import(assets.image,assets.version)),context(assets.version==eb::GameVersion::US?"US":"JP") {
        const bool us=assets.version==eb::GameVersion::US;graphics=std::make_shared<dialogue::WindowGraphics>(dialogue::WindowInitializationResources::import(assets.image,assets.version),output);host.set_graphics(graphics);
        std::array<std::uint8_t,5> name{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43),std::uint8_t(us?0x74:0x44),0};dialogue::PartyNameInputs names;for(auto& entry:names.names)entry=name;
        graphics->prepare(names,1);auto publish=graphics->begin_publication(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
        while(publish->advance()==dialogue::Progress::Suspended)publish->respond();require(publish->complete(),"Native matched artwork loading incomplete");
        state.unfocused_register_slot=0;source.put(source.p.open+0xfffe,0);source.real_ticks=true;
        source.bus->work_ram[source.p.game+(us?0xafu:0xacu)]=1;source.bus->work_ram[source.p.game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);source.call(us?0xc47f87:0xc45c1a,true);host.publish_palette(1,false,true);
        source.cpu.observe_memory_write=[this](std::uint32_t address,std::uint8_t value) {
            if((address>>16)!=0x7e || value!=1)return;const unsigned at=address&65535,stride=source.version==eb::GameVersion::US?45:44;
            if(at>=source.p.menus && at<source.p.menus+70*stride && (at-source.p.menus)%stride==0)constructed[(at-source.p.menus)/stride]=true;
        };
    }
    static std::optional<unsigned> optional(unsigned value){return value==65535?std::nullopt:std::optional<unsigned>{value};}
    void compare(const std::string& where) {
        const auto label=context+" "+where;const bool us=source.version==eb::GameVersion::US;
        require((state.focus?state.focus->value:65535)==source.get(source.p.focus),label+" focus differs");
        for(unsigned id=0;id<source.p.count;++id)require(host.slot_for({id})==optional(source.slot(id)),label+" open mapping differs");
        for(unsigned index=0;index<8;++index)if(defined[index]) {
            const auto base=source.record(index);const auto& meta=host.slot(index);const auto& window=host.slot_output(index);const auto& regs=state.registers_at(index).active;
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
        auto program=program_for(source.version,script);dialogue::MenuHost menus(program,host,menu_resources);dialogue::Conversation conversation(program,menus);
        source.observe_instruction=[&](unsigned pc) {
            if(pc==(source.version==eb::GameVersion::US?0xc186b1u:0xc18913u) && source.get32(source.cpu.direct_page+14)==0xee9000){++child_calls;++native_counts.child_streams;}
        };
        source.put32(0x1e0e,0xee0000|script.start);source.begin(source.version==eb::GameVersion::US?0xc186b1:0xc18913,true);conversation.start(dialogue::EntryId{0});unsigned event_index=0;
        for(unsigned n=0;n<200000;++n) {
            const auto status=conversation.advance(budget);if(status==dialogue::Progress::BudgetExhausted)continue;const auto expected=source.advance();compare("event "+std::to_string(event_index));
            if(status==dialogue::Progress::Finished) {
                require(!expected && !source.busy,context+" native stream finished early");require(conversation.snapshot().returned_cursor==dialogue::Location{1,std::uint16_t(source.get32(0x1e06))},context+" final stream cursor differs");
                require(source.get32(0x1e06)==(0xee0000|((script.start+script.bytes.size())&65535)),context+" source caller cursor differs");++native_counts.streams;++native_counts.cases;final_scene();return;
            }
            require(expected && conversation.event(),context+" effect count differs");const auto event=*conversation.event();dialogue::Response response;
            if(const auto* effect=std::get_if<dialogue::TextEffect>(&event))require((*expected==Service::Sound && effect->kind==dialogue::TextEffectKind::TextSound)||(*expected==Service::WindowTick && effect->kind==dialogue::TextEffectKind::WindowTick),context+" text effect order differs");
            else if(const auto* effect=std::get_if<dialogue::WindowEffect>(&event))require((*expected==Service::WindowTick && effect->kind==dialogue::WindowEffectKind::WindowTick)||(*expected==Service::WaitFrame && effect->kind==dialogue::WindowEffectKind::FrameWait)||(*expected==Service::ClearPartyBlink && effect->kind==dialogue::WindowEffectKind::ClearPartyBlink),context+" window effect order differs");
            else if(const auto* effect=std::get_if<dialogue::MenuEffect>(&event)) {
                if(*expected==Service::Input){require(effect->kind==dialogue::MenuEffectKind::Input,context+" input effect differs");const auto input=source.inputs.at(source.input_index);response.pressed=input.press;response.held=input.held;++native_counts.polls;}
                else if(*expected==Service::Sound)require(effect->kind==dialogue::MenuEffectKind::Sound && effect->value==source.cpu.accumulator,context+" menu sound ID differs");
                else if(*expected==Service::Callback){require(effect->kind==dialogue::MenuEffectKind::Callback && effect->value==source.cpu.accumulator,context+" callback value differs");++native_counts.callbacks;}
                else require(*expected==Service::Money && effect->kind==dialogue::MenuEffectKind::ShowMoneyMeters,context+" unexpected menu event");
            } else throw std::runtime_error(context+" authored command left native service");
            require(conversation.advance(1)==dialogue::Progress::Suspended && conversation.event()==event,context+" pending effect changed");
            if(*expected==Service::WindowTick){if(source.version==eb::GameVersion::US && host.menu_state().early_tick_exit)host.menu_state().early_tick_exit=false;else if(!output.policy().instant){host.draw_tick();host.publish_scene();}}
            source.respond();conversation.respond(response);++event_index;++native_counts.effects;
        }throw std::runtime_error(context+" native stream exceeded bound");
    }
};
void native_gathering(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;const auto letter=std::uint8_t(us?0x71:0x41);
    std::vector<std::vector<std::uint8_t>> labels;for(unsigned first:{0u,1u,2u,0x15u,0x16u,0x17u})labels.push_back({std::uint8_t(first),letter,std::uint8_t(letter+1)});
    labels.push_back({letter,0,letter,0x15,0x16,0x17});labels.emplace_back(24,letter);labels.emplace_back(29,letter);labels.back()[3]=0;
    for(unsigned variant=0;variant<labels.size();++variant)for(unsigned delimiter:{1u,2u}) {
        Script script{label_command(labels[variant],delimiter,delimiter==1?0xee9000:0)};script.bytes.push_back(2);if(variant%3==0)script.start=0xfffb;
        Pair pair(install(original,script));pair.context+=" gather="+std::to_string(variant)+" delimiter="+std::to_string(delimiter);pair.open(1);pair.run(script,variant%3==0?1:variant%3==1?2:4096);
    }
    if(us){Script script{{0x15,0,2},0xfffe,{0x19,2,letter,0x15,0x16,0x17,2,0}};Pair pair(install(original,script));pair.context+=" dictionary label";pair.open(1);pair.run(script,1);}
    for(unsigned nofocus:{0u,1u})for(unsigned amount:{24u,29u}) {
        Script script{label_command(std::vector<std::uint8_t>(amount,letter),1,0x12abcdef)};script.bytes.push_back(2);Pair pair(install(original,script));pair.context+=" ignored ref nofocus="+std::to_string(nofocus)+" raw="+std::to_string(amount);pair.open(1);
        if(nofocus)pair.absent(0);else for(unsigned i=0;i<70;++i)pair.append(std::array<std::uint8_t,1>{letter});pair.run(script,2);
    }
    for(unsigned budget:{1u,2u,4096u}) {
        Script script;append_bytes(script.bytes,label_command(std::vector<std::uint8_t>(24,letter),1,0));append_bytes(script.bytes,std::array<std::uint8_t,2>{0x19,4});
        append_bytes(script.bytes,label_command(std::array<std::uint8_t,1>{std::uint8_t(letter+1)}));script.bytes.push_back(2);
        Pair pair(install(original,script));pair.context+=" retained suffix budget="+std::to_string(budget);pair.open(1);pair.run(script,budget);
    }
    for(unsigned mode=0;mode<3;++mode) {
        Script script{{0x19,4,2}};Pair pair(install(original,script));pair.context+=" reset="+std::to_string(mode);pair.open(1);
        if(mode)for(unsigned i=0;i<3;++i)pair.append(std::array<std::uint8_t,2>{letter,std::uint8_t(letter+1)});
        if(mode!=1) {
            pair.source.put(pair.source.record(0)+47,7);pair.host.slot(0).selected_option=7;
            pair.source.put(pair.source.record(0)+49,4);pair.host.slot(0).layout_columns=4;
            pair.source.put(pair.source.record(0)+51,3);pair.host.slot(0).page_number=3;
        }
        if(mode==2)pair.absent(0);pair.run(script);
    }
}
void native_layout(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;const auto letter=std::uint8_t(us?0x71:0x41);
    for(unsigned selector:{7u,12u})for(unsigned amount:{0u,4u,12u})for(unsigned columns:{1u,2u,4u}) {
        if(us && selector==7 && amount>4)continue;
        Script script;for(unsigned i=0;i<amount;++i)append_bytes(script.bytes,label_command(std::vector<std::uint8_t>(1+i%3,letter+i%12)));
        append_bytes(script.bytes,std::array<std::uint8_t,4>{0x1c,std::uint8_t(selector),std::uint8_t(columns),2});Pair pair(install(original,script));pair.context+=" layout selector="+std::to_string(selector)+" amount="+std::to_string(amount)+" columns="+std::to_string(columns);pair.open(1);
        // These fields are deliberate non-default inputs. C1180D must not run
        // C1181B/prepare_selection or choose an initial ordinal/page.
        pair.source.put(pair.source.record(0)+47,2);pair.host.slot(0).selected_option=2;pair.source.put(pair.source.record(0)+51,2);pair.host.slot(0).page_number=2;
        pair.run(script);require(pair.host.slot(0).selected_option==2 && pair.host.slot(0).page_number==2,"Authored layout normalized selection/page");
    }
    for(unsigned amount:{0u,1u,4u})for(unsigned argument:{0u,0x12340002u,0x12340100u}) {
        if(amount && !argument)continue;Script script;for(unsigned i=0;i<amount;++i)append_bytes(script.bytes,label_command(std::array<std::uint8_t,1>{letter}));append_bytes(script.bytes,std::array<std::uint8_t,4>{0x1c,12,0,2});
        Pair pair(install(original,script));pair.context+=" argument="+std::to_string(argument)+" amount="+std::to_string(amount);pair.open(1);pair.source.put32(pair.source.record(0)+27,argument);pair.state.registers_at(0).active.argument=argument;pair.run(script);
        if(amount)require(pair.host.slot(0).layout_columns==(argument&65535),"Layout failed to use exact low-word argument");
    }
    for(unsigned mode=0;mode<7;++mode) {
        const unsigned amount=mode==0?0:mode==1?4:(mode==2 || mode==6)?12:mode==3?70:0;
        const unsigned selector=mode==1?7:12;Script script{{0x1c,std::uint8_t(selector),std::uint8_t(mode==4 || mode==5?0:2),2}};
        Pair pair(install(original,script));pair.context+=" ambient layout="+std::to_string(mode);pair.open(1);
        if(mode==6) {
            for(unsigned i=0;i<70;++i)pair.append(std::array<std::uint8_t,1>{letter});
            pair.source.call(us?0xc11383:0xc119ab,false);auto release=pair.host.begin({dialogue::WindowAction::ResetMenu});while(release->advance()==dialogue::OutputProgress::Suspended)release->respond();
            require(release->complete(),"Retained pool preparation did not finish");pair.compare("released all70 originally constructed records");
        }
        for(unsigned i=0;i<amount;++i)pair.append(std::vector<std::uint8_t>(1+i%3,letter+i%12));
        if(amount)pair.position(1,1);
        if(mode==4 || mode==5)pair.close(1);if(mode==5)pair.open(2);pair.absent(0);
        if(mode==1){const unsigned font=us?3:1;pair.source.put(pair.source.record(0)+21,font);auto style=pair.output.window({1}).style;style.font=font;pair.output.set_style({1},style);}
        const auto source69=pool(pair.source);const auto native69=pair.host.menu_options()[69];pair.run(script,1);
        if(mode==2) {
            const unsigned stride=us?45:44,at=pair.source.option(69);
            require(pair.source.get(at+2)==(source69[69*stride+2]|unsigned(source69[69*stride+3])<<8) && pair.source.get(at+4)==(source69[69*stride+4]|unsigned(source69[69*stride+5])<<8),"Fresh source fallback rewrote untouched links");
            require(pair.host.menu_options()[69].next==native69.next && pair.host.menu_options()[69].previous==native69.previous,"Fresh native fallback invented links");
        }
    }
}
void native_selection(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;const auto letter=std::uint8_t(us?0x71:0x41);
    for(unsigned selector:{0x11u,4u,8u,9u})for(unsigned movement:{0u,1u}) {
        Script script;script.child={0x0f,std::uint8_t(letter+10),2};
        for(unsigned i=0;i<4;++i)append_bytes(script.bytes,label_command(std::array<std::uint8_t,2>{std::uint8_t(letter+i),letter},1,0xee9000));
        append_bytes(script.bytes,std::array<std::uint8_t,3>{0x1c,12,2});
        if(selector==0x11)script.bytes.push_back(0x11);else append_bytes(script.bytes,std::array<std::uint8_t,2>{0x1a,std::uint8_t(selector)});script.bytes.push_back(2);
        Pair pair(install(original,script));pair.context+=" authored selection="+std::to_string(selector)+" move="+std::to_string(movement);pair.open(1);
        if(movement)pair.source.inputs.push_back({0x400,0});pair.source.inputs.push_back({0x80,0});pair.run(script,1);
        require(pair.state.registers_at(0).active.secondary==1+movement,pair.context+" selected child secondary="+std::to_string(pair.state.registers_at(0).active.secondary)+" source="+std::to_string(pair.source.get(pair.source.record(0)+31)));
        require(pair.source.input_index==pair.source.inputs.size(),"Authored selection did not consume explicit inputs");
        require(pair.child_calls==1+movement,pair.context+" actual original child-call count differs");
        if(selector==0x11)require(pair.host.slot(0).first_option==65535,"CC11 did not release authored menu");
    }
}
}
int main(int argc,char**argv){try {
    if(argc<2){std::cout<<"SKIP native authored-menu reference: local packs required\n";return 77;}
    for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());source_gathering(assets);source_resets(assets);native_gathering(assets);native_layout(assets);native_selection(assets);}
    std::cout<<"PASS authored-menu source diagnostics: "<<audit.streams<<" complete streams, "<<audit.gathering<<" labels, "<<audit.dictionary<<" dictionary-tail cases, "<<audit.fallback<<" full/no-focus fallbacks, "<<audit.reset<<" resets, "<<audit.menu_bytes<<" retained menu bytes\n";
    std::cout<<"PASS native authored menus: "<<native_counts.cases<<" complete streams, "<<native_counts.child_streams<<" actual selected child DISPLAY calls, "<<native_counts.effects<<" ordered effects, "<<native_counts.polls<<" input polls, "<<native_counts.snapshots<<" state/image snapshots, "<<native_counts.menu_bytes<<" option bytes, "<<native_counts.canvas_pixels<<" indexed canvas pixels, "<<native_counts.scene_pixels<<" scene pixels, "<<native_counts.ppu_pixels<<" source PPU pixels, "<<counts.instructions<<" original instructions\n";
    std::cout<<"Scope: real imported regional assets and original DISPLAY/append/reset/layout/printing/selection/child bodies. "
        <<"Native whole commands are compared at final and real effect boundaries, with construction budgets1/2/4096 and no fake focus. "
        <<"Original input and WindowTick wrappers run their drawing; world HP/PP/audio/input are declared seams. "
        <<"JP completed-DMA semaphore is acknowledged at C439E2/C43BE8. "
        <<"No scheduler, physical input, PCM, GPU or whole-game parity claim.\n";return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
