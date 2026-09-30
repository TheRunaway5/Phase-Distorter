// Independent source window-host oracle. Geometry, slot/list transitions,
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
enum class Service { WindowTick, WaitFrame, HpPp, ClearPartyBlink, Sound, HideMeters };
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
            if(pc==p.world) {pending=Service::ClearPartyBlink;return pending;}
            if(pc==(version==eb::GameVersion::US?0xc0abe0u:0xc0abbfu)) {pending=Service::Sound;return pending;}
            if(pc==(version==eb::GameVersion::US?0xc10a1du:0xc10e72u)) {pending=Service::HideMeters;return pending;}
            if(version==eb::GameVersion::JP && pc==p.reset && get(p.dma_done)) {
                put(p.dma_done,0);++counts.dma_acknowledgements;
            }
            cpu.step_instruction();++counts.instructions;
        }
        require(!busy,"Original window routine did not return: "+cpu.describe_registers());return std::nullopt;
    }
    void respond() {
        require(bool(pending),"No source window service pending");
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

unsigned source_pixel(const Source&,unsigned tile,unsigned x,unsigned y);
dialogue::WindowState bank(unsigned slot) {
    dialogue::WindowState result;
    result.active={0x12340000u+slot,0x89ab0000u+slot,std::uint16_t(0xf100+slot)};
    result.saved={0x56780000u+slot,0xcdef0000u+slot,std::uint16_t(0xf200+slot)};
    return result;
}
void seed_bank(Source& source,unsigned address,const dialogue::WindowState& state) {
    source.put32(address+23,state.active.working);source.put32(address+27,state.active.argument);
    source.put(address+31,state.active.secondary);source.put32(address+33,state.saved.working);
    source.put32(address+37,state.saved.argument);source.put(address+41,state.saved.secondary);
}
void compare_bank(const Source& source,unsigned address,const dialogue::WindowState& state,const std::string& label) {
    require(state.active.working==source.get32(address+23) && state.active.argument==source.get32(address+27) &&
            state.active.secondary==source.get(address+31) && state.saved.working==source.get32(address+33) &&
            state.saved.argument==source.get32(address+37) && state.saved.secondary==source.get(address+41),
            label+" active/saved register bank differs");
}
class WindowPair {
  public:
    Source source;
    dialogue::State state;
    dialogue::TextOutput output;
    std::unique_ptr<dialogue::WindowHost> host;
    std::array<unsigned,30> sprite_flags{};
    bool intangible{};
    std::string label;
    WindowPair(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts,
               const std::shared_ptr<const dialogue::WindowResources>& resources,unsigned flavor=1)
        :source(assets,flavor),output(fonts,state),label(assets.version==eb::GameVersion::US?"US":"JP") {
        for(unsigned slot=0;slot<8;++slot) {state.retired_window_banks[slot]=bank(slot);seed_bank(source,source.record(slot),bank(slot));}
        state.dummy=bank(42);seed_bank(source,source.p.dummy,state.dummy);
        // Seed first, then execute the real initializer again: source does not
        // erase those authoritative reusable banks. No expected geometry is set.
        source.initialize();state.unfocused_register_slot=0;
        host=std::make_unique<dialogue::WindowHost>(resources,state,output);host->load_artwork(flavor);
        set_world(false);compare("initial");
    }
    void set_world(bool enabled) {
        intangible=enabled;source.put(source.p.intangible,enabled);
        for(unsigned i=0;i<sprite_flags.size();++i) {sprite_flags[i]=0x8100+i;source.put(source.p.sprite_high+i*2,sprite_flags[i]);}
    }
    void compare(const std::string& where) {
        const auto context=label+" window "+where;
        const auto focused=source.get(source.p.focus);
        require(state.focus==(focused==0xffff?std::optional<dialogue::WindowId>{}:dialogue::WindowId{focused}),context+" focus differs");
        std::vector<dialogue::WindowId> order;
        for(auto slot:source.order())order.push_back({source.get(source.record(slot)+4)});
        require(std::equal(order.begin(),order.end(),host->draw_order().begin(),host->draw_order().end()),context+" head/tail draw order differs");
        for(unsigned id=0;id<source.p.count;++id) {
            const auto slot=source.slot(id);
            require(host->slot_for({id})==(slot==0xffff?std::optional<unsigned>{}:slot),context+" logical ID mapping differs");
        }
        compare_bank(source,source.p.dummy,state.dummy,context+" dummy");
        for(unsigned slot=0;slot<8;++slot) {
            const auto base=source.record(slot),id=source.get(base+4);
            const auto& metadata=host->slot(slot);
            require(metadata.id==(id==0xffff?std::optional<dialogue::WindowId>{}:dialogue::WindowId{id}),context+" slot ID differs");
            compare_bank(source,base,state.registers_at(slot),context+" slot="+std::to_string(slot));
            if(id==0xffff)continue;
            const auto& window=output.window({id});
            require(metadata.rectangle.outer_x==source.get(base+6) && metadata.rectangle.outer_y==source.get(base+8) &&
                    metadata.rectangle.outer_width==source.get(base+10)+2 && metadata.rectangle.outer_height==source.get(base+12)+2,
                    context+" actual CREATE rectangle differs at ID "+std::to_string(id));
            require(window.geometry.columns==source.get(base+10) && window.geometry.tile_rows==source.get(base+12) &&
                    window.cursor.column==source.get(base+14) && window.cursor.line==source.get(base+16),context+" content geometry/cursor differs");
            const unsigned attributes=(window.style.palette<<10)|(window.style.priority?0x2000:0)|
                (window.style.flip_horizontal?0x4000:0)|(window.style.flip_vertical?0x8000:0);
            require(attributes==source.get(base+19) && window.style.font==source.get(base+21) &&
                    metadata.number_padding==source.bus->work_ram[base+18],context+" text attributes differ");
            require(metadata.first_option==source.get(base+43) && metadata.last_option==source.get(base+45) &&
                    metadata.selected_option==source.get(base+47) && metadata.layout_columns==source.get(base+49) &&
                    metadata.page_number==source.get(base+51),context+" menu/page reset differs");
            require(!metadata.cursor_callback && source.get32(base+55)==0,context+" callback reset differs");
            const auto owner=source.bus->work_ram[base+59];
            require(metadata.title_owner==(owner?std::optional<unsigned>{owner-1u}:std::optional<unsigned>{}),context+" title allocation differs");
            std::vector<std::uint8_t> title;
            for(unsigned n=0;n<(source.version==eb::GameVersion::US?22u:16u) && source.bus->work_ram[base+60+n];++n)
                title.push_back(source.bus->work_ram[base+60+n]);
            require(metadata.title==title,context+" title text differs");
            const auto frame=output.frame({id});const auto tilemap=source.get(base+53);
            for(unsigned y=0;y<frame->height;++y)for(unsigned x=0;x<frame->width;++x) {
                const auto descriptor=source.get(tilemap+((y/8)*window.geometry.columns+x/8)*2);
                const auto color=source_pixel(source,descriptor&1023,(descriptor&0x4000)?7-x%8:x%8,(descriptor&0x8000)?7-y%8:y%8);
                const auto index=y*frame->width+x;
                require(frame->pixels[index]==(color?color+((descriptor>>10)&7)*4:0) &&
                        frame->priority[index]==(color?bool(descriptor&0x2000):false),context+" window content pixels differ");
                ++counts.content_pixels;
            }
        }
        require(output.policy().instant==bool(source.bus->work_ram[source.p.instant]) &&
                output.redraw_pending()==bool(source.bus->work_ram[source.p.redraw]),context+" instant/redraw policy differs: native="+std::to_string(output.policy().instant)+","+
                std::to_string(output.redraw_pending())+" source="+std::to_string(source.bus->work_ram[source.p.instant])+","+
                std::to_string(source.bus->work_ram[source.p.redraw]));
        const bool us=source.version==eb::GameVersion::US;
        require(output.fractional_offset()==(source.get(us?0x9e23:0xa029)&7) &&
                output.indent_pending()==bool(source.bus->work_ram[us?0x5e75:0x61ed]) &&
                output.last_character()==source.bus->work_ram[us?0x5e76:0x61ee] &&
                output.saturn_composition_active()==bool(source.get(us?0x9e29:0xa02f)),context+" shared text composition state differs");
        for(unsigned option=0;option<70;++option)
            require(host->menu_options()[option].flags==source.get(source.p.menus+option*(us?45:44)),context+" menu option release flags differ");
        const auto frame=host->scene();require(frame->width==256 && frame->height==224,context+" full scene geometry differs");
        for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x) {
            const auto descriptor=source.get(source.p.scene+((y/8)*32+x/8)*2);
            const auto color=source_pixel(source,descriptor&1023,(descriptor&0x4000)?7-x%8:x%8,(descriptor&0x8000)?7-y%8:y%8);
            const auto index=y*256+x;
            require(frame->pixels[index]==(color?color+((descriptor>>10)&7)*4:0) &&
                    frame->priority[index]==(color?bool(descriptor&0x2000):false),context+" original composed scene pixel differs at "+std::to_string(x)+","+std::to_string(y));
            ++counts.scene_pixels;
        }
        for(unsigned i=0;i<sprite_flags.size();++i)require(sprite_flags[i]==source.get(source.p.sprite_high+i*2),context+" world sprite flags differ");
        ++counts.host_comparisons;
    }
    void operation(dialogue::WindowCommand command) {
        const auto id=command.id?command.id->value:0xffff;
        const bool us=source.version==eb::GameVersion::US;
        switch(command.action) {
        case dialogue::WindowAction::Open:source.begin(source.p.create,false,id);break;
        case dialogue::WindowAction::Close:source.begin(source.p.close,us,id);break;
        case dialogue::WindowAction::CloseFocus:source.begin(source.p.close,us,source.get(source.p.focus));break;
        case dialogue::WindowAction::Focus:source.begin(us?0xc1007e:0xc1013b,false,id);break;
        case dialogue::WindowAction::ClearFocus:source.begin(us?0xc10fa3:0xc1155d,false);break;
        case dialogue::WindowAction::CloseAll:source.begin(us?0xc1008e:0xc102af,false);break;
        case dialogue::WindowAction::Title:
            std::copy(command.title.begin(),command.title.end(),source.bus->work_ram.begin()+0x5000);
            source.bus->work_ram[0x5000+command.title.size()]=0;
            source.put32(0x1e0e,0x7e5000);source.begin(us?0xc2032b:0xc2030c,true,id,command.title_limit);break;
        default:throw std::runtime_error("Window source fixture command has no audited entry");
        }
        auto native=host->begin(command);unsigned services=0;
        for(;;) {
            const auto expected=source.advance();const auto progress=native->advance();
            compare("action="+std::to_string(unsigned(command.action))+" id="+std::to_string(id)+" boundary="+std::to_string(services));
            require((progress==dialogue::OutputProgress::Suspended)==bool(expected),label+" window operation service count differs");
            if(!expected) {require(native->complete(),label+" window operation did not complete");break;}
            const auto actual=native->effect();require(bool(actual),label+" suspended window operation lacks effect");
            const auto kind=*expected==Service::ClearPartyBlink?dialogue::WindowEffectKind::ClearPartyBlink:
                *expected==Service::WindowTick?dialogue::WindowEffectKind::WindowTick:
                *expected==Service::WaitFrame?dialogue::WindowEffectKind::FrameWait:dialogue::WindowEffectKind::HideMeters;
            require(actual->kind==kind,label+" ordered window effect differs");
            require(native->advance()==dialogue::OutputProgress::Suspended && native->effect()==actual,label+" pending window effect changed");
            if(*expected==Service::ClearPartyBlink) {
                if(intangible)for(unsigned i=24;i<30;++i)sprite_flags[i]&=0x7fff;
                ++counts.world_effects;
            }
            source.respond();native->respond();++services;
        }
        if(command.action==dialogue::WindowAction::Open)
            require(native->succeeded()==(source.slot(id)!=0xffff),label+" CREATE allocation result differs");
        ++counts.host_operations;
    }
    void paint(unsigned count=16) {
        output.policy().instant=true;source.bus->work_ram[source.p.instant]=1;
        for(unsigned i=0;i<count;++i) {
            dialogue::Request request;request.kind=dialogue::RequestKind::Glyph;
            request.glyph=source.version==eb::GameVersion::US?0x71+i%26:0x41+i%26;
            output.begin(request);source.call(source.version==eb::GameVersion::US?0xc10cb6:0xc111ec,false,request.glyph);
            require(output.advance()==dialogue::OutputProgress::Complete,label+" instant source glyph unexpectedly yields");
            compare("actual glyph after CREATE");
        }
    }
    void menu_chain(unsigned id) {
        auto& metadata=host->metadata({id});metadata.first_option=5;metadata.last_option=11;
        metadata.selected_option=1;metadata.layout_columns=4;metadata.page_number=2;
        const auto base=source.record(source.slot(id));
        source.put(base+43,5);source.put(base+45,11);source.put(base+47,1);source.put(base+49,4);source.put(base+51,2);
        const std::array<unsigned,3> nodes{5,8,11};
        for(unsigned i=0;i<nodes.size();++i) {
            auto& node=host->menu_options()[nodes[i]];node.flags=0x100+i;
            node.next=i+1<nodes.size()?std::optional<unsigned>{nodes[i+1]}:std::nullopt;
            const auto address=source.p.menus+nodes[i]*(source.version==eb::GameVersion::US?45:44);
            source.put(address,node.flags);source.put(address+2,node.next?*node.next:0xffff);
        }
        compare("seeded external menu chain");
    }
    void palette(unsigned flavor,unsigned status=0,bool disabled=false) {
        const bool us=source.version==eb::GameVersion::US;
        source.bus->work_ram[source.p.game+(us?0xafu:0xacu)]=1;
        source.bus->work_ram[source.p.game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);
        source.bus->work_ram[source.p.party+(us?14:13)]=status;source.put(us?0xb4b6:0xb68a,disabled);
        source.call(us?0xc47f87:0xc45c1a,true);host->publish_palette(flavor,status==1 || status==2,disabled);
        for(unsigned color=0;color<32;++color)require(host->palette()[color]==source.get(0x200+color*2),label+" host palette publication differs");
    }
    void compare_ppu() {
        // Real source-generated scene/art/palettes feed a separate original
        // PPU. Native pixels appear only on the actual-result side.
        eb::SnesBus display(std::span(eb::rom_data(source.version),eb::rom_size(source.version)),source.version);
        display.video_ram=source.bus->video_ram;
        for(unsigned cell=0;cell<896;++cell) {
            const auto descriptor=source.get(source.p.scene+cell*2);
            display.video_ram[0xa000+cell*2]=descriptor;display.video_ram[0xa001+cell*2]=descriptor>>8;
        }
        std::copy_n(source.bus->work_ram.begin()+0x200,64,display.palette_ram.begin());
        display.write_byte(0x2100,15);display.write_byte(0x2105,1);display.write_byte(0x2109,0x50);
        display.write_byte(0x210c,6);display.write_byte(0x212c,4);
        display.write_byte(0x2112,0xff);display.write_byte(0x2112,0xff);
        while(display.completed_frames<2)display.advance_cpu_cycles(1000);
        const auto actual=host->scene();
        for(unsigned i=0;i<256*224;++i) {
            const auto color=host->palette().at(actual->pixels[i]);
            const auto expand=[](unsigned value){return(value<<3)|(value>>2);};
            const auto rgb=0xff000000u|(expand(color&31)<<16)|(expand((color>>5)&31)<<8)|expand((color>>10)&31);
            require(display.native_framebuffer[i]==rgb,label+" actual original PPU differs at "+std::to_string(i%256)+","+std::to_string(i/256));
            ++counts.ppu_pixels;
        }
    }
    void open(unsigned id){operation({dialogue::WindowAction::Open,dialogue::WindowId{id}});}
    void close(unsigned id){operation({dialogue::WindowAction::Close,id==0xffff?std::optional<dialogue::WindowId>{}:dialogue::WindowId{id}});}
    void draw_all(){source.draw_all();host->draw_windows();compare("draw all");}
    void draw(unsigned id){source.draw(source.slot(id));host->draw_window({id});compare("draw slot");}
};
void native_configuration_cases(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts,
                                const std::shared_ptr<const dialogue::WindowResources>& resources) {
    for(unsigned id=0;id<resources->configuration_count();++id) {
        WindowPair pair(assets,fonts,resources);pair.set_world(id&1);pair.open(id);pair.draw(id);pair.draw_all();
        pair.paint(3);pair.draw(id);pair.open(id);pair.draw_all();pair.operation({dialogue::WindowAction::ClearFocus});pair.close(id);
        pair.close(id);pair.close(0xffff);
    }
}

void native_lifecycle_cases(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts,
                            const std::shared_ptr<const dialogue::WindowResources>& resources) {
    for(unsigned flavor=1;flavor<=5;++flavor) {
        WindowPair pair(assets,fonts,resources,flavor);pair.set_world(true);
        for(unsigned id:{0u,1u,10u,2u,3u,4u,5u,6u}) {pair.open(id);pair.paint(3);pair.draw(id);}
        pair.draw_all();pair.palette(flavor);pair.compare_ppu();
        const auto old=pair.host->frame();const auto old_pixels=old->pixels;
        pair.host->publish_scene();const auto published=pair.host->frame();const auto published_pixels=published->pixels;
        const auto calls=counts.world_calls;pair.open(7);require(counts.world_calls==calls,"Full pool CREATE ran a world effect");
        pair.menu_chain(1);pair.open(1);pair.draw_all(); // reopening must preserve list position
        pair.menu_chain(2);pair.close(2);pair.draw_all(); // interior slot, focus unchanged
        pair.close(1);pair.draw_all(); // focused close with remaining windows
        for(unsigned ambient:{0u,1u,2u,3u,4u,5u,6u,7u,0xffffu}) {
            // GET_ACTIVE's source index for absent focus carries into bank7f.
            // These values identify the eight real retained banks or dummy;
            // arbitrary adjacent WRAM interpretations are explicitly outside
            // the typed native host contract.
            pair.source.put(0x10000+pair.source.p.open-2,ambient);
            pair.state.unfocused_register_slot=ambient;
            pair.operation({dialogue::WindowAction::Focus});pair.open(7);pair.draw_all();pair.close(7);
        }
        pair.source.put(0x10000+pair.source.p.open-2,0);pair.state.unfocused_register_slot=0;
        pair.operation({dialogue::WindowAction::CloseAll});pair.draw_all();
        require(pair.host->draw_order().empty(),"CloseAll left native windows open");
        require(old->pixels==old_pixels && published->pixels==published_pixels,"Window host mutated previously sampled immutable scene");
    }
}

void native_title_cases(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts,
                        const std::shared_ptr<const dialogue::WindowResources>& resources) {
    const bool us=assets.version==eb::GameVersion::US;
    WindowPair pair(assets,fonts,resources);
    std::vector<unsigned> ids;
    for(unsigned id=0;id<resources->configuration_count() && ids.size()<6;++id)
        if(resources->configuration(id).outer_width>=22)ids.push_back(id);
    require(ids.size()==6,"Title owner fixture needs six wide original configurations");
    for(auto id:ids){pair.open(id);pair.paint(8);}
    for(unsigned i=0;i<ids.size();++i) {
        std::vector<std::uint8_t> title{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43)};
        pair.operation({dialogue::WindowAction::Title,dialogue::WindowId{ids[i]},title,3});pair.draw_all();
    }
    // Empty titles still retain/allocate title ownership. A long US title
    // publishes strlen columns, including source brush tail into the next
    // title owner, although the border displays only ceil(6*strlen/8).
    for(unsigned length:us?std::vector<unsigned>{0,1,7,16,17,20,21,2}:std::vector<unsigned>{0,1,7,14,15,2}) {
        std::vector<std::uint8_t> title;
        for(unsigned i=0;i<length;++i)title.push_back(std::uint8_t(us?0x71+i%26:0x41+i%26));
        pair.operation({dialogue::WindowAction::Title,dialogue::WindowId{ids[0]},title,length});pair.draw_all();
    }
    pair.close(ids[1]);pair.operation({dialogue::WindowAction::Title,dialogue::WindowId{ids.back()},
        {std::uint8_t(us?0x7a:0x5a),std::uint8_t(us?0x79:0x59)},2});pair.draw_all();
    if(!us)for(unsigned first=32;first<256;first+=15) {
        std::vector<std::uint8_t> title;
        for(unsigned code=first;code<std::min(first+15,256u);++code)title.push_back(code);
        pair.operation({dialogue::WindowAction::Title,dialogue::WindowId{ids.front()},title,unsigned(title.size())});pair.draw_all();
    }
    pair.palette(1);pair.compare_ppu();
}


struct WindowScript {
    static constexpr unsigned first=0x8000,child=0x9000;
    std::vector<std::uint8_t> bytes=std::vector<std::uint8_t>(0x1200);
    unsigned at=first;
    void emit(std::initializer_list<unsigned> values){for(auto value:values)bytes.at(at++-first)=value;}
    void call_child(){emit({8,0,0x90,0xee,0});}
    eb::GameAssets assets(const eb::GameAssets& original) const {
        auto result=original;std::copy(bytes.begin(),bytes.end(),result.image.begin()+0x2e8000);return result;
    }
    std::shared_ptr<const dialogue::Program> program(eb::GameVersion version) const {
        return std::make_shared<dialogue::Program>(version,std::vector<dialogue::ContentBlock>{{1,first,bytes}},
            std::vector<dialogue::Location>{{1,first}},std::vector<dialogue::ReferenceBinding>{},
            std::vector<dialogue::Location>{},std::vector<dialogue::ReferenceRange>{{{0,0x80,0xee,0},{1,first},unsigned(bytes.size())}});
    }
};
std::optional<dialogue::Location> source_location(unsigned pointer) {
    if(!pointer)return std::nullopt;
    require((pointer>>16)==0xee,"Source window dialogue escaped synthetic content");
    return dialogue::Location{1,std::uint16_t(pointer)};
}
void compare_streams(const WindowPair& pair,const std::string& label) {
    const auto& source=pair.source;const auto& state=pair.state;const bool us=source.version==eb::GameVersion::US;
    require(source.get(us?0x97b8:0x9a6c)==state.stream_slot,label+" stream counter differs");
    if(us)require(source.get(0x9660)==state.upcoming_word_length,label+" source word measurement differs");
    for(unsigned i=0;i<10;++i) {
        const auto base=(us?0x96aa:0x995e)+i*27;
        require(source_location(source.get32(base))==state.streams[i].cursor,label+" stream cursor differs");
        require(bool(source.get(base+4))==bool(state.streams[i].saved_window),label+" saved attribute presence differs");
        if(!state.streams[i].saved_window)continue;
        const auto& saved=*state.streams[i].saved_window;const auto id=source.get(base+6);
        require(saved.id==(id==0xffff?std::optional<dialogue::WindowId>{}:dialogue::WindowId{id}) &&
                saved.cursor.column==source.get(base+8) && saved.cursor.line==source.get(base+10) &&
                saved.number_padding==source.bus->work_ram[base+12] && saved.style.font==source.get(base+15),
                label+" original saved window attributes differ");
        const auto attrs=(saved.style.palette<<10)|(saved.style.priority?0x2000:0)|
            (saved.style.flip_horizontal?0x4000:0)|(saved.style.flip_vertical?0x8000:0);
        require(attrs==source.get(base+13),label+" saved style differs");
    }
}
void apply_world_effect(WindowPair& pair,Service service) {
    if(service==Service::ClearPartyBlink) {
        if(pair.intangible)for(unsigned i=24;i<30;++i)pair.sprite_flags[i]&=0x7fff;
        ++counts.world_effects;
    }
}
void nested_close(WindowPair& pair,dialogue::Conversation& parent) {
    const auto held=parent.event();pair.source.enter_nested_close();
    auto child=pair.host->begin_nested({dialogue::WindowAction::CloseFocus},parent);
    for(unsigned n=0;n<100;++n) {
        const auto expected=pair.source.advance();const auto progress=child->advance();
        pair.compare("nested close boundary="+std::to_string(n));compare_streams(pair,"nested close");
        require((progress==dialogue::OutputProgress::Suspended)==bool(expected),"Nested close effect count differs");
        if(!expected) {
            require(child->complete(),"Nested native close did not finish");pair.source.leave_nested_close();
            require(parent.event()==held && parent.advance()==dialogue::Progress::Suspended,
                    "Nested close acknowledged or lost parent tick");
            ++counts.nested_closes;++counts.restored_ticks;return;
        }
        const auto event=child->effect();require(event && *expected==Service::WindowTick &&
            event->kind==dialogue::WindowEffectKind::WindowTick,"Nested close source effect order differs");
        pair.source.respond();child->respond();
    }
    throw std::runtime_error("Nested close did not complete within bound");
}
void native_conversation_case(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts,
                             const std::shared_ptr<const dialogue::WindowResources>& resources,unsigned scenario,
                             unsigned ambient=0,bool retain_other=false) {
    const bool us=assets.version==eb::GameVersion::US;const unsigned glyph=us?0x71:0x41;
    WindowScript script;
    if(scenario==0) { // Empty close-all still performs the original HP/PP visibility service.
        script.emit({0x18,4,2});
    } else if(scenario==1) {
        script.emit({0x18,1,0,glyph,glyph+1,0x18,2});script.call_child();
        script.emit({glyph+2,0x18,3,1,glyph+3,0x18,6,glyph+4,0x18,0,2});
        script.at=WindowScript::child;
        script.emit({0x18,2,0x18,1,1,glyph+5,0x18,3,0,1,glyph+6,2});
    } else if(scenario==2) {
        script.emit({0x18,1,0,glyph,0x18,1,1,glyph+1,0x18,4,0x18,1,2,glyph+2,2});
    } else {
        // The source special glyph has an inner footer. Its actual WindowTick
        // closes the focused window before the outer footer tests the source
        // ambient OPEN_WINDOW_TABLE[-1] against the live tail slot.
        script.emit({0x2f,2});
    }
    auto injected=script.assets(assets);WindowPair pair(injected,fonts,resources);pair.set_world(true);
    if(scenario==3) {
        if(retain_other)pair.open(1);
        pair.open(0);pair.paint(3);pair.draw_all();
        pair.source.put(0x10000+pair.source.p.open-2,ambient);pair.state.unfocused_register_slot=ambient;
    }
    pair.output.policy().instant=false;pair.source.bus->work_ram[pair.source.p.instant]=0;
    pair.output.policy().text_speed=1;pair.source.put(us?0x9625:0x991d,1);
    pair.output.policy().sound_mode=2;pair.source.put(us?0x964f:0x9947,2);
    dialogue::Conversation conversation(script.program(assets.version),*pair.host);
    pair.source.put32(0x1e0e,0xee8000);pair.source.begin(us?0xc186b1:0xc18913,true);
    conversation.start(dialogue::EntryId{0});
    bool closed=false;unsigned events=0;
    const auto label=pair.label+" whole DISPLAY scenario="+std::to_string(scenario)+" ambient="+std::to_string(ambient)+
        " retained="+std::to_string(retain_other);
    for(unsigned n=0;n<100000;++n) {
        const auto progress=conversation.advance(1+n%7);
        if(progress==dialogue::Progress::BudgetExhausted)continue;
        const auto expected=pair.source.advance();pair.compare(label+" event="+std::to_string(events));compare_streams(pair,label);
        if(progress==dialogue::Progress::Finished) {
            require(!expected && !pair.source.busy,label+" finished before source");
            require(conversation.snapshot().returned_cursor==source_location(pair.source.get32(0x1e06)),label+" return cursor differs");
            require(scenario!=3 || closed,label+" did not exercise nested close");
            pair.draw_all();++counts.conversations;return;
        }
        require(expected && conversation.event(),label+" host effect count differs");
        const auto event=*conversation.event();
        if(const auto* text=std::get_if<dialogue::TextEffect>(&event)) {
            require((*expected==Service::Sound && text->kind==dialogue::TextEffectKind::TextSound) ||
                    (*expected==Service::WindowTick && text->kind==dialogue::TextEffectKind::WindowTick),label+" text effect order differs: source="+std::to_string(unsigned(*expected))+" native="+std::to_string(unsigned(text->kind))+" event="+std::to_string(events)+" pc="+std::to_string(pair.source.cpu.program_counter));
            if(scenario==3 && !closed && *expected==Service::WindowTick) {nested_close(pair,conversation);closed=true;}
        } else if(const auto* window=std::get_if<dialogue::WindowEffect>(&event)) {
            const auto kind=*expected==Service::ClearPartyBlink?dialogue::WindowEffectKind::ClearPartyBlink:
                *expected==Service::HideMeters?dialogue::WindowEffectKind::HideMeters:
                *expected==Service::WindowTick?dialogue::WindowEffectKind::WindowTick:dialogue::WindowEffectKind::FrameWait;
            require(window->kind==kind,label+" window service order differs");
        } else throw std::runtime_error(label+" unexpected external dialogue request");
        apply_world_effect(pair,*expected);
        require(conversation.advance(1)==dialogue::Progress::Suspended && conversation.event()==event,label+" pending event changed");
        pair.source.respond();conversation.respond();++events;
    }
    throw std::runtime_error(label+" did not finish within bound");
}
void native_conversation_cases(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts,
                              const std::shared_ptr<const dialogue::WindowResources>& resources) {
    for(unsigned scenario=0;scenario<3;++scenario)native_conversation_case(assets,fonts,resources,scenario);
    if(assets.version==eb::GameVersion::US)for(bool retained:{false,true})for(unsigned ambient:{0u,0xffffu})
        native_conversation_case(assets,fonts,resources,3,ambient,retained);
}

void source_configuration_probe(const eb::GameAssets& assets,const dialogue::WindowResources& resources) {
    Source source(assets);
    for(unsigned id=0;id<source.p.count;++id) {
        source.initialize();
        // Distinct source-owned slot registers survive initializer/reuse. This
        // seeds no geometry: only actual CREATE selects imported properties.
        for(unsigned slot=0;slot<8;++slot) {
            const auto base=source.record(slot);
            source.put32(base+23,0x12340000+slot);source.put32(base+27,0x89ab0000+slot);
            source.put(base+31,0xf100+slot);source.put32(base+33,0x56780000+slot);
            source.put32(base+37,0xcdef0000+slot);source.put(base+41,0xf200+slot);
        }
        source.put(source.p.intangible,id&1);
        for(unsigned entity=0;entity<30;++entity)source.put(source.p.sprite_high+entity*2,0x8100+entity);
        source.create(id);
        require(source.slot(id)==0 && source.get(source.p.focus)==id && source.order()==std::vector<unsigned>{0},
                "CREATE did not select first free slot for logical ID "+std::to_string(id));
        const auto base=source.record(0);
        require(source.get(base+4)==id,"CREATE record has wrong logical ID");
        require(source.get(base+10)>0 && source.get(base+12)>0 && source.get(base+10)*source.get(base+12)<=504,
                "Imported source window content geometry is invalid at ID "+std::to_string(id));
        require(source.get(base+53)==source.p.tilemaps,"CREATE did not select original slot tilemap");
        const auto& imported=resources.configuration(id);
        require(imported.outer_x==source.get(base+6) && imported.outer_y==source.get(base+8) &&
                imported.outer_width==source.get(base+10)+2 && imported.outer_height==source.get(base+12)+2,
                "Native imported configuration differs from complete original CREATE at ID "+std::to_string(id));
        for(unsigned entity=0;entity<30;++entity) {
            const auto expected=(id&1) && entity>=24?0x0100+entity:0x8100+entity;
            require(source.get(source.p.sprite_high+entity*2)==expected,"Actual CREATE sprite-unhide world effect differs");
        }
        source.draw(0);const auto first=source.scene();
        require(std::any_of(first.begin(),first.end(),[](auto value){return value!=0;}),"Original frame draw was vacuous");
        source.draw_all();require(source.scene()==first,"Single-window full draw differs from draw-slot result");
        source.create(id);++counts.reopens;
        require(source.order()==std::vector<unsigned>{0} && source.slot(id)==0,"Reopen changed source slot/list");
        source.draw_all();source.close(id);
        require(source.order().empty() && source.slot(id)==0xffff && source.get(source.p.focus)==0xffff,
                "Original close left window open");
        const auto closed=source.scene();require(std::none_of(closed.begin(),closed.end(),[](auto value){return value!=0;}),
                "Original close left pixels in its single outer rectangle");
        ++counts.configurations;
    }
    std::cout<<"PASS "<<(assets.version==eb::GameVersion::US?"US":"JP")<<" source window lifecycle: "<<source.p.count
             <<" imported configurations; real initialize/create/reopen/close/draw and sprite-flag side effects\n";
}
unsigned source_pixel(const Source& source,unsigned tile,unsigned x,unsigned y) {
    const auto address=(0xc000+tile*16+y*2)&65535;
    return ((source.bus->video_ram[address]>>(7-x))&1)|(((source.bus->video_ram[(address+1)&65535]>>(7-x))&1)<<1);
}
void resource_probe(const eb::GameAssets& assets,const dialogue::WindowResources& resources) {
    const bool us=assets.version==eb::GameVersion::US;
    require(resources.configuration_count()==(us?53u:52u),"Imported window configuration count differs from original");
    for(unsigned flavor=1;flavor<=5;++flavor) {
        Source source(assets,flavor);
        const std::array<std::pair<dialogue::WindowBorder,unsigned>,5> borders{{
            {dialogue::WindowBorder::Corner,0x10},{dialogue::WindowBorder::OverlapCorner,0x13},
            {dialogue::WindowBorder::Horizontal,0x11},{dialogue::WindowBorder::Vertical,0x12},
            {dialogue::WindowBorder::TitleJoin,0x16}}};
        for(auto [piece,tile]:borders)for(unsigned y=0;y<8;++y)for(unsigned x=0;x<8;++x) {
            require(resources.border(piece,flavor)[y*8+x]==source_pixel(source,tile,x,y),
                    "Imported border artwork differs from original LOAD_WINDOW_GFX/VRAM upload");++counts.resource_pixels;
        }
        source.create(0);const auto base=source.record(source.slot(0));
        require(source.get(base+10)>=4,"Pagination fixture window is too narrow");
        source.put(source.p.pagination,0);
        for(unsigned frame=0;frame<4;++frame) {
            source.put(source.p.pagination_frame,frame);source.draw_all();
            const auto& actual=resources.pagination(frame,flavor);
            // Observe the four cells actually emitted by C107AF immediately
            // before the top-right corner. No native importer/table computes
            // an expected descriptor or expected artwork.
            const auto start=(source.get(base+8)*32+source.get(base+6)+1+source.get(base+10)-4)*2+source.p.scene;
            for(unsigned cell=0;cell<4;++cell) {
                const auto descriptor=source.get(start+cell*2);
                require(actual[cell].palette==((descriptor>>10)&7) && actual[cell].priority==bool(descriptor&0x2000) &&
                        actual[cell].flip_horizontal==bool(descriptor&0x4000) && actual[cell].flip_vertical==bool(descriptor&0x8000),
                        "Imported pagination attributes differ from original draw");
                for(unsigned y=0;y<8;++y)for(unsigned x=0;x<8;++x) {
                    require(actual[cell].pixels[y*8+x]==source_pixel(source,descriptor&1023,x,y),
                            "Imported pagination pixels differ from original draw/upload");++counts.resource_pixels;
                }
                ++counts.pagination_cells;
            }
        }
        // World-owned party information is explicit input to C47F87. Its
        // palette import, color-zero clearing and publication-mode write all
        // execute normally; C0856B is a real mode assignment, not a wait/fade.
        source.bus->work_ram[source.p.game+(us?0xafu:0xacu)]=1;
        source.bus->work_ram[source.p.game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);
        for(unsigned status:{0u,1u,2u,3u})for(bool disabled:{false,true}) {
            source.bus->work_ram[source.p.party+(us?14:13)]=status;
            source.put(us?0xb4b6:0xb68a,disabled);
            source.call(us?0xc47f87:0xc45c1a,true);
            const auto& actual=resources.palette(flavor,status==1 || status==2,disabled);
            for(unsigned color=0;color<32;++color)require(actual[color]==source.get(0x200+color*2),
                    "Imported full palette differs from actual regional C47F87");
            require(source.bus->work_ram[0x30]==8,"Source full palette publication mode differs");++counts.palettes;
        }
        for(unsigned frame=0;frame<8;++frame) {
            source.put(2,frame);source.call(us?0xc3e450:0xc1004a,us);
            const auto& actual=resources.animated_palette5(flavor,frame);
            for(unsigned color=0;color<4;++color)require(actual[color]==source.get(0x200+40+color*2),
                    "Imported animated palette differs from actual regional C3E450");
            ++counts.palettes;
        }
    }
}
}
int main(int argc,char** argv) {
    try {
        if(argc<2) {std::cout<<"SKIP native window reference: supply local US and/or JP .ebpak files\n";return 77;}
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
            const auto resources=dialogue::WindowResources::import(assets.image,assets.version);
            source_configuration_probe(assets,*resources);resource_probe(assets,*resources);
            const auto fonts=dialogue::FontResources::import(assets.image,assets.version);native_configuration_cases(assets,fonts,resources);native_lifecycle_cases(assets,fonts,resources);native_title_cases(assets,fonts,resources);native_conversation_cases(assets,fonts,resources);
        }
        std::cout<<"PASS source window setup probe: "<<counts.configurations<<" configurations, "<<counts.reopens<<" reopens, "
                 <<counts.closes<<" closes, "<<counts.draws<<" draw calls, "<<counts.world_calls<<" actual sprite helpers, "
                 <<counts.instructions<<" original instructions, "<<counts.ticks<<" explicit WindowTick seams, "
                 <<counts.waits<<" explicit frame waits, "<<counts.hp_pp<<" explicit HP/PP seams\n";
        std::cout<<"PASS native window imported resources vs source: "<<counts.resource_pixels<<" original uploaded-art pixels, "
                 <<counts.pagination_cells<<" actual drawn pagination cells, "<<counts.palettes<<" original palette publications\n";
        std::cout<<"PASS native window host vs source: "<<counts.host_operations<<" operations, "<<counts.host_comparisons
                 <<" semantic/image boundaries, "<<counts.scene_pixels<<" composed-scene pixels, "<<counts.content_pixels
                 <<" content pixels, "<<counts.world_effects<<" ordered world requests, "<<counts.ppu_pixels<<" actual original PPU pixels\n";
        std::cout<<"PASS complete DISPLAY_TEXT window controls: "<<counts.conversations<<" scripts, "<<counts.nested_closes
                 <<" nested closes, "<<counts.restored_ticks<<" restored parent ticks, "<<counts.sounds<<" explicit sound effects, "
                 <<counts.hidden_meters<<" complete original HP/PP hide calls (zero-party external input)\n";
        return 0;
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
