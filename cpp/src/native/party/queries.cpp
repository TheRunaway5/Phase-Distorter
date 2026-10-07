// Source: C190E6, CHECK_STATUS_GROUP and its C2239D membership helper.
// UPDATE_PARTY associates display order with entity slots, not membership.
#include "eb/native/party/queries.hpp"
#include <stdexcept>

namespace eb::native::party {
std::uint16_t Queries::inventory_item(std::uint16_t character,std::uint16_t position) const {
    if(!character || character>State::character_count || !position || position>14)
        throw std::out_of_range("Item number query leaves six owned inventories");
    return state_.character(character).items[position-1];
}
std::uint16_t Queries::display_character(std::uint16_t position) const {
    if (!position || position > state_.display_order.size())
        throw std::out_of_range("Party display position must be1..6");
    return state_.display_order[position - 1];
}
std::uint16_t Queries::status(std::uint16_t character, std::uint16_t group) const {
    if (group == 8) return std::uint16_t(state_.party_status) + 1;
    bool present = false;
    for (unsigned i = 0; i < state_.party_count; ++i) {
        if (i == state_.party_order.size())
            throw std::out_of_range("Party membership scan exceeds the six owned list bytes");
        if (state_.party_order[i] == character) {
            present = true;
            break;
        }
    }
    // C2239D returns the matched ID itself; a matched zero is still false.
    if (!present || !character) return 0;
    if (character > State::character_count)
        throw std::out_of_range("Status query leaves the six owned character records");
    if (!group || group > 7)
        throw std::out_of_range("Character status group must be1..7");
    return std::uint16_t(state_.character(character).afflictions[group - 1]) + 1;
}
bool Queries::conscious_at(unsigned index) const {
    if (index >= state_.display_order.size())
        throw std::out_of_range("Conscious-party scan leaves the six display-order bytes");
    const auto character = state_.display_order[index];
    if (!character || character > State::character_count)
        throw std::out_of_range("Conscious-party scan leaves the six character records");
    const auto status = state_.character(character).afflictions[0];
    return status != 1 && status != 2;
}
std::uint16_t Queries::first_conscious() const {
    for (unsigned index = 0; index < state_.controlled_count; ++index)
        if (conscious_at(index))
            return state_.display_order[index];
    return 0;
}
std::uint16_t Queries::conscious_count() const {
    std::uint16_t count = 0;
    for (unsigned index = 0; index < state_.controlled_count; ++index)
        if (conscious_at(index))
            ++count;
    return count;
}
std::uint16_t Queries::item_carrier(std::uint16_t selector,std::uint16_t item) const {
    auto find=[&](std::uint16_t character) {
        if(!character || character>State::character_count)
            throw std::out_of_range("Inventory query leaves six owned character records");
        const auto &items=state_.character(character).items;
        for(const auto value:items)if(value==item)return character;
        return std::uint16_t(0);
    };
    if(selector!=0xff)return find(selector);
    for(unsigned index=0;index<state_.controlled_count;++index) {
        if(index>=state_.party_order.size())
            throw std::out_of_range("Inventory query leaves six owned membership bytes");
        if(const auto character=find(state_.party_order[index]))return character;
    }
    return 0;
}
} // namespace eb::native::party
