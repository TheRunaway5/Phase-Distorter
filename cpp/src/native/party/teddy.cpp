#include "eb/native/party/teddy.hpp"
#include "eb/native/dialogue/substitution_resources.hpp"
#include <stdexcept>

namespace eb::native::party {
std::optional<std::uint8_t> select_teddy_item(
    const State& party, const dialogue::SubstitutionResources& resources) {
    if (party.version() != resources.version())
        throw std::invalid_argument("Teddy selection requires matching party and item regions");
    std::optional<std::uint8_t> selected;
    int selected_ep{};
    for (unsigned ordinal = 0; ordinal < party.controlled_count; ++ordinal) {
        if (ordinal >= party.party_order.size())
            throw std::out_of_range("Teddy selection reached an unowned party-order entry");
        const auto& character = party.character(party.party_order[ordinal]);
        for (const auto item : character.items) {
            if (!item) break;
            const auto properties = resources.item_properties(item);
            if (properties.type != 4) continue;
            // The source compares EP with the signed eight-bit branch macro.
            // Strength is a separate byte read later by the lifecycle routine.
            const unsigned raw_ep = properties.parameters[2];
            const int ep = raw_ep < 0x80 ? int(raw_ep) : int(raw_ep) - 0x100;
            if (!selected || ep < selected_ep) {
                selected = item;
                selected_ep = ep;
            }
        }
    }
    return selected;
}
} // namespace eb::native::party
