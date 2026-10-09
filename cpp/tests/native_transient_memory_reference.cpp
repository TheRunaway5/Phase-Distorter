// Original SBRK executes unmodified. Its exhausted-bank cases run a real NMI.
#include "eb/native/display/transient_memory.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <set>
namespace {
void check(bool value,const char *message) {if(!value)throw std::runtime_error(message);}
void run(const eb::GameAssets &assets) {
  encounter_reference::Source source(assets);
  const unsigned capacity=source.jp?1024:512;
  const unsigned helper=source.jp?0xc086d7:0xc086de;
  unsigned cases{};
  std::array<std::uint8_t,2048> pattern{};
  for(unsigned i=0;i<capacity*2;++i) {
    pattern[i]=std::uint8_t(i*71+13);
    source.bus->work_ram[0x2000+i]=pattern[i];
  }
  // Every cursor, including the final retained byte; boundaries and actual
  // map/window row allocation sizes. No allocator byte is preset or cleared.
  for(unsigned selected=0;selected<2;++selected)for(unsigned cursor=0;cursor<capacity;++cursor) {
    const std::set<unsigned> sizes{0,1,8,32,64,128,256,capacity-cursor-1};
    for(const auto size:sizes) {
      if(size+cursor>=capacity)continue;
      eb::native::display::TransientMemory memory;memory.configure(assets.version);
      if(selected)memory.after_interrupt();
      for(unsigned bank=0;bank<2;++bank)
        std::copy_n(pattern.begin()+bank*capacity,capacity,memory.bank(bank).begin());
      check(memory.allocate(cursor).has_value(),"SBRK fixture cannot establish cursor");
      source.put(0xa3,0x2000+selected*capacity);
      source.put(0xa1,0x2000+selected*capacity+cursor);
      const auto allocation=memory.allocate(size);
      source.call(helper,size);
      check(allocation && source.cpu.accumulator==allocation->identity-0x7e0000+allocation->offset,
          "SBRK returned a different bank/cursor address");
      check(source.word(0xa1)==0x2000+selected*capacity+memory.cursor() &&
          source.word(0xa3)==0x2000+selected*capacity,
          "SBRK retained cursor/base differs");
      for(unsigned bank=0;bank<2;++bank)
        check(std::equal(memory.bank(bank).begin(),memory.bank(bank).end(),
              source.bus->work_ram.begin()+0x2000+bank*capacity),
              "SBRK allocation changed retained bank contents");
      ++cases;
    }
  }
  check(source.nmis==0 && source.polls==0,"Fitting SBRK allocation unexpectedly waited");
  source.initialize();
  source.call(source.jp?0xc0871f:0xc08726); // actual default IRQ callback
  unsigned waits{};
  for(unsigned selected=0;selected<2;++selected)for(const unsigned size:{1u,64u,128u,256u}) {
    eb::native::display::TransientMemory memory;memory.configure(assets.version);
    if(selected)memory.after_interrupt();
    check(memory.allocate(capacity-size).has_value(),"SBRK wait fixture cursor failed");
    check(!memory.allocate(size),"SBRK equality boundary did not require publication");
    for(unsigned bank=0;bank<2;++bank) {
      auto bytes=memory.bank(bank);
      std::copy_n(pattern.begin()+bank*capacity,capacity,bytes.begin());
      std::copy(bytes.begin(),bytes.end(),source.bus->work_ram.begin()+0x2000+bank*capacity);
    }
    source.put(0xa3,0x2000+selected*capacity);
    source.put(0xa1,0x2000+selected*capacity+capacity-size);
    source.put(0x2b,0);
    const auto nmis=source.nmis;
    source.call(helper,size);
    check(source.nmis==nmis+1,"Exhausted SBRK did not consume exactly one real NMI");
    memory.after_interrupt();
    const auto allocation=memory.allocate(size);
    check(allocation && source.cpu.accumulator==allocation->identity-0x7e0000 &&
        source.word(0xa1)==0x2000+memory.selected_bank()*capacity+size &&
        source.word(0xa3)==0x2000+memory.selected_bank()*capacity && source.word(0x2b)==0,
        "Exhausted SBRK did not retain actual next-bank and consumed-frame state");
    for(unsigned bank=0;bank<2;++bank)
      check(std::equal(memory.bank(bank).begin(),memory.bank(bank).end(),
            source.bus->work_ram.begin()+0x2000+bank*capacity),
            "SBRK NMI cleared retained temporary bytes");
    ++waits;
  }
  std::cout<<"PASS "<<assets.title<<" SBRK fittingcases="<<cases<<" actualNMIwaits="<<waits
      <<" bothretainedbanks/allcursors/equalityboundary sourceinstructions="<<source.cpu.instruction_count<<'\n';
}
}
int main(int argc,char **argv) {if(argc<2)return 77;try{for(int i=1;i<argc;++i)
  run(eb::load_game_assets(argv[i],eb::asset_profiles()));}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
