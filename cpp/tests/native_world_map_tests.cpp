#include "eb/native/world_map.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) { if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F &&operation) {
    bool caught = false;
    try { operation(); } catch (const std::exception &) { caught = true; }
    require(caught, "Malformed map state/content accepted");
}
struct Fixture {
    std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x20000);
    WorldMapLayout layout{{}, 0x1a000, 0x1aa00, 0x1c000, 0x1c100, 0x1c104, 0x1c108,
                          0x1c400, 0x1c430, 0x1c600, 0x1c10c, 0x1c110, 1};
    const std::array<std::uint8_t, 32> graphic{
        0x81,0x42,0x24,0x18,0xff,0xff,0x55,0xaa,0xfe,0xff,0,
        0x81,0x42,0x24,0x18,0xff,0xff,0xaa,0x55,0x18,0x24,0x42,0x81,
        0x81,0x42,0x24,0x18,0x18,0x18,0x18,0x18,0x18};
    void word(unsigned at, unsigned value) { bytes.at(at) = value; bytes.at(at + 1) = value >> 8; }
    void pointer(unsigned at, unsigned value) {
        value += 0xc00000;
        for (unsigned i = 0; i < 4; ++i) bytes.at(at + i) = value >> (i * 8);
    }
    void fill_command(std::vector<std::uint8_t> &out, unsigned count, unsigned value) {
        while (count) {
            const unsigned length = std::min(count, 1024u), encoded = length - 1;
            out.push_back(0xe4 | (encoded >> 8)); out.push_back(encoded); out.push_back(value);
            count -= length;
        }
    }
    Fixture() {
        for (unsigned i = 0; i < 10; ++i) layout.block_chunks[i] = i * 0x2800;
        pointer(layout.graphics, 0x1d000);
        pointer(layout.arrangements, 0x1d500);
        pointer(layout.collision_pointers, 0x1e000);
        pointer(layout.animation_graphics, 0x1d700);
        pointer(layout.animation_properties, 0x1c800);
        // All compression operations, extended header and overlapping copies.
        std::vector<std::uint8_t> art{3,0x81,0x42,0x24,0x18,0x21,0xff,0x40,0x55,0xaa,0x62,0xfe,
            0x83,0,0,0xa3,0,4,0xc3,0,3,0xfc,3,0,0,0x84,0,26};
        fill_command(art, 0x7001 - 32, 0); art.push_back(0xff);
        std::copy(art.begin(), art.end(), bytes.begin() + 0x1d000);
        unsigned at = 0x1d500;
        for (unsigned block = 0; block < 3; ++block) {
            bytes[at++] = 31;
            for (unsigned tile = 0; tile < 16; ++tile) {
                const unsigned descriptor = (block == 2 ? 1 : 0) | ((block + 2) << 10) |
                    ((tile & 1) ? 0x4000 : 0) | ((tile & 2) ? 0x8000 : 0) | ((tile & 4) ? 0x2000 : 0);
                word(at, descriptor); at += 2;
            }
            word(0x1e000 + block * 2, block * 16);
            std::fill_n(bytes.begin() + layout.collision_patterns + block * 16, 16, 1u << block);
        }
        bytes[at] = 0xff;
        word(layout.event_pointers, 0xc700);
        word(0x1c700, 1); word(0x1c702, 2); // Flag1 clear:0<-1 then1<-2.
        word(0x1c704, 0); word(0x1c706, 1); word(0x1c708, 1); word(0x1c70a, 2);
        word(0x1c70c, 0x8001); word(0x1c70e, 1); // Flag1 set:0<-2.
        word(0x1c710, 0); word(0x1c712, 2);
        bytes[0x1c800] = 1; bytes[0x1c801] = 2; bytes[0x1c802] = 3;
        word(0x1c803, 32); word(0x1c805, 0); word(0x1c807, 16); // Two frames into tile1.
        std::vector<std::uint8_t> animation;
        fill_command(animation, 32, 0xff); fill_command(animation, 8192 - 32, 0);
        animation.push_back(0xff);
        std::copy(animation.begin(), animation.end(), bytes.begin() + 0x1d700);
        bytes[layout.sectors + 33] = 12; // Same tileset, distinct combination1/palette4.
        word(layout.sector_attributes + 33 * 2, 0x1234);
    }
};
} // namespace

int main() {
    try {
        Fixture f;
        WorldMap map(f.bytes, f.layout);
        require(map.tileset_count() == 1 && map.tileset(0).blocks.size() == 3, "Map content counts differ");
        for (unsigned y = 0; y < 8; ++y)
            for (unsigned x = 0; x < 8; ++x) {
                unsigned color = 0;
                for (unsigned p = 0; p < 4; ++p)
                    color |= ((f.graphic[y * 2 + (p / 2) * 16 + (p & 1)] >> (7 - x)) & 1) << p;
                require(map.tileset(0).graphics[0][y * 8 + x] == color, "Compression command or bitplane differs");
            }
        require(map.sector(1,1).combination == 1 && map.sector(1,1).palette == 4 &&
                    map.sector(1,1).attributes == 0x1234, "Sector identity/attributes differ");
        const std::array<std::uint8_t, 1> clear{0}, set{1}, other{2};
        auto area = map.prepare(0, clear);
        require(area.blocks()[0] == map.tileset(0).blocks[1] &&
                    area.blocks()[1] == map.tileset(0).blocks[2], "Replacement order or collision copy differs");
        require(map.prepare(0, set).blocks()[0] == map.tileset(0).blocks[2] &&
                    map.prepare(0, other).blocks() == area.blocks(), "Event polarity/one-based flag numbering differs");
        require(area.tile(32,16) == area.blocks()[0].tiles[0] && area.collision(32,16) == 2,
                "Area border did not use the current area's event-resolved block0");
        require(area.tile(-1,0) == area.blocks()[0].tiles[3] &&
                    area.tile(std::numeric_limits<int>::max(), std::numeric_limits<int>::min()) ==
                        area.blocks()[0].tiles[3], "Signed boundary sampling wrapped into unrelated map content");
        const auto before = area.graphics();
        const auto tiles_before = area.blocks();
        for (unsigned i = 0; i < 100; ++i) {
            area.pixel(-1, -1); area.pixel(8192, 10240, MapLayer::Foreground); area.collision(7,8);
        }
        require(before == area.graphics() && tiles_before == area.blocks(), "Sampling advanced or mutated the area");
        auto copy = area;
        require(!area.advance_animation() && !area.advance_animation() && area.advance_animation(),
                "Initial animation delay differs");
        require(area.graphics()[1][0] == 15 && copy.graphics()[1][0] == 0, "Animation state shared across area copies");
        area.advance_animation(); area.advance_animation(); area.advance_animation();
        require(area.graphics()[1][0] == 0, "Second animation frame differs");
        area.advance_animation(); area.advance_animation(); area.advance_animation();
        require(area.graphics()[1][0] == 15, "Animation did not wrap to first frame");
        auto clock_peer=area;
        const auto animated_graphics=area.graphics();
        area.reprepare_events(set);
        require(area.blocks()==map.prepare(0,set).blocks()&&area.graphics()==animated_graphics,
                "Event-only refresh reset current artwork or missed collision changes");
        rejects([&]{area.reprepare_events({});});
        require(area.blocks()==map.prepare(0,set).blocks()&&area.graphics()==animated_graphics,
                "Rejected event refresh partially changed its active area");
        for(unsigned tick=0;tick<17;++tick)
            require(area.advance_animation()==clock_peer.advance_animation()&&area.graphics()==clock_peer.graphics(),
                    "Event-only refresh reset or advanced animation clocks");
        area.reprepare_events(clear);
        require(area.blocks()==map.prepare(0,clear).blocks(),"Event refresh accumulated stale substitutions");
        const auto before_reset = area.graphics();
        const auto blocks_before_reset = area.blocks();
        area.reset_animation();
        require(area.graphics() == before_reset && area.blocks() == blocks_before_reset,
                "Animation initialization rewrote retained artwork or blocks");
        require(!area.advance_animation() && !area.advance_animation() && area.advance_animation(),
                "Animation reinitialization did not restore the complete initial delay");
        require(area.graphics()[1][0] == 15,
                "Animation reinitialization did not restart the first authored frame");
        const auto foreground = area.tile(0,0,MapLayer::Foreground);
        require(foreground.priority && foreground.palette == 3 && foreground.graphic == 0,
                "Foreground mapping lost authored palette/forced priority");
        auto retained = [&] { Fixture local; WorldMap temporary(local.bytes, local.layout); return temporary.prepare(0, clear); }();
        require(retained.tile(0,0).palette == 3 && retained.advance_animation() == false,
                "Area retained borrowed catalog/assets storage");
        rejects([&] { map.sector(32,0); }); rejects([&] { map.block_id(0,320); });
        rejects([&] { map.prepare(32,clear); }); rejects([&] { map.prepare(0,{}); });
        rejects([&] { area.tile(0,0,MapLayer(99)); });
        for (unsigned mutation = 0; mutation < 8; ++mutation) {
            Fixture bad;
            switch (mutation) {
            case 0: bad.bytes.resize(0x1d001); break;
            case 1: bad.bytes[0x1d000] = 0x80; bad.bytes[0x1d001] = bad.bytes[0x1d002] = 0; break;
            case 2: bad.word(0x1e000, 33); break;
            case 3: bad.word(0x1c706, 3); break;
            case 4: bad.bytes[0x1c801] = 0; break;
            case 5: bad.word(0x1c803, 31); break;
            case 6: bad.word(0x1c807, 0xffff); break;
            case 7: bad.word(bad.layout.tileset_mapping, 1); break;
            }
            rejects([&] { WorldMap invalid(bad.bytes,bad.layout); });
        }
        std::cout << "PASS native world map codec, ordered events/collision, area identity, bounds, clocks and ownership\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
