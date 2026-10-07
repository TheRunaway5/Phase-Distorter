// Complete original CC1928 and complete DISPLAY_TEXT scripts, with independent
// raw table/address reads and live typed native substitution owners. No helper,
// glyph, callback, or register publication is intercepted.
#include "native_dialogue_stat_letter_fixture.hpp"
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <array>

namespace {
using namespace stat_letter_test;
struct Source {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned record, helper, display;
  std::uint64_t instructions{};
  explicit Source(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image,assets.version)), cpu(*bus) {
    const bool jp=assets.version==eb::GameVersion::JP;
    record=jp?0x89c2:0x8650;helper=jp?0xc14c19:0xc14819;display=jp?0xc18913:0xc186b1;
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode=false;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.data_bank=0x7e;
    bus->work_ram.fill(0);
    put(jp?0x8c22:0x88e0,0);put(jp?0x8c96:0x8958,0);put(jp?0x8c26:0x88e4,0);
  }
  void put(unsigned at,unsigned value) {bus->work_ram.at(at)=std::uint8_t(value);bus->work_ram.at(at+1)=std::uint8_t(value>>8);}
  void put32(unsigned at,std::uint32_t value) {put(at,value);put(at+2,value>>16);}
  unsigned get(unsigned at) const {return unsigned(bus->work_ram.at(at))|unsigned(bus->work_ram.at(at+1))<<8;}
  std::uint32_t get32(unsigned at) const {return std::uint32_t(get(at))|std::uint32_t(get(at+2))<<16;}
  void call(unsigned entry,bool far,unsigned selector=0) {
    cpu.status_register=eb::MainCpu65816::InterruptDisable;
    cpu.accumulator=0;cpu.x_index=selector;cpu.y_index=0;
    cpu.program_counter=(entry&0xff0000)|0xff00;
    const auto stop=cpu.program_counter+(far?4:3);
    if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry&65535,3);
    for(unsigned n=0;n<100000;++n) {
      if(cpu.program_counter==stop) {
        check(cpu.stack_pointer==0x1fff && cpu.direct_page==0x1e00 && cpu.data_bank==0x7e,
              "Original stat query changed its caller ABI");
        return;
      }
      cpu.step_instruction();++instructions;
    }
    throw std::runtime_error("Original stat query did not return: "+cpu.describe_registers());
  }
};
void run(const eb::GameAssets &assets) {
  Fixture native(assets.version,assets.image);
  Source source(assets);
  std::array<std::vector<std::uint8_t>,128> strings;
  std::array<std::uint32_t,128> numbers{};
  auto key=[](d::StatKey value){return unsigned(value.field)+unsigned(value.party_index)*32;};
  for(unsigned id=0;id<native.catalog->stat_count();++id) {
    const auto &stat=native.catalog->stat(id);const auto index=key(stat.key);
    if(stat.kind==d::StatKind::String) {
      strings[index].resize(stat.size);
      for(unsigned byte=0;byte<stat.size;++byte)
        strings[index][byte]=std::uint8_t(byte==1?0:0x80+index*7+byte*29);
    } else numbers[index]=0x80fe0071u^(index*0x010203u);
  }
  native.windows.substitutions().configure(native.catalog,{
      [&](d::StatKey value){return numbers.at(key(value));},
      [&](d::StatKey value)->std::span<const std::uint8_t>{return strings.at(key(value));}});
  const unsigned table=assets.version==eb::GameVersion::JP?0x43305:0x4550f;
  unsigned helpers{},streams{};
  for(unsigned id=0;id<native.catalog->stat_count();++id) {
    const auto &stat=native.catalog->stat(id);const auto index=key(stat.key);
    const unsigned address=unsigned(assets.image[table+id*3+1])|unsigned(assets.image[table+id*3+2])<<8;
    const unsigned tag=assets.image[table+id*3];
    check(native.catalog->stat_tag(id)==tag,"Imported stat query tag differs from raw source table");
    std::vector<unsigned> indices;
    for(unsigned byte=1;byte<=stat.size;++byte)indices.push_back(byte);
    indices.push_back(tag+1);indices.push_back(0xffff);
    for(unsigned secondary:indices) {
      for(unsigned byte=0;byte<stat.size;++byte)
        source.bus->work_ram[address+byte]=stat.kind==d::StatKind::String?strings[index][byte]:
            std::uint8_t(numbers[index]>>(byte*8));
      source.put32(source.record+23,0xa5b6c7d8);source.put32(source.record+27,0x89abcdef);
      source.put(source.record+31,secondary);source.put32(source.record+33,0x10203040);
      source.put32(source.record+37,0x50607080);source.put(source.record+41,0x90a0);
      source.call(source.helper,false,id);
      const auto actual=native.run(id,std::uint16_t(secondary),secondary&1?1:999);
      check(actual==source.get32(source.record+23),"Complete CC1928 working value differs");
      check(source.get32(source.record+27)==native.state.window().active.argument &&
            source.get(source.record+31)==native.state.window().active.secondary &&
            source.get32(source.record+33)==native.state.window().saved.working &&
            source.get32(source.record+37)==native.state.window().saved.argument &&
            source.get(source.record+41)==native.state.window().saved.secondary,
            "Complete CC1928 changed another register");
      ++helpers;
    }
    // A real DISPLAY_TEXT caller verifies generic19-tree operand routing and
    // the return cursor. Raw selector0 must remain literal, with no fallback.
    source.bus->work_ram[0x7000]=0x19;source.bus->work_ram[0x7001]=0x28;
    source.bus->work_ram[0x7002]=std::uint8_t(id);source.bus->work_ram[0x7003]=2;
    source.put(source.record+31,tag+1);source.put32(source.record+23,0x12345678);
    source.put32(source.cpu.direct_page+14,0x7e7000);
    source.call(source.display,true);
    check(source.get32(source.record+23)==native.run(id,std::uint16_t(tag+1)),
          "Complete DISPLAY_TEXT stat query differs");
    ++streams;
  }
  std::cout<<(assets.version==eb::GameVersion::JP?"JP":"US")<<" stat letter: "<<helpers
           <<" complete original helpers, "<<streams<<" complete DISPLAY_TEXT callers, "
           <<source.instructions<<" original instructions\n";
}
}
int main(int argc,char **argv) {
  try {
    if(argc<2)return 77;
    for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
    return 0;
  }catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}
}
