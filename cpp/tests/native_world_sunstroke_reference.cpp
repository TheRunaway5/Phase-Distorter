// Complete regional INFLICT_SUNSTROKE_CHECK bodies, including RAND and hardware
// multiply, execute without interception. Incoming party values are test inputs.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/story/random.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>
using namespace eb::native;
namespace {
void check(bool v,const char *message) {if(!v) throw std::runtime_error(message);}
std::array<story::RandomState,256> seeds() {
  std::array<story::RandomState,256> result{};std::array<bool,256> found{};
  for(unsigned i=0;i<65536;++i) {
    story::RandomState state{std::uint16_t(i&255),std::uint16_t(0xab00|(i>>8))};auto next=state;
    const auto value=story::next_random(next);if(!found[value]){result[value]=state;found[value]=true;}
  }
  check(std::all_of(found.begin(),found.end(),[](bool v){return v;}),"RAND coverage incomplete");return result;
}
void run(const eb::GameAssets &assets) {
  const bool jp=assets.version==eb::GameVersion::JP;
  auto bus=std::make_unique<eb::SnesBus>(assets.image,assets.version);eb::MainCpu65816 cpu(*bus);
  party::State party(assets.version);WorldControlState control;WorldMaintenanceState state;story::RandomState random;
  const unsigned game=jp?0x9aa9:0x97f5,chars=jp?0x9c7f:0x99ce,stride=jp?94:95,shift=jp?1:0;
  const unsigned chosen=jp?0x514e:0x4dc8,suppression=jp?0x611e:0x5d98;
  const auto put=[&](unsigned at,unsigned v){bus->work_ram[at]=v;bus->work_ram[at+1]=v>>8;};
  const auto word=[&](unsigned at){return unsigned(bus->work_ram[at])|(unsigned(bus->work_ram[at+1])<<8);};
  const auto randoms=seeds();std::uint64_t instructions{},calls{},comparisons{},successes{};
  for(unsigned i=0;i<6;++i)put(chosen+2*i,chars+i*stride);
  auto invoke=[&] {
    put(game+140-(jp?3:0),control.trodden_surface_flags);put(suppression,state.overworld_status_suppression);
    put(chosen-2,state.current_party_member_tick?chars+(*state.current_party_member_tick-1)*stride:0);
    put(0x24,random.primary_word);put(0x26,random.secondary_word);
    std::array<std::array<std::uint8_t,95>,6> before{};
    for(unsigned i=0;i<6;++i) {
      bus->work_ram[game+150-(jp?3:0)+i]=party.display_order[i];
      bus->work_ram[game+156-(jp?3:0)+i]=party.controlled_order[i];
      const auto &c=party.character(i+1);
      for(unsigned j=0;j<stride;++j)bus->work_ram[chars+i*stride+j]=std::uint8_t(j*17+i*43);
      for(unsigned j=0;j<7;++j)bus->work_ram[chars+i*stride+14-shift+j]=c.afflictions[j];
      bus->work_ram[chars+i*stride+24-shift]=c.guts;
      std::copy_n(bus->work_ram.begin()+chars+i*stride,stride,before[i].begin());
    }
    cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
    cpu.data_bank=0x7e;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;
    cpu.program_counter=0xc0ff00;cpu.accumulator=0xd735;cpu.execute_instruction<0x22>(0xc20000,4);
    unsigned work=0;while(cpu.program_counter!=0xc0ff04 || cpu.stack_pointer!=0x1fff) {
      check(work++<20000,"Sunstroke helper did not return");cpu.step_instruction();++instructions;
    }
    const auto result=inflict_sunstroke_check(party,control,state,random);++calls;
    if(cpu.accumulator!=result) throw std::runtime_error("Sunstroke return mismatch source="+std::to_string(cpu.accumulator)+" native="+std::to_string(result)+" call="+std::to_string(calls));
    check(word(0x24)==random.primary_word&&word(0x26)==random.secondary_word,"Sunstroke RAND mismatch");
    check(word(chosen-2)==(state.current_party_member_tick?chars+(*state.current_party_member_tick-1)*stride:0),"Sunstroke retained selector mismatch");
    for(unsigned i=0;i<6;++i) {
      for(unsigned j=0;j<stride;++j) {
        const auto expected=j>=14-shift&&j<21-shift?party.character(i+1).afflictions[j-(14-shift)]:before[i][j];
        check(bus->work_ram[chars+i*stride+j]==expected,"Sunstroke changed wrong character state");++comparisons;
      }
      if(before[i][14-shift]!=6 && party.character(i+1).afflictions[0]==6)++successes;
    }
  };
  control.trodden_surface_flags=4;party.display_order={1,0,0,0,0,0};party.controlled_order={0,1,2,3,4,5};
  for(unsigned guts=0;guts<256;++guts)for(unsigned value=0;value<256;++value) {
    auto &c=party.character(1);c.guts=std::uint8_t(guts);c.afflictions={std::uint8_t(value&1?7:0),1,2,3,4,5,6};
    random=randoms[value];invoke();
  }
  for(unsigned status=0;status<256;++status)for(unsigned terminator=0;terminator<7;++terminator) {
    party.display_order={1,2,3,4,1,4};party.controlled_order={5,4,3,2,1,0};
    if(terminator<6)party.display_order[terminator]=terminator&1?5:0;
    for(unsigned i=1;i<=6;++i){party.character(i).afflictions[0]=std::uint8_t(status);party.character(i).guts=std::uint8_t(i*7);}
    random=randoms[status];invoke();
  }
  for(unsigned suppressed:{0u,1u,0xffffu})for(unsigned terrain=0;terrain<16;++terrain) {
    state.overworld_status_suppression=std::uint16_t(suppressed);control.trodden_surface_flags=std::uint16_t(terrain);
    party.display_order={1,2,3,4,1,2};random=randoms[0];invoke();
  }
  check(successes>0&&calls==67376,"Sunstroke coverage incomplete");
  // Invalid reachable records reject before the retained selector or RAND moves.
  state.overworld_status_suppression=0;control.trodden_surface_flags=4;party.display_order={1,2,0,0,0,0};party.controlled_order={0,255,0,0,0,0};
  const auto saved_random=random;const auto selected=state.current_party_member_tick;bool rejected=false;
  try{(void)inflict_sunstroke_check(party,control,state,random);}catch(const std::out_of_range&){rejected=true;}
  check(rejected&&random==saved_random&&state.current_party_member_tick==selected,"Invalid sunstroke admission mutated state");
  std::cout<<"PASS "<<assets.title<<" complete Sunstroke helpers="<<calls<<" record_bytes="<<comparisons<<" inflicted="<<successes<<" instructions="<<instructions<<"; all256 guts and RAND bytes, status/order/gates/retained selector\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}
}
