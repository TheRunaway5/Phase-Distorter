#include "eb/native/cutscenes/cast/text.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::cast {
namespace {
void require(bool value,const char *message){if(!value)throw std::logic_error(message);}
unsigned arranged(unsigned tile){return (tile&15)+((tile&0x3f0)<<1);}
battle::PsiTransfer transfer(unsigned source,unsigned count,unsigned destination){return {battle::PsiTransferKind::Vram,std::uint16_t(source),std::uint16_t(count),std::uint16_t(destination),0};}
}
Text::Text(const Resources &resources,State &state,battle::PsiScratch &scratch,party::State &party)
    :resources_(resources),state_(state),scratch_(scratch),party_(party){require(resources.version()==party.version(),"Cast text requires the actual regional party");}
unsigned Text::word(unsigned at) const noexcept {return scratch_.bytes[std::uint16_t(at)]|(unsigned(scratch_.bytes[std::uint16_t(at+1)])<<8);}
void Text::word(unsigned at,unsigned value) noexcept {scratch_.bytes[std::uint16_t(at)]=std::uint8_t(value);scratch_.bytes[std::uint16_t(at+1)]=std::uint8_t(value>>8);}
void Text::render_name(std::span<const std::uint8_t> name,unsigned columns,unsigned tile,
    std::span<std::uint8_t,1664> bytes,RasterCursor &cursor,std::uint8_t padding) {
  require(resources_.version()==GameVersion::US&&columns<=52,"Cast VWF request exceeds its source ring");
  // C1FF99 measures the complete normal-font string with WORD addition,
  // then centers it in the requested tile columns before C44B3A draws.
  unsigned measured{};for(const auto encoded:name){if(!encoded)break;
    measured=std::uint16_t(measured+resources_.glyph_width((unsigned(encoded)-0x50)&127)+padding);}
  require(measured<=columns*8,"Cast VWF centering would escape its source ring");
  std::fill_n(bytes.begin(),832,255);cursor={};cursor.x=std::uint16_t((columns*8-measured)>>1);cursor.tile=cursor.x>>3;
  const auto strip=[&](std::span<const std::uint8_t> glyph,unsigned advance){
    const unsigned shift=cursor.x&7,old=cursor.tile;
    if(!shift)std::fill_n(bytes.begin()+old*32,32,255);
    for(unsigned y=0;y<16;++y)bytes[old*32+y*2+1]&=std::uint8_t((glyph[y]>>shift)|(0xffu<<(8-shift)));
    cursor.x=std::uint16_t(cursor.x+advance);if(cursor.x>=416)cursor.x=std::uint16_t(cursor.x-416);cursor.tile=cursor.x>>3;
    if(cursor.tile!=old){std::fill_n(bytes.begin()+cursor.tile*32,32,255);if(shift)
      for(unsigned y=0;y<16;++y)bytes[cursor.tile*32+y*2+1]=std::uint8_t((unsigned(glyph[y])<<(8-shift))|((1u<<(8-shift))-1));}
  };
  for(const auto encoded:name){if(!encoded)break;const unsigned index=(unsigned(encoded)-0x50)&127;
    unsigned width=std::uint8_t(resources_.glyph_width(index)+padding),part{};
    while(width>8){strip(resources_.glyph_strip(index,part++),width);width-=8;}
    strip(resources_.glyph_strip(index,part),width);
  }
  // CHANGE_VWF_2BPP_TO_3_COLOUR changes only pixels whose two bits are11.
  for(unsigned i=0;i<columns*32;i+=2){const unsigned both=bytes[i]&bytes[i+1];bytes[i]&=std::uint8_t(~both);bytes[i+1]&=std::uint8_t(~both);}
  for(unsigned column=0;column<columns;++column){const unsigned at=arranged(tile+column)*16;
    require(at+272<=scratch_.bytes.size(),"Cast VWF destination escapes BUFFER");
    std::copy_n(bytes.begin()+column*32,16,scratch_.bytes.begin()+at);
    std::copy_n(bytes.begin()+column*32+16,16,scratch_.bytes.begin()+at+256);}
}
void Text::prepare_graphics(std::span<std::uint8_t,1664> raster,RasterCursor &cursor,std::uint8_t padding) {
  auto &bytes=scratch_.bytes;const bool jp=resources_.version()==GameVersion::JP;
  if(!jp)std::fill_n(bytes.begin(),4096,0);
  const unsigned header=jp?0:0x200,graphics=jp?0x200:0x600;
  std::copy(resources_.header().begin(),resources_.header().end(),bytes.begin()+header);
  std::copy(resources_.names_graphics().begin(),resources_.names_graphics().end(),bytes.begin()+graphics);
  if(jp)return;
  for(unsigned member=1;member<=4;++member)render_name(party_.name_field(member),6,resources_.party_tile(member-1),raster,cursor,padding);
  render_name(party_.name_field(party::NameField::Pet),6,448,raster,cursor,padding);
  constexpr std::array<unsigned,3> ids{13,12,36},members{2,2,4};
  for(unsigned i=0;i<ids.size();++i){std::vector<std::uint8_t> name;
    for(auto b:party_.name_field(members[i])){if(!b)break;name.push_back(b);}
    const auto suffix=resources_.guardian(i);name.insert(name.end(),suffix.begin(),suffix.end());
    const auto format=resources_.format(ids[i]);render_name(name,format.columns,format.tile,raster,cursor,padding);}
}
void Text::prepare_tiles(unsigned tile,unsigned column,unsigned count) {
  for(unsigned i=0;i<count;++i){const unsigned value=arranged(tile+i)+state_.tile_offset;
    word(0x4000+(column+i)*2,value);word(0x4040+(column+i)*2,value+16);}
}
unsigned Text::prepare_bytes(std::span<const std::uint8_t> name,unsigned column,unsigned maximum) {
  unsigned count{};for(auto b:name){if(!b||count==maximum)break;const unsigned value=arranged(b)+state_.tile_offset;
    word(0x4000+(column+count)*2,value);word(0x4040+(column+count)*2,value+16);++count;}return count;
}
std::uint16_t Text::pack_glyph(unsigned glyph,unsigned width,unsigned count,unsigned shift) {
  unsigned destination=0x2000+state_.text_cursor*16;const unsigned source=glyph*16,bottom=count*16;
  if(width!=8){for(unsigned i=0;i<16;++i){scratch_.bytes[std::uint16_t(destination+i)]=0;scratch_.bytes[std::uint16_t(destination+bottom+i)]=0;}}
  else {
    if(shift)for(unsigned i=0;i<16;++i){scratch_.bytes[std::uint16_t(destination+i)]|=std::uint8_t(std::uint8_t(~scratch_.bytes[std::uint16_t(source+i)])>>shift);
      scratch_.bytes[std::uint16_t(destination+bottom+i)]|=std::uint8_t(std::uint8_t(~scratch_.bytes[std::uint16_t(source+256+i)])>>shift);}
    if(shift)destination+=16;
    for(unsigned i=0;i<16;++i){scratch_.bytes[std::uint16_t(destination+i)]=std::uint8_t(unsigned(std::uint8_t(~scratch_.bytes[std::uint16_t(source+i)]))<<shift);
      scratch_.bytes[std::uint16_t(destination+bottom+i)]=std::uint8_t(unsigned(std::uint8_t(~scratch_.bytes[std::uint16_t(source+256+i)]))<<shift);}
    ++state_.text_cursor;
  }
  return std::uint16_t(0x2200+state_.text_cursor);
}
std::vector<battle::PsiTransfer> Text::repack(unsigned column,unsigned count) {
  if(count*2+2+state_.text_cursor>256)state_.text_cursor=0;
  const unsigned start=state_.text_cursor;
  unsigned at=0x4000+column*2,glyph=word(at)&1023;
  if(count&1){word(at+count*2,word(at+(count-1)*2));word(at+64+count*2,word(at+64+(count-1)*2));++count;
    const unsigned tile=pack_glyph(64,4,count,4);word(at,(word(at)&0x1c00)|tile);word(at+64,(word(at+64)&0x1c00)|(tile+count));at+=2;
    for(unsigned i=0;i<count-1;++i){const unsigned tile=pack_glyph(glyph,8,count,4);const unsigned old=word(at);glyph=old&1023;
      word(at,(old&0x1c00)|tile);word(at+64,(word(at+64)&0x1c00)|(tile+count));at+=2;}
  }else for(unsigned i=0;i<count;++i){const unsigned tile=std::uint16_t(pack_glyph(glyph,8,count,0)-1);
    word(at,(word(at)&0x1c00)|tile);word(at+64,(word(at+64)&0x1c00)|(tile+count));at+=2;glyph=word(at)&1023;}
  state_.text_cursor=std::uint16_t(state_.text_cursor+count+1);
  return {transfer(0x2000+start*16,count*16,0x7000+start*8),transfer(0x2000+(start+count)*16,count*16,0x7000+(start+count)*8)};
}
std::vector<battle::PsiTransfer> Text::copy(unsigned column,unsigned row,unsigned count,std::uint16_t scroll) {
  const unsigned destination_row=((scroll>>3)+row)&31;std::vector<battle::PsiTransfer> transfers;
  if(resources_.version()==GameVersion::JP){transfers=repack(column,count);count=(count+1)&~1u;}
  const auto destination=std::uint16_t(0x7c00+destination_row*32+column-((count+1)>>1));
  transfers.push_back(transfer(0x4000+column*2,count*2,destination));
  transfers.push_back(transfer(0x4040+column*2,count*2,destination_row==31?destination-0x3e0:destination+32));return transfers;
}
std::vector<battle::PsiTransfer> Text::name(unsigned id,unsigned column,unsigned row,std::uint16_t scroll) {
  unsigned count{};if(resources_.version()==GameVersion::JP)count=prepare_bytes(resources_.name(id),column,32);
  else {const auto f=resources_.format(id);count=f.columns;prepare_tiles(f.tile,column,count);}return copy(column,row,count,scroll);
}
std::vector<battle::PsiTransfer> Text::party_name(unsigned id,unsigned column,unsigned row,std::uint16_t scroll) {
  require((id>=1&&id<=4)||id==7,"Cast party name is outside its authored member domain");unsigned count=6;
  if(resources_.version()==GameVersion::JP){const auto name=id==7?party_.name_field(party::NameField::Pet):party_.name_field(id);count=prepare_bytes(name,column,unsigned(name.size()));}
  else prepare_tiles(id==7?448:resources_.party_tile(id-1),column,count);
  return copy(column,row,count,scroll);
}
std::vector<battle::PsiTransfer> Text::variable_name(unsigned member,unsigned id,unsigned column,unsigned row,std::uint16_t scroll) {
  if(resources_.version()==GameVersion::US)return name(id,column,row,scroll);
  require(member>=1&&member<=4,"Cast guardian name is outside its authored party domain");const auto name=party_.name_field(member);
  const unsigned first=prepare_bytes(name,column,unsigned(name.size())),second=prepare_bytes(resources_.name(id),column+first,32);return copy(column,row,first+second,scroll);
}
}
