// Source: BATTLE_ACTION_TABLE, PSI_SHIELD_NULLIFY and WEAKEN_SHIELD.
#include "eb/native/battle/action_resources.hpp"
#include <stdexcept>

namespace eb::native::battle {
std::shared_ptr<const ActionResources> ActionResources::import(
    std::span<const std::uint8_t> image, GameVersion version) {
    unsigned table;
    std::array<std::uint32_t, 3> references;
    switch (version) {
    case GameVersion::US:
        table = 0x157b68;
        references = {0xef70d2, 0xef70fa, 0xef7099};
        break;
    case GameVersion::JP:
        table = 0x158b1e;
        references = {0xc735a8, 0xc735ce, 0xc7356e};
        break;
    default: throw std::invalid_argument("Unsupported battle action region");
    }
    constexpr unsigned stride = 12;
    if (table > image.size() || action_count * stride > image.size() - table)
        throw std::invalid_argument("Truncated battle action table");
    auto result = std::shared_ptr<ActionResources>(new ActionResources(version));
    for (unsigned i = 0; i < action_count; ++i)
        result->types_[i] = image[table + i * stride + 2];
    for (unsigned i = 0; i < references.size(); ++i)
        for (unsigned byte = 0; byte < 4; ++byte)
            result->messages_[i][byte] = std::uint8_t(references[i] >> (byte * 8));
    return result;
}
const std::array<std::uint8_t, 4>& ActionResources::message(ShieldMessage message) const {
    return messages_.at(static_cast<unsigned>(message));
}
} // namespace eb::native::battle
