// Independent original-source LOAD_WINDOW_GFX oracle. Expected artwork is
// produced by the linked original CPU routines and actual hardware DMA.
// Local imported packs are required; no retail artwork is embedded here.
// Generic glyph WindowTick/TextSound and title frame-only waits are explicit
// host seams. Complete menu input/WindowTick wrappers run with only their
// three inner HP/PP/actor helpers seamed. JP completed-DMA semaphore release
// at C439E2/C43BE8 is explicit; forced-blank copies have already completed.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/dialogue/window_buffer.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <memory>
#include <numeric>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
namespace dialogue=eb::native::dialogue;
void require(bool condition,const std::string& reason) {
    if(!condition)throw std::runtime_error(reason);
}
std::string hex(unsigned value) {std::ostringstream out;out<<std::hex<<value;return out.str();}
struct Layout {
    unsigned load,party,stride,flavor,brush,x,tile,render,instant,padding,indent,last;
};
Layout layout(eb::GameVersion version) {
    // Independent linked symbols: load_window_gfx{,-jp}.asm and globals.asm.
    if(version==eb::GameVersion::US)return {0xc47c3f,0x99ce,95,0x99cd,0x3492,0x9e23,0x9e25,0x9652,0x9622,0x5e6d,0x5e75,0x5e76};
    return {0xc459ab,0x9c7f,94,0x9c7e,0x3918,0xa029,0xa02b,0,0x991a,0x61e5,0x61ed,0x61ee};
}
struct Totals {std::uint64_t instructions{},calls{},name_glyphs{},party_reads{},pixels{},native_pixels{},brush_pixels{};unsigned preparations{},publications{},cases{},frame_seams{},native_cases{},native_boundaries{},glyph_effects{},nmi_services{},irq_callback_seams{},copy_capacity_waits{},cold_menu_pages{},menu_callbacks{},menu_polls{},nested_preparations{},world_inner_seams{},jp_dma_acknowledgements{},tick_seams{},sound_seams{};} totals;
struct GlyphCall {unsigned advance,rows,source,x,tile;};
class Original {
 public:
    eb::GameVersion version;
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::vector<GlyphCall> glyphs;
    std::vector<unsigned> party_reads;
    std::vector<unsigned> services;
    std::function<void(unsigned)> at_instruction;
    std::function<bool(unsigned)> intercept;
    bool service_queued_dma{};
    bool service_copy_capacity{};
    unsigned copy_wait_visits{};
    Original(const eb::GameAssets& assets):version(assets.version),p(layout(version)),
        bus(std::make_unique<eb::SnesBus>(assets.image,version)),cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);cpu.emulation_mode=false;
        cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.data_bank=0x7e;
        bus->work_ram[0x0d]=0x80;bus->write_byte(0x2100,0x80);
        call(0xc200d9);
        if(version==eb::GameVersion::US)call(0xc43f53); // original reserved-image bitmap
        else call(0xc43be8); // original fresh JP composition state
        bus->work_ram[p.flavor]=1;
        names();
    }
    unsigned get(unsigned address)const {return bus->work_ram.at(address)|(unsigned(bus->work_ram.at(address+1))<<8);}
    unsigned get32(unsigned address)const{return get(address)|(get(address+2)<<16);}
    void put(unsigned address,unsigned value){bus->work_ram.at(address)=value;bus->work_ram.at(address+1)=value>>8;}
    void put32(unsigned address,unsigned value){put(address,value);put(address+2,value>>16);}
    void names() {
        for(unsigned member=0;member<4;++member) {
            std::fill_n(bus->work_ram.begin()+p.party+member*p.stride,16,0);
            for(unsigned i=0;i<4;++i)bus->work_ram[p.party+member*p.stride+i]=(version==eb::GameVersion::US?0x71:0x41)+i+member;
        }
    }
    void call(unsigned entry,unsigned a=0,unsigned x=0,unsigned y=0,bool far=true) {
        const unsigned caller_d=cpu.direct_page,caller_s=cpu.stack_pointer,caller_db=cpu.data_bank;
        const auto trampoline=(entry&0xff0000)|0xff00;
        cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.program_counter=trampoline;cpu.accumulator=a;cpu.x_index=x;cpu.y_index=y;
        if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry&65535,3);
        ++totals.calls;
        for(unsigned n=0;n<5'000'000;++n) {
            if(cpu.program_counter==trampoline+(far?4:3) && cpu.stack_pointer==caller_s) {
                require(cpu.direct_page==caller_d && cpu.data_bank==caller_db,"Original initialization changed caller ABI");return;
            }
            if(cpu.program_counter==0xc44b3a && version==eb::GameVersion::US) {
                glyphs.push_back({cpu.accumulator,cpu.x_index,get32(cpu.direct_page+14),get(p.x),get(p.tile)});++totals.name_glyphs;
            }
            if(intercept && intercept(cpu.program_counter))continue;
            if(at_instruction)at_instruction(cpu.program_counter);
            if(service_queued_dma && cpu.program_counter>=0xc085b7 && cpu.program_counter<0xc08616 &&
                    bus->work_ram[0]!=bus->work_ram[1])drain_dma();
            if(service_copy_capacity && cpu.program_counter==0xc08671 && get(0x99) && ++copy_wait_visits==2) {
                drain_dma();++totals.copy_capacity_waits;copy_wait_visits=0;
            }
            if(cpu.program_counter==(version==eb::GameVersion::US?0xc12dd5u:0xc13502u) ||
                    cpu.program_counter==(version==eb::GameVersion::US?0xc0abe0u:0xc0abbfu)) {
                if(cpu.program_counter==(version==eb::GameVersion::US?0xc12dd5u:0xc13502u))++totals.tick_seams;
                else ++totals.sound_seams;
                services.push_back(cpu.program_counter);cpu.execute_instruction<0x6b>(0,1);continue;
            }
            if(version==eb::GameVersion::JP && (cpu.program_counter==0xc439e2 || cpu.program_counter==0xc43be8) && get(0xa031)) {
                put(0xa031,0);++totals.jp_dma_acknowledgements;
            }
            if(cpu.program_counter==(version==eb::GameVersion::US?0xc08756u:0xc0874cu)) {
                // Titles request two frame-only waits. Artwork DMA is real
                // forced-blank hardware DMA; this fixture has no world/NMI
                // scheduler. Only this explicit outside-host wait is seamed.
                services.push_back(cpu.program_counter);cpu.execute_instruction<0x6b>(0,1);++totals.frame_seams;continue;
            }
            cpu.step_instruction();++totals.instructions;
        }
        throw std::runtime_error("Original initialization did not return: "+cpu.describe_registers());
    }
    void drain_dma() {
        const unsigned pc=cpu.program_counter,s=cpu.stack_pointer,d=cpu.direct_page,db=cpu.data_bank,
            a=cpu.accumulator,x=cpu.x_index,y=cpu.y_index,p=cpu.status_register;
        require(bus->work_ram[0]!=bus->work_ram[1],"Original NMI service had no pending transfer");
        cpu.service_interrupt(true);++totals.nmi_services;
        for(unsigned n=0;n<10000;++n) {
            if(cpu.program_counter==pc && cpu.stack_pointer==s) {
                require(cpu.direct_page==d && cpu.data_bank==db && cpu.accumulator==a && cpu.x_index==x && cpu.y_index==y && cpu.status_register==p,
                    "Original NMI did not restore the interrupted loader ABI");
                require(bus->work_ram[0]==bus->work_ram[1] && get(0x99)==0,"Original NMI failed to retire queued artwork");return;
            }
            if((cpu.program_counter&0xffff)==0x8518) {
                // The real NMI queue reader, DMA, sound queue, flag clears and
                // RTI execute. Only its unrelated world IRQ callback is seamed.
                cpu.execute_instruction<0x60>(0,1);++totals.irq_callback_seams;
            }else {cpu.step_instruction();++totals.instructions;}
        }
        throw std::runtime_error("Original NMI queue service did not return");
    }
    void execute_far_body(bool world_service=false) {
        const unsigned stack=cpu.stack_pointer,direct=cpu.direct_page;
        const auto target=((get(stack+1)+1)&65535)|(unsigned(bus->work_ram[stack+3])<<16);
        for(unsigned n=0;n<3'000'000;++n) {
            if(cpu.program_counter==target && cpu.stack_pointer==stack+3) {
                require(cpu.direct_page==direct,"Original nested body changed caller direct page");return;
            }
            const auto pc=cpu.program_counter;const bool us=version==eb::GameVersion::US;
            if(pc==p.load)++totals.nested_preparations;
            if(world_service && (pc==(us?0xc2109fu:0xc20f3bu) || pc==(us?0xc213acu:0xc2124cu) || pc==(us?0xc1004eu:0xc100c4u))) {
                cpu.execute_instruction<0x6b>(0,1); // explicit HP/PP/actor inner service
                ++totals.world_inner_seams;
            }
            else {cpu.step_instruction();++totals.instructions;}
        }
        throw std::runtime_error("Original nested source body did not return: "+cpu.describe_registers());
    }
    unsigned window_record(unsigned id)const {
        const auto slot=get((version==eb::GameVersion::US?0x88e4u:0x8c26u)+id*2);
        require(slot<8,"Original window is not open");return (version==eb::GameVersion::US?0x8650u:0x89c2u)+slot*(version==eb::GameVersion::US?82:76);
    }
    void prepare() {
        glyphs.clear();party_reads.clear();const auto before=bus->video_ram;
        bus->debug_read_wram=[&](unsigned address,std::uint8_t value) {
            if(address>=p.party && address<p.party+4*p.stride)party_reads.push_back(address);
            return value; // observation only: retain the exact source byte
        };
        try{call(p.load);}catch(...){bus->debug_read_wram={};throw;}
        bus->debug_read_wram={};totals.party_reads+=party_reads.size();++totals.preparations;
        require(bus->video_ram==before,"LOAD_WINDOW_GFX published VRAM during preparation");
    }
    void publish(unsigned mode) {
        if(version==eb::GameVersion::US)call(0xc44963,mode);
        else {put32(cpu.direct_page+14,0x7f0000);call(mode==2?0xc085b7:0xc08616,0,0x3800,0x6000);}
        ++totals.publications;
    }
    void poison(unsigned byte) {
        std::fill_n(bus->work_ram.begin()+0x10000,0x4a00,byte);
        for(unsigned i=0;i<52*32;++i)bus->work_ram[p.brush+i]=std::uint8_t(i*37+byte);
    }
    void open(unsigned id) {call(version==eb::GameVersion::US?0xc104ee:0xc106e4,id,0,0,false);}
    void title(unsigned id) {
        for(unsigned i=0;i<3;++i)bus->work_ram[0x5000+i]=(version==eb::GameVersion::US?0x71:0x41)+i;
        bus->work_ram[0x5003]=0;put32(cpu.direct_page+14,0x7e5000);
        call(version==eb::GameVersion::US?0xc2032b:0xc2030c,id,3);
    }
    void draw_scene() {
        call(version==eb::GameVersion::US?0xc2087c:0xc2081d);
        put32(cpu.direct_page+14,version==eb::GameVersion::US?0x7e7dfe:0x7e8176);
        call(0xc08616,0,0x800,0x7c00);
    }
    std::vector<std::uint32_t> ppu()const {
        auto display=std::make_unique<eb::SnesBus>(std::span(eb::rom_data(version),eb::rom_size(version)),version);
        display->video_ram=bus->video_ram;
        // Distinct external palette inputs expose all indexed artwork bits;
        // expected rasterization still comes from the original PPU renderer.
        for(unsigned i=0;i<32;++i){const unsigned color=(i*0x421)&0x7fff;display->palette_ram[i*2]=color;display->palette_ram[i*2+1]=color>>8;}
        display->write_byte(0x2100,15);display->write_byte(0x2105,1);display->write_byte(0x2109,0x7c);
        display->write_byte(0x210c,6);display->write_byte(0x212c,4);display->write_byte(0x2112,0xff);display->write_byte(0x2112,0xff);
        while(display->completed_frames<2)display->advance_cpu_cycles(1000);
        totals.pixels+=256*224;return {display->native_framebuffer.begin(),display->native_framebuffer.end()};
    }
};
using Range=std::pair<unsigned,unsigned>;
template<class A,class B>std::vector<Range> differences(const A& a,const B& b,unsigned start,unsigned end) {
    std::vector<Range> result;
    for(unsigned at=start;at<end;) {
        if(a[at]==b[at]){++at;continue;}
        const unsigned first=at++;while(at<end && a[at]!=b[at])++at;result.emplace_back(first,at);
    }
    return result;
}
void print_ranges(const std::string& label,const std::vector<Range>& ranges,unsigned base=0) {
    std::cout<<label;
    for(auto [first,end]:ranges)std::cout<<" "<<hex(first-base)<<".."<<hex(end-base-1);
    std::cout<<'\n';
}
void us_name_continuations(const eb::GameAssets& assets) {
    if(assets.version!=eb::GameVersion::US)return;
    for(unsigned index=96;index<128;++index) {
        Original source(assets);source.poison(0xa5);
        const unsigned member=source.p.party+3*source.p.stride;
        // A valid full five-byte US field is followed by the real level and
        // experience fields. No invented terminator is placed at name[5].
        for(unsigned i=0;i<5;++i)source.bus->work_ram[member+i]=0x71+i;
        source.bus->work_ram[member+5]=std::uint8_t((index+0x50)&0x7f);
        source.bus->work_ram[member+6]=0;source.put(source.p.render+4,0xa1b2);
        const auto tail=std::vector<std::uint8_t>(source.bus->work_ram.begin()+source.p.brush+26*32,source.bus->work_ram.begin()+source.p.brush+52*32);
        source.prepare();
        require(source.glyphs.size()==18,"Full US name did not scan into level");
        require(source.glyphs.back().source==0xe1193a+index*16,"US continuation source mismatch for index "+std::to_string(index));
        require(source.glyphs.back().advance==6 && source.glyphs.back().rows==16,"US raw name raster ABI mismatch");
        require(source.get(source.p.x)==38 && source.get(source.p.tile)==4,"US loader did not retain fourth name brush position");
        require(source.get(source.p.render)==0 && source.get(source.p.render+2)==0 && source.get(source.p.render+4)==0xa1b2,"US renderer state preservation mismatch");
        require(std::equal(tail.begin(),tail.end(),source.bus->work_ram.begin()+source.p.brush+26*32),"US loader cleared retained brush columns26..51");
        require(std::find(source.party_reads.begin(),source.party_reads.end(),member+7)!=source.party_reads.end(),"US word read did not fetch byte after terminator");
        ++totals.cases;
    }
    std::cout<<"US full5-byte name: all32 continuation records96..127 executed, 18 glyph calls/case, fourth-name x38/tile4, terminator word reads through experience byte1\n";
}
void poisoned_publication(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned flavor=1;flavor<=5;++flavor) {
        auto left=std::make_unique<Original>(assets),right=std::make_unique<Original>(assets);
        left->poison(0xa5);right->poison(0x5a);left->bus->work_ram[left->p.flavor]=right->bus->work_ram[right->p.flavor]=flavor;
        left->prepare();right->prepare();
        const auto ranges=differences(left->bus->work_ram,right->bus->work_ram,0x10000,0x14a00);
        print_ranges(std::string(us?"US":"JP")+" flavor"+std::to_string(flavor)+" retained staging:",ranges,0x10000);
        const std::vector<Range> expected=us?std::vector<Range>{{0x11a00,0x12000},{0x12cb0,0x12d00},{0x12db0,0x13200},{0x13800,0x14a00}}:
            std::vector<Range>{{0x12cb0,0x12d00},{0x12db0,0x13200},{0x13800,0x14a00}};
        require(ranges==expected,"Unexpected retained staging extent");
        for(unsigned mode:us?std::vector<unsigned>{0,1,2,3}:std::vector<unsigned>{1,2}) {
            left->bus->video_ram.fill(0x39);right->bus->video_ram.fill(0x39);
            left->publish(mode);right->publish(mode);
            const auto visible=differences(left->bus->video_ram,right->bus->video_ram,0,65536);
            print_ranges(std::string(us?"US":"JP")+" mode"+std::to_string(mode)+" retained VRAM:",visible);
            const bool publishes=!us || mode==1 || mode==2;
            const std::vector<Range> expected_visible=publishes?std::vector<Range>{{0xecb0,0xed00},{0xedb0,0xf200}}:std::vector<Range>{};
            require(visible==expected_visible,"Unexpected retained published extent");++totals.cases;
        }
    }
}
void retained_title_visibility(const eb::GameAssets& assets) {
    Original left(assets),right(assets);left.poison(0xa5);right.poison(0x5a);
    left.prepare();right.prepare();left.publish(1);right.publish(1);
    left.open(1);right.open(1);left.title(1);right.title(1);left.draw_scene();right.draw_scene();
    const auto a=left.ppu(),b=right.ppu();
    require(a==b,"Original title did not replace all visible poisoned cells");
    const auto windows=assets.version==eb::GameVersion::US?0x8650u:0x89c2u;
    require(left.bus->work_ram[windows+59]==1,"Original title did not allocate first title owner");
    left.prepare();right.prepare();left.publish(1);right.publish(1);
    const auto c=left.ppu(),d=right.ppu();
    const auto changed=std::inner_product(c.begin(),c.end(),d.begin(),0u,std::plus<>(),std::not_equal_to<>());
    require(changed!=0,"Retained title artwork was not visible after original reload");
    std::cout<<(assets.version==eb::GameVersion::US?"US":"JP")<<" real title reload: "<<changed<<" differing original PPU pixels from retained staging; live title metadata unchanged\n";++totals.cases;
}
template<class Bytes>dialogue::WindowArtwork original_cell(const Bytes& bytes,unsigned address) {
    dialogue::WindowArtwork result{};
    for(unsigned y=0;y<8;++y)for(unsigned x=0;x<8;++x)
        result[y*8+x]=((bytes[address+y*2]>>(7-x))&1)|(((bytes[address+y*2+1]>>(7-x))&1)<<1);
    return result;
}
struct NativePair {
    Original source;
    std::shared_ptr<const dialogue::FontResources> fonts;
    std::shared_ptr<const dialogue::WindowResources> resources;
    std::shared_ptr<const dialogue::WindowInitializationResources> initialization;
    std::shared_ptr<const dialogue::MenuResources> menu_resources;
    dialogue::State state;
    dialogue::TextOutput output;
    dialogue::WindowHost windows;
    std::shared_ptr<dialogue::WindowGraphics> graphics;
    std::array<std::vector<std::uint8_t>,4> names;
    std::string context;
    NativePair(const eb::GameAssets& assets,unsigned poison=0):source(assets),
        fonts(dialogue::FontResources::import(assets.image,assets.version)),
        resources(dialogue::WindowResources::import(assets.image,assets.version)),
        initialization(dialogue::WindowInitializationResources::import(assets.image,assets.version)),
        menu_resources(dialogue::MenuResources::import(assets.image,assets.version)),
        output(fonts,state),windows(resources,state,output),context(assets.version==eb::GameVersion::US?"US":"JP") {
        std::fill_n(source.bus->work_ram.begin()+0x10000,0x4a00,poison);
        std::vector<dialogue::WindowArtwork> retained(1184);
        for(unsigned cell=0;cell<retained.size();++cell)retained[cell]=original_cell(source.bus->work_ram,0x10000+cell*16);
        graphics=std::make_shared<dialogue::WindowGraphics>(initialization,output,retained);
        windows.set_graphics(graphics);
        for(unsigned member=0;member<4;++member) {
            names[member]={std::uint8_t((assets.version==eb::GameVersion::US?0x71:0x41)+member),
                std::uint8_t((assets.version==eb::GameVersion::US?0x72:0x42)+member),
                std::uint8_t((assets.version==eb::GameVersion::US?0x73:0x43)+member),
                std::uint8_t((assets.version==eb::GameVersion::US?0x74:0x44)+member)};
            if(assets.version==eb::GameVersion::US)names[member].push_back(0);
        }
    }
    dialogue::PartyNameInputs inputs()const {
        dialogue::PartyNameInputs result;
        for(unsigned member=0;member<4;++member)result.names[member]=names[member];
        return result;
    }
    void compare_brush(const std::string& where)const {
        if(source.version!=eb::GameVersion::US)return;
        const auto native=output.composition_snapshot();
        require(native.columns.size()==52,context+" US brush length differs");
        for(unsigned column=0;column<52;++column)for(unsigned half=0;half<2;++half) {
            const auto expected=original_cell(source.bus->work_ram,source.p.brush+column*32+half*16);
            for(unsigned pixel=0;pixel<64;++pixel) {
                require(native.columns[column][half*64+pixel]==expected[pixel],context+" "+where+" brush differs column="+std::to_string(column)+" pixel="+std::to_string(half*64+pixel));
                ++totals.brush_pixels;
            }
        }
        require(native.brush_column==source.get(source.p.tile) && native.fractional_offset==(source.get(source.p.x)&7) &&
                native.publication_position==source.get(source.p.render) && native.partial_publication==bool(source.get(source.p.render+2)),
                context+" "+where+" composition cursor/publication state differs");
    }
    void compare_artwork(const std::string& where)const {
        const auto prepared=graphics->prepared_artwork();
        require(prepared.size()==1184,context+" prepared atlas size differs");
        for(unsigned cell=0;cell<prepared.size();++cell) {
            const auto expected=original_cell(source.bus->work_ram,0x10000+cell*16);
            for(unsigned pixel=0;pixel<64;++pixel) {
                require(prepared[cell][pixel]==expected[pixel],context+" "+where+" prepared artwork differs cell="+hex(cell)+" pixel="+std::to_string(pixel));
                ++totals.native_pixels;
            }
        }
        ++totals.native_boundaries;
    }
    void compare_published(const std::string& where)const {
        const auto frame=graphics->frame();
        require(frame->width==256 && frame->height==256,context+" published atlas geometry differs");
        for(unsigned y=0;y<frame->height;++y)for(unsigned x=0;x<frame->width;++x) {
            const auto cell=(y/8)*(frame->width/8)+x/8;
            // Cells380..3ff also hold the source scene tilemap, outside every
            // initialization publication. WindowGraphics owns artwork only.
            if(cell>=0x380)continue;
            const auto expected=original_cell(source.bus->video_ram,(0xc000+cell*16)&65535);
            require(frame->pixels[y*frame->width+x]==expected[(y%8)*8+x%8],context+" "+where+" published artwork differs cell="+hex(cell));
            ++totals.native_pixels;
        }
    }
    void prepare(unsigned flavor) {
        for(unsigned member=0;member<4;++member) {
            const auto at=source.p.party+member*source.p.stride;
            require(names[member].size()<=source.p.stride,"Native name fixture exceeded party record");
            std::fill_n(source.bus->work_ram.begin()+at,source.p.stride,0);
            std::copy(names[member].begin(),names[member].end(),source.bus->work_ram.begin()+at);
        }
        source.bus->work_ram[source.p.flavor]=flavor;
        const auto before_frame=graphics->frame();const auto before_copy=before_frame->pixels;
        const auto before_brush=output.composition_snapshot();
        const unsigned window_start=source.version==eb::GameVersion::US?0x8650:0x89c2,window_bytes=8*(source.version==eb::GameVersion::US?82:76);
        const auto before_windows=std::vector<std::uint8_t>(source.bus->work_ram.begin()+window_start,source.bus->work_ram.begin()+window_start+window_bytes);
        const auto policy_sample=[&] {
            const auto& policy=output.policy();return std::array<unsigned,8>{policy.instant,policy.character_padding,policy.text_speed,policy.sound_mode,
                policy.prompt_mode,policy.allow_overflow,output.indent_pending(),output.last_character()};
        };
        const auto before_policy=policy_sample();
        source.prepare();graphics->prepare(inputs(),flavor);
        require(graphics->frame()->pixels==before_copy && before_frame->pixels==before_copy,context+" preparation altered published artwork");
        require(policy_sample()==before_policy && std::equal(before_windows.begin(),before_windows.end(),source.bus->work_ram.begin()+window_start),context+" preparation changed unrelated policy/window state");
        if(source.version==eb::GameVersion::JP)require(output.composition_snapshot()==before_brush,context+" JP preparation changed composition");
        compare_artwork("prepare");compare_brush("prepare");
        for(unsigned member=0;member<4;++member) {
            const auto image=graphics->party_name(member,true);require(image->width==32 && image->height==16,"Name image geometry differs");
            for(unsigned y=0;y<16;++y)for(unsigned x=0;x<32;++x) {
                const auto expected=original_cell(source.bus->work_ram,0x12a00+member*64+(x/8)*16+(y/8)*256);
                require(image->pixels[y*32+x]==expected[(y%8)*8+x%8],context+" party name pixels differ");++totals.native_pixels;
            }
        }
        for(unsigned index=0;index<11;++index) {
            const auto image=graphics->status_label(index,true);require(image->width==8 && image->height==16,"Status image geometry differs");
            for(unsigned y=0;y<16;++y)for(unsigned x=0;x<8;++x) {
                const auto expected=original_cell(source.bus->work_ram,0x12c00+index*16+(y/8)*256);
                require(image->pixels[y*8+x]==expected[(y%8)*8+x],context+" status label pixels differ");++totals.native_pixels;
            }
        }
    }
    void publish(unsigned mode,bool queued=false) {
        const bool us=source.version==eb::GameVersion::US;
        const auto plan=!us?dialogue::ArtworkPublication::All:mode==0?dialogue::ArtworkPublication::Common:
            mode==1?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::CommonThenGenerated;
        std::vector<dialogue::ArtworkEffect> expected;bool synchronized=false;
        // These transfer boundaries are from the original call macro operands,
        // not from the implementation's publication plan.
        source.at_instruction=[&](unsigned pc) {
            if(pc==0xc085b7){synchronized=true;return;}
            if(pc==0xc08616) {
                synchronized=false;const auto pointer=source.get32(source.cpu.direct_page+14);
                if(pointer>=0x7f0000 && pointer<0x7f4a00)
                    expected.push_back({dialogue::ArtworkDelivery::Copy,(pointer-0x7f0000)/16,unsigned(source.cpu.x_index)/16});
            }else if(pc==0xc08643 && synchronized) {
                const auto pointer=source.get32(0x94)&0xffffff;
                expected.push_back({dialogue::ArtworkDelivery::Synchronized,(pointer-0x7f0000)/16,source.get(0x92)/16});
            }
        };
        if(queued){require(mode==2,"Fixture queue mode must use synchronized original transfer");source.bus->work_ram[0x0d]=15;source.service_queued_dma=true;}
        source.publish(mode);source.at_instruction={};
        source.service_queued_dma=false;source.bus->work_ram[0x0d]=0x80;
        auto operation=graphics->begin_publication(plan,mode==2?dialogue::ArtworkDelivery::Synchronized:dialogue::ArtworkDelivery::Copy);
        unsigned index=0;
        while(operation->advance()==dialogue::Progress::Suspended) {
            if(index>=expected.size() || operation->effect()!=expected[index]) {
                const auto actual=operation->effect();std::ostringstream message;message<<context<<" mode="<<mode<<" queued="<<queued<<" publication boundary "<<index<<" expected count="<<expected.size();
                if(index<expected.size())message<<" expected="<<unsigned(expected[index].delivery)<<":"<<hex(expected[index].first_cell)<<":"<<hex(expected[index].cell_count);
                if(actual)message<<" actual="<<unsigned(actual->delivery)<<":"<<hex(actual->first_cell)<<":"<<hex(actual->cell_count);
                throw std::runtime_error(message.str());
            }
            operation->respond(queued?dialogue::ArtworkDisposition::Queued:dialogue::ArtworkDisposition::Published);++index;
            if(queued) {
                require(operation->advance()==dialogue::Progress::BudgetExhausted && !operation->effect() && !operation->complete(),context+" synchronized transfer did not wait for publication");
                require(graphics->publish_next(),context+" queued publication disappeared");
            }
        }
        require(operation->complete() && index==expected.size(),context+" publication terminated at wrong boundary");
        compare_published("publish");
    }
    void open(unsigned id) {
        source.open(id);auto operation=windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{id},{},0});
        while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();
    }
    void title(unsigned id) {
        const unsigned before=totals.frame_seams;source.title(id);
        const bool us=source.version==eb::GameVersion::US;
        auto operation=windows.begin({dialogue::WindowAction::Title,dialogue::WindowId{id},
            {std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43)},3});
        unsigned waits=0;
        while(operation->advance()==dialogue::OutputProgress::Suspended) {
            require(operation->effect()->kind==dialogue::WindowEffectKind::FrameWait,context+" title yielded unexpected service");
            ++waits;operation->respond();
        }
        require(waits==totals.frame_seams-before,context+" original title frame waits differ");
        compare_brush("title");
    }
    void queued_copy() {
        const bool us=source.version==eb::GameVersion::US;
        const auto old=source.bus->video_ram;
        source.bus->work_ram[0x0d]=15;source.service_copy_capacity=true;
        source.publish(1);source.service_copy_capacity=false;
        require(source.bus->work_ram[0]!=source.bus->work_ram[1],context+" original Copy waited for final pending queue");
        if(!us)require(source.bus->video_ram==old,context+" JP queued Copy published before NMI");
        auto operation=graphics->begin_publication(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
        unsigned pending_bytes=0,admissions=0,capacity_drains=0;
        while(operation->advance()==dialogue::Progress::Suspended) {
            const auto effect=*operation->effect();require(effect.delivery==dialogue::ArtworkDelivery::Copy,context+" queued Copy changed delivery");
            const auto size=effect.cell_count*16;
            if(pending_bytes && pending_bytes+size>0x1200) {
                // Capacity belongs to the video adapter. The native owner
                // yields before admission; a repeated advance cannot submit.
                require(operation->advance()==dialogue::Progress::Suspended && operation->effect()==effect,context+" blocked Copy changed effect");
                while(graphics->publish_next()){}pending_bytes=0;++capacity_drains;
            }
            operation->respond(dialogue::ArtworkDisposition::Queued);pending_bytes+=size;++admissions;
        }
        require(operation->complete() && graphics->pending_publications()==(us?6u:1u) && admissions==(us?7u:1u) && capacity_drains==(us?1u:0u),context+" normal Copy admission/return differs");
        compare_published("Copy pending");
        // Queued descriptors borrow current staging. A complete new loader
        // pass before NMI must replace the bytes those pending copies read.
        names[3][0]=us?0x7a:0x5a;prepare(3);
        source.drain_dma();while(graphics->publish_next()){}
        require(graphics->pending_publications()==0,context+" native Copy retained completed publication");
        source.bus->work_ram[0x0d]=0x80;compare_published("Copy live staging completion");
    }
    void compare_scene(bool publish=true) {
        if(publish){source.draw_scene();windows.draw_windows();windows.publish_scene();}
        const auto frame=windows.frame();
        const auto original=source.ppu();
        for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x) {
            const auto descriptor=source.bus->video_ram[0xf800+((y/8)*32+x/8)*2]|
                unsigned(source.bus->video_ram[0xf801+((y/8)*32+x/8)*2])<<8;
            const auto expected=original_cell(source.bus->video_ram,0xc000+(descriptor&1023)*16);
            const auto px=descriptor&0x4000?7-x%8:x%8,py=descriptor&0x8000?7-y%8:y%8;
            const unsigned color=expected[py*8+px],indexed=color?color+((descriptor>>10)&7)*4:0;
            const auto at=y*256+x;
            require(frame->pixels[at]==indexed && frame->priority[at]==(color?bool(descriptor&0x2000):false),context+" live scene image differs at "+std::to_string(x)+","+std::to_string(y));
            const unsigned palette=(frame->pixels[at]*0x421)&0x7fff;
            const auto expand=[](unsigned value){return(value<<3)|(value>>2);};
            const auto rgb=0xff000000u|(expand(palette&31)<<16)|(expand((palette>>5)&31)<<8)|expand((palette>>10)&31);
            require(rgb==original[at],context+" actual original PPU differs");++totals.native_pixels;
        }
    }
    void compare_window(unsigned id)const {
        const auto record=source.window_record(id),columns=source.get(record+10),rows=source.get(record+12),tilemap=source.get(record+53);
        const auto frame=output.frame({id});require(frame->width==columns*8 && frame->height==rows*8,context+" output geometry differs");
        require(output.window({id}).cursor.column==source.get(record+14) && output.window({id}).cursor.line==source.get(record+16),context+" output cursor differs");
        const auto style=output.window({id}).style;const unsigned attributes=(style.palette<<10)|(style.priority?0x2000:0)|(style.flip_horizontal?0x4000:0)|(style.flip_vertical?0x8000:0);
        require(style.font==source.get(record+21) && attributes==source.get(record+19),context+" output style differs");
        const auto& registers=state.windows.at({id}).active;
        require(registers.working==source.get32(record+23) && registers.argument==source.get32(record+27) && registers.secondary==source.get(record+31),context+" dialogue registers differ");
        for(unsigned y=0;y<frame->height;++y)for(unsigned x=0;x<frame->width;++x) {
            const auto descriptor=source.get(tilemap+((y/8)*columns+x/8)*2),cell=descriptor&1023;
            const auto expected=original_cell(source.bus->video_ram,(0xc000+cell*16)&65535);
            const auto px=descriptor&0x4000?7-x%8:x%8,py=descriptor&0x8000?7-y%8:y%8;
            const unsigned color=expected[py*8+px],indexed=color?color+((descriptor>>10)&7)*4:0;
            require(frame->pixels[y*frame->width+x]==indexed && frame->priority[y*frame->width+x]==(color?bool(descriptor&0x2000):false),
                    context+" text pixels differ x="+std::to_string(x)+" y="+std::to_string(y));++totals.native_pixels;
        }
    }
    void print(unsigned id,unsigned code,unsigned font) {
        source.put(source.window_record(id)+21,font);auto style=output.window({id}).style;style.font=font;output.set_style({id},style);
        source.bus->work_ram[source.p.instant]=1;output.policy().instant=true;source.services.clear();
        source.call(source.version==eb::GameVersion::US?0xc10cb6:0xc111ec,code,0,0,false);
        output.begin_glyph(code);std::vector<unsigned> effects;
        while(output.advance()==dialogue::OutputProgress::Suspended) {
            effects.push_back(output.effect()->kind==dialogue::TextEffectKind::TextSound?
                (source.version==eb::GameVersion::US?0xc0abe0:0xc0abbf):(source.version==eb::GameVersion::US?0xc12dd5:0xc13502));
            output.respond();
        }
        require(effects==source.services,context+" glyph effects differ");totals.glyph_effects+=effects.size();
        compare_window(id);compare_brush("print");
    }
    void menu_page(unsigned font,unsigned count) {
        const bool us=source.version==eb::GameVersion::US;
        source.put(source.window_record(1)+21,font);auto style=output.window({1}).style;style.font=font;output.set_style({1},style);
        dialogue::MenuModel model(windows,*fonts);
        for(unsigned i=0;i<count;++i) {
            const std::array<std::uint8_t,3> label{std::uint8_t((us?0x71:0x41)+i%16),std::uint8_t(us?0x77:0x47),std::uint8_t(us?0x78:0x48)};
            std::copy(label.begin(),label.end(),source.bus->work_ram.begin()+0x5000);source.bus->work_ram[0x5003]=0;
            source.put32(source.cpu.direct_page+14,0x7e5000);source.put32(source.cpu.direct_page+18,0);
            source.call(us?0xc113d1:0xc11a00,0,0,0,false);const auto actual=model.append(label);
            require(source.cpu.accumulator==(us?0x89d4u:0x8d12u)+actual*(us?45:44),context+" menu pool append differs");
        }
        source.call(us?0xc451fa:0xc11dea,2,0,0,us);
        model.layout({2,0,false},menu_resources->next_page_label());
        source.services.clear();source.call(us?0xc1163c:0xc11bf0,0,0,0,false);
        dialogue::MenuPrinter printer(windows,menu_resources);auto operation=printer.begin({dialogue::MenuPrintAction::Page});
        std::vector<unsigned> actual;
        while(operation->advance()==dialogue::OutputProgress::Suspended) {
            if(const auto* text=std::get_if<dialogue::TextEffect>(&*operation->effect()))actual.push_back(text->kind==dialogue::TextEffectKind::TextSound?(us?0xc0abe0:0xc0abbf):(us?0xc12dd5:0xc13502));
            else actual.push_back(std::get<dialogue::WindowEffect>(*operation->effect()).kind==dialogue::WindowEffectKind::FrameWait?(us?0xc08756:0xc0874c):(us?0xc12dd5:0xc13502));
            operation->respond();
        }
        require(actual==source.services,context+" cold menu effect order differs");totals.glyph_effects+=actual.size();
        compare_window(1);compare_brush("cold menu");compare_scene();++totals.cold_menu_pages;
    }
    void selection_with_flavor_callback() {
        const bool us=source.version==eb::GameVersion::US;
        const unsigned callback=us?0xc1ec8f:0xc1ebf6,tick=us?0xc12dd5:0xc13502,input=us?0xc12e42:0xc1355e,
            sound=us?0xc0abe0:0xc0abbf,wait=us?0xc08756:0xc0874c;
        source.put32(source.cpu.direct_page+14,callback);source.call(us?0xc11f5a:0xc1267b,0,0,0,false);
        windows.metadata({1}).cursor_callback=dialogue::MenuCallbackId{17};
        // Palette reload's external party/state inputs. The actual source
        // palette routine runs inside the original flavor callback.
        const auto game=us?0x97f5u:0x9aa9u;
        source.bus->work_ram[game+(us?0xafu:0xacu)]=1;source.bus->work_ram[game+(us?0x9cu:0x99u)]=1;
        source.put((us?0x4dc8u:0x514eu)+2,source.p.party);source.put(us?0xb4b6:0xb68a,1);
        auto program=std::make_shared<dialogue::Program>(source.version,std::vector<dialogue::ContentBlock>{});
        dialogue::MenuHost host(program,windows,menu_resources);auto operation=host.begin(1);
        const std::array<unsigned,3> pressed{0x400,0x400,0x80};unsigned poll=0,callbacks=0;
        source.intercept=[&](unsigned pc) {
            if(pc!=callback && pc!=tick && pc!=input && pc!=sound && pc!=wait)return false;
            dialogue::Progress progress;
            do {progress=operation->advance(17);}while(progress==dialogue::Progress::BudgetExhausted);
            require(progress==dialogue::Progress::Suspended && operation->event(),context+" native menu missed original boundary "+hex(pc));
            const auto event=*operation->event();dialogue::MenuResponse response;
            if(pc==callback) {
                const auto* request=std::get_if<dialogue::MenuEffect>(&event);const unsigned flavor=source.cpu.accumulator;
                require(request && request->kind==dialogue::MenuEffectKind::Callback && request->value==flavor && request->callback==dialogue::MenuCallbackId{17},context+" flavor callback identity/argument differs");
                const unsigned old_flavor=source.bus->work_ram[source.p.flavor],direct=source.cpu.direct_page,stack=source.cpu.stack_pointer;
                const auto locals=std::vector<std::uint8_t>(source.bus->work_ram.begin()+direct,source.bus->work_ram.begin()+0x1e12);
                const auto return_stack=std::vector<std::uint8_t>(source.bus->work_ram.begin()+stack+4,source.bus->work_ram.begin()+0x2000);
                source.execute_far_body(); // original indirect callback, loader, copies, palette, RTL
                require(source.bus->work_ram[source.p.flavor]==old_flavor,context+" original callback did not restore flavor");
                require(std::equal(locals.begin(),locals.end(),source.bus->work_ram.begin()+direct) &&
                    std::equal(return_stack.begin(),return_stack.end(),source.bus->work_ram.begin()+stack+4),context+" original callback overwrote parent locals/return stack");
                graphics->prepare_nested(inputs(),flavor,*operation);
                auto publication=graphics->begin_publication_nested(us?dialogue::ArtworkPublication::CommonThenGenerated:dialogue::ArtworkPublication::All,*operation,dialogue::ArtworkDelivery::Synchronized);
                unsigned transfers=0;
                while(publication->advance()==dialogue::Progress::Suspended){publication->respond();++transfers;}
                require(publication->complete() && transfers==(us?8u:4u),context+" nested flavor publication did not finish");
                windows.publish_palette(flavor,false,true);
                for(unsigned color=0;color<32;++color)require(windows.palette()[color]==source.get(0x200+color*2),context+" flavor callback palette differs");
                require(operation->event()==event,context+" nested initialization consumed parent callback");
                compare_artwork("flavor callback");compare_brush("flavor callback");compare_window(1);
                operation->respond();++callbacks;++totals.menu_callbacks;return true;
            }
            if(pc==input) {
                const auto* request=std::get_if<dialogue::MenuEffect>(&event);
                require(request && request->kind==dialogue::MenuEffectKind::Input && poll<pressed.size(),context+" menu input order differs");
                response.pressed=pressed[poll++];source.put(0x6d,response.pressed);source.put(0x69,0);
                source.execute_far_body(true);++totals.menu_polls;
            }else if(pc==tick) {
                const auto* text=std::get_if<dialogue::TextEffect>(&event);const auto* window=std::get_if<dialogue::WindowEffect>(&event);
                require((text && text->kind==dialogue::TextEffectKind::WindowTick) || (window && window->kind==dialogue::WindowEffectKind::WindowTick),context+" expected menu WindowTick");
                if(us && windows.menu_state().early_tick_exit)windows.menu_state().early_tick_exit=false;
                else if(!output.policy().instant){windows.draw_tick();windows.publish_scene();}
                source.execute_far_body(true);
            }else if(pc==sound) {
                const auto* text=std::get_if<dialogue::TextEffect>(&event);const auto* menu=std::get_if<dialogue::MenuEffect>(&event);
                require((text && text->kind==dialogue::TextEffectKind::TextSound) || (menu && menu->kind==dialogue::MenuEffectKind::Sound && menu->value==source.cpu.accumulator),context+" menu sound order differs");
                source.cpu.execute_instruction<0x6b>(0,1);++totals.glyph_effects;
            }else {
                const auto* window=std::get_if<dialogue::WindowEffect>(&event);require(window && window->kind==dialogue::WindowEffectKind::FrameWait,context+" expected menu title frame wait");
                source.cpu.execute_instruction<0x6b>(0,1);++totals.frame_seams;
            }
            operation->respond(response);return true;
        };
        try{source.call(us?0xc1196a:0xc12109,1,0,0,false);}catch(...){source.intercept={};throw;}
        source.intercept={};dialogue::Progress progress;
        do{progress=operation->advance(17);}while(progress==dialogue::Progress::BudgetExhausted);
        require(progress==dialogue::Progress::Finished && operation->result()==source.cpu.accumulator && poll==pressed.size() && callbacks>=3,context+" complete callback menu result differs");
        compare_window(1);compare_brush("after callback menu");compare_scene();
    }
};
void native_initialization_cases(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned flavor=1;flavor<=5;++flavor)for(unsigned poison:{0u,0xa5u,0x5au}) {
        NativePair pair(assets,poison);pair.context+=" flavor="+std::to_string(flavor)+" poison="+hex(poison);
        pair.prepare(flavor);pair.publish(0);pair.publish(1);pair.publish(2);pair.publish(2,true);++totals.native_cases;
    }
    for(unsigned index=0;index<(us?128u:8u);++index) {
        NativePair pair(assets);pair.context+=" raw name="+std::to_string(index);
        if(us)pair.names[3]={0x71,0x72,0x73,0x74,0x75,std::uint8_t(index+0x50),0};
        else for(unsigned member=0;member<4;++member)pair.names[member]={std::uint8_t(index*32+member),0,7,0xff};
        pair.prepare(1);++totals.native_cases;
    }
    for(unsigned name_length:{0u,1u,3u,4u,5u,12u}) {
        NativePair pair(assets);pair.context+=" cold glyph length="+std::to_string(name_length);pair.open(1);
        if(us){pair.names[3].assign(name_length,0x71);pair.names[3].push_back(0);}
        pair.prepare(1);pair.publish(1);
        // There is deliberately no source reset between complete preparation
        // and PRINT_LETTER: C44DCA must publish the name-shifted brush prefix.
        pair.print(1,us?0x71:0x41,us?3:0);pair.print(1,us?0x72:0x42,us?0:1);++totals.native_cases;
    }
    for(unsigned poison:{0u,0xa5u,0x5au}) {
        NativePair pair(assets,poison);pair.context+=" live title reload poison="+hex(poison);
        pair.prepare(1);pair.publish(1);pair.open(1);pair.title(1);pair.compare_scene();
        const auto held=pair.windows.frame();const auto held_pixels=held->pixels;
        for(unsigned flavor=2;flavor<=5;++flavor) {
            pair.prepare(flavor);pair.compare_scene(false);
            pair.publish(1);pair.compare_scene(false);
            require(held->pixels==held_pixels,pair.context+" reload mutated an immutable prior frame");
            pair.title(1);pair.compare_scene();
        }
        pair.print(1,us?0x71:0x41,us?3:1);pair.compare_scene();
        ++totals.native_cases;
    }
    {
        NativePair pair(assets,0xa5);pair.context+=" normal queued Copy";pair.prepare(1);pair.queued_copy();++totals.native_cases;
    }
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned count:{4u,12u}) {
        NativePair pair(assets);pair.context+=" cold menu font="+std::to_string(font)+" count="+std::to_string(count);
        pair.prepare(1);pair.publish(1);pair.open(1);pair.menu_page(font,count);++totals.native_cases;
    }
    {
        NativePair pair(assets);pair.context+=" real flavor callback";
        pair.prepare(1);pair.publish(1);pair.open(1);pair.title(1);pair.menu_page(us?3:0,5);
        pair.selection_with_flavor_callback();++totals.native_cases;
    }
}
void native_buffer_cases(const eb::GameAssets &assets) {
    const auto fonts=dialogue::FontResources::import(assets.image,assets.version);
    const auto resources=dialogue::WindowInitializationResources::import(assets.image,assets.version);
    unsigned cases{};
    for(unsigned flavor=1;flavor<=5;++flavor)for(unsigned seed:{11u,0xa5u,0x5au}) {
        Original source(assets);
        std::array<std::uint8_t,65536> buffer;
        for(unsigned i=0;i<buffer.size();++i)buffer[i]=std::uint8_t(i*37+(i>>8)+seed);
        std::copy(buffer.begin(),buffer.end(),source.bus->work_ram.begin()+0x10000);
        dialogue::State state;dialogue::TextOutput output(fonts,state);
        dialogue::WindowGraphics graphics(resources,output);
        std::array<std::array<std::uint8_t,5>,4> names;
        dialogue::PartyNameInputs inputs;
        for(unsigned member=0;member<4;++member) {
            std::copy_n(source.bus->work_ram.begin()+source.p.party+member*source.p.stride,5,names[member].begin());
            inputs.names[member]=names[member];
        }
        for(unsigned pass=0;pass<2;++pass) {
            const unsigned selected=pass?6-flavor:flavor;
            source.bus->work_ram[source.p.flavor]=std::uint8_t(selected);
            source.prepare();dialogue::prepare_window_buffer(graphics,buffer,inputs,selected);
            require(std::equal(buffer.begin(),buffer.end(),source.bus->work_ram.begin()+0x10000),
                "Complete retained LOAD_WINDOW_GFX BUFFER differs "+std::string(assets.title)+
                " flavor="+std::to_string(selected)+" pass="+std::to_string(pass));
            ++cases;
        }
    }
    std::cout<<"PASS retained window BUFFER "<<assets.title<<": "<<cases
        <<" complete original preparations/full65536bytes including unchanged tail\n";
}
}
int main(int argc,char** argv) {
    try {
        if(argc<2){std::cout<<"SKIP initialization source reference: local imported packs required\n";return 77;}
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
            us_name_continuations(assets);poisoned_publication(assets);retained_title_visibility(assets);native_initialization_cases(assets);native_buffer_cases(assets);
        }
        std::cout<<"PASS initialization source pilot: "<<totals.cases<<" cases, "<<totals.preparations<<" complete preparations, "<<totals.publications<<" original hardware publications, "<<totals.name_glyphs<<" original name glyph calls, "<<totals.party_reads<<" party byte reads, "<<totals.instructions<<" original instructions\n";
        std::cout<<"Original PPU samples: "<<totals.pixels<<", explicit title frame-only wait seams: "<<totals.frame_seams<<"\n";
        std::cout<<"PASS native initialization: "<<totals.native_cases<<" cases, "<<totals.native_boundaries<<" atlas boundaries, "<<totals.native_pixels<<" indexed artwork/text pixels, "<<totals.brush_pixels<<" shared brush pixels, "<<totals.glyph_effects<<" glyph effects\n";
        std::cout<<"Real original NMI queue services: "<<totals.nmi_services<<", explicit world IRQ callback seams: "<<totals.irq_callback_seams<<", observed Copy capacity busy waits: "<<totals.copy_capacity_waits<<"\n";
        std::cout<<"Cold original PRINT_MENU_ITEMS pages: "<<totals.cold_menu_pages<<" (no history warmup), complete menu callbacks: "<<totals.menu_callbacks<<", input polls: "<<totals.menu_polls<<", nested complete preparations: "<<totals.nested_preparations<<"\n";
        std::cout<<"Explicit outer glyph seams: "<<totals.tick_seams<<" WindowTick, "<<totals.sound_seams<<" TextSound; inner menu HP/PP/actor seams: "<<totals.world_inner_seams<<"; JP completed-DMA acknowledgements: "<<totals.jp_dma_acknowledgements<<"\n";
        std::cout<<"Scope: preparation, title/cold-menu lifecycle, complete original flavor callbacks, real immediate and host-scheduled NMI/DMA publication. Title waits, outer glyph ticks/sound, inner menu HP/PP/actors, world IRQ callbacks and JP completed-DMA acknowledgement are explicit services. Automatic video scheduling, PCM and a native game session are outside this fixture.\n";
        return 0;
    }catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}
}
