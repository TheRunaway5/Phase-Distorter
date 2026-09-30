// Independent original-source substitution oracle. Initial numeric-domain
// probes seam PRINT_LETTER/fixed-glyph output explicitly so malformed values
// can expose buffer/focus corruption without executing invalid window state.
// Expected digits, writes and wrapper control flow all come from Legacy CPU.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
namespace dialogue=eb::native::dialogue;
void require(bool value,const std::string& reason){if(!value)throw std::runtime_error(reason);}
std::string hex(unsigned value){std::ostringstream out;out<<std::hex<<value;return out.str();}
struct Layout {unsigned load,create,party,stride,flavor,windows,record_size,open,focus,buffer,helper,number,money,string,letter,tick,sound,wait,divide,modulus;};
Layout layout(eb::GameVersion version) {
    if(version==eb::GameVersion::US)return {0xc47c3f,0xc104ee,0x99ce,95,0x99cd,0x8650,82,0x88e4,0x8958,0x895a,0xc10d7c,0xc10df6,0xc4507a,0xc10efc,0xc10cb6,0xc12dd5,0xc0abe0,0xc08756,0xc091a6,0xc09237};
    return {0xc459ab,0xc106e4,0x9c7f,94,0x9c7e,0x89c2,76,0x8c26,0x8c96,0x8c98,0xc112ca,0xc11344,0xc11404,0xc114dd,0xc111ec,0xc13502,0xc0abbf,0xc0874c,0xc09188,0xc09219};
}
struct Write {unsigned address,value;};
struct Glyph {unsigned value;bool fixed;};
struct Totals {std::uint64_t instructions{},writes{},glyphs{},pixels{},ppu_pixels{},brush_pixels{};unsigned cases{},effects{},native_cases{},native_effects{},snapshots{},jp_acknowledgements{};} totals;
class Source {
 public:
    eb::GameVersion version;Layout p;std::unique_ptr<eb::SnesBus> bus;eb::MainCpu65816 cpu;
    std::vector<Write> writes;std::vector<Glyph> glyphs;std::vector<unsigned> string_reads;
    bool trace{},glyph_seam=true;unsigned money_frame{},money_measured_width{};
    std::vector<unsigned> money_measurement;
    std::function<void(unsigned)> at_instruction;
    std::function<void(unsigned)> at_service;
    explicit Source(const eb::GameAssets& assets):version(assets.version),p(layout(version)),bus(std::make_unique<eb::SnesBus>(assets.image,version)),cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);cpu.emulation_mode=false;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.data_bank=0x7e;cpu.status_register=eb::MainCpu65816::InterruptDisable;
        bus->work_ram[0xd]=0x80;bus->write_byte(0x2100,0x80);call(0xc200d9,true);
        if(version==eb::GameVersion::US)call(0xc43f53,true);else call(0xc43be8,true);
        bus->work_ram[p.flavor]=1;
        for(unsigned member=0;member<4;++member)for(unsigned i=0;i<4;++i)bus->work_ram[p.party+member*p.stride+i]=(version==eb::GameVersion::US?0x71:0x41)+i;
        call(p.load,true);
        if(version==eb::GameVersion::US)call(0xc44963,true,1);
        else{put32(0x1e0e,0x7f0000);call(0xc08616,true,0,0x3800,0x6000);}
        call(p.create,false,1);bus->work_ram[record()+18]=0x80;bus->work_ram[version==eb::GameVersion::US?0x9622:0x991a]=1;
        cpu.observe_memory_write=[&](std::uint32_t address,std::uint8_t value){
            if(!trace)return;
            if((address>>16)==0x7e)writes.push_back({address&65535,value});
            else if((address&0x40e000)==0)writes.push_back({address&8191,value});
        };
        bus->debug_read_wram=[&](unsigned address,std::uint8_t value){if(trace && address>=0x5000 && address<0x5040)string_reads.push_back(address);return value;};
    }
    unsigned get(unsigned at)const{return bus->work_ram.at(at)|(unsigned(bus->work_ram.at(at+1))<<8);}
    unsigned get32(unsigned at)const{return get(at)|(get(at+2)<<16);}
    void put(unsigned at,unsigned value){bus->work_ram.at(at)=value;bus->work_ram.at(at+1)=value>>8;}
    void put32(unsigned at,unsigned value){put(at,value);put(at+2,value>>16);}
    unsigned record()const{return p.windows+get(p.open+2)*p.record_size;}
    void call(unsigned entry,bool far,unsigned a=0,unsigned x=0,unsigned y=0) {
        const unsigned d=cpu.direct_page,s=cpu.stack_pointer,db=cpu.data_bank,trampoline=(entry&0xff0000)|0xff00;
        cpu.status_register=eb::MainCpu65816::InterruptDisable;cpu.program_counter=trampoline;cpu.accumulator=a;cpu.x_index=x;cpu.y_index=y;
        if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry&65535,3);
        for(unsigned n=0;n<2'000'000;++n) {
            if(cpu.program_counter==trampoline+(far?4:3) && cpu.stack_pointer==s){require(cpu.direct_page==d && cpu.data_bank==db,"Original substitution changed caller ABI");return;}
            const auto pc=cpu.program_counter;
            if(at_instruction)at_instruction(pc);
            if(pc==p.letter || (version==eb::GameVersion::US && pc==0xc43f77)) {
                if(trace)glyphs.push_back({cpu.accumulator,pc!=p.letter});
                if(glyph_seam){if(pc==p.letter)cpu.execute_instruction<0x60>(0,1);else cpu.execute_instruction<0x6b>(0,1);continue;}
            }
            if(pc==p.tick || pc==p.sound || pc==p.wait){if(at_service)at_service(pc);cpu.execute_instruction<0x6b>(0,1);++totals.effects;continue;}
            if(version==eb::GameVersion::JP && (pc==0xc439e2 || pc==0xc43be8) && get(0xa031)){put(0xa031,0);++totals.jp_acknowledgements;}
            cpu.step_instruction();++totals.instructions;
        }
        throw std::runtime_error("Original substitution did not return: "+cpu.describe_registers());
    }
    void begin_trace() {writes.clear();glyphs.clear();string_reads.clear();money_frame=0;trace=true;}
    void end_trace(){trace=false;totals.writes+=writes.size();totals.glyphs+=glyphs.size();++totals.cases;}
    void nested(unsigned entry,bool far,unsigned parameter,unsigned argument=0) {
        const unsigned pc=cpu.program_counter,d=cpu.direct_page,s=cpu.stack_pointer;
        require(pc==p.tick,"Original nested substitution needs WindowTick");
        const std::vector<std::uint8_t> locals(bus->work_ram.begin()+d,bus->work_ram.begin()+0x1e12),stack(bus->work_ram.begin()+s+1,bus->work_ram.begin()+0x2000);
        // Original C callback ABI: PHD and a separate18-byte argument frame.
        // The pending parent JSL stays on the hardware stack throughout.
        cpu.execute_instruction<0xc2>(0x31,2);cpu.execute_instruction<0x0b>(0,1);cpu.execute_instruction<0x7b>(0,1);
        cpu.execute_instruction<0x69>(0xffee,3);cpu.execute_instruction<0x5b>(0,1);put32(cpu.direct_page+14,parameter);
        call(entry,far,argument);cpu.execute_instruction<0x2b>(0,1);
        require(cpu.direct_page==d && cpu.stack_pointer==s && std::equal(locals.begin(),locals.end(),bus->work_ram.begin()+d) &&
            std::equal(stack.begin(),stack.end(),bus->work_ram.begin()+s+1),"Original nested substitution corrupted caller locals/return stack");
        cpu.program_counter=pc;
    }
    unsigned window_record(unsigned id=1)const {
        const unsigned slot=get(p.open+id*2);
        // This fixture creates ID1 in physical slot0. Its metadata remains
        // source-owned after close and is observed by explicit ambient-slot
        // cases; arbitrary invalid open-table values are not normalized.
        if(id==1 && slot==0xffff)return p.windows;
        require(slot<8,"Source window not open");return p.windows+slot*p.record_size;
    }
    dialogue::TextFrame frame(unsigned id=1)const {
        const auto at=window_record(id),columns=get(at+10),rows=get(at+12),tilemap=get(at+53);
        dialogue::TextFrame result{columns*8,rows*8};result.pixels.resize(result.width*result.height);result.priority.resize(result.pixels.size());
        for(unsigned y=0;y<result.height;++y)for(unsigned x=0;x<result.width;++x) {
            const auto descriptor=get(tilemap+((y/8)*columns+x/8)*2),gx=(descriptor&0x4000)?7-x%8:x%8,gy=(descriptor&0x8000)?7-y%8:y%8;
            const auto location=(0xc000+(descriptor&1023)*16+gy*2)&65535;
            const unsigned color=((bus->video_ram[location]>>(7-gx))&1)|(((bus->video_ram[(location+1)&65535]>>(7-gx))&1)<<1),index=y*result.width+x;
            result.pixels[index]=color?color+((descriptor>>10)&7)*4:0;result.priority[index]=color?bool(descriptor&0x2000):false;
        }
        return result;
    }
    dialogue::TextCompositionSnapshot composition()const {
        const bool us=version==eb::GameVersion::US;dialogue::TextCompositionSnapshot result;
        result.columns.resize(us?52:4);const unsigned buffer=us?0x3492:0x3918;
        for(unsigned column=0;column<result.columns.size();++column)for(unsigned y=0;y<16;++y)for(unsigned x=0;x<8;++x) {
            const unsigned at=buffer+column*32+y*2;result.columns[column][y*8+x]=((bus->work_ram[at]>>(7-x))&1)|(((bus->work_ram[at+1]>>(7-x))&1)<<1);
        }
        result.brush_column=get(us?0x9e25:0xa02b);result.fractional_offset=get(us?0x9e23:0xa029)&7;
        if(us){result.publication_position=get(0x9652);result.partial_publication=get(0x9654)!=0;}
        return result;
    }
    void draw_scene() {
        call(version==eb::GameVersion::US?0xc2087c:0xc2081d,true);
        put32(cpu.direct_page+14,version==eb::GameVersion::US?0x7e7dfe:0x7e8176);call(0xc08616,true,0,0x800,0x7c00);
    }
    std::vector<std::uint32_t> ppu()const {
        auto display=std::make_unique<eb::SnesBus>(std::span(eb::rom_data(version),eb::rom_size(version)),version);display->video_ram=bus->video_ram;
        for(unsigned i=0;i<32;++i){const unsigned color=(i*0x421)&0x7fff;display->palette_ram[i*2]=color;display->palette_ram[i*2+1]=color>>8;}
        display->write_byte(0x2100,15);display->write_byte(0x2105,1);display->write_byte(0x2109,0x7c);display->write_byte(0x210c,6);display->write_byte(0x212c,4);
        display->write_byte(0x2112,0xff);display->write_byte(0x2112,0xff);
        while(display->completed_frames<2)display->advance_cpu_cycles(1000);
        return {display->native_framebuffer.begin(),display->native_framebuffer.end()};
    }
};
void dump(const Source& source,const std::string& routine,unsigned value) {
    std::cout<<(source.version==eb::GameVersion::US?"US":"JP")<<" "<<routine<<" value="<<hex(value)<<" A="<<hex(source.cpu.accumulator)<<" focus="<<hex(source.get(source.p.focus))<<" glyphs=";
    for(const auto& glyph:source.glyphs)std::cout<<(glyph.fixed?"f":"")<<hex(glyph.value)<<',';
    std::cout<<" writes=";
    for(const auto& write:source.writes)if(write.address>=source.p.buffer-8 && write.address<source.p.buffer+16)
        std::cout<<int(write.address)-int(source.p.buffer)<<':'<<hex(write.value)<<',';
    std::cout<<" title_tail="<<hex(source.get(source.p.buffer-4))<<" money_frame="<<hex(source.money_frame)<<" measured=";
    for(auto byte:source.money_measurement)std::cout<<hex(byte)<<',';
    std::cout<<" measured_width="<<source.money_measured_width<<" local_writes=";
    if(routine=="money" && source.version==eb::GameVersion::US)for(const auto& write:source.writes)
        if(write.address>=source.money_frame+14 && write.address<source.money_frame+40)std::cout<<write.address-source.money_frame<<':'<<hex(write.value)<<',';
    std::cout<<'\n';
}
void numeric_domains(const eb::GameAssets& assets) {
    const std::array<std::uint32_t,18> values{0,1,9,10,99,100,999,1000,999999,1000000,9999999,10000000,0x7fffffff,0x80000000,0xffff967e,0xffff967f,0xffff9680,0xffffffff};
    for(const auto value:values)for(unsigned routine=0;routine<3;++routine) {
        Source source(assets);const auto before=source.cpu.stack_pointer;source.put32(0x1e0e,value);
        std::fill(source.bus->work_ram.begin()+source.p.buffer,source.bus->work_ram.begin()+source.p.buffer+12,0xa5);
        const auto entry=routine==0?source.p.helper:routine==1?source.p.number:source.p.money;
        if(routine==2 && assets.version==eb::GameVersion::US)source.at_instruction=[&](unsigned pc){
            if(pc==0xc45082)source.money_frame=source.cpu.direct_page;
            if(pc==0xc4516b)for(unsigned i=0;i<source.cpu.accumulator;++i)
                source.money_measurement.push_back(source.bus->work_ram.at(source.money_frame+0x12+i));
            if(pc==0xc4516f)source.money_measured_width=source.cpu.accumulator;
        };
        source.begin_trace();source.call(entry,routine==2 && assets.version==eb::GameVersion::US);source.end_trace();
        require(source.cpu.stack_pointer==before,"Numeric probe lost original return stack");
        // An independent decimal representation asserts the discovered domain;
        // expected buffer destinations still include the original underflow.
        const auto rendered=routine==1?std::min(value,0xffff967fu):value;
        const auto decimal=std::to_string(rendered);
        std::vector<Write> buffer_writes;
        for(const auto& write:source.writes)if(write.address>=source.p.buffer-4 && write.address<source.p.buffer+12)buffer_writes.push_back(write);
        require(buffer_writes.size()==decimal.size(),"Original numeric buffer write count differs");
        for(unsigned i=0;i<decimal.size();++i)require(buffer_writes[i].address==source.p.buffer+6-i &&
            buffer_writes[i].value==unsigned(decimal[decimal.size()-1-i]-'0'),"Original numeric reverse write differs");
        unsigned focus=1,title=0xffff;
        if(decimal.size()>=8)focus=(focus&255)|(unsigned(decimal[decimal.size()-8]-'0')<<8);
        if(decimal.size()>=9)focus=(focus&0xff00)|unsigned(decimal[decimal.size()-9]-'0');
        if(decimal.size()==10)title=(title&255)|(unsigned(decimal[0]-'0')<<8);
        require(source.get(source.p.focus)==focus && source.get(source.p.buffer-4)==title,"Original neighboring focus/title corruption differs");
        if(routine==0)require(source.cpu.accumulator==decimal.size(),"Original digit helper count differs");
        else {
            const bool us=assets.version==eb::GameVersion::US;
            std::vector<Glyph> expected;
            if(routine==2)expected.push_back({us?0x54u:0x23u,false});
            for(char digit:decimal)expected.push_back({unsigned((us?0x60:0x30)+digit-'0'),false});
            if(routine==2)expected.push_back({0x24,us});
            require(expected.size()==source.glyphs.size(),"Original numeric emitted length differs");
            for(unsigned i=0;i<expected.size();++i)require(expected[i].value==source.glyphs[i].value && expected[i].fixed==source.glyphs[i].fixed,"Original numeric emitted glyph differs");
            if(routine==2 && us) {
                require(source.money_frame==0x1dd8 && source.money_measurement.size()==decimal.size(),"Original money frame/measurement extent differs");
                for(unsigned i=0;i<decimal.size();++i)require(source.money_measurement[i]==(i<8?unsigned(0x60+decimal[i]-'0'):i==8?decimal.size():0),"Original money local alias differs");
            }
        }
        dump(source,routine==0?"digits":routine==1?"number":"money",value);
    }
}
void string_domains(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned size:{0u,1u,2u,4u,0xffffu})for(unsigned nul:{0u,2u,4u}) {
        Source source(assets);
        for(unsigned i=0;i<8;++i)source.bus->work_ram[0x5000+i]=(us?0x71:0x41)+i;
        source.bus->work_ram[0x5000+nul]=0;source.put32(0x1e0e,0x7e5000);
        source.begin_trace();source.call(source.p.string,false,size);source.end_trace();
        require(source.glyphs.size()==std::min(size,nul),"Original bounded string length differs");
        std::cout<<(us?"US":"JP")<<" string maximum="<<size<<" zero="<<nul<<" glyphs=";
        for(const auto& glyph:source.glyphs)std::cout<<hex(glyph.value)<<',';
        std::cout<<" reads=";for(auto at:source.string_reads)std::cout<<hex(at-0x5000)<<',';std::cout<<'\n';
    }
}
void padding_domains(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned padding=0;padding<256;++padding)for(unsigned value:{123u,9999999u}) {
        Source source(assets);const auto digits=std::to_string(value).size();
        source.bus->work_ram[source.record()+18]=padding;
        // A nonzero explicit pixel offset is persistent even after a later
        // aligned position. Ordinary brush fraction is then zero, not three.
        if(us){source.call(0xc43d75,true,19,0);source.call(0xc10c72,true,2,0);}
        unsigned shifts=0,delta=0,pixels=0;
        source.at_instruction=[&](unsigned pc){if(pc==0xc43d95){++shifts;delta=source.cpu.accumulator;}if(pc==0xc43d75)pixels=source.cpu.accumulator;};
        source.put32(0x1e0e,value);source.begin_trace();source.call(source.p.number,false);source.end_trace();
        const auto spaces=padding&128?0u:unsigned(std::max<std::size_t>((padding&15)+1,digits)-digits);
        require(source.glyphs.size()==digits+(us?0:spaces),"Original number padding output length differs");
        if(us) {
            require(shifts==unsigned(!(padding&128)),"Original number padding positional call differs");
            if(shifts)require(delta==spaces*6 && pixels==19+spaces*6,"Original number padding persistent pixel offset differs");
            require(source.bus->work_ram[0x5e73]==(shifts && pixels%8?pixels%8:3),"Original number padding last nonzero offset differs");
        } else for(unsigned i=0;i<spaces;++i)require(source.glyphs[i].value==0x20 && !source.glyphs[i].fixed,"Original JP padding was not a real space glyph");
    }
    std::cout<<(us?"US":"JP")<<" padding: all256 bytes x2 digit lengths; "<<(us?"persistent nonzero offset survives aligned positioning":"padding emits real PRINT_LETTER spaces")<<'\n';
}
struct Sample {
    unsigned effect{};
    std::array<unsigned,13> state{};
    dialogue::TextFrame frame;
    dialogue::TextCompositionSnapshot brush;
};
Sample original_sample(const Source& source,unsigned effect=0) {
    const bool us=source.version==eb::GameVersion::US;const unsigned at=source.window_record();
    Sample result;result.effect=effect;result.frame=source.frame();result.brush=source.composition();
    result.state={source.get(at+14),source.get(at+16),source.get(at+21),source.get(at+19),source.get32(at+23),source.get32(at+27),source.get(at+31),
        source.bus->work_ram[us?0x9622:0x991a],source.bus->work_ram[us?0x5e6d:0x61e5],source.bus->work_ram[us?0x5e75:0x61ed],source.bus->work_ram[us?0x5e76:0x61ee],
        us?source.bus->work_ram[0x5e73]:0u,source.get(source.p.focus)};
    return result;
}
class NativePair {
 public:
    Source source;
    std::shared_ptr<const dialogue::FontResources> fonts;
    std::shared_ptr<const dialogue::WindowResources> resources;
    dialogue::State state;
    dialogue::TextOutput output;
    dialogue::WindowHost windows;
    std::shared_ptr<dialogue::WindowGraphics> graphics;
    std::vector<Sample> samples;
    std::string context;
    explicit NativePair(const eb::GameAssets& assets):source(assets),
        fonts(dialogue::FontResources::import(assets.image,assets.version)),resources(dialogue::WindowResources::import(assets.image,assets.version)),
        output(fonts,state),windows(resources,state,output),context(assets.version==eb::GameVersion::US?"US":"JP") {
        graphics=std::make_shared<dialogue::WindowGraphics>(dialogue::WindowInitializationResources::import(assets.image,assets.version),output);windows.set_graphics(graphics);
        std::array<std::uint8_t,5> name{std::uint8_t(assets.version==eb::GameVersion::US?0x71:0x41),std::uint8_t(assets.version==eb::GameVersion::US?0x72:0x42),
            std::uint8_t(assets.version==eb::GameVersion::US?0x73:0x43),std::uint8_t(assets.version==eb::GameVersion::US?0x74:0x44),0};
        dialogue::PartyNameInputs names;for(auto& member:names.names)member=name;graphics->prepare(names,1);
        auto publication=graphics->begin_publication(assets.version==eb::GameVersion::US?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
        while(publication->advance()==dialogue::Progress::Suspended)publication->respond();require(publication->complete(),"Native initial publication incomplete");
        auto opening=windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{1}});
        while(opening->advance()==dialogue::OutputProgress::Suspended)opening->respond();require(opening->complete(),"Native initial window incomplete");
        windows.metadata({1}).number_padding=0x80;output.policy().instant=true;
        windows.substitutions().configure(dialogue::SubstitutionResources::import(assets.image,assets.version));
        source.glyph_seam=false;
    }
    void font(unsigned value) {
        source.put(source.record()+21,value);auto style=output.window({1}).style;style.font=value;output.set_style({1},style);
    }
    void padding(unsigned value) {source.bus->work_ram[source.record()+18]=value;windows.metadata({1}).number_padding=value;}
    void compare(const Sample& expected,const std::string& where) {
        const auto& window=windows.slot_output(0);const auto style=window.style;const auto& registers=state.registers_at(0).active;
        const unsigned attributes=(style.palette<<10)|(style.priority?0x2000:0)|(style.flip_horizontal?0x4000:0)|(style.flip_vertical?0x8000:0);
        const std::array<unsigned,13> actual{window.cursor.column,window.cursor.line,style.font,attributes,registers.working,registers.argument,registers.secondary,
            unsigned(output.policy().instant),output.policy().character_padding,unsigned(output.indent_pending()),output.last_character(),source.version==eb::GameVersion::US?output.last_pixel_offset_set():0u,
            state.focus?state.focus->value:0xffffu};
        for(unsigned i=0;i<actual.size();++i)require(actual[i]==expected.state[i],context+" "+where+" state["+std::to_string(i)+"] expected="+hex(expected.state[i])+" actual="+hex(actual[i]));
        if(windows.slot_for({1})) {
            const auto frame=output.frame({1});require(frame->width==expected.frame.width && frame->height==expected.frame.height,context+" "+where+" window extent differs");
            for(unsigned i=0;i<frame->pixels.size();++i) {
                require(frame->pixels[i]==expected.frame.pixels[i] && frame->priority[i]==expected.frame.priority[i],context+" "+where+" indexed canvas differs pixel="+std::to_string(i)+" expected="+hex(expected.frame.pixels[i])+" actual="+hex(frame->pixels[i]));++totals.pixels;
            }
        }
        const auto brush=output.composition_snapshot();
        if(source.version==eb::GameVersion::US) {
            require(brush.brush_column==expected.brush.brush_column && brush.fractional_offset==expected.brush.fractional_offset &&
                brush.publication_position==expected.brush.publication_position && brush.partial_publication==expected.brush.partial_publication,context+" "+where+" brush cursor differs");
            require(brush.columns==expected.brush.columns,context+" "+where+" brush pixels differ");totals.brush_pixels+=52*128;
        }
        ++totals.snapshots;
    }
    void compare_scene() {
        source.draw_scene();windows.draw_windows();windows.publish_scene();const auto frame=windows.frame();const auto original=source.ppu();
        require(frame->width==256 && frame->height==224,"Native scene extent differs");
        for(unsigned at=0;at<frame->pixels.size();++at) {
            const unsigned palette=(frame->pixels[at]*0x421)&0x7fff;const auto expand=[](unsigned v){return(v<<3)|(v>>2);};
            const auto rgb=0xff000000u|(expand(palette&31)<<16)|(expand((palette>>5)&31)<<8)|expand((palette>>10)&31);
            require(rgb==original[at],context+" real PPU differs pixel="+std::to_string(at));++totals.ppu_pixels;
        }
    }
    void run(dialogue::SubstitutionCommand command,unsigned entry,bool far,unsigned argument=0,bool scene=false) {
        samples.clear();source.at_service=[&](unsigned effect){samples.push_back(original_sample(source,effect));};
        source.call(entry,far,argument);source.at_service={};const auto final=original_sample(source);
        auto operation=windows.substitutions().begin(std::move(command));unsigned index=0;
        for(unsigned n=0;n<100000;++n) {
            dialogue::Progress status;try{status=operation->advance(17);}catch(const std::exception& e){throw std::runtime_error(context+" "+e.what());}
            if(status==dialogue::Progress::Finished)break;
            if(status==dialogue::Progress::BudgetExhausted)continue;
            require(index<samples.size(),context+" extra native substitution effect");
            const auto effect=operation->effect()->kind==dialogue::TextEffectKind::TextSound?source.p.sound:source.p.tick;
            require(effect==samples[index].effect,context+" substitution effect order differs");compare(samples[index],"effect "+std::to_string(index));++index;operation->respond();
        }
        require(operation->complete() && index==samples.size(),context+" substitution ended early");compare(final,"final");
        totals.native_effects+=index;++totals.native_cases;if(scene)compare_scene();
    }
};
void real_output_domains(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned value:{0u,9u,10u,123u,9999999u})for(unsigned money:{0u,1u}) {
        NativePair pair(assets);pair.context+=" font="+std::to_string(font)+" "+(money?"money=":"number=")+std::to_string(value);pair.font(font);
        pair.source.put32(0x1e0e,value);pair.run({money?dialogue::SubstitutionAction::Money:dialogue::SubstitutionAction::Number,value},money?pair.source.p.money:pair.source.p.number,money&&us,0,true);
    }
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned padding:{0u,1u,5u,15u,16u,127u,128u,255u}) {
        NativePair pair(assets);pair.context+=" font="+std::to_string(font)+" padding="+std::to_string(padding);pair.font(font);pair.padding(padding);pair.source.put32(0x1e0e,123);
        pair.run({dialogue::SubstitutionAction::Number,123},pair.source.p.number,false);
    }
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned maximum:{0u,1u,5u,0xffffu}) {
        NativePair pair(assets);pair.context+=" font="+std::to_string(font)+" string max="+std::to_string(maximum);pair.font(font);
        const std::vector<std::uint8_t> text{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x50:0x20),std::uint8_t(us?0x73:0x43),std::uint8_t(us?0x74:0x44),0};
        std::copy(text.begin(),text.end(),pair.source.bus->work_ram.begin()+0x5000);pair.source.put32(0x1e0e,0x7e5000);
        pair.run({dialogue::SubstitutionAction::String,0,[&]{return std::span<const std::uint8_t>(text);},std::uint16_t(maximum)},pair.source.p.string,false,maximum,true);
    }
}

// Independent semantic field order from src/data/text/CC_1C_01_data.asm.
// Addresses and widths are read from the original table by the fixture only;
// native callbacks receive semantic keys and fixture-owned values, never RAM.
constexpr std::array<dialogue::StatField,22> source_fields{
    dialogue::StatField::CharacterName,dialogue::StatField::Level,dialogue::StatField::Experience,
    dialogue::StatField::CurrentHp,dialogue::StatField::TargetHp,dialogue::StatField::MaximumHp,
    dialogue::StatField::CurrentPp,dialogue::StatField::TargetPp,dialogue::StatField::MaximumPp,
    dialogue::StatField::Offense,dialogue::StatField::Defense,dialogue::StatField::Speed,dialogue::StatField::Guts,
    dialogue::StatField::Luck,dialogue::StatField::Vitality,dialogue::StatField::Iq,dialogue::StatField::BaseIq,
    dialogue::StatField::BaseOffense,dialogue::StatField::BaseDefense,dialogue::StatField::BaseSpeed,dialogue::StatField::BaseGuts,dialogue::StatField::BaseLuck};
unsigned stat_id(dialogue::StatKey key) {
    constexpr std::array<dialogue::StatField,8> globals{dialogue::StatField::None,dialogue::StatField::Mother2PlayerName,dialogue::StatField::EarthBoundPlayerName,
        dialogue::StatField::PetName,dialogue::StatField::FavouriteFood,dialogue::StatField::FavouriteThing,dialogue::StatField::MoneyCarried,dialogue::StatField::BankBalance};
    const auto global=std::find(globals.begin(),globals.end(),key.field);if(global!=globals.end()){require(key.party_index==0,"Global stat acquired party index");return unsigned(global-globals.begin());}
    const auto field=std::find(source_fields.begin(),source_fields.end(),key.field);require(field!=source_fields.end() && key.party_index<4,"Unknown native live stat field");return 8+22*key.party_index+unsigned(field-source_fields.begin());
}
struct FixtureValues {
    std::array<std::vector<std::uint8_t>,96> strings;
    std::array<std::uint32_t,96> numbers{};
    FixtureValues(NativePair& pair,const eb::GameAssets& assets) {
        const bool us=assets.version==eb::GameVersion::US;const unsigned table=us?0x4550f:0x43305;
        for(unsigned id=1;id<96;++id) {
            const unsigned tag=assets.image.at(table+id*3),address=unsigned(assets.image.at(table+id*3+1))|(unsigned(assets.image.at(table+id*3+2))<<8);
            const unsigned count=tag&0x7f;
            if(tag&128) {
                numbers[id]=0x10000+id*131+17;
                for(unsigned byte=0;byte<count;++byte)pair.source.bus->work_ram[address+byte]=numbers[id]>>(byte*8);
            } else {
                auto& text=strings[id];text.resize(count);
                for(unsigned byte=0;byte<count;++byte)text[byte]=std::uint8_t((us?0x71:0x41)+(id+byte)%16);
                if(count>5)text[4]=0; // Five/four-byte party names remain deliberately unterminated.
                std::copy(text.begin(),text.end(),pair.source.bus->work_ram.begin()+address);
            }
        }
        pair.windows.substitutions().configure(dialogue::SubstitutionResources::import(assets.image,assets.version),
            {[this](dialogue::StatKey key){return numbers.at(stat_id(key));},[this](dialogue::StatKey key){return std::span<const std::uint8_t>(strings.at(stat_id(key)));}});
    }
};
void catalogue_domains(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned id=0;id<96;++id) {
        NativePair pair(assets);pair.context+=" stat="+std::to_string(id);FixtureValues values(pair,assets);
        pair.run({dialogue::SubstitutionAction::Stat,id},us?0xc19249:0xc1933c,false,id,id%11==0);
    }
    for(unsigned id=1;id<19;++id) {
        NativePair pair(assets);pair.context+=" name="+std::to_string(id);FixtureValues values(pair,assets);
        pair.run({dialogue::SubstitutionAction::CharacterName,id},us?0xc1931b:0xc1940d,false,id,true);
    }
    for(unsigned id:{0u,1u,2u,17u,85u,128u,252u,253u}) {
        NativePair pair(assets);pair.context+=" item="+std::to_string(id);
        pair.run({dialogue::SubstitutionAction::ItemName,id},us?0xc19216:0xc19309,false,id,true);
    }
    for(unsigned id:{1u,2u,4u,9u,17u,24u,35u,52u}) {
        NativePair pair(assets);pair.context+=" psi="+std::to_string(id);FixtureValues values(pair,assets);
        pair.run({dialogue::SubstitutionAction::PsiName,id},us?0xc1ca06:0xc1c810,false,id,true);
    }
}
void conversation_domains(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned wrap:{0u,1u})for(unsigned mode:{0u,1u}) {
        // Real stream parser and handlers; injected authored bytes only, no code
        // patch. Source pointers and native page locations are relocated once.
        std::vector<std::uint8_t> script;
        const auto emit=[&](std::initializer_list<unsigned> bytes){for(auto byte:bytes)script.push_back(byte);};
        emit({0x1c,0,mode?0x29u:0u,0x1c,1,mode?9u:0u,0x50});
        emit({0x1c,2,mode?2u:0u,1,0x0e,us?0x71u:0x41u,0x0d,1,0x1c,3,mode?(us?0x74u:0x44u):0u,0x0e,1,0x0d,1});
        emit({0x1c,5,mode?17u:0u,1,0x1c,6,mode?4u:0u,1});
        emit({0x1c,0x0a,mode?0x87u:0u,mode?0xd6u:0u,mode?0x12u:0u,0,1});
        emit({0x1c,0x0b,mode?0x39u:0u,mode?0x30u:0u,0,0,1,0x1c,0x12,mode?9u:0u});
        if(us && mode)emit({0x1c,2,0xff});
        emit({us?0x71u:0x41u,2});
        auto modified=assets;std::copy(script.begin(),script.end(),modified.image.begin()+0x2e8000);
        NativePair pair(modified);pair.context+=" DISPLAY font="+std::to_string(font)+" wrap="+std::to_string(wrap)+" mode="+std::to_string(mode);pair.font(font);FixtureValues values(pair,modified);
        pair.state.word_wrap=wrap;pair.source.put(us?0x9623:0x991b,wrap);
        pair.state.windows.at({1}).active.argument=1;pair.source.put32(pair.source.record()+27,1);
        pair.state.windows.at({1}).saved.working=2;pair.source.put32(pair.source.record()+33,2);
        auto program=std::make_shared<dialogue::Program>(assets.version,std::vector<dialogue::ContentBlock>{{1,0x8000,script}},std::vector<dialogue::Location>{{1,0x8000}});
        pair.source.at_service=[&](unsigned effect){pair.samples.push_back(original_sample(pair.source,effect));};
        pair.source.put32(0x1e0e,0xee8000);pair.source.call(us?0xc186b1:0xc18913,true);pair.source.at_service={};const auto final=original_sample(pair.source);
        const unsigned returned=pair.source.get32(0x1e06);require(returned==0xee8000+script.size(),pair.context+" original stream return differs");
        dialogue::Conversation conversation(program,pair.windows);conversation.start(dialogue::EntryId{0});unsigned index=0;
        for(unsigned n=0;n<100000;++n) {
            dialogue::Progress progress;try{progress=conversation.advance(1+n%11);}catch(const std::exception& e){throw std::runtime_error(pair.context+" "+e.what());}if(progress==dialogue::Progress::Finished)break;if(progress==dialogue::Progress::BudgetExhausted)continue;
            require(index<pair.samples.size(),pair.context+" extra whole-dialogue effect");const auto* effect=std::get_if<dialogue::TextEffect>(&*conversation.event());require(effect,"Whole dialogue left implemented service");
            require((effect->kind==dialogue::TextEffectKind::TextSound?pair.source.p.sound:pair.source.p.tick)==pair.samples[index].effect,pair.context+" whole-dialogue effect order differs");
            pair.compare(pair.samples[index],"DISPLAY effect "+std::to_string(index));++index;conversation.respond();
        }
        require(conversation.finished() && index==pair.samples.size(),pair.context+" incomplete whole dialogue");
        require(conversation.snapshot().returned_cursor==dialogue::Location{1,std::uint16_t(0x8000+script.size())},pair.context+" native stream return differs");
        require(pair.state.stream_slot==pair.source.get(us?0x97b8:0x9a6c),pair.context+" stream slot differs");
        pair.compare(final,"DISPLAY final");pair.compare_scene();totals.native_effects+=index;++totals.native_cases;
    }
}

void nested_domains(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned font=0;font<(us?5u:2u);++font)for(unsigned mode:{0u,1u,2u}) {
        NativePair pair(assets);pair.context+=" nested font="+std::to_string(font)+" mode="+std::to_string(mode);pair.font(font);
        pair.source.bus->work_ram[us?0x9622:0x991a]=0;pair.output.policy().instant=false;
        pair.source.put(us?0x9625:0x991d,1);pair.output.policy().text_speed=1;
        bool entered=false;
        std::vector<std::uint8_t> live{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),std::uint8_t(us?0x73:0x43),0};
        std::copy(live.begin(),live.end(),pair.source.bus->work_ram.begin()+0x5000);
        pair.source.at_service=[&](unsigned effect) {
            pair.samples.push_back(original_sample(pair.source,effect));
            if(effect==pair.source.p.tick && !entered) {
                entered=true;
                if(mode==2){pair.source.bus->work_ram[0x5001]=us?0x7a:0x4a;pair.source.bus->work_ram[0x5002]=0;}
                else pair.source.nested(pair.source.p.number,false,890);
            }
        };
        pair.source.put32(0x1e0e,mode==2?0x7e5000:1234567);
        pair.source.call(mode==2?pair.source.p.string:mode==1?pair.source.p.money:pair.source.p.number,mode==1&&us,mode==2?0xffff:0);
        pair.source.at_service={};require(entered,pair.context+" source did not reach callback");const auto final=original_sample(pair.source);
        auto operation=pair.windows.substitutions().begin({mode==2?dialogue::SubstitutionAction::String:mode==1?dialogue::SubstitutionAction::Money:dialogue::SubstitutionAction::Number,
            1234567,[&]{return std::span<const std::uint8_t>(live);},0xffff});
        unsigned index=0;entered=false;
        const auto consume=[&](dialogue::TextSubstitutions::Operation& current) {
            require(index<pair.samples.size(),pair.context+" extra nested effect");
            const auto pc=current.effect()->kind==dialogue::TextEffectKind::TextSound?pair.source.p.sound:pair.source.p.tick;
            require(pc==pair.samples[index].effect,pair.context+" nested effect order differs");pair.compare(pair.samples[index],"nested effect "+std::to_string(index));++index;return pc;
        };
        for(unsigned n=0;n<100000;++n) {
            const auto progress=operation->advance(7);if(progress==dialogue::Progress::Finished)break;if(progress==dialogue::Progress::BudgetExhausted)continue;
            const auto pc=consume(*operation);
            if(pc==pair.source.p.tick && !entered) {
                entered=true;
                if(mode==2){live[1]=us?0x7a:0x4a;live[2]=0;}
                else {
                    const auto saved_effect=operation->effect();
                    auto child=pair.windows.substitutions().begin_nested({dialogue::SubstitutionAction::Number,890},*operation);
                    for(unsigned step=0;step<100000;++step) {
                        const auto status=child->advance(5);if(status==dialogue::Progress::Finished)break;if(status==dialogue::Progress::BudgetExhausted)continue;
                        consume(*child);child->respond();
                    }
                    require(child->complete() && operation->effect()==saved_effect,pair.context+" child lost pending parent tick");
                }
            }
            operation->respond();
        }
        require(operation->complete() && entered && index==pair.samples.size(),pair.context+" nested operation incomplete");
        pair.compare(final,"nested final");pair.compare_scene();++totals.native_cases;totals.native_effects+=index;
    }
}

void unfocused_domains(const eb::GameAssets& assets) {
    if(assets.version!=eb::GameVersion::US)return;
    for(unsigned retired:{0u,1u})for(unsigned centered:{0u,1u}) {
        NativePair pair(assets);pair.context+=" unfocused retired="+std::to_string(retired)+" centered="+std::to_string(centered);
        if(retired) {
            pair.source.call(0xc3e521,true,1);auto close=pair.windows.begin({dialogue::WindowAction::CloseFocus});
            while(close->advance()==dialogue::OutputProgress::Suspended)close->respond();require(close->complete(),"Native initial close incomplete");
        }
        pair.source.put(pair.source.p.focus,0xffff);pair.state.focus.reset();pair.source.put(0x10000+pair.source.p.open-2,0);pair.state.unfocused_register_slot=0;
        pair.source.bus->work_ram[0x5e74]=centered;pair.windows.menu_state().center_next_string=centered;
        const std::vector<std::uint8_t> text{0x71,0x72,0x73,0};std::copy(text.begin(),text.end(),pair.source.bus->work_ram.begin()+0x5000);pair.source.put32(0x1e0e,0x7e5000);
        pair.run({centered?dialogue::SubstitutionAction::String:dialogue::SubstitutionAction::WrappedString,0,[&]{return std::span<const std::uint8_t>(text);},0xffff},centered?pair.source.p.string:0xc447fb,!centered,0xffff,true);
    }
}
void money_close_domains(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned font=0;font<(us?5u:2u);++font) {
        std::vector<std::uint8_t> script{0x1c,0x0b,0x39,0x30,0,0,2};auto modified=assets;std::copy(script.begin(),script.end(),modified.image.begin()+0x2e8000);
        NativePair pair(modified);pair.context+=" money nested close font="+std::to_string(font);pair.font(font);
        pair.source.bus->work_ram[us?0x9622:0x991a]=0;pair.output.policy().instant=false;pair.source.put(us?0x9625:0x991d,1);pair.output.policy().text_speed=1;
        pair.source.put(0x10000+pair.source.p.open-2,0);pair.state.unfocused_register_slot=0;
        bool closed=false, final_marker=false;unsigned close_at=0;
        pair.source.at_instruction=[&](unsigned pc){if(pc==pair.source.p.letter && pair.source.cpu.accumulator==0x24)final_marker=true;};
        pair.source.at_service=[&](unsigned effect) {
            pair.samples.push_back(original_sample(pair.source,effect));
            if(!closed && effect==pair.source.p.tick && (us || final_marker)) {closed=true;close_at=pair.samples.size();pair.source.nested(us?0xc3e521:0xc10141,us,0,1);}
        };
        pair.source.put32(0x1e0e,0xee8000);pair.source.call(us?0xc186b1:0xc18913,true);pair.source.at_service={};require(closed,pair.context+" original close callback absent");const auto final=original_sample(pair.source);
        auto program=std::make_shared<dialogue::Program>(assets.version,std::vector<dialogue::ContentBlock>{{1,0x8000,script}},std::vector<dialogue::Location>{{1,0x8000}});
        dialogue::Conversation conversation(program,pair.windows);conversation.start(dialogue::EntryId{0});unsigned index=0;closed=false;
        for(unsigned n=0;n<100000;++n) {
            dialogue::Progress progress;try{progress=conversation.advance(5);}catch(const std::exception& error){throw std::runtime_error(pair.context+" "+error.what());}
            if(progress==dialogue::Progress::Finished)break;if(progress==dialogue::Progress::BudgetExhausted)continue;
            require(index<pair.samples.size(),pair.context+" extra parent effect");const auto* effect=std::get_if<dialogue::TextEffect>(&*conversation.event());require(effect,"Money parent left text service");
            const auto pc=effect->kind==dialogue::TextEffectKind::TextSound?pair.source.p.sound:pair.source.p.tick;
            require(pc==pair.samples[index].effect,pair.context+" money parent effect order differs");pair.compare(pair.samples[index],"money close parent "+std::to_string(index));++index;
            if(!closed && pc==pair.source.p.tick && index==close_at) {
                closed=true;const auto saved=conversation.event();auto operation=pair.windows.begin_nested({dialogue::WindowAction::CloseFocus},conversation);
                while(operation->advance()==dialogue::OutputProgress::Suspended) {
                    require(operation->effect()->kind==dialogue::WindowEffectKind::WindowTick && index<pair.samples.size() && pair.samples[index].effect==pair.source.p.tick,pair.context+" close effect differs");
                    pair.compare(pair.samples[index],"money close child "+std::to_string(index));++index;operation->respond();
                }
                require(operation->complete() && conversation.event()==saved,pair.context+" close lost parent tick");
            }
            conversation.respond();
        }
        require(conversation.finished() && closed && index==pair.samples.size(),pair.context+" close dialogue incomplete");pair.compare(final,"money close final");pair.compare_scene();
        require(conversation.snapshot().returned_cursor==dialogue::Location{1,0x8007} && pair.source.get32(0x1e06)==0xee8007,pair.context+" closed-parent return cursor differs");
        ++totals.native_cases;totals.native_effects+=index;
    }
}

}
int main(int argc,char** argv) {
    try {
        if(argc<2){std::cout<<"SKIP substitution source reference: local packs required\n";return 77;}
        for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());numeric_domains(assets);string_domains(assets);padding_domains(assets);real_output_domains(assets);catalogue_domains(assets);conversation_domains(assets);nested_domains(assets);unfocused_domains(assets);money_close_domains(assets);}
        std::cout<<"PASS substitution reference: "<<totals.cases<<" cases, "<<totals.instructions<<" original instructions, "<<totals.writes<<" observed writes, "<<totals.glyphs<<" diagnostic glyphs; "<<totals.native_cases<<" native calls, "<<totals.native_effects<<" native effects, "<<totals.snapshots<<" state/image comparisons, "<<totals.pixels<<" indexed pixels, "<<totals.brush_pixels<<" brush pixels, "<<totals.ppu_pixels<<" actual PPU pixels, "<<totals.jp_acknowledgements<<" JP completed-DMA acknowledgements\n";
        std::cout<<"Scope: numeric-domain diagnostics use explicit glyph-entry seams, including malformed buffer-overwrite states. Native comparisons run real glyph/string/catalog handlers and complete DISPLAY_TEXT with cold original artwork. WindowTick, PLAY_SOUND and frame wait are explicit host seams; completed JP VWF DMA is acknowledged. JP nested close occurs only after its final glyph. No world scheduler or audible-audio proof.\n";return 0;
    }catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}
}
