// Independent original PROCESS_OVERWORLD_TASKS body, including each actual
// phone/task store's retirement clocks. Source CPU/bus stays in this test.
#define NATIVE_WORLD_SCHEDULER_REFERENCE_NO_MAIN
#include "native_world_scheduler_reference.cpp"
#include "eb/native/story/source_work.hpp"

namespace {
struct Retirement {
  std::uint64_t clocks{};
  std::uint16_t phone{};
  std::array<std::uint16_t,4> tasks{};
  bool operator==(const Retirement &) const = default;
};
Retirement retained(const Fixture &fixture,std::uint64_t clocks) {
  Retirement out{clocks,fixture.phone.timer};
  for(unsigned i=0;i<out.tasks.size();++i)out.tasks[i]=fixture.scheduler.tasks()[i].frames_left;
  return out;
}
Retirement retained(const Original &source) {
  Retirement out{source.bus->master_clocks(),std::uint16_t(source.word(source.l.timer))};
  for(unsigned i=0;i<out.tasks.size();++i)out.tasks[i]=std::uint16_t(source.word(source.l.tasks+i*6));
  return out;
}
class SourceTiming final : public story::SourceWorkService {
public:
  SourceTiming(const eb::GameAssets &a,Fixture &fixture,bool fast)
      :bus(a.image,a.version),fixture(fixture),fast(fast) {bus.write_byte(0x420d,fast);}
  bool uses(const ActorWorld &,const battle::PsiDisplayState &) const noexcept override {return false;}
  void retire_source_work(story::SourceWorkCost cost,const std::function<void()> &effect={}) override {
    const auto before=retained(fixture,0);
    if(effect)effect();
    bus.advance_master_clocks_with_refresh(cost.master_clocks(fast));
    const auto after=retained(fixture,bus.master_clocks());
    if(before.phone!=after.phone||before.tasks!=after.tasks)writes.push_back(after);
  }
  void retire_dma_work(story::SourceWorkCost,unsigned,const std::function<void()> &) override {
    throw std::logic_error("Scheduler body unexpectedly requested DMA");
  }
  eb::SnesBus bus;
  Fixture &fixture;
  bool fast;
  std::vector<Retirement> writes;
};
void timed_original(Original &source,bool bank_zero,std::vector<Retirement> &writes) {
  auto &cpu=source.cpu;
  cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
  cpu.data_bank=0x7e;cpu.direct_page=0x0200;cpu.stack_pointer=0x1fff;
  cpu.program_counter=bank_zero?0x00ff00:0xc0ff00;
  const auto end=cpu.program_counter+3;
  cpu.execute_instruction<0x20>(source.l.process&0xffff,3);
  for(unsigned i=0;i<200;++i) {
    if(cpu.program_counter==end&&cpu.stack_pointer==0x1fff)return;
    const auto before=retained(source);cpu.step_instruction();const auto after=retained(source);
    if(before.phone!=after.phone||before.tasks!=after.tasks)writes.push_back(after);
  }
  throw std::runtime_error("Original source scheduler body did not return");
}
void source_scheduler(const eb::GameAssets &assets) {
  Content content(assets);unsigned cases{};
  for(unsigned gates=0;gates<16;++gates)for(unsigned frame:{0u,1u,255u})
    for(unsigned timer:{0u,1u,65535u})for(bool live:{false,true})
    for(bool bank_zero:{false,true})for(bool fast:{false,true}) {
      Fixture fixture(content);Original source(assets);
      if(gates&1)fixture.open();
      fixture.windows.prompt_state().battle_mode=gates&2;
      fixture.appearance.battle_swirl_ticks=gates&4;fixture.maintenance.enemy_touched=gates&8;
      fixture.clock.frame_counter=std::uint8_t(frame);fixture.phone={std::uint16_t(timer),0xbeef};
      if(live)for(unsigned i=0;i<4;++i)fixture.scheduler.schedule(std::uint16_t(i+2),Callback::EscalatorEnter);
      source.seed(fixture);source.bus->write_byte(0x420d,fast);
      SourceTiming timing(assets,fixture,fast);
      const auto bound=fixture.scheduler.source_master_clocks({bank_zero,true},fast);
      // NMI bounds this body before its actual INC FRAME_COUNTER. Predicting
      // the published byte must not mutate the real clock/phone/task owners.
      const auto retained_before=retained(fixture,0);
      fixture.clock.frame_counter=std::uint8_t(frame-1);
      const auto predicted=fixture.scheduler.source_master_clocks({bank_zero,true},fast,std::uint8_t(frame));
      require(predicted==bound&&fixture.clock.frame_counter==std::uint8_t(frame-1)&&
          retained(fixture,0)==retained_before,"Predicted scheduler bound changed owners or costs");
      fixture.clock.frame_counter=std::uint8_t(frame);
      // Same genuine near JSR; the callback adapter's caller owns this atom.
      timing.retire_source_work({6,bank_zero?0u:3u,bank_zero?5u:2u,0});
      std::vector<Retirement> expected;
      timed_original(source,bank_zero,expected);
      fixture.scheduler.with_source_work(timing,{bank_zero,true},[&]{fixture.scheduler.process_frame();});
      context=assets.title+" gates="+std::to_string(gates)+" frame="+std::to_string(frame)+" timer="+std::to_string(timer)+
          " live="+std::to_string(live)+" bank_zero="+std::to_string(bank_zero)+" fast="+std::to_string(fast);
      require(timing.bus.master_clocks()==source.bus->master_clocks(),"Source scheduler clocks differ native="+
          std::to_string(timing.bus.master_clocks())+" original="+std::to_string(source.bus->master_clocks()));
      require(timing.writes==expected,"Source scheduler write retirement differs");
      source.compare(fixture);require(bound>0,"Source scheduler work bound is empty");++cases;
    }
  {
    Fixture fixture(content);fixture.scheduler.schedule(1,Callback::EscalatorEnter);
    SourceTiming timing(assets,fixture,true);bool rejected{},called{};
    try{fixture.scheduler.with_source_work(timing,{true,true},[&]{called=true;fixture.scheduler.process_frame();});}
    catch(const std::logic_error&){rejected=true;}
    require(rejected&&!called&&!fixture.scheduler.failed()&&fixture.scheduler.tasks()[0].frames_left==1&&
        timing.bus.master_clocks()==0,"Unowned scheduler expiration mutated real owners");
  }
  std::cout<<"PASS source scheduler "<<assets.title<<" cases="<<cases<<" exact phone/task retirement and regional helper clocks\n";
}
}
int main(int argc,char **argv) {
  try{if(argc<2)return 77;for(int i=1;i<argc;++i)source_scheduler(eb::load_game_assets(argv[i],eb::asset_profiles()));return 0;}
  catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}
}
