#include "eb/scene_read_view.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/battle/background_loader.hpp"
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
// Compare the battle publisher with the independent scalar PPU sampler. Fine
// scroll, negative margin coordinates and 16-pixel flipped tiles split runs at
// different boundaries; physical VRAM and palette data change between captures.
void published_rows(Fixture &f) {
    using namespace eb::native;
    std::uint32_t seed = 0x73f152;
    const auto random = [&] { seed ^= seed << 13; seed ^= seed >> 17; seed ^= seed << 5; return seed; };
    std::size_t checked = 0;
    for (unsigned epoch = 0; epoch < 24; ++epoch) {
        for (auto &v : f.vram) v = std::uint8_t(random());
        for (auto &v : f.palette) v = std::uint8_t(random());
        f.regs.fill(0);
        BattleBackgroundSceneFrame frame;
        frame.bitdepth = epoch & 1 ? 4 : 2;
        frame.secondary.emplace();
        frame.shared_artwork = epoch % 3 == 0;
        frame.primary.axis = BattleDistortionAxis(epoch % 3);
        frame.secondary->axis = BattleDistortionAxis((epoch + 1) % 3);
        frame.primary.horizontal_scroll = random(); frame.primary.vertical_scroll = random();
        frame.secondary->horizontal_scroll = random(); frame.secondary->vertical_scroll = random();
        for (unsigned y = 0; y < 224; ++y) {
            frame.primary.offsets[y] = random(); frame.secondary->offsets[y] = random();
        }
        battle::BackgroundDisplayState layout{};
        layout.mode = std::uint8_t((frame.bitdepth == 4 ? 1 : 0) | ((epoch & 4) ? 0xf0 : 0));
        layout.graphics = {std::uint8_t(random()), std::uint8_t(random())};
        for (unsigned layer = 0; layer < 4; ++layer) {
            layout.maps[layer] = std::uint8_t((random() & 0xfc) | ((epoch / 2) & 3));
            f.regs[7 + layer] = layout.maps[layer];
        }
        f.regs[5] = layout.mode; f.regs[11] = layout.graphics[0]; f.regs[12] = layout.graphics[1];
        ScenePalette colors;
        auto view = f.view();
        for (unsigned i = 0; i < colors.size(); ++i) {
            const auto color = view.palette(i);
            colors[i] = {std::uint8_t(color & 31), std::uint8_t((color >> 5) & 31), std::uint8_t(color >> 10)};
        }
        constexpr unsigned width = 358, margin = (width - 256) / 2;
        const auto result = frame.draw_published_layers(colors, f.vram, layout, width);
        const unsigned count = frame.shared_artwork ? 1 : 2;
        for (unsigned ordinal = 0; ordinal < count; ++ordinal) {
            const auto &source = ordinal ? *frame.secondary : frame.primary;
            const auto *other = !ordinal && frame.shared_artwork ? &*frame.secondary : nullptr;
            const unsigned layer = frame.bitdepth == 4 ? (ordinal ? 0 : 1) : (ordinal ? 3 : 2);
            for (unsigned y = 0; y < 224; ++y) {
                f.sx[layer] = other && other->axis == BattleDistortionAxis::Horizontal ? other->offsets[y] :
                    source.axis == BattleDistortionAxis::Horizontal ? source.offsets[y] : source.horizontal_scroll;
                f.sy[layer] = other && other->axis == BattleDistortionAxis::Vertical ? other->offsets[y] :
                    source.axis == BattleDistortionAxis::Vertical ? source.offsets[y] : source.vertical_scroll;
                for (unsigned x = 0; x < width; ++x) {
                    const auto expected = view.sample_background_pixel(layer, int(x) - int(margin), y + 1);
                    for (unsigned high = 0; high < 2; ++high) {
                        const int priority = (frame.bitdepth == 4 ? (ordinal ? 6 : 5) : (ordinal ? 0 : 1)) + int(high * 3);
                        const bool visible = expected.priority == priority;
                        const auto at = std::size_t(ordinal * 448 + high * 224 + y) * width + x;
                        if (result->atlas[at] != (visible ? palette_argb(colors[expected.palette_index]) : 0) ||
                            result->palette_indices[at] != (visible ? expected.palette_index : 256))
                            throw std::runtime_error("Published tile row differs from scalar PPU sampling");
                        ++checked;
                    }
                }
            }
        }
    }
    std::cout << "Published/scalar pixel equivalence: " << checked << " samples passed\n";
}
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
    published_rows(*f);
}
