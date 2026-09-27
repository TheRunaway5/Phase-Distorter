// Read-only runtime audit for generated instruction contracts, using GNU/LLD
// link-time wrappers. Build against the requested build tree's libeb_core.a and
// libeb_dsp.a and libeb_assets.a with both flags:
//   -Wl,--wrap=_ZN2eb3Cpu14execute_opcodeEhjj
//   -Wl,--wrap=_ZN2eb3Spc14execute_opcodeEhtj
// Usage: runtime_audit [frames=3600] [held_buttons=0] [input_script] [asset_pack]
// EB_ASSET_PACK can supply the imported pack instead of the final argument.
// This checks every actual helper call, including calls from interrupt paths.
#include "eb/cpu.hpp"
#include "eb/spc.hpp"
#include "eb/bus.hpp"
#include "eb/dsp.hpp"
#include "generated_assets.hpp"
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <unordered_set>
#include <vector>
std::uint64_t calls=0, immediate_calls=0, spc_calls=0, writes=0, code_writes=0;
std::unordered_set<unsigned> sites, immediates, spc_sites;
// Linker wrappers observe the same semantic helpers used by generated dispatch.
// Forwarding to __real__ preserves execution; counters report the route actually
// reached, not coverage of instruction sites that the route never visits.
extern "C" void __real__ZN2eb3Cpu14execute_opcodeEhjj(eb::Cpu*,unsigned char,unsigned,unsigned);
extern "C" void __wrap__ZN2eb3Cpu14execute_opcodeEhjj(eb::Cpu* c,unsigned char op,unsigned value,unsigned size) {
  ++calls; sites.insert(c->pc);
  unsigned flag=0;
  // M controls accumulator immediates and X controls index immediates. Compare
  // the generated operand length against live status before the helper changes
  // CPU state; BRK/COP separately require their consumed signature byte.
  switch(op) {case 0x09:case 0x29:case 0x49:case 0x69:case 0x89:case 0xa9:case 0xc9:case 0xe9:flag=0x20;break;
    case 0xa0:case 0xa2:case 0xc0:case 0xe0:flag=0x10;break;}
  if(flag) { ++immediate_calls; immediates.insert(c->pc); if(size!=unsigned((c->p&flag)?2:3))
    throw std::runtime_error("Immediate source/runtime width mismatch "+c->describe()+" source_length="+std::to_string(size)); }
  if((op==0x00 || op==0x02) && size!=2)
    throw std::runtime_error("Interrupt instruction signature length mismatch "+c->describe());
  __real__ZN2eb3Cpu14execute_opcodeEhjj(c,op,value,size);
}
extern "C" void __real__ZN2eb3Spc14execute_opcodeEhtj(eb::Spc*,unsigned char,unsigned short,unsigned);
extern "C" void __wrap__ZN2eb3Spc14execute_opcodeEhtj(eb::Spc* c,unsigned char op,unsigned short value,unsigned size) {
  ++spc_calls;spc_sites.insert(c->pc);
  // Check all bytes at the executing SPC RAM site, not only its opcode. This
  // catches a stale operand or modified loaded program using a matching opcode.
  for(unsigned i=0;i<size;++i) if(c->read(c->pc+i)!=(i==0?op:((value>>(8*(i-1)))&255)))
    throw std::runtime_error("SPC loaded instruction/source mismatch "+c->describe());
  __real__ZN2eb3Spc14execute_opcodeEhtj(c,op,value,size);
}
int main(int argc,char**argv) {
 try {
  const char* asset_path=argc>4?argv[4]:std::getenv("EB_ASSET_PACK");
  if(!asset_path) throw std::runtime_error("Set EB_ASSET_PACK or pass an imported asset pack as argument 4");
  const auto assets=eb::load_game_assets(asset_path,eb::asset_profiles());
  // Imported assets select their matching regional program before either CPU
  // is constructed. This audit never treats a zero-filled code template as ROM.
  auto bus=std::make_unique<eb::Bus>(assets.image,assets.version);
  eb::Spc spc(*bus);eb::Dsp dsp(spc);eb::Cpu cpu(*bus);cpu.reset();
  const unsigned frames=argc>1?std::stoul(argv[1]):3600;
  const auto held_buttons=argc>2?std::stoul(argv[2],nullptr,0):0;
  std::vector<std::pair<unsigned,unsigned>> input;
  if(argc>3) {
    std::ifstream file(argv[3]);
    if(!file) throw std::runtime_error("Cannot read input script");
    std::string line;
    while(std::getline(file,line)) {
      std::istringstream stream(line.substr(0,line.find('#')));
      std::string frame,buttons;
      if(stream>>frame>>buttons) input.emplace_back(std::stoul(frame),std::stoul(buttons,nullptr,0));
    }
  }
  bus->set_buttons(held_buttons);
  // Observe attempted writes into cartridge-mapped address space. The count is
  // diagnostic: it neither changes writes nor proves self-modifying code exists.
  cpu.observe_write=[&](uint32_t address,uint8_t){++writes;unsigned bank=address>>16;
    if(bank!=0x7e&&bank!=0x7f&&((bank&0x40)||(address&65535)>=32768))++code_writes;};
  unsigned long long iterations=0;
  std::size_t next_input=0;
  while(bus->frames<frames&&iterations++<1000000000ull) {
    while(next_input<input.size()&&input[next_input].first<=bus->frames)
      bus->set_buttons(input[next_input++].second);
    if(cpu.stopped) throw std::runtime_error("CPU stopped during audit");
    cpu.step();
    // Keep the DSP sample queue bounded during long headless audits. Draining
    // completed samples does not disable synthesis or advance clocks itself.
    if((iterations&65535)==0)dsp.take_samples();
  }
  std::cout<<"frames="<<bus->frames<<" instructions="<<cpu.instructions<<" calls="<<calls<<" sites="<<sites.size()
    <<" immediate_calls="<<immediate_calls<<" immediate_sites="<<immediates.size()<<" spc_calls="<<spc_calls
    <<" spc_sites="<<spc_sites.size()<<" writes="<<writes<<" attempted_rom_writes="<<code_writes<<"\n"
    <<cpu.describe()<<"\n"<<spc.describe()<<"\n";
  return calls==cpu.instructions&&bus->frames==frames?0:2;
 } catch(const std::exception& e) {std::cerr<<e.what()<<"\n";return 1;}
}
