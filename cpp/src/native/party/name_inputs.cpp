// Source: LOAD_WINDOW_GFX and include/structs.asm char_struct. Serialization
// uses the original little-endian fields, never the host C++ object layout.
#include "eb/native/party/name_inputs.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::party {
PartyNameSnapshot::PartyNameSnapshot(const State& state)
    : extent_(state.version() == GameVersion::JP ? 4u : 53u) {
    for (unsigned i = 0; i < bytes_.size(); ++i) {
        auto& bytes = bytes_[i];
        const auto name = state.name_field(i + 1);
        std::copy(name.begin(), name.end(), bytes.begin());
        if (state.version() == GameVersion::JP) continue;
        const auto& c = state.character(i + 1);
        unsigned offset = unsigned(name.size());
        const auto put = [&](std::uint32_t value, unsigned size) {
            for (unsigned b = 0; b < size; ++b) bytes.at(offset++) = std::uint8_t(value >> (b * 8));
        };
        put(c.level,1); put(c.experience,4); put(c.maximum_hp,2); put(c.maximum_pp,2);
        for (auto status : c.afflictions) put(status,1);
        for (auto value : {c.offense,c.defense,c.speed,c.guts,c.luck,c.vitality,c.iq,
                           c.base_offense,c.base_defense,c.base_speed,c.base_guts,c.base_luck,
                           c.base_vitality,c.base_iq}) put(value,1);
        for (auto item : c.items) put(item,1);
        for (auto equipment : c.equipment) put(equipment,1);
        if (std::find(bytes.begin(),bytes.end(),0) == bytes.end())
            throw std::out_of_range("US party-name run reaches unowned character bytes after offset52");
    }
}
dialogue::PartyNameInputs PartyNameSnapshot::inputs() const & {
    dialogue::PartyNameInputs result;
    for (unsigned i = 0; i < bytes_.size(); ++i)
        result.names[i] = std::span<const std::uint8_t>(bytes_[i]).first(extent_);
    return result;
}
} // namespace eb::native::party
