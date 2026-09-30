#include "eb/native/world_display_fade.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb::native;
namespace {
unsigned checks{};
void check(bool v,const char*s){++checks;if(!v)throw std::runtime_error(s);}
template<class F>void rejects(F f){bool bad{};try{f();}catch(const std::logic_error&){bad=true;}check(bad,"Invalid fade publication accepted");}
}
int main(){try{
  WorldDisplayFade fade;fade.begin_in(1,1);
  auto first=fade.preview_next_frame();
  check(first.state().remaining==0&&first.state().brightness==0x80&&fade.state().remaining==1,
        "Preview advanced live fade or lost initial delay");
  auto repeated=fade.preview_next_frame();fade.commit_frame(first);
  rejects([&]{fade.commit_frame(first);});rejects([&]{fade.commit_frame(repeated);});
  unsigned updates{};
  while(fade.active()){auto frame=fade.preview_next_frame();if(frame.state().brightness!=fade.state().brightness)++updates;fade.commit_frame(frame);}
  check(updates==15&&fade.state().brightness==15,"Fade-in did not stop at source clamp");
  fade.begin_out(1,0);unsigned rows_disabled{};
  for(unsigned i=0;fade.active();++i){auto frame=fade.preview_next_frame();rows_disabled+=frame.disables_row_streams();fade.commit_frame(frame);check(i<20,"Fade-out never stopped");}
  check(rows_disabled==1&&fade.state().brightness==0x80,"Fade-out did not force blank/disable rows once");
  WorldDisplayFade other;auto foreign=other.preview_next_frame();rejects([&]{fade.commit_frame(foreign);});
  auto stale=fade.preview_next_frame();fade.begin_in(0x102,0x180);rejects([&]{fade.commit_frame(stale);});
  check(fade.state().step==2&&fade.state().delay==128,"Source fade argument byte truncation differs");
  auto next=fade.preview_next_frame();check(next.state().remaining==127&&next.state().brightness==128,
        "Signed-byte delay boundary differs");fade.commit_frame(next);
  for(unsigned remaining:{0u,1u,127u,128u,129u,255u})for(unsigned step:{0u,1u,15u,16u,127u,128u,240u,255u}){
    WorldDisplayFade value({0x8f,std::uint8_t(step),3,std::uint8_t(remaining)});
    const auto before=value.state();auto preview=value.preview_next_frame();
    for(unsigned i=0;i<20;++i)check(value.preview_next_frame().state()==preview.state()&&value.state()==before,
                                 "Repeated presentation sampling advanced fade");
    value.commit_frame(preview);rejects([&]{value.commit_frame(preview);});
  }
  std::cout<<"PASS native display fade: "<<checks<<" checks\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
