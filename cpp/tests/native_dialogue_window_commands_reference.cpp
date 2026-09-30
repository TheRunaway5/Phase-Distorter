// Independent whole-DISPLAY_TEXT oracle for authored window-context commands:
// 18_05 position, 18_08/09 scoped selection, 18_0A wallet, 1C09 number padding,
// and 1F30/31 font selection. Local imported packs and original Legacy CPU
// execution provide all expected state, composition artwork and PPU pixels.
// Original C200D9, LOAD_WINDOW_GFX, CREATE/CLOSE, PRINT_LETTER, SELECTION_MENU,
// wallet formatting, attribute save/restore and frame drawers all execute.
// Source-only diagnostics include raw cursor storage and corrupting high-value
// wallets; native parity is asserted only for representable canvas accesses.
// Raw position storage is compared without drawing through its invalid cursor.
// Nested DISPLAY_TEXT runs on a real new C frame under the suspended source
// WINDOW_TICK, preserving caller stack/locals while sharing the global backup.
// Input/frame wrappers execute original drawing. Their inner world, HP/PP and
// audio services are explicit seams; JP already-completed DMA is acknowledged
// at compose/reset. This is domain/CPU-PPU proof, not a full game scheduler,
// physical controller, PCM or GPU presentation test. Virgin optional pool
// links are not interpreted until an actual original constructor initializes
// their source meaning; retained constructed fields are compared exactly.
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
struct Totals {unsigned positions{},fields{},selections{},wallets{},nested{},streams{},effects{},money_reads{},overflow_wallets{};} totals;
struct Script {std::vector<std::uint8_t> bytes;unsigned start=0x8000;std::vector<std::uint8_t> child;std::vector<std::uint8_t> dictionary;};
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
    while(const auto event=source.advance()){++totals.effects;if(seam)seam(*event);source.respond();}
    require(source.get32(0x1e06)==(0xee0000|((script.start+script.bytes.size())&65535)),"Original window-command stream cursor differs");++totals.streams;
}
void source_positions(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned mode=0;mode<3;++mode)for(unsigned force:{0u,1u})for(unsigned x:{0u,1u,7u,8u,31u,255u}) {
        const unsigned y=x==255?255:x==31?1:0;Script script{{0x18,5,std::uint8_t(x),std::uint8_t(y),2},x%2?0xfffdu:0x8000u};MenuSource source(install(original,script));source.create(1);
        source.put(source.record(0)+21,font);source.bus->work_ram[source.p.instant]=1;source.call(us?0xc10cb6:0xc111ec,false,us?0x77:0x63);
        if(mode==2)source.close(1);if(mode)absent(source);source.bus->work_ram[us?0x5e71:0x61e9]=force;source.put(us?0x5e6e:0x61e6,0);
        const auto old_vram=source.bus->video_ram;const auto old_focus=source.get(source.p.focus);const unsigned old_effects=totals.effects;
        execute(source,script);require(source.get(source.record(0)+14)==(us && force?x/8:x) && source.get(source.record(0)+16)==y,std::string(us?"US":"JP")+" raw position font="+std::to_string(font)+" mode="+std::to_string(mode)+" force="+std::to_string(force)+" input="+std::to_string(x)+","+std::to_string(y)+" result="+std::to_string(source.get(source.record(0)+14))+","+std::to_string(source.get(source.record(0)+16)));
        require(source.get(source.p.focus)==old_focus && source.bus->video_ram==old_vram && totals.effects==old_effects,"Position changed focus/visible art/emitted effect");
        if(us && force && x%8)require(source.bus->work_ram[0x5e73]==x%8,"Original fractional positioning lost saved offset");++totals.positions;
    }
}
void source_fields(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned nofocus:{0u,1u})for(unsigned padding:{0u,1u,5u,15u,127u,128u,255u}) {
        Script script{{0x1f,0x31,0x1c,9,std::uint8_t(padding),0x0f,0x1f,0x30,2}};MenuSource source(install(original,script));source.create(1);source.put(source.record(0)+21,1);source.bus->work_ram[source.record(0)+18]=0x55;
        if(nofocus)absent(source);const unsigned old_effects=totals.effects;execute(source,script);
        require(source.get(source.record(0)+21)==(nofocus?1:0) && source.bus->work_ram[source.record(0)+18]==(nofocus?0x55:padding),"Original focused font/padding guard differs");
        require(source.get(source.record(0)+31)==1 && totals.effects==old_effects,"Single-byte padding decoding consumed following control");++totals.fields;
    }
}
void make_menu(MenuSource& source,unsigned id) {
    source.create(id);const auto letter=std::uint8_t(source.version==eb::GameVersion::US?0x71:0x41);
    for(unsigned i=0;i<3;++i)source.append(std::array<std::uint8_t,2>{std::uint8_t(letter+i),letter});source.arrange(1);source.print_items();
}
void source_selection(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned command:{8u,9u})for(unsigned mode=0;mode<4;++mode) {
        // The three following0f commands catch the misleading four-byte macro:
        // each must execute after the one-byte target, at the restored focus.
        Script script{{0x18,std::uint8_t(command),2,0x0f,0x0f,0x0f,2}};MenuSource source(install(original,script));source.create(1);make_menu(source,2);
        source.put(source.p.focus,mode==2?2:1);if(mode==3)absent(source);source.put32(source.record(0)+23,0x11111111);source.put32(source.record(1)+23,0x22222222);
        source.inputs=mode==1?std::vector<Source::Input>{{0x8000,0},{0x80,0}}:std::vector<Source::Input>{{0x80,0}};source.selection_window=2;source.real_ticks=true;
        execute(source,script);const unsigned destination=mode>=2?1:0;const unsigned expected_result=command==9 && mode==1?0:1;
        require(source.get(source.p.focus)==(destination?2:1) && source.get32(source.record(destination)+23)==expected_result && source.get(source.record(destination)+31)==3,"Scoped selection restored/wrote wrong destination");
        require(source.chain(2).size()==3,"Scoped selection reset target menu");++totals.selections;
    }
    {
        Script script{{0x18,8,2,2},0x8000,{0x18,0x0a,2}};MenuSource source(install(original,script));source.create(1);make_menu(source,2);source.put(source.p.focus,1);
        source.put32(source.record(0)+23,0x11111111);source.put32(source.record(1)+23,0x22222222);source.put32(money(source),123);source.inputs={{0x80,0}};source.selection_window=2;source.real_ticks=true;bool nested=false;
        execute(source,script,[&](Service event){if(event==Service::WindowTick && !nested){nested=true;source.enter_nested_display(0xee9000);while(source.advance())source.respond();source.leave_nested_display();}});
        require(nested && source.get(backup(source))==2 && source.get(source.p.focus)==2 && source.get32(source.record(1)+23)==1 && source.get32(source.record(0)+23)==0x11111111,"Real nested wallet failed shared-backup overwrite proof");++totals.nested;
    }
}
void source_wallet(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned mode=0;mode<4;++mode)for(unsigned instant:{0u,1u})for(unsigned value:{0u,1u,9999999u}) {
        Script script{{0x18,0x0a,2}};MenuSource source(install(original,script));source.create(1);
        if(mode==1){source.create(10);source.put(source.p.focus,1);}if(mode==2)absent(source);
        if(mode==3){for(unsigned id=2;id<=8;++id)source.create(id);require(source.order().size()==8,"Source wallet-full fixture did not occupy all eight windows");}
        const auto focus=source.get(source.p.focus),base=source.record(source.slot(focus==65535?1:focus));source.put32(base+23,0x12345678);source.bus->work_ram[source.p.instant]=instant;source.put32(money(source),value);
        unsigned reads=0;bool outside_canvas=false;source.observe_instruction=[&](unsigned pc){
            if(pc==(us?0xc1aa3au:0xc1a920u)){++reads;require(source.bus->work_ram[source.p.instant]==1,"Wallet read before instant/clear preparation");}
            if(pc==(us?0xc10cb6u:0xc111ecu)){const auto at=source.record(source.slot(source.get(source.p.focus)));outside_canvas|=source.get(at+14)>source.get(at+10) || source.get(at+16)>=source.get(at+12)/2;}
        };
        execute(source,script);require(!source.bus->work_ram[source.p.instant],"Original wallet restored instant instead of forcingfalse");
        require(reads==1 && source.get32(base+23)==0x12345678,"Original wallet wrote working result");
        if(mode==3)require(source.slot(10)==65535 && source.get(source.p.focus)==focus,"Full eight-slot wallet source did not continue failed create");else require(source.slot(10)<8,"Original wallet did not open window10");
        if(focus!=65535)require(source.get(source.p.focus)==focus,"Original wallet did not restore saved focus");if(mode==0 && value==9999999)require(outside_canvas,"High-wallet diagnostic no longer reaches out-of-canvas source coordinates");
        totals.overflow_wallets+=outside_canvas;++totals.wallets;totals.money_reads+=reads;
    }
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
    MenuSource source;dialogue::State state;std::shared_ptr<const dialogue::FontResources> fonts;dialogue::TextOutput output;
    dialogue::WindowHost host;dialogue::MenuModel model;std::shared_ptr<const dialogue::MenuResources> menu_resources;std::shared_ptr<dialogue::WindowGraphics> graphics;
    std::array<bool,70> constructed{};std::array<bool,8> defined{};std::string context;unsigned child_calls{};bool nested_requested{},nested_entered{},mutate_money_on_create{};std::uint32_t live_money{},replacement_money{};unsigned source_money_reads{},native_money_reads{};
    Pair(const eb::GameAssets& assets,unsigned flavor=1):source(assets,flavor),fonts(dialogue::FontResources::import(assets.image,assets.version)),output(fonts,state),
        host(dialogue::WindowResources::import(assets.image,assets.version),state,output),model(host,*fonts),menu_resources(dialogue::MenuResources::import(assets.image,assets.version)),context(assets.version==eb::GameVersion::US?"US":"JP") {
        const bool us=assets.version==eb::GameVersion::US;graphics=std::make_shared<dialogue::WindowGraphics>(dialogue::WindowInitializationResources::import(assets.image,assets.version),output);host.set_graphics(graphics);
        std::array<std::uint8_t,5> name{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43),std::uint8_t(us?0x74:0x44),0};dialogue::PartyNameInputs names;for(auto& entry:names.names)entry=name;
        graphics->prepare(names,flavor);auto publish=graphics->begin_publication(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
        while(publish->advance()==dialogue::Progress::Suspended)publish->respond();require(publish->complete(),"Native matched artwork loading incomplete");
        state.unfocused_register_slot=0;source.put(source.p.open+0xfffe,0);source.real_ticks=true;
        source.bus->work_ram[source.p.game+(us?0xafu:0xacu)]=1;source.bus->work_ram[source.p.game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);source.call(us?0xc47f87:0xc45c1a,true);host.publish_palette(flavor,false,true);
        host.substitutions().configure(dialogue::SubstitutionResources::import(assets.image,assets.version),{
            [this](dialogue::StatKey key) {
                require(key.field==dialogue::StatField::MoneyCarried && key.party_index==0,"Wallet requested wrong live provider field");
                require(state.focus.has_value() && host.metadata(*state.focus).number_padding==5 && output.policy().instant,"Wallet read live value before preparation");
                require(output.window(*state.focus).cursor==dialogue::TextCursor{},"Wallet provider read occurred before clear");
                ++native_money_reads;++native_counts.provider_reads;return live_money;
            },{}});
        source.cpu.observe_memory_write=[this](std::uint32_t address,std::uint8_t value) {
            if((address>>16)!=0x7e || value!=1)return;const unsigned at=address&65535,stride=source.version==eb::GameVersion::US?45:44;
            if(at>=source.p.menus && at<source.p.menus+70*stride && (at-source.p.menus)%stride==0)constructed[(at-source.p.menus)/stride]=true;
        };
    }
    static std::optional<unsigned> optional(unsigned value){return value==65535?std::nullopt:std::optional<unsigned>{value};}
    void compare(const std::string& where) {
        const auto label=context+" "+where;const bool us=source.version==eb::GameVersion::US;
        require((state.focus?state.focus->value:65535)==source.get(source.p.focus),label+" focus differs");
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
        auto program=program_for(source.version,script);dialogue::MenuHost menus(program,host,menu_resources);dialogue::Conversation conversation(program,menus);
        source.observe_instruction=[&](unsigned pc) {
            if(pc==(source.version==eb::GameVersion::US?0xc186b1u:0xc18913u) && source.get32(source.cpu.direct_page+14)==0xee9000){++child_calls;++native_counts.child_streams;}
            if(pc==(source.version==eb::GameVersion::US?0xc1aa3au:0xc1a920u)){++source_money_reads;require(source.bus->work_ram[source.p.instant]==1,"Source wallet value read before preparation");}
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
                if(*expected==Service::WindowTick && !nested && nested_requested && !nested_entered) {
                    const auto held=host.frame();const auto held_pixels=held->pixels;const auto held_priority=held->priority;
                    nested_entered=true;source.enter_nested_display(0xee9000);dialogue::Conversation child(program,menus);child.start_nested(dialogue::Location{1,0x9000},current);
                    drive(child,true);source.leave_nested_display();require(held->pixels==held_pixels && held->priority==held_priority,context+" held scene changed during nested output");++native_counts.held_frames;require(current.event()==event,context+" nested operation lost parent pending tick");compare("parent restored after actual child return");++native_counts.nested;
                }
                if(*expected==Service::ClearPartyBlink && mutate_money_on_create){live_money=replacement_money;source.put32(money(source),replacement_money);mutate_money_on_create=false;}
                if(*expected==Service::WindowTick){if(source.version==eb::GameVersion::US && host.menu_state().early_tick_exit)host.menu_state().early_tick_exit=false;else if(!output.policy().instant){host.draw_tick();host.publish_scene();}}
                source.respond();current.respond(response);++event_index;++native_counts.effects;
            }throw std::runtime_error(context+" native stream exceeded bound");
        };
        drive(conversation,false);require(source_money_reads==native_money_reads,context+" live money read count differs");++native_counts.cases;final_scene();
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
void native_positions(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned mode=0;mode<3;++mode)for(unsigned force:{0u,1u})for(unsigned x:{0u,1u,7u,8u,31u,255u}) {
        const unsigned y=x==255?255:x==31?1:0;Script script{{0x18,5,std::uint8_t(x),std::uint8_t(y),2},x%2?0xfffdu:0x8000u};Pair pair(install(original,script));pair.context+=" position font="+std::to_string(font)+" mode="+std::to_string(mode)+" force="+std::to_string(force)+" xy="+std::to_string(x)+","+std::to_string(y);pair.open(1);partial(pair,font);
        if(mode==2)pair.close(1);if(mode)pair.absent(0);pair.source.bus->work_ram[us?0x5e71:0x61e9]=force;pair.host.menu_state().force_left_alignment=force;
        pair.source.put(us?0x5e6e:0x61e6,0);pair.state.word_wrap=false;pair.run(script,x%2?1:4096);
    }
    for(unsigned force:{0u,1u}) {
        const auto glyph=std::uint8_t(us?0x77:0x63);Script script{{0x18,5,7,0,glyph,0x18,5,8,0,glyph,2}};Pair pair(install(original,script));pair.context+=" position subsequent glyph force="+std::to_string(force);pair.open(1);partial(pair,1);
        pair.source.bus->work_ram[us?0x5e71:0x61e9]=force;pair.host.menu_state().force_left_alignment=force;pair.run(script,1);
    }
    if(us){Script script{{0x15,0,2},0xfffe,{}, {0x18,5,0x15,0x16,0}};Pair pair(install(original,script));pair.context+=" dictionary position";pair.open(1);pair.source.put(0x5e6e,0);pair.state.word_wrap=false;pair.source.bus->work_ram[0x5e71]=1;pair.host.menu_state().force_left_alignment=true;pair.run(script,1);}
}
void native_fields(const eb::GameAssets& original) {
    const bool us=original.version==eb::GameVersion::US;const auto glyph=std::uint8_t(us?0x77:0x63);
    for(unsigned nofocus:{0u,1u})for(unsigned padding:{0u,1u,5u,15u,127u,128u,255u}) {
        Script script{{0x1f,0x31,0x1c,9,std::uint8_t(padding),0x0f,0x1c,0x0a,123,0,0,0,0x1f,0x30,2}};
        Pair pair(install(original,script));pair.context+=" padding/font nofocus="+std::to_string(nofocus)+" byte="+std::to_string(padding);pair.open(1);partial(pair,1);pair.source.bus->work_ram[pair.source.record(0)+18]=0x55;pair.host.slot(0).number_padding=0x55;
        if(nofocus)pair.absent(0);pair.run(script,1);
    }
    for(unsigned font=0;font<(us?5u:2u);++font) {
        Script script{{0x1f,0x31,glyph,0x1f,0x30,glyph,2}};Pair pair(install(original,script));pair.context+=" font transition from="+std::to_string(font);pair.open(1);partial(pair,font);pair.run(script);
    }
}
void native_selections(const eb::GameAssets& original) {
    for(unsigned command:{8u,9u})for(unsigned mode=0;mode<4;++mode) {
        Script script{{0x18,std::uint8_t(command),2,0x0f,0x0f,0x0f,2}};Pair pair(install(original,script));pair.context+=" scoped selection="+std::to_string(command)+" mode="+std::to_string(mode);pair.open(1);make_menu(pair,2);
        set_focus(pair,mode==2?2:1);if(mode==3)pair.absent(0);pair.source.put32(pair.source.record(0)+23,0x11111111);pair.state.registers_at(0).active.working=0x11111111;pair.source.put32(pair.source.record(1)+23,0x22222222);pair.state.registers_at(1).active.working=0x22222222;
        pair.source.inputs=mode==1?std::vector<Source::Input>{{0x8000,0},{0x80,0}}:std::vector<Source::Input>{{0x80,0}};pair.source.selection_window=2;pair.run(script,1);
        const unsigned destination=mode>=2?1:0;require(pair.state.registers_at(destination).active.secondary==3,"18_08 consumed more than one operand");require(pair.host.slot(1).first_option!=65535,"Scoped selection reset options");
    }
    for(unsigned mode=0;mode<4;++mode) {
        Script script{{0x18,8,2,2}};
        if(mode==0)script.child={0x18,0x0a,2};
        else if(mode==1)script.child={0x18,8,3,2};
        else if(mode==2)script.child={0x18,3,1,0x18,0,0x18,3,2,2};
        else script.child={0x18,3,1,0x18,0,0x18,1,3,0x18,1,1,0x18,3,2,2};
        Pair pair(install(original,script));pair.context+=" nested shared context="+std::to_string(mode);pair.open(1);make_menu(pair,2);if(mode==1)make_menu(pair,3);set_focus(pair,1);partial(pair,1);pair.position(1,0);
        pair.source.put32(pair.source.record(0)+23,0x11111111);pair.state.registers_at(0).active.working=0x11111111;set_money(pair,123);pair.source.inputs=mode==1?std::vector<Source::Input>{{0x80,0},{0x80,0}}:std::vector<Source::Input>{{0x80,0}};pair.source.selection_window=2;pair.nested_requested=true;pair.run(script,1);
        require(pair.nested_entered,"Nested real WindowTick was not reached");const unsigned restored_id=mode==3?1:2;require(pair.state.focus==dialogue::WindowId{restored_id},"Scoped selection restored stale call-local attributes");
        const auto destination=*pair.host.slot_for({restored_id});require(pair.state.registers_at(destination).active.working==1,"Scoped result written before conditional restore");
        if(mode<2)require(pair.state.registers_at(0).active.working==0x11111111,"Global-backup nested result overwrote original window");
    }
}
void native_wallets(const eb::GameAssets& original) {
    for(unsigned mode=0;mode<4;++mode)for(unsigned enabled:{0u,1u})for(unsigned value:{0u,1u,99999u}) {
        Script script{{0x18,0x0a,2}};Pair pair(install(original,script));pair.context+=" wallet mode="+std::to_string(mode)+" instant="+std::to_string(enabled)+" value="+std::to_string(value);pair.open(1);
        if(mode==1){pair.open(10);set_focus(pair,1);}if(mode==2)pair.absent(0);if(mode==3){for(unsigned id=2;id<=8;++id)pair.open(id);require(pair.host.draw_order().size()==8,"Native wallet-full setup did not use all eight slots");}
        const auto focus=pair.state.focus;const auto selected=focus?*pair.host.slot_for(*focus):0;pair.source.put32(pair.source.record(selected)+23,0x43218);pair.state.registers_at(selected).active.working=0x43218;instant(pair,enabled);set_money(pair,value);pair.run(script);
        require(!pair.output.policy().instant && pair.state.registers_at(selected).active.working==0x43218,"Wallet instant/working preservation differs");
        if(mode==3)require(!pair.host.slot_for({10}),"Wallet unexpectedly created ninth window");require(pair.native_money_reads==1,"Wallet did not read live amount exactly once");
    }
    for(unsigned flavor=1;flavor<=5;++flavor) {
        Script script{{0x18,0x0a,2}};Pair pair(install(original,script),flavor);pair.context+=" wallet flavor/live read="+std::to_string(flavor);pair.open(1);set_money(pair,1);pair.replacement_money=4321;pair.mutate_money_on_create=true;pair.run(script,1);
        require(pair.native_money_reads==1 && pair.live_money==4321 && !pair.mutate_money_on_create,"Wallet sampled live provider before create effect");
    }
}
void native_wallet_rejection(const eb::GameAssets& original) {
    // ATM's seven-digit maximum is not carried-wallet capacity. The real
    // small imported wallet can underflow its descriptor address at this
    // amount. Source-only diagnostics above execute that corruption; this
    // assertion proves native refusal, never state/pixel parity for corruption.
    Script script{{0x18,0x0a,2}};Pair pair(install(original,script));pair.context+=" explicitly unsupported high wallet";pair.open(1);set_money(pair,9999999);
    auto program=program_for(original.version,script);dialogue::MenuHost menus(program,pair.host,pair.menu_resources);dialogue::Conversation conversation(program,menus);conversation.start(dialogue::EntryId{0});
    bool rejected=false;
    for(unsigned n=0;n<1000 && !rejected;++n) {
        dialogue::Progress result;
        try{result=conversation.advance(1);}catch(const std::invalid_argument& error){
            require(std::string(error.what()).find("Dialogue text cursor leaves its window")!=std::string::npos,"High wallet threw an unrelated failure");rejected=true;break;
        }
        require(result!=dialogue::Progress::Finished,"Corrupting high-wallet amount silently completed");
        if(result==dialogue::Progress::Suspended)conversation.respond();
    }
    require(rejected,"Corrupting high-wallet amount was not explicitly rejected");++native_counts.rejected_wallets;
}

void native_combined(const eb::GameAssets& original) {
    const auto glyph=std::uint8_t(original.version==eb::GameVersion::US?0x71:0x41);
    for(unsigned movement:{0u,1u}) {
        Script script{{0x18,1,2}};script.child={0x0f,std::uint8_t(glyph+10),2};
        for(unsigned i=0;i<4;++i) {
            const std::array<std::uint8_t,9> option{0x19,2,std::uint8_t(glyph+i),glyph,1,0,0x90,0xee,0};
            script.bytes.insert(script.bytes.end(),option.begin(),option.end());
        }
        const std::array<std::uint8_t,23> continuation{0x1c,12,2,0x18,3,1,0x1f,0x31,0x1c,9,5,0x18,5,1,0,glyph,0x18,9,2,0x18,0x0a,0x1f,0x30};
        script.bytes.insert(script.bytes.end(),continuation.begin(),continuation.end());script.bytes.push_back(2);
        Pair pair(install(original,script));pair.context+=" whole construction/scoped selection/wallet move="+std::to_string(movement);pair.open(1);set_money(pair,123);
        if(movement)pair.source.inputs.push_back({0x400,0});pair.source.inputs.push_back({0x80,0});pair.source.selection_window=2;pair.run(script,1);
        require(pair.child_calls==1+movement && pair.state.registers_at(1).active.secondary==1+movement,"Whole scoped selection skipped actual selected child");
        require(pair.state.focus==dialogue::WindowId{1} && pair.host.slot(0).number_padding==5 && pair.output.window({1}).style.font==0,"Whole stream context restore/continuation differs");
    }
}

}
int main(int argc,char**argv){try {
    if(argc<2){std::cout<<"SKIP native window-command reference: local packs required\n";return 77;}
    for(int i=1;i<argc;++i){auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());source_positions(assets);source_fields(assets);source_selection(assets);source_wallet(assets);native_positions(assets);native_fields(assets);native_selections(assets);native_wallets(assets);native_combined(assets);native_wallet_rejection(assets);}
    std::cout<<"PASS source window-command diagnostics: "<<totals.streams<<" streams, "<<totals.positions<<" raw positions, "<<totals.fields<<" field guards, "<<totals.selections<<" scoped selections, "<<totals.nested<<" shared-backup nested calls, "<<totals.wallets<<" wallets ("<<totals.overflow_wallets<<" original out-of-canvas cases)\n";
    std::cout<<"PASS native window commands: "<<native_counts.cases<<" parent cases, "<<native_counts.streams<<" streams, "<<native_counts.nested<<" nested callbacks, "<<native_counts.child_streams<<" original child entries, "<<native_counts.held_frames<<" held immutable frames, "<<native_counts.rejected_wallets<<" explicit corrupting-wallet rejections, "<<native_counts.provider_reads<<" live money reads, "<<native_counts.effects<<" ordered effects, "<<native_counts.polls<<" input polls, "<<native_counts.snapshots<<" state/image samples, "<<native_counts.menu_bytes<<" comparable menu bytes, "<<native_counts.canvas_pixels<<" indexed canvas pixels, "<<native_counts.brush_pixels<<" brush pixels, "<<native_counts.scene_pixels<<" composed/published pixels, "<<native_counts.ppu_pixels<<" original PPU pixels, "<<counts.instructions<<" original instructions\n";
    std::cout<<"Scope: complete original and native DISPLAY streams, real font/window/menu rendering and software PPU. Shared-backup child calls preserve original caller stack/locals. World/input/audio are named seams; no full scheduler, PCM or GPU claim. Raw cursor storage does not prove arbitrary out-of-canvas painting; high-wallet corrupting source execution is diagnostic only. Carried-wallet cap99999 is matched in both regions.\n";return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
