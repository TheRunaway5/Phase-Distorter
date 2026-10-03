// Sources: regional ENEMY_CONFIGURATION_TABLE, NPC_AI_TABLE and
// CONSOLATION_ITEM_TABLE; BATTLE_ROUTINE's opening references.
#include "eb/native/battle/encounter_resources.hpp"
#include <stdexcept>

namespace eb::native::battle {
std::shared_ptr<const EncounterResources> EncounterResources::import(
    std::span<const std::uint8_t> image, GameVersion version) {
    unsigned enemies, stride, shift, npcs, consolation;
    std::array<std::uint32_t, 8> messages;
    switch (version) {
    case GameVersion::US:
        enemies = 0x159589; stride = 94; shift = 0;
        npcs = 0x158f23; consolation = 0x23109;
        messages = {0xef78d8, 0xef843f, 0xef8444, 0xef8445, 0xef6c6b, 0xef78f7, 0xef84f3, 0xef8511};
        break;
    case GameVersion::JP:
        enemies = 0x15a440; stride = 77; shift = 17;
        npcs = 0x159dda; consolation = 0x2302e;
        messages = {0xc74718, 0xc70000, 0xc70005, 0xc70006, 0xc7317d, 0xc7472c, 0xc700c2, 0xc700dd};
        break;
    default: throw std::invalid_argument("Unsupported encounter region");
    }
    const auto range = [&](unsigned offset, unsigned bytes) {
        if (offset > image.size() || bytes > image.size() - offset)
            throw std::invalid_argument("Truncated encounter metadata");
        return image.subspan(offset, bytes);
    };
    const auto enemy_data = range(enemies, EnemyResources::count * stride);
    const auto npc_data = range(npcs, 38);
    const auto items = range(consolation, 18);
    auto result = std::shared_ptr<EncounterResources>(new EncounterResources(version));
    for (unsigned id = 0; id < EnemyResources::count; ++id) {
        const auto row = enemy_data.subspan(id * stride, stride);
        auto& e = result->enemies_[id];
        e.music = row[55 - shift]; e.drop_rate = row[87 - shift]; e.item = row[88 - shift];
        for (unsigned i = 0; i < e.opening.size(); ++i) e.opening[i] = row[45 - shift + i];
    }
    for (unsigned id = 0; id < result->npcs_.size(); ++id)
        result->npcs_[id] = {npc_data[id * 2], npc_data[id * 2 + 1]};
    for (unsigned row = 0; row < 2; ++row) {
        result->consolation_[row].enemy = items[row * 9];
        for (unsigned i = 0; i < 8; ++i) result->consolation_[row].items[i] = items[row * 9 + 1 + i];
    }
    for (unsigned m = 0; m < messages.size(); ++m)
        for (unsigned i = 0; i < 4; ++i) result->messages_[m][i] = std::uint8_t(messages[m] >> (i * 8));
    return result;
}
} // namespace eb::native::battle
