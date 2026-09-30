#include "eb/native/world_movement.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
std::uint8_t probe(const WorldCollision &collision, const WorldMapArea &area,
                   MovementProbeState &state, std::uint8_t selection) {
    const auto result = collision.probes(area,state.origin,selection);
    if (state.surface_write_counter == 1) state.surface_flags = result.surface_flags;
    if (result.last_ladder_stairs) state.ladder_stairs = *result.last_ladder_stairs;
    return result.blocked;
}
bool solid(const WorldMapArea &area, std::uint16_t x, std::uint16_t y) {
    return area.collision(x >> 3,y >> 3) & 0xc0;
}
MovementSteering directed(CollisionDirection direction) { return {direction,false}; }
MovementSteering blocked() { return {CollisionDirection::None,true}; }
}

WorldMovementLayout world_movement_layout(GameVersion) { return {0x200d1}; }
WorldMovement::WorldMovement(std::span<const std::uint8_t> assets, WorldMovementLayout layout) {
    const std::size_t at = layout.diagonal_probe_masks;
    if (at > assets.size() || assets.size() - at < 8)
        throw std::runtime_error("Truncated movement probe masks");
    for (unsigned i = 0; i < diagonal_masks_.size(); ++i)
        diagonal_masks_[i] = assets[at + i * 2] & 0x3f;
}

MovementProbeResult WorldMovement::vertical(const WorldCollision &collision, const WorldMapArea &area,
                                           CollisionDirection direction, MovementProbeState state) const {
    if (direction != CollisionDirection::North && direction != CollisionDirection::South)
        throw std::invalid_argument("Vertical movement needs a north/south direction");
    const bool south = direction == CollisionDirection::South;
    state.surface_flags = 0;
    state.surface_write_counter = wrap(unsigned(state.surface_write_counter) + 1);
    const auto mask = probe(collision,area,state,south ? 0x38 : 0x07);
    state.vertical_obstacles = mask;
    MovementSteering steering;
    // The south routine also compares literal7, despite selecting bits3..5.
    // Preserve that authored behavior instead of changing it to shifted0x38.
    if (mask == 7 || mask == (south ? 0x10 : 0x02)) steering = blocked();
    else if (mask == (south ? 0x08 : 0x01))
        steering = directed(south ? CollisionDirection::SouthEast : CollisionDirection::NorthEast);
    else if (mask == (south ? 0x20 : 0x04) ||
             (mask == (south ? 0x30 : 0x06) && !(state.origin.x & 7)))
        steering = directed(south ? CollisionDirection::SouthWest : CollisionDirection::NorthWest);
    return {state,steering};
}

MovementProbeResult WorldMovement::horizontal(const WorldCollision &collision, const WorldMapArea &area,
                                             CollisionDirection direction, MovementProbeState state) const {
    if (direction != CollisionDirection::West && direction != CollisionDirection::East)
        throw std::invalid_argument("Horizontal movement needs a west/east direction");
    const bool east = direction == CollisionDirection::East;
    const unsigned top_bit = east ? 4 : 1, bottom_bit = east ? 32 : 8, both = top_bit | bottom_bit;
    const int step = east ? 4 : -4;
    state.surface_flags = 0; state.surface_write_counter = 1;
    unsigned obstacles = probe(collision,area,state,std::uint8_t(both));
    bool lookahead = false;
    if (!obstacles) {
        state.origin.x = wrap(unsigned(state.origin.x) + step);
        obstacles = probe(collision,area,state,std::uint8_t(both));
        if (!obstacles) return {state,directed(direction)};
        lookahead = true;
    }
    if (obstacles == both && (state.origin.y & 7))
        return {state,lookahead ? directed(direction) : MovementSteering{}};
    const auto x = wrap(unsigned(state.origin.x) + step);
    const unsigned nearby = unsigned(solid(area,x,wrap(unsigned(state.origin.y) - 2))) |
                            unsigned(solid(area,x,wrap(unsigned(state.origin.y) + 9))) << 1;
    const auto up = east ? CollisionDirection::NorthEast : CollisionDirection::NorthWest;
    const auto down = east ? CollisionDirection::SouthEast : CollisionDirection::SouthWest;
    MovementSteering steering;
    if (obstacles == both) {
        if (nearby == 1) steering = directed(down);
        else if (nearby == 2) steering = directed(up);
        else if (!nearby) steering = directed((state.origin.y & 7) < 4 ? up : down);
    } else if (obstacles == top_bit && !(nearby & 2)) steering = directed(down);
    else if (obstacles == bottom_bit && !(nearby & 1)) steering = directed(up);
    if (lookahead && steering.direction == CollisionDirection::None) steering = directed(direction);
    return {state,steering};
}

MovementProbeResult WorldMovement::diagonal(const WorldCollision &collision, const WorldMapArea &area,
                                           CollisionDirection direction, MovementProbeState state) const {
    const auto value = unsigned(direction);
    if (value > 7 || !(value & 1)) throw std::invalid_argument("Diagonal movement needs an odd direction");
    state.surface_flags = 0;
    state.surface_write_counter = wrap(unsigned(state.surface_write_counter) + 1);
    const auto obstacles = probe(collision,area,state,diagonal_masks_[value / 2]);
    return {state,obstacles ? blocked() : directed(direction)};
}

MovementResolution WorldMovement::resolve(const WorldCollision &collision, const WorldMapArea &area,
                                         MovementRequest request) const {
    const unsigned direction = unsigned(request.direction);
    if (direction > 7) throw std::invalid_argument("Movement resolution needs a compass direction");
    MovementProbeState state{request.origin,0,0,request.previous_vertical_obstacles,request.ladder_stairs};
    MovementProbeResult result;
    if (direction == 0 || direction == 4) {
        result = vertical(collision,area,request.direction,state);
        if (!result.steering.blocked && result.steering.direction == CollisionDirection::None) {
            const auto ladder_x = result.state.ladder_stairs.x;
            const unsigned phase = result.state.origin.y & 7;
            if ((direction == 0 && phase < 5) || (direction == 4 && phase > 3)) {
                auto retry = result.state;
                retry.origin.y = wrap(unsigned(retry.origin.y) + (direction == 0 ? -4 : 4));
                const auto next = vertical(collision,area,request.direction,retry);
                result.state = next.state;
                if (next.steering.direction != CollisionDirection::None) result.steering = next.steering;
            }
            result.state.ladder_stairs.x = ladder_x;
        }
    } else if (direction == 2 || direction == 6) result = horizontal(collision,area,request.direction,state);
    else result = diagonal(collision,area,request.direction,state);
    if (request.pending_interactions) result.state.ladder_stairs.x = 0xffff;
    const bool directed_result = result.steering.direction != CollisionDirection::None;
    return {result.state,result.steering,directed_result ? result.steering.direction : request.direction,
            std::uint16_t(result.state.surface_flags & (directed_result ? 0x3f : 0xffff)),
            directed_result && result.steering.direction != request.direction};
}
} // namespace eb::native
