#include "eb/frame_interpolator.hpp"
#include <algorithm>
#include <chrono>
#include <iostream>
#include <stdexcept>
#include <vector>
namespace {
void require(bool value,const char* message) { if (!value) throw std::runtime_error(message); }
auto copy(std::span<const uint32_t> p) { return std::vector<uint32_t>(p.begin(),p.end()); }
uint32_t pattern(int x,int y) {
    // Nonlinear, asymmetric pixel art: dissolving endpoint colors cannot pass
    // the intermediate-position assertions as it could on a linear gradient.
    uint32_t hash=uint32_t(x)*0x9e3779b9u+uint32_t(y)*0x85ebca6bu;
    hash ^= hash>>16; hash*=0x7feb352du; hash^=hash>>15;
    return 0xff000000u | (hash&0xffffff);
}
void sprite_edges() {
    constexpr unsigned width=256,height=224;
    constexpr uint32_t background=0xff203040,ink=0xffffc040;
    for (int direction : {-1,1}) {
        std::vector<uint32_t> before(width*height,background),after=before;
        for (unsigned y=80;y<96;++y) for (unsigned x=80;x<92;++x) {
            before[y*width+x]=ink;
            after[y*width+x+direction*4]=ink;
        }
        eb::FrameInterpolator frames;
        frames.submit(before,width,height,1,0,true);
        frames.submit(after,width,height,2,0,true);
        const auto middle=copy(frames.sample(.5));
        for (unsigned y=0;y<height;++y) for (unsigned x=0;x<width;++x) {
            const auto expected=int(x)>=80+direction*2 && int(x)<92+direction*2 && y>=80 && y<96 ? ink:background;
            require(middle[y*width+x]==expected,"Moving sprite has a ghost or a displaced edge");
        }
    }
    // Thin artwork on the odd columns was invisible to the old strided matcher.
    std::vector<uint32_t> before(width*height,background),after=before;
    for (unsigned y=81;y<97;++y) { before[y*width+81]=ink; after[y*width+85]=ink; }
    eb::FrameInterpolator frames;
    frames.submit(before,width,height,1,0,true); frames.submit(after,width,height,2,0,true);
    const auto middle=copy(frames.sample(.5));
    require(middle[88*width+83]==ink && middle[88*width+81]==background && middle[88*width+85]==background,
            "Single-pixel artwork was missed by motion sampling");
    // A changed sprite pose has no trustworthy correspondence. It must not
    // become a translucent combination of the outgoing and incoming poses.
    std::fill(before.begin(),before.end(),background); after=before;
    for (unsigned y=80;y<96;++y) for (unsigned x=80;x<96;++x) after[y*width+x]=pattern(x,y);
    frames.reset(); frames.submit(before,width,height,1,0,true); frames.submit(after,width,height,2,0,true);
    for (double fraction : {.2,.4,.6,.8}) {
        const auto picture=frames.sample(fraction);
        for (size_t i=0;i<picture.size();++i)
            require(picture[i]==before[i] || picture[i]==after[i],"Unmatched artwork dissolved into a ghost");
    }
}
void odd_motion(unsigned width) {
    constexpr unsigned height=64;
    for (int dy : {-5,0,5}) for (int dx : {-5,5}) {
        std::vector<uint32_t> before(width*height),after(before.size());
        for(unsigned y=0;y<height;++y) for(unsigned x=0;x<width;++x) {
            before[y*width+x]=pattern(x,y);
            after[y*width+x]=pattern(int(x)-dx,int(y)-dy);
        }
        eb::FrameInterpolator frames;
        frames.submit(before,width,height,1,0,true);
        const auto start=std::chrono::steady_clock::now();
        frames.submit(after,width,height,2,0,true);
        const auto ms=std::chrono::duration<double,std::milli>(std::chrono::steady_clock::now()-start).count();
        for (int fifth=1;fifth<5;++fifth) {
            const auto picture=frames.sample(fifth/5.0);
            for(unsigned y=16;y<height-16;++y) for(unsigned x=16;x<width-16;++x)
                require(picture[y*width+x]==pattern(int(x)-dx*fifth/5,int(y)-dy*fifth/5),
                        "Odd-distance motion left a ghost at a high-rate sampling phase");
        }
        std::cout<<"Dense motion width="<<width<<" dx="<<dx<<" dy="<<dy<<" match_ms="<<ms<<'\n';
    }
}
void motion(bool battle,unsigned width) {
    constexpr unsigned height=224;
    std::vector<uint32_t> before(width*height),after(before.size());
    for (unsigned y=0;y<height;++y) for(unsigned x=0;x<width;++x) {
        // Different horizontal movement per band mimics a wavy battle backdrop.
        const int shift=battle ? (y/32)%2 ? -4:4 : 4;
        before[y*width+x]=pattern(x,y);
        after[y*width+x]=pattern(int(x)-shift,y);
        // A static opaque HUD strip must stay fixed while the scene moves.
        if (y>=192) before[y*width+x]=after[y*width+x]=0xff305080;
    }
    eb::FrameInterpolator frames;
    frames.submit(before,width,height,1,0,true);
    require(copy(frames.sample(.5))==before,"First picture interpolated from absent history");
    frames.submit(after,width,height,2,0,true);
    require(copy(frames.sample(0))==before && copy(frames.sample(1))==after,"Endpoints changed");
    const auto halfway=copy(frames.sample(.5));
    unsigned checked=0;
    for (unsigned y=16;y<176;y+=32) for (unsigned x=24;x<width-24;x+=32) {
        const int shift=battle ? (y/32)%2 ? -2:2 : 2;
        require(halfway[y*width+x]==pattern(int(x)-shift,y),"Motion did not reach its intermediate position");
        ++checked;
    }
    for(unsigned y=196;y<height;++y) for(unsigned x=0;x<width;++x)
        require(halfway[y*width+x]==after[y*width+x],"Static HUD moved or blended");
    require(copy(frames.sample(.2))!=copy(frames.sample(.4)),"Extra frames only repeated the native pictures");
    const auto start=std::chrono::steady_clock::now();
    for(int i=0;i<100;++i) frames.sample((i%5+1)/6.0);
    const auto ms=std::chrono::duration<double,std::milli>(std::chrono::steady_clock::now()-start).count()/100;
    std::cout<<(battle?"Battle wave":"World scroll")<<" width="<<width<<" positions="<<checked<<" generated_frame_ms="<<ms<<'\n';
    // Discontinuities and user choices may never reuse stale frame history.
    frames.submit(before,width,height,4,0,true);
    require(copy(frames.sample(.5))==before,"Skipped source frames retained history");
    frames.submit(after,width,height,5,4.0/3,true);
    require(copy(frames.sample(.5))==after,"Scene aspect transition retained history");
    frames.submit(before,width,height,6,4.0/3,false);
    require(copy(frames.sample(.2))==before,"Disabled interpolation changed pixels");
    frames.reset();
    require(frames.sample(.5).empty(),"Reset retained image");
    std::fill(before.begin(),before.end(),0xff000000);
    std::fill(after.begin(),after.end(),0xffffffff);
    frames.submit(before,width,height,10,0,true); frames.submit(after,width,height,11,0,true);
    require(copy(frames.sample(.5))==after,"Hard scene cut smeared the outgoing picture");
}
}
int main() {
    try { sprite_edges(); for(auto w:{256u,400u,1024u}) { odd_motion(w); motion(false,w); motion(true,w); } }
    catch(const std::exception& e) {std::cerr<<e.what()<<'\n'; return 1;}
}
