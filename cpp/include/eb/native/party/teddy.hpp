#pragma once

#include "eb/native/party/state.hpp"
#include <cstdint>
#include <optional>

namespace eb::native::dialogue { class SubstitutionResources; }

namespace eb::native::party {
// C216DB (US) / C21583 (JP) selection only. Traverse controlled_count entries
// of party_order and each inventory up to its first empty position. Among
// type-four items retain the first with the minimum signed-byte EP value.
// Returns the imported item ID, leaving strength interpretation and the
// remove/add/formation lifecycle to the caller. No party state is mutated.
// Region mismatch or a visited record/item outside owned storage is rejected;
// unvisited entries, including entries after an inventory hole, are not read.
std::optional<std::uint8_t> select_teddy_item(
    const State&, const dialogue::SubstitutionResources&);
} // namespace eb::native::party
