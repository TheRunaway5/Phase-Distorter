#include "eb/native/npcs/interaction_resources.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::npcs {
namespace {
void require_range(std::span<const std::uint8_t> image, std::size_t first, std::size_t size) {
    if (first > image.size() || size > image.size() - first)
        throw std::invalid_argument("Truncated NPC interaction content");
}
std::uint16_t word(std::span<const std::uint8_t> image, std::size_t first) {
    return std::uint16_t(unsigned(image[first]) | unsigned(image[first + 1]) << 8);
}
std::int16_t signed_word(std::uint16_t value) {
    // Avoid implementation-defined unsigned-to-signed narrowing for negative
    // authored offsets. Every value here fits int16_t after conversion.
    return std::int16_t(value < 0x8000 ? int(value) : int(value) - 0x10000);
}
} // namespace

std::shared_ptr<const InteractionResources>
InteractionResources::import(std::span<const std::uint8_t> image, GameVersion version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported NPC interaction region");
    // include/structs.asm npc_config: 17 bytes; raw type at0, flag word at6,
    // common Talk/Check DWORD at9. CHECK reads the full word at13 for gifts;
    // alternate-text use of that union is a separate item-use service.
    // src/data/map/npc_config.asm has1584 records in each linked program.
    const std::size_t definitions = version == GameVersion::US ? 0x0f8985 : 0x0f89c1;
    // UNKNOWN_C042EF reads eight signed-word pairs from C3E148/C3E158;
    // UNKNOWN_C042C2 reads eight full opposite-direction words at C3E168.
    // JP linked locations are C3E132/C3E142/C3E152 respectively. These
    // offsets locate immutable input assets; no source code is retained.
    const std::size_t x_offsets = version == GameVersion::US ? 0x03e148 : 0x03e132;
    constexpr std::size_t record_size = 17, table_bytes = 8 * 2;
    require_range(image, definitions, npc_count * record_size);
    require_range(image, x_offsets, table_bytes * 3);
    auto result = std::shared_ptr<InteractionResources>(new InteractionResources(version));
    for (unsigned id = 0; id < npc_count; ++id) {
        const auto first = definitions + id * record_size;
        auto &record = result->npcs_[id];
        record.raw_type = image[first];
        std::copy_n(image.begin() + first + 9, record.talk_reference.size(), record.talk_reference.begin());
        record.event_flag = word(image, first + 6);
        record.gift_value = word(image, first + 13);
        std::copy_n(image.begin()+first+13,record.alternate_reference.size(),record.alternate_reference.begin());
    }
    for (unsigned direction = 0; direction < 8; ++direction) {
        const auto first = x_offsets + direction * 2;
        result->probes_[direction] = {signed_word(word(image, first)),
                                     signed_word(word(image, first + table_bytes))};
        result->opposites_[direction] = word(image, first + table_bytes * 2);
    }
    return result;
}
const InteractionRecord &InteractionResources::npc(unsigned id) const { return npcs_.at(id); }
TalkProbeOffset InteractionResources::probe_offset(unsigned direction) const { return probes_.at(direction); }
std::uint16_t InteractionResources::opposite_direction(unsigned direction) const { return opposites_.at(direction); }
} // namespace eb::native::npcs
