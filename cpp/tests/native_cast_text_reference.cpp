// Complete original regional Cast text helpers, without callee interception.
#include "native_encounter_source_fixture.hpp"
#include "generated_assets.hpp"
#include "eb/native/cutscenes/cast/text.hpp"
#include "eb/native/action_bindings.hpp"
#include <algorithm>
#include <iostream>
namespace {
using Source=encounter_reference::Source;
using namespace eb::native;
namespace cast=cutscenes::cast;
unsigned checks{},cases{},commands{},rejected_overflows{};
void check(bool ok,const std::string &message){++checks;if(!ok)throw std::runtime_error(message);}
void compare(std::span<const std::uint8_t> native,std::span<const std::uint8_t> source,const std::string &label){check(native.size()==source.size(),label+" size differs");
  for(unsigned i=0;i<native.size();++i)if(native[i]!=source[i])throw std::runtime_error(label+" byte differs at="+std::to_string(i)+" native="+std::to_string(native[i])+" source="+std::to_string(source[i]));
  checks+=unsigned(native.size());}
void one(const eb::GameAssets &assets) {
  Source source(assets);source.initialize();source.call(source.jp?0xc0925e:0xc0927c);source.call(source.jp?0xc088a3:0xc088b1);source.fixed_buttons=0;
  cast::Resources resources(assets.image,assets.version);cast::State state;party::State party(assets.version);battle::PsiScratch scratch;cast::Text text(resources,state,scratch,party);
  const unsigned party_base=source.jp?0x9c7f:0x99ce,character_size=source.jp?94:95,game=source.jp?0x9aa9:0x97f5;
  for(unsigned member=1;member<=4;++member){auto name=party.name_field(member);for(unsigned i=0;i<name.size();++i){name[i]=std::uint8_t((source.jp?0x41:0x71)+i+member);source.bus->work_ram[party_base+(member-1)*character_size+i]=name[i];}}
  auto pet=party.name_field(party::NameField::Pet);for(unsigned i=0;i<pet.size();++i){pet[i]=i<5?std::uint8_t((source.jp?0x61:0x81)+i):0;source.bus->work_ram[game+36+i]=pet[i];}
  std::array<std::uint8_t,1664> raster{};cast::RasterCursor cursor;bool prepared{};
  source.observer=[&](Source &s){if(s.cpu.program_counter==(s.jp?0xc4b670u:0xc4e42au)&&!prepared){
    std::copy_n(s.bus->work_ram.begin()+0x10000,65536,scratch.bytes.begin());
    std::copy_n(s.bus->work_ram.begin()+0x3492,1664,raster.begin());text.prepare_graphics(raster,cursor,s.bus->work_ram[0x5e6d]);prepared=true;}};
  source.call(source.jp?0xc4b5b6:0xc4e369);source.observer={};check(prepared,"Original Cast graphics frontier missing");
  std::copy(resources.special_palettes().begin(),resources.special_palettes().end(),scratch.bytes.begin()+0x7000);
  compare(scratch.bytes,std::span(source.bus->work_ram).subspan(0x10000,65536),"Cast LOAD BUFFER");
  if(!source.jp){compare(raster,std::span(source.bus->work_ram).subspan(0x3492,1664),"Cast shared VWF ring");
    check(cursor.x==source.word(0x9e23)&&cursor.tile==source.word(0x9e25)&&!source.word(0x9652)&&!source.word(0x9654),"Cast retained raster cursors differ");}
  check(source.word(source.jp?0xb6a2:0xb4cf)==state.text_cursor&&source.word(source.jp?0xb6a4:0xb4d1)==state.tile_offset,"Cast initial tile state differs");++cases;
  source.bus->write_byte(0x4200,0);source.bus->work_ram[0xd]=0x80;source.bus->write_byte(0x2100,0x80);
  const auto verify=[&](unsigned routine,unsigned id,unsigned variable,unsigned column,unsigned row,unsigned scroll,unsigned kind){
    state.tile_offset=std::uint16_t((cases&3)*0x400);source.put(source.jp?0xb6a4:0xb4d1,state.tile_offset);
    state.text_cursor=std::uint16_t(cases&1?240:7);source.put(source.jp?0xb6a2:0xb4cf,state.text_cursor);
    source.put(0x3b,scroll);source.put(source.jp?0x1a38:0x1a42,0);source.put(source.jp?0xe54:0xe5e,variable);
    auto plan=kind==0?text.name(id,column,row,std::uint16_t(scroll)):kind==1?text.party_name(id,column,row,std::uint16_t(scroll)):text.variable_name(id,variable,column,row,std::uint16_t(scroll));
    std::vector<battle::PsiTransfer> original;
    source.observer=[&](Source &s){if(s.cpu.program_counter==0xc08616)original.push_back({battle::PsiTransferKind::Vram,std::uint16_t(s.word(s.cpu.direct_page+14)),s.cpu.x_index,s.cpu.y_index,std::uint8_t(s.cpu.accumulator)});};
    source.call(routine,id,column,row);source.observer={};check(plan==original,"Cast ordered DMA operands differ case="+std::to_string(cases));commands+=unsigned(plan.size());
    compare(scratch.bytes,std::span(source.bus->work_ram).subspan(0x10000,65536),"Cast name BUFFER case="+std::to_string(cases));
    check(state.text_cursor==source.word(source.jp?0xb6a2:0xb4cf),"Cast JP retained tile-ring cursor differs");++cases;
  };
  for(unsigned id=0;id<48;++id)verify(source.jp?0xc4bd19:0xc4ebad,id,0,16,id%32,(id&1)?24:0,0);
  for(unsigned member:{1u,2u,3u,4u,7u})verify(source.jp?0xc4bd9d:0xc4ec05,member,0,16,28,24,1);
  for(unsigned id:{12u,13u,36u})verify(source.jp?0xc4be0a:0xc4ec52,id==36?4:2,id,16,31,0,2);
  if(!source.jp)for(unsigned glyph=0;glyph<128;++glyph)for(unsigned padding:{0u,1u,7u,31u,255u}) {
    const std::array<std::uint8_t,3> name{std::uint8_t(0x50+glyph),0x71,0};
    constexpr unsigned columns=52;
    const unsigned measured=resources.glyph_width(glyph)+resources.glyph_width(0x21)+padding*2;
    if(measured>columns*8){bool rejected{};try{text.render_name(name,columns,0x180,raster,cursor,std::uint8_t(padding));}catch(const std::logic_error &){rejected=true;}
      check(rejected,"Cast admitted centering outside its owned VWF ring");++rejected_overflows;continue;}
    for(unsigned i=0;i<raster.size();++i)raster[i]=std::uint8_t(i*37+glyph);
    std::copy(raster.begin(),raster.end(),source.bus->work_ram.begin()+0x3492);
    std::copy(name.begin(),name.end(),source.bus->work_ram.begin()+0x7b00);
    source.bus->work_ram[0xb4ce]=255;source.bus->work_ram[0x5e6d]=std::uint8_t(padding);
    text.render_name(name,columns,0x180,raster,cursor,std::uint8_t(padding));
    source.cpu.program_counter=0xc4ff00;source.cpu.accumulator=0x7b00;source.cpu.x_index=columns;source.cpu.y_index=0x180;
    source.cpu.status_register=eb::MainCpu65816::InterruptDisable;const unsigned stack=source.cpu.stack_pointer;
    source.cpu.execute_instruction<0x20>(0xe583,3);bool returned{};
    for(unsigned work=0;work<1000000;++work){if(source.cpu.program_counter==0xc4ff03&&source.cpu.stack_pointer==stack){returned=true;break;}source.step();}
    check(returned,"Original Cast variable-width helper did not return");
    compare(raster,std::span(source.bus->work_ram).subspan(0x3492,1664),"Cast padded VWF ring glyph="+std::to_string(glyph)+" padding="+std::to_string(padding));
    compare(scratch.bytes,std::span(source.bus->work_ram).subspan(0x10000,65536),"Cast padded VWF BUFFER");
    check(cursor.x==source.word(0x9e23)&&cursor.tile==source.word(0x9e25),"Cast padded VWF cursor differs");++cases;
  }
  ActionActorState actor;ActorActionContext context;ActionSceneContext scene;BoundAction angle;angle.operation=NativeAction::AngleToDirection;
  for(unsigned value=0;value<65536;++value){const auto native=apply_action(angle,std::uint16_t(value),actor,context,scene);source.call(source.jp?0xc448cd:0xc46b51,value);
    check(native.handled&&native.value==source.cpu.accumulator,"Cast angle direction differs value="+std::to_string(value));++cases;}
  BoundAction half;half.operation=NativeAction::HalveVerticalVelocity;
  source.put(source.jp?0x1a38:0x1a42,0);
  for(unsigned value=0;value<65536;++value){
    const auto fraction=std::uint16_t(value*73+91);
    actor.velocity={0x12345678,(value<<16)|fraction,0x87654321};
    source.put(source.jp?0xd28:0xd32,value);source.put(source.jp?0xddc:0xde6,fraction);
    const auto native=apply_action(half,0xa55a,actor,context,scene);
    source.call(source.jp?0xc45092:0xc4730e,0xa55a);
    check(native.handled&&native.value==source.cpu.accumulator&&
      actor.velocity[1]==((unsigned(source.word(source.jp?0xd28:0xd32))<<16)|source.word(source.jp?0xddc:0xde6))&&
      actor.velocity[0]==0x12345678&&actor.velocity[2]==0x87654321,
      "Cast signed whole vertical halving differs value="+std::to_string(value));++cases;
  }
  // C0A685 reads its new speed from the inline word, then returns that full
  // word. It neither observes nor forwards the earlier task temporary.
  ActionBindings bindings(assets.version);
  const ActionScriptData operand(std::vector<ActionScriptBlock>{{0x7b00,{0x80,0x01}}});
  ActionEngineRequest request;request.kind=ActionRequestKind::CallEngine;
  request.identifier=source.jp?0xc0a664:0xc0a685;request.parameters=0x7b00;
  const auto speed=bindings.compile(request,operand);
  check(speed.operation==NativeAction::SetMovementSpeed&&speed.temporary_input==ActionTemporaryInput::Independent,
    "Inline movement speed falsely observes an earlier upload return");
  source.put(0x1e80,0x7b00);source.bus->work_ram[0x1e82]=0x7e;source.put(0x7b00,0x180);source.put(0x1e88,0);
  for(unsigned previous:{0u,1u,0x7fffu,0x8000u,0xffffu}){
    const auto native=apply_action(speed,std::uint16_t(previous),actor,context,scene);
    source.call(source.jp?0xc0a664:0xc0a685,previous,0,0);
    check(native.handled&&native.value==source.cpu.accumulator&&context.movement_speed==source.word(source.jp?0x2f30:0x2b32)&&
      context.movement_speed==0x180,"Inline movement speed depends on its incoming temporary");++cases;
  }
  std::cout<<(source.jp?"JP":"US")<<" Cast text complete helpers checks="<<checks<<" commands="<<commands<<'\n';
}
}
int main(int argc,char **argv){try{if(argc<2)return 77;for(int i=1;i<argc;++i)one(eb::load_game_assets(argv[i],eb::asset_profiles()));std::cout<<"PASS Cast text regional cases="<<cases<<" checks="<<checks<<" DMA="<<commands<<" rejected_overflows="<<rejected_overflows<<'\n';return 0;}catch(const std::exception &e){std::cerr<<"FAIL Cast text reference: "<<e.what()<<'\n';return 1;}}
