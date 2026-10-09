#include "eb/native/entities/graphics/transport.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/native/world_display_fade.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <algorithm>
#include <iostream>
namespace {
using namespace eb::native;
namespace graphics=entities::graphics;
void check(bool value,const char *message) {if(!value)throw std::runtime_error(message);}
void run(const eb::GameAssets &assets) {
  encounter_reference::Source source(assets);
  source.bus->work_ram[0x2e]=0;source.bus->write_byte(0x4200,0);
  SpriteResources sprites(assets.image,sprite_catalog_layout(assets.version));
  graphics::State state;
  battle::PsiScratch scratch;
  battle::PsiDisplayState video;
  WorldDisplayFade fade(WorldDisplayFadeState{0x80});
  graphics::Transport transport(assets.image,assets.version,state,sprites,video,scratch,fade);
  const unsigned table=source.jp?0x4d86:0x4a00;
  const auto seed_cells=[&] {
    std::copy(state.cells.begin(),state.cells.end(),source.bus->work_ram.begin()+table);
    source.bus->work_ram[table-1]=0xa6;source.bus->work_ram[table+88]=0x5b;
  };
  const auto compare_cells=[&] {
    check(std::equal(state.cells.begin(),state.cells.end(),source.bus->work_ram.begin()+table),
        "Original sprite allocation tags differ");
    check(source.bus->work_ram[table-1]==0xa6&&source.bus->work_ram[table+88]==0x5b,
        "Sprite allocation wrote beyond its actual88 tags");
  };
  unsigned reserve_cases{},allocation_cases{},upload_cases{};
  for(unsigned start=0;start<88;++start)for(unsigned length=0;length<=88-start;++length)
    for(const unsigned count:{0u,1u,length,std::min(88u,length+1),88u}) {
      for(unsigned i=0;i<88;++i)state.cells[i]=std::uint8_t(0x80|(i%30));
      std::fill_n(state.cells.begin()+start,length,0);
      const std::uint16_t role=std::uint16_t(reserve_cases%3==0?0xffff:reserve_cases%3==1?29:0x1234);
      seed_cells();const auto result=transport.reserve(count,role);
      source.call(source.jp?0xc01bac:0xc01b96,count,role);
      check(result==source.cpu.accumulator,"Original first-fit sprite allocation return differs");
      compare_cells();++reserve_cases;
    }
  for(const unsigned role:{0u,29u,0x1234u,0xffffu,0x8000u})
    for(const unsigned replacement:{0u,0x80u,0xffu,0x1234u}) {
      for(unsigned i=0;i<88;++i)state.cells[i]=std::uint8_t((i*73+31)%256);
      seed_cells();transport.remap(std::uint16_t(role),std::uint16_t(replacement));
      source.call(source.jp?0xc01c27:0xc01c11,role,replacement);compare_cells();
    }
  const auto seed_vram=[&] {
    for(unsigned i=0;i<65536;++i) {
      const auto value=std::uint8_t(i*73+91);
      source.bus->video_ram[i]=value;video.set_vram_byte(std::uint16_t(i),value);
    }
  };
  const auto compare_vram=[&] {
    const auto actual=video.vram();
    if(!std::equal(actual.begin(),actual.end(),source.bus->video_ram.begin())) {
      unsigned first{};while(first<65536&&actual[first]==source.bus->video_ram[first])++first;
      throw std::runtime_error("Actor raw VRAM differs byte="+std::to_string(first)+
          " native="+std::to_string(actual[first])+" original="+std::to_string(source.bus->video_ram[first]));
    }
    check(video.pending().empty()&&video.pending_bytes()==0,
        "Forced-blank actor transfer fabricated deferred work");
  };
  const auto complete=[](graphics::Transport::Operation &operation) {
    for(unsigned step=0;step<4096;++step) {
      if(operation.advance(1))return;
      check(!operation.needs_publication(),"Actual forced-blank actor copy unexpectedly waited");
    }
    throw std::runtime_error("Actor graphics operation did not complete");
  };
  for(unsigned width=1;width<=15;++width)for(unsigned height=1;height<=12;++height)
    for(const unsigned prefix:{0u,1u,7u,8u,33u}) {
      state.cells.fill(0);std::fill_n(state.cells.begin(),prefix,0x9d);
      seed_cells();seed_vram();
      auto operation=transport.begin_allocation(width,height,7);complete(*operation);
      source.call(source.jp?0xc01c68:0xc01c52,width,height,7);
      check(operation->result()==source.cpu.accumulator,"Original rounded sprite allocation differs");
      compare_cells();compare_vram();++allocation_cases;
    }
  const unsigned geometry_delta=source.jp?0x3fe:0;
  for(unsigned group=0;group<sprites.size();++group)
    for(const unsigned geometry_group:{group,(group+1)%sprites.size()})
    for(const auto format:{SpriteFrameFormat::FourDirection,SpriteFrameFormat::EightDirection})
      for(const unsigned surface:{0u,8u,12u})for(const unsigned cell:{0u,7u}) {
        const auto &definition=sprites.definition(geometry_group);
        const auto &artwork=sprites.definition(group);
        unsigned direction=group%8;
        const std::uint16_t animation=format==SpriteFrameFormat::FourDirection?
            std::uint16_t(group&1):std::uint16_t((group&1)*2);
        const auto pose=[&] {return format==SpriteFrameFormat::FourDirection?
            four_direction_pose(direction,animation):eight_direction_pose(direction,animation);};
        if(pose()>=artwork.frames)direction=0;
        if(pose()>=artwork.frames)continue;
        const auto table_identity=sprites.frame_table_identity(group);
        const auto dest=transport.destination(cell,definition.height/8);
        source.put(0x1e88,0);
        source.put(0x29ca + geometry_delta,table_identity&0xffff);
        source.put(0x2a06 + geometry_delta,table_identity>>16);
        source.put(0x2a42 + geometry_delta,sprites.raw_header(group)[8]);
        source.put(0x2a7e + geometry_delta,definition.width*4);
        source.put(0x2aba + geometry_delta,definition.height/8);
        source.put(0x298e + geometry_delta,dest);
        source.put(0x2af6 + geometry_delta,direction);
        source.put(0x2baa + geometry_delta,surface);
        source.put(source.jp?0x10e8:0x10f2,animation);
        const unsigned reference_address=source.jp?0x1ab8:0x341a;
        source.put(reference_address,0xa55a);
        std::uint16_t displayed=0xa55a;
        seed_vram();
        auto operation=transport.begin_upload(group,geometry_group,direction,animation,format,dest,
            std::uint16_t(surface),displayed);
        complete(*operation);
        if(format==SpriteFrameFormat::EightDirection)source.call(source.jp?0xc0aa8b:0xc0aaac);
        else {source.put(source.jp?0x2c90:0x2892,animation);source.call(source.jp?0xc0a4a3:0xc0a4c4,0,0,0);}
        check(operation->result()==source.cpu.accumulator,
            "Original final actor upload destination return differs");
        check(displayed==source.word(reference_address),"Original retained current sprite reference differs");
        compare_vram();++upload_cases;
      }
  check(source.nmis==0&&source.polls==0,
      "Forced-blank sprite leaf fixture introduced physical NMI/input work");
  // Compare deferred delivery against one more complete original forced-blank
  // helper output. The library wait uses real display receipts and checks the
  // credited but unpublished descriptor budget; this is not a source physical
  // timeline claim or an automatic world creation hook.
  const auto &definition=sprites.definition(0);
  const auto frame_table=sprites.frame_table_identity(0);
  const auto target=transport.destination(7,definition.height/8);
  source.put(0x29ca + geometry_delta,frame_table&0xffff);
  source.put(0x2a06 + geometry_delta,frame_table>>16);
  source.put(0x2a42 + geometry_delta,sprites.raw_header(0)[8]);
  source.put(0x2a7e + geometry_delta,definition.width*4);
  source.put(0x2aba + geometry_delta,definition.height/8);
  source.put(0x298e + geometry_delta,target);
  source.put(0x2af6 + geometry_delta,0);source.put(0x2baa + geometry_delta,0);
  source.put(source.jp?0x2c90:0x2892,0);source.put(source.jp?0x1ab8:0x341a,0xa55a);
  seed_vram();source.call(source.jp?0xc0a4a3:0xc0a4c4,0,0,0);
  fade.write_brightness(15);
  auto earlier=video.begin_transfer({battle::PsiTransferKind::Vram,0,0x1200,0x6000,0},scratch,fade);
  check(earlier->advance()&&earlier->complete(),"Deferred actor fixture could not admit preceding graphics");
  std::uint16_t displayed=0xa55a;
  auto deferred=transport.begin_upload(0,0,0,SpriteFrameFormat::FourDirection,target,0,displayed);
  bool waited{};
  for(unsigned work=0;work<4096&&!deferred->complete();++work) {
    deferred->advance(1);
    if(!deferred->needs_publication())continue;
    check(!waited&&video.pending_bytes()==0x1200&&video.pending().size()==1,
        "Actor budget wait altered prior descriptor credit/order");
    bool rejected{};
    try{deferred->respond();}catch(const std::logic_error &){rejected=true;}
    check(rejected,"Actor budget wait accepted a fabricated publication");
    video.publish_pending(scratch);deferred->respond();waited=true;
  }
  check(waited&&deferred->complete()&&displayed==source.word(source.jp?0x1ab8:0x341a),
      "Deferred actor continuation omitted its original retained reference");
  video.publish_pending(scratch);
  const auto deferred_video=video.vram();
  check(std::equal(deferred_video.begin()+0x8000,deferred_video.begin()+0xc000,
      source.bus->video_ram.begin()+0x8000),"Deferred actor delivery differs from the original helper image");
  check(video.pending().empty()&&!video.pending_bytes(),"Deferred actor publication retained stale work");
  deferred.reset();
  bool invalid_rejected{};
  const auto saved_cells=state.cells;
  try {auto invalid=transport.begin_upload(sprites.size(),0,0,SpriteFrameFormat::FourDirection,
      target,0,displayed);}catch(const std::exception &){invalid_rejected=true;}
  check(invalid_rejected&&state.cells==saved_cells&&!transport.busy()&&!transport.failed(),
      "Invalid actor graphics caller partially mutated its owner");
  auto abandoned=transport.begin_allocation(1,3,4);
  bool busy_rejected{};
  try{transport.remap(4,0);}catch(const std::logic_error &){busy_rejected=true;}
  check(busy_rejected,"Active raw actor continuation allowed tag replacement");
  abandoned.reset();
  check(transport.failed(),"Abandoned actor allocation falsely reported healthy completion");
  bool failed_rejected{};
  try{transport.reserve(1,4);}catch(const std::logic_error &){failed_rejected=true;}
  check(failed_rejected,"Abandoned actor transport accepted another allocation");
  std::cout<<"PASS "<<assets.title<<" spriteallocation firstfit="<<reserve_cases
      <<" rounded="<<allocation_cases<<" rawfour/eightuploads="<<upload_cases
      <<" same/retainedcreationgeometry all65536VRAMbytes/retainedreference+return exact; deferredpublication/busy/rejection/abandonment checked"
      <<" originalinstructions="<<source.cpu.instruction_count<<'\n';
}
}
int main(int argc,char **argv) {if(argc<2)return 77;try{for(int i=1;i<argc;++i)
  run(eb::load_game_assets(argv[i],eb::asset_profiles()));}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
