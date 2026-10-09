// Complete original flyover helpers, with no callee completion interception.
#include "eb/native/cutscenes/coffee/text.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <algorithm>
#include <iostream>
namespace {
using namespace eb::native::cutscenes::coffee;
void check(bool v,const std::string &m){if(!v)throw std::runtime_error(m);}
void compare(const encounter_reference::Source &s,const Text &text) {
  const unsigned at=s.jp?0x3f9a:0x3c14;
  check(s.word(at)==text.x&&s.word(at+2)==text.y&&s.word(at+4)==text.columns&&s.word(at+(s.jp?8:6))==text.tile_base,"Flyover cursor/stride/tile-base differs");
  check(s.word(s.jp?0x3fa4:0x3c1e)==text.dirty_low&&s.word(s.jp?0x3fa6:0x3c20)==text.dirty_high,"Flyover dirty range differs");
  check(std::equal(text.bytes().begin(),text.bytes().end(),s.bus->work_ram.begin()+text.source_origin()),"Flyover backing differs");
  if(!s.jp)check(s.word(0x9f2f)==text.pixel_offset&&s.word(0x9f31)==text.byte_offset,"US flyover variable-width cursor differs");
}
void seed(encounter_reference::Source &s,const Text &text) {
  const unsigned at=s.jp?0x3f9a:0x3c14;
  s.put(at,text.x);s.put(at+2,text.y);s.put(at+4,text.columns);s.put(at+(s.jp?8:6),text.tile_base);
  s.put(s.jp?0x3fa4:0x3c1e,text.dirty_low);s.put(s.jp?0x3fa6:0x3c20,text.dirty_high);
  std::copy(text.bytes().begin(),text.bytes().end(),s.bus->work_ram.begin()+text.source_origin());
  if(!s.jp){s.put(0x9f2f,text.pixel_offset);s.put(0x9f31,text.byte_offset);}
  s.put(s.jp?0xa133:0x9f2d,text.screen_offset);
  if(s.jp)std::copy(text.decoded_glyph.begin(),text.decoded_glyph.end(),s.bus->work_ram.begin()+0x3818);
}
void run(const eb::GameAssets &assets) {
  Resources resources(assets.image,assets.version);Text text(resources);encounter_reference::Source source(assets);
  source.initialize();source.fixed_buttons=0;source.call(source.jp?0xc46ea0:0xc49a56);text.initialize();compare(source,text);
  const unsigned map=source.jp?0x8176:0x7dfe;
  for(unsigned i=0;i<1024;++i)check(source.word(map+i*2)==text.tilemap()[i],"Flyover tile ring initializer differs");
  for(unsigned i=0;i<4;++i)check(source.word(0x200+i*2)==resources.palette()[i],"Flyover initial palette differs");
  unsigned cases{};
  for(unsigned arg=0;arg<256;++arg) {
    text.initialize();if(!source.jp){text.pixel_offset=7;text.byte_offset=0;}seed(source,text);
    source.call(source.jp?0xc4713d:0xc49ca8,arg);text.position(std::uint8_t(arg));compare(source,text);++cases;
  }
  if(source.jp) {
    for(unsigned glyph=0;glyph<313;++glyph)for(unsigned x=0;x<8;++x)for(unsigned y:{0u,1u,6u,7u}) {
      text.initialize();text.x=std::uint16_t(24+x);text.y=std::uint16_t(y);
      for(unsigned i=0;i<text.bytes().size();++i)text.bytes()[i]=std::uint8_t(i*37+glyph);
      seed(source,text);source.call(0xc471c9,0x80|(glyph>>8),glyph&255,12);text.glyph(std::uint16_t(0x8000+glyph));compare(source,text);
      for(unsigned byte=0;byte<36;++byte)check(text.decoded_glyph[byte]==source.bus->work_ram[0x3818+byte],"Japanese DECOMP_ENTRY2 output differs glyph="+std::to_string(glyph)+" shift="+std::to_string(x)+" y="+std::to_string(y)+" byte="+std::to_string(byte)+" source="+std::to_string(source.bus->work_ram[0x3818+byte])+" native="+std::to_string(text.decoded_glyph[byte]));++cases;
    }
  } else {
    for(unsigned glyph=0;glyph<128;++glyph)for(unsigned x=0;x<16;++x) {
      text.initialize();text.pixel_offset=std::uint16_t(x);text.byte_offset=std::uint16_t((x>>3)*16);
      for(unsigned i=0;i<text.bytes().size();++i)text.bytes()[i]=std::uint8_t(i*37+glyph);
      seed(source,text);source.call(0xc49d16,glyph+0x50,0,12);text.glyph(std::uint16_t(glyph+0x50));compare(source,text);++cases;
    }
  }
  const std::array<std::uint8_t,5> name=source.jp?std::array<std::uint8_t,5>{0x41,0x42,0x43,0x44,0}:std::array<std::uint8_t,5>{0x71,0x72,0x73,0x74,0x75};
  for(unsigned shift=0;shift<8;++shift) {
    text.initialize();text.x=std::uint16_t(shift);text.pixel_offset=std::uint16_t(shift);seed(source,text);
    std::copy(name.begin(),name.end(),source.bus->work_ram.begin()+(source.jp?0x9c7f:0x99ce));
    source.call(source.jp?0xc47169:0xc49cc3,1,12);text.name(name);compare(source,text);++cases;
  }
  for(unsigned row=0;row<32;++row) {
    text.initialize();text.screen_offset=std::uint16_t(row);text.y=source.jp?6:0;
    for(unsigned i=0;i<text.bytes().size();++i)text.bytes()[i]=std::uint8_t(i*13+row);
    seed(source,text);const auto transfers=text.prepare_row();source.call(source.jp?0xc46fb2:0xc49b6e,source.jp?18:24);compare(source,text);
    for(const auto transfer:transfers)for(unsigned i=0;i<transfer.byte_count;++i)
      check(source.bus->video_ram[std::uint16_t(transfer.destination*2+i)]==text.bytes()[transfer.source_offset+i],"Flyover row DMA/ring split differs");
    source.call(source.jp?0xc47095:0xc49c56,source.jp?18:24);text.consume_row();compare(source,text);
    check(source.word(source.jp?0xa133:0x9f2d)==text.screen_offset,"Flyover ring consumption differs");++cases;
  }
  std::cout<<"PASS "<<(source.jp?"JP":"US")<<" complete flyover helpers cases="<<cases<<" instructions="<<source.cpu.instruction_count<<"\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;
}
