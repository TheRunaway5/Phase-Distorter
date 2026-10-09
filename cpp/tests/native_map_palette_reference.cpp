// Actual C47499/C4746B, including the DMA_QUEUE alias after color255.
#include "eb/native/world_palette_shift.hpp"
#include "eb/native/action_bindings.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <array>
#include <iostream>
namespace {
using namespace eb::native;
void check(bool value,const char *message){if(!value)throw std::runtime_error(message);}
void run(const eb::GameAssets &assets) {
  encounter_reference::Source source(assets);
  const unsigned backup_at=source.jp?0x47fc:0x4476,variables=source.jp?0xe54:0xe5e;
  source.put(source.jp?0x1a38:0x1a42,7);
  std::array<std::uint16_t,256> backup;
  unsigned cases{};
  for(unsigned variation=0;variation<8;++variation) {
    for(unsigned i=0;i<backup.size();++i)backup[i]=std::uint16_t(((i+variation)&31)|(((i*3+variation*5)&31)<<5)|(((i*7+variation*11)&31)<<10)|((i&1)<<15));
    for(unsigned magnitude=0;magnitude<64;++magnitude)for(const auto delta:{std::uint16_t(magnitude),std::uint16_t(0-magnitude),std::uint16_t(0x7fe0+magnitude)}) {
      for(unsigned i=0;i<backup.size();++i)source.put(backup_at+i*2,backup[i]);
      for(unsigned i=0;i<32;++i)source.put(0x200+i*2,0x8000+i);
      source.put(0x440,0xaced);source.put(variables+14,delta);
      const auto shifted=shift_map_palette(backup,delta);
      source.call(source.jp?0xc4521d:0xc47499);
      for(unsigned i=0;i<shifted.size();++i) {
        if(source.word(0x240+i*2)!=shifted[i])throw std::runtime_error("Map palette shift differs variation="+std::to_string(variation)+" delta="+std::to_string(delta)+" word="+std::to_string(i));
        check(source.word(backup_at+i*2)==backup[i],"Map palette shift mutated its retained backup");
      }
      for(unsigned i=0;i<32;++i)check(source.word(0x200+i*2)==0x8000+i,"Map palette shift touched earlier UI palettes");
      check(source.word(0x440)==0xaced,"Map palette shift exceeded its exact DMA alias");
      check(source.cpu.accumulator==24&&source.bus->work_ram[0x30]==24,"Map palette shift wrapper return/upload differs");
      check(source.word(variables+14)==delta,"Map palette shift modified its actor variable");
      ++cases;
    }
  }
  check(!source.polls&&!source.nmis,"Map palette shift unexpectedly waited or published");
  const std::array<std::uint8_t,1> operands{};ActionScriptData data(operands,0x30195);
  const auto bound=ActionBindings(assets.version).compile({ActionRequestKind::CallEngine,1,source.jp?0xc4521du:0xc47499u,0,0,0,0x30195},data);
  check(bound.operation==NativeAction::ShiftMapPalette&&!bound.parameter_bytes&&bound.temporary_input==ActionTemporaryInput::Independent,"Map palette shift binding differs");
  std::cout<<"PASS "<<assets.title<<" complete ambient map palette wrappers="<<cases<<" all256outputwords+64byteDMAalias originalinstructions="<<source.cpu.instruction_count<<" noinput/NMI/backupwrites\n";
}
}
int main(int argc,char **argv){if(argc<2)return 77;try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
