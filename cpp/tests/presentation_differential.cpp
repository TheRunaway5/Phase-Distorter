// Opt-in, asset-backed proof that presentation never changes game execution.
// This is deliberately not a default CTest: it needs the user's imported pack.
#include "eb/bus.hpp"
#include "eb/cpu.hpp"
#include "eb/dsp.hpp"
#include "eb/spc.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

namespace {
struct Input { uint64_t frame; uint16_t buttons; };
// Preserve write order and origin, not just final RAM: two executions can end
// with identical memory despite different I/O side effects or event ordering.
struct Write {
    unsigned origin, address, value;
    bool operator==(const Write&) const = default;
};
std::vector<Input> read_inputs(const std::string& path) {
    std::vector<Input> result;
    if(path.empty()) return result;
    std::ifstream input(path);
    if(!input) throw std::runtime_error("Cannot open input script: "+path);
    std::string line;
    while(std::getline(input,line)) {
        if(auto comment=line.find('#');comment!=std::string::npos) line.erase(comment);
        std::istringstream fields(line);
        std::string frame,mask,extra;
        if(!(fields>>frame)) continue;
        if(!(fields>>mask) || fields>>extra) throw std::runtime_error("Expected frame and joymask in "+path);
        const auto f=std::stoull(frame,nullptr,0), m=std::stoull(mask,nullptr,0);
        if(m>0xffff || (!result.empty() && f<=result.back().frame)) throw std::runtime_error("Invalid input sequence in "+path);
        result.push_back({f,uint16_t(m)});
    }
    return result;
}
auto cpu_state(const eb::Cpu& c) {
    return std::tie(c.pc,c.a,c.x,c.y,c.p,c.s,c.d,c.dbr,c.e,c.stopped,c.waiting,c.cycles,c.instructions);
}
auto spc_state(const eb::Spc& c) {
    return std::tie(c.pc,c.a,c.x,c.y,c.sp,c.p,c.stopped,c.sleeping,c.cycles,c.instructions);
}
void save(const std::string& path,const eb::Bus& bus,bool wide) {
    if(path.empty()) return;
    std::ofstream out(path,std::ios::binary);
    out<<"P6\n"<<(wide?bus.presentation_width():256)<<" 224\n255\n";
    auto pixels=wide?bus.presentation_pixels():std::span<const uint32_t>(bus.framebuffer);
    for(auto p:pixels) { const char rgb[]={char(p>>16),char(p>>8),char(p)};out.write(rgb,3); }
    if(!out) throw std::runtime_error("Cannot write "+path);
}
}
int main(int argc,char** argv) {
    try {
        std::string assets=std::getenv("EB_ASSET_PACK")?std::getenv("EB_ASSET_PACK"):"", script, output;
        uint64_t frames=1200;
        for(int i=1;i<argc;++i) {
            const std::string arg=argv[i];
            if(arg=="--help") {
                std::cout<<"presentation_differential --assets FILE [--frames N] [--input-script FILE] [--output-prefix PATH]\n";
                return 0;
            }
            if(i+1==argc) throw std::runtime_error("Missing value for "+arg);
            const std::string value=argv[++i];
            if(arg=="--assets") assets=value;
            else if(arg=="--frames") frames=std::stoull(value,nullptr,0);
            else if(arg=="--input-script") script=value;
            else if(arg=="--output-prefix") output=value;
            else throw std::runtime_error("Unknown option: "+arg);
        }
        if(assets.empty()) throw std::runtime_error("Pass --assets FILE or set EB_ASSET_PACK");
        const auto game=eb::load_game_assets(assets,eb::asset_profiles());
        auto native=std::make_unique<eb::Bus>(game.image,game.version),wide=std::make_unique<eb::Bus>(game.image,game.version);
        eb::Spc sa(*native),sb(*wide); eb::Dsp da(sa),db(sb); eb::Cpu ca(*native),cb(*wide);
        ca.reset(); cb.reset(); wide->set_presentation_width(400);
        std::vector<Write> wa,wb;
        ca.observe_write=[&](uint32_t a,uint8_t v){wa.push_back({0,a,v});};
        cb.observe_write=[&](uint32_t a,uint8_t v){wb.push_back({0,a,v});};
        sa.observe_write=[&](uint16_t a,uint8_t v){wa.push_back({1,a,v});};
        sb.observe_write=[&](uint16_t a,uint8_t v){wb.push_back({1,a,v});};
        const auto inputs=read_inputs(script);
        size_t input=0;
        uint64_t writes=0;
        const auto require=[&](bool good,const char* what) {
            if(!good) throw std::runtime_error(std::string(what)+" at frame "+std::to_string(native->frames)+" CPU step "+std::to_string(ca.instructions)+" "+ca.describe());
        };
        while(native->frames<frames) {
            while(input<inputs.size() && inputs[input].frame<=native->frames) {
                native->set_buttons(inputs[input].buttons); wide->set_buttons(inputs[input++].buttons);
            }
            const auto frame=native->frames;
            require(!ca.stopped,"Main CPU stopped");
            ca.step(); cb.step();
            require(cpu_state(ca)==cpu_state(cb),"CPU architectural state diverged");
            require(spc_state(sa)==spc_state(sb),"SPC architectural state diverged");
            require(wa==wb,"Ordered CPU/SPC write callbacks diverged");
            writes+=wa.size(); wa.clear(); wb.clear();
            if(native->frames==frame) continue;
            require(native->frames==wide->frames && native->master_clocks()==wide->master_clocks() && native->scanline()==wide->scanline() && native->hclock()==wide->hclock(),"Hardware clocks diverged");
            require(native->wram==wide->wram,"WRAM/entity state diverged");
            require(native->sram==wide->sram,"Save RAM diverged");
            require(native->vram==wide->vram && native->cgram==wide->cgram && native->oam==wide->oam,"PPU memory diverged");
            require(std::equal(native->ppu_registers().begin(),native->ppu_registers().end(),wide->ppu_registers().begin()),"PPU registers diverged");
            require(native->apu_to_cpu==wide->apu_to_cpu && native->cpu_to_apu==wide->cpu_to_apu,"APU ports diverged");
            require(sa.ram==sb.ram && sa.dsp==sb.dsp,"SPC/DSP memory diverged");
            for(unsigned reg=0;reg<128;++reg) require(da.read(reg)==db.read(reg),"DSP registers diverged");
            require(da.take_samples()==db.take_samples() && da.sample_frames()==db.sample_frames(),"Audio samples diverged");
            require(native->framebuffer==wide->framebuffer,"Native framebuffer diverged");
            // Presentation may intentionally shift scenery within an authored
            // boundary; only the native framebuffer is a simulation contract.
            if(native->frames%150==0 && native->frames<frames) {
                constexpr std::array<unsigned,6> widths={400,800,1024,256,672,398};
                wide->set_presentation_width(widths[(native->frames/150)%widths.size()]);
            }
            if(native->frames%1200==0) std::cout<<"verified frame "<<native->frames<<'\n'<<std::flush;
        }
        if(!output.empty()) {save(output+"-native.ppm",*native,false);save(output+"-wide.ppm",*wide,true);}
        std::cout<<"PASS game="<<game.title<<" frames="<<native->frames<<" CPUsteps="<<ca.instructions<<" SPCsteps="<<sa.instructions
                 <<" ordered_writes="<<writes<<" audio_frames="<<da.sample_frames()
                 <<"; dynamic widths preserve CPU/SPC state, all game/entity/PPU memory, clocks, writes, audio, native pixels\n";
    } catch(const std::exception& e) { std::cerr<<"FAIL: "<<e.what()<<'\n'; return 1; }
}
