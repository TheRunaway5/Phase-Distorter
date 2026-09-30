#include "eb/scene_read_view.hpp"
#include "generated_profile.hpp"
#include <array>
#include <iostream>
#include <memory>
#include <vector>
struct Fixture {
    std::array<std::uint8_t,0x20000> ram{};
    std::array<std::uint8_t,0x10000> vram{};
    std::array<std::uint8_t,512> palette{};
    std::array<std::uint8_t,544> objects{};
    std::vector<std::uint8_t> rom = std::vector<std::uint8_t>(0x300000);
    std::array<std::uint8_t,0x40> regs{};
    std::array<std::uint16_t,4> sx{},sy{};
    std::array<std::int16_t,6> affine{};
    std::array<std::int16_t,2> offsets{};
    std::array<std::uint32_t,256*224> native{};
    eb::SceneReadView view() {return {ram,vram,palette,objects,rom,regs,sx,sy,affine,offsets,native,eb::source_profile(eb::GameVersion::US),eb::GameVersion::US,0,0,0};}
};
int main() {
    auto f = std::make_unique<Fixture>();
    std::uint32_t seed=0x194321;
    auto random=[&]{seed ^= seed<<13;seed ^= seed>>17;seed ^= seed<<5;return seed;};
    for(auto& v:f->vram)v=random();
    for(auto& v:f->palette)v=random();
    std::size_t checked=0;
    for(unsigned epoch=0;epoch<160;++epoch) {
        for(auto& v:f->regs)v=random();
        // All eight modes, each tile-size/flip/scroll/palette combination from
        // deterministic data. Nonordinary modes exercise scalar fallback.
        f->regs[5]=(f->regs[5]&0xf8)|(epoch%8);
        f->regs[6]=(epoch%3)?0:random();
        for(auto& v:f->sx)v=random()&1023;
        for(auto& v:f->sy)v=random()&1023;
        // The next scanline can change texture and color data at the same
        // coordinates; its scratch rows must be fresh (as for HDMA).
        f->vram[random()&65535]^=255; f->palette[random()&511]^=255;
        auto plain=f->view(), cached=f->view(); eb::BackgroundTileRows rows;cached.tile_rows=&rows;
        for(int x=-512;x<1024;++x) for(unsigned bg=0;bg<4;++bg) {
            auto a=plain.sample_background_pixel(bg,x,epoch%17),b=cached.sample_background_pixel(bg,x,epoch%17);
            if(a.color!=b.color||a.priority!=b.priority||a.layer!=b.layer||a.math!=b.math||a.palette_index!=b.palette_index) {
                std::cerr<<"Tile row mismatch: mode="<<(epoch%8)<<" x="<<x<<" layer="<<bg<<'\n';return 1;
            }
            ++checked;
        }
    }
    std::cout<<"Cached/scalar pixel equivalence: "<<checked<<" samples passed\n";
}
