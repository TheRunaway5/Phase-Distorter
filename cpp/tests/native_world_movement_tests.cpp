#include "native_world_movement_fixture.hpp"
#include <iostream>
#include <limits>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) { if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F &&operation) {
    bool caught = false;
    try { operation(); } catch (const std::exception &) { caught = true; }
    require(caught,"Invalid movement query/content accepted");
}
}
int main() {
    try {
        movement_test::Fixture fixture;
        const WorldCollision collision(fixture.bytes,fixture.collision_layout);
        const WorldMovement movement(fixture.bytes,fixture.movement_layout);
        fixture.pattern({});
        auto open = fixture.area();
        const MovementProbeState initial{{16,16},0xa500,0,0xbeef,{0x1234,0x5678}};
        const auto north = movement.resolve(collision,open,{{16,16},CollisionDirection::North,false,{8,9},0xbeef});
        require(north.final_direction == CollisionDirection::North && !north.redirected &&
                !north.steering.blocked && north.steering.direction == CollisionDirection::None &&
                north.probes.origin == CollisionPoint{16,12} && north.probes.surface_write_counter == 2 &&
                north.surface_flags == 0 && north.probes.ladder_stairs == CollisionCell{8,9},
                "Open north lookahead/counter/latch differs");
        const auto west = movement.horizontal(collision,open,CollisionDirection::West,initial);
        require(west.steering.direction == CollisionDirection::West && west.state.origin == CollisionPoint{12,16} &&
                west.state.surface_write_counter == 1 && west.state.vertical_obstacles == 0xbeef,
                "Open horizontal lookahead differs");
        const auto invalidated = movement.resolve(collision,open,{{16,16},CollisionDirection::East,true,{7,9}});
        require(invalidated.probes.ladder_stairs == CollisionCell{0xffff,9},"Pending interaction altered ladder Y");
        fixture.pattern({0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,
                         0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50});
        auto solid = fixture.area();
        const auto north_wall = movement.vertical(collision,solid,CollisionDirection::North,initial);
        require(north_wall.steering.blocked && north_wall.state.surface_flags == 0x50 &&
                north_wall.state.vertical_obstacles == 7 && north_wall.state.ladder_stairs == CollisionCell{2,2},
                "North solid/ladder result differs");
        const auto south_wall = movement.vertical(collision,solid,CollisionDirection::South,initial);
        require(!south_wall.steering.blocked && south_wall.steering.direction == CollisionDirection::None &&
                south_wall.state.vertical_obstacles == 0x38,"South literal7 source comparison was changed");
        const auto diagonal = movement.diagonal(collision,solid,CollisionDirection::NorthEast,initial);
        require(diagonal.steering.blocked && diagonal.state.surface_flags == 0x50 &&
                diagonal.state.ladder_stairs == CollisionCell{2,2},"Diagonal lost updated probe state");
        auto wrapped_counter = initial; wrapped_counter.surface_write_counter = 0xffff;
        const auto overflow = movement.vertical(collision,solid,CollisionDirection::North,wrapped_counter);
        require(overflow.state.surface_write_counter == 0 && overflow.state.surface_flags == 0 &&
                overflow.state.ladder_stairs == CollisionCell{2,2},"Counter wrap changed surface/ladder policy");
        const auto full = movement.resolve(collision,solid,{{16,16},CollisionDirection::NorthEast,false,{1,2}});
        require(full.steering.blocked && full.final_direction == CollisionDirection::NorthEast &&
                full.surface_flags == 0x50 && !full.redirected,"Blocked movement cleared obstacle flags");
        fixture.pattern({0,0,0,0, 0,0,0,0, 0,0x45,0,0, 0,0,0,0});
        const auto slope = fixture.area();
        const auto redirect = movement.resolve(collision,slope,{{16,16},CollisionDirection::North,false,{4,5}});
        require(redirect.steering.direction == CollisionDirection::NorthEast && redirect.redirected &&
                redirect.final_direction == CollisionDirection::NorthEast && redirect.probes.surface_flags == 0x45 &&
                redirect.surface_flags == 5,"Corner redirect did not preserve raw flags and clear returned obstruction");
        const auto negative = movement.horizontal(collision,open,CollisionDirection::West,{{0,0}});
        require(negative.state.origin.x == 65532,"Horizontal lookahead did not wrap pixel coordinates");
        const auto before = slope.blocks();
        for (unsigned direction = 0; direction < 8; ++direction)
            movement.resolve(collision,slope,{{16,16},CollisionDirection(direction)});
        require(slope.blocks() == before,"Movement resolution mutated map content");
        auto retained = [&] { movement_test::Fixture f; return WorldMovement(f.bytes,f.movement_layout); }();
        require(retained.resolve(collision,slope,{{16,16},CollisionDirection::North}).surface_flags == 5,
                "Movement masks retained borrowed content");
        rejects([&] { movement.resolve(collision,open,{{},CollisionDirection::None}); });
        rejects([&] { movement.horizontal(collision,open,CollisionDirection::North,initial); });
        rejects([&] { movement.vertical(collision,open,CollisionDirection::East,initial); });
        rejects([&] { movement.diagonal(collision,open,CollisionDirection::South,initial); });
        rejects([&] { WorldMovement invalid({},fixture.movement_layout); });
        rejects([&] { WorldMovement invalid(fixture.bytes,{std::numeric_limits<std::uint32_t>::max()}); });
        std::cout << "PASS native movement steering, obstacle flags, retry counters, ladder policy, wrapping and ownership\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
