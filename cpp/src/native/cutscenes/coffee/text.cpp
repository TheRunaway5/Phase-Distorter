#include "eb/native/cutscenes/coffee/text.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::coffee {
namespace { void require(bool v,const char *m) { if(!v)throw std::runtime_error(m); } }
void Text::initialize() {
  bytes_.fill(version()==GameVersion::JP?0:255); tilemap_.fill(0);
  unsigned tile=16;
  for(unsigned row=0;row<32;++row)for(unsigned col=3;col<29;++col)tilemap_[row*32+col]=std::uint16_t(0x2000+tile++);
  columns=26;tile_base=0;dirty_low=0xffff;dirty_high=0;x=y=0;
  if(version()==GameVersion::US)pixel_offset=byte_offset=0;
}
void Text::set_byte(unsigned at,std::uint8_t value) { require(at<bytes_.size(),"Flyover glyph leaves its authored text backing");bytes_[at]=value; }
void Text::position(std::uint8_t argument) {
  if(version()==GameVersion::US) { pixel_offset=std::uint16_t(pixel_offset+unsigned(argument)+8);byte_offset=std::uint16_t((pixel_offset>>3)*16); }
  else x=std::uint16_t(104-unsigned(argument)*3);
}
void Text::strip(std::span<const std::uint8_t> source,unsigned advance) {
  const unsigned old_shift=pixel_offset&7;
  for(unsigned row=0;row<16;++row) {
    const unsigned at=byte_offset+(row/8)*416+(row&7)*2;
    const auto mask=std::uint8_t(~(unsigned(std::uint8_t(~source[row]))>>old_shift));
    require(at+1<bytes_.size(),"Flyover strip leaves its authored text backing");
    bytes_[at]=bytes_[at+1]=std::uint8_t(bytes_[at+1]&mask);
  }
  pixel_offset=std::uint16_t(pixel_offset+advance);
  // C49875 compares a tile count with the retained byte offset. Preserve that
  // source comparison, including its extra mask write at later tile positions.
  if((pixel_offset>>3)!=byte_offset) {
    byte_offset=std::uint16_t((pixel_offset>>3)*16);
    for(unsigned row=0;row<16;++row) {
      const unsigned at=byte_offset+(row/8)*416+(row&7)*2;
      const auto mask=std::uint8_t(~(unsigned(std::uint8_t(~source[row]))<<(8-old_shift)));
      require(at+1<bytes_.size(),"Flyover strip overflow leaves its authored text backing");
      bytes_[at]=bytes_[at+1]=std::uint8_t(bytes_[at+1]&mask);
    }
  }
}
void Text::glyph(std::uint16_t encoded) {
  if(version()==GameVersion::US) {
    unsigned remaining=resources_.advance(encoded),ordinal{};
    while(remaining>8) { strip(resources_.strip(encoded,ordinal++),8);remaining-=8; }
    strip(resources_.strip(encoded,ordinal),remaining);return;
  }
  const unsigned shift=x&7;const auto decoded=resources_.packed_glyph(encoded,shift);
  for(unsigned row=0;row<12;++row)for(unsigned byte=0;byte<(shift<5?2u:3u);++byte)decoded_glyph[row*3+byte]=decoded[row*3+byte];
  unsigned destination=(((unsigned(y>>3)*columns+(x>>3)+tile_base)*8)+(y&7))*2;
  require(destination+1<bytes_.size(),"Japanese flyover glyph leaves its authored text backing");
  dirty_low=std::min(dirty_low,std::uint16_t(destination));
  const std::array<std::uint8_t,3> masks{std::uint8_t(255>>shift),std::uint8_t(shift<4?(255<<(4-shift)):255),std::uint8_t(shift>4?(255<<(12-shift)):0)};
  unsigned subrow=y&7;
  for(unsigned row=0;row<12;++row) {
    for(unsigned strip_index=0;strip_index<3;++strip_index) {
      const unsigned mask=masks[strip_index];if(!mask)continue;
      const unsigned at=destination+strip_index*16;
      require(at+1<bytes_.size(),"Japanese flyover glyph strip leaves its authored text backing");
      const unsigned bits=decoded_glyph[row*3+strip_index];
      set_byte(at,std::uint8_t((bytes_[at]&~mask)|(bits&mask)));
      set_byte(at+1,std::uint8_t((bytes_[at+1]&~mask)|(bits&mask)));
    }
    destination+=2;
    if(row<11) { subrow=(subrow+1)&7;if(!subrow)destination+=(columns-1)*16; }
  }
  destination+=16+(masks[2]?16:0);
  dirty_high=std::max(dirty_high,std::uint16_t(destination));x=std::uint16_t(x+12);
}
void Text::name(std::span<const std::uint8_t> name_bytes) {
  const unsigned limit=version()==GameVersion::JP?4:5;
  for(unsigned i=0;i<std::min(limit,unsigned(name_bytes.size()));++i) {
    const auto value=name_bytes[i];if(version()==GameVersion::JP?value==0:value<=79)break;
    glyph(version()==GameVersion::JP?resources_.name_glyph(value):value);
  }
}
std::array<TextTransfer,2> Text::prepare_row() {
  require(screen_offset<32,"Flyover text ring row leaves its authored extent");
  if(version()==GameVersion::US)for(auto &value:bytes_)value=std::uint8_t(value^255);
  const unsigned offset=screen_offset*416,base=version()==GameVersion::JP?0x6080:0x6150;
  const unsigned first=std::min(1248u,0x3400-offset);
  const std::array<TextTransfer,2> transfers{TextTransfer{0,std::uint16_t(first),std::uint16_t(base+screen_offset*208)},TextTransfer{std::uint16_t(first),std::uint16_t(1248-first),std::uint16_t(base)}};
  dirty_low=0xffff;dirty_high=0;return transfers;
}
void Text::consume_row() {
  y=std::uint16_t(y+(version()==GameVersion::JP?18:24));x=0;const unsigned tiles=y>>3;
  screen_offset=std::uint16_t(screen_offset+tiles+(version()==GameVersion::US?1:0));if(screen_offset>=32)screen_offset-=32;
  if(version()==GameVersion::US) { bytes_.fill(255);pixel_offset=byte_offset=0; }
  else {
    require(tiles<=4,"Japanese flyover row leaves its authored backing");
    const unsigned count=(4-tiles)*416;
    std::move(bytes_.begin()+tiles*416,bytes_.end(),bytes_.begin());std::fill(bytes_.begin()+count,bytes_.end(),0);
  }
  y&=7;
}
}
