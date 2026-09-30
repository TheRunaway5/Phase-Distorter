// Independent native dialogue-output oracle. Expected pixels come exclusively
// from original PRINT_LETTER / PRINT_NEWLINE / CC_12 writes to their real window
// tilemaps and VRAM. No production FontGlyph or native placement routine is
// used to produce an expected image.
//
// Local imported fonts are required. Original DECOMP initializes fixed artwork;
// real allocation, drawing, clear and scroll code executes instruction-by-
// instruction. PLAY_SOUND and WINDOW_TICK are explicit host-service seams: this
// fixture proves their ordered requests, not audio, input polling or wall time.
// Complete DISPLAY_TEXT cases additionally execute original US lookahead,
// glyph/newline/clear, flag/register handlers and nested calls. Pause, prompt,
// selection and selection cleanup are explicit outside-host seams. Windows are
// seeded content rectangles; creation, borders and flavor graphics are outside
// this fixture. Every compared canvas is sampled independently of logical work.
// Forced blank makes original COPY_TO_VRAM issue real immediate hardware DMA.
// JP still sets its completion semaphore afterwards; acknowledging that already
// completed transfer is another explicit seam, never a pixel-generation hook.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/output.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
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
namespace dialogue = eb::native::dialogue;
void require(bool ok, const std::string& message) {
    if (!ok) throw std::runtime_error(message);
}
struct Layout {
    unsigned print, newline, clear, decomp, reset, saturn_render, play_sound, window_tick;
    unsigned windows, record_size, focus, open, head, tail, instant, speed, blinking, sound, redraw;
    unsigned fraction, ring_tile, saturn_ring, saturn_active, dma_done, indent, last, padding, wrap;
};
Layout reference_layout(eb::GameVersion version) {
    // Labels independently verified from each regional linked earthbound.dbg;
    // field offsets: include/structs.asm::window_stats. Source routines are
    // src/text/{print_letter,print_newline,ccs/clear_line}{,-jp}.asm and their
    // original C1/C4 text helpers. These values are not native font metadata.
    if (version == eb::GameVersion::US)
        return {0xc10cb6,0xc438b1,0xc10bd3,0xc41a9e,0xc45e96,0xc45c90,0xc0abe0,0xc12dd5,
                0x8650,82,0x8958,0x88e4,0x88e0,0x88e2,0x9622,0x9625,0x964d,0x964f,0x9623,
                0x9e23,0x9e25,0x9e27,0x9e29,0x9e2b,0x5e75,0x5e76,0x5e6d,0x5e6e};
    return {0xc111ec,0xc11174,0xc111c9,0xc419ea,0xc43be8,0xc439e2,0xc0abbf,0xc13502,
            0x89c2,76,0x8c96,0x8c26,0x8c22,0x8c24,0x991a,0x991d,0x9945,0x9947,0x991b,
            0xa029,0xa02b,0xa02d,0xa02f,0xa031,0x61ed,0x61ee,0x61e5,0x61e6};
}
enum class Effect { Sound, Tick, Pause, Prompt, Selection, ResetMenu };
struct SourceFrame {
    unsigned width{}, height{};
    std::vector<std::uint8_t> pixels, priority;
};
struct Totals {
    std::uint64_t source_steps{}, comparisons{}, pixel_samples{}, nonzero_pixels{}, effects{}, dma_acknowledgements{}, ppu_pixels{};
    unsigned scenarios{}, conversations{}, host_requests{}, reentrant_parents{}, reentrant_children{}, restored_ticks{};
} totals;

class Oracle {
  public:
    eb::GameVersion version;
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned returning{};
    unsigned expected_stack=0x1fff, expected_direct_page=0x1e00;
    struct NestedCall {
        unsigned returning, expected_stack, expected_direct_page, caller_stack, caller_direct_page;
        bool interpreter;
        std::vector<std::uint8_t> caller_locals, caller_return_stack;
    };
    std::vector<NestedCall> nested_calls;
    bool busy{};
    std::optional<Effect> pending;
    bool interpreter{};
    unsigned request_count{};
    bool show_prompt{}, force_wait{};

    Oracle(std::span<const std::uint8_t> image, eb::GameVersion region)
        : version(region), p(reference_layout(region)), bus(std::make_unique<eb::SnesBus>(image, region)), cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = 0x1e00; cpu.data_bank = 0x7e; cpu.stack_pointer = 0x1fff;
        bus->work_ram[0x0d] = 0x80; // INIDISP_MIRROR: real immediate DMA path.
        put(p.head, 0); put(p.tail, 0); put(p.focus, 0);
        bus->work_ram[p.instant] = 1;
        // Fixed glyphs are bootstrapped by the real source decompressor. These
        // bytes are not taken from the new FontResources decoder.
        put32(0x1e0e, 0xe00000); put32(0x1e12, 0x7f0000);
        begin(p.decomp, true, 0); finish_without_effects();
        std::copy_n(bus->work_ram.begin() + 0x10000, 0x3800, bus->video_ram.begin() + 0xc000);
        if (version == eb::GameVersion::US) {
            // Real reserved-tile map, not a fixture copy of allocation logic.
            begin(0xc43f53, true, 0); finish_without_effects();
        }
        begin(p.reset, true, 0); finish_without_effects();
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram.at(at) = value; bus->work_ram.at(at + 1) = value >> 8;
    }
    unsigned get(unsigned at) const {
        return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8);
    }
    void put32(unsigned at, unsigned value) { put(at,value); put(at+2,value>>16); }
    unsigned record(unsigned id) const { return p.windows + id * p.record_size; }
    unsigned tilemap(unsigned id) const { return 0x6800 + id * 0x800; }
    void define_window(unsigned id, unsigned columns, unsigned tile_rows, unsigned font,
                       unsigned attributes = 0, unsigned x = 0, unsigned y = 0) {
        require(id < 2 && columns <= 28 && tile_rows <= 12, "Reference window fixture is out of bounds");
        const auto address = record(id);
        put(p.open + id * 2,id);
        put(address+4,id); put(address+10,columns); put(address+12,tile_rows);
        put(address+14,x); put(address+16,y); put(address+19,attributes); put(address+21,font);
        put(address+53,tilemap(id));
        for (unsigned i=0;i<columns*tile_rows;++i) put(tilemap(id)+i*2,64);
    }
    void focus(std::optional<unsigned> id) { put(p.focus,id ? *id : 0xffff); }
    void style(unsigned id, unsigned font, unsigned attributes) {
        put(record(id)+21,font); put(record(id)+19,attributes);
    }
    void cursor(unsigned id, unsigned x, unsigned y) {
        // Used only for seeded source states, not an imitation of SET_TEXT_XY.
        put(record(id)+14,x); put(record(id)+16,y);
    }
    void begin(unsigned entry, bool far, unsigned a, unsigned x=0, unsigned y=0) {
        require(!busy && !pending, "Original output call is still active");
        const auto trampoline=(entry&0xff0000)|0xff00;
        cpu.program_counter=trampoline; cpu.accumulator=a; cpu.x_index=x; cpu.y_index=y;
        cpu.status_register=eb::MainCpu65816::InterruptDisable;
        if(far) cpu.execute_instruction<0x22>(entry,4); else cpu.execute_instruction<0x20>(entry&0xffff,3);
        returning=trampoline+(far?4:3); busy=true;
    }
    std::optional<Effect> advance() {
        require(!pending,"Original output service must be acknowledged");
        for(unsigned steps=0;steps<3'000'000 && busy;++steps) {
            if(cpu.program_counter==returning && cpu.stack_pointer==expected_stack) {
                busy=false;
                require(cpu.direct_page==expected_direct_page && cpu.data_bank==0x7e,"Original output did not restore caller frame");
                break;
            }
            const auto pc=cpu.program_counter;
            if(pc==p.play_sound || pc==p.window_tick) {
                pending=pc==p.play_sound?Effect::Sound:Effect::Tick;
                return pending;
            }
            if(interpreter) {
                const bool us=version==eb::GameVersion::US;
                if(pc==(us?0xc100d6u:0xc102dcu)) {pending=Effect::Pause;request_count=cpu.accumulator;return pending;}
                if(pc==(us?0xc10166u:0xc1036bu)) {
                    pending=Effect::Prompt;show_prompt=cpu.accumulator!=0;force_wait=cpu.x_index!=0;return pending;
                }
                if(pc==(us?0xc1196au:0xc12109u)) {pending=Effect::Selection;request_count=cpu.accumulator;return pending;}
                if(pc==(us?0xc11383u:0xc119abu)) {pending=Effect::ResetMenu;return pending;}
            }
            // The source routines have a semaphore wait at the start of their
            // VWF helper. Forced blank has already completed every real DMA.
            if(version==eb::GameVersion::JP && (pc==p.saturn_render || pc==p.reset) && get(p.dma_done)) {
                put(p.dma_done,0); ++totals.dma_acknowledgements;
            }
            cpu.step_instruction(); ++totals.source_steps;
        }
        require(!busy,"Original text output did not return: "+cpu.describe_registers());
        return std::nullopt;
    }
    void respond(unsigned selection=2) {
        require(bool(pending),"No original output service pending");
        if(*pending==Effect::Selection)cpu.accumulator=selection;
        if(*pending==Effect::Sound || *pending==Effect::Tick)cpu.execute_instruction<0x6b>(0,1);
        else cpu.execute_instruction<0x60>(0,1);
        pending.reset(); ++totals.effects;
    }
    // A WindowTick service may call text again. This explicit host seam uses
    // the real compiler ABI from include/macros.asm: a separate 18-byte C
    // frame, with virtual registers at +0..13 and child script at +14..17.
    // The parent's JSL return stays on the hardware stack. None of its live
    // locals are used to pass child arguments or restored from a snapshot.
    void enter_nested(unsigned entry, bool far, unsigned argument, bool display_text) {
        require(busy && pending==Effect::Tick,"Nested source call needs a pending WindowTick");
        NestedCall call{returning,expected_stack,expected_direct_page,cpu.stack_pointer,cpu.direct_page,interpreter,{},{}};
        require(call.caller_direct_page>=0x1800 && call.caller_direct_page<0x1e00,
                "Nested source C frame is outside the fixture arena");
        call.caller_locals.assign(bus->work_ram.begin()+call.caller_direct_page,bus->work_ram.begin()+0x1e12);
        call.caller_return_stack.assign(bus->work_ram.begin()+call.caller_stack+1,bus->work_ram.begin()+0x2000);
        nested_calls.push_back(std::move(call));
        pending.reset();
        cpu.execute_instruction<0xc2>(0x31,2); // BEGIN_C_FUNCTION_FAR: 16-bit A/X, carry clear.
        cpu.execute_instruction<0x0b>(0,1);   // PHD
        cpu.execute_instruction<0x7b>(0,1);   // TDC
        cpu.execute_instruction<0x69>(0xffee,3); // ADC #-18 (separate direct-page C stack)
        cpu.execute_instruction<0x5b>(0,1);   // TCD
        expected_stack=cpu.stack_pointer;expected_direct_page=cpu.direct_page;
        if(display_text)put32(cpu.direct_page+14,argument);
        cpu.accumulator=display_text?0:argument;
        cpu.program_counter=(entry&0xff0000)|0xff80;
        returning=cpu.program_counter+(far?4:3);
        if(far)cpu.execute_instruction<0x22>(entry,4);
        else cpu.execute_instruction<0x20>(entry&0xffff,3);
        interpreter=display_text;
    }
    unsigned leave_nested() {
        require(!busy && !pending && !nested_calls.empty(),"Nested source child has not returned");
        const auto returned=get(cpu.direct_page+6)|(get(cpu.direct_page+8)<<16);
        const auto call=std::move(nested_calls.back());nested_calls.pop_back();
        cpu.execute_instruction<0x2b>(0,1); // END_C_FUNCTION: PLD; parent's tick RTL remains pending.
        require(cpu.direct_page==call.caller_direct_page && cpu.stack_pointer==call.caller_stack,
                "Nested source child changed its parent's C/hardware stacks");
        require(std::equal(call.caller_locals.begin(),call.caller_locals.end(),bus->work_ram.begin()+call.caller_direct_page),
                "Nested source child overwrote live parent direct-page locals");
        require(std::equal(call.caller_return_stack.begin(),call.caller_return_stack.end(),bus->work_ram.begin()+call.caller_stack+1),
                "Nested source child overwrote its parent's return stack");
        returning=call.returning;expected_stack=call.expected_stack;expected_direct_page=call.expected_direct_page;
        interpreter=call.interpreter;cpu.program_counter=p.window_tick;busy=true;pending=Effect::Tick;
        return returned;
    }
    void finish_without_effects() { require(!advance(),"Unexpected service during source initialization"); }
    void print(unsigned code) { begin(p.print,false,code); }
    void newline() { begin(p.newline,version==eb::GameVersion::US,0); }
    void clear() { begin(p.clear,false,0); }
    SourceFrame frame(unsigned id) const {
        const auto address=record(id), columns=get(address+10), rows=get(address+12);
        SourceFrame frame{columns*8,rows*8};
        frame.pixels.resize(frame.width*frame.height); frame.priority.resize(frame.pixels.size());
        for(unsigned y=0;y<frame.height;++y) for(unsigned x=0;x<frame.width;++x) {
            const auto descriptor=get(tilemap(id)+((y/8)*columns+x/8)*2);
            const auto gx=(descriptor&0x4000)?7-x%8:x%8, gy=(descriptor&0x8000)?7-y%8:y%8;
            const auto at=(0xc000+(descriptor&1023)*16+gy*2)&65535;
            const unsigned color=((bus->video_ram[at]>>(7-gx))&1)|(((bus->video_ram[(at+1)&65535]>>(7-gx))&1)<<1);
            const auto index=y*frame.width+x;
            frame.pixels[index]=color ? color+((descriptor>>10)&7)*4 : 0;
            frame.priority[index]=color ? bool(descriptor&0x2000) : 0;
        }
        return frame;
    }
};

unsigned attributes(dialogue::TextStyle style) {
    return (unsigned(style.palette)<<10)|(style.priority?0x2000:0)|
           (style.flip_horizontal?0x4000:0)|(style.flip_vertical?0x8000:0);
}
void compare_output(const dialogue::State& state, const dialogue::TextOutput& native, Oracle& source,
                    const std::string& label, unsigned operations) {
        const auto context=label+" operation="+std::to_string(operations)+" source="+source.cpu.describe_registers();
        for(const auto& [id,registers]:state.windows) {
            (void)registers;
            const auto& window=native.window(id);
            require(window.cursor.column==source.get(source.record(id.value)+14) &&
                    window.cursor.line==source.get(source.record(id.value)+16),context+" cursor mismatch native="+
                    std::to_string(window.cursor.column)+","+std::to_string(window.cursor.line)+" source="+
                    std::to_string(source.get(source.record(id.value)+14))+","+std::to_string(source.get(source.record(id.value)+16)));
            const auto expected=source.frame(id.value); const auto actual=native.frame(id);
            require(actual->width==expected.width && actual->height==expected.height,context+" frame geometry mismatch");
            require(actual->pixels.size()==expected.pixels.size() && actual->priority.size()==expected.priority.size(),context+" frame planes mismatch");
            for(unsigned i=0;i<expected.pixels.size();++i) {
                if(actual->pixels[i]!=expected.pixels[i] || actual->priority[i]!=expected.priority[i])
                    throw std::runtime_error(context+" window="+std::to_string(id.value)+" pixel="+std::to_string(i%expected.width)+","+
                        std::to_string(i/expected.width)+" native="+std::to_string(actual->pixels[i])+"/"+std::to_string(actual->priority[i])+
                        " source="+std::to_string(expected.pixels[i])+"/"+std::to_string(expected.priority[i]));
                totals.nonzero_pixels+=(expected.pixels[i]&3)!=3 && (expected.pixels[i]&3)!=0;
            }
            totals.pixel_samples+=expected.pixels.size();
        }
        require(native.fractional_offset()==(source.get(source.p.fraction)&7),context+" shared fractional cursor mismatch");
        require(native.indent_pending()==bool(source.bus->work_ram[source.p.indent]),context+" shared indentation mismatch");
        require(native.last_character()==source.bus->work_ram[source.p.last],context+" last character mismatch");
        require(native.saturn_composition_active()==bool(source.get(source.p.saturn_active)),context+" shared Saturn activity mismatch");
        require(native.redraw_pending()==bool(source.bus->work_ram[source.p.redraw]),context+" redraw state mismatch");
        ++totals.comparisons;
    
}

class Pair {
  public:
    dialogue::State state;
    dialogue::TextOutput native;
    Oracle source;
    std::string label;
    unsigned operations{};
    Pair(const eb::GameAssets& assets, std::shared_ptr<const dialogue::FontResources> fonts,
         unsigned font, unsigned columns, unsigned rows, std::string description)
        : native(std::move(fonts),state), source(assets.image,assets.version), label(std::move(description)) {
        state.windows.emplace(dialogue::WindowId{0},dialogue::WindowState{});
        state.focus=dialogue::WindowId{0};
        dialogue::TextStyle style; style.font=font; style.priority=false;
        native.define_window({0},{std::uint16_t(columns),std::uint16_t(rows)},style);
        source.define_window(0,columns,rows,font,attributes(style));
        compare(); ++totals.scenarios;
    }
    void compare() {compare_output(state,native,source,label,operations);}
    void policy(dialogue::PrintPolicy policy) {
        native.policy()=policy;
        source.bus->work_ram[source.p.instant]=policy.instant;
        source.bus->work_ram[source.p.padding]=policy.character_padding;
        source.put(source.p.speed,policy.text_speed); source.put(source.p.sound,policy.sound_mode);
        source.put(source.p.blinking,policy.prompt_mode);
        if(source.version==eb::GameVersion::US) source.bus->work_ram[0xb49d]=policy.allow_overflow;
    }
    void change_style(unsigned id, dialogue::TextStyle style) {
        native.set_style({id},style); source.style(id,style.font,attributes(style));
    }
    void focus(std::optional<unsigned> id) {
        state.focus=id?std::optional(dialogue::WindowId{*id}):std::nullopt; source.focus(id);
    }
    void add_window(unsigned id, unsigned font=0) {
        state.windows.emplace(dialogue::WindowId{id},dialogue::WindowState{});
        dialogue::TextStyle style; style.font=font; style.priority=false;
        native.define_window({id},{12,6},style); source.define_window(id,12,6,font);
        source.put(source.p.tail,id); compare();
    }
    void position(unsigned column, unsigned line, unsigned offset=0) {
        require(bool(state.focus),"Cannot set source fixture cursor without a window");
        native.set_cursor(*state.focus,{std::uint16_t(column),std::uint16_t(line)},offset);
        if(source.version==eb::GameVersion::US) source.begin(0xc43d75,true,column*8+offset,line);
        else { require(offset==0,"JP fixture has no pixel cursor service"); source.begin(0xc11169,false,column,line); }
        source.finish_without_effects(); compare();
    }
    void request(dialogue::RequestKind kind,unsigned value=0, bool alter_after_first_tick=false) {
        dialogue::Request request; request.kind=kind; request.glyph=value;
        native.begin(request);
        if(kind==dialogue::RequestKind::Glyph) source.print(value);
        else if(kind==dialogue::RequestKind::Newline) source.newline();
        else if(kind==dialogue::RequestKind::ClearLine) source.clear();
        else throw std::runtime_error("Unsupported oracle request");
        unsigned effects=0;
        while(true) {
            const auto expected=source.advance(); const auto progress=native.advance();
            require((progress==dialogue::OutputProgress::Suspended)==bool(expected),label+" effect count mismatch at glyph="+std::to_string(value));
            compare();
            if(!expected) break;
            const auto actual=native.effect(); require(bool(actual),label+" native suspended without effect");
            require((actual->kind==dialogue::TextEffectKind::TextSound)==(*expected==Effect::Sound),label+" effect order mismatch");
            require(native.advance()==dialogue::OutputProgress::Suspended && native.effect()==actual,label+" pending native effect changed");
            if(alter_after_first_tick && *expected==Effect::Tick && effects==1) {
                auto next=native.policy(); next.instant=true; policy(next);
            }
            source.respond(); native.respond(); ++effects;
        }
        require(native.complete(),label+" native output did not complete");
        ++operations;
    }
    void compare_ppu(unsigned id=0) {
        // This PPU receives only original VRAM and original window descriptors.
        // Synthetic distinct palette colors isolate palette/index registration;
        // native artwork is used solely on the actual-result side of comparison.
        eb::SnesBus display(std::span(eb::rom_data(source.version),eb::rom_size(source.version)),source.version);
        display.video_ram=source.bus->video_ram;
        const unsigned columns=source.get(source.record(id)+10),rows=source.get(source.record(id)+12);
        for(unsigned y=0;y<rows;++y)for(unsigned x=0;x<columns;++x) {
            const auto value=source.get(source.tilemap(id)+(y*columns+x)*2);
            display.video_ram[0xa000+(y*32+x)*2]=value;
            display.video_ram[0xa001+(y*32+x)*2]=value>>8;
        }
        std::array<unsigned,32> colors{};
        for(unsigned i=0;i<colors.size();++i) {
            colors[i]=i|(((i*7)&31)<<5)|(((i*13)&31)<<10);
            display.palette_ram[i*2]=colors[i];display.palette_ram[i*2+1]=colors[i]>>8;
        }
        display.write_byte(0x2100,15);display.write_byte(0x2105,1);
        display.write_byte(0x2109,0x50);display.write_byte(0x210c,6);display.write_byte(0x212c,4);
        display.write_byte(0x2112,0xff);display.write_byte(0x2112,0xff);
        while(display.completed_frames<2)display.advance_cpu_cycles(1000);
        const auto actual=native.frame({id});
        for(unsigned y=0;y<actual->height;++y)for(unsigned x=0;x<actual->width;++x) {
            const unsigned color=colors.at(actual->pixels[y*actual->width+x]);
            const auto expand=[](unsigned channel){return(channel<<3)|(channel>>2);};
            const auto rgb=0xff000000u|(expand(color&31)<<16)|(expand((color>>5)&31)<<8)|expand((color>>10)&31);
            require(display.native_framebuffer[y*256+x]==rgb,label+" actual source PPU pixel differs at "+std::to_string(x)+","+std::to_string(y));
            ++totals.ppu_pixels;
        }
    }
    void print(unsigned value) { request(dialogue::RequestKind::Glyph,value); }
    void newline() { request(dialogue::RequestKind::Newline); }
    void clear() { request(dialogue::RequestKind::ClearLine); }
};


struct ScriptFixture {
    static constexpr unsigned first=0x8000, child=0x9000;
    std::vector<std::uint8_t> bytes=std::vector<std::uint8_t>(0x1200);
    unsigned at=first;
    void emit(std::initializer_list<unsigned> values) {for(auto value:values)bytes.at(at++-first)=value;}
    void target(unsigned command,unsigned offset) {emit({command,offset&255,offset>>8,0xee,0});}
    std::shared_ptr<const dialogue::Program> program(eb::GameVersion version) const {
        return std::make_shared<dialogue::Program>(version,
            std::vector<dialogue::ContentBlock>{{1,first,bytes}},
            std::vector<dialogue::Location>{{1,first}},std::vector<dialogue::ReferenceBinding>{},
            std::vector<dialogue::Location>{},
            std::vector<dialogue::ReferenceRange>{{{0,0x80,0xee,0},{1,first},unsigned(bytes.size())}});
    }
    std::vector<std::uint8_t> image(std::span<const std::uint8_t> original) const {
        std::vector<std::uint8_t> image(original.begin(),original.end());
        std::copy(bytes.begin(),bytes.end(),image.begin()+0x2e8000);return image;
    }
};
std::optional<dialogue::Location> source_location(unsigned pointer) {
    if(!pointer)return std::nullopt;
    require((pointer>>16)==0xee,"Original DISPLAY_TEXT cursor escaped synthetic authored content");
    return dialogue::Location{1,std::uint16_t(pointer)};
}
unsigned get32(const Oracle& source,unsigned address) {return source.get(address)|(source.get(address+2)<<16);}
void compare_interpreter(const Oracle& source,const dialogue::State& state,const std::string& label) {
    const bool us=source.version==eb::GameVersion::US;
    const unsigned backup=us?0x97cc:0x9a80,flags=us?0x9c08:0x9eb3;
    for(const auto& [id,window]:state.windows) {
        const auto base=source.record(id.value);
        require(get32(source,base+23)==window.active.working && get32(source,base+27)==window.active.argument &&
                source.get(base+31)==window.active.secondary && get32(source,base+33)==window.saved.working &&
                get32(source,base+37)==window.saved.argument && source.get(base+41)==window.saved.secondary,
                label+" pipeline window register mismatch");
    }
    require(get32(source,backup)==state.backup.working && get32(source,backup+4)==state.backup.argument &&
            source.bus->work_ram[backup+8]==state.backup.secondary,label+" pipeline backup mismatch");
    require(std::equal(state.event_flags.begin(),state.event_flags.end(),source.bus->work_ram.begin()+flags),label+" pipeline flags mismatch");
    require(source.get(us?0x97b8:0x9a6c)==state.stream_slot,label+" pipeline stream counter mismatch");
    require(source.get(us?0x97d5:0x9a89)==state.subroutine_table_remaining,label+" pipeline computed call offset mismatch");
    if(us)require(source.get(0x9660)==state.upcoming_word_length,label+" pipeline shared upcoming-word count mismatch");
    for(unsigned i=0;i<10;++i)
        require(source_location(get32(source,(us?0x96aa:0x995e)+i*27))==state.streams[i].cursor,
                label+" pipeline cursor mismatch at slot="+std::to_string(i));
}
void conversation_case(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts,
                       unsigned font,bool wrap,bool instant,bool mutate) {
    const bool us=assets.version==eb::GameVersion::US;
    ScriptFixture script;
    script.emit({4,9,0,7,9,0,0x0d,0,0x1b,5,0x0e,255,0x0f,0x1b,6});
    // Literal words interleaved with zero-duration host requests expose every
    // visible word. Original lookahead, glyph output and newline remain real.
    for(unsigned word=0;word<18;++word) {
        const unsigned count=2+word%7;
        for(unsigned letter=0;letter<count;++letter)script.emit({us?0x71+(word+letter)%20:0x60+(word+letter)%32});
        script.emit({0x10,0,us?0x50u:0x20u});
        if(word%5==2)script.target(8,ScriptFixture::child);
        if(word==5)script.emit({1});
        if(word==9)script.emit({0,0x12,0x10,1});
    }
    script.emit({3,0x13,0x14,0x11,0x1b,0,0x0e,7,0x1b,1,5,9,0,0x12,0x10,0,us?0x71u:0x41u,2});
    script.at=ScriptFixture::child;script.emit({0x0f,us?0x79u:0x69u,us?0x7au:0x6au,0x10,0,2});
    auto image=script.image(assets.image);Oracle source(image,assets.version);
    dialogue::State state;state.focus=dialogue::WindowId{0};state.word_wrap=wrap;
    state.windows.emplace(dialogue::WindowId{0},dialogue::WindowState{});
    state.windows.emplace(dialogue::WindowId{1},dialogue::WindowState{});
    dialogue::TextOutput output(fonts,state);
    dialogue::Conversation conversation(script.program(assets.version),state,output);
    dialogue::TextStyle style;style.font=font;style.priority=false;
    for(unsigned id=0;id<2;++id) {
        output.define_window({id},{12,6},style);source.define_window(id,12,6,font);
        state.windows.at({id}).active={0x12340001u+id,0xfefedc80u+id,0xfffe};
        const auto base=source.record(id);source.put32(base+23,state.windows.at({id}).active.working);
        source.put32(base+27,state.windows.at({id}).active.argument);source.put(base+31,state.windows.at({id}).active.secondary);
    }
    source.put(source.p.tail,1);source.put(source.p.wrap,wrap);source.bus->work_ram[source.p.instant]=instant;
    output.policy().instant=instant;output.policy().sound_mode=2;source.put(source.p.sound,2);
    output.policy().text_speed=1;source.put(source.p.speed,1);
    const std::string label=std::string(us?"US":"JP")+" Conversation font="+std::to_string(font)+" wrap="+
        std::to_string(wrap)+" instant="+std::to_string(instant)+" mutate="+std::to_string(mutate);
    source.interpreter=true;source.put32(0x1e0e,0xee8000);source.begin(us?0xc186b1:0xc18913,true,0);
    conversation.start(dialogue::EntryId{0});
    unsigned events=0,pauses=0;bool changed_focus=false;
    for(unsigned budget_steps=0;budget_steps<1000000;++budget_steps) {
        const auto progress=conversation.advance(1+(budget_steps%7));
        if(progress==dialogue::Progress::BudgetExhausted)continue;
        const auto expected=source.advance();
        compare_output(state,output,source,label,events);compare_interpreter(source,state,label);
        if(progress==dialogue::Progress::Finished) {
            require(!expected && !source.busy,label+" native finished before original DISPLAY_TEXT");
            require(conversation.snapshot().returned_cursor==source_location(get32(source,0x1e06)),label+" returned script cursor mismatch");
            ++totals.conversations;return;
        }
        require(expected && conversation.event(),label+" missing host event");
        const auto event=*conversation.event();
        if(*expected==Effect::Sound || *expected==Effect::Tick) {
            const auto* text=std::get_if<dialogue::TextEffect>(&event);
            require(text && ((text->kind==dialogue::TextEffectKind::TextSound)==(*expected==Effect::Sound)),label+" output event order mismatch");
            if(mutate && !changed_focus && *expected==Effect::Tick) {
                state.focus=dialogue::WindowId{1};source.focus(1);changed_focus=true;
                output.policy().instant=true;source.bus->work_ram[source.p.instant]=1;
            }
        } else {
            const auto* request=std::get_if<dialogue::Request>(&event);
            require(request,label+" missing external UI service request");
            if(*expected==Effect::Pause) {
                require(request->kind==dialogue::RequestKind::Pause && request->count==source.request_count,label+" pause arguments differ");
                if(mutate && ++pauses==3) {state.focus=dialogue::WindowId{0};source.focus(0);output.policy().instant=false;source.bus->work_ram[source.p.instant]=0;}
            } else if(*expected==Effect::Prompt)
                require(request->kind==dialogue::RequestKind::Prompt && request->show_prompt==source.show_prompt &&
                        request->force_wait==source.force_wait,label+" prompt arguments differ");
            else if(*expected==Effect::Selection)
                require(request->kind==dialogue::RequestKind::Selection && request->count==source.request_count,label+" selection arguments differ");
            else require(request->kind==dialogue::RequestKind::ResetMenu,label+" post-selection cleanup differs");
            ++totals.host_requests;
        }
        require(conversation.advance(1)==dialogue::Progress::Suspended && conversation.event()==event,label+" unacknowledged host event changed");
        conversation.respond({2});source.respond(2);++events;
    }
    throw std::runtime_error(label+" bounded native conversation did not finish");
}
void conversation_corpus(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts) {
    for(unsigned font=0;font<(assets.version==eb::GameVersion::US?5u:2u);++font)
        for(bool wrap:{false,true})for(bool instant:{false,true})conversation_case(assets,fonts,font,wrap,instant,false);
    conversation_case(assets,fonts,0,true,false,true);
}

// A host WindowTick callback calls another complete DISPLAY_TEXT while its
// caller is suspended inside PRINT_LETTER (or the US special glyph's inner
// footer). Both source and native children share composition/window state.
// Only their local continuation and pending return belong to the invocation.
void reentrant_conversation_case(const eb::GameAssets& assets,
                                 const std::shared_ptr<const dialogue::FontResources>& fonts,
                                 unsigned parent_font,unsigned parent_glyph,bool other_window,bool finish_instant) {
    const bool us=assets.version==eb::GameVersion::US;
    ScriptFixture script;
    // Exceed both regional image-history periods before changing font. The
    // child/grandchild also exceed them while live parent canvases are kept.
    for(unsigned i=0;i<180;++i)script.emit({us?0x77u:0x41u});
    script.emit({0x10,0,parent_glyph});
    for(unsigned i=0;i<35;++i)script.emit({us?0x71+i%26:0x60+i%32});
    script.emit({0x10,0,0x12,us?0x7au:0x7bu,2});
    for(unsigned depth=1;depth<=2;++depth) {
        script.at=ScriptFixture::child+(depth-1)*0x100;
        script.emit({0x0f,4,11+depth,0});
        for(unsigned i=0;i<96;++i)script.emit({us?0x71+(i+depth)%26:0x60+(i+depth)%32});
        script.emit({1,0x10,0,us?0x2fu:0x73u,2});
    }
    auto image=script.image(assets.image);Oracle source(image,assets.version);
    dialogue::State state;state.focus=dialogue::WindowId{0};
    dialogue::TextOutput output(fonts,state);
    for(unsigned id=0;id<2;++id) {
        state.windows.emplace(dialogue::WindowId{id},dialogue::WindowState{});
        dialogue::TextStyle style;style.priority=false;
        output.define_window({id},{12,6},style);source.define_window(id,12,6,0);
    }
    source.put(source.p.tail,1);
    const auto focus=[&](unsigned id) {state.focus=dialogue::WindowId{id};source.focus(id);};
    const auto style=[&](unsigned id,unsigned font,unsigned palette=0) {
        dialogue::TextStyle value;value.font=font;value.palette=palette;value.priority=palette!=0;
        value.flip_horizontal=palette==3;
        output.set_style({id},value);source.style(id,font,attributes(value));
    };
    const auto policy=[&](bool instant,unsigned speed) {
        output.policy().instant=instant;output.policy().text_speed=speed;output.policy().sound_mode=2;
        source.bus->work_ram[source.p.instant]=instant;source.put(source.p.speed,speed);source.put(source.p.sound,2);
    };
    policy(true,2);
    auto program=script.program(assets.version);
    dialogue::Conversation parent(program,state,output);
    const std::string label=std::string(us?"US":"JP")+" nested output parent_font="+std::to_string(parent_font)+
        " glyph="+std::to_string(parent_glyph)+" other_window="+std::to_string(other_window)+
        " final_instant="+std::to_string(finish_instant);
    source.interpreter=true;source.put32(0x1e0e,0xee8000);source.begin(us?0xc186b1:0xc18913,true,0);
    parent.start(dialogue::EntryId{0});
    std::array<unsigned,3> events{},ticks{},pauses{};
    std::array<bool,2> inserted{};
    std::function<void(dialogue::Conversation&,unsigned)> drive;
    drive=[&](dialogue::Conversation& conversation,unsigned depth) {
        for(unsigned turns=0;turns<100000;++turns) {
            const auto progress=conversation.advance(1+turns%7);
            if(progress==dialogue::Progress::BudgetExhausted)continue;
            const auto expected=source.advance();
            const auto context=label+" depth="+std::to_string(depth)+" event="+std::to_string(events[depth]);
            compare_output(state,output,source,context,events[depth]);compare_interpreter(source,state,context);
            if(progress==dialogue::Progress::Finished) {
                require(!expected && !source.busy,context+" native child finished before original");
                require(conversation.snapshot().returned_cursor==source_location(get32(source,source.expected_direct_page+6)),
                        context+" returned child cursor differs");
                if(depth<2)require(inserted[depth],context+" did not execute its nested WindowTick callback");
                return;
            }
            require(expected && conversation.event(),context+" host event absent");
            const auto event=*conversation.event();
            if(*expected==Effect::Sound || *expected==Effect::Tick) {
                const auto* effect=std::get_if<dialogue::TextEffect>(&event);
                require(effect && ((effect->kind==dialogue::TextEffectKind::TextSound)==(*expected==Effect::Sound)),
                        context+" nested sound/tick order differs");
                if(*expected==Effect::Tick) {
                    ++ticks[depth];
                    if(depth<2 && !inserted[depth]) {
                        inserted[depth]=true;
                        const auto held=output.frame({0});const auto held_pixels=held->pixels;const auto held_priority=held->priority;
                        if(depth==0) {
                            focus(other_window?1:0);style(other_window?1:0,us?3:1-parent_font,2);policy(false,0);
                        } else {
                            focus(0);style(0,us?4:1,3);policy(true,0);
                        }
                        dialogue::Conversation child(program,state,output);
                        const unsigned entry=ScriptFixture::child+depth*0x100;
                        source.enter_nested(us?0xc186b1:0xc18913,true,0xee0000|entry,true);
                        child.start_nested(dialogue::Location{1,std::uint16_t(entry)},conversation);
                        drive(child,depth+1);
                        const auto returned=source.leave_nested();
                        require(child.snapshot().returned_cursor==source_location(returned),context+" nested source ABI return differs");
                        require(conversation.event()==event && conversation.advance(1)==dialogue::Progress::Suspended,
                                context+" child's completion acknowledged or replaced the parent tick");
                        require(held->pixels==held_pixels && held->priority==held_priority,
                                context+" child modified a previously sampled immutable frame");
                        compare_output(state,output,source,context+" restored parent",events[depth]);
                        compare_interpreter(source,state,context+" restored parent");
                        ++totals.reentrant_children;++totals.restored_ticks;
                    }
                }
            } else {
                const auto* request=std::get_if<dialogue::Request>(&event);
                require(*expected==Effect::Pause && request && request->kind==dialogue::RequestKind::Pause &&
                        request->count==source.request_count,context+" nested pause arguments differ");
                ++pauses[depth];++totals.host_requests;
                if(depth==0 && pauses[depth]==1) {
                    style(0,parent_font);policy(false,2);
                } else if(depth==2) {
                    // The suspended parent already captured three ticks and
                    // the child one tick. Their countdowns must survive this
                    // live policy change without rolling back shared state.
                    policy(finish_instant,0);focus(other_window?1:0);
                }
            }
            require(conversation.advance(1)==dialogue::Progress::Suspended && conversation.event()==event,
                    context+" pending nested host event changed");
            conversation.respond();source.respond();++events[depth];
        }
        throw std::runtime_error(label+" nested conversation did not finish");
    };
    drive(parent,0);
    require(ticks[0]>=3 && ticks[1]>=1,label+" captured caller countdown was not exercised");
    require(source.nested_calls.empty() && source.cpu.stack_pointer==0x1fff && source.cpu.direct_page==0x1e00,
            label+" whole nested tree did not return to its original caller");
    ++totals.reentrant_parents;
}
void reentrant_conversation_corpus(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts) {
    const bool us=assets.version==eb::GameVersion::US;
    const auto modes=us?std::vector<std::pair<unsigned,unsigned>>{{0,0x77},{0,0x2f},{3,0x22}}:
                       std::vector<std::pair<unsigned,unsigned>>{{0,0x41},{1,0x73}};
    for(auto [font,glyph]:modes)for(bool other_window:{false,true})for(bool finish_instant:{false,true})
        reentrant_conversation_case(assets,fonts,font,glyph,other_window,finish_instant);
}

void all_glyphs(const eb::GameAssets& assets, const std::shared_ptr<const dialogue::FontResources>& fonts) {
    const bool us=assets.version==eb::GameVersion::US;
    for(unsigned font=0;font<(us?5u:2u);++font) {
        Pair pair(assets,fonts,font,28,8,(us?"US":"JP")+std::string(" full font ")+std::to_string(font));
        if(us) {
            for(unsigned code=0x50;code<0xb0;++code) pair.print(code);
            for(unsigned code=0xd0;code<=0xff;++code) pair.print(code);
            for(unsigned code:{0x20,0x22,0x2f})pair.print(code);
        } else {
            for(unsigned code=0x10;code<=0xff;++code) pair.print(code);
        }
        pair.compare_ppu();pair.newline();pair.clear();pair.compare();
    }
}
void layout_edges(const eb::GameAssets& assets, const std::shared_ptr<const dialogue::FontResources>& fonts) {
    const bool us=assets.version==eb::GameVersion::US;
    Pair pair(assets,fonts,0,12,6,(us?"US":"JP")+std::string(" wrap/scroll/focus"));
    for(unsigned i=0;i<150;++i) pair.print(us?0x71:0x41);
    pair.position(12,2); pair.print(us?0x7d:0x42); pair.clear(); pair.newline();
    pair.position(0,0);
    for(unsigned attributes_case=0;attributes_case<8;++attributes_case) {
        dialogue::TextStyle style; style.palette=attributes_case;style.priority=attributes_case&1;
        style.flip_horizontal=attributes_case&2;style.flip_vertical=attributes_case&4;
        pair.change_style(0,style);
        pair.print(us?0x73:0x43); pair.print(0x22);
    }
    pair.add_window(1,us?1:0); pair.focus(1);pair.print(us?0x75:0x45);
    pair.focus(0);pair.print(us?0x76:0x46);pair.newline();
    pair.native.bring_to_front({0});pair.source.put(pair.source.p.tail,0);pair.print(us?0x77:0x47);
    pair.compare_ppu(0);pair.compare_ppu(1);
    if(us) {
        pair.focus(std::nullopt);pair.print(0x71);pair.newline();pair.focus(0);
        for(unsigned offset=1;offset<8;++offset) {pair.position(0,1,offset);pair.print(0x78);pair.clear();}
        pair.state.word_wrap=true;pair.source.put(pair.source.p.wrap,1);
        pair.position(12,0);pair.print(0x71);pair.print(0x50);pair.print(0x90);pair.print(0x51);
    }
}
void font_switches(const eb::GameAssets& assets, const std::shared_ptr<const dialogue::FontResources>& fonts) {
    const bool us=assets.version==eb::GameVersion::US;
    Pair pair(assets,fonts,0,28,8,(us?"US":"JP")+std::string(" shared font composition"));
    // More than52columns forces source USscratch reuse. Tiny touches only the
    // upper8rows, so a correct owner must not silently erase a live lower half.
    for(unsigned i=0;i<180;++i)pair.print(us?0x77:0x41);
    for(unsigned font:us?std::vector<unsigned>{3,0,3,4,2,1,3,0}:std::vector<unsigned>{1,0,1,0}) {
        dialogue::TextStyle style;style.font=font;style.priority=false;pair.change_style(0,style);
        for(unsigned i=0;i<80;++i)pair.print(us?0x71+i%26:0x60+i%48);
        pair.newline();pair.print(us?0x76:0x73);pair.clear();
    }
}
void padding_and_boundaries(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts) {
    const bool us=assets.version==eb::GameVersion::US;
    Pair pair(assets,fonts,0,28,8,(us?"US":"JP")+std::string(" padding and exact boundaries"));
    for(unsigned font=0;font<(us?5u:2u);++font) {
        dialogue::TextStyle style;style.font=font;style.priority=false;pair.change_style(0,style);
        for(unsigned padding:{0u,1u,3u,7u,8u,15u,255u}) {
            auto policy=pair.native.policy();policy.character_padding=padding;pair.policy(policy);
            pair.position(0,0);pair.print(us?0xafu:0x7bu);pair.print(us?0x71u:0x73u);
            pair.newline();pair.print(us?0x80u:0x75u);pair.clear();
        }
    }
    dialogue::TextStyle style;style.priority=false;style.font=us?0:0xffff;pair.change_style(0,style);
    for(unsigned prompt:{0u,1u,2u}) {
        auto policy=pair.native.policy();policy.character_padding=0;policy.prompt_mode=prompt;pair.policy(policy);
        pair.position(0,0);pair.print(0x20);pair.print(us?0x71:0x73);pair.print(0x22);
    }
    if(us)for(bool overflow:{false,true}) {
        auto policy=pair.native.policy();policy.prompt_mode=0;policy.allow_overflow=overflow;pair.policy(policy);
        pair.position(28,3);pair.print(0x7d);pair.print(0x7e);pair.print(0x7f);pair.clear();
    }
    pair.compare_ppu();
}
void cadence(const eb::GameAssets& assets,const std::shared_ptr<const dialogue::FontResources>& fonts) {
    const bool us=assets.version==eb::GameVersion::US;
    Pair pair(assets,fonts,0,28,8,(us?"US":"JP")+std::string(" effects"));
    for(unsigned mode=0;mode<4;++mode)for(unsigned prompt=0;prompt<3;++prompt)for(unsigned speed=0;speed<3;++speed) {
        dialogue::PrintPolicy policy;policy.instant=false;policy.sound_mode=mode;policy.prompt_mode=prompt;policy.text_speed=speed;
        pair.policy(policy);
        for(unsigned code:{0x20,0x22,0x2f,0x50,0x71})pair.print(code);
    }
    dialogue::PrintPolicy policy;policy.instant=false;policy.sound_mode=2;policy.text_speed=2;pair.policy(policy);
    pair.request(dialogue::RequestKind::Glyph,0x2f,true);
}
} //namespace
int main(int argc,char** argv) {
    try {
        if(argc<2) {std::cout<<"SKIP native dialogue output reference: supply local US and/or JP .ebpak files\n";return 77;}
        for(int index=1;index<argc;++index) {
            const auto assets=eb::load_game_assets(argv[index],eb::asset_profiles());
            const auto fonts=dialogue::FontResources::import(assets.image,assets.version);
            all_glyphs(assets,fonts);layout_edges(assets,fonts);cadence(assets,fonts);font_switches(assets,fonts);padding_and_boundaries(assets,fonts);conversation_corpus(assets,fonts);reentrant_conversation_corpus(assets,fonts);
            std::cout<<"PASS "<<(assets.version==eb::GameVersion::US?"US":"JP")<<" original text-output fonts, scroll, focus and ordered effects\n";
        }
        require(totals.nonzero_pixels>0 && totals.effects>0,"Dialogue output reference coverage was vacuous");
        std::cout<<"PASS native dialogue output: "<<totals.scenarios<<" scenarios, "<<totals.source_steps<<" source instructions, "
                 <<totals.comparisons<<" state/image comparisons, "<<totals.pixel_samples<<" indexed samples ("<<totals.nonzero_pixels
                 <<" ink), "<<totals.effects<<" ordered effects, "<<totals.ppu_pixels<<" actual source PPU pixels, "<<totals.dma_acknowledgements<<" explicit JP DMA acknowledgements, "<<totals.conversations<<" complete DISPLAY_TEXT conversations and "<<totals.host_requests<<" explicit UI-service requests\n";
        std::cout<<"PASS reentrant dialogue output: "<<totals.reentrant_parents<<" parent conversations, "
                 <<totals.reentrant_children<<" complete child/grandchild DISPLAY_TEXT calls, "<<totals.restored_ticks
                 <<" restored unacknowledged WindowTicks; original caller locals and return stacks preserved\n";
        return 0;
    }catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}
}
