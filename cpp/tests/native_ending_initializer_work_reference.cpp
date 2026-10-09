// Original INITIALIZE_CREDITS_SCENE blocks and actual called helpers retire
// normally. Every instruction checks costs, retained globals and owner bytes.
#include "eb/native/cutscenes/ending/initializer_work.hpp"
#include "eb/native/actor_world.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <algorithm>
#include <iostream>
namespace {
using namespace eb;
using namespace eb::native;
using namespace eb::native::cutscenes::ending;
void check(bool ok,const std::string &s){if(!ok)throw std::runtime_error(s);}
unsigned checks{},cases{},instructions{},stores{};
class Work final:public story::SourceWorkService {
public:
  Work(const ActorWorld &actors,const battle::PsiDisplayState &video,const GameAssets &assets,
      bool fast,unsigned preceding):timing(assets.image,assets.version),actors_(actors),video_(video),fast_(fast) {
    timing.write_byte(0x4200,0);timing.write_byte(0x420d,fast);
    timing.advance_master_clocks_with_refresh(preceding);
  }
  bool failed() const noexcept override {return poisoned;}
  bool poisoned{};
  bool uses(const ActorWorld &a,const battle::PsiDisplayState &v) const noexcept override{return &a==&actors_&&&v==&video_;}
  void retire_source_work(story::SourceWorkCost c,const std::function<void()> &effect) override {
    last=c;++count;if(effect){effect();++effects;}
    timing.advance_master_clocks_with_refresh(c.master_clocks(fast_));
  }
  void retire_dma_work(story::SourceWorkCost,unsigned,const std::function<void()> &) override {throw std::logic_error("Initializer blocks have no DMA");}
  story::SourceWorkCost last{};
  unsigned count{},effects{};
  SnesBus timing;
private:
  const ActorWorld &actors_;
  const battle::PsiDisplayState &video_;
  bool fast_;
};
enum class Block { Frame,Font,Sprites,PaletteClear,TextClear };
unsigned begin_pc(bool jp,Block block) {
  switch(block){
  case Block::Frame:return jp?0xc4c182:0xc4f148;
  case Block::Font:return jp?0xc4c20d:0xc4f1d3;
  case Block::Sprites:return jp?0xc4c221:0xc4f1e7;
  case Block::PaletteClear:return jp?0xc4c235:0xc4f1fb;
  case Block::TextClear:return jp?0xc4c269:0xc4f22d;
  }
  throw std::logic_error("Unknown block");
}
unsigned end_pc(bool jp,Block block) {
  switch(block){
  case Block::Frame:return jp?0xc4c19a:0xc4f160;
  case Block::Font:return jp?0xc4c221:0xc4f1e7;
  case Block::Sprites:return jp?0xc4c235:0xc4f1fb;
  case Block::PaletteClear:return jp?0xc4c246:0xc4f20a;
  case Block::TextClear:return jp?0xc4c28e:0xc4f252;
  }
  throw std::logic_error("Unknown block");
}
std::unique_ptr<InitializerWork::Operation> begin(InitializerWork &work,Block b,InitializerCall call) {
  switch(b){
  case Block::Frame:return work.begin_palette_copy(PalettePart::Frame,call);
  case Block::Font:return work.begin_palette_copy(PalettePart::Font,call);
  case Block::Sprites:return work.begin_palette_copy(PalettePart::Sprites,call);
  case Block::PaletteClear:return work.begin_palette_clear(call);
  case Block::TextClear:return work.begin_text_clear(call);
  }
  throw std::logic_error("Unknown block");
}
void run(const GameAssets &assets) {
  Resources resources(assets.image,assets.version);
  auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
  auto scripts=import_action_scripts(assets.image,assets.version);
  ActorWorld actors(sprites,scripts,assets.version);battle::PsiDisplayState video;
  const bool jp=assets.version==GameVersion::JP;
  for(const bool fast:{false,true})for(const unsigned low:{0u,0x14u,0xd4u,0xffu})
      for(const unsigned preceding:{0u,516u,306876u,357360u})for(const bool slow_caller:{false,true})
      for(const auto block:{Block::Frame,Block::Font,Block::Sprites,Block::PaletteClear,Block::TextClear}) {
    encounter_reference::Source source(assets);
    source.bus->write_byte(0x4200,0);source.bus->write_byte(0x420d,fast);
    source.bus->advance_master_clocks_with_refresh(preceding);
    source.cpu.direct_page=std::uint16_t(0x1d00|low);
    source.cpu.program_counter=begin_pc(jp,block)^(slow_caller?0x800000u:0);
    source.cpu.accumulator=source.cpu.x_index=source.cpu.y_index=0;
    source.cpu.status_register=MainCpu65816::InterruptDisable;
    const unsigned end=end_pc(jp,block)^(slow_caller?0x800000u:0);
    Work clock(actors,video,assets,fast,preceding);
    InitializerWorkState state{0xbeef};battle::PaletteBankState palette;
    std::array<std::uint8_t,2048> text;
    const unsigned text_base=jp?0x8176:0x7dfe;
    for(unsigned i=0;i<256;++i){palette.staged_color(i)=std::uint16_t(i*571+0x8123);source.put(0x200+i*2,palette.staged_color(i));}
    for(unsigned i=0;i<text.size();++i)text[i]=source.bus->work_ram[text_base+i]=std::uint8_t(i*73+91);
    const auto text_before=text;const auto displayed_before=palette.displayed;
    palette.upload_mode=0x18;source.put(0xa5,state.memcpy_words_left);
    source.put(0x1fe,0x1357);source.put(0x400,0x2468);
    source.put(text_base-2,0xabcd);source.put(text_base+2048,0xdef0);
    const auto d=source.cpu.direct_page;
    unsigned pointer=block==Block::Frame?resources.compressed_frame().source_identity:
        block==Block::Font?resources.compressed_font().source_identity:
        block==Block::Sprites?0xc00000+cutscenes::credits_content_layout(assets.version).palette:
        block==Block::PaletteClear?0xc30000:0x7f0000;
    const unsigned pointer_at=d+(block==Block::TextClear?6:14);
    source.put(pointer_at,pointer);source.put(pointer_at+2,pointer>>16);
    source.put(d+2,0x220);
    InitializerWork work(resources,clock,state,palette,text,actors,video);
    auto op=begin(work,block,{std::uint8_t(low),slow_caller});
    const auto stack=source.cpu.stack_pointer;
    const std::string label=assets.title+" block="+std::to_string(unsigned(block))+" D="+std::to_string(low)+
        " fast="+std::to_string(fast)+" phase="+std::to_string(preceding)+" slowcaller="+std::to_string(slow_caller);
    while(!op->complete()) {
      const auto pc=source.cpu.program_counter;const auto cycle=source.cpu.cycle_count;
      const auto source_line=op->source_line();
      source.step();op->advance(1);
      const auto context=label+" atom="+std::to_string(op->retired_atoms())+" pc="+std::to_string(pc)+
          " file="+op->source_file()+" line="+std::to_string(source_line);
      check(source.cpu.cycle_count-cycle==clock.last.cpu_cycles,context+" architectural cycles");
      check(source.bus->master_clocks()==clock.timing.master_clocks(),context+" exactbyte/refresh clocks source="+
          std::to_string(source.bus->master_clocks())+" native="+std::to_string(clock.timing.master_clocks()));
      check(source.bus->scanline_index()==clock.timing.scanline_index()&&
          source.bus->scanline_clock()==clock.timing.scanline_clock()&&
          source.bus->completed_frames==clock.timing.completed_frames,context+" hardware phase");
      check(state.memcpy_words_left==source.word(0xa5),context+" retainedMEMCPY_WORDS_LEFT");
      for(unsigned i=0;i<256;++i)if(palette.staged_color(i)!=source.word(0x200+i*2))check(false,context+" paletteword="+std::to_string(i));
      check(std::equal(text.begin(),text.end(),source.bus->work_ram.begin()+text_base),context+" all2048textbytes");
      check(op->source_pointer()==(source.word(pointer_at)|(source.word(pointer_at+2)<<16)),context+" actualsourcepointer slots");
      ++instructions;checks+=262;
      check(instructions<2000000,"Initializer instruction bound");
    }
    check(source.cpu.program_counter==end&&source.cpu.stack_pointer==stack,label+" exact block return/PC");
    check(palette.upload_mode==0x18&&palette.displayed==displayed_before,label+" staging-only owner boundary");
    check(source.word(0x1fe)==0x1357&&source.word(0x400)==0x2468&&source.word(text_base-2)==0xabcd&&
        source.word(text_base+2048)==0xdef0,label+" source stores stay within owner");
    if(block==Block::TextClear)check(std::equal(text.begin()+1024,text.end(),text_before.begin()+1024),label+" actual retained BG2 tail");
    check(!source.nmis&&!source.polls&&!work.busy()&&!work.failed(),label+" no invented publication/poll");
    stores+=clock.effects;++cases;
  }
  {
    Work clock(actors,video,assets,false,0);InitializerWorkState state{0x1234};battle::PaletteBankState palette;
    std::array<std::uint8_t,2048> text;text.fill(0xa5);
    InitializerWork work(resources,clock,state,palette,text,actors,video);
    auto op=work.begin_text_clear({0xd4,false});bool rejected{};
    try {work.begin_palette_clear({0xd4,false});}catch(const std::logic_error &){rejected=true;}
    check(rejected&&!clock.count&&state.memcpy_words_left==0x1234,"Active initializer admission mutated owners");
    op.reset();rejected=false;
    try{work.begin_text_clear({0xd4,false});}catch(const std::logic_error &){rejected=true;}
    check(rejected&&work.failed()&&!clock.count&&std::all_of(text.begin(),text.end(),[](auto x){return x==0xa5;}),
        "Abandoned-before-first-advance initializer continuity");
  }
  {
    Work clock(actors,video,assets,false,0);InitializerWorkState state{0x1234};battle::PaletteBankState palette;
    std::array<std::uint8_t,2048> text;text.fill(0xa5);
    InitializerWork work(resources,clock,state,palette,text,actors,video);
    Resources other_resources(assets.image,assets.version);battle::PaletteBankState other_palette;
    std::array<std::uint8_t,2048> other_text{};
    check(work.uses(resources,clock,palette,text,actors,video)&&
        !work.uses(other_resources,clock,palette,text,actors,video)&&
        !work.uses(resources,clock,other_palette,text,actors,video)&&
        !work.uses(resources,clock,palette,other_text,actors,video),"Initializer requires actual borrowed owners");
    auto op=work.begin_text_clear({0xd4,false});clock.poisoned=true;bool rejected{};
    try {op->advance(1);}catch(const std::logic_error &){rejected=true;}
    check(rejected&&!clock.count&&state.memcpy_words_left==0x1234&&
        std::all_of(text.begin(),text.end(),[](auto x){return x==0xa5;}),"Failed actual clock changed text/counter/time");
    op.reset();rejected=false;
    try {work.begin_text_clear({0xd4,false});}catch(const std::logic_error &){rejected=true;}
    check(rejected&&!clock.count,"Failed clock admitted new initializer");
    rejected=false;
    try {InitializerWork poisoned(resources,clock,state,palette,text,actors,video);}
    catch(const std::logic_error &){rejected=true;}
    check(rejected,"Failed clock admitted new initializer owner");
  }
  std::cout<<"PASS "<<assets.title<<" initializerblocks cases="<<cases<<" instructions="<<instructions<<" effects="<<stores
      <<" checks="<<checks<<" exact everyinstruction/counter/palette512/text2048/retainedtail/clocks/phase"
      <<" DP0/14/D4/FF FastROM0/1 callerC4/44; noNMIorPOLL invented\n";
}
}
int main(int argc,char **argv){if(argc!=2)return 77;try{run(load_game_assets(argv[1],asset_profiles()));}
catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
