#include "eb/native/world_player_area.hpp"
#include "eb/native/action_bindings.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <array>
#include <iostream>
namespace {
using namespace eb::native;
void run(const eb::GameAssets &assets) {
  encounter_reference::Source source(assets);ActionActorState actor;
  const std::array<std::uint16_t,13> differences{0,1,2,7,8,255,256,32767,32768,32769,65534,65535,12345};
  const std::array<std::uint16_t,7> widths{0,1,2,8,256,32768,65535};
  const unsigned game=source.jp?0x9aa9:0x97f5,delta=source.jp?3:0,variables=source.jp?0xe54:0xe5e;
  const std::uint16_t x=65530,y=32770;source.put(game+130-delta,x);source.put(game+134-delta,y);source.put(source.jp?0x1a38:0x1a42,7);
  unsigned cases{};
  for(const auto dx:differences)for(const auto dy:differences)for(const auto wx:widths)for(const auto wy:widths)for(const unsigned teleport:{0u,1u,65535u}) {
    actor.variables[0]=std::uint16_t(x+dx);actor.variables[1]=std::uint16_t(y+dy);actor.variables[2]=wx;actor.variables[3]=wy;
    for(unsigned i=0;i<4;++i)source.put(variables+i*60+14,actor.variables[i]);
    source.put(source.jp?0xa141:0x9f3f,teleport);
    source.call(source.jp?0xc44bf8:0xc46e74);
    const auto result=test_player_in_area(actor,x,y,std::uint16_t(teleport));
    if(source.cpu.accumulator!=unsigned(result))throw std::runtime_error("TEST_PLAYER_IN_AREA differs dx="+std::to_string(dx)+" dy="+std::to_string(dy)+" width="+std::to_string(wx)+","+std::to_string(wy));
    for(unsigned i=0;i<4;++i)if(source.word(variables+i*60+14)!=actor.variables[i])throw std::runtime_error("TEST_PLAYER_IN_AREA mutated actor variables");
    ++cases;
  }
  if(source.polls||source.nmis)throw std::runtime_error("TEST_PLAYER_IN_AREA unexpectedly waited or published");
  const std::array<std::uint8_t,1> operands{};ActionScriptData data(operands,0x30195);
  ActionBindings bindings(assets.version);const auto action=bindings.compile({ActionRequestKind::CallEngine,1,source.jp?0xc44bf8u:0xc46e74u,0,0,0,0x30195},data);
  if(action.operation!=NativeAction::TestPlayerInArea||action.parameter_bytes||action.temporary_input!=ActionTemporaryInput::Independent)throw std::runtime_error("TEST_PLAYER_IN_AREA binding does not retain its exact input contract");
  std::cout<<"PASS "<<assets.title<<" complete TEST_PLAYER_IN_AREA cases="<<cases<<" originalinstructions="<<source.cpu.instruction_count<<" noinput/NMI/variablewrites\n";
}
}
int main(int argc,char **argv){if(argc<2)return 77;try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
