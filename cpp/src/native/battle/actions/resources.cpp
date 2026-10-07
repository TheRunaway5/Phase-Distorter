#include "eb/native/battle/actions/resources.hpp"
#include <stdexcept>
#include <algorithm>

namespace eb::native::battle::actions {
std::shared_ptr<const Resources> Resources::import(std::span<const std::uint8_t> image,
                                                  GameVersion version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported battle execution catalog region");
    const unsigned table = version == GameVersion::US ? 0x157b68 : 0x158b1e;
    if (table > image.size() || 318 * 12 > image.size() - table)
        throw std::invalid_argument("Truncated battle execution catalog");
    auto result = std::shared_ptr<Resources>(new Resources(version));
    for (unsigned id = 0; id < 318; ++id) {
        std::uint32_t identity{};
        for (unsigned byte = 0; byte < 4; ++byte)
            identity |= std::uint32_t(image[table + id * 12 + 8 + byte]) << (byte * 8);
        if (!identity)
            continue;
        bool recognized{};
#define ACTION_KIND(name, us, jp) \
        if (identity == (version == GameVersion::US ? us : jp)) { \
            result->kinds_[id] = Kind::name; recognized = true; \
        }
#include "eb/native/battle/actions/kinds.inc"
#undef ACTION_KIND
        if (!recognized)
            throw std::invalid_argument("Unknown authored action identity has no native handler");
    }
#define ACTION_TEXT(name, us, jp) \
    { const std::uint32_t pointer = version == GameVersion::US ? us : jp; \
      auto& key = result->messages_[unsigned(Text::name)]; \
      for (unsigned byte = 0; byte < 4; ++byte) key[byte] = std::uint8_t(pointer >> (8 * byte)); }
#include "eb/native/battle/actions/messages.inc"
#undef ACTION_TEXT
    const unsigned dead = version == GameVersion::US ? 0x4a08d : 0x474f0;
    if (dead > image.size() || 66 > image.size() - dead)
        throw std::invalid_argument("Truncated dead-target action table");
    for (unsigned i = 0; i < 32; ++i)
        result->dead_actions_[i] = std::uint16_t(image[dead + i * 2] | unsigned(image[dead + i * 2 + 1]) << 8);
    if (image[dead + 64] || image[dead + 65])
        throw std::invalid_argument("Dead-target action table leaves its owned extent");
    constexpr unsigned groups = 0x10c60d, begin = 0x10d52d, end = 0x10dfb4;
    if (image.size() < end) throw std::invalid_argument("Truncated battle group catalog");
    for (unsigned group = 0; group < 484; ++group) {
        const unsigned at = groups + group * 8;
        const auto pointer = std::uint32_t(image[at]) | std::uint32_t(image[at+1]) << 8 |
                             std::uint32_t(image[at+2]) << 16 | std::uint32_t(image[at+3]) << 24;
        if (pointer < 0xc00000 + begin || pointer >= 0xc00000 + end)
            throw std::invalid_argument("Battle group pointer leaves imported catalog");
        unsigned cursor = pointer - 0xc00000;
        while (image[cursor] != 255) {
            if (cursor + 3 >= end) throw std::invalid_argument("Unterminated battle group");
            result->groups_[group].push_back(static_cast<std::uint16_t>(image[cursor+1] | unsigned(image[cursor+2]) << 8));
            cursor += 3;
        }
    }
    const unsigned prayers = version == GameVersion::US ? 0x4a2f9 : 0x47766;
    if (prayers > image.size() || 56 > image.size() - prayers)
        throw std::invalid_argument("Truncated prayer catalog");
    for (unsigned i = 0; i < 16; ++i) {
        result->prayers_[i] = image[prayers + i];
        if (result->prayers_[i] >= 10) throw std::invalid_argument("Prayer catalog exceeds owned effects");
    }
    for (unsigned i = 0; i < 10; ++i)
        std::copy_n(image.begin() + prayers + 16 + i * 4, 4, result->prayer_texts_[i].begin());
    const unsigned attack_palette = version == GameVersion::US ? 0x3f8f1 : 0x3f436;
    if (attack_palette > image.size() || 96 > image.size() - attack_palette)
        throw std::invalid_argument("Truncated battle attack palettes");
    for (unsigned palette = 0; palette < 3; ++palette)
        for (unsigned color = 0; color < 16; ++color) {
            const auto at = attack_palette + palette * 32 + color * 2;
            result->attack_palettes_[palette][color] = static_cast<std::uint16_t>(image[at] | unsigned(image[at+1]) << 8);
        }
    unsigned condiment = version == GameVersion::US ? 0x15ea77 : 0x15e9d7;
    for (;;) {
        if (condiment >= image.size()) throw std::invalid_argument("Truncated condiment table");
        if (!image[condiment]) break;
        if (7 > image.size() - condiment) throw std::invalid_argument("Truncated condiment record");
        std::array<std::uint8_t,7> record;
        std::copy_n(image.begin() + condiment, 7, record.begin());
        result->condiments_.push_back(record);
        condiment += 7;
    }
    return result;
}
bool Resources::group_contains(unsigned group, unsigned enemy) const {
    const auto& entries = groups_.at(group);
    return std::find(entries.begin(), entries.end(), enemy) != entries.end();
}
bool Resources::targets_dead(unsigned action) const {
    for (const auto value : dead_actions_) {
        if (!value) break;
        if (value == action) return true;
    }
    return false;
}
} // namespace eb::native::battle::actions
