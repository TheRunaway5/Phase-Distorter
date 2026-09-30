#pragma once

#include "eb/native/party/state.hpp"

namespace eb::native::party {
// Live borrowed queries; State remains the only party owner and must outlive
// this view. Dialogue owns operand fallback and working-register publication.
class Queries {
  public:
    explicit Queries(const State& state) : state_(state) {}
    Queries(State&&) = delete;
    Queries(const State&&) = delete;
    // UNKNOWN_C190E6 reads any of the six physical list bytes, independently
    // of party_count. Zero/stale/guest IDs remain raw zero-extended bytes.
    std::uint16_t display_character(std::uint16_t one_based_position) const;
    // CHECK_STATUS_GROUP: group8 observes party_status without membership.
    // Other groups first search byte IDs using the full character word. An
    // absent/zero character returns0; a present record's group1..7 returns
    // raw affliction+1 (including256). Access outside owned storage rejects.
    std::uint16_t status(std::uint16_t character, std::uint16_t group) const;
    std::uint16_t controlled_count() const { return state_.controlled_count; }
    // C2277C/C2272F scan live display_order up to controlled_count and exclude
    // only raw affliction0 values1/2. They do not search party membership or
    // follow controlled_order. Bounds are checked at the actual record read.
    std::uint16_t first_conscious() const;
    std::uint16_t conscious_count() const;

  private:
    const State& state_;
    bool conscious_at(unsigned display_index) const;
};
} // namespace eb::native::party
