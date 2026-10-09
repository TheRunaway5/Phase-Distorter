#include "eb/native/cutscenes/ending/photos.hpp"
#include "eb/native/peripheral_state.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native;
namespace ending=eb::native::cutscenes::ending;
unsigned checks{};
void check(bool value,const char *message) {
  ++checks;if(!value)throw std::runtime_error(message);
}
std::vector<std::uint8_t> content(eb::GameVersion version) {
  const unsigned x=version==eb::GameVersion::US?0x4205d:0x41fa9;
  const unsigned y=version==eb::GameVersion::US?0x420bd:0x42009;
  std::vector<std::uint8_t> bytes(y+128);
  const auto word=[&](unsigned at,unsigned value){bytes[at]=std::uint8_t(value);bytes[at+1]=std::uint8_t(value>>8);};
  // The C41FFF sign quadrants and its exact unit-component bypass are the
  // existing movement owner's source-proved contract. Distinct fractional
  // factors exercise SLIDE's signed division rather than an eight-way pose.
  word(x,256);word(y,0);
  word(x+2,255);word(y+2,13);
  word(x+32,0);word(y+32,256);
  word(x+66,256);word(y+66,0);
  // The imported x/y spans overlap by32bytes; x[49] is the same actual
  // content word as y[1]. Preserve that identity in this synthetic input.
  word(x+98,13);word(y+98,256);
  return bytes;
}
void run(eb::GameVersion version) {
  const auto bytes=content(version);EnemyMovementData motion(bytes,version);
  battle::PsiDisplayState video;PeripheralState peripherals;
  video.staged_scroll={battle::PsiScroll{65534,3},battle::PsiScroll{71,99},
      battle::PsiScroll{17,4500},battle::PsiScroll{111,222}};
  video.scroll={battle::PsiScroll{11,12},battle::PsiScroll{13,14},
      battle::PsiScroll{15,16},battle::PsiScroll{17,18}};
  const auto displayed=video.scroll;
  std::array<std::uint8_t,65536> retained{};
  std::copy(video.vram().begin(),video.vram().end(),retained.begin());
  ending::Photograph photo;photo.slide_distance=3;
  ending::PhotographSlide positive(photo,motion,video,&peripherals);
  check(positive.length()==3,"Slide byte length lost its signed DIVISION16 result");
  check(positive.advance(video)&&video.staged_scroll[0].x==65535&&video.staged_scroll[1].x==1,
      "Slide first positive component did not retain and wrap its BG1 origin");
  check(positive.advance(video)&&video.staged_scroll[0].x==0&&video.staged_scroll[1].x==2,
      "Slide second positive component failed unsigned register wrap");
  check(positive.advance(video)&&video.staged_scroll[0].x==1&&video.staged_scroll[1].x==3,
      "Slide third frame lost its relative BG2 component");
  check(!positive.advance(video)&&positive.frames()==3,"Completed slide generated an extra foreground frame");
  check(video.staged_scroll[0].y==3&&video.staged_scroll[1].y==0&&
      video.staged_scroll[2].x==17&&video.staged_scroll[2].y==4500&&
      video.staged_scroll[3].x==111&&video.staged_scroll[3].y==222,
      "Slide wrote unrelated layer registers");
  for(unsigned i=0;i<4;++i)check(video.scroll[i].x==displayed[i].x&&video.scroll[i].y==displayed[i].y,
      "Slide manufactured an NMI scroll publication");
  check(std::equal(retained.begin(),retained.end(),video.vram().begin())&&video.pending().empty(),
      "Slide fabricated VRAM work instead of leaving it to the actual frame owner");

  video.staged_scroll[0]={700,900};photo.slide_direction=1;photo.slide_distance=20;
  ending::PhotographSlide fractional(photo,motion,video,&peripherals);
  check(fractional.advance(video)&&video.staged_scroll[0].x==700&&video.staged_scroll[0].y==900,
      "Negative fractional slide division rounded down rather than toward zero");
  check(fractional.advance(video)&&video.staged_scroll[0].x==701&&video.staged_scroll[0].y==900,
      "Fractional slide lost its retained subpixel accumulation");
  while(fractional.advance(video)) {}
  check(video.staged_scroll[0].x==719&&video.staged_scroll[0].y==899&&
      video.staged_scroll[1].x==19&&video.staged_scroll[1].y==65535,
      "Fractional slide endpoint differs from signed wrapped 8.8 quotients");

  for(const auto direction:{16u,33u,49u,64u}) {
    photo.slide_direction=std::uint8_t(direction);photo.slide_distance=3;video.staged_scroll[0]={1,1};
    ending::PhotographSlide cardinal(photo,motion,video,&peripherals);
    while(cardinal.advance(video)) {}
    const auto expected_x=direction==33?65534u:direction==64?4u:1u;
    const auto expected_y=direction==16?4u:direction==49?65534u:1u;
    check(video.staged_scroll[0].x==expected_x&&video.staged_scroll[0].y==expected_y,
        "Slide lost an authored sign quadrant or the16-bit angle wrap");
  }

  photo.slide_direction=0;photo.slide_distance=0;video.staged_scroll[0]={73,91};video.staged_scroll[1]={19,29};
  ending::PhotographSlide empty(photo,motion,video,&peripherals);
  check(!empty.advance(video)&&empty.frames()==0&&video.staged_scroll[0].x==73&&
      video.staged_scroll[0].y==91&&video.staged_scroll[1].x==19&&video.staged_scroll[1].y==29,
      "Zero-distance slide overwrote retained registers or invented a frame");
  photo.slide_distance=128;ending::PhotographSlide sign_boundary(photo,motion,video,&peripherals);
  check(sign_boundary.length()==65408,"Slide normalized the source signed byte-length boundary");
  for(unsigned frame=0;frame<128;++frame)check(sign_boundary.advance(video),"Wrapped slide ended before its real unsigned count");
  check(video.staged_scroll[0].x==65481&&video.staged_scroll[1].x==65408,
      "Slide replaced wrapped signed accumulation with an unbounded host coordinate");
}
}
int main() {
  try {run(eb::GameVersion::US);run(eb::GameVersion::JP);
    std::cout<<"Ending photograph slide checks passed: "<<checks<<'\n';return 0;
  }catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}
}
