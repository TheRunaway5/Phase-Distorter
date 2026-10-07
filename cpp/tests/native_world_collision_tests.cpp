#include "eb/native/world_collision.hpp"
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
    require(caught, "Invalid collision query/content accepted");
}
struct Fixture {
    std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x20000);
    WorldMapLayout map_layout{{}, 0x1a000, 0x1aa00, 0x1c000, 0x1c100, 0x1c104, 0x1c108,
                             0x1c400, 0x1c420, 0x1c600, 0x1c10c, 0x1c110, 1};
    WorldCollisionLayout collision_layout{0x1f000,0x1f040,0x1f080,0x1f0c0,0x1f100,0x1f140,0x1f160};
    void word(unsigned at, unsigned value) { bytes.at(at) = value; bytes.at(at + 1) = value >> 8; }
    void pointer(unsigned at, unsigned value) {
        value += 0xc00000;
        for (unsigned i = 0; i < 4; ++i) bytes.at(at + i) = value >> (i * 8);
    }
    Fixture() {
        for (unsigned i = 0; i < 10; ++i) map_layout.block_chunks[i] = i * 0x2800;
        pointer(map_layout.graphics, 0x1d000); pointer(map_layout.arrangements, 0x1d500);
        pointer(map_layout.collision_pointers, 0x1e000); pointer(map_layout.animation_properties, 0x1c800);
        unsigned at = 0x1d000;
        for (unsigned remaining = 0x7001; remaining;) {
            const unsigned length = std::min(remaining, 1024u), encoded = length - 1;
            bytes[at++] = 0xe4 | (encoded >> 8); bytes[at++] = encoded; bytes[at++] = 0;
            remaining -= length;
        }
        bytes[at] = 0xff;
        bytes[0x1d500] = 0xe4; bytes[0x1d501] = 63; bytes[0x1d502] = 0; bytes[0x1d503] = 0xff;
        word(0x1e002, 16); word(map_layout.event_pointers, 0xc700);
        const std::array<std::uint8_t, 16> pattern{1,2,4,8, 16,32,64,128, 1,4,16,64, 2,8,32,128};
        std::copy(pattern.begin(), pattern.end(), bytes.begin() + map_layout.collision_patterns);
        std::fill_n(bytes.begin() + map_layout.collision_patterns + 16, 16, 0x80);
        bytes[16] = 1; // World block16 uses different flags; cell64 must not alias cell0.
        for (unsigned id = 0; id < 17; ++id) {
            word(collision_layout.anchor_x + id * 2, 8);
            word(collision_layout.anchor_y + id * 2, 8);
            word(collision_layout.width_cells + id * 2, 2);
            word(collision_layout.height_cells + id * 2, 1);
            word(collision_layout.surface_offset_y + id * 2, 10);
        }
        word(collision_layout.width_cells + 2, 0); word(collision_layout.height_cells + 2, 0);
        word(collision_layout.height_cells + 4, 2);
        for (unsigned i = 0; i < 6; ++i) {
            word(collision_layout.probe_x + i * 2, i % 3 == 0 ? 0xfff8 : i % 3 == 1 ? 0 : 7);
            word(collision_layout.probe_y + i * 2, i < 3 ? 0 : 7);
        }
    }
};
}
int main() {
    try {
        Fixture f;
        const WorldMap map(f.bytes, f.map_layout);
        auto area = map.prepare(0, {});
        const WorldCollision collision(f.bytes, f.collision_layout);
        require(collision.shape(0) == CollisionShape{8,8,2,1,10}, "Collision shape import differs");
        require(collision.origin({0,65535},0) == CollisionPoint{65528,1}, "Pixel coordinate wrapping differs");
        require(collision.tile(area,{64,0}).surface_flags == 0x80 &&
                collision.tile(area,{0,0}).surface_flags == 1, "Native collision query aliases a cache slot");
        require(collision.tile(area,{0,1}).ladder_stairs == CollisionCell{0,1} &&
                !collision.tile(area,{1,1}).ladder_stairs, "Ladder bit/position differs");
        require(collision.edge(area,{0,0},0,CollisionEdge::Top,0x8000) == 0x8003 &&
                collision.edge(area,{1,0},0,CollisionEdge::Top) == 7,
                "Aligned/unaligned horizontal samples differ");
        require(collision.edge(area,{0,0},0,CollisionEdge::Bottom) == 3 &&
                collision.edge(area,{0,0},0,CollisionEdge::Right) == 2 &&
                collision.edge(area,{1,1},0,CollisionEdge::Bottom) == 0x70 &&
                collision.edge(area,{1,1},0,CollisionEdge::Left) == 0x11,
                "Edge endpoint or vertical samples differ");
        require(collision.edge(area,{0,0},1,CollisionEdge::Bottom) == 2 &&
                collision.edge(area,{0,0},1,CollisionEdge::Right) == 8,
                "Zero-sized footprint must still sample the wrapped preceding edge");
        require(collision.edge(area,{65535,0},0,CollisionEdge::Top) == 0x0b,
                "Ceiling addition did not wrap before selecting cells");
        require(collision.edge(area,{65528,0},0,CollisionEdge::Top) ==
                    (collision.tile(area,{8191,0}).surface_flags | collision.tile(area,{0,0}).surface_flags) &&
                collision.edge(area,{0,65528},2,CollisionEdge::Left) ==
                    (collision.tile(area,{0,8191}).surface_flags | collision.tile(area,{0,0}).surface_flags),
                "Edge iteration did not wrap at the unsigned16 pixel seam");
        require(collision.perimeter(area,{9,65535},0,0x4000) == 0x4077,
                "Perimeter lost initial flags or an edge");
        require(collision.directional_surface(area,{9,65535},0,CollisionDirection::NorthEast) == 0x47 &&
                collision.directional_surface(area,{9,65535},0,CollisionDirection::SouthWest) == 0x71 &&
                collision.directional_surface(area,{9,65535},0,CollisionDirection::None) == 0,
                "Directional edge selection differs");
        const auto hit = collision.probes(area,{8,1});
        require(hit.blocked == 0 && hit.surface_flags == 0x33 && hit.last_ladder_stairs == CollisionCell{0,1},
                "Six probes, OR flags or ladder ordering differ");
        const auto blocked = collision.probes(area,{16,8});
        require(blocked.blocked == 0x36 && blocked.surface_flags == 0x60 && !blocked.last_ladder_stairs,
                "Obstacle probe bit ordering differs");
        const auto none = collision.probes(area,{16,8},0xc0);
        require(!none.blocked && !none.surface_flags && !none.last_ladder_stairs,
                "Unused probe-selection bits triggered reads");
        Fixture ladders;
        std::fill_n(ladders.bytes.begin() + ladders.map_layout.collision_patterns,16,0x10);
        const auto ladder_area = WorldMap(ladders.bytes,ladders.map_layout).prepare(0,{});
        require(collision.probes(ladder_area,{16,9},0x11).last_ladder_stairs == CollisionCell{2,2} &&
                collision.probes(ladder_area,{16,9},0x01).last_ladder_stairs == CollisionCell{1,1},
                "Last selected ladder hit was replaced by an earlier or unselected probe");
        const auto before = area.blocks();
        for (unsigned i = 0; i < 100; ++i) collision.probes(area,{std::uint16_t(i),0});
        require(area.blocks() == before, "Collision sampling mutated map content");
        auto retained = [&] { Fixture local; return WorldCollision(local.bytes,local.collision_layout); }();
        std::fill(f.bytes.begin(),f.bytes.end(),0);
        require(retained.shape(0) == collision.shape(0), "Collision content retained borrowed storage");
        rejects([&] { collision.shape(17); });
        rejects([&] { collision.edge(area,{},0,CollisionEdge(99)); });
        rejects([&] { collision.directional_surface(area,{},0,CollisionDirection(99)); });
        auto invalid = f.collision_layout; invalid.probe_y = std::numeric_limits<std::uint32_t>::max();
        rejects([&] { WorldCollision malformed(f.bytes,invalid); });
        rejects([&] { WorldCollision malformed({},f.collision_layout); });
        std::cout << "PASS native collision extents, edges, directional surfaces, probes, flags, wrapping and ownership\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
