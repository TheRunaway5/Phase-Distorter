#include "eb/native/npcs/map_text.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::npcs {
namespace {
void require_range(std::span<const std::uint8_t> image, std::size_t start, std::size_t size) {
    if (start > image.size() || size > image.size() - start)
        throw std::invalid_argument("Truncated map-text content");
}
std::uint16_t image_word(std::span<const std::uint8_t> image, std::size_t at) {
    return std::uint16_t(unsigned(image[at]) | unsigned(image[at + 1]) << 8);
}
std::uint32_t reference_value(dialogue::ReferenceKey key) {
    return std::uint32_t(key[0]) | std::uint32_t(key[1]) << 8 | std::uint32_t(key[2]) << 16 |
           std::uint32_t(key[3]) << 24;
}
std::uint32_t advance_word(std::uint32_t reference, unsigned bytes) {
    return (reference & 0xffff0000u) | std::uint16_t(reference + bytes);
}
} // namespace

std::shared_ptr<const MapTextResources>
MapTextResources::import(std::span<const std::uint8_t> image, GameVersion version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported map-text region");
    // Original common/bank0f.asm: DOOR_DATA begins CF0000; its following
    // DOOR_CONFIG_TABLE ends at OVERWORLD_EVENT_MUSIC_PTR_TABLE. Linked US
    // bounds CF264F/CF58EF, JP CF268B/CF592B. The adjacent music is not owned.
    const std::size_t door_bytes = version == GameVersion::US ? 0x58ef : 0x592b;
    // common/bank10.asm: exactly1280 DWORDs precede SCREEN_TRANSITION_CONFIG_TABLE.
    constexpr std::size_t pointer_start = 0x100000, pointer_bytes = 1280 * 4;
    // C065C2 indexes UNKNOWN_C3E230/C3E240's eight word offsets. JP links
    // these two assets at C3E21A/C3E22A. Preserve full words for wrapping adds.
    const std::size_t offset_start = version == GameVersion::US ? 0x03e230 : 0x03e21a;
    require_range(image, 0x0f0000, door_bytes);
    require_range(image, pointer_start, pointer_bytes);
    require_range(image, offset_start, 32);
    auto result = std::shared_ptr<MapTextResources>(new MapTextResources(version));
    result->door_content_.assign(image.begin() + 0x0f0000, image.begin() + 0x0f0000 + door_bytes);
    std::copy_n(image.begin() + pointer_start, pointer_bytes, result->cell_pointers_.begin());
    for (unsigned direction = 0; direction < 8; ++direction)
        result->offsets_[direction] = {image_word(image, offset_start + direction * 2),
                                       image_word(image, offset_start + 16 + direction * 2)};
    return result;
}
std::uint8_t MapTextResources::byte(std::uint32_t reference) const {
    // Authored long indirection consumes only24 bits. These two immutable
    // cartridge banks have equivalent4F/CF and50/D0 content keys. No other
    // bank, overlay, neighboring asset or hardware read is granted here.
    const unsigned bank = (reference >> 16) & 0xff, offset = reference & 0xffff;
    if ((bank == 0xcf || bank == 0x4f) && offset < door_content_.size()) return door_content_[offset];
    if ((bank == 0xd0 || bank == 0x50) && offset < cell_pointers_.size()) return cell_pointers_[offset];
    throw std::out_of_range("Map-text lookup reads outside imported door content");
}
std::uint16_t MapTextResources::word(std::uint32_t reference) const {
    const auto low = byte(reference);
    const auto high = byte(reference + 1);
    return std::uint16_t(unsigned(low) | unsigned(high) << 8);
}
dialogue::ReferenceKey MapTextResources::key(std::uint32_t reference) const {
    // DEREFERENCE_PTR_TO reads the high word first, then the low word. Keep
    // that read order so an invalid owned-content boundary fails at its source
    // access, before the caller commits a partially read reference.
    const auto high = word(reference + 2);
    const auto low = word(reference);
    return {std::uint8_t(low), std::uint8_t(low >> 8), std::uint8_t(high), std::uint8_t(high >> 8)};
}
std::uint8_t MapTextResources::lookup(std::uint16_t x, std::uint16_t y, MapTextState &state) const {
    // C07477 performs both adds and shifts as16-bit operations. Large/wrapped
    // cells can alias a declared pointer; validating x/y as a map rectangle
    // would reject reads which the source actually performs within that table.
    const auto index = std::uint16_t(unsigned(y & 0xffe0u) + (x >> 5));
    const auto offset = std::uint16_t(unsigned(index) * 4);
    auto reference = reference_value(key(0xd00000u | offset));
    const auto count = word(reference);
    reference = advance_word(reference, 2);
    for (unsigned remaining = count; remaining; --remaining) {
        if (byte(reference + 1) == (x & 31u) && (word(reference) & 0xffu) == (y & 31u)) {
            state.door_found = word(reference + 3);
            reference = advance_word(reference, 2);
            state.door_found_type = word(reference) & 0xffu;
            return byte(reference);
        }
        reference = advance_word(reference, 5);
    }
    return 0xff;
}
bool MapTextResources::find_talk(std::uint16_t leader_x, std::uint16_t leader_y, unsigned direction,
                                MapTextState &state) const {
    const auto offsets = offset(direction);
    auto x = std::uint16_t((leader_x >> 3) + unsigned(offsets.x));
    const auto y = std::uint16_t((leader_y >> 3) + unsigned(offsets.y));
    if (direction == 6) --x;
    auto type = lookup(x, y, state);
    if (type == 0xff) type = lookup(std::uint16_t(x + 1), y, state);
    return select_text(type, MapTextKind::Talk, state);
}
MapTextOffset MapTextResources::offset(unsigned direction) const { return offsets_.at(direction); }
bool MapTextResources::select_text(std::uint8_t matched_type, MapTextKind expected, MapTextState &state) const {
    if (expected != MapTextKind::Check && expected != MapTextKind::Talk)
        throw std::invalid_argument("Unsupported map-text selection kind");
    if (matched_type != std::uint8_t(expected)) return false;
    state.unread_type = state.door_found_type;
    state.text = key(0xcf0000u | (state.door_found & 0x7fffu));
    return true;
}
} // namespace eb::native::npcs
