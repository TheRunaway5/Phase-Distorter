// Complete original tag helpers: every retired instruction, tag store and
// resulting hardware clock is compared. No source helper is intercepted.
#include "eb/native/actor_world.hpp"
#include "eb/native/entities/graphics/transport.hpp"
#include "eb/native/world_display_fade.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <algorithm>
#include <iostream>
namespace {
using namespace eb::native;
namespace graphics=entities::graphics;
void check(bool value,const std::string &message){if(!value)throw std::runtime_error(message);}
struct Write {
  std::uint64_t cycles{};
  std::array<std::uint8_t,88> cells{};
  bool operator==(const Write &) const=default;
};
class Work final:public story::SourceWorkService {
public:
  Work(const ActorWorld &actors,const battle::PsiDisplayState &video,graphics::State &state)
      :actors_(actors),video_(video),state_(state){}
  bool uses(const ActorWorld &actors,const battle::PsiDisplayState &video) const noexcept override {
    return &actors==&actors_&&&video==&video_;
  }
  void retire_source_work(story::SourceWorkCost cost,const std::function<void()> &effect) override {
    if(effect){effect();writes.push_back({cycles,state_.cells});}
    costs.push_back(cost);cycles+=cost.cpu_cycles;
  }
  void retire_dma_work(story::SourceWorkCost,unsigned,const std::function<void()> &) override {
    throw std::logic_error("Tag helpers have no source DMA");
  }
  void reset(){costs.clear();writes.clear();cycles=0;}
  std::vector<story::SourceWorkCost> costs;
  std::vector<Write> writes;
  std::uint64_t cycles{};
private:
  const ActorWorld &actors_;
  const battle::PsiDisplayState &video_;
  graphics::State &state_;
};
void run(const eb::GameAssets &assets){
  encounter_reference::Source source(assets);
  source.bus->work_ram[0x2e]=0;source.bus->write_byte(0x4200,0);
  eb::SnesBus timing(assets.image,assets.version);
  auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
  auto scripts=import_action_scripts(assets.image,assets.version);
  ActorWorld actors(sprites,scripts,assets.version);
  graphics::State pool;
  battle::PsiScratch scratch;battle::PsiDisplayState video;
  WorldDisplayFade fade(WorldDisplayFadeState{0x80});
  graphics::Transport transport(assets.image,assets.version,pool,*sprites,video,scratch,fade);
  Work work(actors,video,pool);
  const unsigned table=source.jp?0x4d86:0x4a00;
  unsigned cases{},instructions{},stores{};
  const auto compare=[&](bool reserve,unsigned count,std::uint16_t role,
      std::uint16_t replacement,std::uint8_t direct_low,bool fast){
    std::copy(pool.cells.begin(),pool.cells.end(),source.bus->work_ram.begin()+table);
    source.bus->work_ram[table-1]=0xa6;source.bus->work_ram[table+88]=0x5b;
    source.bus->write_byte(0x420d,fast);timing.write_byte(0x420d,fast);
    const auto initial=pool.cells;
    work.reset();std::uint16_t result{};
    transport.with_source_work(work,actors,{direct_low,false,true},[&]{
      if(reserve)result=transport.reserve(count,role);else transport.remap(role,replacement);
    });
    const unsigned target=reserve?(source.jp?0xc01bac:0xc01b96):(source.jp?0xc01c27:0xc01c11);
    source.cpu.direct_page=std::uint16_t(0x1e00|direct_low);
    source.cpu.program_counter=0xc0ff00;source.cpu.accumulator=reserve?count:role;
    source.cpu.x_index=reserve?role:replacement;
    source.cpu.status_register=eb::MainCpu65816::InterruptDisable;
    const auto start_cycles=source.cpu.cycle_count;
    const auto initial_stack=source.cpu.stack_pointer;
    std::vector<Write> writes;
    source.cpu.observe_memory_write=[&](std::uint32_t at,std::uint8_t byte){
      if(at<0x7e0000+table||at>=0x7e0000+table+88)return;
      Write w;w.cycles=source.cpu.cycle_count-start_cycles;
      std::copy_n(source.bus->work_ram.begin()+table,88,w.cells.begin());
      w.cells[at-0x7e0000-table]=byte;writes.push_back(w);
    };
    const std::string context=assets.title+" case="+std::to_string(cases)+
        " helper="+(reserve?"C01B96":"ALLOC_SPRITE_MEM")+" D="+std::to_string(direct_low);
    unsigned instruction{};
    const auto retired=[&](std::uint64_t before){
      check(instruction<work.costs.size(),"Source retired more tag instructions: "+context);
      const auto &cost=work.costs[instruction++];
      check(source.cpu.cycle_count-before==cost.cpu_cycles,
          "Tag instruction architectural cycles differ index="+std::to_string(instruction-1)+" "+context);
      const unsigned clocks=cost.cpu_cycles*6+cost.slow_accesses*2+
          (fast?0:cost.rom_accesses*2)+cost.slow_io_accesses*6;
      timing.advance_master_clocks_with_refresh(clocks);
      check(timing.master_clocks()==source.bus->master_clocks(),
          "Tag instruction byte-access/refresh clocks differ index="+std::to_string(instruction-1)+" "+context);
    };
    auto before=source.cpu.cycle_count;source.cpu.execute_instruction<0x22>(target,4);retired(before);
    while(source.cpu.program_counter!=0xc0ff04||source.cpu.stack_pointer!=initial_stack){
      check(instruction<100000,"Original tag helper did not return: "+context);
      before=source.cpu.cycle_count;source.step();retired(before);
    }
    source.cpu.observe_memory_write={};
    check(instruction==work.costs.size()&&source.cpu.cycle_count-start_cycles==work.cycles,
        "Native tag helper omitted original instructions: "+context);
    check(writes==work.writes,"Actual tag store order/effect retirement differs: "+context);
    check(std::equal(pool.cells.begin(),pool.cells.end(),source.bus->work_ram.begin()+table),
        "Actual allocation tags differ: "+context);
    check(source.bus->work_ram[table-1]==0xa6&&source.bus->work_ram[table+88]==0x5b,
        "Actual tag helper writes outside88-cell owner: "+context);
    if(reserve)check(result==source.cpu.accumulator,"First-fit result differs: "+context);
    check(pool.cells==initial||!writes.empty(),"Tag state changed without a real source store: "+context);
    instructions+=instruction;stores+=writes.size();++cases;
  };
  for(const bool fast:{false,true})for(const unsigned low:{0u,0x10u,0x14u,0xffu}) {
    for(const unsigned prefix:{0u,1u,7u,8u,80u,88u})for(const unsigned count:{0u,1u,3u,8u,88u}){
      pool.cells.fill(0);std::fill_n(pool.cells.begin(),prefix,0x97);
      compare(true,count,std::uint16_t(cases%2?0xffff:29),0,std::uint8_t(low),fast);
    }
    for(const unsigned role:{0u,29u,0x1234u,0xffffu,0x8000u})
      for(const unsigned replacement:{0u,0x80u,0x1234u}) {
        for(unsigned i=0;i<88;++i)pool.cells[i]=std::uint8_t(i%3?role|0x80:i*73+31);
        compare(false,0,std::uint16_t(role),std::uint16_t(replacement),std::uint8_t(low),fast);
      }
  }
  check(source.nmis==0&&source.polls==0,"Allocation-only leaf introduced NMI/input work");
  std::cout<<"PASS "<<assets.title<<" tagwork cases="<<cases<<" instructions="<<instructions
      <<" stores="<<stores<<" exact cycles/byte-access/refresh clocks/order/all88bytes"
      <<" D0/10/14/FF FastROM0/1; completeC01B96+ALLOC_SPRITE_MEM only\n";
}
}
int main(int argc,char **argv){if(argc!=2)return 77;try{
  run(eb::load_game_assets(argv[1],eb::asset_profiles()));
}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
