// Actual GET_ACTIVE_WINDOW_ADDRESS and CREATE_WINDOW, using the original
// retained BUFFER alias as input. No helper under test is intercepted.
// The reused historical oracle has formatting/aggregate warnings. Its code is
// unchanged; strict diagnostics remain enabled for the new reference below.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmisleading-indentation"
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#pragma GCC diagnostic ignored "-Wsign-compare"
#define main prior_ambient_window_reference_main
#include "native_dialogue_window_reference.cpp"
#undef main
#pragma GCC diagnostic pop
#include "eb/native/dialogue/conversation.hpp"

namespace {
void ambient_reference(const eb::GameAssets& assets) {
  const auto fonts=dialogue::FontResources::import(assets.image,assets.version);
  const auto resources=dialogue::WindowResources::import(assets.image,assets.version);
  std::array<std::uint8_t,65536> scratch{}; // Must outlive bound host.
  std::array<std::uint8_t,8192> animation{};
  WindowPair pair(assets,fonts,resources);pair.host->bind_ambient_register_source(scratch);
  pair.host->bind_ambient_animation_source(animation);
  const bool jp=assets.version==eb::GameVersion::JP;
  const unsigned alias=jp?0x8c24:0x88e2,entry=jp?0xc10504:0xc10301;
  pair.operation({dialogue::WindowAction::Open,dialogue::WindowId{0},{},0});
  pair.operation({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
  pair.source.put(pair.source.p.focus,0xffff);pair.state.focus.reset();
  auto set=[&](unsigned value){scratch[alias]=std::uint8_t(value);scratch[alias+1]=std::uint8_t(value>>8);pair.source.put(pair.source.p.open+0xfffe,value);};
  unsigned admitted{},rejected{};
  for(unsigned raw=0;raw<65536;++raw) {
    set(raw);pair.source.call(entry,false);
    const unsigned address=pair.source.cpu.accumulator;
    const unsigned delta=std::uint16_t(address-pair.source.p.windows);
    const bool owned=address==pair.source.p.dummy || (delta%pair.source.p.record_size==0 && delta/pair.source.p.record_size<8);
    require(pair.state.ambient_lookup()==raw,"Live ambient raw selector differs");
    std::optional<unsigned> slot;bool failed{};
    try{slot=pair.state.ambient_slot();}catch(const std::out_of_range&){failed=true;}
    require(failed==!owned,"Native ambient register ownership differs from complete original address");
    if(owned){const unsigned actual=*slot==0xffff?pair.source.p.dummy:pair.source.p.windows+*slot*pair.source.p.record_size;require(actual==address,"Native ambient register address differs");++admitted;}else ++rejected;
  }
  for(unsigned raw:{0u,1u,0xffffu,jp?0x4000u:0x8000u}) {
    pair.source.put(pair.source.p.focus,0xffff);pair.state.focus.reset();set(raw);
    for(unsigned slot=0;slot<8;++slot){pair.state.registers_at(slot)=bank(slot);seed_bank(pair.source,pair.source.record(slot),bank(slot));}
    pair.state.dummy=bank(99);seed_bank(pair.source,pair.source.p.dummy,bank(99));
    pair.operation({dialogue::WindowAction::Open,dialogue::WindowId{2},{},0});
    compare_bank(pair.source,pair.source.record(pair.source.slot(2)),pair.state.window(),"Ambient CREATE");
  }
  require(admitted>8 && rejected>65000,"Ambient alias proof lacks wrap and rejection coverage");
  unsigned animation_cases{};
  unsigned animation_x_cases{};
  if(jp)for(unsigned pattern:{0u,7u,193u}) {
    for(unsigned i=0;i<animation.size();++i)
      pair.source.bus->work_ram[0xc000+i]=animation[i]=std::uint8_t(pattern?i*29+pattern:0);
    const auto before=animation;
    pair.source.put(pair.source.p.focus,0xffff);pair.state.focus.reset();set(0x80c3);
    pair.source.call(entry,false);
    require(pair.source.cpu.accumulator==0xc3a6,"Actual Pokey ambient source address differs");
    pair.operation({dialogue::WindowAction::Open,dialogue::WindowId{2},{},0});
    compare_bank(pair.source,pair.source.record(pair.source.slot(2)),pair.state.window(),"Animation ambient CREATE");
    require(animation==before && std::equal(animation.begin(),animation.end(),pair.source.bus->work_ram.begin()+0xc000),
            "Readonly CREATE changed actual animation staging");
    ++animation_cases;
  }
  if(jp) {
    pair.source.put(pair.source.p.focus,0xffff);pair.state.focus.reset();set(0x80c3);
    for(unsigned value=0;value<65536;++value) {
      pair.source.put(0xc3b4,value);animation[0x3b4]=std::uint8_t(value);
      animation[0x3b5]=std::uint8_t(value>>8);
      pair.source.call(0xc106b8,false); // Complete regional GET_TEXT_X.
      require(pair.host->aliased_text_x()==pair.source.cpu.accumulator,
              "Aliased GET_TEXT_X differs from its complete original body");
      require(std::equal(animation.begin(),animation.end(),pair.source.bus->work_ram.begin()+0xc000),
              "Aliased GET_TEXT_X changed retained animation staging");
      ++animation_x_cases;
    }
  }
  std::cout<<(jp?"JP":"US")<<" ambient registers: 65536 original lookups, "<<admitted<<" owned aliases, "<<rejected<<" rejected addresses, 4 complete CREATE callers\n";
  if(jp)std::cout<<"JP retained animation alias: "<<animation_cases<<" complete original CREATE callers with cold and nonzero live staging\n";
  if(jp)std::cout<<"JP retained animation text X: "<<animation_x_cases<<" complete original GET_TEXT_X bodies\n";
}
void mutable_ambient_reference(const eb::GameAssets& assets) {
  if(assets.version!=eb::GameVersion::JP)return;
  const auto fonts=dialogue::FontResources::import(assets.image,assets.version);
  const auto resources=dialogue::WindowResources::import(assets.image,assets.version);
  std::array<std::uint8_t,65536> scratch{};
  std::array<std::uint8_t,8192> animation{};
  WindowPair pair(assets,fonts,resources);
  pair.host->bind_ambient_register_source(scratch);
  pair.host->bind_ambient_animation_source(animation);
  pair.host->bind_ambient_animation_layout(animation);
  pair.operation({dialogue::WindowAction::Open,dialogue::WindowId{0},{},0});
  // WindowPair reruns C200D9 after its original LOAD_WINDOW_GFX. TextOutput's
  // standalone entry already owns the first composition generation. Execute
  // a real reset to establish equal incoming brush/ring state; the helper
  // below never seeds or repairs a result after its entry.
  require(pair.source.get(pair.source.p.dma_done)==0,"Incoming reset has pending DMA");
  pair.source.call(0xc43be8,true);
  require(pair.output.publication_snapshot().current_column==pair.source.get(0xa02d),
          "Raw newline proof has unequal incoming publication rings");
  scratch[0x8c24]=0xc3;scratch[0x8c25]=0x80;
  pair.source.put(pair.source.p.open+0xfffe,0x80c3);
  auto program=std::make_shared<const dialogue::Program>(assets.version,
      std::vector<dialogue::ContentBlock>{{0,0,{1,0x13,2}}},
      std::vector<dialogue::Location>{{0,0}});
  unsigned completed{};
  for(unsigned font:{0u,1u,0xff00u,0xffffu})
    for(unsigned height:{0u,1u,2u,255u,0xffffu})
      for(unsigned y:{0u,126u,255u,0xfffeu,0xffffu}) {
        if(y==std::uint16_t(height/2u-1u))continue;
        for(unsigned i=0;i<animation.size();++i)
          pair.source.bus->work_ram[0xc000+i]=animation[i]=std::uint8_t(i*31+7);
        auto put=[&](unsigned at,unsigned value){
          animation[at]=std::uint8_t(value);animation[at+1]=std::uint8_t(value>>8);
          pair.source.put(0xc000+at,value);
        };
        put(0x3b2,height);put(0x3b4,255);put(0x3b6,y);put(0x3bb,font);
        pair.state.focus=dialogue::WindowId{0};
        dialogue::Conversation text(program,*pair.host);text.start(dialogue::EntryId{0});
        pair.state.focus.reset();pair.source.put(pair.source.p.focus,0xffff);
        const auto acknowledgements=counts.dma_acknowledgements;
        require(pair.source.get(pair.source.p.dma_done)==0,
                "Raw newline prerequisite has an undrained transfer");
        pair.source.call(0xc11174,false); // Complete JP PRINT_NEWLINE, real C43BE8 reset.
        require(counts.dma_acknowledgements==acknowledgements,
                "Raw newline reset used an intercepted DMA completion");
        require(text.advance()==dialogue::Progress::Suspended &&
                text.snapshot().consumed_bytes==2,
                "Native raw newline did not reach its next authored prompt");
        require(std::equal(animation.begin(),animation.end(),
                           pair.source.bus->work_ram.begin()+0xc000),
                "Complete original raw newline differs in retained animation bytes");
        require(pair.output.fractional_offset()==pair.source.get(0xa029) &&
                pair.output.composition_snapshot().brush_column==pair.source.get(0xa02b) &&
                pair.output.publication_snapshot().current_column==pair.source.get(0xa02d) &&
                pair.output.saturn_composition_active()==bool(pair.source.get(0xa02f)),
                "Complete original raw newline differs in shared brush/ring state font="+std::to_string(font)+" height="+std::to_string(height)+" y="+std::to_string(y)+" native="+std::to_string(pair.output.fractional_offset())+","+std::to_string(pair.output.composition_snapshot().brush_column)+","+std::to_string(pair.output.publication_snapshot().current_column)+","+std::to_string(pair.output.saturn_composition_active())+" source="+std::to_string(pair.source.get(0xa029))+","+std::to_string(pair.source.get(0xa02b))+","+std::to_string(pair.source.get(0xa02d))+","+std::to_string(pair.source.get(0xa02f)));
        if(font) {
          for(unsigned i=0;i<32;++i)
            require(pair.source.bus->work_ram[0x9fa9+i]==0xff,
                    "Original nonzero-font reset did not erase the live brush");
          const auto brush=pair.output.composition_snapshot();
          for(auto pixel:brush.columns.front())
            require(pixel==3,"Native nonzero-font reset did not erase the live brush");
        }
        pair.state.focus=dialogue::WindowId{0};
        pair.source.put(pair.source.p.focus,0);
        text.respond();require(text.advance()==dialogue::Progress::Finished,
                               "Native raw newline did not return");
        ++completed;
      }
  std::cout<<"JP retained mutable animation layout: "<<completed
           <<" complete original PRINT_NEWLINE bodies, full8192-byte owner and shared brush/ring\n";
}

}
int main(int argc,char**argv){try{if(argc<2)return 77;for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());ambient_reference(assets);mutable_ambient_reference(assets);}return 0;}catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}}
