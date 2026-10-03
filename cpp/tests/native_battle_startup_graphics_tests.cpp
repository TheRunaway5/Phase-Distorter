#include "eb/native/battle/startup_graphics.hpp"
#include "native_battle_frame_fixture.hpp"
#include <numeric>
namespace {
using namespace eb::native;
using namespace battle_frame_test;
struct Catalog {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x15000);
  BattleCombatantLayout layout{0x40,0x200,0x400,0x500,0x600,0x700,4,0,2,6,4,7,8,0x800,0x840};
  std::array<std::vector<std::uint8_t>,6> raw;
  explicit Catalog(unsigned zero_bytes=512) {
    unsigned cursor=0x1000;
    for(unsigned shape=1;shape<=6;++shape) {
      const unsigned cols=shape==1||shape==3?1:shape<5?2:4,rows=shape<3?1:shape<6?2:4;
      auto& data=raw[shape-1];data.resize(cols*rows*512);
      for(unsigned i=0;i<data.size();++i)data[i]=std::uint8_t(i*19+(i>>7)*11+shape*37);
      pointer(bytes,layout.pictures+(shape-1)*5,cursor);bytes[layout.pictures+(shape-1)*5+4]=std::uint8_t(shape);
      for(unsigned at=0;at<data.size();at+=32) {bytes[cursor++]=31;for(unsigned i=0;i<32;++i)bytes[cursor++]=data[at+i];}
      bytes[cursor++]=255;
    }
    for(unsigned p=0;p<4;++p)for(unsigned i=0;i<16;++i)put(bytes,layout.palettes+(p*16+i)*2,0x8000+p*0x124+i*0x421);
    for(unsigned enemy=0;enemy<7;++enemy) {put(bytes,layout.enemies+enemy*4,enemy<6?enemy+1:0);bytes[layout.enemies+enemy*4+2]=std::uint8_t(enemy%4);}
    for(unsigned group=0;group<8;++group) {
      pointer(bytes,layout.groups+group*8,layout.group_begin+group*16);
      unsigned at=layout.group_begin+group*16;
      if(group<6) {bytes[at++]=1;put(bytes,at,group);at+=2;}
      else if(group==6) {for(unsigned id:{4u,5u}) {bytes[at++]=id==4?0:1;put(bytes,at,id);at+=2;}}
      else {bytes[at++]=1;put(bytes,at,6);at+=2;}
      bytes[at]=255;
    }
    for(unsigned i=0;i<32;++i)put(bytes,layout.allocation_offsets+i*2,i/4*0x800+i%4*0x80);
    for(unsigned i=0;i<48;++i)put(bytes,layout.tile_arrangements+i*2,i/4*0x40+i%4*4);
    // A synthetic content-backed sprite0 alias. Actual packs use hardware
    // reads instead; this fixture proves partial decoded output retention.
    pointer(bytes,layout.pictures-4,cursor);
    for(unsigned at=0;at<zero_bytes;at+=32) {const auto n=std::min(32u,zero_bytes-at);bytes[cursor++]=std::uint8_t(n-1);for(unsigned i=0;i<n;++i)bytes[cursor++]=std::uint8_t(at+i);}
    bytes[cursor]=255;
  }
};
void retained_decode(eb::GameVersion version) {
  for(unsigned decoded:{0u,411u}) {
    FrameFixture h(version,4);Catalog input(decoded);BattleCombatants catalog(input.bytes,input.layout);
    battle::BattleSpriteAllocation allocation;battle::BackgroundDisplayState layout;
    battle::StartupGraphics graphics(catalog,h.objects,allocation,*h.f.graphics,h.f.windows,h.f.party,
      h.colors,h.scratch,h.display,layout,h.fade,h.frame);h.fade.force_blank();
    for(unsigned i=0;i<h.scratch.bytes.size();++i)h.scratch.bytes[i]=std::uint8_t(i*7+(i>>8));
    const auto incoming=h.scratch.bytes;
    graphics.load_enemies(7);
    check(catalog.planar(0).size()==decoded,"Sprite-zero import padded the decompressor output");
    for(unsigned i=0;i<512;++i) {
      const auto expected=i<decoded?std::uint8_t(i):incoming[0x8000+i];
      check(h.scratch.bytes[0x8000+i]==expected,"Partial decoder lost retained upper scratch");
      const unsigned destination=(i/128)*0x200+i%128;
      check(h.scratch.bytes[destination]==expected && h.display.vram_byte(std::uint16_t(0x4000+destination))==expected,
        "Sprite scatter did not consume the live partly retained source");
    }
  }
}
struct SequentialReads : battle::BattleSpriteReadSource {
  struct Read { std::uint32_t address; std::uint8_t bus,value; };
  std::vector<Read> expected;
  unsigned consumed{};
  std::function<void(const Read &)> observe;
  unsigned multiply_calls{};
  std::array<std::uint8_t,2> operands{};
  std::uint16_t product=0x7143,quotient=0x6295;
  std::vector<std::array<std::uint8_t,2>> math_writes;
  void multiply(std::uint16_t columns,std::uint16_t rows) override {
    ++multiply_calls;
    for(const auto pair:{std::array<std::uint8_t,2>{std::uint8_t(rows),std::uint8_t(columns)},
                        std::array<std::uint8_t,2>{std::uint8_t(rows>>8),std::uint8_t(columns)},
                        std::array<std::uint8_t,2>{std::uint8_t(rows),std::uint8_t(columns>>8)}}) {
      operands=pair;math_writes.push_back(pair);product=std::uint16_t(operands[0]*operands[1]);
    }
  }
  std::uint8_t read(std::uint32_t address,std::uint8_t bus) override {
    check(multiply_calls && product==0 && operands==std::array<std::uint8_t,2>{1,0},
      "Live read ran before actual preceding multiply effects");
    check(consumed<expected.size(),"Live decoder invented a source read");
    const auto next=expected.at(consumed++);
    check(address==next.address && bus==next.bus,"Live source address/order or prior data bus differs");
    if(observe)observe(next);
    return next.value;
  }
};
void live_decode(eb::GameVersion version) {
  FrameFixture h(version,4);Catalog input;
  constexpr std::uint32_t source=0x12fffc; // Index carry must not change the pointer-bank bus seed.
  input.bytes[input.layout.pictures-4]=std::uint8_t(source);
  input.bytes[input.layout.pictures-3]=std::uint8_t(source>>8);
  input.bytes[input.layout.pictures-2]=std::uint8_t(source>>16);
  BattleCombatants catalog(input.bytes,input.layout);
  check(catalog.live_planar_source(0)==source && !catalog.live_planar_source(1),"Catalog lost actual live alias or made ordinary artwork live");
  battle::BattleSpriteAllocation allocation;battle::BackgroundDisplayState layout;
  battle::StartupGraphics unbound(catalog,h.objects,allocation,*h.f.graphics,h.f.windows,h.f.party,
    h.colors,h.scratch,h.display,layout,h.fade,h.frame);h.fade.force_blank();
  const auto original=h.scratch.bytes;const auto palettes=h.colors.staged;
  rejects([&]{unbound.load_enemies(7);},"Missing live source silently produced sprite0");
  check(!unbound.failed() && h.scratch.bytes==original && h.colors.staged==palettes,
    "Missing live reader mutated source state before admission");
  struct ReadOnlySource : battle::BattleSpriteReadSource {
    unsigned calls{};
    std::uint8_t read(std::uint32_t,std::uint8_t) override {++calls;return 255;}
  } incomplete;
  battle::StartupGraphics missing_math(catalog,h.objects,allocation,*h.f.graphics,h.f.windows,h.f.party,
    h.colors,h.scratch,h.display,layout,h.fade,h.frame,&incomplete);
  rejects([&]{missing_math.load_enemies(7);},"Unimplemented hardware math silently acknowledged completion");
  check(missing_math.failed() && !incomplete.calls,"Failed hardware math started source reads or hid failure");
  SequentialReads reads;
  unsigned offset=0;
  const auto byte=[&](unsigned value){reads.expected.push_back({source+offset++,0x12,std::uint8_t(value)});};
  const auto word=[&](unsigned low,unsigned high){
    reads.expected.push_back({source+offset++,0x12,std::uint8_t(low)});
    reads.expected.push_back({source+offset++,std::uint8_t(low),std::uint8_t(high)});
  };
  const auto header=[&](unsigned value){
    reads.expected.push_back({source+offset,0x12,std::uint8_t(value)});
    if((value&0xe0)==0xe0)reads.expected.push_back({source+offset,0x12,std::uint8_t(value)});
    byte(value);
  };
  // Header reads deliberately return different values: initial00 selects a
  // literal command, then02 is the live reread that determines length3.
  reads.expected.push_back({source+offset,0x12,0});byte(2);byte(0x11);byte(0x22);byte(0x84);
  header(0x22);byte(0xfe);
  header(0x41);word(0x12,0xab);
  header(0x63);byte(0xfc);
  header(0x82);word(0,0);
  header(0xa2);word(0,0);
  header(0xc2);word(0,2);
  header(0xfc);byte(2);word(0,0); // Extended command7 shares source's default copy.
  header(0xe0);byte(3);for(unsigned value:{5u,6u,7u,8u})byte(value);
  header(0x80);word(0xff,0xff); // Read retained scratch preceding the destination.
  header(0xc2);word(0x80,0); // Reverse reference wraps from bank offset0 toFFFF.
  reads.expected.push_back({source+offset,0x12,255});
  h.scratch.bytes.fill(0xa7);h.scratch.bytes[0x7fff]=0x39;
  const std::vector<std::uint8_t> expected{0x11,0x22,0x84,0xfe,0xfe,0xfe,0x12,0xab,0x12,0xab,
    0xfc,0xfd,0xfe,0xff,0x11,0x22,0x84,0x88,0x44,0x21,0x84,0x22,0x11,0x11,0x22,0x84,5,6,7,8,0x39,0x9b,0x6d,0x32};
  battle::StartupGraphics graphics(catalog,h.objects,allocation,*h.f.graphics,h.f.windows,h.f.party,
    h.colors,h.scratch,h.display,layout,h.fade,h.frame,&reads);
  graphics.load_enemies(0);
  check(!reads.consumed && !reads.multiply_calls,"Ordinary immutable artwork touched platform arithmetic/reads");
  h.scratch.bytes.fill(0xa7);h.scratch.bytes[0x7fff]=0x39;
  h.scratch.bytes[0]=0x9b;h.scratch.bytes[0xffff]=0x6d;h.scratch.bytes[0xfffe]=0x32;
  graphics.load_enemies(7);
  check(reads.consumed==reads.expected.size(),"Live decoder skipped source read side effects");
  check(reads.multiply_calls==1 && reads.math_writes==std::vector<std::array<std::uint8_t,2>>{{1,1},{0,1},{1,0}} &&
    reads.quotient==0x6295,"Live decoder skipped ordered multiply writes or changed retained quotient");
  for(unsigned i=0;i<512;++i) {
    const auto value=i<expected.size()?expected[i]:0xa7;
    check(h.scratch.bytes[0x8000+i]==value && h.scratch.bytes[(i/128)*0x200+i%128]==value,
      "Live DECOMP command output/retained scatter differs");
  }
  reads.expected.clear();reads.consumed=offset=0;
  for(unsigned i=0;i<32;++i) {header(0xe7);byte(255);byte(0x5a);}
  header(1);byte(0xbc);byte(0xde);
  reads.expected.push_back({source+offset,0x12,255});
  bool wrapped=false;
  reads.observe=[&](const SequentialReads::Read &read) {
    if(read.address!=source+offset)return;
    check(h.scratch.bytes[0xffff]==0x5a && h.scratch.bytes[0]==0xbc && h.scratch.bytes[1]==0xde && h.scratch.bytes[2]==0xa7,
      "Live decoder output did not wrap its actual16-bit destination");
    wrapped=true;
  };
  h.scratch.bytes.fill(0xa7);
  graphics.load_enemies(7);
  check(wrapped && reads.consumed==reads.expected.size(),"Wrapping decode did not complete through actual live source");
  reads.expected.clear();reads.consumed=offset=0;reads.observe={};
  for(unsigned i=0;i<31;++i) {header(0xe7);byte(255);byte(0x5a);}
  header(0xe7);byte(254);byte(0x5a);
  header(0x40);word(0xbc,0xde);
  h.scratch.bytes.fill(0xa7);
  rejects([&]{graphics.load_enemies(7);},"Cross-bank word store silently corrupted retained scratch");
  check(graphics.failed() && reads.consumed==reads.expected.size() && h.scratch.bytes[0xfffe]==0x5a &&
    h.scratch.bytes[0xffff]==0xa7 && h.scratch.bytes[0]==0xa7,
    "Unsupported word-store boundary wrote either byte or hid earlier decoder writes");
}
void common(eb::GameVersion version,unsigned depth) {
  FrameFixture h(version,depth); Catalog input;BattleCombatants catalog(input.bytes,input.layout);
  battle::BattleSpriteAllocation allocation;allocation.sprites=3;allocation.maps=19;
  battle::BackgroundDisplayState layout{0xb3,{1,2,3,4},{0xa7,0xb4}};
  battle::StartupGraphics graphics(catalog,h.objects,allocation,*h.f.graphics,h.f.windows,h.f.party,
    h.colors,h.scratch,h.display,layout,h.fade,h.frame);
  BattleCombatants foreign_catalog(input.bytes,input.layout);
  battle::PaletteBankState foreign_colors;
  check(graphics.uses(catalog,h.objects,h.colors,h.frame) &&
    !graphics.uses(foreign_catalog,h.objects,h.colors,h.frame) &&
    !graphics.uses(catalog,h.objects,foreign_colors,h.frame),"Graphics admission failed actual catalog/palette identity");
  h.fade.force_blank();
  for(unsigned i=0;i<h.scratch.bytes.size();++i)h.scratch.bytes[i]=std::uint8_t(i*7+(i>>8));
  h.display.staged_scroll.fill({13,17});
  h.display.scroll.fill({19,23});
  h.scratch.bytes[0x7000]=77;h.display.queue_frame(0x7000);
  h.background.flash_red(21);h.background.flash_green(17);h.swirl.update_in=9;
  h.visual.fixed_color={1,2,3};
  auto before_vram=h.display.vram();const auto clock=h.f.clock;
  const auto staged_window=h.f.windows.scene();const auto pending=h.display.pending().size();
  h.f.windows.clear_published_tilemap();
  check(h.f.windows.scene()->pixels==staged_window->pixels,"Physical map clear modified staged windows");
  const auto retained=h.f.graphics->frame();const auto retained_pixels=retained->pixels;
  graphics.load_common(1);
  check(layout.mode==0xb9 && layout.maps==std::array<std::uint8_t,4>{0x58,0x5c,0x7c,4} &&
    layout.graphics==std::array<std::uint8_t,2>{0x10,0xb6} && allocation.object_size==0x61,
    "Common loader did not preserve source register masks");
  check(allocation.sprites==3 && allocation.maps==19,"Common graphics loader reset enemy allocation early");
  check(h.display.staged_scroll[0]==battle::PsiScroll{} && h.display.staged_scroll[1]==battle::PsiScroll{} &&
    h.display.staged_scroll[2]==battle::PsiScroll{} && h.display.staged_scroll[3]==battle::PsiScroll{13,17} &&
    h.display.scroll[0]==battle::PsiScroll{19,23},"Common loader changed wrong scroll owner");
  check(h.background.effects().red_duration==0 && h.background.effects().green_duration==0 &&
    h.swirl.update_in==0 && h.visual.fixed_color==PaletteColor{} && h.layer.value==1,
    "Common loader skipped complete C2E0E7 reset");
  for(unsigned i=0xf800;i<0x10000;++i)check(h.display.vram_byte(std::uint16_t(i))==0,"BG3 map was not cleared by immediate DMA");
  std::vector<bool> written(65536);for(unsigned i=0xf800;i<0x10000;++i)written[i]=true;
  std::vector<std::pair<unsigned,unsigned>> ranges;
  if(version==eb::GameVersion::JP)ranges={{0,0x3800}};
  else ranges={{0x2000,0x1800},{0,0x450},{0x4f0,0x60},{0x5f0,0xb0},{0x700,0xa0},{0x800,0x10},{0x900,0x10}};
  for(auto [at,count]:ranges)for(unsigned i=0;i<count;++i) {
    written[0xc000+at+i]=true;
    check(h.display.vram_byte(std::uint16_t(0xc000+at+i))==h.scratch.bytes[at+i],"Window planar publication differs from actual scratch");
  }
  for(unsigned i=0;i<65536;++i)if(!written[i])check(h.display.vram_byte(std::uint16_t(i))==before_vram[i],"Window loading overwrote retained VRAM");
  const auto full=h.f.windows.full_frame();const auto cell=h.f.graphics->frame();
  for(unsigned y=0;y<256;++y)for(unsigned x=0;x<256;++x)
    check(full->pixels[y*256+x]==cell->pixels[(y%8)*256+x%8],"Displayed descriptor0 failed to retain live artwork0");
  check(h.display.pending().size()==pending && h.display.publication_serial()==0 &&
    h.f.clock.frame_counter==clock.frame_counter && h.f.clock.input_polls==clock.input_polls &&
    retained->pixels==retained_pixels,"Loading consumed NMI/input or mutated retained artwork capture");
}
void enemies(eb::GameVersion version) {
  FrameFixture h(version,4);Catalog input;BattleCombatants catalog(input.bytes,input.layout);
  battle::BattleSpriteAllocation allocation;battle::BackgroundDisplayState layout;
  battle::StartupGraphics graphics(catalog,h.objects,allocation,*h.f.graphics,h.f.windows,h.f.party,
    h.colors,h.scratch,h.display,layout,h.fade,h.frame);h.fade.force_blank();
  for(unsigned group=0;group<8;++group) {
    std::fill(h.scratch.bytes.begin(),h.scratch.bytes.end(),0xa7);
    for(unsigned i=0;i<65536;++i)h.display.set_vram_byte(std::uint16_t(i),0x5b);
    const auto staged=h.colors.staged;const auto displayed=h.colors.displayed;
    h.colors.upload_mode=8;
    graphics.load_enemies(group);
    const auto resources=h.objects.resources();unsigned blocks=0;
    check(resources.size()==(group==6?2:1) && allocation.sprites==resources.size(),"Enemy loader lost authored resource count including count0");
    for(unsigned i=0;i<resources.size();++i) {
      const auto& resource=resources[i];unsigned shape=catalog.shape(resource.sprite);
      unsigned cols=shape==2||shape==4?2:shape==5||shape==6?4:1,rows=shape>=3&&shape<=5?2:shape==6?4:1;
      check(allocation.enemy_ids[i]==resource.enemy && allocation.map_offsets[i]==blocks &&
        allocation.widths[i]==cols && allocation.heights[i]==rows,"Enemy allocation metadata differs");
      check(h.colors.staged[8+i]==catalog.packed_palette(resource.palette_id),"Enemy palette raw high bits lost");
      for(unsigned part=0;part<16;++part) {
        const auto& map=allocation.normal[i];const auto tile=catalog.tile_arrangement(blocks+part);
        check(map[part*5+1]==std::uint8_t(tile) && map[part*5+2]==std::uint8_t((tile>>8)+i*2+32) &&
          allocation.alternate[i][part*5+2]==std::uint8_t(map[part*5+2]+8),"Normal/alternate tile identity differs");
        check(map[part*5+4]==(part==cols*rows-1?0x81:1),"Map termination/default flags differ");
      }
      auto raw=catalog.planar(resource.sprite);
      for(unsigned part=0;part<cols*rows;++part)for(unsigned row=0;row<4;++row)for(unsigned byte=0;byte<128;++byte)
        check(h.scratch.bytes[catalog.allocation_offset(blocks+part)+row*0x200+byte]==raw[part*512+row*128+byte],"Planar enemy scatter differs");
      blocks+=cols*rows;
    }
    check(allocation.maps==blocks && h.colors.displayed==displayed && h.colors.upload_mode==8,"Enemy load prematurely published palettes");
    for(unsigned bank=0;bank<16;++bank)if(bank<8||bank>=8+resources.size())check(h.colors.staged[bank]==staged[bank],"Enemy load changed unrelated palette");
    unsigned count=blocks>16?0x3000:0x2000;
    for(unsigned i=0;i<count;++i)check(h.display.vram_byte(std::uint16_t(0x4000+i))==h.scratch.bytes[i],"Final enemy immediate VRAM copy differs");
    check(h.display.vram_byte(std::uint16_t(0x4000+count))==0x5b,"Final enemy copy exceeded actual extent");
  }
  for(auto ids:{std::vector<std::uint16_t>{0,0,0,0,0,0,0,0,0},std::vector<std::uint16_t>{5,5,0},std::vector<std::uint16_t>{6,5,5,6}}) {
    const auto expected=ids.front()==0?8u:ids.front()==5?2u:4u;
    check(graphics.admit_enemies(ids)==expected,"Width admission lost prefix or sprite-zero alias");
  }
  h.roster.at(8).resource=0;h.roster.at(8).sprite=1;h.roster.at(8).consciousness=1;h.roster.at(8).side=1;h.roster.at(8).blink=3;
  graphics.load_enemies(0);const auto phase=h.background.effects();graphics.publish_initial();
  check(h.frame_display.pending() && h.roster.at(8).blink==2 &&
    h.background.effects().minimum_wait==phase.minimum_wait,"Initial C2F8F9 skipped timers or ran background frame");
  h.f.party.controlled_count=1;h.f.party.controlled_order[0]=0;h.f.party.character(1).afflictions[0]=2;
  graphics.publish_window_palette(1,false);
  check(h.colors.upload_mode==8 && h.colors.staged[0][0]==0,"Initial palette did not use actual packed publication sink");
  for(unsigned i=0;i<32;++i)check(h.colors.staged[i/16][i%16]==h.f.windows.palette()[i],"Initial window palette diverged from actual host");
}
void rejection(eb::GameVersion version) {
  FrameFixture h(version,4);Catalog input;BattleCombatants catalog(input.bytes,input.layout);
  battle::BattleSpriteAllocation allocation;battle::BackgroundDisplayState layout;
  battle::PsiScratch wrong;
  rejects([&]{battle::StartupGraphics graphics(catalog,h.objects,allocation,*h.f.graphics,h.f.windows,h.f.party,
    h.colors,wrong,h.display,layout,h.fade,h.frame);},"Foreign scratch accepted by graphics frame owner");
  battle::StartupGraphics graphics(catalog,h.objects,allocation,*h.f.graphics,h.f.windows,h.f.party,
    h.colors,h.scratch,h.display,layout,h.fade,h.frame);
  const auto scratch=h.scratch.bytes, vram=h.display.vram();const auto original=allocation;
  rejects([&]{graphics.load_common(1);},"Visible display accepted immediate startup loading");
  check(!graphics.failed() && scratch==h.scratch.bytes && vram==h.display.vram() && allocation==original,
        "Rejected forcedblank admission mutated graphics owners");
  h.fade.force_blank();
  rejects([&]{graphics.load_enemies(catalog.size());},"Invalid authored group admitted");
  check(!graphics.failed() && scratch==h.scratch.bytes && vram==h.display.vram(),"Invalid group changed source state");
  auto active=h.frame.begin();
  rejects([&]{graphics.load_common(1);},"Active battle frame accepted startup mutation");
  check(active->advance(),"Fixture empty PSI frame unexpectedly suspended");
  rejects([&]{h.f.meters.begin_select(4);},"Out-of-domain selection admitted");
}
void selection(eb::GameVersion version) {
  for(bool previous:{false,true}) {
    FrameFixture h(version,4);
    h.f.party.controlled_count=2;
    h.f.meters.state().selected_phase=previous?0:0xffff;
    const auto polls=h.f.clock.input_polls;
    auto operation=h.f.meters.begin_select(1);
    unsigned waits=0;
    while(operation->advance()!=dialogue::OutputProgress::Complete) {
      check(operation->effect() && operation->effect()->kind==dialogue::WindowEffectKind::FrameWait,
            "Meter selection yielded an invented service");
      ++waits;
      auto tick=h.f.scene->begin(story::TickKind::Frame);
      battle_frame_test::service(*tick,story::SceneService::Frame);
      tick->complete_frame({0,0});battle_frame_test::finish(*tick);
      if(previous && waits==1) h.f.meters.state().selected_phase=2;
      h.f.party.controlled_count=3;
      operation->respond();
    }
    check(operation->complete() && h.f.meters.state().selected_phase==1,
          "Meter selection lost captured new phase or live prior clear");
    check(waits==(version==eb::GameVersion::US?unsigned(previous)+1:0) &&
          h.f.clock.input_polls==polls+waits,"Meter selection lost exact regional raw waits");
    auto clear=h.f.meters.begin_clear_selection();
    while(clear->advance()!=dialogue::OutputProgress::Complete) {
      auto tick=h.f.scene->begin(story::TickKind::Frame);battle_frame_test::service(*tick,story::SceneService::Frame);
      tick->complete_frame({0,0});battle_frame_test::finish(*tick);clear->respond();
    }
    check(h.f.meters.state().selected_phase==0xffff,"Completed menu did not clear live selection");
  }
}
}
int main() {
  try {for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {for(unsigned depth:{2u,4u})common(region,depth);enemies(region);retained_decode(region);live_decode(region);selection(region);rejection(region);}std::cout<<"native startup graphics: "<<checks<<" checks passed\n";}
  catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
