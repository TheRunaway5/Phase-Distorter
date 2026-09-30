#pragma once
#include "eb/native/world_movement.hpp"
#include <algorithm>
#include <vector>

namespace movement_test {
// Independently authored collision patterns: all256 occupancy combinations of
// two rows, with varied low surface/ladder bits and both solid flag bits.
struct Fixture {
    std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x22000);
    eb::native::WorldMapLayout map_layout{{},0x1a000,0x1aa00,0x1c000,0x1c100,0x1c104,0x1c108,
        0x20000,0x21000,0x1c600,0x1c10c,0x1c110,1};
    eb::native::WorldCollisionLayout collision_layout{0x1f000,0x1f040,0x1f080,0x1f0c0,0x1f100,0x1f140,0x1f160};
    eb::native::WorldMovementLayout movement_layout{0x1f180};
    void word(unsigned at, unsigned value) { bytes.at(at) = value; bytes.at(at + 1) = value >> 8; }
    void pointer(unsigned at, unsigned value) {
        value += 0xc00000;
        for (unsigned i = 0; i < 4; ++i) bytes.at(at + i) = value >> (i * 8);
    }
    void compressed_zero(unsigned at, unsigned size) {
        while (size) {
            const unsigned count = std::min(size,1024u), encoded = count - 1;
            bytes.at(at++) = 0xe4 | (encoded >> 8); bytes.at(at++) = encoded; bytes.at(at++) = 0;
            size -= count;
        }
        bytes.at(at) = 0xff;
    }
    Fixture() {
        for (unsigned i = 0; i < 10; ++i) map_layout.block_chunks[i] = i * 0x2800;
        pointer(map_layout.graphics,0x1d000); compressed_zero(0x1d000,0x7001);
        pointer(map_layout.arrangements,0x1d500); compressed_zero(0x1d500,256 * 32);
        pointer(map_layout.collision_pointers,0x1e000);
        pointer(map_layout.animation_properties,0x1c800); word(map_layout.event_pointers,0xc700);
        for (unsigned id = 0; id < 256; ++id) {
            bytes[id] = id;
            word(0x1e000 + id * 2,id * 16);
            for (unsigned cell = 0; cell < 16; ++cell)
                bytes[map_layout.collision_patterns + id * 16 + cell] =
                    ((cell + id) & 15) | ((cell + id) % 3 ? 0 : 0x10) |
                    ((id & (1u << (cell % 8))) ? (cell & 1 ? 0x80 : 0x40) : 0);
        }
        for (unsigned id = 0; id < 17; ++id) {
            word(collision_layout.anchor_x + id * 2,8); word(collision_layout.anchor_y + id * 2,8);
            word(collision_layout.width_cells + id * 2,2); word(collision_layout.height_cells + id * 2,1);
            word(collision_layout.surface_offset_y + id * 2,10);
        }
        for (unsigned i = 0; i < 6; ++i) {
            word(collision_layout.probe_x + i * 2,i % 3 == 0 ? 0xfff8 : i % 3 == 1 ? 0 : 7);
            word(collision_layout.probe_y + i * 2,i < 3 ? 0 : 7);
        }
        for (unsigned i = 0; i < 4; ++i) word(movement_layout.diagonal_probe_masks + i * 2,i & 1 ? 0x33 : 0x1e);
    }
    void pattern(std::array<std::uint8_t,16> flags) {
        std::copy(flags.begin(),flags.end(),bytes.begin() + map_layout.collision_patterns);
    }
    eb::native::WorldMapArea area() const { return eb::native::WorldMap(bytes,map_layout).prepare(0,{}); }
};
}
