// Bounded translated-game runner with frame-indexed controller input.
// Usage: game_smoke frames screenshot.ppm [frame:button_mask ...] [--interactive]
// Input uses the real controller path; no game-state memory is patched.
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
#include <string>
#include <utility>
#include <vector>

int main(int argc,char** argv) {
    if (argc<3) { std::cerr<<"Usage: game_smoke frames screenshot.ppm [frame:button_mask ...]\n"; return 2; }
    const auto frame_limit=std::stoull(argv[1]);
    bool interactive=false;
    std::string asset_path=std::getenv("EB_ASSET_PACK")?std::getenv("EB_ASSET_PACK"):"";
    std::vector<std::pair<uint64_t,uint16_t>> inputs;
    for (int i=3;i<argc;++i) {
        if (std::string(argv[i])=="--interactive") { interactive=true; continue; }
        if (std::string(argv[i])=="--assets" && i+1<argc) { asset_path=argv[++i]; continue; }
        const std::string event=argv[i]; const auto separator=event.find(':');
        if (separator==std::string::npos) { std::cerr<<"Bad input event "<<event<<'\n'; return 2; }
        inputs.emplace_back(std::stoull(event.substr(0,separator),nullptr,0),std::stoul(event.substr(separator+1),nullptr,0));
    }
    std::stable_sort(inputs.begin(),inputs.end());
    eb::GameAssets assets;
    try {
        if(asset_path.empty()) throw std::runtime_error("Set EB_ASSET_PACK or pass --assets <imported.ebpak>");
        assets=eb::load_game_assets(asset_path,eb::asset_profiles());
    } catch(const std::exception& error) { std::cerr<<error.what()<<'\n'; return 1; }
    // The validated pack chooses both program dispatch and version-specific
    // hardware metadata. No initial game state is injected after reset.
    auto bus=std::make_unique<eb::Bus>(assets.image,assets.version);
    eb::Spc spc(*bus); eb::Dsp dsp(spc); eb::Cpu cpu(*bus); cpu.reset();
    size_t event=0; int status=0;
    struct Trace { uint32_t pc; uint16_t a,x,y,s,d; uint8_t p,dbr; };
    std::array<Trace,64> trace{};
    uint64_t trace_count=0;
    const auto ram_word=[&](unsigned address) { return unsigned(bus->wram[address])|(unsigned(bus->wram[address+1])<<8); };
    const auto capture=[&](const std::string& path) {
        std::ofstream output(path,std::ios::binary);
        output<<"P6\n256 224\n255\n";
        for (const auto pixel:bus->framebuffer) {
            const char rgb[]={char(pixel>>16),char(pixel>>8),char(pixel)};
            output.write(rgb,3);
        }
        if (!output) throw std::runtime_error("Cannot write framebuffer");
        const auto leader=ram_word(0x5d78);
        std::cout<<"frame="<<bus->frames<<" leader="<<leader;
        if (leader<60) std::cout<<" x="<<ram_word(0x0b8e + leader)<<" y="<<ram_word(0x0bca + leader);
        // Inspect an isolated snapshot so even the CPU open-bus latch is untouched.
        auto snapshot=std::make_unique<eb::Bus>(*bus);
        std::cout<<" joy1="<<std::hex<<(unsigned(snapshot->read(0x4218))|(unsigned(snapshot->read(0x4219))<<8))
                 <<" pad_state="<<ram_word(0x65)<<" pad_held="<<ram_word(0x69)<<" pad_press="<<ram_word(0x6d)
                 <<" window_tail="<<ram_word(0x88e2)<<" focus="<<ram_word(0x8958);
        if (leader<60) std::cout<<" callback_high="<<ram_word(0x10b6 + leader);
        std::cout<<std::dec<<" screenshot="<<path<<'\n'<<std::flush;
    };
    const auto run_to=[&](uint64_t limit) {
        while (bus->frames<limit) {
            while (event<inputs.size() && inputs[event].first<=bus->frames) bus->set_buttons(inputs[event++].second);
            const auto frame=bus->frames;
            do {
                if (cpu.stopped) throw std::runtime_error("main CPU stopped");
                trace[trace_count++%trace.size()]={cpu.pc,cpu.a,cpu.x,cpu.y,cpu.s,cpu.d,cpu.p,cpu.dbr};
                cpu.step();
            } while (bus->frames==frame);
            dsp.take_samples();
            if (bus->frames>=12000 && bus->frames%60==0) {
                const auto leader=ram_word(0x5d78);
                if (leader<60) std::cout<<"frame="<<bus->frames<<" leader="<<leader
                    <<" x="<<ram_word(0x0b8e + leader)<<" y="<<ram_word(0x0bca + leader)
                    <<" direction="<<ram_word(0x5d76)<<'\n';
            }
        }
    };
    try {
        run_to(frame_limit);
        if (interactive) {
            capture(argv[2]);
            std::cout<<"Input: <frames> <joymask> <screenshot.ppm>, or quit\n"<<std::flush;
            std::string line;
            while (std::getline(std::cin,line) && line!="quit") {
                std::istringstream input(line); std::string frames,buttons,path,extra;
                if (!(input>>frames>>buttons>>path) || (input>>extra)) { std::cout<<"Expected frames buttons screenshot\n"<<std::flush; continue; }
                const auto duration=std::stoull(frames,nullptr,0), mask=std::stoull(buttons,nullptr,0);
                if (duration>36000 || mask>65535) { std::cout<<"Frame/mask out of range\n"<<std::flush; continue; }
                bus->set_buttons(mask);
                run_to(bus->frames+duration);
                capture(path);
            }
        }
    } catch (const std::exception& error) {
        std::cerr<<error.what()<<'\n'; status=1;
        const auto first=trace_count>trace.size()?trace_count-trace.size():0;
        for (auto i=first;i<trace_count;++i) {
            const auto& t=trace[i%trace.size()];
            std::cerr<<std::hex<<"PC="<<t.pc<<" A="<<t.a<<" X="<<t.x<<" Y="<<t.y<<" S="<<t.s
                     <<" D="<<t.d<<" P="<<unsigned(t.p)<<" DB="<<unsigned(t.dbr)<<'\n';
        }
        std::cerr<<std::dec;
    }
    std::ofstream dump(std::string(argv[2])+".wram",std::ios::binary);
    dump.write(reinterpret_cast<const char*>(bus->wram.data()),bus->wram.size());
    std::ofstream save(std::string(argv[2])+".srm",std::ios::binary);
    save.write(reinterpret_cast<const char*>(bus->sram.data()),bus->sram.size());
    std::ofstream cgram(std::string(argv[2])+".cgram",std::ios::binary);
    cgram.write(reinterpret_cast<const char*>(bus->cgram.data()),bus->cgram.size());
    std::ofstream vram(std::string(argv[2])+".vram",std::ios::binary);
    vram.write(reinterpret_cast<const char*>(bus->vram.data()),bus->vram.size());
    std::ofstream oam(std::string(argv[2])+".oam",std::ios::binary);
    oam.write(reinterpret_cast<const char*>(bus->oam.data()),bus->oam.size());
    std::ofstream ppu(std::string(argv[2])+".ppu",std::ios::binary);
    ppu.write(reinterpret_cast<const char*>(bus->ppu_registers().data()),bus->ppu_registers().size());
    capture(argv[2]);
    std::cout<<"frames="<<bus->frames<<" cpu_instructions="<<cpu.instructions
             <<" spc_instructions="<<spc.instructions<<" audio_frames="<<dsp.sample_frames()<<'\n'
             <<cpu.describe()<<'\n'<<spc.describe()<<'\n';
    return status;
}
