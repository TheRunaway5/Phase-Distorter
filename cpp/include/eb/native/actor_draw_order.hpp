#pragma once
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>

namespace eb::native {
struct DepthCandidate {
    std::uint16_t depth{};
    std::optional<std::size_t> next;
};
struct DepthSelection {
    std::size_t actor{}, last{};
    std::optional<std::size_t> previous;
    std::uint16_t depth{};
};
// Select one current maximum. Equal depths select the later list member.
// The owner removes it only after that actor's callback and queries again;
// callback changes to remaining actors therefore affect the next selection.
DepthSelection select_actor_depth(std::span<const DepthCandidate> actors, std::size_t first);
} // namespace eb::native
