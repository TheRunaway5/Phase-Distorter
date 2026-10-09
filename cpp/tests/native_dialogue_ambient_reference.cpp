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
#include "eb/native/dialogue/ambient/layout.hpp"
#include "eb/native/actor_world.hpp"

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
  unsigned completed{};
  for(std::uint8_t newline:{std::uint8_t(0),std::uint8_t(1)})
    for(unsigned incoming_x:{0u,255u}) {
    auto program=std::make_shared<const dialogue::Program>(assets.version,
        std::vector<dialogue::ContentBlock>{{0,0,{newline,0x13,2}}},
        std::vector<dialogue::Location>{{0,0}});
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
          put(0x3b2,height);put(0x3b4,incoming_x);put(0x3b6,y);put(0x3bb,font);
          pair.state.focus=dialogue::WindowId{0};
          dialogue::Conversation text(program,*pair.host);text.start(dialogue::EntryId{0});
          pair.state.focus.reset();pair.source.put(pair.source.p.focus,0xffff);
          const auto acknowledgements=counts.dma_acknowledgements;
          require(pair.source.get(pair.source.p.dma_done)==0,
                  "Raw newline prerequisite has an undrained transfer");
          const bool executed = !newline || incoming_x;
          if (executed)
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
          if(font && executed) {
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
  }
  std::cout<<"JP retained mutable animation layout: "<<completed
           <<" complete original PRINT_NEWLINE bodies, full8192-byte owner and shared brush/ring\n";
}

void typed_ambient_reference(const eb::GameAssets &assets) {
  if(assets.version!=eb::GameVersion::JP)return;
  const auto fonts=dialogue::FontResources::import(assets.image,assets.version);
  const auto resources=dialogue::WindowResources::import(assets.image,assets.version);
  WindowPair pair(assets,fonts,resources);
  std::array<std::uint8_t,65536> scratch{};
  eb::native::PartyTrail trail;
  pair.host->bind_ambient_register_source(scratch);
  pair.host->bind_ambient_party_trail(trail);
  dialogue::ambient::Layout layout(pair.host->menu_options());layout.bind(trail);
  // Equal incoming shared composition, using the original reset body.
  pair.source.call(0xc43be8,true);
  unsigned completed{};
  for(unsigned raw:{0x0cdcu,0x0d98u})
    for(std::uint8_t newline:{std::uint8_t(0),std::uint8_t(1)})
      for(unsigned font:{0u,0xff00u})
        for(unsigned x:{0u,0xffffu})
          for(unsigned y:{19u,0xfffeu,0xffffu}) {
            trail.next_write=211;
            for(unsigned i=0;i<trail.points.size();++i)
              trail.points[i]={std::uint16_t(i*13),std::uint16_t(i*17),std::uint16_t(i*19),
                               std::uint16_t(i*23),std::uint16_t(i*29),std::uint16_t(i*31)};
            auto &menus=pair.host->menu_options();
            for(unsigned i=0;i<menus.size();++i) {
              menus[i]={};menus[i].page=std::uint16_t(i*11);menus[i].x=std::uint16_t(i*13);
              menus[i].y=std::uint16_t(i*17);menus[i].userdata=std::uint16_t(i*19);
              menus[i].sound_effect=std::uint8_t(i*23);
              for(unsigned j=0;j<menus[i].label.size();++j)menus[i].label[j]=std::uint8_t(i*29+j*31);
            }
            const auto base=std::uint16_t(0x89c2u+std::uint16_t(raw*76u));
            layout.store_word(std::uint16_t(base+12),255);
            layout.store_word(std::uint16_t(base+14),std::uint16_t(x));
            layout.store_word(std::uint16_t(base+16),std::uint16_t(y));
            layout.store_word(std::uint16_t(base+21),std::uint16_t(font));
            for(const auto range:std::array<std::array<unsigned,2>,2>{{{0x54dc,256*12},{0x8d12,70*44}}}) {
              // Initialize the actual source caller input, including raw
              // pointer gaps the native adapter intentionally cannot invent.
              std::fill_n(pair.source.bus->work_ram.begin()+range[0],range[1],0);
              for(unsigned at=range[0];at+1<range[0]+range[1];++at)
                if(layout.contains_word(std::uint16_t(at)))pair.source.put(at,layout.word(std::uint16_t(at)));
            }
            scratch[0x8c24]=std::uint8_t(raw);scratch[0x8c25]=std::uint8_t(raw>>8);
            pair.source.put(pair.source.p.open+0xfffe,raw);pair.source.put(pair.source.p.focus,0xffff);
            auto program=std::make_shared<const dialogue::Program>(assets.version,
                std::vector<dialogue::ContentBlock>{{0,0,{newline,0x13,2}}},std::vector<dialogue::Location>{{0,0}});
            dialogue::Conversation text(program,*pair.host);text.start(dialogue::EntryId{0});
            const auto before_trail=trail;const auto before_menus=menus;
            std::array<std::uint8_t,65536> before_source{};
            std::copy_n(pair.source.bus->work_ram.begin(),65536,before_source.begin());
            const auto acknowledgements=counts.dma_acknowledgements;
            const bool executed=!newline||x;
            if(executed)pair.source.call(0xc11174,false);
            require(counts.dma_acknowledgements==acknowledgements,
                    "Typed raw newline intercepted a DMA completion");
            require(text.advance()==dialogue::Progress::Suspended&&text.snapshot().consumed_bytes==2,
                    "Typed raw newline failed its actual empty-window prompt");
            for(const auto range:std::array<std::array<unsigned,2>,2>{{{0x54dc,256*12},{0x8d12,70*44}}}) {
              for(unsigned at=range[0];at+1<range[0]+range[1];++at)
                if(layout.contains_word(std::uint16_t(at)))
                  require(layout.word(std::uint16_t(at))==pair.source.get(at),
                          "Typed retained owner differs from complete original newline");
              for(unsigned at=range[0];at<range[0]+range[1];++at)
                if(at!=base+14u&&at!=base+15u&&at!=base+16u&&at!=base+17u)
                  require(pair.source.bus->work_ram[at]==before_source[at],
                          "Original newline touched another retained owner byte");
            }
            auto expected_trail=before_trail;auto expected_menus=before_menus;
            dialogue::ambient::Layout expected(expected_menus);expected.bind(expected_trail);
            if(executed) {expected.store_word(std::uint16_t(base+16),std::uint16_t(y+1));expected.store_word(std::uint16_t(base+14),0);}
            require(trail==expected_trail&&menus==expected_menus,"Native typed newline touched another owner");
            require(pair.output.fractional_offset()==pair.source.get(0xa029)&&
                    pair.output.composition_snapshot().brush_column==pair.source.get(0xa02b)&&
                    pair.output.publication_snapshot().current_column==pair.source.get(0xa02d)&&
                    pair.output.saturn_composition_active()==bool(pair.source.get(0xa02f)),
                    "Typed original newline differs in actual shared composition");
            text.respond();require(text.advance()==dialogue::Progress::Finished,"Typed raw newline retained its caller");
            ++completed;
          }
  std::cout<<"JP follower/menu aliases: "<<completed<<" complete original PRINT_NEWLINE bodies, all typed owner bytes and shared composition\n";
}

void actor_variable_inheritance_reference(const eb::GameAssets &assets) {
  if(assets.version!=eb::GameVersion::JP)return;
  auto sprites=std::make_shared<eb::native::SpriteResources>(assets.image,
      eb::native::sprite_catalog_layout(assets.version));
  eb::native::ActorWorld actors(sprites,eb::native::import_action_scripts(assets.image,assets.version),assets.version);
  const auto fonts=dialogue::FontResources::import(assets.image,assets.version);
  const auto resources=dialogue::WindowResources::import(assets.image,assets.version);
  std::array<std::uint8_t,65536> scratch{};
  WindowPair pair(assets,fonts,resources);
  pair.host->bind_ambient_register_source(scratch);
  pair.host->bind_ambient_actor_variables(actors);
  pair.operation({dialogue::WindowAction::Open,dialogue::WindowId{0},{},0});
  unsigned completed{};
  for(unsigned pattern:{0u,7u,193u}) {
    for(unsigned variable=0;variable<8;++variable)for(unsigned role=0;role<30;++role) {
      const auto value=std::uint16_t(pattern?role*613+variable*1093+pattern:0);
      actors.set_authored_variable(role,variable,value);
      pair.source.put(0x0e54+variable*60+role*2,value);
    }
    // Real JP Equip: retained BUFFER lookup087e wraps GET_ACTIVE to0f2a.
    // CREATE reads the twenty bytes0f41..0f54 across var3/var4 actor tables.
    scratch[0x8c24]=0x7e;scratch[0x8c25]=0x08;
    pair.source.put(pair.source.p.open+0xfffe,0x087e);
    pair.source.put(pair.source.p.focus,0xffff);pair.state.focus.reset();
    pair.source.call(0xc10504,false);
    require(pair.source.cpu.accumulator==0x0f2a,"Actual Equip inherited actor-variable address differs");
    pair.operation({dialogue::WindowAction::Open,dialogue::WindowId{2},{},0});
    compare_bank(pair.source,pair.source.record(pair.source.slot(2)),pair.state.window(),
                 "Actor-variable inherited CREATE");
    for(unsigned variable=0;variable<8;++variable)for(unsigned role=0;role<30;++role)
      require(actors.authored_variable(role,variable)==pair.source.get(0x0e54+variable*60+role*2),
              "Readonly inherited CREATE changed actual actor-variable owners");
    ++completed;
  }
  std::cout<<"JP actor-variable aliases: "<<completed<<" complete original CREATE_WINDOW callers, all240 actual variable owners\n";
}

}
int main(int argc,char**argv){try{if(argc<2)return 77;for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());ambient_reference(assets);mutable_ambient_reference(assets);typed_ambient_reference(assets);actor_variable_inheritance_reference(assets);}return 0;}catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}}
