// Hardware fixtures set registers and memory directly to make corner cases
// reproducible without retail assets. Presentation checks keep native pixels
// and emulated state separate from the expanded display-only picture.
#include "eb/bus.hpp"
#include "eb/cpu.hpp"
#include "generated_profile.hpp"

#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

namespace {
unsigned checks = 0;
void check(bool condition, const char* text) {
    ++checks;
    if (!condition) { std::cerr << "FAIL: " << text << '\n'; std::exit(1); }
}
std::vector<uint8_t> rom(0x300000);
void word(eb::Bus& b, unsigned a, uint16_t v) { b.write(a,v); b.write(a+1,v>>8); }
void color(eb::Bus& b, unsigned i, uint16_t value) { b.write(0x2121,i); b.write(0x2122,value); b.write(0x2122,value>>8); }
void until(eb::Bus& b, unsigned line) { while (b.scanline()!=line) b.tick(1); }

void memory() {
    rom[0x1234]=0xa1; rom[0x8010]=0xb2; rom[0x200001]=0xc3;
    eb::Bus b(rom);
    check(b.read(0xc01234)==0xa1,"HiROM full bank");
    check(b.read(0x008010)==0xb2 && b.read(0x808010)==0xb2,"HiROM upper-half mirrors");
    check(b.read(0xf00001)==0xc3,"3 MiB ROM address-line mirror");
    b.write(0x7e1234,0x91); check(b.read(0x001234)==0x91 && b.read(0x801234)==0x91,"WRAM low bank mirrors");
    b.write(0x7f1234,0x82); check(b.read(0x7f1234)==0x82 && b.read(0x7e1234)==0x91,"WRAM bank separation");
    b.write(0x206123,0x19); check(b.read(0x216123)==0x19 && b.read(0xa06123)==0x19,"8 KiB SRAM physical mirroring");
    word(b,0x2181,0xffff); b.write(0x2183,1); b.write(0x2180,0x55); b.write(0x2180,0xaa);
    check(b.wram[0x1ffff]==0x55 && b.wram[0]==0xaa,"WRAM port 17-bit wrap");
    b.write(0x430b,0x6f); check(b.read(0x430f)==0x6f,"DMA unused register mirror");
    b.write(0x430f,0x7b); check(b.read(0x430b)==0x7b,"DMA unused mirror writes");
    b.write(0x2141,0x12); check(b.cpu_to_apu[1]==0x12 && b.read(0x2141)==0,"APU ports have independent directions");
    b.apu_to_cpu[1]=0x34; check(b.read(0x217d)==0x34,"APU read ports mirror every four bytes");
}

void video_ports() {
    eb::Bus b(rom);
    b.write(0x2115,0x80); word(b,0x2116,0x100);
    b.write(0x2118,0x12); b.write(0x2119,0x34); b.write(0x2118,0x56); b.write(0x2119,0x78);
    check(b.vram[0x200]==0x12 && b.vram[0x201]==0x34 && b.vram[0x202]==0x56,"VRAM word increment on high byte");
    word(b,0x2116,0x100);
    check(b.read(0x2139)==0x12 && b.read(0x213a)==0x34,"VRAM address write prefetch");
    check(b.read(0x2139)==0x12 && b.read(0x213a)==0x34,"VRAM read prefetch occurs before increment");
    check(b.read(0x2139)==0x56 && b.read(0x213a)==0x78,"VRAM subsequent prefetched word");
    b.write(0x2115,0x84); word(b,0x2116,0x21); b.write(0x2118,0x9b);
    check(b.vram[0x12]==0x9b,"VRAM eight-bit address rotation");
    b.write(0x2115,0x80); word(b,0x2116,0x00ff);
    b.write(0x2118,1); b.write(0x2119,2); b.write(0x2118,3); b.write(0x2119,4);
    b.write(0x2117,2); b.write(0x2118,5);
    check(b.vram[0x402]==5,"partial VRAM address write preserves auto-incremented other byte");
    b.write(0x2121,255); b.write(0x2122,0x55);
    check(b.cgram[510]==0,"CGRAM low write is latched");
    b.write(0x2122,0xff); b.write(0x2122,0x66); b.write(0x2122,0x22);
    check(b.cgram[510]==0x55 && b.cgram[511]==0x7f && b.cgram[0]==0x66,"CGRAM commits word and wraps");
    word(b,0x2102,0); b.write(0x2104,0x11); check(b.oam[0]==0,"OAM low write latched");
    b.write(0x2104,0x22); check(b.oam[0]==0x11 && b.oam[1]==0x22,"OAM low table pair commit");
    word(b,0x2102,0x110); b.write(0x2104,0x33); check(b.oam[512]==0x33,"OAM high table mirror single-byte commit");
    b.write(0x211b,0xfe); b.write(0x211b,0xff); b.write(0x211c,0); b.write(0x211c,3);
    check(b.read(0x2134)==0xfa && b.read(0x2135)==0xff && b.read(0x2136)==0xff,"PPU signed 16x8 multiply");
}

void dma() {
    eb::Bus b(rom);
    b.wram[0x100]=0x12; b.wram[0x101]=0x34; b.wram[0x102]=0x56; b.wram[0x103]=0x78;
    b.write(0x2115,0x80); word(b,0x2116,0);
    b.write(0x4300,1); b.write(0x4301,0x18); word(b,0x4302,0x100); b.write(0x4304,0x7e); word(b,0x4305,4);
    b.write(0x420b,1);
    check(b.vram[0]==0x12 && b.vram[1]==0x34 && b.vram[2]==0x56 && b.vram[3]==0x78,"DMA mode 1 alternates VRAM ports");
    check(b.read(0x4302)==4 && b.read(0x4303)==1 && b.read(0x4305)==0 && b.read(0x4306)==0,"DMA updates source and count");
    check(b.take_dma_clocks()==48 && b.take_dma_clocks()==0,"DMA retains exact byte/channel/start overhead in master clocks");
    b.wram[0xffff]=0x9a; b.wram[0]=0xbc;
    word(b,0x4302,0xffff); word(b,0x4305,2); b.write(0x420b,1);
    check(b.vram[4]==0x9a && b.vram[5]==0xbc && b.read(0x4304)==0x7e,"DMA wraps within source bank");
    b.write(0x4300,0x89); b.write(0x4301,0x40); word(b,0x4302,0x200); word(b,0x4305,2);
    b.apu_to_cpu[0]=0x41; b.apu_to_cpu[1]=0x42; b.write(0x420b,1);
    check(b.wram[0x200]==0x42 && b.read(0x4302)==0,"reverse DMA obeys fixed source address mode");
}

void presentation_frame_observer() {
    for (const unsigned width : {256u,400u}) {
        auto plain=std::make_unique<eb::Bus>(rom);
        plain->set_presentation_width(width);
        color(*plain,0,0x001f);plain->write(0x2100,15);
        for (unsigned i=0;i<65536;++i) plain->wram[i]=uint8_t(i*13+7);
        plain->write(0x2115,0x80);word(*plain,0x2116,0);
        // Two full-length VRAM DMA channels produce more than three frame
        // periods of CPU stall in a single STA. The observer must see all of
        // those completed pictures, rather than just the last one at return.
        for (unsigned ch=0;ch<2;++ch) {
            const unsigned base=0x4300+ch*16;
            plain->write(base,1);plain->write(base+1,0x18);
            word(*plain,base+2,0);plain->write(base+4,0x7e);word(*plain,base+5,0);
        }
        auto observed=std::make_unique<eb::Bus>(*plain);
        observed->set_presentation_effects_enabled(true);
        std::vector<unsigned> plain_apu,observed_apu;
        plain->apu_tick=[&](unsigned clocks){plain_apu.push_back(clocks);};
        observed->apu_tick=[&](unsigned clocks){observed_apu.push_back(clocks);};
        std::vector<uint64_t> frame_indices,frame_clocks;
        observed->on_presentation_frame=[&](std::span<const uint32_t> pixels,unsigned actual_width,uint64_t frame) {
            frame_indices.push_back(frame);frame_clocks.push_back(observed->master_clocks());
            check(actual_width==width && pixels.size()==width*224,"Frame observer receives the current complete native or wide canvas");
            check(observed->presentation_effect_mask().size()==pixels.size() &&
                  observed->presentation_effect_reference().size()==pixels.size(),"Every DMA-crossed frame carries matching effect metadata dimensions");
            check(std::all_of(pixels.begin(),pixels.end(),[](auto pixel){return pixel==0xffff0000;}),"Frame observer runs only after every visible scanline is ready");
            check(observed->scanline()==0 && observed->hclock()==0 && observed->frames==frame,"Frame observer runs exactly at the completed-frame boundary");
        };
        eb::Cpu plain_cpu(*plain),observed_cpu(*observed);
        std::vector<std::pair<uint32_t,uint8_t>> plain_writes,observed_writes;
        plain_cpu.observe_write=[&](auto address,auto value){plain_writes.emplace_back(address,value);};
        observed_cpu.observe_write=[&](auto address,auto value){observed_writes.emplace_back(address,value);};
        const auto run=[](eb::Cpu& cpu) {
            cpu.pc=0xc08000;cpu.a=0x5a;cpu.execute<0x8d>(0x2180,3);
            cpu.a=15;cpu.execute<0x8d>(0x2100,3);
            cpu.a=3;cpu.execute<0x8d>(0x420b,3);
        };
        run(plain_cpu);run(observed_cpu);
        check(frame_indices.size()>=3 && frame_indices.size()==observed->frames,"A single large DMA stall notifies every crossed frame");
        for (unsigned i=0;i<frame_indices.size();++i)
            check(frame_indices[i]==i+1 && (!i || frame_clocks[i]>frame_clocks[i-1]),"Frame notifications are consecutive and strictly ordered in hardware time");
        check(plain_writes==observed_writes && plain_writes.size()==3,"Frame observation preserves the ordered CPU bus writes");
        check(plain->wram==observed->wram && plain->vram==observed->vram && plain->cgram==observed->cgram && plain->oam==observed->oam && plain->sram==observed->sram,"Frame observation preserves all emulated storage and DMA write results");
        check(plain->vram[0]==0x5a && plain->vram[65535]==uint8_t(65535*13+7),"Large DMA fixture actually completes its full data transfer");
        check(plain->cpu_to_apu==observed->cpu_to_apu && plain->apu_to_cpu==observed->apu_to_cpu && plain_apu==observed_apu,"Frame observation preserves audio port state and ordered APU clock deliveries");
        check(plain->framebuffer==observed->framebuffer && std::equal(plain->presentation_pixels().begin(),plain->presentation_pixels().end(),observed->presentation_pixels().begin()),"Frame observation preserves native and wide pixel output");
        check(std::equal(plain->ppu_registers().begin(),plain->ppu_registers().end(),observed->ppu_registers().begin()),"Frame observation preserves PPU register state");
        check(plain_cpu.describe()==observed_cpu.describe() && plain_cpu.cycles==observed_cpu.cycles && plain_cpu.instructions==observed_cpu.instructions,"Frame observation preserves CPU registers, instruction count, and cycles");
        check(plain->master_clocks()==observed->master_clocks() && plain->frames==observed->frames && plain->scanline()==observed->scanline() && plain->hclock()==observed->hclock(),"Frame observation adds no hardware clocks or raster changes");
        check(plain->take_nmi()==observed->take_nmi() && plain->irq_pending()==observed->irq_pending() && plain->take_dma_clocks()==observed->take_dma_clocks(),"Frame observation preserves interrupt and DMA debt state");
        for (unsigned address=0x4300;address<0x4320;++address)
            check(plain->read(address)==observed->read(address),"Frame observation preserves the visible DMA registers and open-bus reads");
        const auto calls=frame_indices.size();
        observed->on_presentation_frame={};
        while (observed->frames<frame_indices.back()+1) observed->tick(1);
        check(frame_indices.size()==calls,"Removing the observer stops frame notifications");
    }
}

void selective_effects(eb::GameVersion version) {
    const auto& source=eb::source_profile(version);
    const auto ram=[](eb::Bus& b,unsigned address,uint16_t value) { word(b,0x7e0000+address,value); };
    const auto make=[&]() {
        auto b=std::make_unique<eb::Bus>(rom,version);
        b->set_presentation_effects_enabled(true);b->write(0x2100,15);
        return b;
    };
    const auto bg1=[](eb::Bus& b) {
        b.write(0x2105,1);b.write(0x210b,1);b.write(0x212c,1);
        for(unsigned row=0;row<8;++row) b.vram[0x2000+row*2]=255;
    };
    const auto psi=[&](eb::Bus& b) {
        ram(b,source.wram_battle_flag,1);
        b.wram[source.wram_psi_animation]=4;b.wram[source.wram_psi_animation+10]=2;
        b.wram[source.wram_psi_animation+7]=1;b.wram[source.wram_psi_animation+8]=2;
        ram(b,source.wram_psi_animation+44,uint16_t(source.wram_palettes));
        b.wram[source.wram_bg_records[0]+1]=4;
    };

    auto ordinary=make();bg1(*ordinary);color(*ordinary,1,0x03e0);
    ram(*ordinary,source.wram_battle_flag,1);
    until(*ordinary,2);
    check(ordinary->presentation_effect_mask()[0]==0 && ordinary->presentation_effect_reference()[0]==ordinary->framebuffer[0],"Ordinary battle colors are unmarked and bit-exact");
    color(*ordinary,1,0x7c00);until(*ordinary,3);
    check(ordinary->presentation_effect_mask()[256]==0 && ordinary->presentation_effect_reference()[256]==ordinary->framebuffer[256],"Ordinary animated battle palettes are not treated as flashes");
    ordinary->set_presentation_effects_enabled(false);
    check(ordinary->presentation_effect_mask().empty() && ordinary->presentation_effect_reference().empty(),"Disabled metadata exposes empty spans");

    auto overlay=make();bg1(*overlay);psi(*overlay);
    color(*overlay,0,0x7c00);color(*overlay,1,0x7fff);color(*overlay,3,0x03e0);
    for(unsigned row=0;row<8;++row) overlay->vram[0x2001+row*2]=0xf0;
    until(*overlay,2);
    check(overlay->presentation_effect_mask()[0]==0 && overlay->presentation_effect_reference()[0]==0xff00ff00,"Static PSI palette entries retain their original color");
    check(overlay->presentation_effect_mask()[4]==1 && overlay->presentation_effect_reference()[4]==0xff0000ff,"Cycling PSI overlay pixels reveal the current underlying scene in reference");
    overlay->wram[source.wram_psi_animation+10]=0;until(*overlay,3);
    check(overlay->presentation_effect_mask()[260]==0,"A noncycling overlay does not trigger effect filtering");

    auto sprite=make();psi(*sprite);sprite->write(0x212c,16);sprite->write(0x2101,1);
    for(unsigned obj=0;obj<128;++obj) sprite->oam[obj*4+1]=240;
    sprite->oam[1]=0;sprite->oam[3]=0x38; // high-priority OBJ palette 12
    for(unsigned row=0;row<8;++row) sprite->vram[0x4000+row*2]=255;
    color(*sprite,193,0x7fff);color(*sprite,129,0x001f);ram(*sprite,source.wram_psi_targets,1);
    until(*sprite,2);
    check(sprite->presentation_effect_mask()[0]==1 && sprite->presentation_effect_reference()[0]==0xffff0000,"PSI enemy highlight uses its paired original OBJ palette");
    sprite->wram[source.wram_psi_animation]=0;until(*sprite,3);
    check(sprite->presentation_effect_mask()[256]==0,"Stale PSI targets cannot alter a subsequent KO or revive fade");
    sprite->set_presentation_effects_enabled(false);sprite->set_presentation_effects_enabled(true);until(*sprite,4);
    check(sprite->presentation_effect_mask()[512]==0,"Re-enabling during an unrelated palette fade stays unmarked");

    auto reflected=make();bg1(*reflected);ram(*reflected,source.wram_battle_flag,1);
    const unsigned record=source.wram_bg_records[0];
    reflected->wram[record]=1;reflected->wram[record+1]=4;
    ram(*reflected,record+76,uint16_t(source.wram_palettes));ram(*reflected,record+46,0x001f);
    ram(*reflected,source.wram_flash_timers[2],2);color(*reflected,1,0x7fff);
    until(*reflected,2);
    check(reflected->presentation_effect_mask()[0]==1 && reflected->presentation_effect_reference()[0]==0xffff0000,"Reflected battle flash restores the original background palette contribution");
    ram(*reflected,source.wram_flash_timers[2],4);until(*reflected,3);
    check(reflected->presentation_effect_mask()[256]==0,"Reflection's clean phase preserves natural white entries exactly");
    ram(*reflected,source.wram_flash_timers[3],2);color(*reflected,1,0);until(*reflected,4);
    check(reflected->presentation_effect_mask()[512]==1 && reflected->presentation_effect_reference()[512]==0xffff0000,"Green-background black flash uses the original background palette");

    auto fixed=make();ram(*fixed,source.wram_battle_flag,1);ram(*fixed,source.wram_flash_timers[1],24);
    color(*fixed,0,0x7c00);fixed->write(0x2131,0x3f);fixed->write(0x2132,0x3f);
    until(*fixed,2);
    check(fixed->framebuffer[0]==0xffff00ff && fixed->presentation_effect_mask()[0]==1 && fixed->presentation_effect_reference()[0]==0xff0000ff,"Red flash reference removes fixed addition without grading the blue scene");
    ram(*fixed,source.wram_flash_timers[1],0);fixed->write(0x2131,0);until(*fixed,3);
    check(fixed->presentation_effect_mask()[256]==0,"Ending a flash immediately restores identity");
    fixed->wram[source.wram_swirl_timer]=4;fixed->write(0x2130,0x10);fixed->write(0x2131,0x3f);
    fixed->write(0x2125,0x20);fixed->write(0x2126,0);fixed->write(0x2127,255);
    until(*fixed,4);
    check(fixed->presentation_effect_mask()[512]==1 && fixed->presentation_effect_reference()[512]==0xff0000ff,"Enemy PSI colored swirl has a fixed-color-only reference");

    auto lightning=make();bg1(*lightning);color(*lightning,1,0x7fff);color(*lightning,2,0x03e0);
    lightning->write(0x2105,9);lightning->write(0x2109,4);lightning->write(0x210c,2);lightning->write(0x212c,5);
    for(unsigned row=0;row<8;++row) {lightning->vram[0x2000+row*2]=0;lightning->vram[0x2001+row*2]=255;lightning->vram[0x4000+row*2]=255;}
    for(unsigned tile=0;tile<1024;++tile) lightning->vram[0x801+tile*2]=0x20;
    ram(*lightning,source.wram_entity_script,uint16_t(source.lightning_events[0]));ram(*lightning,source.wram_entity_var0,1);
    until(*lightning,2);
    check(lightning->framebuffer[0]==0xffffffff && lightning->presentation_effect_mask()[0]==1 && lightning->presentation_effect_reference()[0]==0xff00ff00,"Carpainter reflected lightning excludes only its BG3 overlay");
    ram(*lightning,source.wram_entity_var0,0);until(*lightning,3);
    check(lightning->presentation_effect_mask()[256]==0,"Ordinary BG3 text outside the lightning phase is untouched");
    ram(*lightning,source.wram_entity_script,uint16_t(source.lightning_events[1]));ram(*lightning,source.wram_entity_var0,2);
    lightning->write(0x2130,0x10);lightning->write(0x2131,0x33);lightning->write(0x2132,0xff);
    lightning->write(0x2125,0x20);lightning->write(0x2126,0);lightning->write(0x2127,255);
    until(*lightning,4);
    check(lightning->presentation_effect_mask()[512]==1 && lightning->presentation_effect_reference()[512]==0xff00ff00,"Lightning strike reference removes overlay and its fixed-color flash together");
}

void title_and_gas_effects(eb::GameVersion version) {
    const auto& source=eb::source_profile(version);
    auto image=rom;
    // Synthetic compressed palettes contain no donor data: one extended word
    // run produces exactly 256 colors, followed by the DECOMP terminator.
    for(unsigned which=0;which<2;++which) {
        const unsigned p=source.rom_gas_palettes[which];
        const uint16_t value=which?0x7fff:0x03e0;
        image[p]=0xe8;image[p+1]=0xff;image[p+2]=uint8_t(value);image[p+3]=uint8_t(value>>8);image[p+4]=0xff;
    }
    auto gas=std::make_unique<eb::Bus>(image,version);
    gas->set_presentation_width(400);gas->set_presentation_effects_enabled(true);
    gas->write(0x2100,15);gas->write(0x2105,3);gas->write(0x2107,0x78);gas->write(0x2108,0x7c);
    word(*gas,0x7e0000+source.wram_entity_script,uint16_t(source.gas_flash_event));color(*gas,0,0x7fff);
    until(*gas,2);
    check(gas->presentation_width()==256 && gas->presentation_fixed_aspect()==4.0/3,"First visible gas row uses the complete native-width 4:3 card");
    check(gas->presentation_effect_mask().size()==256*224 && gas->presentation_effect_reference()[0]==0xff00ff00 && gas->presentation_effect_mask()[0]==1,"Gas flash uses bounded decoded imported palette reference at the active canvas size");
    color(*gas,0,0x03e0);until(*gas,3);
    check(gas->presentation_effect_mask()[256]==0 && gas->presentation_effect_reference()[256]==gas->framebuffer[256],"Normal gas colors remain exact during the flash sequence");
    std::vector<std::pair<unsigned,double>> completed;
    gas->on_presentation_frame=[&](auto pixels,unsigned width,auto) {
        check(pixels.size()==width*224 && gas->presentation_effect_mask().size()==pixels.size(),"Title transition observer sees matching complete canvas and metadata");
        completed.emplace_back(width,gas->presentation_fixed_aspect());
    };
    // Change next-scene registers after row zero. The current picture keeps its
    // latched width/aspect through its callback; the next row zero restores wide.
    gas->write(0x2105,1);gas->write(0x2107,0);gas->write(0x2108,0);
    until(*gas,0);until(*gas,2);
    check(completed.size()==1 && completed[0].first==256 && completed[0].second==4.0/3,"Changing next-scene registers cannot relabel a completed gas picture");
    check(gas->presentation_width()==400 && gas->presentation_fixed_aspect()==0 && gas->presentation_effect_mask().size()==400*224,"First following scene restores the requested widescreen canvas and metadata together");
    check(gas->presentation_effect_mask()[0]==0,"Stale gas event outside its PPU scene cannot affect ordinary colors");

    image[source.rom_gas_palettes[0]]=0xfc; // backward reference before any output
    auto malformed=std::make_unique<eb::Bus>(image,version);
    malformed->set_presentation_effects_enabled(true);malformed->write(0x2100,15);
    malformed->write(0x2105,3);malformed->write(0x2107,0x78);malformed->write(0x2108,0x7c);
    word(*malformed,0x7e0000+source.wram_entity_script,uint16_t(source.gas_flash_event));color(*malformed,0,0x7fff);
    until(*malformed,2);
    check(malformed->presentation_effect_mask()[0]==0 && malformed->presentation_effect_reference()[0]==0xffffffff,"Invalid compressed reference disables only optional gas metadata without touching pixels");
    auto tiny=std::make_unique<eb::Bus>(std::array<uint8_t,1>{0},version);
    tiny->set_presentation_effects_enabled(true);
    check(tiny->presentation_effect_mask().size()==256*224,"Palette decoding remains bounded when a synthetic cartridge lacks referenced data");

    if(version==eb::GameVersion::JP) {
        auto title=std::make_unique<eb::Bus>(rom,version);
        title->set_presentation_width(1024);title->set_presentation_effects_enabled(true);
        title->write(0x2100,15);title->write(0x2105,1);title->write(0x2107,0x38);title->write(0x2108,0x3c);title->write(0x210b,1);title->write(0x212c,17);
        word(*title,0x7e0000+source.wram_entity_script,uint16_t(source.title_event_first));
        color(*title,1,0x001f);color(*title,2,0x03e0);color(*title,129,0x7c00);
        for(unsigned row=0;row<8;++row) {title->vram[0x2000+row*2]=255;title->vram[0x2021+row*2]=255;title->vram[0x4000+row*2]=255;}
        title->vram[0x7020]=1; // distinct centered logo tile
        title->write(0x2101,1);
        for(unsigned obj=0;obj<128;++obj) title->oam[obj*4+1]=240;
        title->oam[1]=0;title->oam[3]=0x30;
        until(*title,2);const auto pixels=title->presentation_pixels();
        check(pixels[0]==0xffff0000 && pixels[256]==0xffff0000 && pixels[1023]==0xffff0000,"Japanese title extends edge background colors without repeating logo tiles");
        check(pixels[384]==0xff0000ff && pixels[512]==0xff00ff00 && pixels[384]==title->framebuffer[0],"Japanese logo and OBJ retain their exact centered native placement");
        check(title->presentation_effect_mask()[0]==0 && title->presentation_fixed_aspect()==0,"Japanese logo continuation does not activate flash filtering or fixed-card aspect");
    }
}

void arithmetic_interrupts_input() {
    eb::Bus b(rom);
    b.write(0x4202,9); b.write(0x4203,7); b.tick(7); check(b.read(0x4216)==0,"CPU multiplication latency");
    b.tick(1); check(b.read(0x4216)==63,"CPU multiplication result");
    word(b,0x4204,1000); b.write(0x4206,31); b.tick(16);
    check(b.read(0x4214)==32 && b.read(0x4216)==8,"CPU division quotient and remainder");
    b.write(0x4206,0); b.tick(16); check(b.read(0x4214)==255 && b.read(0x4215)==255 && b.read(0x4216)==0xe8,"CPU division by zero hardware result");
    b.set_buttons(0x9080); b.write(0x4016,1); b.write(0x4016,0);
    unsigned serial=0; for (unsigned i=0;i<16;++i) serial=(serial<<1)|(b.read(0x4016)&1);
    check(serial==0x9080 && (b.read(0x4016)&1),"controller serial order and exhausted ones");
    b.write(0x4200,0x81); until(b,225);
    check(b.take_nmi() && !b.take_nmi(),"one NMI edge per vblank");
    check((b.read(0x4212)&0x81)==0x81,"vblank and automatic joypad busy flags");
    check((b.read(0x4210)&0x80) && !(b.read(0x4210)&0x80),"RDNMI read acknowledges flag");
    b.tick(704); check(!(b.read(0x4212)&1) && b.read(0x4218)==0x80 && b.read(0x4219)==0x90,"automatic controller read completes");
    word(b,0x4207,100); b.write(0x4200,0x10);
    while (b.hclock()>300) b.tick(1);
    b.tick(70); check(b.irq_pending() && (b.read(0x4211)&0x80) && !b.irq_pending(),"horizontal IRQ and read acknowledgement");
}

void rendering() {
    eb::Bus b(rom);
    color(b,0,0x001f); b.write(0x2100,15); b.write(0x2132,0x5f); b.write(0x2131,0x20);
    until(b,2); check(b.framebuffer[0]==0xffffff00,"backdrop plus fixed color math");
    b.write(0x2131,0); b.write(0x2100,0x80); until(b,3);
    check(b.framebuffer[256]==0xff000000,"forced blank raster change");
    eb::Bus expanded(rom);
    color(expanded,0,9|(16<<5)|(25<<10)); expanded.write(0x2100,15);
    until(expanded,2);
    check(expanded.framebuffer[0]==0xff4a84ce,"Five-bit RGB expansion matches the independent linear reference palette");
    color(expanded,0,16|(14<<5)|(30<<10)); expanded.write(0x2100,8);
    until(expanded,3);
    check(expanded.framebuffer[256]==0xff4a3984,"Brightness is rounded in five-bit color before RGB expansion");
}

void background_sprite_window() {
    eb::Bus b(rom);
    color(b,1,0x001f); color(b,129,0x7c00);
    // BG1 tile 1 at character base 2000h; map is at 0000h.
    b.vram[0]=1; b.write(0x210b,1);
    for (unsigned row=0;row<8;++row) { b.vram[0x2010+row*2]=255; b.vram[0x4000+row*2]=255; }
    b.write(0x2101,1);
    for (unsigned obj=0;obj<128;++obj) b.oam[obj*4+1]=240;
    b.oam[0]=0; b.oam[1]=0; b.oam[2]=0; b.oam[3]=0x30;
    b.write(0x212c,0x11); b.write(0x2100,15);
    b.write(0x2125,2); b.write(0x2126,0); b.write(0x2127,3); b.write(0x212e,16);
    until(b,2);
    check(b.framebuffer[0]==0xffff0000,"object window exposes underlying BG");
    check(b.framebuffer[4]==0xff0000ff,"object high priority overlays background");
    check(b.framebuffer[8]==0xff000000,"transparent tiles reveal backdrop");
    eb::Bus fine_scroll(rom);
    color(fine_scroll,1,0x001f); color(fine_scroll,2,0x03e0);
    fine_scroll.write(0x210b,1); fine_scroll.write(0x212c,1); fine_scroll.write(0x2100,15);
    for(unsigned row=0;row<8;++row) {
        fine_scroll.vram[0x2000+row*2]=0xf0;
        fine_scroll.vram[0x2001+row*2]=0x0f;
    }
    fine_scroll.write(0x210d,4); fine_scroll.write(0x210d,0);
    until(fine_scroll,2);
    check(fine_scroll.framebuffer[0]==0xff00ff00 && fine_scroll.framebuffer[4]==0xffff0000,"Horizontal scroll latch preserves bit2 through the first byte write");
}

void offset_per_tile() {
    const auto setup=[](eb::Bus& b,unsigned mode) {
        b.write(0x2105,mode); b.write(0x210b,1); b.write(0x2109,4);
        b.write(0x212c,1); b.write(0x2100,15);
        color(b,1,0x001f); color(b,2,0x03e0); color(b,3,0x7c00);
        // Three uniformly colored tiles, and rows containing all three.
        const unsigned depth=mode==4?8:4;
        for(unsigned tile=0;tile<3;++tile) for(unsigned row=0;row<8;++row) {
            const unsigned data=0x2000+tile*depth*8+row*2;
            b.vram[data]=((tile+1)&1)?255:0;
            b.vram[data+1]=((tile+1)&2)?255:0;
        }
        for(unsigned row=0;row<3;++row) for(unsigned col=0;col<32;++col)
            b.vram[(row*32+col)*2]=row;
    };
    eb::Bus vertical(rom); setup(vertical,2);
    // Row 1 of BG3 is vertical offsets. Only BG1's second column uses row 1.
    vertical.vram[0x840]=8; vertical.vram[0x841]=0x20;
    until(vertical,2);
    check(vertical.framebuffer[0]==0xffff0000 && vertical.framebuffer[8]==0xff00ff00 && vertical.framebuffer[16]==0xffff0000,"Mode 2 vertical offset applies to selected column only");
    eb::Bus horizontal(rom); setup(horizontal,2);
    horizontal.vram[4]=2; // target map column 2, blue tile
    horizontal.vram[0x800]=8; horizontal.vram[0x801]=0x20;
    until(horizontal,2);
    check(horizontal.framebuffer[0]==0xffff0000 && horizontal.framebuffer[8]==0xff0000ff,"Mode 2 horizontal override retains screen column");
    eb::Bus direction(rom); setup(direction,4);
    direction.vram[0x800]=16; direction.vram[0x801]=0xa0;
    until(direction,2);
    check(direction.framebuffer[0]==0xffff0000 && direction.framebuffer[8]==0xff0000ff,"Mode 4 bit15 chooses vertical offset from one table row");
    eb::Bus fine(rom); setup(fine,2);
    fine.write(0x210d,3);fine.write(0x210d,0);
    fine.vram[0x840]=8;fine.vram[0x841]=0x20;
    until(fine,2);
    check(fine.framebuffer[4]==0xffff0000 && fine.framebuffer[5]==0xff00ff00,"Offset column boundary follows target fine scroll");
}

void hdma() {
    eb::Bus b(rom);
    color(b,0,0x001f);
    b.wram[0x100]=0x82; b.wram[0x101]=15; b.wram[0x102]=0x80; b.wram[0x103]=0;
    b.write(0x4300,0); b.write(0x4301,0); word(b,0x4302,0x100); b.write(0x4304,0x7e); b.write(0x420c,1);
    until(b,3);
    check(b.framebuffer[0]==0xffff0000 && b.framebuffer[256]==0xff000000,"HDMA applies scanline 0 data before first visible line");
    check(b.read(0x4308)==4 && b.read(0x4309)==1 && b.read(0x430a)==0,"HDMA repeat advances table and stops at zero");
}

void clock_rates() {
    eb::Bus b(rom);
    check(b.access_clocks(0x001fff)==8 && b.access_clocks(0x7f0000)==8 && b.access_clocks(0x800000)==8,"WRAM and low mirrors remain slow");
    check(b.access_clocks(0x002100)==6 && b.access_clocks(0x804200)==6 && b.access_clocks(0x005fff)==6,"MMIO and fast open-bus regions");
    check(b.access_clocks(0x004000)==12 && b.access_clocks(0xbf41ff)==12,"Whole controller register region uses twelve clocks");
    check(b.access_clocks(0xc00000)==8 && b.access_clocks(0x008000)==8 && b.access_clocks(0x808000)==8,"ROM starts at eight clocks");
    b.write(0x420d,1);
    check(b.access_clocks(0xc00000)==6 && b.access_clocks(0x808000)==6 && b.access_clocks(0x008000)==8 && b.access_clocks(0x400000)==8,"MEMSEL affects only high-bank ROM mirrors");
    check(b.access_clocks(0x7e8000)==8 && b.access_clocks(0xa06000)==8,"MEMSEL does not speed up WRAM or SRAM");
    unsigned apu=0;b.apu_tick=[&](unsigned clocks){apu+=clocks;};
    b.run_cpu(538);check(b.hclock()==578 && apu==578,"First refresh stalls CPU for forty clocks while APU advances");
    b.run_cpu(20);check(b.hclock()==598,"Refresh occurs only once per line");
    b.run_cpu(766);check(b.scanline()==1 && b.hclock()==0,"Refresh does not change scanline duration");
    b.run_cpu(534);check(b.hclock()==574,"Next refresh follows the eight-clock global phase");
    eb::Bus grouped(rom), split(rom);
    grouped.run_cpu(262*1324);
    for(unsigned i=0;i<262*1324;++i) split.run_cpu(1);
    check(grouped.frames==1 && grouped.hclock()==0 && grouped.master_clocks()==357368,"One full CPU budget includes all 262 refresh stalls");
    check(grouped.master_clocks()==split.master_clocks() && grouped.scanline()==split.scanline() && grouped.hclock()==split.hclock(),"Refresh scheduling is independent of instruction grouping");
    grouped.run_cpu(262*1324-4);
    check(grouped.frames==2 && grouped.scanline()==0 && grouped.hclock()==0 && grouped.master_clocks()==714732,"Odd noninterlaced field has one four-clock-short scanline");
}

void wide_presentation(eb::GameVersion version) {
    const auto& source=eb::source_profile(version);
    auto native=std::make_unique<eb::Bus>(rom,version);
    native->write(0x2105,1); native->write(0x2107,1); native->write(0x210b,1);
    native->write(0x212c,1); native->write(0x2100,15);
    native->wram[source.wram_battle_flag]=1; native->wram[source.wram_bg_records[0]]=1; native->wram[source.wram_bg_records[0]+1]=4;
    color(*native,1,31); color(*native,2,31<<5); color(*native,3,31<<10);
    for (unsigned tile=0;tile<3;++tile) for (unsigned row=0;row<8;++row) {
        native->vram[0x2000+tile*32+row*2]=((tile+1)&1)?255:0;
        native->vram[0x2001+tile*32+row*2]=((tile+1)&2)?255:0;
    }
    for (unsigned row=0;row<32;++row) for (unsigned col=0;col<64;++col)
        native->vram[(col/32)*2048+(row*32+(col&31))*2]=col%3;
    native->write(0x210d,9);native->write(0x210d,0);
    auto wide=std::make_unique<eb::Bus>(*native);
    wide->set_presentation_width(400);
    until(*native,225);until(*wide,225);
    check(native->framebuffer==wide->framebuffer,"Wide rendering keeps every native pixel identical");
    const auto pixels=wide->presentation_pixels();
    bool center=true;
    for(unsigned y=0;y<224;++y) center&=std::equal(native->framebuffer.begin()+y*256,native->framebuffer.begin()+(y+1)*256,pixels.begin()+y*400+72);
    check(center,"Wide output embeds the exact centered native image");
    check(pixels[64]==0xffff0000 && pixels[72]==0xff00ff00 && pixels[328]==0xffff0000,"Wide tilemap samples new signed-X columns instead of stretching native pixels");
    check(native->wram==wide->wram && native->vram==wide->vram && native->cgram==wide->cgram && native->oam==wide->oam && native->sram==wide->sram,"Margin sampling changes no emulated memory");
    check(native->master_clocks()==wide->master_clocks() && native->scanline()==wide->scanline() && native->hclock()==wide->hclock() && native->take_nmi()==wide->take_nmi() && native->irq_pending()==wide->irq_pending() && native->take_dma_clocks()==wide->take_dma_clocks(),"Margin sampling changes no clock, interrupt, or DMA result");
    check(native->read(0x213e)==wide->read(0x213e),"Margin sampling preserves native sprite overflow flags");
    const auto saved=wide->framebuffer;wide->set_presentation_width(1024);
    check(wide->presentation_pixels().size()==1024*224 && wide->framebuffer==saved,"Ultrawide resize preserves native frame");
    bool rejects=false;try {wide->set_presentation_width(401);}catch(const std::invalid_argument&){rejects=true;}
    check(rejects && wide->presentation_width()==1024,"Presentation rejects fractional-center widths without changing configuration");
    wide->set_presentation_width(256);
    check(wide->presentation_pixels().data()==wide->framebuffer.data(),"Native presentation aliases the original framebuffer");

    auto affine=std::make_unique<eb::Bus>(rom,version);
    affine->set_presentation_width(400);affine->write(0x2105,7);affine->write(0x212c,1);affine->write(0x2100,15);
    color(*affine,1,31);color(*affine,2,31<<5);color(*affine,3,31<<10);
    affine->write(0x211b,0);affine->write(0x211b,1);affine->write(0x211e,0);affine->write(0x211e,1);
    affine->vram[0]=1;affine->vram[127*2]=2;affine->vram[32*2]=3;
    for(unsigned tile=1;tile<4;++tile)for(unsigned p=0;p<64;++p)affine->vram[tile*128+p*2+1]=tile;
    until(*affine,2);
    check(affine->presentation_pixels()[71]==0xff00ff00 && affine->presentation_pixels()[72]==0xffff0000 && affine->presentation_pixels()[328]==0xff0000ff,"Mode7 affine extension samples negative and beyond-native source coordinates");

    auto objects=std::make_unique<eb::Bus>(rom,version);
    objects->set_presentation_width(1024);objects->write(0x212c,16);objects->write(0x2100,15);
    color(*objects,129,31<<10);for(unsigned r=0;r<8;++r)objects->vram[r*2]=255;
    for(unsigned n=0;n<128;++n)objects->oam[n*4+1]=240;
    objects->oam[0]=252;objects->oam[1]=0;objects->oam[3]=0x30;
    objects->oam[4]=0;objects->oam[5]=0;objects->oam[7]=0x30;objects->oam[512]=4; // second object hidden at -256
    until(*objects,2);
    check(objects->presentation_pixels()[384+259]==0xff0000ff && objects->presentation_pixels()[384+260]==0xff000000,"Native edge-crossing object is completed in the margin");
    check(objects->presentation_pixels()[128]==0xff000000,"Hidden offscreen OAM is not exposed by ultrawide output");

    auto battle=std::make_unique<eb::Bus>(rom,version);
    battle->set_presentation_width(400);battle->write(0x2105,1);battle->write(0x2109,4);battle->write(0x210c,1);
    battle->write(0x212c,4);battle->write(0x2100,15);color(*battle,1,31<<5);
    for(unsigned r=0;r<8;++r)battle->vram[0x2000+r*2]=255;
    until(*battle,2);check(battle->presentation_pixels()[72]==0xff00ff00 && battle->presentation_pixels()[0]==0xff000000,"Ordinary BG3 text stays centered without repeating into margins");
    battle->wram[source.wram_battle_flag]=1;battle->wram[source.wram_bg_records[0]]=3;battle->wram[source.wram_bg_records[0]+1]=2;
    until(*battle,3);check(battle->presentation_pixels()[400]==0xff00ff00,"Source-selected BG3 battle background extends into margins");

    auto title=std::make_unique<eb::Bus>(rom,version);
    title->set_presentation_width(800);title->write(0x2105,11);title->write(0x2107,0x58);
    title->write(0x212c,1);title->write(0x2100,15);color(*title,1,31);
    for(unsigned r=0;r<8;++r)title->vram[r*2]=255;
    until(*title,2);
    check(title->presentation_pixels()[272]==0xffff0000 && title->presentation_pixels()[0]==0xff000000 && title->presentation_pixels()[799]==0xff000000,"Static title art and copyright remain centered at ultrawide widths");

    auto naming=std::make_unique<eb::Bus>(rom,version);
    naming->set_presentation_width(400);naming->write(0x2105,1);naming->write(0x2108,4);
    naming->write(0x210b,0x10);naming->write(0x212c,2);naming->write(0x2100,15);color(*naming,1,31<<5);
    naming->wram[source.wram_entity_script+46]=source.file_select_event&255;naming->wram[source.wram_entity_script+47]=source.file_select_event>>8;
    for(unsigned r=0;r<8;++r)naming->vram[0x2000+r*2]=255;
    until(*naming,2);
    check(naming->presentation_pixels()[0]==0xff00ff00 && naming->presentation_pixels()[72]==0xff00ff00,"File-select event permits its animated BG2 background across the wide view");
}

void lumine_hall_presentation(eb::GameVersion version) {
    const auto& source=eb::source_profile(version);
    check(source.wram_lumine_maps[0]-source.wram_lumine_header==(version==eb::GameVersion::JP?0x2000u:0x1000u),"Lumine Hall phase maps follow the language-specific preparation source");
    auto b=std::make_unique<eb::Bus>(rom,version);
    b->set_presentation_width(400);b->write(0x2105,1);b->write(0x2107,0x39);b->write(0x212c,1);b->write(0x2100,15);
    b->write(0x210d,0x40);b->write(0x210d,1);b->write(0x210e,95);b->write(0x210e,0);
    color(*b,49,31);color(*b,50,31<<5);color(*b,51,31<<10);
    for(unsigned tile=1;tile<=3;++tile)for(unsigned r=0;r<8;++r){
        b->vram[(16+tile)*32+r*2]=(tile&1)?255:0;
        b->vram[(16+tile)*32+r*2+1]=(tile&2)?255:0;
    }
    const auto ram_word=[&](unsigned a,unsigned v){b->wram[a]=v;b->wram[a+1]=v>>8;};
    const auto font_word=[](unsigned column,unsigned odd){return 0x0c11+(column+odd)%3;};
    b->wram[source.wram_lumine_header]=8;b->wram[source.wram_lumine_header+1]=30;
    ram_word(source.wram_entity_script,source.lumine_event);ram_word(source.wram_entity_var0,200);ram_word(source.wram_entity_var1,21);
    for(unsigned odd=0;odd<2;++odd)for(unsigned column=0;column<130;++column)for(unsigned row=0;row<8;++row)
        ram_word(source.wram_lumine_maps[odd]+column*16+row*2,font_word(column,odd));
    const auto upload=[&](unsigned phase){for(unsigned c=0;c<30;++c)for(unsigned r=0;r<8;++r){
        const unsigned mx=(40+c)&63,a=0x7000+(mx/32)*2048+((12+r)*32+(mx&31))*2,v=font_word(phase/2+c,phase&1);
        b->vram[a]=v;b->vram[a+1]=v>>8;
    }};
    upload(20);const auto before=b->wram;until(*b,2);
    check(b->presentation_pixels()[64]==0xffff0000 && b->presentation_pixels()[328]==0xffff0000,"Lumine Hall margins sample complete prepared text columns beyond the original30-column upload");
    check(b->presentation_pixels()[72]==b->framebuffer[0] && b->framebuffer[0]==0xff00ff00,"Lumine Hall original text placement and centered pixels stay unchanged");
    check(b->wram==before,"Lumine Hall adaptation does not advance script text or write game state");
    ram_word(source.wram_entity_var1,22);until(*b,3);
    check(b->presentation_pixels()[400+64]==0xffff0000,"Lumine Hall follows displayed VRAM phase when script progress leads DMA");
    upload(21);until(*b,4);
    check(b->presentation_pixels()[800+64]==0xff00ff00,"Lumine Hall follows the next displayed half-tile phase");
    ram_word(source.wram_entity_script,0);until(*b,5);
    check(b->presentation_pixels()[1200+64]==0xff000000,"Prepared buffer from an inactive Lumine Hall event is ignored");
}

void world_map_presentation(eb::GameVersion version) {
    const auto& source=eb::source_profile(version);
    const auto setup=[&](unsigned camera,unsigned width,unsigned first,unsigned last) {
        auto image=rom;
        // A source-shaped synthetic global map. Every 32-pixel block selects
        // one of three loaded arrangements; neighboring sectors are unrelated.
        for(unsigned row=0;row<80;++row)for(unsigned col=0;col<32;++col)
            image[source.rom_map_sectors+row*32+col]=(col>=first && col<last?2:1)<<3;
        const auto& chunks=source.rom_map_chunks;
        for(unsigned y=0;y<320;++y)for(unsigned x=0;x<256;++x)
            image[chunks[y&7]+(y>>3)*256+x]=x%3+1;
        auto b=std::make_unique<eb::Bus>(image,version);
        b->set_presentation_width(width);b->write(0x2105,1);b->write(0x2107,0x39);b->write(0x2108,0x59);
        b->write(0x212c,1);b->write(0x2100,15);b->write(0x210d,camera&255);b->write(0x210d,(camera>>8)&3);
        b->wram[source.wram_map_combo]=2;b->wram[source.wram_bg_scroll[0]]=camera;b->wram[source.wram_bg_scroll[0]+1]=camera>>8;
        color(*b,1,31);color(*b,2,31<<5);color(*b,3,31<<10);
        for(unsigned tile=1;tile<=3;++tile)for(unsigned row=0;row<8;++row) {
            b->vram[tile*32+row*2]=(tile&1)?255:0;
            b->vram[tile*32+row*2+1]=(tile&2)?255:0;
        }
        for(unsigned block=1;block<=3;++block)for(unsigned t=0;t<16;++t)b->wram[source.wram_map_arrangements+block*32+t*2]=block;
        for(unsigned y=0;y<32;++y)for(unsigned x=0;x<64;++x) {
            const unsigned world_tile=(camera/512)*64+x, mx=world_tile&63;
            b->vram[0x7000+(mx/32)*2048+(y*32+(mx&31))*2]=(world_tile/4)%3+1;
        }
        return b;
    };
    auto world=setup(1024,1024,0,32);
    const auto before=world->wram;until(*world,2);
    check(world->presentation_pixels()[0]==0xff0000ff && world->presentation_pixels()[384]==world->framebuffer[0],"Wide world pixels decode source map beyond the current VRAM ring without wrapping stale tiles");
    check(world->wram==before,"World extension changes neither arrangements, camera, entities, nor map-streaming state");

    auto left=setup(1024,400,4,7);
    const auto camera=left->wram;auto native=std::make_unique<eb::Bus>(*left);native->set_presentation_width(256);
    until(*left,2);until(*native,2);
    check(left->presentation_pixels()[0]==0xff0000ff && left->presentation_pixels()[72]==0xff00ff00,"Display camera shifts at a source sector boundary while keeping the whole wide view in the current region");
    check(left->framebuffer==native->framebuffer && left->wram==camera,"Boundary framing leaves original camera state and native framebuffer exact");

    auto hud=setup(1024,400,4,7);hud->write(0x2105,9);hud->write(0x2109,0x30);hud->write(0x210c,1);hud->write(0x212c,0x15);
    color(*hud,29,0x7fff);color(*hud,129,0x7c1f);
    for(unsigned row=0;row<8;++row){hud->vram[0x2010+row*2]=255;hud->vram[4*32+row*2]=255;}
    hud->vram[0x6000+15*2]=1;hud->vram[0x6001+15*2]=0x3c;
    for(unsigned n=0;n<128;++n)hud->oam[n*4+1]=240;
    hud->oam[0]=100;hud->oam[1]=0;hud->oam[2]=4;hud->oam[3]=0x30;
    until(*hud,2);
    check(hud->presentation_pixels()[192]==0xffffffff && hud->framebuffer[120]==0xffffffff,"Window background text stays centered when the display world camera shifts");
    check(hud->presentation_pixels()[100]==0xffff00ff && hud->framebuffer[100]==0xffff00ff,"Existing world object shifts with the displayed scenery without changing native OAM placement");

    auto narrow=setup(1024,800,4,5);until(*narrow,2);
    check(narrow->presentation_pixels()[271]==0xff000000 && narrow->presentation_pixels()[272]==narrow->framebuffer[0] && narrow->presentation_pixels()[528]==0xff000000,"A region narrower than the wide view is centered and pillarboxed");

    auto mismatch=setup(1024,400,0,32);mismatch->vram[0x7042]=0;
    until(*mismatch,2);
    check(mismatch->presentation_pixels()[0]==0xff000000,"Unconfirmed source map interpretation falls back to centered artwork");

    auto wall=setup(1024,800,0,32);
    const auto ram_word=[&](unsigned a,unsigned v){wall->wram[a]=v;wall->wram[a+1]=v>>8;};
    wall->wram[source.wram_lumine_header]=8;wall->wram[source.wram_lumine_header+1]=30;
    ram_word(source.wram_entity_script,source.lumine_event);ram_word(source.wram_entity_var0,200);ram_word(source.wram_entity_var1,21);
    color(*wall,49,31);color(*wall,50,31<<5);color(*wall,51,31<<10);
    for(unsigned tile=1;tile<=3;++tile)for(unsigned row=0;row<8;++row){
        wall->vram[(16+tile)*32+row*2]=(tile&1)?255:0;wall->vram[(16+tile)*32+row*2+1]=(tile&2)?255:0;
    }
    for(unsigned phase=0;phase<2;++phase)for(unsigned column=0;column<130;++column)for(unsigned row=0;row<8;++row)
        ram_word(source.wram_lumine_maps[phase]+column*16+row*2,0x0c11+(column+phase)%3);
    for(unsigned column=0;column<30;++column)for(unsigned row=0;row<8;++row){
        const unsigned mx=(40+column)&63,a=0x7000+(mx/32)*2048+((12+row)*32+(mx&31))*2,v=0x0c11+(10+column)%3;
        wall->vram[a]=v;wall->vram[a+1]=v>>8;
    }
    until(*wall,225);
    check(wall->presentation_pixels()[95*800+80]==0xff00ff00,"World-map extension preserves Lumine Hall's authored patch even when its columns are outside the native viewport");
}
}

int main() {
    memory(); video_ports(); dma(); presentation_frame_observer(); arithmetic_interrupts_input(); rendering(); background_sprite_window(); offset_per_tile(); hdma(); clock_rates();
    for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {wide_presentation(version);lumine_hall_presentation(version);world_map_presentation(version);selective_effects(version);title_and_gas_effects(version);}
    std::cout << "bus: " << checks << " checks passed\n";
}
