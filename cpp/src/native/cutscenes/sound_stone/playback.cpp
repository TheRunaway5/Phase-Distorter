#include "eb/native/cutscenes/sound_stone/playback.hpp"
#include <stdexcept>

namespace eb::native::cutscenes::sound_stone {
Playback::Playback(const Resources &r,State &state,std::span<const std::uint8_t> flags):resources_(r),state_(state) {
  if(flags.size()!=128) throw std::invalid_argument("Sound Stone requires actual event flag storage");
  state_.large_map={240,0,0,240,0x81}; state_.small_map={248,0,0,248,0x80};
  for(unsigned i=0;i<8;++i) {
    const unsigned flag=r.flag(i);
    if(!flag) throw std::runtime_error("Sound Stone melody flag has no authored identity");
    const bool set=(flags[(flag-1)/8]>>((flag-1)%8))&1;
    auto &m=state_.melodies[i]; m.state=std::uint16_t(set); m.radius_hold=1; m.orbit_frame=0;
    known_+=set;
  }
}
SequenceStep Playback::sequence() {
  if(draw_pending_||finished_) throw std::logic_error("Sound Stone sequence requires its ordered drawing phase");
  SequenceStep result;
  if(!countdown_ && !--start_delay_) { selected_=candidate_=0xffff; countdown_=1; }
  if(finish_delay_) {
    if(!--finish_delay_) { finished_=true; result.finished=true; return result; }
  } else if(countdown_) {
    if(!--countdown_) {
      if(selected_<8&&state_.melodies[selected_].state==2) state_.melodies[selected_].state=1;
      if(selected_==8) {
        unsigned next=std::uint16_t(candidate_+1);
        while(next<8&&!state_.melodies[next].state) ++next;
        if(next==8) finish_delay_=150;
      }
      ++candidate_;
      if(candidate_<8) {
        selected_=candidate_;
        if(state_.melodies[candidate_].state) state_.melodies[candidate_].state=2;
        else selected_=8;
        countdown_=resources_.duration(selected_); result.music=resources_.music(selected_);
      } else finish_delay_=150;
    }
    if(selected_<8&&countdown_==std::uint16_t(resources_.duration(selected_)-9)) result.effect=std::uint8_t(known_+8);
  }
  draw_pending_=true; return result;
}
std::vector<Sprite> Playback::draw() {
  if(!draw_pending_||finished_) throw std::logic_error("Sound Stone drawing requires an accepted sequence phase");
  std::vector<Sprite> out;
  const auto emit=[&](const std::array<std::uint8_t,5> &map,std::uint16_t x,std::uint16_t y) {
    const auto offset=[](std::uint8_t v) { return v<128?int(v):int(v)-256; };
    const std::uint16_t py=std::uint16_t(y+offset(map[0])-1),px=std::uint16_t(x+offset(map[3]));
    if((py>=224&&py<0xffe0)||((px>>8)!=0&&(px>>8)!=255)) return;
    if(out.size()<128) out.push_back({px,py,map[1],map[2],bool(map[4]&1)});
  };
  for(unsigned i=0;i<8;++i) {
    auto &m=state_.melodies[i];
    if(m.state==1) {
      state_.large_map[1]=resources_.center_tile(i); state_.large_map[2]=0x30;
      emit(state_.large_map,resources_.x(i),resources_.y(i));
    } else if(m.state==2) {
      m.angle=std::uint16_t(m.angle+3277);
      if(!--m.radius_hold) {
        m.radius_hold=2; m.radius=resources_.radius(i,m.orbit_frame++);
        m.orbit_tile_offset=std::uint16_t(2-m.orbit_tile_offset);
      }
      state_.small_map[1]=std::uint8_t(resources_.orbit_tile(i)+m.orbit_tile_offset);
      state_.small_map[2]=std::uint8_t(0x31+2*resources_.orbit_palette(i));
      if(m.radius) for(unsigned half=0;half<2;++half) {
        const auto motion=resources_.motion(m.radius,std::uint8_t((m.angle>>8)+half*128));
        emit(state_.small_map,std::uint16_t(resources_.x(i)+motion[0]),std::uint16_t(resources_.y(i)+motion[1]));
      }
      state_.large_map[1]=std::uint8_t(resources_.center_tile(i)+128);
      state_.large_map[2]=std::uint8_t(0x30+2*resources_.center_palette(i));
      emit(state_.large_map,resources_.x(i),resources_.y(i));
    }
  }
  if(!--central_hold_) { central_hold_=15; central_frame_=std::uint16_t((central_frame_+1)&3); }
  state_.small_map[1]=std::uint8_t(64+2*central_frame_); state_.small_map[2]=0x3b;
  emit(state_.small_map,128,112); draw_pending_=false; return out;
}
}
