#include "eb/native/actor_draw_order.hpp"
#include <stdexcept>

namespace eb::native {
DepthSelection select_actor_depth(std::span<const DepthCandidate> actors, std::size_t first) {
    if (first >= actors.size())
        throw std::out_of_range("Invalid first depth candidate");
    DepthSelection result{first, first, {}, actors[first].depth};
    auto current = actors[first].next;
    for (std::size_t visited = 1; current; ++visited) {
        if (visited >= actors.size())
            throw std::runtime_error("Cyclic actor depth list");
        if (*current >= actors.size())
            throw std::out_of_range("Invalid linked depth candidate");
        const auto &actor = actors[*current];
        if (actor.depth >= result.depth) {
            result.actor = *current;
            result.previous = result.last;
            result.depth = actor.depth;
        }
        result.last = *current;
        current = actor.next;
    }
    return result;
}
} // namespace eb::native
