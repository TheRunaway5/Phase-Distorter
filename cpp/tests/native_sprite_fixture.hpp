#pragma once
#include "eb/native/sprite_resources.hpp"

namespace native_sprite_test {
struct Fixture {
    std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(4096);
    eb::native::SpriteCatalogLayout layout{0, 88, 8, 2, 1};
    Fixture() {
        pointer(0, 32);
        pointer(4, 32); // aliases share the same authored record
        pointer(8, 128);
        bytes[32] = 3;
        bytes[33] = 0x20;
        bytes[34] = 0;
        bytes[35] = 0x1a;
        bytes[40] = 0xc0;
        // Sixteen authored frame references follow the nine-byte header.
        layout.groups_end = 32 + 9 + 32;
        for (unsigned i = 0; i < 16; ++i)
            word(41 + i * 2, 512 | (i & 1));
        bytes[128] = 2;
        bytes[129] = 1;
        for (unsigned mirror = 0; mirror < 2; ++mirror)
            for (unsigned part = 0; part < 2; ++part) {
                const unsigned at = 130 + (mirror * 2 + part) * 5;
                bytes[at] = std::uint8_t(-24 + part * 16);
                bytes[at + 2] = mirror ? 0x40 : 0;
                bytes[at + 3] = std::uint8_t(-8);
                bytes[at + 4] = part ? 0x80 : 0;
            }
        for (unsigned y = 0; y < 24; ++y)
            for (unsigned x = 0; x < 16; ++x) {
                const unsigned color = (x + y * 3) % 16;
                for (unsigned plane = 0; plane < 4; ++plane)
                    if (color & (1u << plane))
                        bytes[512 + ((y / 8) * 2 + x / 8) * 32 + (y & 7) * 2 + (plane / 2) * 16 +
                              (plane & 1)] |= 1u << (7 - (x & 7));
            }
    }
    void word(unsigned at, unsigned value) {
        bytes[at] = value;
        bytes[at + 1] = value >> 8;
    }
    void pointer(unsigned at, unsigned offset) {
        const unsigned value = 0xc00000 + offset;
        for (unsigned i = 0; i < 4; ++i)
            bytes[at + i] = value >> (8 * i);
    }
};
} // namespace native_sprite_test
