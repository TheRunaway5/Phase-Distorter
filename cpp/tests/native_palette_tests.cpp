#include "eb/native/world_palettes.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
template <class F> void rejects(F &&call) {
    bool rejected = false;
    try { call(); } catch (const std::exception &) { rejected = true; }
    require(rejected, "Invalid native palette operation accepted");
}
unsigned packed(unsigned r, unsigned g, unsigned b) { return r | g << 5 | b << 10; }
std::uint32_t rgb(unsigned r, unsigned g, unsigned b) {
    const auto byte = [](unsigned channel) { return (channel << 3) | (channel >> 2); };
    return 0xff000000u | byte(r) << 16 | byte(g) << 8 | byte(b);
}
struct Fixture {
    std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x6000);
    WorldPaletteLayout layout{0x1000, 0x200, 0x4000 + 32 * 192, 0x2000};
    static unsigned area(unsigned group) { return 0x4000 + group * 192; }
    void word(unsigned at, unsigned value) { bytes[at] = value; bytes[at + 1] = value >> 8; }
    void pointer(unsigned at, unsigned offset) {
        const auto value = 0xc00000u + offset;
        for (unsigned i = 0; i < 4; ++i) bytes[at + i] = value >> (i * 8);
    }
    void color_area(unsigned group, unsigned r, unsigned g, unsigned b) {
        for (unsigned i = 0; i < 96; ++i) word(area(group) + i * 2, packed(r, g, b));
        for (unsigned i : {0u, 16u, 32u}) word(area(group) + i * 2, 0);
    }
    Fixture() {
        for (unsigned p = 0; p < 8; ++p) {
            for (unsigned i = 0; i < 16; ++i) word(layout.sprites + (p * 16 + i) * 2, packed(20, 20, 20));
            word(layout.sprites + (p * 16 + 2) * 2, packed(20, 10, 30));
            word(layout.sprites + (p * 16 + 3) * 2, packed(6, 6, 6));
        }
        for (unsigned group = 0; group < 32; ++group) {
            pointer(layout.groups + group * 4, area(group));
            color_area(group, 10, 10, 10);
        }
        word(area(0), 1);
        word(area(0) + 32, area(2));
        word(area(2), 0x8002);
        word(area(2) + 32, area(3));
        for (unsigned group : {0u, 2u, 3u}) word(area(group) + 2, packed(group + 1, 0, 0));
        color_area(4, 8, 8, 8);
        color_area(5, 1, 1, 1);
        color_area(6, 12, 12, 12);
        color_area(7, 8, 4, 2);
        word(area(8) + 64, 4); // Scenery palette2 supplies actor palette4.
        word(area(8) + 66, packed(1, 2, 7));
        bytes[layout.sectors] = 8 * 8;
        bytes[layout.sectors + 32] = 7 * 8;
        bytes[layout.sectors + 2559] = 6 * 8;
    }
};
} // namespace
int main() {
    try {
        Fixture f;
        const WorldPalettes colors(f.bytes, f.layout);
        std::fill(f.bytes.begin(), f.bytes.end(), 0);
        require(colors.initial_sprites()[0][1] == rgb(20, 20, 20), "Initial palette/lifetime changed");
        require(colors.area_at(0, 0) == AreaPaletteId{8, 0} &&
                    colors.area_at(255, 127) == AreaPaletteId{8, 0} &&
                    colors.area_at(0, 128) == AreaPaletteId{7, 0} &&
                    colors.area_at(8191, 10239) == AreaPaletteId{6, 0}, "World palette sectors differ");
        std::array<std::uint8_t, 1> flags{0};
        require(colors.resolve({0, 0}, flags).scenery[0][1] == rgb(3, 0, 0), "Flag-off palette branch differs");
        flags[0] = 2;
        require(colors.resolve({0, 0}, flags).scenery[0][1] == rgb(4, 0, 0), "Chained flag-on palette branch differs");
        flags[0] = 3;
        require(colors.resolve({0, 0}, flags).scenery[0][1] == rgb(1, 0, 0), "Unmatched palette branch changed colors");
        require(colors.resolve({4, 0}, {}).sprites[0][1] == rgb(15, 15, 15), "Ambient sprite tint differs");
        require(colors.resolve({5, 0}, {}).sprites[0][1] == rgb(14, 14, 14), "Ambient tint lost six-step channel cap");
        require(colors.resolve({6, 0}, {}).sprites == colors.initial_sprites(), "Bright areas incorrectly brighten actors");
        const auto skew = colors.resolve({7, 0}, {});
        require(skew.sprites[0][2] == rgb(15, 4, 24) && skew.sprites[0][3] == rgb(2, 2, 2),
                "Per-channel and neutral-color ambient ratios differ");
        require(colors.resolve({8, 0}, {}).sprites[4][1] == rgb(1, 2, 7), "Area-specific actor palette override lost");
        for (const auto &palette : skew.scenery) require(palette[0] == 0, "Scenery metadata became an opaque color");
        for (const auto &palette : skew.sprites) require(palette[0] == 0, "Sprite transparent index became opaque");
        rejects([&] { colors.area_at(8192, 0); });
        rejects([&] { colors.area_at(0, 10240); });
        rejects([&] { colors.variants(32); });
        rejects([&] { colors.resolve({1, 1}, flags); });
        rejects([&] { colors.resolve({0, 0}, {}); });
        for (unsigned fault = 0; fault < 6; ++fault) {
            Fixture bad;
            if (fault == 0) bad.bytes.resize(10);
            if (fault == 1) bad.pointer(bad.layout.groups, 0x400001);
            if (fault == 2) bad.word(Fixture::area(0) + 32, 0xffff);
            if (fault == 3) bad.word(Fixture::area(8) + 64, 17);
            if (fault == 4) bad.bytes[bad.layout.sectors] = 255;
            if (fault == 5) --bad.layout.groups_end;
            rejects([&] { WorldPalettes invalid(bad.bytes, bad.layout); });
        }
        Fixture cycle;
        cycle.word(Fixture::area(2), 1);
        cycle.word(Fixture::area(2) + 32, Fixture::area(0));
        WorldPalettes cyclic(cycle.bytes, cycle.layout);
        flags[0] = 0;
        rejects([&] { cyclic.resolve({0, 0}, flags); });
        std::cout << "PASS native area palette branches, ambient tint, overrides, bounds and owned content\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
